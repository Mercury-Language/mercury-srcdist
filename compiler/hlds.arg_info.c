/*
** Automatically generated from `arg_info.m'
** by the Mercury compiler,
** version rotd-2012-07-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__arg_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.arg_info.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "hlds.arg_info.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.arg_info.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.arg_info.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.arg_info.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "hlds.arg_info.c"
#line 49 "hlds.arg_info.c"
#include "hlds.arg_info.mh"

#line 52 "hlds.arg_info.c"
#line 53 "hlds.arg_info.c"
#ifndef HLDS__ARG_INFO_DECL_GUARD
#define HLDS__ARG_INFO_DECL_GUARD

#line 57 "hlds.arg_info.c"
#line 58 "hlds.arg_info.c"

#endif
#line 61 "hlds.arg_info.c"

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


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];
MR_decl_label6(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0, 4,5,7,11,3,15)
MR_decl_label2(hlds__arg_info__compute_in_and_out_vars_6_0, 3,2)
MR_decl_label6(hlds__arg_info__compute_in_and_out_vars_2_8_0, 42,8,10,12,43,1)
MR_decl_label2(hlds__arg_info__compute_in_and_out_vars_sep_regs_9_0, 3,2)
MR_decl_label8(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0, 97,10,12,16,14,20,98,1)
MR_decl_label2(hlds__arg_info__generate_arg_info_2_0, 2,3)
MR_decl_label6(hlds__arg_info__generate_pred_arg_info_3_0, 13,3,4,5,6,7)
MR_decl_label10(hlds__arg_info__generate_proc_arg_info_5_0, 2,3,4,9,11,5,6,14,15,17)
MR_decl_label2(hlds__arg_info__generate_proc_arg_info_5_0, 18,19)
MR_decl_label10(hlds__arg_info__generate_proc_list_arg_info_4_0, 20,3,4,5,6,7,8,9,10,11)
MR_decl_label3(hlds__arg_info__generate_proc_list_arg_info_4_0, 12,13,14)
MR_decl_label4(hlds__arg_info__make_arg_infos_6_0, 3,2,5,4)
MR_decl_label8(hlds__arg_info__make_arg_infos_9_0, 85,8,12,10,18,23,86,1)
MR_decl_label5(hlds__arg_info__make_standard_arg_infos_5_0, 2,3,5,4,8)
MR_decl_label2(hlds__arg_info__partition_args_3_0, 2,3)
MR_decl_label6(hlds__arg_info__partition_args_4_0, 10,11,5,7,4,2)
MR_decl_label5(hlds__arg_info__partition_generic_call_args_7_0, 3,4,5,6,2)
MR_decl_label9(hlds__arg_info__partition_proc_args_5_0, 2,3,4,5,7,8,9,10,6)
MR_decl_label9(hlds__arg_info__partition_proc_args_2_10_0, 61,3,8,11,10,13,12,14,1)
MR_decl_label7(hlds__arg_info__partition_proc_call_args_7_0, 2,3,5,6,7,8,4)
MR_decl_label5(hlds__arg_info__reg_type_for_headvar_4_0, 3,11,2,6,7)
MR_decl_label3(hlds__arg_info__standard_reg_type_for_type_3_0, 3,4,2)
MR_decl_label1(fn__hlds__arg_info__arg_reg_to_reg_type_1_0, 3)
MR_decl_static(hlds__arg_info__make_arg_infos_9_0)
MR_def_extern_entry(hlds__arg_info__make_arg_infos_6_0)
MR_def_extern_entry(hlds__arg_info__generate_proc_arg_info_5_0)
MR_decl_static(hlds__arg_info__generate_proc_list_arg_info_4_0)
MR_decl_static(hlds__arg_info__generate_pred_arg_info_3_0)
MR_def_extern_entry(hlds__arg_info__generate_arg_info_2_0)
MR_def_extern_entry(hlds__arg_info__make_standard_arg_infos_5_0)
MR_def_extern_entry(hlds__arg_info__generic_call_arg_reg_types_6_0)
MR_decl_static(hlds__arg_info__compute_in_and_out_vars_2_8_0)
MR_def_extern_entry(hlds__arg_info__compute_in_and_out_vars_6_0)
MR_decl_static(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0)
MR_def_extern_entry(hlds__arg_info__compute_in_and_out_vars_sep_regs_9_0)
MR_def_extern_entry(hlds__arg_info__partition_args_4_0)
MR_def_extern_entry(hlds__arg_info__partition_args_3_0)
MR_decl_static(hlds__arg_info__partition_proc_args_2_10_0)
MR_def_extern_entry(hlds__arg_info__partition_proc_args_5_0)
MR_def_extern_entry(hlds__arg_info__partition_proc_call_args_7_0)
MR_def_extern_entry(hlds__arg_info__partition_generic_call_args_7_0)
MR_decl_static(hlds__arg_info__reg_type_for_headvar_4_0)
MR_decl_static(hlds__arg_info__standard_reg_type_for_type_3_0)
MR_decl_static(fn__hlds__arg_info__arg_reg_to_reg_type_1_0)
MR_def_extern_entry(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
static const struct mercury_type_0 mercury_common_0[4] =
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
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,1)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(hlds__hlds_pred, arg_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__arg_info__generate_proc_arg_info_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_reg_type_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__arg_info__generate_proc_arg_info_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(hlds__hlds_llds, reg_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__arg_info__make_standard_arg_infos_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__arg_info__make_standard_arg_infos_5_0_2;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__arg_info__make_standard_arg_infos_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_llds, reg_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(hlds__hlds_llds, reg_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__arg_info__make_standard_arg_infos_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_llds, reg_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(hlds__hlds_llds, reg_type)
}
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(hlds__arg_info__standard_reg_type_for_type_3_0),
1,
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(hlds__arg_info__standard_reg_type_for_type_3_0),
1,
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_ho_arg_reg_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, ho_arg_reg),
MR_CTOR0_ADDR(hlds__hlds_llds, reg_type)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__hlds__arg_info__arg_reg_to_reg_type_1_0),
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0_1 = {
{
MR_FUNCTION,
"hlds.arg_info",
"hlds.arg_info",
"arg_reg_to_reg_type",
2,
0
},
"hlds.arg_info",
"arg_info.m",
349,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__arg_info__make_standard_arg_infos_5_0_2 = {
{
MR_PREDICATE,
"hlds.arg_info",
"hlds.arg_info",
"standard_reg_type_for_type",
3,
0
},
"hlds.arg_info",
"arg_info.m",
261,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__arg_info__make_standard_arg_infos_5_0_1 = {
{
MR_PREDICATE,
"hlds.arg_info",
"hlds.arg_info",
"standard_reg_type_for_type",
3,
0
},
"hlds.arg_info",
"arg_info.m",
261,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__arg_info__generate_proc_arg_info_5_0_1 = {
{
MR_PREDICATE,
"hlds.arg_info",
"hlds.arg_info",
"reg_type_for_headvar",
4,
0
},
"hlds.arg_info",
"arg_info.m",
204,
"20"
};


MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);

MR_BEGIN_MODULE(hlds__arg_info_module0)
	MR_init_entry1(hlds__arg_info__make_arg_infos_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__make_arg_infos_9_0);
	MR_init_label8(hlds__arg_info__make_arg_infos_9_0,85,8,12,10,18,23,86,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_arg_infos'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__make_arg_infos_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_9_0_i85);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_9_0_i86);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_9_0_i86);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__arg_info__make_arg_infos_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_9_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_9_0_i1);
	}
	MR_sv(9) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r8;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_tempr4 = MR_r3;
	MR_sv(7) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		hlds__arg_info__make_arg_infos_9_0_i8);
MR_def_label(hlds__arg_info__make_arg_infos_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_9_0_i10);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_9_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr4 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r8 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_tempr3 = MR_sv(9);
	MR_sv(9) = MR_tempr2;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r4 = MR_tempr3;
	MR_r5 = ((MR_Integer) MR_tempr4 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(hlds__arg_info__make_arg_infos_9_0,
		hlds__arg_info__make_arg_infos_9_0_i23);
MR_def_label(hlds__arg_info__make_arg_infos_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r8 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_sv(9) = MR_tempr2;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_tfield(0, MR_tempr1, 1) + (MR_Integer) 1);
	MR_r5 = MR_sv(1);
	}
	MR_np_localcall_lab(hlds__arg_info__make_arg_infos_9_0,
		hlds__arg_info__make_arg_infos_9_0_i23);
MR_def_label(hlds__arg_info__make_arg_infos_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_9_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr4 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r8 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_tempr3 = MR_sv(9);
	MR_sv(9) = MR_tempr2;
	MR_r6 = MR_sv(2);
	MR_r7 = ((MR_Integer) MR_tempr4 + (MR_Integer) 1);
	MR_r4 = MR_tempr3;
	MR_r5 = MR_sv(1);
	}
	MR_np_localcall_lab(hlds__arg_info__make_arg_infos_9_0,
		hlds__arg_info__make_arg_infos_9_0_i23);
MR_def_label(hlds__arg_info__make_arg_infos_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr4 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r8 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_tempr3 = MR_sv(9);
	MR_sv(9) = MR_tempr2;
	MR_r6 = ((MR_Integer) MR_tempr4 + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r4 = MR_tempr3;
	MR_r5 = MR_sv(1);
	}
	MR_np_localcall_lab(hlds__arg_info__make_arg_infos_9_0,
		hlds__arg_info__make_arg_infos_9_0_i23);
MR_def_label(hlds__arg_info__make_arg_infos_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__arg_info__make_arg_infos_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__arg_info__make_arg_infos_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__arg_info_module1)
	MR_init_entry1(hlds__arg_info__make_arg_infos_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__make_arg_infos_6_0);
	MR_init_label4(hlds__arg_info__make_arg_infos_6_0,3,2,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_arg_infos'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__make_arg_infos_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_6_0_i3);
	}
	MR_r9 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_r9;
	MR_r8 = MR_r5;
	MR_r6 = (MR_Integer) 2;
	MR_GOTO_LAB(hlds__arg_info__make_arg_infos_6_0_i2);
MR_def_label(hlds__arg_info__make_arg_infos_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r8 = MR_r5;
	MR_r6 = (MR_Integer) 1;
	}
MR_def_label(hlds__arg_info__make_arg_infos_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 1;
	MR_r7 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__arg_info__make_arg_infos_9_0,
		hlds__arg_info__make_arg_infos_6_0_i5);
MR_def_label(hlds__arg_info__make_arg_infos_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_6_0_i4);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(hlds__arg_info__make_arg_infos_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.make_arg_infos\'/6", 42);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_reg_r_headvars_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_reg_type_0;
MR_decl_entry(list__map_corresponding_4_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(fn__hlds__code_model__proc_info_interface_code_model_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_arg_info_3_0);

MR_BEGIN_MODULE(hlds__arg_info_module2)
	MR_init_entry1(hlds__arg_info__generate_proc_arg_info_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__generate_proc_arg_info_5_0);
	MR_init_label10(hlds__arg_info__generate_proc_arg_info_5_0,2,3,4,9,11,5,6,14,15,17)
	MR_init_label2(hlds__arg_info__generate_proc_arg_info_5_0,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_proc_arg_info'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__generate_proc_arg_info_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__arg_info__generate_proc_arg_info_5_0_i2);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 244;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__arg_info__generate_proc_arg_info_5_0_i3);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		hlds__arg_info__generate_proc_arg_info_5_0_i4);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(hlds__arg_info__generate_proc_arg_info_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		hlds__arg_info__generate_proc_arg_info_5_0_i9);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__arg_info__generate_proc_arg_info_5_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_reg_r_headvars_2_0,
		hlds__arg_info__generate_proc_arg_info_5_0_i11);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__arg_info__reg_type_for_headvar_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, reg_type);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		hlds__arg_info__generate_proc_arg_info_5_0_i15);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__arg_info__generate_proc_arg_info_5_0_i14);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, reg_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__arg_info__generate_proc_arg_info_5_0_i15);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__arg_info__generate_proc_arg_info_5_0_i17);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		hlds__arg_info__generate_proc_arg_info_5_0_i18);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__arg_info__make_arg_infos_6_0,
		hlds__arg_info__generate_proc_arg_info_5_0_i19);
MR_def_label(hlds__arg_info__generate_proc_arg_info_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_arg_info_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(hlds__arg_info_module3)
	MR_init_entry1(hlds__arg_info__generate_proc_list_arg_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__generate_proc_list_arg_info_4_0);
	MR_init_label10(hlds__arg_info__generate_proc_list_arg_info_4_0,20,3,4,5,6,7,8,9,10,11)
	MR_init_label3(hlds__arg_info__generate_proc_list_arg_info_4_0,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_proc_list_arg_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__generate_proc_list_arg_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__generate_proc_list_arg_info_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(14);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i4);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i5);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i6);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i7);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i8);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i9);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__generate_proc_arg_info_5_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i10);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i11);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i12);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i13);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i14);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(hlds__arg_info__generate_proc_list_arg_info_4_0_i20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);

MR_BEGIN_MODULE(hlds__arg_info_module4)
	MR_init_entry1(hlds__arg_info__generate_pred_arg_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__generate_pred_arg_info_3_0);
	MR_init_label6(hlds__arg_info__generate_pred_arg_info_3_0,13,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_pred_arg_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__generate_pred_arg_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__generate_pred_arg_info_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		hlds__arg_info__generate_pred_arg_info_3_0_i4);
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__arg_info__generate_pred_arg_info_3_0_i5);
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		hlds__arg_info__generate_pred_arg_info_3_0_i6);
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__arg_info__generate_proc_list_arg_info_4_0,
		hlds__arg_info__generate_pred_arg_info_3_0_i7);
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__arg_info__generate_pred_arg_info_3_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(hlds__arg_info_module5)
	MR_init_entry1(hlds__arg_info__generate_arg_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__generate_arg_info_2_0);
	MR_init_label2(hlds__arg_info__generate_arg_info_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_arg_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__generate_arg_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		hlds__arg_info__generate_arg_info_2_0_i2);
MR_def_label(hlds__arg_info__generate_arg_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__arg_info__generate_arg_info_2_0_i3);
MR_def_label(hlds__arg_info__generate_arg_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__arg_info__generate_pred_arg_info_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(hlds__arg_info_module6)
	MR_init_entry1(hlds__arg_info__make_standard_arg_infos_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__make_standard_arg_infos_5_0);
	MR_init_label5(hlds__arg_info__make_standard_arg_infos_5_0,2,3,5,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_standard_arg_infos'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__make_standard_arg_infos_5_0);
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
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__arg_info__make_standard_arg_infos_5_0_i2);
MR_def_label(hlds__arg_info__make_standard_arg_infos_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 244;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__arg_info__make_standard_arg_infos_5_0_i3);
MR_def_label(hlds__arg_info__make_standard_arg_infos_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__arg_info__make_standard_arg_infos_5_0_i5);
	}
	MR_r4 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, reg_type);
	MR_GOTO_LAB(hlds__arg_info__make_standard_arg_infos_5_0_i4);
MR_def_label(hlds__arg_info__make_standard_arg_infos_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, reg_type);
MR_def_label(hlds__arg_info__make_standard_arg_infos_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(list__map_3_0,
		hlds__arg_info__make_standard_arg_infos_5_0_i8);
MR_def_label(hlds__arg_info__make_standard_arg_infos_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__arg_info__make_arg_infos_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module7)
	MR_init_entry1(hlds__arg_info__generic_call_arg_reg_types_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__generic_call_arg_reg_types_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generic_call_arg_reg_types'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__generic_call_arg_reg_types_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module8)
	MR_init_entry1(hlds__arg_info__compute_in_and_out_vars_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__compute_in_and_out_vars_2_8_0);
	MR_init_label6(hlds__arg_info__compute_in_and_out_vars_2_8_0,42,8,10,12,43,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_in_and_out_vars_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__compute_in_and_out_vars_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_8_0_i42);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_8_0_i43);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_8_0_i43);
	}
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_8_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_8_0_i1);
	}
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r3, 0);
	MR_sv(2) = MR_tfield(1, MR_r4, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(hlds__arg_info__compute_in_and_out_vars_2_8_0,
		hlds__arg_info__compute_in_and_out_vars_2_8_0_i8);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		hlds__arg_info__compute_in_and_out_vars_2_8_0_i10);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_8_0_i12);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module9)
	MR_init_entry1(hlds__arg_info__compute_in_and_out_vars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__compute_in_and_out_vars_6_0);
	MR_init_label2(hlds__arg_info__compute_in_and_out_vars_6_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_in_and_out_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__compute_in_and_out_vars_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__arg_info__compute_in_and_out_vars_2_8_0,
		hlds__arg_info__compute_in_and_out_vars_6_0_i3);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.compute_in_and_out_vars\'/6", 51);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module10)
	MR_init_entry1(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0);
	MR_init_label8(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0,97,10,12,16,14,20,98,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_in_and_out_vars_sep_regs_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i97);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i98);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i98);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i98);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i1);
	}
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r3, 0);
	MR_sv(5) = MR_tfield(1, MR_r4, 0);
	MR_sv(2) = MR_tfield(1, MR_r5, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_r5 = MR_tfield(1, MR_r5, 1);
	MR_np_localcall_lab(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0,
		hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i10);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i12);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i14);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module11)
	MR_init_entry1(hlds__arg_info__compute_in_and_out_vars_sep_regs_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__compute_in_and_out_vars_sep_regs_9_0);
	MR_init_label2(hlds__arg_info__compute_in_and_out_vars_sep_regs_9_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_in_and_out_vars_sep_regs'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__compute_in_and_out_vars_sep_regs_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_0,
		hlds__arg_info__compute_in_and_out_vars_sep_regs_9_0_i3);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_sep_regs_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_sep_regs_9_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(1);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_sep_regs_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.compute_in_and_out_vars_sep_regs\'/9", 60);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module12)
	MR_init_entry1(hlds__arg_info__partition_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_args_4_0);
	MR_init_label6(hlds__arg_info__partition_args_4_0,10,11,5,7,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__partition_args_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i2);
	}
	MR_r5 = (MR_Word) MR_sp;
MR_def_label(hlds__arg_info__partition_args_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(2);
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(hlds__arg_info__partition_args_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_sv(1), 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i4);
	}
MR_def_label(hlds__arg_info__partition_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i4);
	}
MR_def_label(hlds__arg_info__partition_args_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	}
MR_def_label(hlds__arg_info__partition_args_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i11);
	}
	MR_proceed();
MR_def_label(hlds__arg_info__partition_args_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(hlds__arg_info_module13)
	MR_init_entry1(hlds__arg_info__partition_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_args_3_0);
	MR_init_label2(hlds__arg_info__partition_args_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__partition_args_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__arg_info__partition_args_4_0,
		hlds__arg_info__partition_args_3_0_i2);
MR_def_label(hlds__arg_info__partition_args_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__arg_info__partition_args_3_0_i3);
MR_def_label(hlds__arg_info__partition_args_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(hlds__arg_info_module14)
	MR_init_entry1(hlds__arg_info__partition_proc_args_2_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_proc_args_2_10_0);
	MR_init_label9(hlds__arg_info__partition_proc_args_2_10_0,61,3,8,11,10,13,12,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_proc_args_2'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__partition_proc_args_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i1);
	}
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = MR_tfield(1, MR_r2, 1);
	MR_tempr3 = MR_r3;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		hlds__arg_info__partition_proc_args_2_10_0_i8);
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i10);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__insert_3_0,
		hlds__arg_info__partition_proc_args_2_10_0_i11);
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r7 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i61);
	}
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__insert_3_0,
		hlds__arg_info__partition_proc_args_2_10_0_i13);
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r7 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i61);
	}
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__insert_3_0,
		hlds__arg_info__partition_proc_args_2_10_0_i14);
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r6 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i61);
	}
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(parse_tree__prog_data__lookup_var_types_3_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(hlds__arg_info_module15)
	MR_init_entry1(hlds__arg_info__partition_proc_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_proc_args_5_0);
	MR_init_label9(hlds__arg_info__partition_proc_args_5_0,2,3,4,5,7,8,9,10,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_proc_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__partition_proc_args_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		hlds__arg_info__partition_proc_args_5_0_i2);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__arg_info__partition_proc_args_5_0_i3);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		hlds__arg_info__partition_proc_args_5_0_i4);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_types_3_0,
		hlds__arg_info__partition_proc_args_5_0_i5);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_args_5_0_i7);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_args_5_0_i8);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_args_5_0_i9);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_args_2_10_0,
		hlds__arg_info__partition_proc_args_5_0_i10);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_5_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.do_partition_proc_args\'/7", 50);
	MR_r3 = (MR_Word) MR_string_const("list length mismatch", 20);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module16)
	MR_init_entry1(hlds__arg_info__partition_proc_call_args_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_proc_call_args_7_0);
	MR_init_label7(hlds__arg_info__partition_proc_call_args_7_0,2,3,5,6,7,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_proc_call_args'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__partition_proc_call_args_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__arg_info__partition_proc_call_args_7_0_i2);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_types_3_0,
		hlds__arg_info__partition_proc_call_args_7_0_i3);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_call_args_7_0_i5);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_call_args_7_0_i6);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_call_args_7_0_i7);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_args_2_10_0,
		hlds__arg_info__partition_proc_call_args_7_0_i8);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_call_args_7_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.do_partition_proc_args\'/7", 50);
	MR_r3 = (MR_Word) MR_string_const("list length mismatch", 20);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module17)
	MR_init_entry1(hlds__arg_info__partition_generic_call_args_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_generic_call_args_7_0);
	MR_init_label5(hlds__arg_info__partition_generic_call_args_7_0,3,4,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_generic_call_args'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__partition_generic_call_args_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_generic_call_args_7_0_i3);
MR_def_label(hlds__arg_info__partition_generic_call_args_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_generic_call_args_7_0_i4);
MR_def_label(hlds__arg_info__partition_generic_call_args_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_generic_call_args_7_0_i5);
MR_def_label(hlds__arg_info__partition_generic_call_args_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_args_2_10_0,
		hlds__arg_info__partition_generic_call_args_7_0_i6);
MR_def_label(hlds__arg_info__partition_generic_call_args_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__partition_generic_call_args_7_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__arg_info__partition_generic_call_args_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.do_partition_proc_args\'/7", 50);
	MR_r3 = (MR_Word) MR_string_const("list length mismatch", 20);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__contains_2_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__float_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(hlds__arg_info_module18)
	MR_init_entry1(hlds__arg_info__reg_type_for_headvar_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__reg_type_for_headvar_4_0);
	MR_init_label5(hlds__arg_info__reg_type_for_headvar_4_0,3,11,2,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reg_type_for_headvar'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__reg_type_for_headvar_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__contains_2_0,
		hlds__arg_info__reg_type_for_headvar_4_0_i3);
MR_def_label(hlds__arg_info__reg_type_for_headvar_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__reg_type_for_headvar_4_0_i2);
	}
MR_def_label(hlds__arg_info__reg_type_for_headvar_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__arg_info__reg_type_for_headvar_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__float_type_0_0,
		hlds__arg_info__reg_type_for_headvar_4_0_i6);
MR_def_label(hlds__arg_info__reg_type_for_headvar_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		hlds__arg_info__reg_type_for_headvar_4_0_i7);
MR_def_label(hlds__arg_info__reg_type_for_headvar_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__reg_type_for_headvar_4_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module19)
	MR_init_entry1(hlds__arg_info__standard_reg_type_for_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__standard_reg_type_for_type_3_0);
	MR_init_label3(hlds__arg_info__standard_reg_type_for_type_3_0,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'standard_reg_type_for_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__standard_reg_type_for_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__float_type_0_0,
		hlds__arg_info__standard_reg_type_for_type_3_0_i3);
MR_def_label(hlds__arg_info__standard_reg_type_for_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		hlds__arg_info__standard_reg_type_for_type_3_0_i4);
MR_def_label(hlds__arg_info__standard_reg_type_for_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__standard_reg_type_for_type_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(hlds__arg_info__standard_reg_type_for_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module20)
	MR_init_entry1(fn__hlds__arg_info__arg_reg_to_reg_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__arg_info__arg_reg_to_reg_type_1_0);
	MR_init_label1(fn__hlds__arg_info__arg_reg_to_reg_type_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'arg_reg_to_reg_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__arg_info__arg_reg_to_reg_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__arg_info__arg_reg_to_reg_type_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__hlds__arg_info__arg_reg_to_reg_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_ho_arg_reg_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(hlds__arg_info_module21)
	MR_init_entry1(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0);
	MR_init_label6(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0,4,5,7,11,3,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generic_call_arg_reg_types__[2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0_i4);
MR_def_label(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 244;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0_i5);
MR_def_label(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0_i15);
MR_def_label(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, ho_arg_reg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, reg_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r4 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__map_2_0);
MR_def_label(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.generic_call_arg_reg_types\'/6", 54);
	MR_r3 = (MR_Word) MR_string_const("missing ho_arg_regs", 19);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__list__length_1_0,
		f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0_i15);
MR_def_label(f_104_108_100_115_95_95_97_114_103_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, reg_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__duplicate_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__arg_info_maybe_bunch_0(void)
{
	hlds__arg_info_module0();
	hlds__arg_info_module1();
	hlds__arg_info_module2();
	hlds__arg_info_module3();
	hlds__arg_info_module4();
	hlds__arg_info_module5();
	hlds__arg_info_module6();
	hlds__arg_info_module7();
	hlds__arg_info_module8();
	hlds__arg_info_module9();
	hlds__arg_info_module10();
	hlds__arg_info_module11();
	hlds__arg_info_module12();
	hlds__arg_info_module13();
	hlds__arg_info_module14();
	hlds__arg_info_module15();
	hlds__arg_info_module16();
	hlds__arg_info_module17();
	hlds__arg_info_module18();
	hlds__arg_info_module19();
	hlds__arg_info_module20();
	hlds__arg_info_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__arg_info__init(void);
void mercury__hlds__arg_info__init_type_tables(void);
void mercury__hlds__arg_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__arg_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__arg_info__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__arg_info__init_threadscope_string_table(void);
#endif

void mercury__hlds__arg_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__arg_info_maybe_bunch_0();
	mercury__hlds__arg_info__init_debugger();
}

void mercury__hlds__arg_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__arg_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__arg_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__arg_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__arg_info__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__arg_info__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
