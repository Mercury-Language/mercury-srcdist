/*
** Automatically generated from `lookup_switch.m'
** by the Mercury compiler,
** version rotd-2011-03-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__lookup_switch__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.lookup_switch.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.lookup_switch.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.lookup_switch.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ll_backend.lookup_switch.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "ll_backend.lookup_switch.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.lookup_switch.c"
#line 49 "ll_backend.lookup_switch.c"
#include "ll_backend.lookup_switch.mh"

#line 52 "ll_backend.lookup_switch.c"
#line 53 "ll_backend.lookup_switch.c"
#ifndef LL_BACKEND__LOOKUP_SWITCH_DECL_GUARD
#define LL_BACKEND__LOOKUP_SWITCH_DECL_GUARD

#line 57 "ll_backend.lookup_switch.c"
#line 58 "ll_backend.lookup_switch.c"

#endif
#line 61 "ll_backend.lookup_switch.c"

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
	MR_Word * f3[3];
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

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__lookup_switch__type_ctor_info_case_kind_0,
	mercury_data_ll_backend__lookup_switch__type_ctor_info_lookup_switch_info_1,
	mercury_data_ll_backend__lookup_switch__type_ctor_info_record_switch_lookup_1;
MR_decl_label9(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0, 21,3,4,5,7,9,6,10,12)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0, 2,3,4,5,6,7,8,11)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0, 5,3,6,8,11,17,19,21,22,23)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0, 25,27,24,28,29,30,32,34,35,16)
MR_decl_label9(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0, 37,13,39,41,44,45,46,47,1)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0, 4,3,5,2,8,7,9,12,13,15)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0, 16,19,33,34,35,37,38,36,39,40)
MR_decl_label3(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0, 10,3,4)
MR_decl_label2(ll_backend__lookup_switch__construct_fail_row_4_0, 3,4)
MR_decl_label10(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0, 60,5,6,59,10,9,12,18,25,26)
MR_decl_label1(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0, 28)
MR_decl_label4(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0, 24,3,6,4)
MR_decl_label5(ll_backend__lookup_switch__generate_bit_vec_args_3_0, 11,3,8,12,2)
MR_decl_label5(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0, 2,3,4,5,6)
MR_decl_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0, 6,7,8,9,13,14,5,16,17,18)
MR_decl_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0, 35,36,37,38,39,40,41,42,43,44)
MR_decl_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0, 45,46,47,48,49,53,54,55,56,57)
MR_decl_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0, 58,59,60,62,87,88,97,98,99,100)
MR_decl_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0, 101,102,103,104,105,106,107,108,109,110)
MR_decl_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0, 111,112,113,114,115,116,117,118,119,120)
MR_decl_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0, 121,15,122,123,124,4,127,140,141,146)
MR_decl_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0, 149,150,155,156,157,158,159,3,160,2)
MR_decl_label10(ll_backend__lookup_switch__generate_int_lookup_switch_13_0, 2,7,10,9,14,8,19,20,16,22)
MR_decl_label6(ll_backend__lookup_switch__generate_int_lookup_switch_13_0, 25,28,29,15,30,31)
MR_decl_label10(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0, 4,5,6,8,10,11,12,16,19,14)
MR_decl_label10(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0, 24,26,27,28,31,41,42,43,44,52)
MR_decl_label4(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0, 53,56,57,58)
MR_decl_label10(ll_backend__lookup_switch__is_lookup_switch_9_0, 2,4,5,7,8,9,11,12,13,15)
MR_decl_label7(ll_backend__lookup_switch__is_lookup_switch_9_0, 18,16,24,26,27,28,1)
MR_decl_label1(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_int_4_0, 2)
MR_decl_label1(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_string_4_0, 2)
MR_decl_label2(fn__ll_backend__lookup_switch__case_kind_to_string_1_0, 3,4)
MR_decl_label9(fn__ll_backend__lookup_switch__default_value_for_type_1_0, 3,6,9,12,15,18,21,97,24)
MR_decl_label5(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0, 4,7,9,13,1)
MR_decl_label6(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0, 3,2,5,10,14,51)
MR_decl_static(fn__ll_backend__lookup_switch__this_file_0_0)
MR_def_extern_entry(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_int_4_0)
MR_def_extern_entry(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_string_4_0)
MR_def_extern_entry(ll_backend__lookup_switch__is_lookup_switch_9_0)
MR_decl_static(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0)
MR_decl_static(ll_backend__lookup_switch__generate_bit_vec_args_3_0)
MR_decl_static(fn__ll_backend__lookup_switch__case_kind_to_string_1_0)
MR_decl_static(ll_backend__lookup_switch__generate_code_for_each_kind_18_0)
MR_def_extern_entry(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0)
MR_decl_static(ll_backend__lookup_switch__construct_fail_row_4_0)
MR_decl_static(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0)
MR_decl_static(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0)
MR_def_extern_entry(ll_backend__lookup_switch__generate_int_lookup_switch_13_0)
MR_def_extern_entry(fn__ll_backend__lookup_switch__default_value_for_type_1_0)
MR_def_extern_entry(__Unify___ll_backend__lookup_switch__case_kind_0_0)
MR_def_extern_entry(__Compare___ll_backend__lookup_switch__case_kind_0_0)
MR_def_extern_entry(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0)
MR_def_extern_entry(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0)
MR_def_extern_entry(__Unify___ll_backend__lookup_switch__record_switch_lookup_1_0)
MR_def_extern_entry(__Compare___ll_backend__lookup_switch__record_switch_lookup_1_0)
MR_decl_static(ll_backend__lookup_switch__IntroducedFrom__pred__is_lookup_switch__209__1_3_0)
MR_decl_static(ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__501__1_2_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_soln_consts_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
MR_CTOR1_ADDR(backend_libs__switch_util, soln_consts),
MR_CTOR0_ADDR(ll_backend__llds, rval)
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
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, rval)
}
},
{
{
MR_TAG_COMMON(3,6,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,6,1),
MR_TAG_COMMON(1,0,5)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,2)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__lookup_switch, case_kind)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__is_lookup_switch_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__lookup_switch__is_lookup_switch_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_COMMON(0,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__construct_fail_row_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_3;
static const struct mercury_type_3 mercury_common_3[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, llds_type),
MR_CTOR0_ADDR(ll_backend__llds, rval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__lookup_switch__construct_fail_row_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, llds_type),
MR_CTOR0_ADDR(ll_backend__llds, rval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,7),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, llds_type),
MR_CTOR0_ADDR(ll_backend__llds, rval)
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(fn__ll_backend__lookup_switch__default_value_for_type_1_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(fn__ll_backend__lookup_switch__default_value_for_type_1_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(fn__ll_backend__lookup_switch__default_value_for_type_1_0),
0
},
};

static const struct mercury_type_5 mercury_common_5[3] =
{
{
0
},
{
-1
},
{
1
},
};

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
static const struct mercury_type_6 mercury_common_6[6] =
{
{
0,
MR_TAG_COMMON(1,5,0)
},
{
0,
MR_TAG_COMMON(1,5,1)
},
{
0,
(MR_Word *) &mercury_float_const_0pt0000000000000000
},
{
0,
MR_TAG_COMMON(3,6,2)
},
{
0,
MR_TAG_COMMON(3,11,0)
},
{
0,
MR_TAG_COMMON(1,5,2)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_2;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(7,0)
},
};

static const struct mercury_type_9 mercury_common_9[2] =
{
{
MR_string_const("simple lookup switch", 20)
},
{
MR_string_const("several soln lookup switch", 26)
},
};

static const struct mercury_type_10 mercury_common_10[2] =
{
{
MR_TAG_COMMON(1,9,0),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(1,9,1),
MR_string_const("", 0)
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
1,
MR_string_const("", 0)
},
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0 = {
	"kind_zero_solns",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1 = {
	"kind_one_soln",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2 = {
	"kind_several_solns",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__lookup_switch__enum_value_ordered_case_kind_0[] = {
	&mercury_data_ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0,
	&mercury_data_ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1,
	&mercury_data_ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__lookup_switch__enum_name_ordered_case_kind_0[] = {
	&mercury_data_ll_backend__lookup_switch__enum_functor_desc_case_kind_0_1,
	&mercury_data_ll_backend__lookup_switch__enum_functor_desc_case_kind_0_2,
	&mercury_data_ll_backend__lookup_switch__enum_functor_desc_case_kind_0_0
};

const MR_Integer mercury_data_ll_backend__lookup_switch__functor_number_map_case_kind_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__lookup_switch__type_ctor_info_case_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__lookup_switch__case_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__lookup_switch__case_kind_0_0)),
	"ll_backend.lookup_switch",
	"case_kind",
	{ (void *)mercury_data_ll_backend__lookup_switch__enum_name_ordered_case_kind_0 },
	{ (void *)mercury_data_ll_backend__lookup_switch__enum_value_ordered_case_kind_0 },
	3,
	4,
	mercury_data_ll_backend__lookup_switch__functor_number_map_case_kind_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_case_consts_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_backend_libs__switch_util__pti_case_consts_2__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
	&mercury_data_backend_libs__switch_util__type_ctor_info_case_consts_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_llds_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__lookup_switch__field_types_lookup_switch_info_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__switch_util__pti_case_consts_2__pseudo_1__plain_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_ll_backend__lookup_switch__field_names_lookup_switch_info_1_0[] = {
	"lsi_cases",
	"lsi_variables",
	"lsi_field_types",
	"lsi_liveness"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0 = {
	"lookup_switch_info",
	4,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__lookup_switch__field_types_lookup_switch_info_1_0,
	mercury_data_ll_backend__lookup_switch__field_names_lookup_switch_info_1_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0[] = {
	&mercury_data_ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0

};

const MR_DuPtagLayout mercury_data_ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__lookup_switch__du_stag_ordered_lookup_switch_info_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1[] = {
	&mercury_data_ll_backend__lookup_switch__du_functor_desc_lookup_switch_info_1_0
};

const MR_Integer mercury_data_ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__lookup_switch__type_ctor_info_lookup_switch_info_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0)),
	"ll_backend.lookup_switch",
	"lookup_switch_info",
	{ (void *)mercury_data_ll_backend__lookup_switch__du_name_ordered_lookup_switch_info_1 },
	{ (void *)mercury_data_ll_backend__lookup_switch__du_ptag_ordered_lookup_switch_info_1 },
	1,
	4,
	mercury_data_ll_backend__lookup_switch__functor_number_map_lookup_switch_info_1
};

static const MR_FA_TypeInfo_Struct1 mercury_data_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0 = {
	&mercury_data_backend_libs__switch_util__type_ctor_info_soln_consts_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_1__plain_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;

static const MR_VA_PseudoTypeInfo_Struct4 mercury_data___vpti_pred_4__plain_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0__plain_hlds__hlds_data__type_ctor_info_tagged_cons_id_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_PseudoTypeInfo) &mercury_data_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__plain_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__plain_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__lookup_switch__type_ctor_info_record_switch_lookup_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__lookup_switch__record_switch_lookup_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__lookup_switch__record_switch_lookup_1_0)),
	"ll_backend.lookup_switch",
	"record_switch_lookup",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_4__plain_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0__plain_hlds__hlds_data__type_ctor_info_tagged_cons_id_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_backend_libs__switch_util__ti_soln_consts_1ll_backend__llds__type_ctor_info_rval_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_3 = {
{
MR_FUNCTION,
"ll_backend.lookup_switch",
"ll_backend.lookup_switch",
"default_value_for_type",
2,
0
},
"ll_backend.lookup_switch",
"lookup_switch.m",
512,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_2 = {
{
MR_PREDICATE,
"std_util",
"std_util",
"negate",
1,
0
},
"ll_backend.lookup_switch",
"lookup_switch.m",
501,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_1 = {
{
MR_PREDICATE,
"ll_backend.lookup_switch",
"ll_backend.lookup_switch",
"lambda_lookup_switch_m_501",
2,
0
},
"ll_backend.lookup_switch",
"lookup_switch.m",
501,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__construct_fail_row_4_0_1 = {
{
MR_FUNCTION,
"ll_backend.lookup_switch",
"ll_backend.lookup_switch",
"default_value_for_type",
2,
0
},
"ll_backend.lookup_switch",
"lookup_switch.m",
843,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0_1 = {
{
MR_FUNCTION,
"ll_backend.lookup_switch",
"ll_backend.lookup_switch",
"default_value_for_type",
2,
0
},
"ll_backend.lookup_switch",
"lookup_switch.m",
476,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_switch__is_lookup_switch_9_0_1 = {
{
MR_PREDICATE,
"ll_backend.lookup_switch",
"ll_backend.lookup_switch",
"lambda_lookup_switch_m_209",
3,
0
},
"ll_backend.lookup_switch",
"lookup_switch.m",
209,
"21"
};



MR_BEGIN_MODULE(ll_backend__lookup_switch_module0)
	MR_init_entry1(fn__ll_backend__lookup_switch__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__lookup_switch__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__lookup_switch__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_switch.m", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(require__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module1)
	MR_init_entry1(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_int_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_int_4_0);
	MR_init_label1(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_int_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_lookup_for_tagged_cons_id_int'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_int_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_int_4_0_i2);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_int_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_switch.m", 15);
	MR_r2 = (MR_Word) MR_string_const("record_lookup_for_tagged_cons_id: not int_tag", 45);
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module2)
	MR_init_entry1(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_string_4_0);
	MR_init_label1(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_string_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_lookup_for_tagged_cons_id_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_string_4_0_i2);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
MR_def_label(ll_backend__lookup_switch__record_lookup_for_tagged_cons_id_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_switch.m", 15);
	MR_r2 = (MR_Word) MR_string_const("record_lookup_for_tagged_cons_id: not int_tag", 45);
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__lookup_util__figure_out_output_vars_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);
MR_decl_entry(fn__ll_backend__code_info__get_var_types_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(backend_libs__switch_util__project_all_to_one_solution_2_0);
MR_decl_entry(assoc_list__values_2_0);
MR_decl_entry(backend_libs__switch_util__project_solns_to_rval_lists_3_0);
MR_decl_entry(ll_backend__code_info__get_exprn_opts_2_0);
MR_decl_entry(fn__ll_backend__llds__get_unboxed_floats_1_0);
MR_decl_entry(ll_backend__global_data__find_general_llds_types_4_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module3)
	MR_init_entry1(ll_backend__lookup_switch__is_lookup_switch_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__is_lookup_switch_9_0);
	MR_init_label10(ll_backend__lookup_switch__is_lookup_switch_9_0,2,4,5,7,8,9,11,12,13,15)
	MR_init_label7(ll_backend__lookup_switch__is_lookup_switch_9_0,18,16,24,26,27,28,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_lookup_switch'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__lookup_switch__is_lookup_switch_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(7) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(8) = MR_tempr1;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__figure_out_output_vars_3_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i2);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i4);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i5);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i7);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i8);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tempr1;
	MR_r9 = (MR_Integer) 0;
	MR_r10 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i9);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__is_lookup_switch_9_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(7) = MR_r4;
	MR_sv(5) = MR_r7;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i11);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i12);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_var_types_1_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i13);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__lookup_switch__IntroducedFrom__pred__is_lookup_switch__209__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i15);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(backend_libs__switch_util__project_all_to_one_solution_2_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i18);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__is_lookup_switch_9_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(assoc_list__values_2_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i24);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr2 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__project_solns_to_rval_lists_3_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i24);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_exprn_opts_2_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i26);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__llds__get_unboxed_floats_1_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i27);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__global_data__find_general_llds_types_4_0,
		ll_backend__lookup_switch__is_lookup_switch_9_0_i28);
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__is_lookup_switch_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__lookup_switch__is_lookup_switch_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module4)
	MR_init_entry1(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0);
	MR_init_label4(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0,24,3,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_simple_int_lookup_vector'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0_i6);
MR_def_label(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0_i24);
	}
MR_def_label(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r1 = MR_r5;
	MR_r4 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0_i24);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__lookup_switch_module5)
	MR_init_entry1(ll_backend__lookup_switch__generate_bit_vec_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__generate_bit_vec_args_3_0);
	MR_init_label5(ll_backend__lookup_switch__generate_bit_vec_args_3_0,11,3,8,12,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_bit_vec_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_switch__generate_bit_vec_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_bit_vec_args_3_0_i2);
	}
	MR_r7 = (MR_Word) MR_sp;
MR_def_label(ll_backend__lookup_switch__generate_bit_vec_args_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_r3 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_bit_vec_args_3_0_i3);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_GOTO_LAB(ll_backend__lookup_switch__generate_bit_vec_args_3_0_i8);
	}
MR_def_label(ll_backend__lookup_switch__generate_bit_vec_args_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	}
MR_def_label(ll_backend__lookup_switch__generate_bit_vec_args_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_bit_vec_args_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__lookup_switch__generate_bit_vec_args_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r7))
		continue;
	MR_proceed();
	break; } /* end while */
MR_def_label(ll_backend__lookup_switch__generate_bit_vec_args_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__lookup_switch_module6)
	MR_init_entry1(fn__ll_backend__lookup_switch__case_kind_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__lookup_switch__case_kind_to_string_1_0);
	MR_init_label2(fn__ll_backend__lookup_switch__case_kind_to_string_1_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'case_kind_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__lookup_switch__case_kind_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__lookup_switch__case_kind_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("kind_one_soln", 13);
	MR_proceed();
MR_def_label(fn__ll_backend__lookup_switch__case_kind_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__lookup_switch__case_kind_to_string_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("kind_several_solns", 18);
	MR_proceed();
MR_def_label(fn__ll_backend__lookup_switch__case_kind_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("kind_zero_solns", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__lookup_util__generate_offset_assigns_5_0);
MR_decl_entry(ll_backend__lookup_util__set_liveness_and_end_branch_7_0);
MR_decl_entry(ll_backend__code_info__release_reg_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);
MR_decl_entry(ll_backend__code_info__get_globals_2_0);
MR_decl_entry(ll_backend__code_info__produce_vars_5_0);
MR_decl_entry(fn__cord__from_list_1_0);
MR_decl_entry(ll_backend__code_info__maybe_save_ticket_5_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(ll_backend__code_info__maybe_save_hp_5_0);
MR_decl_entry(ll_backend__code_info__prepare_for_disj_hijack_5_0);
MR_decl_entry(ll_backend__code_info__make_resume_point_6_0);
MR_decl_entry(ll_backend__code_info__effect_resume_point_5_0);
MR_decl_entry(ll_backend__code_info__flush_resume_vars_to_stack_3_0);
MR_decl_entry(ll_backend__code_info__pop_resume_point_2_0);
MR_decl_entry(ll_backend__code_info__pickup_zombies_3_0);
MR_decl_entry(ll_backend__code_info__make_vars_forward_dead_3_0);
MR_decl_entry(ll_backend__code_info__generate_resume_point_4_0);
MR_decl_entry(ll_backend__code_info__maybe_reset_ticket_3_0);
MR_decl_entry(ll_backend__code_info__maybe_restore_hp_2_0);
MR_decl_entry(ll_backend__code_info__acquire_reg_not_in_storemap_4_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(ll_backend__code_info__undo_disj_hijack_4_0);
MR_decl_entry(ll_backend__code_info__generate_failure_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module7)
	MR_init_entry1(ll_backend__lookup_switch__generate_code_for_each_kind_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__generate_code_for_each_kind_18_0);
	MR_init_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,6,7,8,9,13,14,5,16,17,18)
	MR_init_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,35,36,37,38,39,40,41,42,43,44)
	MR_init_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,45,46,47,48,49,53,54,55,56,57)
	MR_init_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,58,59,60,62,87,88,97,98,99,100)
	MR_init_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,101,102,103,104,105,106,107,108,109,110)
	MR_init_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,111,112,113,114,115,116,117,118,119,120)
	MR_init_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,121,15,122,123,124,4,127,140,141,146)
	MR_init_label10(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,149,150,155,156,157,158,159,3,160,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_code_for_each_kind'/18 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_switch__generate_code_for_each_kind_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(34);
	MR_sv(34) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r16 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(15) = MR_tempr1;
	MR_sv(16) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r15;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i6);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_offset_assigns_5_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i7);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i8);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r2;
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i9);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("goto end of switch from one_soln", 32);
	MR_sv(31) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i13);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i14);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 13);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(30);
	MR_r3 = MR_sv(31);
	MR_GOTO_LAB(ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i4);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r16,2)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i15);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r15;
	MR_sv(14) = MR_tempr1;
	MR_sv(15) = MR_r16;
	MR_sv(16) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i16);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i17);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_vars_5_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i18);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr8 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = ((MR_Integer) MR_tempr8 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr5, 1) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tfield(3, MR_tempr5, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr5, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr6, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr6, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Setup current slot in the later solution array", 46);
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr7, 1) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tfield(3, MR_tempr7, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr7, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = MR_sv(11);
	MR_tfield(3, MR_tempr5, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("Setup maximum slot in the later solution array", 46);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr7;
	MR_sv(17) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_sv(19) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i35);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(19);
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_ticket_5_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i36);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_sv(20) = MR_r2;
	MR_sv(21) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 290;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i37);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_hp_5_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i38);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_sv(22) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__prepare_for_disj_hijack_5_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i39);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_sv(24) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(25) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i40);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(25);
	}
	MR_np_call_localret_ent(ll_backend__code_info__make_resume_point_6_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i41);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__effect_resume_point_5_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i42);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_offset_assigns_5_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i43);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__flush_resume_vars_to_stack_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i44);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__pop_resume_point_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i45);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__pickup_zombies_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i46);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__make_vars_forward_dead_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i47);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i48);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r2;
	MR_sv(31) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i49);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("goto end of switch from several_soln", 36);
	MR_sv(28) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i53);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(33) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i54);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_resume_point_4_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i55);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_sv(28) = MR_r2;
	MR_r1 = MR_sv(20);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_ticket_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i56);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_restore_hp_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i57);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_not_in_storemap_4_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i58);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i59);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i60);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_sv(32) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i62);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tempr14 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tempr15 = MR_sv(28);
	MR_tfield(3, MR_tempr2, 1) = MR_tempr15;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Init later base register", 24);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr15;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr5, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 25);
	MR_tfield(3, MR_tempr6, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr6, 3) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 1);
	MR_tempr16 = MR_sv(29);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr8, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr8, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr8, 1) = MR_tempr6;
	MR_tfield(3, MR_tempr8, 2) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr9, 1) = (MR_Word) MR_string_const("Jump to undo hijack code if there are no more solutions", 55);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr8, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr10, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr10, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr10, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr8, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr8, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr8, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr8, 3) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr10, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr10, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr10, 1) = MR_tempr14;
	MR_tfield(3, MR_tempr10, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr8, 0) = MR_tempr10;
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_string_const("Update current slot in the later solution array", 47);
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr11, 0) = MR_sv(30);
	MR_tag_alloc_heap(MR_tempr12, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr12, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr12, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr13, 0) = MR_tempr12;
	MR_tfield(0, MR_tempr13, 1) = (MR_Word) MR_string_const("Jump around undo hijack code", 28);
	MR_tag_alloc_heap(MR_tempr12, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr12, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr12, 1) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = MR_tempr12;
	MR_tfield(0, MR_tempr7, 1) = (MR_Word) MR_string_const("Undo hijack code", 16);
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr12, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr12, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr13;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr12, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = MR_tempr7;
	MR_sv(29) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i87);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(23);
	MR_sv(23) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(32);
	}
	MR_np_call_localret_ent(ll_backend__code_info__undo_disj_hijack_4_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i88);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(30);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Return later answer code", 24);
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(29);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(28);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Compute base address in later array for this solution", 53);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr5;
	MR_sv(29) = MR_r1;
	MR_sv(30) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i97);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(25);
	MR_sv(25) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_sv(30);
	}
	MR_np_call_localret_ent(ll_backend__code_info__effect_resume_point_5_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i98);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(28);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_offset_assigns_5_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i99);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__flush_resume_vars_to_stack_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i100);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__pop_resume_point_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i101);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__pickup_zombies_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i102);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__make_vars_forward_dead_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i103);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(31);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i104);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_sv(31) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(33);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i105);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(28);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i106);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i107);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(29);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i108);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i109);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i110);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i111);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i112);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(33);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i113);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i114);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(27);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i115);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i116);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i117);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i118);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i119);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i120);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i121);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 24);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(30);
	MR_r3 = MR_sv(31);
	MR_GOTO_LAB(ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i4);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(15) = MR_r16;
	MR_sv(16) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r15;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i122);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i123);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i124);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 25);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(16),0,0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i2);
	}
	MR_sv(14) = MR_r2;
	MR_sv(17) = MR_tfield(1, MR_sv(16), 0);
	MR_sv(30) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i127);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(13);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 3) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr5, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_sv(18) = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_string_const("skip to next kind in several_soln lookup switch", 47);
	MR_sv(13) = MR_r1;
	MR_tempr4 = MR_sv(15);
	MR_sv(15) = MR_r2;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__ll_backend__lookup_switch__case_kind_to_string_1_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i140);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("This kind is ", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i141);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(18);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i146);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_sv(13);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("next kind in several_soln lookup switch", 39);
	MR_sv(13) = MR_r1;
	MR_r2 = MR_sv(17);
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__ll_backend__lookup_switch__case_kind_to_string_1_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i149);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Next kind is ", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i150);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(17);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i155);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	MR_r14 = MR_sv(30);
	MR_r15 = MR_sv(15);
	}
	MR_np_localcall_lab(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i156);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i157);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i158);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i159);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(34);
	}
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__lookup_switch__this_file_0_0,
		ll_backend__lookup_switch__generate_code_for_each_kind_18_0_i160);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_code_for_each_kind: no kinds", 37);
	MR_succip_word = MR_sv(34);
	MR_decr_sp(34);
	MR_np_tailcall_ent(require__unexpected_2_0);
MR_def_label(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(34);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__acquire_temp_slot_5_0);
MR_decl_entry(ll_backend__code_info__set_resume_point_to_unknown_2_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module8)
	MR_init_entry1(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__generate_code_for_all_kinds_15_0);
	MR_init_label5(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_code_for_all_kinds'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__lookup_switch__generate_code_for_all_kinds_15_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_sv(13) = MR_r11;
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_r12;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_temp_slot_5_0,
		ll_backend__lookup_switch__generate_code_for_all_kinds_15_0_i2);
MR_def_label(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__acquire_temp_slot_5_0,
		ll_backend__lookup_switch__generate_code_for_all_kinds_15_0_i3);
MR_def_label(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__lookup_switch__generate_code_for_all_kinds_15_0_i4);
MR_def_label(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(11);
	MR_r12 = MR_sv(12);
	MR_r13 = MR_sv(10);
	MR_r14 = MR_sv(13);
	MR_r15 = MR_sv(14);
	}
	MR_np_call_localret_ent(ll_backend__lookup_switch__generate_code_for_each_kind_18_0,
		ll_backend__lookup_switch__generate_code_for_all_kinds_15_0_i5);
MR_def_label(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__set_resume_point_to_unknown_2_0,
		ll_backend__lookup_switch__generate_code_for_all_kinds_15_0_i6);
MR_def_label(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module9)
	MR_init_entry1(ll_backend__lookup_switch__construct_fail_row_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__construct_fail_row_4_0);
	MR_init_label2(ll_backend__lookup_switch__construct_fail_row_4_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_fail_row'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_switch__construct_fail_row_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,6);
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__lookup_switch__construct_fail_row_4_0_i3);
MR_def_label(ll_backend__lookup_switch__construct_fail_row_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__lookup_switch__construct_fail_row_4_0_i4);
MR_def_label(ll_backend__lookup_switch__construct_fail_row_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__lookup_switch_module10)
	MR_init_entry1(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0);
	MR_init_label10(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,60,5,6,59,10,9,12,18,25,26)
	MR_init_label1(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_several_soln_int_lookup_vector'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i59);
	}
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i60);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_proceed();
MR_def_label(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r8;
	}
	MR_np_call_localret_ent(ll_backend__lookup_switch__construct_fail_row_4_0,
		ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i5);
MR_def_label(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	}
	MR_np_localcall_lab(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,
		ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i6);
MR_def_label(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_sv(9) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_r11 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_r8;
	}
	MR_np_call_localret_ent(ll_backend__lookup_switch__construct_fail_row_4_0,
		ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i10);
MR_def_label(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r5 = MR_sv(5);
	MR_r8 = MR_tempr1;
	MR_r10 = MR_sv(9);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,
		ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i28);
MR_def_label(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r11,0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r11, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r5 = MR_sv(9);
	MR_r9 = ((MR_Integer) MR_r9 + (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,
		ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i28);
MR_def_label(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(8) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r11;
	MR_sv(10) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(12) = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i18);
MR_def_label(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr4 = MR_sv(6);
	MR_tempr5 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_tempr4 * (MR_Integer) MR_tempr5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((((MR_Integer) MR_tempr4 + (MR_Integer) MR_r1) - (MR_Integer) 1) * (MR_Integer) MR_tempr5);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tempr1 = MR_tempr4;
	MR_sv(6) = MR_tempr3;
	MR_sv(10) = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i25);
MR_def_label(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i26);
MR_def_label(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(9);
	MR_r8 = MR_sv(5);
	MR_r10 = MR_sv(12);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_r1;
	MR_r9 = MR_sv(8);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_localcall_lab(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,
		ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0_i28);
MR_def_label(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__negate_1_0);
MR_decl_entry(require__expect_3_0);
MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(ll_backend__code_info__add_vector_static_cell_5_0);
MR_decl_entry(list__sort_2_0);
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module11)
	MR_init_entry1(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0);
	MR_init_label10(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,4,5,6,8,10,11,12,16,19,14)
	MR_init_label10(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,24,26,27,28,31,41,42,43,44,52)
	MR_init_label4(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,53,56,57,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_several_soln_int_lookup_switch'/17 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__501__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_r9;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(13) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(std_util__negate_1_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_tempr3;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(12) = MR_r12;
	MR_sv(15) = MR_r13;
	MR_sv(16) = MR_r14;
	}
	MR_np_call_localret_ent(fn__ll_backend__lookup_switch__this_file_0_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i4);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("generate_several_soln_int_lookup_switch: no OutVars", 51);
	}
	MR_np_call_localret_ent(require__expect_3_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i5);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i6);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i8);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i10);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_tempr1;
	MR_r8 = (MR_Integer) 0;
	MR_r9 = (MR_Integer) 0;
	MR_r10 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__lookup_switch__construct_several_soln_int_lookup_vector_15_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i11);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(13) = MR_r5;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i12);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i16);
	}
	if (MR_INT_LE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i14);
	}
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i19);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i14);
	}
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i26);
	}
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__lookup_switch__this_file_0_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i24);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_several_soln_int_lookup_switch: bad FailCaseCount", 58);
	MR_np_call_localret_ent(require__unexpected_2_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i26);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i27);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(16);
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i28);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i31);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(13);
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r2;
	MR_sv(11) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(ll_backend__lookup_switch, case_kind);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i41);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i42);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__values_2_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i43);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_not_in_storemap_4_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i44);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(2, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("Compute base address for this case", 34);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i52);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(15);
	MR_r12 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__lookup_switch__generate_code_for_all_kinds_15_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i53);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("end of int several soln lookup switch", 37);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i56);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i57);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0_i58);
MR_def_label(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(ll_backend__code_info__fail_if_rval_is_false_4_0);
MR_decl_entry(ll_backend__code_info__get_emit_trail_ops_2_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module12)
	MR_init_entry1(ll_backend__lookup_switch__generate_int_lookup_switch_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__generate_int_lookup_switch_13_0);
	MR_init_label10(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,2,7,10,9,14,8,19,20,16,22)
	MR_init_label6(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,25,28,29,15,30,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_int_lookup_switch'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__lookup_switch__generate_int_lookup_switch_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(9) = MR_tfield(0, MR_r2, 3);
	MR_sv(8) = MR_tfield(0, MR_r2, 2);
	MR_sv(7) = MR_tfield(0, MR_r2, 1);
	MR_sv(6) = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r8;
	MR_sv(14) = MR_r9;
	MR_sv(11) = MR_r10;
	MR_GOTO_LAB(ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i7);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_sv(10) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_r1 = MR_r8;
	MR_sv(14) = MR_r9;
	MR_sv(11) = MR_r10;
	}
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i10);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_sv(11);
	MR_GOTO_LAB(ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i8);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(4) - (MR_Integer) MR_sv(3));
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 26);
	MR_tfield(3, MR_r1, 2) = MR_sv(10);
	MR_tfield(3, MR_r1, 3) = MR_tempr2;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(ll_backend__code_info__fail_if_rval_is_false_4_0,
		ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i14);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r2;
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,10,0);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i19);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(15);
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,
		ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i20);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r1;
	MR_sv(2) = MR_sv(14);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_GOTO_LAB(ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i15);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i22);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_sv(11) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(12) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(13) = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,10,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i28);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(11) = MR_tfield(1, MR_r2, 0);
	MR_sv(12) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__code_info__get_emit_trail_ops_2_0,
		ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i25);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,10,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i28);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_sv(9);
	MR_r13 = MR_sv(14);
	MR_r14 = MR_sv(15);
	}
	MR_np_call_localret_ent(ll_backend__lookup_switch__generate_several_soln_int_lookup_switch_17_0,
		ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i29);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(3) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i30);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__lookup_switch__generate_int_lookup_switch_13_0_i31);
MR_def_label(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__lookup_switch_module13)
	MR_init_entry1(fn__ll_backend__lookup_switch__default_value_for_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__lookup_switch__default_value_for_type_1_0);
	MR_init_label9(fn__ll_backend__lookup_switch__default_value_for_type_1_0,3,6,9,12,15,18,21,97,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_value_for_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__lookup_switch__default_value_for_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__lookup_switch__default_value_for_type_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_proceed();
MR_def_label(fn__ll_backend__lookup_switch__default_value_for_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,12)) {
		MR_GOTO_LAB(fn__ll_backend__lookup_switch__default_value_for_type_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_proceed();
MR_def_label(fn__ll_backend__lookup_switch__default_value_for_type_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,11)) {
		MR_GOTO_LAB(fn__ll_backend__lookup_switch__default_value_for_type_1_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_proceed();
MR_def_label(fn__ll_backend__lookup_switch__default_value_for_type_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(fn__ll_backend__lookup_switch__default_value_for_type_1_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,6,3);
	MR_proceed();
MR_def_label(fn__ll_backend__lookup_switch__default_value_for_type_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ll_backend__lookup_switch__default_value_for_type_1_0_i15);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_proceed();
MR_def_label(fn__ll_backend__lookup_switch__default_value_for_type_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__ll_backend__lookup_switch__default_value_for_type_1_0_i18);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_proceed();
MR_def_label(fn__ll_backend__lookup_switch__default_value_for_type_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__lookup_switch__default_value_for_type_1_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_proceed();
MR_def_label(fn__ll_backend__lookup_switch__default_value_for_type_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(fn__ll_backend__lookup_switch__default_value_for_type_1_0_i24);
	}
MR_def_label(fn__ll_backend__lookup_switch__default_value_for_type_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_proceed();
MR_def_label(fn__ll_backend__lookup_switch__default_value_for_type_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(fn__ll_backend__lookup_switch__default_value_for_type_1_0_i97);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,6,4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__lookup_switch_module14)
	MR_init_entry1(__Unify___ll_backend__lookup_switch__case_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__lookup_switch__case_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__lookup_switch__case_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module15)
	MR_init_entry1(__Compare___ll_backend__lookup_switch__case_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__lookup_switch__case_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__lookup_switch__case_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___backend_libs__switch_util__case_consts_2_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module16)
	MR_init_entry1(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__lookup_switch__lookup_switch_info_1_0);
	MR_init_label5(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0,4,7,9,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__lookup_switch__lookup_switch_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0_i13);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__switch_util__case_consts_2_0,
		__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0_i4);
MR_def_label(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0_i7);
MR_def_label(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0_i9);
MR_def_label(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__lookup_switch__lookup_switch_info_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___backend_libs__switch_util__case_consts_2_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module17)
	MR_init_entry1(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__lookup_switch__lookup_switch_info_1_0);
	MR_init_label6(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0,3,2,5,10,14,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__lookup_switch__lookup_switch_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0_i2);
MR_def_label(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr7, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr7, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr7, 1);
	MR_tempr8 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr8, 3);
	MR_tempr2 = MR_tfield(0, MR_tempr8, 2);
	MR_tempr3 = MR_tfield(0, MR_tempr8, 1);
	MR_tempr4 = MR_tempr8;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr7;
	MR_sv(2) = MR_tempr2;
	MR_tempr6 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr6;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	MR_r4 = MR_tfield(0, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(__Compare___backend_libs__switch_util__case_consts_2_0,
		__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0_i5);
MR_def_label(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0_i51);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0_i10);
MR_def_label(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0_i51);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0_i14);
MR_def_label(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0_i51);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___ll_backend__lookup_switch__lookup_switch_info_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module18)
	MR_init_entry1(__Unify___ll_backend__lookup_switch__record_switch_lookup_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__lookup_switch__record_switch_lookup_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__lookup_switch__record_switch_lookup_1_0);
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

MR_BEGIN_MODULE(ll_backend__lookup_switch_module19)
	MR_init_entry1(__Compare___ll_backend__lookup_switch__record_switch_lookup_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__lookup_switch__record_switch_lookup_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__lookup_switch__record_switch_lookup_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module20)
	MR_init_entry1(ll_backend__lookup_switch__IntroducedFrom__pred__is_lookup_switch__209__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__IntroducedFrom__pred__is_lookup_switch__209__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__is_lookup_switch__209__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_switch__IntroducedFrom__pred__is_lookup_switch__209__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__lookup_switch_module21)
	MR_init_entry1(ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__501__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__501__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_several_soln_int_lookup_switch__501__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_switch__IntroducedFrom__pred__generate_several_soln_int_lookup_switch__501__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_features_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
MR_decl_entry(set__member_2_0);
MR_decl_entry(hlds__goal_form__goal_is_conj_of_unify_2_0);
MR_decl_entry(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0);
MR_decl_entry(fn__hlds__goal_form__goal_may_modify_trail_1_0);
MR_decl_entry(bool__or_3_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_resume_point_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(ll_backend__code_info__pre_goal_update_4_0);
MR_decl_entry(ll_backend__code_info__get_instmap_2_0);
MR_decl_entry(ll_backend__lookup_util__generate_constants_for_disjunct_9_0);
MR_decl_entry(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0);
MR_decl_entry(ll_backend__code_info__set_instmap_3_0);
MR_decl_entry(ll_backend__code_info__post_goal_update_3_0);
MR_decl_entry(ll_backend__lookup_util__generate_constants_for_arm_9_0);
MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module22)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0);
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,5,3,6,8,11,17,19,21,22,23)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,25,27,24,28,29,30,32,34,35,16)
	MR_init_label9(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,37,13,39,41,44,45,46,47,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generate_constants_for_lookup_switch__[1]_0'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i3);
	}
	MR_sv(6) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(fn__set__init_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	MR_sv(13) = MR_tempr2;
	MR_sv(14) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_features_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Integer) 5;
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(set__member_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Integer) 7;
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(set__member_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i11);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_sv(14),3,2)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i13);
	}
	MR_r1 = MR_tfield(3, MR_sv(14), 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i16);
	}
	MR_sv(13) = MR_tfield(1, MR_r1, 0);
	MR_sv(14) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__goal_form__goal_is_conj_of_unify_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i17);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i19);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_may_modify_trail_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i21);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(bool__or_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i22);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(13), 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i23);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i25);
	}
	MR_r3 = MR_sv(9);
	MR_r1 = MR_sv(15);
	MR_sv(9) = MR_sv(7);
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i24);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i27);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_sv(9) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__pre_goal_update_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i28);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_instmap_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i29);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i30);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i1);
	}
	MR_sv(5) = MR_r4;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i32);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(ll_backend__code_info__set_instmap_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i34);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__post_goal_update_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i35);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i44);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__lookup_switch__this_file_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i37);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_constants: disj([])", 28);
	MR_np_call_localret_ent(require__unexpected_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i44);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__goal_form__goal_is_conj_of_unify_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i39);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_constants_for_arm_9_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i41);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_sv(5) = MR_r4;
	MR_r4 = MR_sv(6);
	MR_sv(13) = MR_r3;
	MR_r3 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_sv(16) = MR_sv(8);
	MR_sv(9) = MR_sv(7);
	MR_sv(7) = MR_r5;
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i45);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i46);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(7);
	}
	MR_np_localcall_lab(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i47);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0_i1);
	}
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_16_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__lookup_switch_module23)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0);
	MR_init_label3(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__record_lookup_for_tagged_cons_ids__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_108_111_111_107_117_112_95_102_111_114_95_116_97_103_103_101_100_95_99_111_110_115_95_105_100_115_95_95_91_49_93_95_48_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__lookup_switch_module24)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0);
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,4,3,5,2,8,7,9,12,13,15)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,16,19,33,34,35,37,38,36,39,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generate_simple_int_lookup_switch__[4]_0'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i2);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r8;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_r9;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i35);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_not_in_storemap_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(9), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(9), 0) = MR_r1;
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__lookup_switch__construct_simple_int_lookup_vector_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i15);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_vector_static_cell_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i19);
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Compute base address for this case", 34);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i33);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_r4;
	MR_tfield(2, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("Compute base address for this case", 34);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i33);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_offset_assigns_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i34);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i35);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i37);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r5 = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i36);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(1, MR_sv(9), 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i38);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i39);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0_i40);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_105_109_112_108_101_95_105_110_116_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_12_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__switch_util__get_word_bits_3_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(ll_backend__code_info__add_scalar_static_cell_natural_types_4_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module25)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0,2,3,4,5,6,7,8,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generate_bitvec_test__[1, 5]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0_i2);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__switch_util__get_word_bits_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0_i3);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__init_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__lookup_switch__generate_bit_vec_args_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__add_scalar_static_cell_natural_types_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0_i11);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(3,6,5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_tfield(3, MR_r1, 3) = MR_tfield(1, MR_tempr3, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__code_info__fail_if_rval_is_false_4_0);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_53_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tempr5 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr5;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tfield(3, MR_tempr2, 2) = MR_r4;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr5;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(3,6,5);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_tfield(3, MR_r1, 3) = MR_tempr3;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__code_info__fail_if_rval_is_false_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(fn__int__mod_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ll_backend__lookup_switch_module26)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0);
	MR_init_label9(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0,21,3,4,5,7,9,6,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generate_bit_vec_2__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = ((MR_Integer) MR_tfield(0, MR_tfield(1, MR_r1, 0), 0) - (MR_Integer) MR_r2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__int__mod_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(6) | (MR_Integer) MR_r1);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0_i12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0_i10);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0_i12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_0_i21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__lookup_switch_maybe_bunch_0(void)
{
	ll_backend__lookup_switch_module0();
	ll_backend__lookup_switch_module1();
	ll_backend__lookup_switch_module2();
	ll_backend__lookup_switch_module3();
	ll_backend__lookup_switch_module4();
	ll_backend__lookup_switch_module5();
	ll_backend__lookup_switch_module6();
	ll_backend__lookup_switch_module7();
	ll_backend__lookup_switch_module8();
	ll_backend__lookup_switch_module9();
	ll_backend__lookup_switch_module10();
	ll_backend__lookup_switch_module11();
	ll_backend__lookup_switch_module12();
	ll_backend__lookup_switch_module13();
	ll_backend__lookup_switch_module14();
	ll_backend__lookup_switch_module15();
	ll_backend__lookup_switch_module16();
	ll_backend__lookup_switch_module17();
	ll_backend__lookup_switch_module18();
	ll_backend__lookup_switch_module19();
	ll_backend__lookup_switch_module20();
	ll_backend__lookup_switch_module21();
	ll_backend__lookup_switch_module22();
	ll_backend__lookup_switch_module23();
	ll_backend__lookup_switch_module24();
	ll_backend__lookup_switch_module25();
	ll_backend__lookup_switch_module26();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__lookup_switch__init(void);
void mercury__ll_backend__lookup_switch__init_type_tables(void);
void mercury__ll_backend__lookup_switch__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__lookup_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__lookup_switch__init_complexity_procs(void);
#endif

void mercury__ll_backend__lookup_switch__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__lookup_switch_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__lookup_switch__type_ctor_info_case_kind_0,
		ll_backend__lookup_switch__case_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__lookup_switch__type_ctor_info_lookup_switch_info_1,
		ll_backend__lookup_switch__lookup_switch_info_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__lookup_switch__type_ctor_info_record_switch_lookup_1,
		ll_backend__lookup_switch__record_switch_lookup_1_0);
	mercury__ll_backend__lookup_switch__init_debugger();
}

void mercury__ll_backend__lookup_switch__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__lookup_switch__type_ctor_info_case_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__lookup_switch__type_ctor_info_lookup_switch_info_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__lookup_switch__type_ctor_info_record_switch_lookup_1);
	}
}


void mercury__ll_backend__lookup_switch__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__lookup_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__lookup_switch);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__lookup_switch__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
