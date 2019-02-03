/*
** Automatically generated from `call_gen.m'
** by the Mercury compiler,
** version 11.07-beta-2011-07-20, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__call_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.call_gen.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.call_gen.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.call_gen.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ll_backend.call_gen.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.call_gen.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ll_backend.call_gen.c"
#line 49 "ll_backend.call_gen.c"
#include "ll_backend.call_gen.mh"

#line 52 "ll_backend.call_gen.c"
#line 53 "ll_backend.call_gen.c"
#ifndef LL_BACKEND__CALL_GEN_DECL_GUARD
#define LL_BACKEND__CALL_GEN_DECL_GUARD

#line 57 "ll_backend.call_gen.c"
#line 58 "ll_backend.call_gen.c"

#endif
#line 61 "ll_backend.call_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
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

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__call_gen__type_ctor_info_known_call_variant_0;
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0, 11,13,9,15,4,3,20,21,23,25)
MR_decl_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0, 27,29,30,31,22,77)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0, 4,5,6,7,8,9,10,11,13,16)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0, 17,18,19,20,21,22,23,15,24,25)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0, 26,27,28,29,30,31,32,33,34,35)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0, 36,37,38,39,41,52,64,65,66,67)
MR_decl_label2(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0, 68,69)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0, 8,5,14,16,3,32,36,38,43,30)
MR_decl_label1(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0, 44)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0, 2,5,4,7,8,9,10,11)
MR_decl_label9(ll_backend__call_gen__call_comment_4_0, 3,4,2,5,7,8,9,10,11)
MR_decl_label2(ll_backend__call_gen__extra_livevals_from_3_0, 4,2)
MR_decl_label7(ll_backend__call_gen__find_nonlive_outputs_4_0, 36,3,20,5,9,7,12)
MR_decl_label4(ll_backend__call_gen__generate_assign_builtin_5_0, 4,6,2,8)
MR_decl_label10(ll_backend__call_gen__generate_builtin_7_0, 2,3,4,7,5,10,11,12,13,14)
MR_decl_label10(ll_backend__call_gen__generate_builtin_7_0, 16,20,25,22,28,29,33,34,27,18)
MR_decl_label5(ll_backend__call_gen__generate_builtin_7_0, 40,41,42,39,37)
MR_decl_label10(ll_backend__call_gen__generate_call_8_0, 2,4,5,6,7,9,11,10,8,14)
MR_decl_label10(ll_backend__call_gen__generate_call_8_0, 15,16,17,18,19,20,21,23,30,22)
MR_decl_label10(ll_backend__call_gen__generate_call_8_0, 38,39,40,41,46,47,48,50,53,59)
MR_decl_label6(ll_backend__call_gen__generate_call_8_0, 60,61,49,62,63,64)
MR_decl_label8(ll_backend__call_gen__generate_event_attributes_6_0, 5,48,11,10,8,15,7,16)
MR_decl_label10(ll_backend__call_gen__generate_simple_test_5_0, 4,5,8,7,9,6,12,11,14,16)
MR_decl_label5(ll_backend__call_gen__generate_simple_test_5_0, 3,17,20,19,22)
MR_decl_label6(ll_backend__call_gen__generic_call_info_7_0, 7,8,3,17,18,13)
MR_decl_label3(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0, 7,8,2)
MR_decl_label10(ll_backend__call_gen__handle_call_failure_5_0, 4,5,8,14,15,18,19,20,3,22)
MR_decl_label4(ll_backend__call_gen__input_arg_locs_2_0, 8,9,4,2)
MR_decl_label6(ll_backend__call_gen__kill_dead_input_vars_5_0, 2,4,5,6,7,8)
MR_decl_label4(ll_backend__call_gen__output_arg_locs_2_0, 8,9,4,2)
MR_decl_label6(ll_backend__call_gen__prepare_for_call_5_0, 2,4,6,5,3,9)
MR_decl_label7(ll_backend__call_gen__rebuild_registers_5_0, 39,4,9,11,12,5,38)
MR_decl_label7(fn__ll_backend__call_gen__convert_simple_expr_1_0, 3,6,38,12,13,11,15)
MR_decl_static(ll_backend__call_gen__prepare_for_call_5_0)
MR_decl_static(ll_backend__call_gen__handle_call_failure_5_0)
MR_decl_static(ll_backend__call_gen__call_comment_4_0)
MR_decl_static(ll_backend__call_gen__find_nonlive_outputs_4_0)
MR_decl_static(ll_backend__call_gen__kill_dead_input_vars_5_0)
MR_decl_static(ll_backend__call_gen__rebuild_registers_5_0)
MR_def_extern_entry(ll_backend__call_gen__generate_call_8_0)
MR_def_extern_entry(ll_backend__call_gen__generic_call_info_7_0)
MR_decl_static(ll_backend__call_gen__extra_livevals_from_3_0)
MR_decl_static(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0)
MR_decl_static(ll_backend__call_gen__generate_event_attributes_6_0)
MR_decl_static(fn__ll_backend__call_gen__convert_simple_expr_1_0)
MR_decl_static(ll_backend__call_gen__generate_assign_builtin_5_0)
MR_def_extern_entry(ll_backend__call_gen__generate_generic_call_9_0)
MR_decl_static(ll_backend__call_gen__generate_simple_test_5_0)
MR_def_extern_entry(ll_backend__call_gen__generate_builtin_7_0)
MR_def_extern_entry(ll_backend__call_gen__input_arg_locs_2_0)
MR_def_extern_entry(ll_backend__call_gen__output_arg_locs_2_0)
MR_def_extern_entry(__Unify___ll_backend__call_gen__known_call_variant_0_0)
MR_def_extern_entry(__Compare___ll_backend__call_gen__known_call_variant_0_0)
MR_def_extern_entry(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
0,
1
}
},
{
{
1,
0
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
3
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_TAG_COMMON(1,0,0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_2 mercury_common_2[5] =
{
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
MR_TAG_COMMON(1,0,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,2),
MR_TAG_COMMON(1,2,3)
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
2,
MR_tbmkword(0, 0)
},
{
1,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__call_gen__generate_builtin_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_code_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__call_gen__generate_builtin_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,1),
MR_CTOR0_ADDR(ll_backend__code_info, code_info),
MR_CTOR0_ADDR(ll_backend__code_info, code_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ll_backend__code_info, code_info),
MR_COMMON(2,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

MR_decl_entry(ll_backend__code_info__magically_put_var_in_unused_reg_3_0);
static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(ll_backend__code_info__magically_put_var_in_unused_reg_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,2,0),
MR_CTOR0_ADDR(hlds__hlds_pred, arg_info)
}
},
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0 = {
	"ho_call_known_num",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1 = {
	"ho_call_unknown",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__call_gen__enum_value_ordered_known_call_variant_0[] = {
	&mercury_data_ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
	&mercury_data_ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__call_gen__enum_name_ordered_known_call_variant_0[] = {
	&mercury_data_ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
	&mercury_data_ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

const MR_Integer mercury_data_ll_backend__call_gen__functor_number_map_known_call_variant_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__call_gen__type_ctor_info_known_call_variant_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__call_gen__known_call_variant_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__call_gen__known_call_variant_0_0)),
	"ll_backend.call_gen",
	"known_call_variant",
	{ (void *)mercury_data_ll_backend__call_gen__enum_name_ordered_known_call_variant_0 },
	{ (void *)mercury_data_ll_backend__call_gen__enum_value_ordered_known_call_variant_0 },
	2,
	4,
	mercury_data_ll_backend__call_gen__functor_number_map_known_call_variant_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_1 = {
{
MR_FUNCTION,
"ll_backend.code_info",
"ll_backend.code_info",
"variable_type",
3,
0
},
"ll_backend.call_gen",
"call_gen.m",
195,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__call_gen__generate_builtin_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.code_info",
"ll_backend.code_info",
"magically_put_var_in_unused_reg",
3,
0
},
"ll_backend.call_gen",
"call_gen.m",
647,
"34"
};


MR_decl_entry(ll_backend__code_info__succip_is_used_2_0);
MR_decl_entry(ll_backend__code_info__may_use_nondet_tailcall_2_0);
MR_decl_entry(ll_backend__code_info__set_resume_point_and_frame_to_unknown_2_0);
MR_decl_entry(ll_backend__trace_gen__trace_prepare_for_call_2_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module0)
	MR_init_entry1(ll_backend__call_gen__prepare_for_call_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__prepare_for_call_5_0);
	MR_init_label6(ll_backend__call_gen__prepare_for_call_5_0,2,4,6,5,3,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_for_call'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__call_gen__prepare_for_call_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__succip_is_used_2_0,
		ll_backend__call_gen__prepare_for_call_5_0_i2);
MR_def_label(ll_backend__call_gen__prepare_for_call_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__call_gen__prepare_for_call_5_0_i4);
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__call_gen__prepare_for_call_5_0_i3);
MR_def_label(ll_backend__call_gen__prepare_for_call_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__call_gen__prepare_for_call_5_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__may_use_nondet_tailcall_2_0,
		ll_backend__call_gen__prepare_for_call_5_0_i6);
MR_def_label(ll_backend__call_gen__prepare_for_call_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__set_resume_point_and_frame_to_unknown_2_0,
		ll_backend__call_gen__prepare_for_call_5_0_i3);
MR_def_label(ll_backend__call_gen__prepare_for_call_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 1);
MR_def_label(ll_backend__call_gen__prepare_for_call_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ll_backend__trace_gen__trace_prepare_for_call_2_0,
		ll_backend__call_gen__prepare_for_call_5_0_i9);
MR_def_label(ll_backend__call_gen__prepare_for_call_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(ll_backend__code_info__generate_failure_3_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);
MR_decl_entry(fn__cord__empty_0_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module1)
	MR_init_entry1(ll_backend__call_gen__handle_call_failure_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__handle_call_failure_5_0);
	MR_init_label10(ll_backend__call_gen__handle_call_failure_5_0,4,5,8,14,15,18,19,20,3,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_call_failure'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__call_gen__handle_call_failure_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__call_gen__handle_call_failure_5_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__call_gen__handle_call_failure_5_0_i4);
MR_def_label(ll_backend__call_gen__handle_call_failure_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(ll_backend__call_gen__handle_call_failure_5_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__code_info__generate_failure_3_0);
MR_def_label(ll_backend__call_gen__handle_call_failure_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__call_gen__handle_call_failure_5_0_i8);
MR_def_label(ll_backend__call_gen__handle_call_failure_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("test for success", 16);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__call_gen__handle_call_failure_5_0_i14);
MR_def_label(ll_backend__call_gen__handle_call_failure_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__call_gen__handle_call_failure_5_0_i15);
MR_def_label(ll_backend__call_gen__handle_call_failure_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__call_gen__handle_call_failure_5_0_i18);
MR_def_label(ll_backend__call_gen__handle_call_failure_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__handle_call_failure_5_0_i19);
MR_def_label(ll_backend__call_gen__handle_call_failure_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__handle_call_failure_5_0_i20);
MR_def_label(ll_backend__call_gen__handle_call_failure_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__call_gen__handle_call_failure_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__call_gen__handle_call_failure_5_0_i22);
MR_def_label(ll_backend__call_gen__handle_call_failure_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_auto_comments_2_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module2)
	MR_init_entry1(ll_backend__call_gen__call_comment_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__call_comment_4_0);
	MR_init_label9(ll_backend__call_gen__call_comment_4_0,3,4,2,5,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_comment'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__call_gen__call_comment_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__call_comment_4_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_string_const("branch to det procedure", 23);
	MR_GOTO_LAB(ll_backend__call_gen__call_comment_4_0_i2);
MR_def_label(ll_backend__call_gen__call_comment_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__call_gen__call_comment_4_0_i4);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_string_const("branch to nondet procedure", 26);
	MR_GOTO_LAB(ll_backend__call_gen__call_comment_4_0_i2);
MR_def_label(ll_backend__call_gen__call_comment_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_string_const("branch to semidet procedure", 27);
MR_def_label(ll_backend__call_gen__call_comment_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_auto_comments_2_0,
		ll_backend__call_gen__call_comment_4_0_i5);
MR_def_label(ll_backend__call_gen__call_comment_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__call_comment_4_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__call_gen__call_comment_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__call_gen__call_comment_4_0_i8);
MR_def_label(ll_backend__call_gen__call_comment_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__call_gen__call_comment_4_0_i9);
MR_def_label(ll_backend__call_gen__call_comment_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		ll_backend__call_gen__call_comment_4_0_i10);
MR_def_label(ll_backend__call_gen__call_comment_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__call_gen__call_comment_4_0_i11);
MR_def_label(ll_backend__call_gen__call_comment_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module3)
	MR_init_entry1(ll_backend__call_gen__find_nonlive_outputs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__find_nonlive_outputs_4_0);
	MR_init_label7(ll_backend__call_gen__find_nonlive_outputs_4_0,36,3,20,5,9,7,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_nonlive_outputs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__call_gen__find_nonlive_outputs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__call_gen__find_nonlive_outputs_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__find_nonlive_outputs_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__call_gen__find_nonlive_outputs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tfield(0, MR_tfield(0, MR_r5, 1), 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__find_nonlive_outputs_4_0_i5);
	}
MR_def_label(ll_backend__call_gen__find_nonlive_outputs_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__call_gen__find_nonlive_outputs_4_0_i36);
MR_def_label(ll_backend__call_gen__find_nonlive_outputs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__call_gen__find_nonlive_outputs_4_0_i20);
	}
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r5, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__call_gen__find_nonlive_outputs_4_0_i9);
MR_def_label(ll_backend__call_gen__find_nonlive_outputs_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__call_gen__find_nonlive_outputs_4_0_i7);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__call_gen__find_nonlive_outputs_4_0_i36);
MR_def_label(ll_backend__call_gen__find_nonlive_outputs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__call_gen__find_nonlive_outputs_4_0_i12);
MR_def_label(ll_backend__call_gen__find_nonlive_outputs_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__call_gen__find_nonlive_outputs_4_0_i36);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_forward_live_vars_2_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_post_deaths_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(ll_backend__code_info__make_vars_forward_dead_3_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module4)
	MR_init_entry1(ll_backend__call_gen__kill_dead_input_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__kill_dead_input_vars_5_0);
	MR_init_label6(ll_backend__call_gen__kill_dead_input_vars_5_0,2,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'kill_dead_input_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__call_gen__kill_dead_input_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_forward_live_vars_2_0,
		ll_backend__call_gen__kill_dead_input_vars_5_0_i2);
MR_def_label(ll_backend__call_gen__kill_dead_input_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__call_gen__kill_dead_input_vars_5_0_i4);
MR_def_label(ll_backend__call_gen__kill_dead_input_vars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__call_gen__find_nonlive_outputs_4_0,
		ll_backend__call_gen__kill_dead_input_vars_5_0_i5);
MR_def_label(ll_backend__call_gen__kill_dead_input_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__call_gen__kill_dead_input_vars_5_0_i6);
MR_def_label(ll_backend__call_gen__kill_dead_input_vars_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__call_gen__kill_dead_input_vars_5_0_i7);
MR_def_label(ll_backend__call_gen__kill_dead_input_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_info__make_vars_forward_dead_3_0,
		ll_backend__call_gen__kill_dead_input_vars_5_0_i8);
MR_def_label(ll_backend__call_gen__kill_dead_input_vars_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_util__arg_loc_to_register_2_0);
MR_decl_entry(ll_backend__code_info__set_var_location_4_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module5)
	MR_init_entry1(ll_backend__call_gen__rebuild_registers_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__rebuild_registers_5_0);
	MR_init_label7(ll_backend__call_gen__rebuild_registers_5_0,39,4,9,11,12,5,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rebuild_registers'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__call_gen__rebuild_registers_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__rebuild_registers_5_0_i39);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__call_gen__rebuild_registers_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(ll_backend__call_gen__rebuild_registers_5_0,
		ll_backend__call_gen__rebuild_registers_5_0_i4);
MR_def_label(ll_backend__call_gen__rebuild_registers_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__call_gen__rebuild_registers_5_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__call_gen__rebuild_registers_5_0_i9);
MR_def_label(ll_backend__call_gen__rebuild_registers_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__call_gen__rebuild_registers_5_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_util__arg_loc_to_register_2_0,
		ll_backend__call_gen__rebuild_registers_5_0_i11);
MR_def_label(ll_backend__call_gen__rebuild_registers_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__code_info__set_var_location_4_0,
		ll_backend__call_gen__rebuild_registers_5_0_i12);
MR_def_label(ll_backend__call_gen__rebuild_registers_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__call_gen__rebuild_registers_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
MR_def_label(ll_backend__call_gen__rebuild_registers_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__code_info__get_pred_proc_arginfo_3_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(ll_backend__code_info__setup_call_6_0);
MR_decl_entry(fn__ll_backend__code_info__make_proc_entry_label_5_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0);
MR_decl_entry(ll_backend__code_info__get_containing_goal_map_2_0);
MR_decl_entry(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0);
MR_decl_entry(ll_backend__code_info__get_instmap_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);
MR_decl_entry(fn__cord__from_list_1_0);
MR_decl_entry(ll_backend__code_info__get_maybe_trace_info_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(ll_backend__trace_gen__generate_tailrec_event_code_8_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module6)
	MR_init_entry1(ll_backend__call_gen__generate_call_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__generate_call_8_0);
	MR_init_label10(ll_backend__call_gen__generate_call_8_0,2,4,5,6,7,9,11,10,8,14)
	MR_init_label10(ll_backend__call_gen__generate_call_8_0,15,16,17,18,19,20,21,23,30,22)
	MR_init_label10(ll_backend__call_gen__generate_call_8_0,38,39,40,41,46,47,48,50,53,59)
	MR_init_label6(ll_backend__call_gen__generate_call_8_0,60,61,49,62,63,64)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_call'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__call_gen__generate_call_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_pred_proc_arginfo_3_0,
		ll_backend__call_gen__generate_call_8_0_i2);
MR_def_label(ll_backend__call_gen__generate_call_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__call_gen__generate_call_8_0_i4);
MR_def_label(ll_backend__call_gen__generate_call_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__setup_call_6_0,
		ll_backend__call_gen__generate_call_8_0_i5);
MR_def_label(ll_backend__call_gen__generate_call_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__call_gen__kill_dead_input_vars_5_0,
		ll_backend__call_gen__generate_call_8_0_i6);
MR_def_label(ll_backend__call_gen__generate_call_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__succip_is_used_2_0,
		ll_backend__call_gen__generate_call_8_0_i7);
MR_def_label(ll_backend__call_gen__generate_call_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_call_8_0_i9);
	}
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__call_gen__generate_call_8_0_i8);
MR_def_label(ll_backend__call_gen__generate_call_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_call_8_0_i10);
	}
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__may_use_nondet_tailcall_2_0,
		ll_backend__call_gen__generate_call_8_0_i11);
MR_def_label(ll_backend__call_gen__generate_call_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__set_resume_point_and_frame_to_unknown_2_0,
		ll_backend__call_gen__generate_call_8_0_i8);
MR_def_label(ll_backend__call_gen__generate_call_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 1);
MR_def_label(ll_backend__call_gen__generate_call_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(ll_backend__trace_gen__trace_prepare_for_call_2_0,
		ll_backend__call_gen__generate_call_8_0_i14);
MR_def_label(ll_backend__call_gen__generate_call_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__call_gen__generate_call_8_0_i15);
MR_def_label(ll_backend__call_gen__generate_call_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__make_proc_entry_label_5_0,
		ll_backend__call_gen__generate_call_8_0_i16);
MR_def_label(ll_backend__call_gen__generate_call_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__call_gen__generate_call_8_0_i17);
MR_def_label(ll_backend__call_gen__generate_call_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__call_gen__call_comment_4_0,
		ll_backend__call_gen__generate_call_8_0_i18);
MR_def_label(ll_backend__call_gen__generate_call_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ll_backend__call_gen__generate_call_8_0_i19);
MR_def_label(ll_backend__call_gen__generate_call_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		ll_backend__call_gen__generate_call_8_0_i20);
MR_def_label(ll_backend__call_gen__generate_call_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__code_info__get_containing_goal_map_2_0,
		ll_backend__call_gen__generate_call_8_0_i21);
MR_def_label(ll_backend__call_gen__generate_call_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_call_8_0_i23);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(14) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_sv(16), 1, (MR_Integer) 1);
	MR_tempr4 = MR_sv(2);
	MR_tfield(1, MR_sv(16), 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("continuation label", 18);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(15) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(ll_backend__call_gen__generate_call_8_0_i22);
	}
MR_def_label(ll_backend__call_gen__generate_call_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0,
		ll_backend__call_gen__generate_call_8_0_i30);
MR_def_label(ll_backend__call_gen__generate_call_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(14) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_sv(16), 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(2);
	MR_tfield(1, MR_sv(16), 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("continuation label", 18);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(15) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(13);
	}
MR_def_label(ll_backend__call_gen__generate_call_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_instmap_2_0,
		ll_backend__call_gen__generate_call_8_0_i38);
MR_def_label(ll_backend__call_gen__generate_call_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__call_gen__generate_call_8_0_i39);
MR_def_label(ll_backend__call_gen__generate_call_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		ll_backend__call_gen__generate_call_8_0_i40);
MR_def_label(ll_backend__call_gen__generate_call_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(13);
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0,
		ll_backend__call_gen__generate_call_8_0_i41);
MR_def_label(ll_backend__call_gen__generate_call_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(16);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__call_gen__generate_call_8_0_i46);
MR_def_label(ll_backend__call_gen__generate_call_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__call_gen__handle_call_failure_5_0,
		ll_backend__call_gen__generate_call_8_0_i47);
MR_def_label(ll_backend__call_gen__generate_call_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__call_gen__generate_call_8_0_i48);
MR_def_label(ll_backend__call_gen__generate_call_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		ll_backend__call_gen__generate_call_8_0_i50);
MR_def_label(ll_backend__call_gen__generate_call_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_call_8_0_i49);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_call_8_0_i49);
	}
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_tailrec_event_code_8_0,
		ll_backend__call_gen__generate_call_8_0_i53);
MR_def_label(ll_backend__call_gen__generate_call_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("tail recursive jump", 19);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(14);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__call_gen__generate_call_8_0_i59);
MR_def_label(ll_backend__call_gen__generate_call_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__generate_call_8_0_i60);
MR_def_label(ll_backend__call_gen__generate_call_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__generate_call_8_0_i61);
MR_def_label(ll_backend__call_gen__generate_call_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(17);
MR_def_label(ll_backend__call_gen__generate_call_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__generate_call_8_0_i62);
MR_def_label(ll_backend__call_gen__generate_call_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__generate_call_8_0_i63);
MR_def_label(ll_backend__call_gen__generate_call_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__generate_call_8_0_i64);
MR_def_label(ll_backend__call_gen__generate_call_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_int_option_3_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module7)
	MR_init_entry1(ll_backend__call_gen__generic_call_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__generic_call_info_7_0);
	MR_init_label6(ll_backend__call_gen__generic_call_info_7_0,7,8,3,17,18,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generic_call_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__call_gen__generic_call_info_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generic_call_info_7_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r3;
	MR_r2 = (MR_Integer) 299;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__call_gen__generic_call_info_7_0_i7);
MR_def_label(ll_backend__call_gen__generic_call_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generic_call_info_7_0_i8);
	}
	if (((MR_Integer) MR_sv(1) > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generic_call_info_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__call_gen__generic_call_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 4;
	MR_r4 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__call_gen__generic_call_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generic_call_info_7_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r3;
	MR_r2 = (MR_Integer) 298;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__call_gen__generic_call_info_7_0_i17);
MR_def_label(ll_backend__call_gen__generic_call_info_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generic_call_info_7_0_i18);
	}
	if (((MR_Integer) MR_sv(1) > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generic_call_info_7_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__call_gen__generic_call_info_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,3,1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 3;
	MR_r4 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__call_gen__generic_call_info_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__call_gen_module8)
	MR_init_entry1(ll_backend__call_gen__extra_livevals_from_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__extra_livevals_from_3_0);
	MR_init_label2(ll_backend__call_gen__extra_livevals_from_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extra_livevals_from'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__call_gen__extra_livevals_from_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ll_backend__call_gen__extra_livevals_from_3_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ll_backend__call_gen__extra_livevals_from_3_0,
		ll_backend__call_gen__extra_livevals_from_3_0_i4);
MR_def_label(ll_backend__call_gen__extra_livevals_from_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__call_gen__extra_livevals_from_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__call_gen_module9)
	MR_init_entry1(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0);
	MR_init_label3(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0,7,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'give_vars_consecutive_arg_infos'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0_i2);
	}
	MR_r5 = (MR_Word) MR_sp;
MR_def_label(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break; } /* end while */
MR_def_label(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r5))
		continue;
	MR_proceed();
	break; } /* end while */
MR_def_label(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(ll_backend__code_info__produce_variable_5_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module10)
	MR_init_entry1(ll_backend__call_gen__generate_event_attributes_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__generate_event_attributes_6_0);
	MR_init_label8(ll_backend__call_gen__generate_event_attributes_6_0,5,48,11,10,8,15,7,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_event_attributes'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__call_gen__generate_event_attributes_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_event_attributes_6_0_i48);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_event_attributes_6_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__call_gen__generate_event_attributes_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.call_gen", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.call_gen.generate_event_attributes\'/6", 59);
	MR_r3 = (MR_Word) MR_string_const("var", 3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__call_gen__generate_event_attributes_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 4);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_event_attributes_6_0_i8);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_event_attributes_6_0_i10);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__call_gen__generate_event_attributes_6_0_i11);
MR_def_label(ll_backend__call_gen__generate_event_attributes_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__call_gen__generate_event_attributes_6_0,
		ll_backend__call_gen__generate_event_attributes_6_0_i16);
MR_def_label(ll_backend__call_gen__generate_event_attributes_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.call_gen", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.call_gen.generate_event_attributes\'/6", 59);
	MR_r3 = (MR_Word) MR_string_const("no var", 6);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__call_gen__generate_event_attributes_6_0_i7);
MR_def_label(ll_backend__call_gen__generate_event_attributes_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__call_gen__generate_event_attributes_6_0_i15);
MR_def_label(ll_backend__call_gen__generate_event_attributes_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
MR_def_label(ll_backend__call_gen__generate_event_attributes_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(ll_backend__call_gen__generate_event_attributes_6_0,
		ll_backend__call_gen__generate_event_attributes_6_0_i16);
MR_def_label(ll_backend__call_gen__generate_event_attributes_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__call_gen_module11)
	MR_init_entry1(fn__ll_backend__call_gen__convert_simple_expr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__call_gen__convert_simple_expr_1_0);
	MR_init_label7(fn__ll_backend__call_gen__convert_simple_expr_1_0,3,6,38,12,13,11,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_simple_expr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__call_gen__convert_simple_expr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__call_gen__convert_simple_expr_1_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tfield(2, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_proceed();
MR_def_label(fn__ll_backend__call_gen__convert_simple_expr_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__call_gen__convert_simple_expr_1_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_proceed();
MR_def_label(fn__ll_backend__call_gen__convert_simple_expr_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__call_gen__convert_simple_expr_1_0_i38);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__ll_backend__call_gen__convert_simple_expr_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__call_gen__convert_simple_expr_1_0_i11);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ll_backend__call_gen__convert_simple_expr_1_0,
		fn__ll_backend__call_gen__convert_simple_expr_1_0_i12);
MR_def_label(fn__ll_backend__call_gen__convert_simple_expr_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__ll_backend__call_gen__convert_simple_expr_1_0,
		fn__ll_backend__call_gen__convert_simple_expr_1_0_i13);
MR_def_label(fn__ll_backend__call_gen__convert_simple_expr_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__call_gen__convert_simple_expr_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ll_backend__call_gen__convert_simple_expr_1_0,
		fn__ll_backend__call_gen__convert_simple_expr_1_0_i15);
MR_def_label(fn__ll_backend__call_gen__convert_simple_expr_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__variable_is_forward_live_2_0);
MR_decl_entry(ll_backend__code_info__assign_expr_to_var_5_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module12)
	MR_init_entry1(ll_backend__call_gen__generate_assign_builtin_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__generate_assign_builtin_5_0);
	MR_init_label4(ll_backend__call_gen__generate_assign_builtin_5_0,4,6,2,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_assign_builtin'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__call_gen__generate_assign_builtin_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__code_info__variable_is_forward_live_2_0,
		ll_backend__call_gen__generate_assign_builtin_5_0_i4);
MR_def_label(ll_backend__call_gen__generate_assign_builtin_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_assign_builtin_5_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__call_gen__convert_simple_expr_1_0,
		ll_backend__call_gen__generate_assign_builtin_5_0_i6);
MR_def_label(ll_backend__call_gen__generate_assign_builtin_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__code_info__assign_expr_to_var_5_0);
	}
MR_def_label(ll_backend__call_gen__generate_assign_builtin_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__call_gen__generate_assign_builtin_5_0_i8);
MR_def_label(ll_backend__call_gen__generate_assign_builtin_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__call_gen_module13)
	MR_init_entry1(ll_backend__call_gen__generate_generic_call_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__generate_generic_call_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_generic_call'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__call_gen__generate_generic_call_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__call_gen_module14)
	MR_init_entry1(ll_backend__call_gen__generate_simple_test_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__generate_simple_test_5_0);
	MR_init_label10(ll_backend__call_gen__generate_simple_test_5_0,4,5,8,7,9,6,12,11,14,16)
	MR_init_label5(ll_backend__call_gen__generate_simple_test_5_0,3,17,20,19,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_simple_test'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__call_gen__generate_simple_test_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_simple_test_5_0_i3);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__ll_backend__call_gen__convert_simple_expr_1_0,
		ll_backend__call_gen__generate_simple_test_5_0_i4);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__call_gen__convert_simple_expr_1_0,
		ll_backend__call_gen__generate_simple_test_5_0_i5);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_simple_test_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__call_gen__generate_simple_test_5_0_i8);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(ll_backend__call_gen__generate_simple_test_5_0_i6);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__call_gen__generate_simple_test_5_0_i9);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_sv(4);
	MR_sv(4) = MR_r1;
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_simple_test_5_0_i11);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__call_gen__generate_simple_test_5_0_i12);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__generate_simple_test_5_0_i16);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__call_gen__generate_simple_test_5_0_i14);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_sv(2) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__generate_simple_test_5_0_i16);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__ll_backend__call_gen__convert_simple_expr_1_0,
		ll_backend__call_gen__generate_simple_test_5_0_i17);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_simple_test_5_0_i19);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__call_gen__generate_simple_test_5_0_i20);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__call_gen__generate_simple_test_5_0_i22);
MR_def_label(ll_backend__call_gen__generate_simple_test_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_module__predicate_module_2_0);
MR_decl_entry(fn__hlds__hlds_module__predicate_name_2_0);
MR_decl_entry(backend_libs__builtin_ops__translate_builtin_5_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_code_info_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(ll_backend__code_info__fail_if_rval_is_false_4_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module15)
	MR_init_entry1(ll_backend__call_gen__generate_builtin_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__generate_builtin_7_0);
	MR_init_label10(ll_backend__call_gen__generate_builtin_7_0,2,3,4,7,5,10,11,12,13,14)
	MR_init_label10(ll_backend__call_gen__generate_builtin_7_0,16,20,25,22,28,29,33,34,27,18)
	MR_init_label5(ll_backend__call_gen__generate_builtin_7_0,40,41,42,39,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_builtin'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__call_gen__generate_builtin_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__call_gen__generate_builtin_7_0_i2);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_module_2_0,
		ll_backend__call_gen__generate_builtin_7_0_i3);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		ll_backend__call_gen__generate_builtin_7_0_i4);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(backend_libs__builtin_ops__translate_builtin_5_0,
		ll_backend__call_gen__generate_builtin_7_0_i7);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_builtin_7_0_i5);
	}
	MR_r1 = MR_r2;
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(ll_backend__call_gen__generate_builtin_7_0_i16);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__call_gen__generate_builtin_7_0_i10);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__call_gen__generate_builtin_7_0_i11);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__call_gen__generate_builtin_7_0_i12);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__call_gen__generate_builtin_7_0_i13);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unknown builtin predicate: ", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__call_gen__generate_builtin_7_0_i14);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.call_gen", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.call_gen.generate_builtin\'/7", 50);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__call_gen__generate_builtin_7_0_i16);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_builtin_7_0_i18);
	}
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_builtin_7_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__call_gen__generate_assign_builtin_5_0);
	}
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_builtin_7_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, code_info);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_tfield(3, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__call_gen__generate_builtin_7_0_i25);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__call_gen__generate_builtin_7_0_i42);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_builtin_7_0_i27);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__call_gen__generate_builtin_7_0_i28);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__call_gen__generate_builtin_7_0_i29);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__call_gen__generate_builtin_7_0_i33);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__generate_builtin_7_0_i34);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__generate_builtin_7_0_i42);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.call_gen", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.call_gen.generate_builtin\'/7", 50);
	MR_r3 = (MR_Word) MR_string_const("malformed model_det builtin predicate", 37);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_builtin_7_0_i37);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__call_gen__generate_builtin_7_0_i39);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__call_gen__generate_simple_test_5_0,
		ll_backend__call_gen__generate_builtin_7_0_i40);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__fail_if_rval_is_false_4_0,
		ll_backend__call_gen__generate_builtin_7_0_i41);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__call_gen__generate_builtin_7_0_i42);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.call_gen", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.call_gen.generate_builtin\'/7", 50);
	MR_r3 = (MR_Word) MR_string_const("malformed model_semi builtin predicate", 38);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__call_gen__generate_builtin_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.call_gen", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.call_gen.generate_builtin\'/7", 50);
	MR_r3 = (MR_Word) MR_string_const("model_non builtin predicate", 27);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__call_gen_module16)
	MR_init_entry1(ll_backend__call_gen__input_arg_locs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__input_arg_locs_2_0);
	MR_init_label4(ll_backend__call_gen__input_arg_locs_2_0,8,9,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'input_arg_locs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__call_gen__input_arg_locs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__input_arg_locs_2_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(ll_backend__call_gen__input_arg_locs_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(3);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break; } /* end while */
MR_def_label(ll_backend__call_gen__input_arg_locs_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__call_gen__input_arg_locs_2_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__call_gen__input_arg_locs_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(3);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(ll_backend__call_gen__input_arg_locs_2_0_i9);
	}
	MR_proceed();
MR_def_label(ll_backend__call_gen__input_arg_locs_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__call_gen_module17)
	MR_init_entry1(ll_backend__call_gen__output_arg_locs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__call_gen__output_arg_locs_2_0);
	MR_init_label4(ll_backend__call_gen__output_arg_locs_2_0,8,9,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_arg_locs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__call_gen__output_arg_locs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__call_gen__output_arg_locs_2_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(ll_backend__call_gen__output_arg_locs_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(3);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break; } /* end while */
MR_def_label(ll_backend__call_gen__output_arg_locs_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__call_gen__output_arg_locs_2_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__call_gen__output_arg_locs_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(3);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(ll_backend__call_gen__output_arg_locs_2_0_i9);
	}
	MR_proceed();
MR_def_label(ll_backend__call_gen__output_arg_locs_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__call_gen_module18)
	MR_init_entry1(__Unify___ll_backend__call_gen__known_call_variant_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__call_gen__known_call_variant_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__call_gen__known_call_variant_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module19)
	MR_init_entry1(__Compare___ll_backend__call_gen__known_call_variant_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__call_gen__known_call_variant_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__call_gen__known_call_variant_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_event_set_2_0);
MR_decl_entry(parse_tree__prog_event__event_attributes_3_0);
MR_decl_entry(parse_tree__prog_event__event_number_3_0);
MR_decl_entry(ll_backend__trace_gen__generate_user_event_code_5_0);
MR_decl_entry(fn__cord__cord_list_to_cord_1_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module20)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0);
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,11,13,9,15,4,3,20,21,23,25)
	MR_init_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,27,29,30,31,22,77)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generate_generic_call__[1]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i4);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_r6;
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__code_info__variable_is_forward_live_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i11);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__call_gen__convert_simple_expr_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ll_backend__code_info__assign_expr_to_var_5_0);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i15);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.call_gen", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.call_gen.generate_generic_call\'/9", 55);
	MR_r3 = (MR_Word) MR_string_const("invalid type/inst cast call", 27);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i77);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tfield(2, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i20);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_event_set_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i21);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_event__event_attributes_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i23);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_event__event_number_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i25);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__call_gen__generate_event_attributes_6_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i27);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_user_event_code_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i29);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i30);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i31);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.call_gen", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.call_gen.generate_event_call\'/6", 53);
	MR_r3 = (MR_Word) MR_string_const("bad event name", 14);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__code_info__variable_type_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__arg_info__compute_in_and_out_vars_6_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(set__insert_list_3_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module21)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0);
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,4,5,6,7,8,9,10,11,13,16)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,17,18,19,20,21,22,23,15,24,25)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,26,27,28,29,30,31,32,33,34,35)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,36,37,38,39,41,52,64,65,66,67)
	MR_init_label2(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,68,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generate_main_generic_call__[1]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__code_info__variable_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r6;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(11) = MR_tempr2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__arg_info__compute_in_and_out_vars_6_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__length_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__call_gen__generic_call_info_7_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i10);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i11);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__call_gen__extra_livevals_from_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i15);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i17);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i18);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__code_info__setup_call_6_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i19);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__call_gen__kill_dead_input_vars_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i20);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i21);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__succip_is_used_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i22);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ll_backend__trace_gen__trace_prepare_for_call_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i23);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 1);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__insert_list_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i31);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__call_gen__give_vars_consecutive_arg_infos_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i24);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i25);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i26);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__code_info__setup_call_6_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i27);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__call_gen__kill_dead_input_vars_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i28);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i29);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__call_gen__prepare_for_call_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i30);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r3 = MR_sv(6);
	MR_sv(8) = MR_r2;
	MR_r2 = MR_sv(10);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__insert_list_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i31);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i32);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i33);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i34);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(ll_backend__code_info__get_instmap_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i35);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i36);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i37);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(14);
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i38);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_containing_goal_map_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i39);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i41);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(10);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr3, 4) = MR_sv(11);
	MR_tfield(3, MR_tempr3, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 6) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("Setup and call", 14);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("Continuation label", 18);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i64);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i52);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(10);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr4, 4) = MR_sv(11);
	MR_tfield(3, MR_tempr4, 5) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 6) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("Setup and call", 14);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Continuation label", 18);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i64);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__call_gen__handle_call_failure_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i65);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i66);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i67);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i68);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0_i69);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__clobber_regs_3_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module22)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0);
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,8,5,14,16,3,32,36,38,43,30)
	MR_init_label1(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generic_call_nonvar_setup__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i5);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ll_backend__code_info__clobber_regs_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("Index of class method in typeclass info", 39);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i43);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ll_backend__code_info__clobber_regs_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i14);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Index of class method in typeclass info", 39);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Assign number of immediate input arguments", 42);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i43);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i30);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i32);
	}
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i43);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ll_backend__code_info__clobber_regs_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i36);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i38);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("Assign number of immediate input arguments", 42);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i43);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0_i44);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.call_gen", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", 59);
	MR_r3 = (MR_Word) MR_string_const("cast", 4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_52_93_95_48_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.call_gen", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", 59);
	MR_r3 = (MR_Word) MR_string_const("event_call", 10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_is_reachable_1_0);
MR_decl_entry(ll_backend__code_info__clear_all_registers_3_0);
MR_decl_entry(ll_backend__code_info__generate_return_live_lvalues_5_0);

MR_BEGIN_MODULE(ll_backend__call_gen_module23)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0,2,5,4,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__handle_return__[3]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0_i2);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__clear_all_registers_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_forward_live_vars_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__call_gen__rebuild_registers_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0_i10);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_return_live_lvalues_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0_i11);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__call_gen_maybe_bunch_0(void)
{
	ll_backend__call_gen_module0();
	ll_backend__call_gen_module1();
	ll_backend__call_gen_module2();
	ll_backend__call_gen_module3();
	ll_backend__call_gen_module4();
	ll_backend__call_gen_module5();
	ll_backend__call_gen_module6();
	ll_backend__call_gen_module7();
	ll_backend__call_gen_module8();
	ll_backend__call_gen_module9();
	ll_backend__call_gen_module10();
	ll_backend__call_gen_module11();
	ll_backend__call_gen_module12();
	ll_backend__call_gen_module13();
	ll_backend__call_gen_module14();
	ll_backend__call_gen_module15();
	ll_backend__call_gen_module16();
	ll_backend__call_gen_module17();
	ll_backend__call_gen_module18();
	ll_backend__call_gen_module19();
	ll_backend__call_gen_module20();
	ll_backend__call_gen_module21();
	ll_backend__call_gen_module22();
	ll_backend__call_gen_module23();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__call_gen__init(void);
void mercury__ll_backend__call_gen__init_type_tables(void);
void mercury__ll_backend__call_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__call_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__call_gen__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__call_gen__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__call_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__call_gen_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__call_gen__type_ctor_info_known_call_variant_0,
		ll_backend__call_gen__known_call_variant_0_0);
	mercury__ll_backend__call_gen__init_debugger();
}

void mercury__ll_backend__call_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__call_gen__type_ctor_info_known_call_variant_0);
	}
}


void mercury__ll_backend__call_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__call_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__call_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__call_gen__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__call_gen__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
