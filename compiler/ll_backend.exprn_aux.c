/*
** Automatically generated from `exprn_aux.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__exprn_aux__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.exprn_aux.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.exprn_aux.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.exprn_aux.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.exprn_aux.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 43 "ll_backend.exprn_aux.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "ll_backend.exprn_aux.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "ll_backend.exprn_aux.c"
#line 52 "ll_backend.exprn_aux.c"
#include "ll_backend.exprn_aux.mh"

#line 55 "ll_backend.exprn_aux.c"
#line 56 "ll_backend.exprn_aux.c"
#ifndef LL_BACKEND__EXPRN_AUX_DECL_GUARD
#define LL_BACKEND__EXPRN_AUX_DECL_GUARD

#line 60 "ll_backend.exprn_aux.c"
#line 61 "ll_backend.exprn_aux.c"

#endif
#line 64 "ll_backend.exprn_aux.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Integer f6;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
	MR_Integer f4[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__exprn_aux__type_ctor_info_transform_lval_1,
	mercury_data_ll_backend__exprn_aux__type_ctor_info_exprn_opts_0;
MR_decl_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0, 9,6,7,8,4,5)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0, 47,7,5,9,48,13,14,21)
MR_decl_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0, 18,19,20,16,17,15)
MR_decl_label5(ll_backend__exprn_aux__args_contain_rval_2_0, 24,7,5,3,1)
MR_decl_label3(ll_backend__exprn_aux__args_contain_rval_2_1, 8,4,2)
MR_decl_label8(ll_backend__exprn_aux__const_is_constant_3_0, 4,7,10,40,13,23,25,52)
MR_decl_label1(ll_backend__exprn_aux__const_is_constant_3_0, 60)
MR_decl_label4(ll_backend__exprn_aux__init_exprn_opts_2_0, 2,3,4,5)
MR_decl_label7(ll_backend__exprn_aux__lval_addrs_3_0, 45,28,29,30,31,32,35)
MR_decl_label5(ll_backend__exprn_aux__lval_contains_lval_2_0, 4,11,22,6,1)
MR_decl_label3(ll_backend__exprn_aux__lval_contains_rval_2_0, 6,3,1)
MR_decl_label2(ll_backend__exprn_aux__lval_contains_rval_2_1, 3,2)
MR_decl_label5(ll_backend__exprn_aux__lval_list_addrs_3_0, 4,5,6,7,3)
MR_decl_label2(ll_backend__exprn_aux__mem_ref_addrs_3_0, 8,5)
MR_decl_label8(ll_backend__exprn_aux__rval_addrs_3_0, 4,7,9,19,20,21,22,23)
MR_decl_label4(ll_backend__exprn_aux__rval_addrs_3_0, 17,10,11,13)
MR_decl_label7(ll_backend__exprn_aux__rval_contains_lval_2_0, 51,16,4,12,5,31,1)
MR_decl_label8(ll_backend__exprn_aux__rval_contains_rval_2_0, 23,76,20,7,15,17,45,79)
MR_decl_label3(ll_backend__exprn_aux__rval_contains_rval_2_0, 9,3,77)
MR_decl_label7(ll_backend__exprn_aux__rval_contains_rval_2_1, 14,6,11,7,2,3,1)
MR_decl_label5(ll_backend__exprn_aux__rval_list_addrs_3_0, 4,5,6,7,3)
MR_decl_label3(ll_backend__exprn_aux__simplify_rval_2_0, 13,4,2)
MR_decl_label8(ll_backend__exprn_aux__simplify_rval_2_2_0, 6,2,3,11,8,9,16,13)
MR_decl_label3(ll_backend__exprn_aux__simplify_rval_2_2_0, 14,19,1)
MR_decl_label1(ll_backend__exprn_aux__substitute_lval_in_instr_6_0, 2)
MR_decl_label2(ll_backend__exprn_aux__substitute_lval_in_lval_4_0, 4,2)
MR_decl_label2(ll_backend__exprn_aux__substitute_lval_in_lval_count_6_0, 4,2)
MR_decl_label8(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0, 48,18,49,20,50,22,51,24)
MR_decl_label8(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0, 52,26,53,28,29,54,31,33)
MR_decl_label8(ll_backend__exprn_aux__substitute_rval_in_lval_4_0, 48,18,49,20,50,22,51,24)
MR_decl_label8(ll_backend__exprn_aux__substitute_rval_in_lval_4_0, 52,26,53,28,29,54,31,33)
MR_decl_label3(ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0, 8,16,6)
MR_decl_label8(ll_backend__exprn_aux__substitute_rval_in_rval_4_0, 4,2,8,9,11,12,13,20)
MR_decl_label6(ll_backend__exprn_aux__substitute_rval_in_rval_4_0, 17,18,19,15,16,14)
MR_decl_label2(ll_backend__exprn_aux__substitute_rvals_in_rval_3_0, 2,3)
MR_decl_label3(ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_0, 4,5,2)
MR_decl_label3(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0, 11,4,3)
MR_decl_label3(ll_backend__exprn_aux__substitute_vars_in_rval_3_0, 11,4,3)
MR_decl_label8(ll_backend__exprn_aux__transform_lval_in_component_5_0, 33,6,34,8,9,17,10,36)
MR_decl_label3(ll_backend__exprn_aux__transform_lval_in_component_5_0, 14,15,16)
MR_decl_label1(ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_0, 2)
MR_decl_label1(ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_0, 2)
MR_decl_label1(ll_backend__exprn_aux__transform_lval_in_instr_5_0, 2)
MR_decl_label4(ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0, 14,4,5,6)
MR_decl_label6(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0, 9,6,7,8,4,5)
MR_decl_label8(ll_backend__exprn_aux__transform_lval_in_rval_5_0, 37,5,38,8,9,16,13,14)
MR_decl_label4(ll_backend__exprn_aux__transform_lval_in_rval_5_0, 15,11,12,10)
MR_decl_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0, 72,104,8,9,10,11,106,13)
MR_decl_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0, 107,15,16,108,18,19,109,25)
MR_decl_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0, 110,27,111,29,112,31,113,33)
MR_decl_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0, 114,35,36,38,39,115,41,116)
MR_decl_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0, 43,117,45,118,48,49,50,119)
MR_decl_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0, 52,120,55,121,57,122,59,123)
MR_decl_label7(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0, 61,124,66,125,68,126,71)
MR_decl_label6(ll_backend__exprn_aux__vars_in_lval_2_0, 45,28,29,31,33,34)
MR_decl_label4(ll_backend__exprn_aux__vars_in_mem_ref_2_0, 14,22,7,8)
MR_decl_label8(ll_backend__exprn_aux__vars_in_rval_2_0, 4,6,7,9,13,14,15,11)
MR_decl_label1(ll_backend__exprn_aux__vars_in_rval_2_0, 10)
MR_decl_label2(__Unify___ll_backend__exprn_aux__exprn_opts_0_0, 4,1)
MR_decl_label6(__Compare___ll_backend__exprn_aux__exprn_opts_0_0, 3,2,5,9,13,37)
MR_def_extern_entry(ll_backend__exprn_aux__init_exprn_opts_2_0)
MR_def_extern_entry(ll_backend__exprn_aux__const_is_constant_3_0)
MR_def_extern_entry(ll_backend__exprn_aux__rval_contains_lval_2_0)
MR_decl_static(ll_backend__exprn_aux__lval_contains_lval_2_0)
MR_def_extern_entry(ll_backend__exprn_aux__rval_contains_rval_2_0)
MR_def_extern_entry(ll_backend__exprn_aux__rval_contains_rval_2_1)
MR_decl_static(ll_backend__exprn_aux__lval_contains_rval_2_0)
MR_decl_static(ll_backend__exprn_aux__lval_contains_rval_2_1)
MR_def_extern_entry(ll_backend__exprn_aux__args_contain_rval_2_0)
MR_def_extern_entry(ll_backend__exprn_aux__args_contain_rval_2_1)
MR_def_extern_entry(ll_backend__exprn_aux__transform_lval_in_rval_5_0)
MR_decl_static(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0)
MR_decl_static(ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0)
MR_decl_static(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0)
MR_def_extern_entry(ll_backend__exprn_aux__transform_lval_in_instr_5_0)
MR_def_extern_entry(ll_backend__exprn_aux__substitute_lval_in_instr_6_0)
MR_decl_static(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0)
MR_decl_static(ll_backend__exprn_aux__substitute_lval_in_lval_count_6_0)
MR_def_extern_entry(ll_backend__exprn_aux__substitute_lval_in_lval_4_0)
MR_def_extern_entry(ll_backend__exprn_aux__substitute_lval_in_rval_4_0)
MR_def_extern_entry(ll_backend__exprn_aux__substitute_rval_in_rval_4_0)
MR_decl_static(ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0)
MR_decl_static(ll_backend__exprn_aux__substitute_rval_in_lval_4_0)
MR_def_extern_entry(ll_backend__exprn_aux__substitute_vars_in_rval_3_0)
MR_decl_static(ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_0)
MR_decl_static(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0)
MR_def_extern_entry(ll_backend__exprn_aux__substitute_rvals_in_rval_3_0)
MR_def_extern_entry(ll_backend__exprn_aux__vars_in_lval_2_0)
MR_def_extern_entry(ll_backend__exprn_aux__vars_in_rval_2_0)
MR_decl_static(ll_backend__exprn_aux__vars_in_mem_ref_2_0)
MR_decl_static(ll_backend__exprn_aux__simplify_rval_2_2_0)
MR_def_extern_entry(ll_backend__exprn_aux__simplify_rval_2_0)
MR_def_extern_entry(ll_backend__exprn_aux__rval_addrs_3_0)
MR_def_extern_entry(ll_backend__exprn_aux__lval_addrs_3_0)
MR_decl_static(ll_backend__exprn_aux__mem_ref_addrs_3_0)
MR_def_extern_entry(ll_backend__exprn_aux__rval_list_addrs_3_0)
MR_def_extern_entry(ll_backend__exprn_aux__lval_list_addrs_3_0)
MR_def_extern_entry(fn__ll_backend__exprn_aux__var_lval_to_rval_2_0)
MR_def_extern_entry(fn__ll_backend__exprn_aux__lval_to_rval_1_0)
MR_decl_static(ll_backend__exprn_aux__transform_lval_in_component_5_0)
MR_decl_static(ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_0)
MR_decl_static(ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_0)
MR_def_extern_entry(__Unify___ll_backend__exprn_aux__exprn_opts_0_0)
MR_def_extern_entry(__Compare___ll_backend__exprn_aux__exprn_opts_0_0)
MR_def_extern_entry(__Unify___ll_backend__exprn_aux__transform_lval_1_0)
MR_def_extern_entry(__Compare___ll_backend__exprn_aux__transform_lval_1_0)
MR_def_extern_entry(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_118_97_114_95_108_118_97_108_95_116_111_95_114_118_97_108_95_95_91_49_93_95_48_2_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
4,
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
1,
1
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_component_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_component_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_1,
MR_COMMON(1,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_CTOR0_ADDR(ll_backend__llds, instruction),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
},
{
1,
1
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_2,
MR_COMMON(1,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component)
},
{
1,
1
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_component_5_0_1,
MR_COMMON(1,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_input),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_input)
},
{
1,
1
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_component_5_0_2,
MR_COMMON(1,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_output),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_output)
},
{
1,
1
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__exprn_aux__substitute_lval_in_instr_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__exprn_aux__substitute_lval_in_instr_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_VA_PseudoTypeInfo_Struct4 mercury_data___vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__exprn_aux__type_ctor_info_transform_lval_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__exprn_aux__transform_lval_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__exprn_aux__transform_lval_1_0)),
	"ll_backend.exprn_aux",
	"transform_lval",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__exprn_aux__field_types_exprn_opts_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_ll_backend__exprn_aux__field_names_exprn_opts_0_0[] = {
	"non_local_gotos",
	"asm_labels",
	"static_ground_terms",
	"unboxed_float"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__exprn_aux__du_functor_desc_exprn_opts_0_0 = {
	"nlg_asm_sgt_ubf",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__exprn_aux__field_types_exprn_opts_0_0,
	mercury_data_ll_backend__exprn_aux__field_names_exprn_opts_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__exprn_aux__du_stag_ordered_exprn_opts_0_0[] = {
	&mercury_data_ll_backend__exprn_aux__du_functor_desc_exprn_opts_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__exprn_aux__du_ptag_ordered_exprn_opts_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__exprn_aux__du_stag_ordered_exprn_opts_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__exprn_aux__du_name_ordered_exprn_opts_0[] = {
	&mercury_data_ll_backend__exprn_aux__du_functor_desc_exprn_opts_0_0
};

const MR_Integer mercury_data_ll_backend__exprn_aux__functor_number_map_exprn_opts_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__exprn_aux__type_ctor_info_exprn_opts_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__exprn_aux__exprn_opts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__exprn_aux__exprn_opts_0_0)),
	"ll_backend.exprn_aux",
	"exprn_opts",
	{ (void *)mercury_data_ll_backend__exprn_aux__du_name_ordered_exprn_opts_0 },
	{ (void *)mercury_data_ll_backend__exprn_aux__du_ptag_ordered_exprn_opts_0 },
	1,
	4,
	mercury_data_ll_backend__exprn_aux__functor_number_map_exprn_opts_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.exprn_aux",
"ll_backend.exprn_aux",
"transform_lval_in_instr",
5,
0
},
"ll_backend.exprn_aux",
"exprn_aux.m",
366,
"d1;c6;d3;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_2 = {
{
MR_PREDICATE,
"ll_backend.exprn_aux",
"ll_backend.exprn_aux",
"transform_lval_in_component",
5,
0
},
"ll_backend.exprn_aux",
"exprn_aux.m",
472,
"d1;c6;d23;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__exprn_aux__substitute_lval_in_instr_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.exprn_aux",
"ll_backend.exprn_aux",
"substitute_lval_in_lval_count",
6,
0
},
"ll_backend.exprn_aux",
"exprn_aux.m",
604,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_component_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.exprn_aux",
"ll_backend.exprn_aux",
"transform_lval_in_foreign_proc_input",
5,
0
},
"ll_backend.exprn_aux",
"exprn_aux.m",
494,
"d1;c6;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__exprn_aux__transform_lval_in_component_5_0_2 = {
{
MR_PREDICATE,
"ll_backend.exprn_aux",
"ll_backend.exprn_aux",
"transform_lval_in_foreign_proc_output",
5,
0
},
"ll_backend.exprn_aux",
"exprn_aux.m",
499,
"d1;c6;d2;c2;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
MR_decl_entry(getopt_io__lookup_bool_option_3_0);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module0)
	MR_init_entry1(ll_backend__exprn_aux__init_exprn_opts_2_0);
	MR_init_label4(ll_backend__exprn_aux__init_exprn_opts_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__init_exprn_opts_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 191;
	MR_np_call_localret_ent(getopt_io__lookup_bool_option_3_0,
		ll_backend__exprn_aux__init_exprn_opts_2_0_i2);
MR_def_label(ll_backend__exprn_aux__init_exprn_opts_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 193;
	MR_np_call_localret_ent(getopt_io__lookup_bool_option_3_0,
		ll_backend__exprn_aux__init_exprn_opts_2_0_i3);
MR_def_label(ll_backend__exprn_aux__init_exprn_opts_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 371;
	MR_np_call_localret_ent(getopt_io__lookup_bool_option_3_0,
		ll_backend__exprn_aux__init_exprn_opts_2_0_i4);
MR_def_label(ll_backend__exprn_aux__init_exprn_opts_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r3 = (MR_Integer) 187;
	MR_np_call_localret_ent(getopt_io__lookup_bool_option_3_0,
		ll_backend__exprn_aux__init_exprn_opts_2_0_i5);
MR_def_label(ll_backend__exprn_aux__init_exprn_opts_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__imported_is_constant_3_0);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module1)
	MR_init_entry1(ll_backend__exprn_aux__const_is_constant_3_0);
	MR_init_label8(ll_backend__exprn_aux__const_is_constant_3_0,4,7,10,40,13,23,25,52)
	MR_init_label1(ll_backend__exprn_aux__const_is_constant_3_0,60)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__const_is_constant_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__exprn_aux__const_is_constant_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__const_is_constant_3_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__const_is_constant_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__const_is_constant_3_0_i10));
MR_def_label(ll_backend__exprn_aux__const_is_constant_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__const_is_constant_3_0_i40);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__exprn_aux__const_is_constant_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__const_is_constant_3_0_i40);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 2);
	MR_proceed();
	}
MR_def_label(ll_backend__exprn_aux__const_is_constant_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__const_is_constant_3_0_i40);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__const_is_constant_3_0_i40);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__const_is_constant_3_0_i13);
	}
MR_def_label(ll_backend__exprn_aux__const_is_constant_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__exprn_aux__const_is_constant_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__exprn_aux__const_is_constant_3_0_i60) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__const_is_constant_3_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__const_is_constant_3_0_i52) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__const_is_constant_3_0_i60));
MR_def_label(ll_backend__exprn_aux__const_is_constant_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__const_is_constant_3_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__exprn_aux__const_is_constant_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r4, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__const_is_constant_3_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ll_backend__exprn_aux__const_is_constant_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_tailcall_ent(libs__globals__imported_is_constant_3_0);
MR_def_label(ll_backend__exprn_aux__const_is_constant_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module2)
	MR_init_entry1(ll_backend__exprn_aux__rval_contains_lval_2_0);
	MR_init_label7(ll_backend__exprn_aux__rval_contains_lval_2_0,51,16,4,12,5,31,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__rval_contains_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__exprn_aux__rval_contains_lval_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_PTAG_TEST(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_lval_2_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_lval_2_0_i16);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_lval_2_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	/* continue */ } /* end while */
MR_def_label(ll_backend__exprn_aux__rval_contains_lval_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__exprn_aux__lval_contains_lval_2_0);
MR_def_label(ll_backend__exprn_aux__rval_contains_lval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_lval_2_0_i5);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_lval_2_0_i1);
	}
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_contains_lval_2_0,
		ll_backend__exprn_aux__rval_contains_lval_2_0_i12);
MR_def_label(ll_backend__exprn_aux__rval_contains_lval_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_lval_2_0_i31);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_lval_2_0_i51);
MR_def_label(ll_backend__exprn_aux__rval_contains_lval_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_lval_2_0_i51);
MR_def_label(ll_backend__exprn_aux__rval_contains_lval_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__exprn_aux__rval_contains_lval_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module3)
	MR_init_entry1(ll_backend__exprn_aux__lval_contains_lval_2_0);
	MR_init_label5(ll_backend__exprn_aux__lval_contains_lval_2_0,4,11,22,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__lval_contains_lval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__exprn_aux__lval_contains_lval_2_0_i4);
MR_def_label(ll_backend__exprn_aux__lval_contains_lval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__exprn_aux__lval_contains_lval_2_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__lval_contains_lval_2_0_i6);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__exprn_aux__rval_contains_lval_2_0,
		ll_backend__exprn_aux__lval_contains_lval_2_0_i11);
MR_def_label(ll_backend__exprn_aux__lval_contains_lval_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__exprn_aux__lval_contains_lval_2_0_i22);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__exprn_aux__rval_contains_lval_2_0);
MR_def_label(ll_backend__exprn_aux__lval_contains_lval_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__exprn_aux__lval_contains_lval_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__lval_contains_lval_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("exprn_aux.m", 11);
	MR_r2 = (MR_Word) MR_string_const("lval_contains_lval: var! I can\'t tell", 37);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__exprn_aux__lval_contains_lval_2_0_i22);
MR_def_label(ll_backend__exprn_aux__lval_contains_lval_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__rval_0_0);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module4)
	MR_init_entry1(ll_backend__exprn_aux__rval_contains_rval_2_0);
	MR_init_label8(ll_backend__exprn_aux__rval_contains_rval_2_0,23,76,20,7,15,17,45,79)
	MR_init_label3(ll_backend__exprn_aux__rval_contains_rval_2_0,9,3,77)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__rval_contains_rval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_0_i7);
	}
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_0_i76);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_0_i77);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_contains_rval_2_0,
		ll_backend__exprn_aux__rval_contains_rval_2_0_i23);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_0_i3);
	}
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__lval_contains_rval_2_0,
		ll_backend__exprn_aux__rval_contains_rval_2_0_i20);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_0_i3);
	}
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_0_i79);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_0_i77);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_contains_rval_2_0,
		ll_backend__exprn_aux__rval_contains_rval_2_0_i15);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_contains_rval_2_0,
		ll_backend__exprn_aux__rval_contains_rval_2_0_i17);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_0_i3);
	}
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_contains_rval_2_0,
		ll_backend__exprn_aux__rval_contains_rval_2_0_i9);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_0_i45);
	}
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module5)
	MR_init_entry1(ll_backend__exprn_aux__rval_contains_rval_2_1);
	MR_init_label7(ll_backend__exprn_aux__rval_contains_rval_2_1,14,6,11,7,2,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__rval_contains_rval_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ll_backend.exprn_aux.rval_contains_rval/2-1", 2,
		MR_LABEL_AP(ll_backend__exprn_aux__rval_contains_rval_2_1_i2));
	if (MR_PTAG_TEST(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_1_i6);
	}
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_1_i14);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_1_i3);
	}
	MR_fv(1) = MR_r1;
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_contains_rval_2_1,
		ll_backend__exprn_aux__rval_contains_rval_2_1_i1);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__lval_contains_rval_2_1,
		ll_backend__exprn_aux__rval_contains_rval_2_1_i1);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_1_i7);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_contains_rval_2_1_i3);
	}
	MR_fv(2) = MR_ctfield(3, MR_r1, 3);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ll_backend__exprn_aux__rval_contains_rval_2_1_i11);
	MR_fv(1) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_contains_rval_2_1,
		ll_backend__exprn_aux__rval_contains_rval_2_1_i1);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_LABEL_AP(ll_backend__exprn_aux__rval_contains_rval_2_1_i2);
	MR_r1 = MR_fv(2);
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_contains_rval_2_1,
		ll_backend__exprn_aux__rval_contains_rval_2_1_i1);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_contains_rval_2_1,
		ll_backend__exprn_aux__rval_contains_rval_2_1_i1);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(ll_backend__exprn_aux__rval_contains_rval_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module6)
	MR_init_entry1(ll_backend__exprn_aux__lval_contains_rval_2_0);
	MR_init_label3(ll_backend__exprn_aux__lval_contains_rval_2_0,6,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__lval_contains_rval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__lval_contains_rval_2_0_i1);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__exprn_aux__rval_contains_rval_2_0,
		ll_backend__exprn_aux__lval_contains_rval_2_0_i6);
MR_def_label(ll_backend__exprn_aux__lval_contains_rval_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__exprn_aux__lval_contains_rval_2_0_i3);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__exprn_aux__rval_contains_rval_2_0);
MR_def_label(ll_backend__exprn_aux__lval_contains_rval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__exprn_aux__lval_contains_rval_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module7)
	MR_init_entry1(ll_backend__exprn_aux__lval_contains_rval_2_1);
	MR_init_label2(ll_backend__exprn_aux__lval_contains_rval_2_1,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__lval_contains_rval_2_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_mkframe("pred ll_backend.exprn_aux.lval_contains_rval/2-1", 1,
		MR_LABEL_AP(ll_backend__exprn_aux__lval_contains_rval_2_1_i3));
	MR_fv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__exprn_aux__rval_contains_rval_2_1,
		ll_backend__exprn_aux__lval_contains_rval_2_1_i2);
MR_def_label(ll_backend__exprn_aux__lval_contains_rval_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(ll_backend__exprn_aux__rval_contains_rval_2_1);
MR_def_label(ll_backend__exprn_aux__lval_contains_rval_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module8)
	MR_init_entry1(ll_backend__exprn_aux__args_contain_rval_2_0);
	MR_init_label5(ll_backend__exprn_aux__args_contain_rval_2_0,24,7,5,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__args_contain_rval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__exprn_aux__args_contain_rval_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__args_contain_rval_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__args_contain_rval_2_0_i5);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__rval_contains_rval_2_0,
		ll_backend__exprn_aux__args_contain_rval_2_0_i7);
MR_def_label(ll_backend__exprn_aux__args_contain_rval_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__exprn_aux__args_contain_rval_2_0_i3);
	}
	MR_r2 = MR_sv(2);
MR_def_label(ll_backend__exprn_aux__args_contain_rval_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__exprn_aux__args_contain_rval_2_0_i24);
MR_def_label(ll_backend__exprn_aux__args_contain_rval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__exprn_aux__args_contain_rval_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module9)
	MR_init_entry1(ll_backend__exprn_aux__args_contain_rval_2_1);
	MR_init_label3(ll_backend__exprn_aux__args_contain_rval_2_1,8,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__args_contain_rval_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred ll_backend.exprn_aux.args_contain_rval/2-1", 1);
MR_def_label(ll_backend__exprn_aux__args_contain_rval_2_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(1) = MR_ctfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ll_backend__exprn_aux__args_contain_rval_2_1_i4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__args_contain_rval_2_1_i4);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__rval_contains_rval_2_1,
		ll_backend__exprn_aux__args_contain_rval_2_1_i2);
MR_def_label(ll_backend__exprn_aux__args_contain_rval_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_GOTO_LAB(ll_backend__exprn_aux__args_contain_rval_2_1_i8);
MR_def_label(ll_backend__exprn_aux__args_contain_rval_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module10)
	MR_init_entry1(ll_backend__exprn_aux__transform_lval_in_rval_5_0);
	MR_init_label8(ll_backend__exprn_aux__transform_lval_in_rval_5_0,37,5,38,8,9,16,13,14)
	MR_init_label4(ll_backend__exprn_aux__transform_lval_in_rval_5_0,15,11,12,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__transform_lval_in_rval_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_rval_5_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_rval_5_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_rval_5_0_i38) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_rval_5_0_i9));
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_rval_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_rval_5_0_i5);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r3, 0);
	MR_r3 = MR_ctfield(2, MR_r3, 1);
	MR_np_localcall_lab(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_rval_5_0_i8);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__transform_lval_in_rval_5_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__transform_lval_in_rval_5_0_i11);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__transform_lval_in_rval_5_0_i13);
	}
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0,
		ll_backend__exprn_aux__transform_lval_in_rval_5_0_i16);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_r1;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	}
	MR_np_localcall_lab(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_rval_5_0_i14);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_rval_5_0_i15);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_localcall_lab(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_rval_5_0_i12);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_rval_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module11)
	MR_init_entry1(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0);
	MR_init_label6(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0,9,6,7,8,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0_i4);
	}
	if (MR_PTAG_TEST(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0_i6);
	}
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0_i9);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(4) = MR_r1;
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0_i7);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0_i8);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0_i5);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_mem_ref_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(set__list_to_set_2_0);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module12)
	MR_init_entry1(ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0);
	MR_init_label4(ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0,14,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0_i4);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0_i5);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0_i6);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;

MR_BEGIN_MODULE(ll_backend__exprn_aux_module13)
	MR_init_entry1(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0);
	MR_init_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,72,104,8,9,10,11,106,13)
	MR_init_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,107,15,16,108,18,19,109,25)
	MR_init_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,110,27,111,29,112,31,113,33)
	MR_init_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,114,35,36,38,39,115,41,116)
	MR_init_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,43,117,45,118,48,49,50,119)
	MR_init_label8(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,52,120,55,121,57,122,59,123)
	MR_init_label7(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,61,124,66,125,68,126,71)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i104) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i11));
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i8);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i9);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i10);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i106) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i107) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i109) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i110) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i111) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i112) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i113) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i114) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i115) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i116) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i117) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i118) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i119) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i120) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i121) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i122) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i123) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i124) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i125) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i126));
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_instr_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i13);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_r3 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i15);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i16);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_r3 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i18);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i19);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r3, 2);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i25);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i27);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r3, 2);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i29);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i31);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i33);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 6);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 7);
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_r3 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i35);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i36);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_ctfield(1, MR_sv(6), 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i39);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_r1, 1) = MR_sv(7);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_tfield(3, MR_r1, 4) = MR_sv(1);
	MR_tfield(3, MR_r1, 5) = MR_sv(4);
	MR_tfield(3, MR_r1, 6) = MR_sv(5);
	MR_tfield(3, MR_r1, 7) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i41);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i43);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i45);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_r3, 3);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i48);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i49);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i50);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_r3, 3);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i52);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i55);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r3, 2);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i57);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i59);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i61);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_component_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 6);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 7);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 8);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i66);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 10);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 8) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 9) = MR_sv(8);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i68);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 28;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_uinstr_5_0_i71);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 30;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module14)
	MR_init_entry1(ll_backend__exprn_aux__transform_lval_in_instr_5_0);
	MR_init_label1(ll_backend__exprn_aux__transform_lval_in_instr_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__transform_lval_in_instr_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,
		ll_backend__exprn_aux__transform_lval_in_instr_5_0_i2);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_instr_5_0,2)
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

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(ll_backend__exprn_aux_module15)
	MR_init_entry1(ll_backend__exprn_aux__substitute_lval_in_instr_6_0);
	MR_init_label1(ll_backend__exprn_aux__substitute_lval_in_instr_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__substitute_lval_in_instr_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_uinstr_5_0,
		ll_backend__exprn_aux__substitute_lval_in_instr_6_0_i2);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_instr_6_0,2)
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


MR_BEGIN_MODULE(ll_backend__exprn_aux_module16)
	MR_init_entry1(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0);
	MR_init_label8(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,48,18,49,20,50,22,51,24)
	MR_init_label8(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,52,26,53,28,29,54,31,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i33);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i48) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i49) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i52) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i54) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i33));
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i18);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i20);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i22);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i24);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i26);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i28);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i29);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0_i31);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module17)
	MR_init_entry1(ll_backend__exprn_aux__substitute_lval_in_lval_count_6_0);
	MR_init_label2(ll_backend__exprn_aux__substitute_lval_in_lval_count_6_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__substitute_lval_in_lval_count_6_0)
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
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__exprn_aux__substitute_lval_in_lval_count_6_0_i4);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_lval_in_lval_count_6_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_count_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module18)
	MR_init_entry1(ll_backend__exprn_aux__substitute_lval_in_lval_4_0);
	MR_init_label2(ll_backend__exprn_aux__substitute_lval_in_lval_4_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__substitute_lval_in_lval_4_0);
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
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__exprn_aux__substitute_lval_in_lval_4_0_i4);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_lval_in_lval_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__exprn_aux__substitute_lval_in_lval_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module19)
	MR_init_entry1(ll_backend__exprn_aux__substitute_lval_in_rval_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__substitute_lval_in_rval_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 0;
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module20)
	MR_init_entry1(ll_backend__exprn_aux__substitute_rval_in_rval_4_0);
	MR_init_label8(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,4,2,8,9,11,12,13,20)
	MR_init_label6(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,17,18,19,15,16,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__substitute_rval_in_rval_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i4);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i13));
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i9);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_r3, 0);
	MR_r3 = MR_ctfield(2, MR_r3, 1);
	MR_np_localcall_lab(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i12);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i14);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i15);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i17);
	}
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0,
		ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i20);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	}
	MR_np_localcall_lab(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i18);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i19);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_localcall_lab(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_rval_4_0_i16);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module21)
	MR_init_entry1(ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0);
	MR_init_label3(ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0,8,16,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0_i8);
	}
	if (MR_PTAG_TEST(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0_i16);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0_i6);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module22)
	MR_init_entry1(ll_backend__exprn_aux__substitute_rval_in_lval_4_0);
	MR_init_label8(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,48,18,49,20,50,22,51,24)
	MR_init_label8(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,52,26,53,28,29,54,31,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__substitute_rval_in_lval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i33);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i48) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i49) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i52) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i54) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i33));
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i18);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i20);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i22);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i24);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i26);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i28);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i29);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rval_in_lval_4_0_i31);
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__exprn_aux__substitute_rval_in_lval_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module23)
	MR_init_entry1(ll_backend__exprn_aux__substitute_vars_in_rval_3_0);
	MR_init_label3(ll_backend__exprn_aux__substitute_vars_in_rval_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__substitute_vars_in_rval_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__exprn_aux__substitute_vars_in_rval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_vars_in_rval_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_vars_in_rval_3_0_i4);
MR_def_label(ll_backend__exprn_aux__substitute_vars_in_rval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__exprn_aux__substitute_vars_in_rval_3_0_i11);
MR_def_label(ll_backend__exprn_aux__substitute_vars_in_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module24)
	MR_init_entry1(ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_0);
	MR_init_label3(ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_0_i2);
	}
	MR_r6 = (MR_Word) MR_sp;
MR_def_label(ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr5, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	break; } /* end while */
MR_def_label(ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
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
	MR_decr_sp(2);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r6))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module25)
	MR_init_entry1(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0);
	MR_init_label3(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rval_in_rval_4_0,
		ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0_i4);
MR_def_label(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0_i11);
MR_def_label(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module26)
	MR_init_entry1(ll_backend__exprn_aux__substitute_rvals_in_rval_3_0);
	MR_init_label2(ll_backend__exprn_aux__substitute_rvals_in_rval_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__substitute_rvals_in_rval_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_0,
		ll_backend__exprn_aux__substitute_rvals_in_rval_3_0_i2);
MR_def_label(ll_backend__exprn_aux__substitute_rvals_in_rval_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0,
		ll_backend__exprn_aux__substitute_rvals_in_rval_3_0_i3);
MR_def_label(ll_backend__exprn_aux__substitute_rvals_in_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module27)
	MR_init_entry1(ll_backend__exprn_aux__vars_in_lval_2_0);
	MR_init_label6(ll_backend__exprn_aux__vars_in_lval_2_0,45,28,29,31,33,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__vars_in_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__vars_in_lval_2_0_i33);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i45) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_lval_2_0_i34));
MR_def_label(ll_backend__exprn_aux__vars_in_lval_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__exprn_aux__vars_in_rval_2_0,
		ll_backend__exprn_aux__vars_in_lval_2_0_i28);
MR_def_label(ll_backend__exprn_aux__vars_in_lval_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__vars_in_rval_2_0,
		ll_backend__exprn_aux__vars_in_lval_2_0_i29);
MR_def_label(ll_backend__exprn_aux__vars_in_lval_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__append_3_1);
MR_def_label(ll_backend__exprn_aux__vars_in_lval_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__exprn_aux__vars_in_rval_2_0);
MR_def_label(ll_backend__exprn_aux__vars_in_lval_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__exprn_aux__vars_in_lval_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module28)
	MR_init_entry1(ll_backend__exprn_aux__vars_in_rval_2_0);
	MR_init_label8(ll_backend__exprn_aux__vars_in_rval_2_0,4,6,7,9,13,14,15,11)
	MR_init_label1(ll_backend__exprn_aux__vars_in_rval_2_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__vars_in_rval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i9));
MR_def_label(ll_backend__exprn_aux__vars_in_rval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__exprn_aux__vars_in_lval_2_0);
MR_def_label(ll_backend__exprn_aux__vars_in_rval_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__exprn_aux__vars_in_rval_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i9));
MR_def_label(ll_backend__exprn_aux__vars_in_rval_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__vars_in_rval_2_0_i10);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__vars_in_rval_2_0_i11);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__vars_in_rval_2_0_i13);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__exprn_aux__vars_in_mem_ref_2_0);
MR_def_label(ll_backend__exprn_aux__vars_in_rval_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__exprn_aux__vars_in_rval_2_0,
		ll_backend__exprn_aux__vars_in_rval_2_0_i14);
MR_def_label(ll_backend__exprn_aux__vars_in_rval_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__exprn_aux__vars_in_rval_2_0,
		ll_backend__exprn_aux__vars_in_rval_2_0_i15);
MR_def_label(ll_backend__exprn_aux__vars_in_rval_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__append_3_1);
MR_def_label(ll_backend__exprn_aux__vars_in_rval_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__vars_in_rval_2_0_i9));
MR_def_label(ll_backend__exprn_aux__vars_in_rval_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module29)
	MR_init_entry1(ll_backend__exprn_aux__vars_in_mem_ref_2_0);
	MR_init_label4(ll_backend__exprn_aux__vars_in_mem_ref_2_0,14,22,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__vars_in_mem_ref_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__vars_in_mem_ref_2_0_i14);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__vars_in_mem_ref_2_0_i22);
	}
MR_def_label(ll_backend__exprn_aux__vars_in_mem_ref_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_np_tailcall_ent(ll_backend__exprn_aux__vars_in_rval_2_0);
MR_def_label(ll_backend__exprn_aux__vars_in_mem_ref_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__vars_in_rval_2_0,
		ll_backend__exprn_aux__vars_in_mem_ref_2_0_i7);
MR_def_label(ll_backend__exprn_aux__vars_in_mem_ref_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__vars_in_rval_2_0,
		ll_backend__exprn_aux__vars_in_mem_ref_2_0_i8);
MR_def_label(ll_backend__exprn_aux__vars_in_mem_ref_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module30)
	MR_init_entry1(ll_backend__exprn_aux__simplify_rval_2_2_0);
	MR_init_label8(ll_backend__exprn_aux__simplify_rval_2_2_0,6,2,3,11,8,9,16,13)
	MR_init_label3(ll_backend__exprn_aux__simplify_rval_2_2_0,14,19,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__simplify_rval_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__simplify_rval_2_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__simplify_rval_2_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(ll_backend__exprn_aux__simplify_rval_2_2_0,
		ll_backend__exprn_aux__simplify_rval_2_2_0_i6);
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__simplify_rval_2_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__simplify_rval_2_2_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__exprn_aux__simplify_rval_2_2_0,
		ll_backend__exprn_aux__simplify_rval_2_2_0_i11);
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__simplify_rval_2_2_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__simplify_rval_2_2_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__exprn_aux__simplify_rval_2_2_0,
		ll_backend__exprn_aux__simplify_rval_2_2_0_i16);
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__simplify_rval_2_2_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__simplify_rval_2_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_localcall_lab(ll_backend__exprn_aux__simplify_rval_2_2_0,
		ll_backend__exprn_aux__simplify_rval_2_2_0_i19);
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__simplify_rval_2_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module31)
	MR_init_entry1(ll_backend__exprn_aux__simplify_rval_2_0);
	MR_init_label3(ll_backend__exprn_aux__simplify_rval_2_0,13,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__simplify_rval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__exprn_aux__simplify_rval_2_2_0,
		ll_backend__exprn_aux__simplify_rval_2_0_i4);
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__simplify_rval_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__exprn_aux__simplify_rval_2_0_i13);
MR_def_label(ll_backend__exprn_aux__simplify_rval_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_addr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_addr_0;

MR_BEGIN_MODULE(ll_backend__exprn_aux_module32)
	MR_init_entry1(ll_backend__exprn_aux__rval_addrs_3_0);
	MR_init_label8(ll_backend__exprn_aux__rval_addrs_3_0,4,7,9,19,20,21,22,23)
	MR_init_label4(ll_backend__exprn_aux__rval_addrs_3_0,17,10,11,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__rval_addrs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i9));
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__exprn_aux__lval_addrs_3_0);
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i9));
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_addrs_3_0_i10);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_addrs_3_0_i17);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_addrs_3_0_i19);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__exprn_aux__mem_ref_addrs_3_0);
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_addrs_3_0,
		ll_backend__exprn_aux__rval_addrs_3_0_i20);
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_addrs_3_0,
		ll_backend__exprn_aux__rval_addrs_3_0_i21);
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, code_addr);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__exprn_aux__rval_addrs_3_0_i22);
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, data_addr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__exprn_aux__rval_addrs_3_0_i23);
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__rval_addrs_3_0_i9));
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_addrs_3_0_i11);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(3, MR_tempr1, 1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_addrs_3_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r2, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__exprn_aux__rval_addrs_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module33)
	MR_init_entry1(ll_backend__exprn_aux__lval_addrs_3_0);
	MR_init_label7(ll_backend__exprn_aux__lval_addrs_3_0,45,28,29,30,31,32,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__lval_addrs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__lval_addrs_3_0_i35);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i45) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__lval_addrs_3_0_i35));
MR_def_label(ll_backend__exprn_aux__lval_addrs_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__exprn_aux__rval_addrs_3_0,
		ll_backend__exprn_aux__lval_addrs_3_0_i28);
MR_def_label(ll_backend__exprn_aux__lval_addrs_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__rval_addrs_3_0,
		ll_backend__exprn_aux__lval_addrs_3_0_i29);
MR_def_label(ll_backend__exprn_aux__lval_addrs_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, code_addr);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__exprn_aux__lval_addrs_3_0_i30);
MR_def_label(ll_backend__exprn_aux__lval_addrs_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, data_addr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__exprn_aux__lval_addrs_3_0_i31);
MR_def_label(ll_backend__exprn_aux__lval_addrs_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__exprn_aux__lval_addrs_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__exprn_aux__rval_addrs_3_0);
MR_def_label(ll_backend__exprn_aux__lval_addrs_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module34)
	MR_init_entry1(ll_backend__exprn_aux__mem_ref_addrs_3_0);
	MR_init_label2(ll_backend__exprn_aux__mem_ref_addrs_3_0,8,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__mem_ref_addrs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__mem_ref_addrs_3_0_i8);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__mem_ref_addrs_3_0_i5);
	}
MR_def_label(ll_backend__exprn_aux__mem_ref_addrs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__exprn_aux__mem_ref_addrs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_tailcall_ent(ll_backend__exprn_aux__rval_addrs_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module35)
	MR_init_entry1(ll_backend__exprn_aux__rval_list_addrs_3_0);
	MR_init_label5(ll_backend__exprn_aux__rval_list_addrs_3_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__rval_list_addrs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__rval_list_addrs_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__rval_addrs_3_0,
		ll_backend__exprn_aux__rval_list_addrs_3_0_i4);
MR_def_label(ll_backend__exprn_aux__rval_list_addrs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_localcall_lab(ll_backend__exprn_aux__rval_list_addrs_3_0,
		ll_backend__exprn_aux__rval_list_addrs_3_0_i5);
MR_def_label(ll_backend__exprn_aux__rval_list_addrs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, code_addr);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__exprn_aux__rval_list_addrs_3_0_i6);
MR_def_label(ll_backend__exprn_aux__rval_list_addrs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, data_addr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__exprn_aux__rval_list_addrs_3_0_i7);
MR_def_label(ll_backend__exprn_aux__rval_list_addrs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__exprn_aux__rval_list_addrs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module36)
	MR_init_entry1(ll_backend__exprn_aux__lval_list_addrs_3_0);
	MR_init_label5(ll_backend__exprn_aux__lval_list_addrs_3_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__exprn_aux__lval_list_addrs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__lval_list_addrs_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__lval_addrs_3_0,
		ll_backend__exprn_aux__lval_list_addrs_3_0_i4);
MR_def_label(ll_backend__exprn_aux__lval_list_addrs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_localcall_lab(ll_backend__exprn_aux__lval_list_addrs_3_0,
		ll_backend__exprn_aux__lval_list_addrs_3_0_i5);
MR_def_label(ll_backend__exprn_aux__lval_list_addrs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, code_addr);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__exprn_aux__lval_list_addrs_3_0_i6);
MR_def_label(ll_backend__exprn_aux__lval_list_addrs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, data_addr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__exprn_aux__lval_list_addrs_3_0_i7);
MR_def_label(ll_backend__exprn_aux__lval_list_addrs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__exprn_aux__lval_list_addrs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module37)
	MR_init_entry1(fn__ll_backend__exprn_aux__var_lval_to_rval_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__exprn_aux__var_lval_to_rval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_118_97_114_95_108_118_97_108_95_116_111_95_114_118_97_108_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module38)
	MR_init_entry1(fn__ll_backend__exprn_aux__lval_to_rval_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__exprn_aux__lval_to_rval_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_input_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_output_0;

MR_BEGIN_MODULE(ll_backend__exprn_aux_module39)
	MR_init_entry1(ll_backend__exprn_aux__transform_lval_in_component_5_0);
	MR_init_label8(ll_backend__exprn_aux__transform_lval_in_component_5_0,33,6,34,8,9,17,10,36)
	MR_init_label3(ll_backend__exprn_aux__transform_lval_in_component_5_0,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__transform_lval_in_component_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_component_5_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_component_5_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_component_5_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__exprn_aux__transform_lval_in_component_5_0_i9));
MR_def_label(ll_backend__exprn_aux__transform_lval_in_component_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_input);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_input);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__exprn_aux__transform_lval_in_component_5_0_i6);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_component_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_component_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_output);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_output);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__exprn_aux__transform_lval_in_component_5_0_i8);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_component_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_component_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__transform_lval_in_component_5_0_i10);
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_component_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__exprn_aux__transform_lval_in_component_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),1)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__transform_lval_in_component_5_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r5 = MR_ctfield(3, MR_tempr1, 3);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__exprn_aux__transform_lval_in_component_5_0_i36);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_ctfield(3, MR_tempr1, 1);
	MR_tfield(3, MR_r1, 2) = MR_ctfield(3, MR_tempr1, 2);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r2 = MR_r4;
	MR_proceed();
	}
MR_def_label(ll_backend__exprn_aux__transform_lval_in_component_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(1, MR_r5, 0);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__exprn_aux__transform_lval_in_component_5_0_i14);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_component_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__exprn_aux__transform_lval_in_component_5_0_i15);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_component_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		ll_backend__exprn_aux__transform_lval_in_component_5_0_i16);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_component_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = MR_tempr1;
	MR_tfield(3, MR_r1, 4) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module40)
	MR_init_entry1(ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_0);
	MR_init_label1(ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_r3 = MR_ctfield(0, MR_r3, 4);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_0_i2);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module41)
	MR_init_entry1(ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_0);
	MR_init_label1(ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_0_i2);
MR_def_label(ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module42)
	MR_init_entry1(__Unify___ll_backend__exprn_aux__exprn_opts_0_0);
	MR_init_label2(__Unify___ll_backend__exprn_aux__exprn_opts_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__exprn_aux__exprn_opts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__exprn_aux__exprn_opts_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__exprn_aux__exprn_opts_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__exprn_aux__exprn_opts_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__exprn_aux__exprn_opts_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__exprn_aux__exprn_opts_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__exprn_aux__exprn_opts_0_0,1)
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

MR_BEGIN_MODULE(ll_backend__exprn_aux_module43)
	MR_init_entry1(__Compare___ll_backend__exprn_aux__exprn_opts_0_0);
	MR_init_label6(__Compare___ll_backend__exprn_aux__exprn_opts_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__exprn_aux__exprn_opts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__exprn_aux__exprn_opts_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__exprn_aux__exprn_opts_0_0_i2);
MR_def_label(__Compare___ll_backend__exprn_aux__exprn_opts_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__exprn_aux__exprn_opts_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__exprn_aux__exprn_opts_0_0_i5);
MR_def_label(__Compare___ll_backend__exprn_aux__exprn_opts_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__exprn_aux__exprn_opts_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__exprn_aux__exprn_opts_0_0_i9);
MR_def_label(__Compare___ll_backend__exprn_aux__exprn_opts_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__exprn_aux__exprn_opts_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__exprn_aux__exprn_opts_0_0_i13);
MR_def_label(__Compare___ll_backend__exprn_aux__exprn_opts_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__exprn_aux__exprn_opts_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__exprn_aux__exprn_opts_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module44)
	MR_init_entry1(__Unify___ll_backend__exprn_aux__transform_lval_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__exprn_aux__transform_lval_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(ll_backend__exprn_aux_module45)
	MR_init_entry1(__Compare___ll_backend__exprn_aux__transform_lval_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__exprn_aux__transform_lval_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module46)
	MR_init_entry1(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_118_97_114_95_108_118_97_108_95_116_111_95_114_118_97_108_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_118_97_114_95_108_118_97_108_95_116_111_95_114_118_97_108_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module47)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,47,7,5,9,48,13,14,21)
	MR_init_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,18,19,20,16,17,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i47) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i15) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i48) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i14));
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_decr_sp_and_return(5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r3, 0);
	MR_r3 = MR_ctfield(2, MR_r3, 1);
	MR_np_localcall_lab(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i15);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i16);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),2)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i18);
	}
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i21);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	}
	MR_np_localcall_lab(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i19);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i20);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_localcall_lab(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i17);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__exprn_aux_module48)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0);
	MR_init_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0,9,6,7,8,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r3,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0_i4);
	}
	if (MR_PTAG_TEST(MR_r3,2)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0_i6);
	}
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_101_120_112_114_110_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__exprn_aux_maybe_bunch_0(void)
{
	ll_backend__exprn_aux_module0();
	ll_backend__exprn_aux_module1();
	ll_backend__exprn_aux_module2();
	ll_backend__exprn_aux_module3();
	ll_backend__exprn_aux_module4();
	ll_backend__exprn_aux_module5();
	ll_backend__exprn_aux_module6();
	ll_backend__exprn_aux_module7();
	ll_backend__exprn_aux_module8();
	ll_backend__exprn_aux_module9();
	ll_backend__exprn_aux_module10();
	ll_backend__exprn_aux_module11();
	ll_backend__exprn_aux_module12();
	ll_backend__exprn_aux_module13();
	ll_backend__exprn_aux_module14();
	ll_backend__exprn_aux_module15();
	ll_backend__exprn_aux_module16();
	ll_backend__exprn_aux_module17();
	ll_backend__exprn_aux_module18();
	ll_backend__exprn_aux_module19();
	ll_backend__exprn_aux_module20();
	ll_backend__exprn_aux_module21();
	ll_backend__exprn_aux_module22();
	ll_backend__exprn_aux_module23();
	ll_backend__exprn_aux_module24();
	ll_backend__exprn_aux_module25();
	ll_backend__exprn_aux_module26();
	ll_backend__exprn_aux_module27();
	ll_backend__exprn_aux_module28();
	ll_backend__exprn_aux_module29();
	ll_backend__exprn_aux_module30();
	ll_backend__exprn_aux_module31();
	ll_backend__exprn_aux_module32();
	ll_backend__exprn_aux_module33();
	ll_backend__exprn_aux_module34();
	ll_backend__exprn_aux_module35();
	ll_backend__exprn_aux_module36();
	ll_backend__exprn_aux_module37();
	ll_backend__exprn_aux_module38();
	ll_backend__exprn_aux_module39();
}

static void mercury__ll_backend__exprn_aux_maybe_bunch_1(void)
{
	ll_backend__exprn_aux_module40();
	ll_backend__exprn_aux_module41();
	ll_backend__exprn_aux_module42();
	ll_backend__exprn_aux_module43();
	ll_backend__exprn_aux_module44();
	ll_backend__exprn_aux_module45();
	ll_backend__exprn_aux_module46();
	ll_backend__exprn_aux_module47();
	ll_backend__exprn_aux_module48();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__exprn_aux__init(void);
void mercury__ll_backend__exprn_aux__init_type_tables(void);
void mercury__ll_backend__exprn_aux__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__exprn_aux__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__exprn_aux__init_complexity_procs(void);
#endif

void mercury__ll_backend__exprn_aux__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__exprn_aux_maybe_bunch_0();
	mercury__ll_backend__exprn_aux_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__exprn_aux__type_ctor_info_transform_lval_1,
		ll_backend__exprn_aux__transform_lval_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__exprn_aux__type_ctor_info_exprn_opts_0,
		ll_backend__exprn_aux__exprn_opts_0_0);
	mercury__ll_backend__exprn_aux__init_debugger();
}

void mercury__ll_backend__exprn_aux__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__exprn_aux__type_ctor_info_transform_lval_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__exprn_aux__type_ctor_info_exprn_opts_0);
	}
}


void mercury__ll_backend__exprn_aux__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__exprn_aux__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__exprn_aux__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
