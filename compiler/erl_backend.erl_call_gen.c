/*
** Automatically generated from `erl_call_gen.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__erl_backend__erl_call_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "erl_backend.erl_call_gen.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "erl_backend.erl_call_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "erl_backend.erl_call_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "erl_backend.erl_call_gen.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "erl_backend.erl_call_gen.c"
#line 44 "erl_backend.erl_call_gen.c"
#include "erl_backend.erl_call_gen.mh"

#line 47 "erl_backend.erl_call_gen.c"
#line 48 "erl_backend.erl_call_gen.c"
#ifndef ERL_BACKEND__ERL_CALL_GEN_DECL_GUARD
#define ERL_BACKEND__ERL_CALL_GEN_DECL_GUARD

#line 52 "erl_backend.erl_call_gen.c"
#line 53 "erl_backend.erl_call_gen.c"

#endif
#line 56 "erl_backend.erl_call_gen.c"

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

struct mercury_type_3 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
MR_decl_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0, 2,3,4,6,5,9,14,16)
MR_decl_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0, 17,15,20,21,24,26,28,29)
MR_decl_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0, 11,38,39,40,41,42,43,30)
MR_decl_label6(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0, 2,3,4,5,6,7)
MR_decl_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0, 2,10,13,12,16,17,18,3)
MR_decl_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label6(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0, 10,11,12,13,14,15)
MR_decl_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0, 38,11,12,13,14,15,16,17)
MR_decl_label4(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0, 18,19,6,4)
MR_decl_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0, 11,14,15,16,17,13,10,19)
MR_decl_label2(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0, 20,21)
MR_decl_label5(erl_backend__erl_call_gen__assign_false_if_dummy_3_0, 2,3,4,6,1)
MR_decl_label7(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0, 11,6,7,8,10,4,5)
MR_decl_label1(erl_backend__erl_call_gen__erl_make_call_6_0, 2)
MR_decl_label8(erl_backend__erl_call_gen__erl_make_call_2_6_0, 9,11,12,6,7,5,16,20)
MR_decl_label8(erl_backend__erl_call_gen__erl_make_call_2_6_0, 17,18,3,25,26,30,27,28)
MR_decl_label8(erl_backend__erl_call_gen__erl_make_call_2_6_0, 32,24,34,39,40,35,36,42)
MR_decl_label1(erl_backend__erl_call_gen__erl_make_call_2_6_0, 44)
MR_decl_label3(erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0, 2,3,4)
MR_decl_label1(erl_backend__erl_call_gen__foreign_arg_type_mode_3_0, 3)
MR_decl_label8(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0, 4,6,7,8,12,14,10,9)
MR_decl_label8(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0, 93,94,95,96,97,98,99,100)
MR_decl_label8(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0, 101,90,91,92,108,102,103,104)
MR_decl_label6(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0, 105,106,107,55,56,17)
MR_decl_label1(fn__erl_backend__erl_call_gen__foreign_arg_name_1_0, 3)
MR_decl_label4(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0, 3,5,7,2)
MR_decl_static(erl_backend__erl_call_gen__erl_make_call_2_6_0)
MR_def_extern_entry(erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0)
MR_def_extern_entry(erl_backend__erl_call_gen__erl_gen_call_10_0)
MR_def_extern_entry(erl_backend__erl_call_gen__erl_gen_higher_order_call_9_0)
MR_def_extern_entry(erl_backend__erl_call_gen__erl_gen_class_method_call_9_0)
MR_decl_static(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0)
MR_def_extern_entry(erl_backend__erl_call_gen__erl_gen_builtin_9_0)
MR_def_extern_entry(erl_backend__erl_call_gen__erl_gen_cast_6_0)
MR_def_extern_entry(erl_backend__erl_call_gen__erl_make_call_6_0)
MR_decl_static(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0)
MR_def_extern_entry(erl_backend__erl_call_gen__erl_gen_foreign_code_call_9_0)
MR_decl_static(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0)
MR_decl_static(erl_backend__erl_call_gen__assign_false_if_dummy_3_0)
MR_decl_static(erl_backend__erl_call_gen__foreign_arg_type_mode_3_0)
MR_decl_static(fn__erl_backend__erl_call_gen__foreign_arg_name_1_0)
MR_def_extern_entry(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0)
MR_def_extern_entry(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0)
MR_def_extern_entry(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0)
MR_def_extern_entry(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0)
MR_def_extern_entry(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0)
MR_def_extern_entry(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0)
MR_decl_static(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
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
mercury_data__closure_layout__erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,0),
MR_COMMON(0,2),
MR_CTOR0_ADDR(erl_backend__elds, elds_expr)
}
},
};

static const struct mercury_type_3 mercury_common_3[8] =
{
{
2,
MR_string_const("not", 3)
},
{
2,
MR_string_const("or", 2)
},
{
2,
MR_string_const("and", 3)
},
{
2,
MR_string_const("env_var", 7)
},
{
2,
MR_string_const("ML_erlang_global_server", 23)
},
{
2,
MR_string_const("trace_evaluate_runtime_condition", 32)
},
{
2,
MR_string_const("trace_evaluate_runtime_condition_ack", 36)
},
{
6,
MR_string_const("SUCCESS_INDICATOR", 17)
},
};

static const struct mercury_type_4 mercury_common_4[8] =
{
{
MR_TAG_COMMON(3,3,0)
},
{
MR_TAG_COMMON(3,3,1)
},
{
MR_TAG_COMMON(3,3,2)
},
{
MR_TAG_COMMON(3,3,3)
},
{
MR_TAG_COMMON(3,3,4)
},
{
MR_TAG_COMMON(3,3,5)
},
{
MR_TAG_COMMON(3,3,6)
},
{
MR_TAG_COMMON(3,3,7)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(erl_backend__erl_code_util, erl_gen_info),
MR_COMMON(0,2),
MR_CTOR0_ADDR(erl_backend__elds, elds_expr)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_6 mercury_common_6[5] =
{
{
MR_COMMON(5,1),
MR_ENTRY_AP(erl_backend__erl_call_gen__foreign_arg_type_mode_3_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(7,2),
MR_ENTRY_AP(fn__erl_backend__erl_call_gen__foreign_arg_name_1_0),
0
},
{
MR_COMMON(7,3),
MR_ENTRY_AP(fn__erl_backend__erl_call_gen__foreign_arg_name_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_5;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_STRING_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0_1 = {
{
MR_FUNCTION,
"erl_backend.erl_call_gen",
"erl_backend.erl_call_gen",
"var_to_expr_or_false",
4,
0
},
"erl_backend.erl_call_gen",
"erl_call_gen.m",
148,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_call_gen",
"erl_backend.erl_call_gen",
"assign_false_if_dummy",
3,
0
},
"erl_backend.erl_call_gen",
"erl_call_gen.m",
279,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_1 = {
{
MR_PREDICATE,
"erl_backend.erl_call_gen",
"erl_backend.erl_call_gen",
"foreign_arg_type_mode",
3,
0
},
"erl_backend.erl_call_gen",
"erl_call_gen.m",
617,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"erl_backend.erl_call_gen",
"erl_call_gen.m",
622,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_3 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"erl_backend.erl_call_gen",
"erl_call_gen.m",
623,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_4 = {
{
MR_FUNCTION,
"erl_backend.erl_call_gen",
"erl_backend.erl_call_gen",
"foreign_arg_name",
2,
0
},
"erl_backend.erl_call_gen",
"erl_call_gen.m",
624,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_5 = {
{
MR_FUNCTION,
"erl_backend.erl_call_gen",
"erl_backend.erl_call_gen",
"foreign_arg_name",
2,
0
},
"erl_backend.erl_call_gen",
"erl_call_gen.m",
625,
"d1;c21;"
};

MR_decl_entry(fn__erl_backend__elds__elds_empty_tuple_0_0);
MR_decl_entry(__Unify___erl_backend__elds__elds_term_0_0);
MR_decl_entry(fn__erl_backend__elds__maybe_join_exprs_2_0);
MR_decl_entry(fn__erl_backend__elds__exprs_from_vars_1_0);
MR_decl_entry(__Unify___erl_backend__elds__elds_expr_0_0);
MR_decl_entry(fn__erl_backend__elds__det_expr_1_0);
MR_decl_entry(fn__erl_backend__elds__elds_fail_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0;
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__erl_backend__elds__terms_from_vars_1_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module0)
	MR_init_entry1(erl_backend__erl_call_gen__erl_make_call_2_6_0);
	MR_init_label8(erl_backend__erl_call_gen__erl_make_call_2_6_0,9,11,12,6,7,5,16,20)
	MR_init_label8(erl_backend__erl_call_gen__erl_make_call_2_6_0,17,18,3,25,26,30,27,28)
	MR_init_label8(erl_backend__erl_call_gen__erl_make_call_2_6_0,32,24,34,39,40,35,36,42)
	MR_init_label1(erl_backend__erl_call_gen__erl_make_call_2_6_0,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_call_gen__erl_make_call_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_r3;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i9);
	}
	MR_sv(1) = MR_r5;
	MR_decr_sp(7);
	MR_proceed();
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i7);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_empty_tuple_0_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i11);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___erl_backend__elds__elds_term_0_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i12);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_r1 = MR_sv(2);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r5;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__erl_backend__elds__maybe_join_exprs_2_0);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__erl_backend__elds__exprs_from_vars_1_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i16);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i18);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(__Unify___erl_backend__elds__elds_expr_0_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i20);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__erl_backend__elds__maybe_join_exprs_2_0);
	}
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i24);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(fn__erl_backend__elds__det_expr_1_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i25);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__exprs_from_vars_1_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i26);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i28);
	}
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(__Unify___erl_backend__elds__elds_term_0_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i30);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i27);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_fail_0_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i32);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(fn__erl_backend__elds__det_expr_1_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i34);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i36);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__exprs_from_vars_1_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i39);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i40);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_make_call_2_6_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i44);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__erl_backend__elds__terms_from_vars_1_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i42);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		erl_backend__erl_call_gen__erl_make_call_2_6_0_i44);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_2_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0);
MR_decl_entry(erl_backend__erl_code_util__erl_gen_info_get_var_types_2_0);
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module1)
	MR_init_entry1(erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0);
	MR_init_label3(erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0,
		erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0_i2);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_get_var_types_2_0,
		erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0_i3);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0_i4);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(erl_backend__erl_call_gen__erl_make_call_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_call_gen_module2)
	MR_init_entry1(erl_backend__erl_call_gen__erl_gen_call_10_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_call_gen__erl_gen_call_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r5;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_np_tailcall_ent(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_call_gen_module3)
	MR_init_entry1(erl_backend__erl_call_gen__erl_gen_higher_order_call_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_call_gen__erl_gen_higher_order_call_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_call_gen_module4)
	MR_init_entry1(erl_backend__erl_call_gen__erl_gen_class_method_call_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_call_gen__erl_gen_class_method_call_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__erl_backend__elds__expr_from_var_1_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module5)
	MR_init_entry1(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0);
	MR_init_label8(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,4,6,7,8,12,14,10,9)
	MR_init_label8(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,93,94,95,96,97,98,99,100)
	MR_init_label8(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,101,90,91,92,108,102,103,104)
	MR_init_label6(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,105,106,107,55,56,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i4) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i6) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i7) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i8));
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__erl_backend__elds__expr_from_var_1_0);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i9);
	}
	MR_r2 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,7)) {
		MR_GOTO_LAB(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = (MR_Integer) 2;
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i14);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,8)) {
		MR_GOTO_LAB(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i10);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = (MR_Integer) 3;
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i14);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_call_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("unary builtin not supported on erlang target", 44);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i17);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i90) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i91) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i92) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i93) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i94) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i95) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i96) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i97) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i98) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i99) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i100) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i101) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i102) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i103) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i17) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i102) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i103) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i104) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i105) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i106) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i107) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i104) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i105) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i106) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i107) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i17) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i90) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i91) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i92) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i108) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i102) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i103) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i104) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i105) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i106) MR_AND
		MR_LABEL_AP(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i107));
	}
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 2;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 3;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 9;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 10;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 4;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 7;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 8;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 17;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 18;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 5;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 6;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 0;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 1;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 15;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 16;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 12;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 14;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 11;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = (MR_Integer) 13;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i55);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0_i56);
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_call_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("binary builtin not supported on erlang target", 45);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_call_gen_module6)
	MR_init_entry1(erl_backend__erl_call_gen__erl_gen_builtin_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_call_gen__erl_gen_builtin_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_call_gen_module7)
	MR_init_entry1(erl_backend__erl_call_gen__erl_gen_cast_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_call_gen__erl_gen_cast_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_call_gen_module8)
	MR_init_entry1(erl_backend__erl_call_gen__erl_make_call_6_0);
	MR_init_label1(erl_backend__erl_call_gen__erl_make_call_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_call_gen__erl_make_call_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__erl_backend__elds__exprs_from_vars_1_0,
		erl_backend__erl_call_gen__erl_make_call_6_0_i2);
MR_def_label(erl_backend__erl_call_gen__erl_make_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(erl_backend__erl_call_gen__erl_make_call_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module9)
	MR_init_entry1(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0);
	MR_init_label7(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,11,6,7,8,10,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0_i6);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_0,
		erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0_i11);
MR_def_label(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_sv(2) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_np_localcall_lab(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,
		erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0_i7);
MR_def_label(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_localcall_lab(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,
		erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0_i8);
MR_def_label(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_localcall_lab(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,
		erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0_i5);
MR_def_label(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_call_gen_module10)
	MR_init_entry1(erl_backend__erl_call_gen__erl_gen_foreign_code_call_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__erl_call_gen__erl_gen_foreign_code_call_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__type_util__is_dummy_argument_type_2_0);
MR_decl_entry(fn__erl_backend__elds__elds_false_0_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module11)
	MR_init_entry1(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0);
	MR_init_label4(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0,3,5,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0_i3);
MR_def_label(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0_i5);
MR_def_label(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0_i2);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_false_0_0,
		fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0_i7);
MR_def_label(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__erl_backend__erl_call_gen__var_to_expr_or_false_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__erl_backend__elds__expr_from_var_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(erl_backend__erl_code_util__erl_variable_type_3_0);
MR_decl_entry(fn__erl_backend__elds__var_eq_false_1_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module12)
	MR_init_entry1(erl_backend__erl_call_gen__assign_false_if_dummy_3_0);
	MR_init_label5(erl_backend__erl_call_gen__assign_false_if_dummy_3_0,2,3,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_call_gen__assign_false_if_dummy_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0,
		erl_backend__erl_call_gen__assign_false_if_dummy_3_0_i2);
MR_def_label(erl_backend__erl_call_gen__assign_false_if_dummy_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_variable_type_3_0,
		erl_backend__erl_call_gen__assign_false_if_dummy_3_0_i3);
MR_def_label(erl_backend__erl_call_gen__assign_false_if_dummy_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		erl_backend__erl_call_gen__assign_false_if_dummy_3_0_i4);
MR_def_label(erl_backend__erl_call_gen__assign_false_if_dummy_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__assign_false_if_dummy_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__erl_backend__elds__var_eq_false_1_0,
		erl_backend__erl_call_gen__assign_false_if_dummy_3_0_i6);
MR_def_label(erl_backend__erl_call_gen__assign_false_if_dummy_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(erl_backend__erl_call_gen__assign_false_if_dummy_3_0,1)
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


MR_BEGIN_MODULE(erl_backend__erl_call_gen_module13)
	MR_init_entry1(erl_backend__erl_call_gen__foreign_arg_type_mode_3_0);
	MR_init_label1(erl_backend__erl_call_gen__foreign_arg_type_mode_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__erl_call_gen__foreign_arg_type_mode_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(erl_backend__erl_call_gen__foreign_arg_type_mode_3_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_proceed();
MR_def_label(erl_backend__erl_call_gen__foreign_arg_type_mode_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_r3, 0), 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_call_gen_module14)
	MR_init_entry1(fn__erl_backend__erl_call_gen__foreign_arg_name_1_0);
	MR_init_label1(fn__erl_backend__erl_call_gen__foreign_arg_name_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__erl_call_gen__foreign_arg_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__erl_backend__erl_call_gen__foreign_arg_name_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_proceed();
MR_def_label(fn__erl_backend__erl_call_gen__foreign_arg_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r2, 0), 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(erl_backend__erl_code_util__erl_gen_arg_list_7_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module15)
	MR_init_entry1(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0);
	MR_init_label6(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0_i2);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0_i3);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0_i4);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0_i5);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_arg_list_7_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0_i6);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0_i7);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(erl_backend__erl_code_util__erl_variable_types_3_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(fn__erl_backend__elds__join_exprs_2_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module16)
	MR_init_entry1(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0);
	MR_init_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i2);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_variable_types_3_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i3);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_arg_list_7_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i4);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i5);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__erl_backend__elds__expr_from_var_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i6);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i7);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__erl_call_gen__assign_false_if_dummy_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i8);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__join_exprs_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i9);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0);
MR_decl_entry(fn__erl_backend__elds__elds_call_element_2_0);
MR_decl_entry(fn__erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module17)
	MR_init_entry1(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0);
	MR_init_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,2,3,4,5,6,7,8,9)
	MR_init_label6(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,10,11,12,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("BaseTypeClassInfo", 17);
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i2);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MethodWrapper", 13);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i3);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__erl_backend__elds__expr_from_var_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i4);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__expr_from_var_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i5);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i6);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_variable_types_3_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i7);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_arg_list_7_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i8);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_call_element_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i9);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(8) = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	}
	MR_np_call_localret_ent(fn__erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i10);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = ((MR_Integer) MR_sv(8) + (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_call_element_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i11);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i12);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i13);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__erl_backend__elds__join_exprs_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i14);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__erl_backend__elds__join_exprs_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i15);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_module__predicate_module_2_0);
MR_decl_entry(fn__hlds__hlds_module__predicate_name_2_0);
MR_decl_entry(backend_libs__builtin_ops__translate_builtin_5_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(fn__erl_backend__elds__expr_or_void_1_0);
MR_decl_entry(fn__erl_backend__elds__elds_true_0_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module18)
	MR_init_entry1(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0);
	MR_init_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,2,3,4,6,5,9,14,16)
	MR_init_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,17,15,20,21,24,26,28,29)
	MR_init_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,11,38,39,40,41,42,43,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i2);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_module_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i3);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i4);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__builtin_ops__translate_builtin_5_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i6);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i5);
	}
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i9);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_call_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("erl_gen_builtin: unknown builtin predicate", 42);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i9);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i11);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i14) MR_AND
		MR_LABEL_AP(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i24) MR_AND
		MR_LABEL_AP(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i26) MR_AND
		MR_LABEL_AP(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i28));
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_variable_type_3_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i16);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i17);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i15);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__erl_backend__elds__expr_or_void_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i29);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i20);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__expr_from_var_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i21);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__maybe_join_exprs_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i29);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_call_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("ref_assign not supported in Erlang backend", 42);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_call_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("malformed model_det builtin predicate", 37);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__erl_backend__elds__expr_or_void_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i29);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i30);
	}
	if (MR_INT_NE(MR_tag(MR_r2),2)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i43);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__erl_backend__erl_call_gen__erl_gen_simple_expr_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i38);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_true_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i39);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__erl_backend__elds__expr_or_void_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i40);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_false_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i41);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_fail_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0_i42);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_call_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("malformed model_semi builtin predicate", 38);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_call_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("model_non builtin predicate", 27);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__erl_call_gen_module19)
	MR_init_entry1(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0);
	MR_init_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0,2,10,13,12,16,17,18,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_variable_types_3_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i2);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i3);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_sv(1), 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i10);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i13);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__erl_backend__elds__expr_or_void_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i18);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__erl_backend__elds__expr_from_var_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i16);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__expr_from_var_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i17);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__maybe_join_exprs_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0_i18);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_call_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("erl_gen_cast: wrong number of args for cast", 43);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__erl_backend__elds__elds_call_self_0_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module20)
	MR_init_entry1(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0);
	MR_init_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,38,11,12,13,14,15,16,17)
	MR_init_label4(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,18,19,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r3,1)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i4);
	}
	if (MR_PTAG_TEST(MR_r3,2)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i6);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i38);
	}
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i11);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,4);
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_call_self_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i12);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("Result", 6);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_new_named_var_4_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i13);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__erl_backend__elds__expr_from_var_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i14);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,4,6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__join_exprs_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i15);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_true_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i16);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_empty_tuple_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i17);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_false_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i18);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_fail_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0_i19);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_call_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("erl_gen_goal_expr: fc_impl_import", 33);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_102_111_114_101_105_103_110_95_99_111_100_101_95_99_97_108_108_95_95_91_53_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_call_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("erl_gen_goal_expr: fc_impl_model_non", 36);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__map2_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__erl_backend__elds__exprs_from_fixed_vars_1_0);
MR_decl_entry(fn__erl_backend__elds__terms_from_fixed_vars_1_0);

MR_BEGIN_MODULE(erl_backend__erl_call_gen_module21)
	MR_init_entry1(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0);
	MR_init_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,11,14,15,16,17,13,10,19)
	MR_init_label2(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_info_get_module_info_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i2);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(list__map2_4_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i3);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(erl_backend__erl_code_util__erl_gen_arg_list_7_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i4);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i5);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__map_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i6);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i7);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i8);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__exprs_from_fixed_vars_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i9);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i11);
	}
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__join_exprs_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i17);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i13);
	}
	MR_sv(7) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,4,7);
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_true_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i14);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_false_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i15);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_fail_0_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i16);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__join_exprs_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i17);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__erl_backend__elds__terms_from_fixed_vars_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i19);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_call_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("model_non foreign_procs in Erlang backend", 41);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i10);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__erl_backend__elds__terms_from_fixed_vars_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i19);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr2;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds__exprs_from_vars_1_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i20);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(erl_backend__erl_call_gen__erl_make_call_2_6_0,
		f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0_i21);
MR_def_label(f_101_114_108_95_98_97_99_107_101_110_100_95_95_101_114_108_95_99_97_108_108_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_99_111_100_101_95_95_91_52_93_95_48_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__erl_backend__erl_call_gen_maybe_bunch_0(void)
{
	erl_backend__erl_call_gen_module0();
	erl_backend__erl_call_gen_module1();
	erl_backend__erl_call_gen_module2();
	erl_backend__erl_call_gen_module3();
	erl_backend__erl_call_gen_module4();
	erl_backend__erl_call_gen_module5();
	erl_backend__erl_call_gen_module6();
	erl_backend__erl_call_gen_module7();
	erl_backend__erl_call_gen_module8();
	erl_backend__erl_call_gen_module9();
	erl_backend__erl_call_gen_module10();
	erl_backend__erl_call_gen_module11();
	erl_backend__erl_call_gen_module12();
	erl_backend__erl_call_gen_module13();
	erl_backend__erl_call_gen_module14();
	erl_backend__erl_call_gen_module15();
	erl_backend__erl_call_gen_module16();
	erl_backend__erl_call_gen_module17();
	erl_backend__erl_call_gen_module18();
	erl_backend__erl_call_gen_module19();
	erl_backend__erl_call_gen_module20();
	erl_backend__erl_call_gen_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__erl_backend__erl_call_gen__init(void);
void mercury__erl_backend__erl_call_gen__init_type_tables(void);
void mercury__erl_backend__erl_call_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__erl_backend__erl_call_gen__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__erl_backend__erl_call_gen__init_complexity_procs(void);
#endif

void mercury__erl_backend__erl_call_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__erl_backend__erl_call_gen_maybe_bunch_0();
	mercury__erl_backend__erl_call_gen__init_debugger();
}

void mercury__erl_backend__erl_call_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__erl_backend__erl_call_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__erl_backend__erl_call_gen__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__erl_backend__erl_call_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
