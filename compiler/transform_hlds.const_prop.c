/*
** Automatically generated from `const_prop.m'
** by the Mercury compiler,
** version 10.04.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__const_prop__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 141 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.const_prop.c"
#line 149 "../library/io.int2"
#include "string.mh"

#line 32 "transform_hlds.const_prop.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 36 "transform_hlds.const_prop.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.const_prop.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "transform_hlds.const_prop.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "transform_hlds.const_prop.c"
#line 49 "transform_hlds.const_prop.c"
#include "transform_hlds.const_prop.mh"

#line 52 "transform_hlds.const_prop.c"
#line 53 "transform_hlds.const_prop.c"
#ifndef TRANSFORM_HLDS__CONST_PROP_DECL_GUARD
#define TRANSFORM_HLDS__CONST_PROP_DECL_GUARD

#line 57 "transform_hlds.const_prop.c"
#line 58 "transform_hlds.const_prop.c"

#endif
#line 61 "transform_hlds.const_prop.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0,
	mercury_data_transform_hlds__const_prop__type_ctor_info_arg_val_0;
MR_decl_label10(transform_hlds__const_prop__eval_unify_3_0, 3,2,12,14,11,21,24,25,16,1)
MR_decl_label3(transform_hlds__const_prop__evaluate_call_10_0, 2,3,6)
MR_decl_label10(transform_hlds__const_prop__evaluate_call_2_8_0, 4,6,7,11,12,13,2,16,19,14)
MR_decl_label6(transform_hlds__const_prop__evaluate_call_2_8_0, 22,26,25,28,30,1)
MR_decl_label10(transform_hlds__const_prop__evaluate_det_call_7_0, 6,32,25,40,22,78,71,87,68,115)
MR_decl_label10(transform_hlds__const_prop__evaluate_det_call_7_0, 125,144,160,177,194,210,229,248,264,280)
MR_decl_label10(transform_hlds__const_prop__evaluate_det_call_7_0, 296,312,318,336,348,360,372,390,2403,432)
MR_decl_label10(transform_hlds__const_prop__evaluate_det_call_7_0, 4,442,454,452,466,464,488,477,2405,507)
MR_decl_label4(transform_hlds__const_prop__evaluate_det_call_7_0, 506,520,2374,1)
MR_decl_label5(transform_hlds__const_prop__evaluate_semidet_call_5_0, 103,3,16,19,1)
MR_decl_label10(transform_hlds__const_prop__evaluate_test_5_0, 19,22,25,6,44,47,50,284,61,279)
MR_decl_label4(transform_hlds__const_prop__evaluate_test_5_0, 116,64,278,1)
MR_decl_label4(transform_hlds__const_prop__make_assignment_goal_5_0, 9,10,11,12)
MR_decl_label5(transform_hlds__const_prop__make_construction_goal_5_0, 2,3,7,8,9)
MR_decl_label2(fn__transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__85__1_3_0, 2,4)
MR_decl_label4(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0, 4,6,10,1)
MR_decl_label3(__Unify___transform_hlds__const_prop__arg_val_0_0, 16,5,1)
MR_decl_label5(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0, 3,2,5,9,29)
MR_decl_label5(__Compare___transform_hlds__const_prop__arg_val_0_0, 3,2,7,5,10)
MR_decl_static(transform_hlds__const_prop__evaluate_det_call_7_0)
MR_decl_static(transform_hlds__const_prop__eval_unify_3_0)
MR_decl_static(transform_hlds__const_prop__evaluate_test_5_0)
MR_decl_static(transform_hlds__const_prop__evaluate_semidet_call_5_0)
MR_decl_static(transform_hlds__const_prop__make_assignment_goal_5_0)
MR_decl_static(transform_hlds__const_prop__make_construction_goal_5_0)
MR_decl_static(transform_hlds__const_prop__evaluate_call_2_8_0)
MR_def_extern_entry(transform_hlds__const_prop__evaluate_call_10_0)
MR_decl_static(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0)
MR_decl_static(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0)
MR_decl_static(__Unify___transform_hlds__const_prop__arg_val_0_0)
MR_decl_static(__Compare___transform_hlds__const_prop__arg_val_0_0)
MR_decl_static(fn__transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__85__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_tbmkword(0, 0),
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
MR_CTOR1_ADDR(term, var),
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

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__const_prop__evaluate_call_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__const_prop__evaluate_call_10_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,2),
MR_CTOR0_ADDR(transform_hlds__const_prop, arg_hlds_info)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__const_prop__field_types_arg_hlds_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
};

const MR_ConstString mercury_data_transform_hlds__const_prop__field_names_arg_hlds_info_0_0[] = {
	"arg_var",
	"arg_type",
	"arg_inst"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0 = {
	"arg_hlds_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__const_prop__field_types_arg_hlds_info_0_0,
	mercury_data_transform_hlds__const_prop__field_names_arg_hlds_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[] = {
	&mercury_data_transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[] = {
	&mercury_data_transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

const MR_Integer mercury_data_transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0)),
	"transform_hlds.const_prop",
	"arg_hlds_info",
	{ (void *)mercury_data_transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0 },
	{ (void *)mercury_data_transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0 },
	1,
	4,
	mercury_data_transform_hlds__const_prop__functor_number_map_arg_hlds_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__const_prop__field_types_arg_val_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__const_prop__du_functor_desc_arg_val_0_0 = {
	"const",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__const_prop__field_types_arg_val_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__const_prop__field_types_arg_val_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__const_prop__du_functor_desc_arg_val_0_1 = {
	"var",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__const_prop__field_types_arg_val_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[] = {
	&mercury_data_transform_hlds__const_prop__du_functor_desc_arg_val_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[] = {
	&mercury_data_transform_hlds__const_prop__du_functor_desc_arg_val_0_1

};

const MR_DuPtagLayout mercury_data_transform_hlds__const_prop__du_ptag_ordered_arg_val_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__const_prop__du_stag_ordered_arg_val_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__const_prop__du_stag_ordered_arg_val_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__const_prop__du_name_ordered_arg_val_0[] = {
	&mercury_data_transform_hlds__const_prop__du_functor_desc_arg_val_0_0,
	&mercury_data_transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

const MR_Integer mercury_data_transform_hlds__const_prop__functor_number_map_arg_val_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__const_prop__type_ctor_info_arg_val_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__const_prop__arg_val_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__const_prop__arg_val_0_0)),
	"transform_hlds.const_prop",
	"arg_val",
	{ (void *)mercury_data_transform_hlds__const_prop__du_name_ordered_arg_val_0 },
	{ (void *)mercury_data_transform_hlds__const_prop__du_ptag_ordered_arg_val_0 },
	2,
	4,
	mercury_data_transform_hlds__const_prop__functor_number_map_arg_val_0
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__const_prop__evaluate_call_10_0_1 = {
{
MR_FUNCTION,
"transform_hlds.const_prop",
"transform_hlds.const_prop",
"lambda_const_prop_m_85",
4,
0
},
"transform_hlds.const_prop",
"const_prop.m",
85,
"d1;c14;"
};


MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);
MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);
MR_decl_entry(fn__int__mod_2_0);
MR_decl_entry(fn__int__rem_2_0);
MR_decl_entry(fn__int__bits_per_int_0_0);
MR_decl_entry(fn__int__rem_bits_per_int_1_0);
MR_decl_entry(fn__int__quot_bits_per_int_1_0);
MR_decl_entry(fn__int__times_bits_per_int_1_0);
MR_decl_entry(fn__int__floor_to_multiple_of_bits_per_int_1_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__const_prop_module0)
	MR_init_entry1(transform_hlds__const_prop__evaluate_det_call_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__const_prop__evaluate_det_call_7_0);
	MR_init_label10(transform_hlds__const_prop__evaluate_det_call_7_0,6,32,25,40,22,78,71,87,68,115)
	MR_init_label10(transform_hlds__const_prop__evaluate_det_call_7_0,125,144,160,177,194,210,229,248,264,280)
	MR_init_label10(transform_hlds__const_prop__evaluate_det_call_7_0,296,312,318,336,348,360,372,390,2403,432)
	MR_init_label10(transform_hlds__const_prop__evaluate_det_call_7_0,4,442,454,452,466,464,488,477,2405,507)
	MR_init_label4(transform_hlds__const_prop__evaluate_det_call_7_0,506,520,2374,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'evaluate_det_call'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__const_prop__evaluate_det_call_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i4);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i6);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr8, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr8, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr4,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr4, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr4,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr7, 1) = ((MR_Integer) MR_tfield(3, MR_tempr3, 1) * (MR_Integer) MR_tfield(3, MR_tempr4, 1));
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("+", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i25);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr6, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	MR_r5 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 0);
	MR_r3 = MR_tempr5;
	if (MR_RTAGS_TESTR(MR_tempr5,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i32);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r4, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = ((MR_Integer) MR_tfield(3, MR_r3, 1) + (MR_Integer) MR_tfield(3, MR_tempr1, 1));
	MR_r2 = MR_tfield(1, MR_tempr5, 0);
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i40);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr7, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr5, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr6, 1) = ((MR_Integer) MR_tfield(3, MR_tempr2, 1) - (MR_Integer) MR_tfield(3, MR_tempr1, 1));
	MR_r2 = MR_tfield(1, MR_r5, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r5, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr5, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr6, 1) = ((MR_Integer) MR_tfield(3, MR_tempr2, 1) - (MR_Integer) MR_tfield(3, MR_tempr1, 1));
	MR_r2 = MR_tfield(1, MR_tempr7, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("-", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i68);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i71);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr7, 0), 2);
	MR_r6 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	MR_r5 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r6 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_r6 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 0);
	MR_r5 = MR_tempr5;
	if (MR_RTAGS_TESTR(MR_tempr5,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r6 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i78);
	}
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr6, 1) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(3, MR_tempr5, 1));
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r6;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r4, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = ((MR_Integer) MR_tfield(3, MR_r5, 1) - (MR_Integer) MR_tfield(3, MR_tempr1, 1));
	MR_r2 = MR_tfield(1, MR_tempr6, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i87);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr7, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr5, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr6, 1) = ((MR_Integer) MR_tfield(3, MR_tempr1, 1) + (MR_Integer) MR_tfield(3, MR_tempr2, 1));
	MR_r2 = MR_tfield(1, MR_r5, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r5, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr5, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr6, 1) = ((MR_Integer) MR_tfield(3, MR_tempr1, 1) - (MR_Integer) MR_tfield(3, MR_tempr2, 1));
	MR_r2 = MR_tfield(1, MR_tempr7, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("\\", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i115);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr6, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = ~((MR_Integer) MR_tfield(3, MR_tempr2, 1));
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("//", 2)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i125);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr7, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr4,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr4, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr4,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i432);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("/\\", 2)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i144);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr9 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr9, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr9, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr4,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr7 = MR_tfield(3, MR_tempr4, 2);
	MR_r3 = MR_tempr7;
	if (MR_LTAGS_TEST(MR_tempr7,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr7, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr4,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr8, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr8;
	MR_tfield(3, MR_tempr8, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr8, 1) = ((MR_Integer) MR_tfield(3, MR_tempr3, 1) & (MR_Integer) MR_tfield(3, MR_tempr4, 1));
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("<<", 2)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i160);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr7, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr4,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr4, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr4,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i432);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const(">>", 2)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i177);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr7, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr4,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr4, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr4,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i432);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("\\/", 2)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i194);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr9 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr9, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr9, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr4,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr7 = MR_tfield(3, MR_tempr4, 2);
	MR_r3 = MR_tempr7;
	if (MR_LTAGS_TEST(MR_tempr7,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr7, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr4,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr8, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr8;
	MR_tfield(3, MR_tempr8, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr8, 1) = ((MR_Integer) MR_tfield(3, MR_tempr3, 1) | (MR_Integer) MR_tfield(3, MR_tempr4, 1));
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("mod", 3)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i210);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr7, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr4,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr4, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr4,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	}
	MR_np_call_localret_ent(fn__int__mod_2_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i432);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("rem", 3)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i229);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr7, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr4,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr4, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr4,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	}
	MR_np_call_localret_ent(fn__int__rem_2_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i432);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("xor", 3)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i248);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr6, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = ((MR_Integer) MR_tfield(3, MR_tempr2, 1) ^ (MR_Integer) MR_tfield(3, MR_tempr3, 1));
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("plus", 4)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i264);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr9 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr9, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr9, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr4,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr7 = MR_tfield(3, MR_tempr4, 2);
	MR_r3 = MR_tempr7;
	if (MR_LTAGS_TEST(MR_tempr7,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr7, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr4,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr8, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr8;
	MR_tfield(3, MR_tempr8, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr8, 1) = ((MR_Integer) MR_tfield(3, MR_tempr3, 1) + (MR_Integer) MR_tfield(3, MR_tempr4, 1));
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("minus", 5)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i280);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr6, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = ((MR_Integer) MR_tfield(3, MR_tempr2, 1) - (MR_Integer) MR_tfield(3, MR_tempr3, 1));
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("times", 5)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i296);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr6, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = ((MR_Integer) MR_tfield(3, MR_tempr2, 1) * (MR_Integer) MR_tfield(3, MR_tempr3, 1));
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("bits_per_int", 12)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i312);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__int__bits_per_int_0_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i432);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("unchecked_rem", 13)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i318);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr7, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr6, 1) = ((MR_Integer) MR_tempr3 % (MR_Integer) MR_r2);
	MR_r2 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("rem_bits_per_int", 16)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i336);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr5, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__int__rem_bits_per_int_1_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i432);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("quot_bits_per_int", 17)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i348);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr5, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__int__quot_bits_per_int_1_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i432);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("times_bits_per_int", 18)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i360);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr5, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__int__times_bits_per_int_1_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i432);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,360)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("unchecked_quotient", 18)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i372);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr7, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr6, 1) = ((MR_Integer) MR_tempr3 / (MR_Integer) MR_r2);
	MR_r2 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,372)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("unchecked_left_shift", 20)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i390);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr6, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = ((MR_Integer) MR_tfield(3, MR_tempr2, 1) << (MR_Integer) MR_tfield(3, MR_tempr3, 1));
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,390)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("unchecked_right_shift", 21)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2403);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr6, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = ((MR_Integer) MR_tfield(3, MR_tempr2, 1) >> (MR_Integer) MR_tfield(3, MR_tempr3, 1));
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,2403)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("floor_to_multiple_of_bits_per_int", 33)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr5, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__int__floor_to_multiple_of_bits_per_int_1_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i432);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,432)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2405);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tempr10 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr10, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr10, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_r7 = MR_tempr4;
	MR_tempr2 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i442);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr5,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr6 = MR_tfield(3, MR_tempr5, 2);
	if (MR_LTAGS_TEST(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr7 = MR_tfield(1, MR_tempr6, 0);
	MR_tempr5 = MR_tfield(0, MR_tempr7, 0);
	if (MR_RTAGS_TESTR(MR_tempr5,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr8 = MR_tfield(0, MR_tempr7, 1);
	if (MR_LTAGS_TESTR(MR_tempr8,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr7 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TESTR(MR_tempr7,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr9;
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr9, 1) = MR_float_to_word((MR_word_to_float(MR_tfield(3, MR_tempr2, 1)) * MR_word_to_float(MR_tfield(3, MR_tempr5, 1))));
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,442)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("+", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i452);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_r5 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i454);
	}
	MR_tempr1 = MR_tfield(0, MR_r7, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,454)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(0, MR_r7, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_r4, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr6, 1) = MR_float_to_word((MR_word_to_float(MR_tfield(3, MR_tempr1, 1)) + MR_word_to_float(MR_tfield(3, MR_tempr2, 1))));
	MR_r2 = MR_tfield(1, MR_tempr7, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,452)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("-", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i464);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_r5 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i466);
	}
	MR_tempr1 = MR_tfield(0, MR_r7, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(3, MR_tempr1, 1));
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,466)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr1 = MR_tfield(0, MR_r7, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_r4, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr6, 1) = MR_float_to_word((MR_word_to_float(MR_tfield(3, MR_tempr1, 1)) - MR_word_to_float(MR_tfield(3, MR_tempr2, 1))));
	MR_r2 = MR_tfield(1, MR_tempr7, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,464)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("/", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i477);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_r7, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr7, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	if ((MR_word_to_float(MR_r2) == (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i488);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,488)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,477)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("unchecked_quotient", 18)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr8, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr2 = MR_tfield(0, MR_r7, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr8, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr5, 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if ((MR_word_to_float(MR_tempr4) == (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i2374);
	}
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr7, 1) = MR_float_to_word((MR_word_to_float(MR_tempr3) / MR_word_to_float(MR_tempr4)));
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,2405)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("string", 6)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_r6 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("++", 2)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i507);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i506);
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,507)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("append", 6)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r4, 0);
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_r2 = MR_tfield(1, MR_r5, 0);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,506)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_sv(1), 2);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_det_call_7_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__const_prop__evaluate_det_call_7_0_i520);
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,520)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,2374)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__const_prop__evaluate_det_call_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(transform_hlds__const_prop_module1)
	MR_init_entry1(transform_hlds__const_prop__eval_unify_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__const_prop__eval_unify_3_0);
	MR_init_label10(transform_hlds__const_prop__eval_unify_3_0,3,2,12,14,11,21,24,25,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eval_unify'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__const_prop__eval_unify_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__const_prop__eval_unify_3_0_i3);
MR_def_label(transform_hlds__const_prop__eval_unify_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__eval_unify_3_0_i2);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__const_prop__eval_unify_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__eval_unify_3_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__eval_unify_3_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__eval_unify_3_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_sv(2), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__eval_unify_3_0_i1);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__eval_unify_3_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__eval_unify_3_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		transform_hlds__const_prop__eval_unify_3_0_i12);
MR_def_label(transform_hlds__const_prop__eval_unify_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__eval_unify_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__const_prop__eval_unify_3_0_i14);
MR_def_label(transform_hlds__const_prop__eval_unify_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__eval_unify_3_0_i11);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__const_prop__eval_unify_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		transform_hlds__const_prop__eval_unify_3_0_i21);
MR_def_label(transform_hlds__const_prop__eval_unify_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__eval_unify_3_0_i16);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__const_prop__eval_unify_3_0_i24);
MR_def_label(transform_hlds__const_prop__eval_unify_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__const_prop__eval_unify_3_0_i25);
MR_def_label(transform_hlds__const_prop__eval_unify_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) == MR_r1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__eval_unify_3_0_i1);
	}
MR_def_label(transform_hlds__const_prop__eval_unify_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__const_prop__eval_unify_3_0,1)
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


MR_BEGIN_MODULE(transform_hlds__const_prop_module2)
	MR_init_entry1(transform_hlds__const_prop__evaluate_test_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__const_prop__evaluate_test_5_0);
	MR_init_label10(transform_hlds__const_prop__evaluate_test_5_0,19,22,25,6,44,47,50,284,61,279)
	MR_init_label4(transform_hlds__const_prop__evaluate_test_5_0,116,64,278,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'evaluate_test'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__const_prop__evaluate_test_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr9 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr9, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i6);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr9, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	MR_r4 = MR_tempr3;
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr2, 2);
	MR_r3 = MR_tempr4;
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_r4 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_r4 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr5, 0);
	MR_r3 = MR_tempr6;
	if (MR_RTAGS_TESTR(MR_tempr6,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr7 = MR_tfield(0, MR_tempr5, 0);
	MR_r4 = MR_tempr7;
	if (MR_RTAGS_TESTR(MR_tempr7,3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("<", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i19);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr6, 1);
	MR_tempr8 = MR_tfield(3, MR_tempr7, 1);
	if (((MR_Integer) MR_tempr2 >= (MR_Integer) MR_tempr8)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i279);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const(">", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	MR_tempr2 = MR_tfield(3, MR_r4, 1);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i279);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("=<", 2)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	MR_tempr2 = MR_tfield(3, MR_r4, 1);
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i279);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const(">=", 2)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	MR_tempr2 = MR_tfield(3, MR_r4, 1);
	if (((MR_Integer) MR_tempr1 < (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i279);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i284);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr8, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r4, 0), 2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr8, 0), 2);
	MR_r4 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_r4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 0);
	MR_r3 = MR_tempr5;
	if (MR_RTAGS_TESTR(MR_tempr5,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr4, 0);
	MR_r4 = MR_tempr6;
	if (MR_RTAGS_TESTR(MR_tempr6,3,2)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("<", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i44);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr5, 1);
	MR_tempr7 = MR_tfield(3, MR_tempr6, 1);
	if ((MR_word_to_float(MR_tempr1) >= MR_word_to_float(MR_tempr7))) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i279);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const(">", 1)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	MR_tempr2 = MR_tfield(3, MR_r4, 1);
	if ((MR_word_to_float(MR_tempr1) <= MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i279);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("=<", 2)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i50);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	MR_tempr2 = MR_tfield(3, MR_r4, 1);
	if ((MR_word_to_float(MR_tempr1) > MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i279);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const(">=", 2)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i278);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	MR_tempr2 = MR_tfield(3, MR_r4, 1);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i279);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("private_builtin", 15)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("typed_unify", 11)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(transform_hlds__const_prop__eval_unify_3_0,
		transform_hlds__const_prop__evaluate_test_5_0_i61);
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i1);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i64);
	}
	MR_GOTO_LAB(transform_hlds__const_prop__evaluate_test_5_0_i116);
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__const_prop__eval_unify_3_0);
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__const_prop__evaluate_test_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__const_prop_module3)
	MR_init_entry1(transform_hlds__const_prop__evaluate_semidet_call_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__const_prop__evaluate_semidet_call_5_0);
	MR_init_label5(transform_hlds__const_prop__evaluate_semidet_call_5_0,103,3,16,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'evaluate_semidet_call'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__const_prop__evaluate_semidet_call_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__const_prop__evaluate_semidet_call_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i3);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("dynamic_cast", 12)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("private_builtin", 15);
	MR_r2 = (MR_Word) MR_string_const("typed_unify", 11);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	/* continue */ } /* end while */
MR_def_label(transform_hlds__const_prop__evaluate_semidet_call_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("private_builtin", 15)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("typed_unify", 11)) != 0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i1);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i1);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr3, 0);
	MR_r1 = MR_tfield(1, MR_tempr5, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__const_prop__eval_unify_3_0,
		transform_hlds__const_prop__evaluate_semidet_call_5_0_i16);
MR_def_label(transform_hlds__const_prop__evaluate_semidet_call_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i1);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_semidet_call_5_0_i19);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__const_prop__evaluate_semidet_call_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__const_prop__evaluate_semidet_call_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_set_var_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);

MR_BEGIN_MODULE(transform_hlds__const_prop_module4)
	MR_init_entry1(transform_hlds__const_prop__make_assignment_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__const_prop__make_assignment_goal_5_0);
	MR_init_label4(transform_hlds__const_prop__make_assignment_goal_5_0,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_assignment_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__const_prop__make_assignment_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(2, MR_tempr2, 1) = MR_tfield(0, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_tempr5;
	MR_r1 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__const_prop__make_assignment_goal_5_0_i9);
MR_def_label(transform_hlds__const_prop__make_assignment_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_set_var_4_0,
		transform_hlds__const_prop__make_assignment_goal_5_0_i10);
MR_def_label(transform_hlds__const_prop__make_assignment_goal_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__const_prop__make_assignment_goal_5_0_i11);
MR_def_label(transform_hlds__const_prop__make_assignment_goal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__const_prop__make_assignment_goal_5_0_i12);
MR_def_label(transform_hlds__const_prop__make_assignment_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__make_const_construction_3_0);

MR_BEGIN_MODULE(transform_hlds__const_prop_module5)
	MR_init_entry1(transform_hlds__const_prop__make_construction_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__const_prop__make_construction_goal_5_0);
	MR_init_label5(transform_hlds__const_prop__make_construction_goal_5_0,2,3,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_construction_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__const_prop__make_construction_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		transform_hlds__const_prop__make_construction_goal_5_0_i2);
MR_def_label(transform_hlds__const_prop__make_construction_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__const_prop__make_construction_goal_5_0_i3);
MR_def_label(transform_hlds__const_prop__make_construction_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_set_var_4_0,
		transform_hlds__const_prop__make_construction_goal_5_0_i7);
MR_def_label(transform_hlds__const_prop__make_construction_goal_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__const_prop__make_construction_goal_5_0_i8);
MR_def_label(transform_hlds__const_prop__make_construction_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__const_prop__make_construction_goal_5_0_i9);
MR_def_label(transform_hlds__const_prop__make_construction_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__fail_goal_expr_0_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_expr_0_0);

MR_BEGIN_MODULE(transform_hlds__const_prop_module6)
	MR_init_entry1(transform_hlds__const_prop__evaluate_call_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__const_prop__evaluate_call_2_8_0);
	MR_init_label10(transform_hlds__const_prop__evaluate_call_2_8_0,4,6,7,11,12,13,2,16,19,14)
	MR_init_label6(transform_hlds__const_prop__evaluate_call_2_8_0,22,26,25,28,30,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'evaluate_call_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__const_prop__evaluate_call_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r4 = MR_r5;
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__const_prop__evaluate_det_call_7_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i4);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_call_2_8_0_i2);
	}
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i6);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i7);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_set_var_4_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i11);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i12);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i13);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__const_prop__evaluate_test_5_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i16);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_call_2_8_0_i14);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_call_2_8_0_i19);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_expr_0_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i26);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_expr_0_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i26);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__const_prop__evaluate_semidet_call_5_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i22);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_call_2_8_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_call_2_8_0_i25);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_expr_0_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i26);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__const_prop__evaluate_call_2_8_0_i28);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__const_prop__make_construction_goal_5_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i30);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r5, 0);
	MR_r2 = MR_tfield(1, MR_r4, 0);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__const_prop__make_assignment_goal_5_0,
		transform_hlds__const_prop__evaluate_call_2_8_0_i30);
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__const_prop__evaluate_call_2_8_0,1)
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

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__const_prop_module7)
	MR_init_entry1(transform_hlds__const_prop__evaluate_call_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__const_prop__evaluate_call_10_0);
	MR_init_label3(transform_hlds__const_prop__evaluate_call_10_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'evaluate_call'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__const_prop__evaluate_call_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r8;
	MR_r1 = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__const_prop__evaluate_call_10_0_i2);
MR_def_label(transform_hlds__const_prop__evaluate_call_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 614;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__const_prop__evaluate_call_10_0_i3);
MR_def_label(transform_hlds__const_prop__evaluate_call_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__85__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__const_prop, arg_hlds_info);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__const_prop__evaluate_call_10_0_i6);
MR_def_label(transform_hlds__const_prop__evaluate_call_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(transform_hlds__const_prop__evaluate_call_2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(transform_hlds__const_prop_module8)
	MR_init_entry1(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__const_prop__arg_hlds_info_0_0);
	MR_init_label4(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0_i10);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___transform_hlds__const_prop__arg_hlds_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___transform_hlds__const_prop__arg_hlds_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(transform_hlds__const_prop_module9)
	MR_init_entry1(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__const_prop__arg_hlds_info_0_0);
	MR_init_label5(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___transform_hlds__const_prop__arg_hlds_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___transform_hlds__const_prop__arg_hlds_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__const_prop_module10)
	MR_init_entry1(__Unify___transform_hlds__const_prop__arg_val_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__const_prop__arg_val_0_0);
	MR_init_label3(__Unify___transform_hlds__const_prop__arg_val_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__const_prop__arg_val_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__const_prop__arg_val_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__const_prop__arg_val_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__const_prop__arg_val_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__cons_id_0_0);
	}
MR_def_label(__Unify___transform_hlds__const_prop__arg_val_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__const_prop__arg_val_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__const_prop__arg_val_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___transform_hlds__const_prop__arg_hlds_info_0_0);
MR_def_label(__Unify___transform_hlds__const_prop__arg_val_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(transform_hlds__const_prop_module11)
	MR_init_entry1(__Compare___transform_hlds__const_prop__arg_val_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__const_prop__arg_val_0_0);
	MR_init_label5(__Compare___transform_hlds__const_prop__arg_val_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__const_prop__arg_val_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__const_prop__arg_val_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__const_prop__arg_val_0_0_i2);
MR_def_label(__Compare___transform_hlds__const_prop__arg_val_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__const_prop__arg_val_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__const_prop__arg_val_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__const_prop__arg_val_0_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__cons_id_0_0);
MR_def_label(__Compare___transform_hlds__const_prop__arg_val_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__const_prop__arg_val_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__const_prop__arg_val_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__const_prop__arg_val_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___transform_hlds__const_prop__arg_hlds_info_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__const_prop_module12)
	MR_init_entry1(fn__transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__85__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__85__1_3_0);
	MR_init_label2(fn__transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__85__1_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__evaluate_call__85__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__85__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		fn__transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__85__1_3_0_i2);
MR_def_label(fn__transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__85__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__85__1_3_0_i4);
MR_def_label(fn__transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__85__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__const_prop_maybe_bunch_0(void)
{
	transform_hlds__const_prop_module0();
	transform_hlds__const_prop_module1();
	transform_hlds__const_prop_module2();
	transform_hlds__const_prop_module3();
	transform_hlds__const_prop_module4();
	transform_hlds__const_prop_module5();
	transform_hlds__const_prop_module6();
	transform_hlds__const_prop_module7();
	transform_hlds__const_prop_module8();
	transform_hlds__const_prop_module9();
	transform_hlds__const_prop_module10();
	transform_hlds__const_prop_module11();
	transform_hlds__const_prop_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__const_prop__init(void);
void mercury__transform_hlds__const_prop__init_type_tables(void);
void mercury__transform_hlds__const_prop__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__const_prop__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__const_prop__init_complexity_procs(void);
#endif

void mercury__transform_hlds__const_prop__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__const_prop_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0,
		transform_hlds__const_prop__arg_hlds_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__const_prop__type_ctor_info_arg_val_0,
		transform_hlds__const_prop__arg_val_0_0);
	mercury__transform_hlds__const_prop__init_debugger();
}

void mercury__transform_hlds__const_prop__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__const_prop__type_ctor_info_arg_val_0);
	}
}


void mercury__transform_hlds__const_prop__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__const_prop__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__const_prop);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__const_prop__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
