/*
** Automatically generated from `char.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__char__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "char.c"
#include "char.mh"

#line 27 "char.c"
#line 134 "io.int2"
#include "io.mh"

#line 31 "char.c"
#line 142 "io.int2"
#include "string.mh"

#line 35 "char.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "char.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "char.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "char.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 51 "char.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "char.c"
#line 148 "io.opt"
#include "dir.mh"

#line 59 "char.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 63 "char.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "char.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "char.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 75 "char.c"
#line 23 "store.opt"
#include "store.mh"

#line 79 "char.c"
#line 3 "list.opt"
#include "list.mh"

#line 83 "char.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 87 "char.c"
#line 4 "int.opt"
#include "int.mh"

#line 91 "char.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 95 "char.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 99 "char.c"
#line 100 "char.c"
#ifndef CHAR_DECL_GUARD
#define CHAR_DECL_GUARD

#line 104 "char.c"
#line 594 "char.m"
#include <limits.h>
#line 107 "char.c"
#line 108 "char.c"

#endif
#line 111 "char.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_1 {
	MR_Integer f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_2[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_3[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_4[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_5[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_enum__enum__arity1__character__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_char__type_ctor_info_char_0;
MR_decl_label1(char__det_from_int_2_0, 2)
MR_decl_label2(char__det_int_to_digit_2_0, 3,2)
MR_decl_label2(char__digit_to_int_2_0, 4,2)
MR_decl_label1(char__from_int_2_0, 1)
MR_decl_label1(char__int_to_digit_2_0, 1)
MR_decl_label1(char__int_to_digit_2_1, 1)
MR_decl_label1(char__int_to_hex_char_2_0, 1)
MR_decl_label4(char__is_alnum_1_0, 6,8,14,2)
MR_decl_label1(char__is_alnum_or_underscore_1_0, 1)
MR_decl_label2(char__is_alpha_1_0, 4,8)
MR_decl_label2(char__is_alpha_or_underscore_1_0, 6,11)
MR_decl_label1(char__is_binary_digit_1_0, 2)
MR_decl_label1(char__is_hex_digit_2_0, 1)
MR_decl_label1(char__is_whitespace_1_0, 2)
MR_decl_label1(char__lower_upper_2_0, 1)
MR_decl_label1(char__lower_upper_2_1, 1)
MR_decl_label1(char__to_int_2_1, 1)
MR_decl_label1(char__to_int_2_2, 1)
MR_decl_label2(char__to_lower_2_0, 4,2)
MR_decl_label2(char__to_upper_2_0, 4,2)
MR_decl_label1(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0, 1)
MR_decl_label1(fn__char__det_from_int_1_0, 2)
MR_decl_label2(fn__char__det_int_to_digit_1_0, 3,2)
MR_decl_label2(fn__char__to_lower_1_0, 4,2)
MR_decl_label2(fn__char__to_upper_1_0, 4,2)
MR_decl_label2(__Compare___char__char_0_0, 2,3)
MR_def_extern_entry(char__to_int_2_0)
MR_def_extern_entry(char__to_int_2_1)
MR_def_extern_entry(char__to_int_2_2)
MR_def_extern_entry(fn__char__to_int_1_0)
MR_def_extern_entry(char__from_int_2_0)
MR_def_extern_entry(char__det_from_int_2_0)
MR_def_extern_entry(fn__char__det_from_int_1_0)
MR_def_extern_entry(char__max_char_value_1_0)
MR_def_extern_entry(fn__char__max_char_value_0_0)
MR_def_extern_entry(char__min_char_value_1_0)
MR_def_extern_entry(fn__char__min_char_value_0_0)
MR_def_extern_entry(char__lower_upper_2_0)
MR_def_extern_entry(char__lower_upper_2_1)
MR_def_extern_entry(char__to_upper_2_0)
MR_def_extern_entry(fn__char__to_upper_1_0)
MR_def_extern_entry(char__to_lower_2_0)
MR_def_extern_entry(fn__char__to_lower_1_0)
MR_def_extern_entry(char__is_whitespace_1_0)
MR_def_extern_entry(char__is_upper_1_0)
MR_def_extern_entry(char__is_lower_1_0)
MR_def_extern_entry(char__is_alpha_1_0)
MR_def_extern_entry(char__is_digit_1_0)
MR_def_extern_entry(char__is_alnum_1_0)
MR_def_extern_entry(char__is_alpha_or_underscore_1_0)
MR_def_extern_entry(char__is_alnum_or_underscore_1_0)
MR_def_extern_entry(char__is_binary_digit_1_0)
MR_def_extern_entry(char__is_octal_digit_1_0)
MR_def_extern_entry(char__is_hex_digit_2_0)
MR_def_extern_entry(char__is_hex_digit_1_0)
MR_def_extern_entry(char__int_to_hex_char_2_0)
MR_def_extern_entry(char__int_to_digit_2_0)
MR_def_extern_entry(char__int_to_digit_2_1)
MR_def_extern_entry(char__digit_to_int_2_0)
MR_def_extern_entry(char__det_int_to_digit_2_0)
MR_def_extern_entry(fn__char__det_int_to_digit_1_0)
MR_def_extern_entry(__Unify___char__char_0_0)
MR_def_extern_entry(__Compare___char__char_0_0)
MR_def_extern_entry(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0)
MR_def_extern_entry(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0)
MR_decl_static(fn__f_99_104_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
-130049,
-96257,
2047
}
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
8258559,
8257536
}
},
{
{
-130049,
2047
}
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[26] =
{
{
65
},
{
66
},
{
67
},
{
68
},
{
69
},
{
70
},
{
71
},
{
72
},
{
73
},
{
74
},
{
75
},
{
76
},
{
77
},
{
78
},
{
79
},
{
80
},
{
81
},
{
82
},
{
83
},
{
84
},
{
85
},
{
86
},
{
87
},
{
88
},
{
89
},
{
90
},
};

static const struct mercury_type_0 mercury_vector_common_0_1[26] =
{
{
97
},
{
98
},
{
99
},
{
100
},
{
101
},
{
102
},
{
103
},
{
104
},
{
105
},
{
106
},
{
107
},
{
108
},
{
109
},
{
110
},
{
111
},
{
112
},
{
113
},
{
114
},
{
115
},
{
116
},
{
117
},
{
118
},
{
119
},
{
120
},
{
121
},
{
122
},
};

static const struct mercury_type_0 mercury_vector_common_0_2[55] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
10
},
{
11
},
{
12
},
{
13
},
{
14
},
{
15
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
10
},
{
11
},
{
12
},
{
13
},
{
14
},
{
15
},
};

static const struct mercury_type_0 mercury_vector_common_0_3[16] =
{
{
48
},
{
49
},
{
50
},
{
51
},
{
52
},
{
53
},
{
54
},
{
55
},
{
56
},
{
57
},
{
65
},
{
66
},
{
67
},
{
68
},
{
69
},
{
70
},
};

static const struct mercury_type_0 mercury_vector_common_0_4[36] =
{
{
48
},
{
49
},
{
50
},
{
51
},
{
52
},
{
53
},
{
54
},
{
55
},
{
56
},
{
57
},
{
65
},
{
66
},
{
67
},
{
68
},
{
69
},
{
70
},
{
71
},
{
72
},
{
73
},
{
74
},
{
75
},
{
76
},
{
77
},
{
78
},
{
79
},
{
80
},
{
81
},
{
82
},
{
83
},
{
84
},
{
85
},
{
86
},
{
87
},
{
88
},
{
89
},
{
90
},
};

static const struct mercury_type_0 mercury_vector_common_0_5[43] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
10
},
{
11
},
{
12
},
{
13
},
{
14
},
{
15
},
{
16
},
{
17
},
{
18
},
{
19
},
{
20
},
{
21
},
{
22
},
{
23
},
{
24
},
{
25
},
{
26
},
{
27
},
{
28
},
{
29
},
{
30
},
{
31
},
{
32
},
{
33
},
{
34
},
{
35
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;

const MR_TypeCtorInfo_Struct mercury_data_char__type_ctor_info_char_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___char__char_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___char__char_0_0)),
	"char",
	"char",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_character_0 },
	-1,
	0,
	NULL
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_enum__enum__arity1__character__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0))
};


MR_BEGIN_MODULE(char_module0)
	MR_init_entry1(char__to_int_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_int_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__to_int_2_0
	Character = MR_r1;
{
#line 490 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 922 "char.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module1)
	MR_init_entry1(char__to_int_2_1);
	MR_init_label1(char__to_int_2_1,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_int_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__to_int_2_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Character = MR_r1;
	Int = MR_r2;
{
#line 498 "char.m"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 959 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(char__to_int_2_1_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__to_int_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module2)
	MR_init_entry1(char__to_int_2_2);
	MR_init_label1(char__to_int_2_2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_int_2_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__to_int_2_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 506 "char.m"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 1008 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(char__to_int_2_2_i1);
	MR_r2 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__to_int_2_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module3)
	MR_init_entry1(fn__char__to_int_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__char__to_int_1_0
	Character = MR_r1;
{
#line 490 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 1048 "char.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module4)
	MR_init_entry1(char__from_int_2_0);
	MR_init_label1(char__from_int_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__from_int_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__from_int_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 506 "char.m"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 1090 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(char__from_int_2_0_i1);
	MR_r2 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__from_int_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(char_module5)
	MR_init_entry1(char__det_from_int_2_0);
	MR_init_label1(char__det_from_int_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__det_from_int_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__det_from_int_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 506 "char.m"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 1141 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(char__det_from_int_2_0_i2);
	MR_r1 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(char__det_from_int_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char.det_from_int: conversion failed", 36);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module6)
	MR_init_entry1(fn__char__det_from_int_1_0);
	MR_init_label1(fn__char__det_from_int_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__det_from_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__char__det_from_int_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 506 "char.m"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 1190 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__char__det_from_int_1_0_i2);
	MR_r1 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__char__det_from_int_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char.det_from_int: conversion failed", 36);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module7)
	MR_init_entry1(char__max_char_value_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__max_char_value_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__char__max_char_value_1_0
{
#line 600 "char.m"

    Max = UCHAR_MAX;
;}
#line 1227 "char.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module8)
	MR_init_entry1(fn__char__max_char_value_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__max_char_value_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__char__max_char_value_0_0
{
#line 600 "char.m"

    Max = UCHAR_MAX;
;}
#line 1257 "char.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module9)
	MR_init_entry1(char__min_char_value_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__min_char_value_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module10)
	MR_init_entry1(fn__char__min_char_value_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__min_char_value_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module11)
	MR_init_entry1(char__lower_upper_2_0);
	MR_init_label1(char__lower_upper_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__lower_upper_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 97) <= 25))) {
		MR_GOTO_LAB(char__lower_upper_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, ((MR_Integer) MR_r1 - (MR_Integer) 97));
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(char__lower_upper_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module12)
	MR_init_entry1(char__lower_upper_2_1);
	MR_init_label1(char__lower_upper_2_1,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__lower_upper_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 65) <= 25))) {
		MR_GOTO_LAB(char__lower_upper_2_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, ((MR_Integer) MR_r1 - (MR_Integer) 65));
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(char__lower_upper_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module13)
	MR_init_entry1(char__to_upper_2_0);
	MR_init_label2(char__to_upper_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_upper_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		char__to_upper_2_0_i4);
MR_def_label(char__to_upper_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(char__to_upper_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(char__to_upper_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module14)
	MR_init_entry1(fn__char__to_upper_1_0);
	MR_init_label2(fn__char__to_upper_1_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__to_upper_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		fn__char__to_upper_1_0_i4);
MR_def_label(fn__char__to_upper_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__char__to_upper_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__char__to_upper_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module15)
	MR_init_entry1(char__to_lower_2_0);
	MR_init_label2(char__to_lower_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_lower_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_1,
		char__to_lower_2_0_i4);
MR_def_label(char__to_lower_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(char__to_lower_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(char__to_lower_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module16)
	MR_init_entry1(fn__char__to_lower_1_0);
	MR_init_label2(fn__char__to_lower_1_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__to_lower_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_1,
		fn__char__to_lower_1_0_i4);
MR_def_label(fn__char__to_lower_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__char__to_lower_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__char__to_lower_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module17)
	MR_init_entry1(char__is_whitespace_1_0);
	MR_init_label1(char__is_whitespace_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_whitespace_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,9)) {
		MR_GOTO_LAB(char__is_whitespace_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,10)) {
		MR_GOTO_LAB(char__is_whitespace_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,11)) {
		MR_GOTO_LAB(char__is_whitespace_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,12)) {
		MR_GOTO_LAB(char__is_whitespace_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,13)) {
		MR_GOTO_LAB(char__is_whitespace_1_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 32);
	MR_proceed();
MR_def_label(char__is_whitespace_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module18)
	MR_init_entry1(char__is_upper_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_upper_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(char__lower_upper_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module19)
	MR_init_entry1(char__is_lower_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_lower_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(char__lower_upper_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module20)
	MR_init_entry1(char__is_alpha_1_0);
	MR_init_label2(char__is_alpha_1_0,4,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_alpha_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		char__is_alpha_1_0_i4);
MR_def_label(char__is_alpha_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(char__is_alpha_1_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(char__lower_upper_2_1);
MR_def_label(char__is_alpha_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module21)
	MR_init_entry1(char__is_digit_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_digit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 48) <= 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module22)
	MR_init_entry1(char__is_alnum_1_0);
	MR_init_label4(char__is_alnum_1_0,6,8,14,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_alnum_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		char__is_alnum_1_0_i6);
MR_def_label(char__is_alnum_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(char__is_alnum_1_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(char__lower_upper_2_1,
		char__is_alnum_1_0_i8);
MR_def_label(char__is_alnum_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(char__is_alnum_1_0_i2);
	}
MR_def_label(char__is_alnum_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_alnum_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = ((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 48) <= 9);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module23)
	MR_init_entry1(char__is_alpha_or_underscore_1_0);
	MR_init_label2(char__is_alpha_or_underscore_1_0,6,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_alpha_or_underscore_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_r1,95)) {
		MR_GOTO_LAB(char__is_alpha_or_underscore_1_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		char__is_alpha_or_underscore_1_0_i6);
MR_def_label(char__is_alpha_or_underscore_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(char__is_alpha_or_underscore_1_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(char__lower_upper_2_1);
MR_def_label(char__is_alpha_or_underscore_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module24)
	MR_init_entry1(char__is_alnum_or_underscore_1_0);
	MR_init_label1(char__is_alnum_or_underscore_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_alnum_or_underscore_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 48) <= 74))) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i1);
	}
	MR_r1 = (((MR_Integer) 1 << (((MR_Integer) MR_r1 - (MR_Integer) 48) & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(1,0), (((MR_Integer) MR_r1 - (MR_Integer) 48) >> (MR_Integer) 5)));
	MR_proceed();
MR_def_label(char__is_alnum_or_underscore_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module25)
	MR_init_entry1(char__is_binary_digit_1_0);
	MR_init_label1(char__is_binary_digit_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_binary_digit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,48)) {
		MR_GOTO_LAB(char__is_binary_digit_1_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 49);
	MR_proceed();
MR_def_label(char__is_binary_digit_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module26)
	MR_init_entry1(char__is_octal_digit_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_octal_digit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 48) <= 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module27)
	MR_init_entry1(char__is_hex_digit_2_0);
	MR_init_label1(char__is_hex_digit_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_hex_digit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 48) <= 54))) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i1);
	}
	if (!((((MR_Integer) 1 << (((MR_Integer) MR_r1 - (MR_Integer) 48) & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(2,0), (((MR_Integer) MR_r1 - (MR_Integer) 48) >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_2, ((MR_Integer) MR_r1 - (MR_Integer) 48));
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(char__is_hex_digit_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module28)
	MR_init_entry1(char__is_hex_digit_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_hex_digit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(char__is_hex_digit_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module29)
	MR_init_entry1(char__int_to_hex_char_2_0);
	MR_init_label1(char__int_to_hex_char_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__int_to_hex_char_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) MR_r1 <= 15))) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_3, MR_r1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(char__int_to_hex_char_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module30)
	MR_init_entry1(char__int_to_digit_2_0);
	MR_init_label1(char__int_to_digit_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__int_to_digit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) MR_r1 <= 35))) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_4, MR_r1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(char__int_to_digit_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module31)
	MR_init_entry1(char__int_to_digit_2_1);
	MR_init_label1(char__int_to_digit_2_1,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__int_to_digit_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 48) <= 42))) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i1);
	}
	if (!((((MR_Integer) 1 << (((MR_Integer) MR_r1 - (MR_Integer) 48) & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(2,1), (((MR_Integer) MR_r1 - (MR_Integer) 48) >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_5, ((MR_Integer) MR_r1 - (MR_Integer) 48));
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(char__int_to_digit_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module32)
	MR_init_entry1(char__digit_to_int_2_0);
	MR_init_label2(char__digit_to_int_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__digit_to_int_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		char__digit_to_int_2_0_i4);
MR_def_label(char__digit_to_int_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(char__digit_to_int_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(char__int_to_digit_2_1);
MR_def_label(char__digit_to_int_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(char__int_to_digit_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module33)
	MR_init_entry1(char__det_int_to_digit_2_0);
	MR_init_label2(char__det_int_to_digit_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__det_int_to_digit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(char__int_to_digit_2_0,
		char__det_int_to_digit_2_0_i3);
MR_def_label(char__det_int_to_digit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(char__det_int_to_digit_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(char__det_int_to_digit_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char.int_to_digit failed", 24);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module34)
	MR_init_entry1(fn__char__det_int_to_digit_1_0);
	MR_init_label2(fn__char__det_int_to_digit_1_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__det_int_to_digit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(char__int_to_digit_2_0,
		fn__char__det_int_to_digit_1_0_i3);
MR_def_label(fn__char__det_int_to_digit_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__char__det_int_to_digit_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__char__det_int_to_digit_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char.int_to_digit failed", 24);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module35)
	MR_init_entry1(__Unify___char__char_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___char__char_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module36)
	MR_init_entry1(__Compare___char__char_0_0);
	MR_init_label2(__Compare___char__char_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___char__char_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___char__char_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___char__char_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___char__char_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___char__char_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module37)
	MR_init_entry1(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0
	Character = MR_r1;
{
#line 490 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 2135 "char.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module38)
	MR_init_entry1(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0);
	MR_init_label1(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 506 "char.m"

    /*
    ** If the integer doesn't fit into a char, then the assignment
    ** `Character = Int' below will truncate it. SUCCESS_INDICATOR will be set
    ** to true only if the result was not truncated.
    */
    Character = Int;
    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 2177 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0_i1);
	MR_r2 = Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module39)
	MR_init_entry1(fn__f_99_104_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_104_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__char_maybe_bunch_0(void)
{
	char_module0();
	char_module1();
	char_module2();
	char_module3();
	char_module4();
	char_module5();
	char_module6();
	char_module7();
	char_module8();
	char_module9();
	char_module10();
	char_module11();
	char_module12();
	char_module13();
	char_module14();
	char_module15();
	char_module16();
	char_module17();
	char_module18();
	char_module19();
	char_module20();
	char_module21();
	char_module22();
	char_module23();
	char_module24();
	char_module25();
	char_module26();
	char_module27();
	char_module28();
	char_module29();
	char_module30();
	char_module31();
	char_module32();
	char_module33();
	char_module34();
	char_module35();
	char_module36();
	char_module37();
	char_module38();
	char_module39();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__char__init(void);
void mercury__char__init_type_tables(void);
void mercury__char__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__char__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__char__init_complexity_procs(void);
#endif

void mercury__char__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__char_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_char__type_ctor_info_char_0,
		char__char_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_enum__enum__arity1__character__arity0__, 5) =
			MR_ENTRY_AP(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_enum__enum__arity1__character__arity0__, 6) =
			MR_ENTRY_AP(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__char__init_debugger();
}

void mercury__char__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_char__type_ctor_info_char_0);
	}
}


void mercury__char__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__char__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__char__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
