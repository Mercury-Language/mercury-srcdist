/*
** Automatically generated from `par_conj_gen.m'
** by the Mercury compiler,
** version rotd-2009-12-12, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__par_conj_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.par_conj_gen.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.par_conj_gen.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ll_backend.par_conj_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.par_conj_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.par_conj_gen.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.par_conj_gen.c"
#line 48 "ll_backend.par_conj_gen.c"
#include "ll_backend.par_conj_gen.mh"

#line 51 "ll_backend.par_conj_gen.c"
#line 52 "ll_backend.par_conj_gen.c"
#ifndef LL_BACKEND__PAR_CONJ_GEN_DECL_GUARD
#define LL_BACKEND__PAR_CONJ_GEN_DECL_GUARD

#line 56 "ll_backend.par_conj_gen.c"
#line 57 "ll_backend.par_conj_gen.c"

#endif
#line 60 "ll_backend.par_conj_gen.c"

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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0, 4,3,5,6,8,9,10,12,13,15)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0, 16,18,21,20,25,26,29,36,37,38)
MR_decl_label3(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0, 39,40,41)
MR_decl_label6(ll_backend__par_conj_gen__find_outputs_6_0, 22,3,4,5,8,6)
MR_decl_label10(ll_backend__par_conj_gen__generate_par_conj_6_0, 3,5,4,7,2,9,10,11,12,14)
MR_decl_label10(ll_backend__par_conj_gen__generate_par_conj_6_0, 15,16,17,21,30,34,35,36,37,38)
MR_decl_label10(ll_backend__par_conj_gen__generate_par_conj_6_0, 40,39,45,47,48,49,50,51,52,53)
MR_decl_label10(ll_backend__par_conj_gen__generate_par_conj_6_0, 18,55,56,57,58,59,60,62,61,67)
MR_decl_label10(ll_backend__par_conj_gen__generate_par_conj_6_0, 69,70,71,72,73,74,75,80,81,82)
MR_decl_label9(ll_backend__par_conj_gen__generate_par_conj_6_0, 85,88,89,90,91,92,93,94,95)
MR_decl_label8(ll_backend__par_conj_gen__place_all_outputs_3_0, 29,3,4,5,9,11,6,13)
MR_decl_label10(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0, 61,6,8,62,12,60,17,59,21,58)
MR_decl_label7(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0, 25,27,57,31,56,35,55)
MR_decl_static(ll_backend__par_conj_gen__find_outputs_6_0)
MR_decl_static(ll_backend__par_conj_gen__place_all_outputs_3_0)
MR_decl_static(fn__ll_backend__par_conj_gen__this_file_0_0)
MR_def_extern_entry(ll_backend__par_conj_gen__generate_par_conj_6_0)
MR_decl_static(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_0)
MR_decl_static(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
MR_TAG_COMMON(0,3,0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
MR_tbmkword(0, 5)
},
{
MR_tbmkword(0, 4)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
1,
MR_tbmkword(0, 5),
MR_TAG_COMMON(0,1,1)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_TAG_COMMON(3,2,0),
MR_string_const("set the parent stack pointer", 28)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_8;
static const struct mercury_type_4 mercury_common_4[9] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_7,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_8,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
};

MR_decl_entry(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0);
static const struct mercury_type_5 mercury_common_5[12] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0),
0
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0),
0
},
{
MR_COMMON(4,6),
MR_ENTRY_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0),
0
},
{
MR_COMMON(4,7),
MR_ENTRY_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0),
0
},
{
MR_COMMON(4,8),
MR_ENTRY_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_3;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, instruction),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
},
{
(MR_Word *) &mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot),
MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn)
},
{
(MR_Word *) &mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, instruction),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_3 = {
{
MR_PREDICATE,
"ll_backend.par_conj_gen",
"ll_backend.par_conj_gen",
"replace_stack_vars_by_parent_sv_instr",
2,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
311,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_llds",
"hlds.hlds_llds",
"stack_slot_to_abs_locn",
2,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
270,
"d2;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_1 = {
{
MR_PREDICATE,
"ll_backend.par_conj_gen",
"ll_backend.par_conj_gen",
"replace_stack_vars_by_parent_sv_instr",
2,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
311,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_8 = {
{
MR_PREDICATE,
"ll_backend.par_conj_gen",
"ll_backend.par_conj_gen",
"replace_stack_vars_by_parent_sv_lval",
4,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
324,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_7 = {
{
MR_PREDICATE,
"ll_backend.par_conj_gen",
"ll_backend.par_conj_gen",
"replace_stack_vars_by_parent_sv_lval",
4,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
324,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_6 = {
{
MR_PREDICATE,
"ll_backend.par_conj_gen",
"ll_backend.par_conj_gen",
"replace_stack_vars_by_parent_sv_lval",
4,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
324,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_5 = {
{
MR_PREDICATE,
"ll_backend.par_conj_gen",
"ll_backend.par_conj_gen",
"replace_stack_vars_by_parent_sv_lval",
4,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
324,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_4 = {
{
MR_PREDICATE,
"ll_backend.par_conj_gen",
"ll_backend.par_conj_gen",
"replace_stack_vars_by_parent_sv_lval",
4,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
324,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_3 = {
{
MR_PREDICATE,
"ll_backend.par_conj_gen",
"ll_backend.par_conj_gen",
"replace_stack_vars_by_parent_sv_lval",
4,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
324,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_2 = {
{
MR_PREDICATE,
"ll_backend.par_conj_gen",
"ll_backend.par_conj_gen",
"replace_stack_vars_by_parent_sv_lval",
4,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
324,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.par_conj_gen",
"ll_backend.par_conj_gen",
"replace_stack_vars_by_parent_sv_lval",
4,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
324,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_0_1 = {
{
MR_PREDICATE,
"ll_backend.par_conj_gen",
"ll_backend.par_conj_gen",
"replace_stack_vars_by_parent_sv_lval",
4,
0
},
"ll_backend.par_conj_gen",
"par_conj_gen.m",
317,
"d1;c3;"
};


MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);

MR_BEGIN_MODULE(ll_backend__par_conj_gen_module0)
	MR_init_entry1(ll_backend__par_conj_gen__find_outputs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__par_conj_gen__find_outputs_6_0);
	MR_init_label6(ll_backend__par_conj_gen__find_outputs_6_0,22,3,4,5,8,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_outputs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__par_conj_gen__find_outputs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__par_conj_gen__find_outputs_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__find_outputs_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__par_conj_gen__find_outputs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		ll_backend__par_conj_gen__find_outputs_6_0_i4);
MR_def_label(ll_backend__par_conj_gen__find_outputs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		ll_backend__par_conj_gen__find_outputs_6_0_i5);
MR_def_label(ll_backend__par_conj_gen__find_outputs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		ll_backend__par_conj_gen__find_outputs_6_0_i8);
MR_def_label(ll_backend__par_conj_gen__find_outputs_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__find_outputs_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__par_conj_gen__find_outputs_6_0_i22);
	}
MR_def_label(ll_backend__par_conj_gen__find_outputs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__par_conj_gen__find_outputs_6_0_i22);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__variable_locations_2_0);
MR_decl_entry(ll_backend__code_info__get_variable_slot_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(ll_backend__code_info__set_var_location_4_0);

MR_BEGIN_MODULE(ll_backend__par_conj_gen_module1)
	MR_init_entry1(ll_backend__par_conj_gen__place_all_outputs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__par_conj_gen__place_all_outputs_3_0);
	MR_init_label8(ll_backend__par_conj_gen__place_all_outputs_3_0,29,3,4,5,9,11,6,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'place_all_outputs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__par_conj_gen__place_all_outputs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__par_conj_gen__place_all_outputs_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__place_all_outputs_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__par_conj_gen__place_all_outputs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__variable_locations_2_0,
		ll_backend__par_conj_gen__place_all_outputs_3_0_i4);
MR_def_label(ll_backend__par_conj_gen__place_all_outputs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__get_variable_slot_3_0,
		ll_backend__par_conj_gen__place_all_outputs_3_0_i5);
MR_def_label(ll_backend__par_conj_gen__place_all_outputs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__par_conj_gen__place_all_outputs_3_0_i9);
MR_def_label(ll_backend__par_conj_gen__place_all_outputs_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__place_all_outputs_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__par_conj_gen__place_all_outputs_3_0_i11);
MR_def_label(ll_backend__par_conj_gen__place_all_outputs_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__place_all_outputs_3_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__par_conj_gen__place_all_outputs_3_0_i29);
MR_def_label(ll_backend__par_conj_gen__place_all_outputs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__set_var_location_4_0,
		ll_backend__par_conj_gen__place_all_outputs_3_0_i13);
MR_def_label(ll_backend__par_conj_gen__place_all_outputs_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__par_conj_gen__place_all_outputs_3_0_i29);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__par_conj_gen_module2)
	MR_init_entry1(fn__ll_backend__par_conj_gen__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__par_conj_gen__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__par_conj_gen__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("par_conj_gen.m", 14);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(ll_backend__code_info__get_globals_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(ll_backend__code_info__get_par_conj_depth_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_slot_contents_0;
MR_decl_entry(fn__list__duplicate_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(ll_backend__code_info__acquire_temp_slot_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(fn__cord__from_list_1_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(ll_backend__code_info__get_known_variables_2_0);
MR_decl_entry(ll_backend__code_info__save_variables_on_stack_4_0);
MR_decl_entry(ll_backend__code_info__get_instmap_2_0);
MR_decl_entry(ll_backend__code_info__acquire_several_temp_slots_8_0);
MR_decl_entry(list__last_2_0);
MR_decl_entry(ll_backend__code_info__set_par_conj_depth_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(ll_backend__code_info__clear_all_registers_3_0);
MR_decl_entry(ll_backend__code_info__release_several_temp_slots_4_0);
MR_decl_entry(ll_backend__code_info__release_temp_slot_4_0);
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__par_conj_gen_module3)
	MR_init_entry1(ll_backend__par_conj_gen__generate_par_conj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__par_conj_gen__generate_par_conj_6_0);
	MR_init_label10(ll_backend__par_conj_gen__generate_par_conj_6_0,3,5,4,7,2,9,10,11,12,14)
	MR_init_label10(ll_backend__par_conj_gen__generate_par_conj_6_0,15,16,17,21,30,34,35,36,37,38)
	MR_init_label10(ll_backend__par_conj_gen__generate_par_conj_6_0,40,39,45,47,48,49,50,51,52,53)
	MR_init_label10(ll_backend__par_conj_gen__generate_par_conj_6_0,18,55,56,57,58,59,60,62,61,67)
	MR_init_label10(ll_backend__par_conj_gen__generate_par_conj_6_0,69,70,71,72,73,74,75,80,81,82)
	MR_init_label9(ll_backend__par_conj_gen__generate_par_conj_6_0,85,88,89,90,91,92,93,94,95)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_par_conj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__par_conj_gen__generate_par_conj_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__generate_par_conj_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r4;
	MR_GOTO_LAB(ll_backend__par_conj_gen__generate_par_conj_6_0_i2);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__generate_par_conj_6_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(fn__ll_backend__par_conj_gen__this_file_0_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i5);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("nondet parallel conjunction not implemented", 43);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i2);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(fn__ll_backend__par_conj_gen__this_file_0_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i7);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("semidet parallel conjunction not implemented", 44);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i2);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i9);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 218;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i10);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__get_par_conj_depth_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i11);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i12);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i14);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i15);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, slot_contents);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 6);
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i16);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i17);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__generate_par_conj_6_0_i18);
	}
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_temp_slot_5_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i21);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("save the old parent stack pointer", 33);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_sv(14) = MR_tempr4;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i30);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("restore old parent stack pointer", 32);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i34);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__get_known_variables_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i35);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__save_variables_on_stack_4_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i36);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_instmap_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i37);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(ll_backend__code_info__acquire_several_temp_slots_8_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i38);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__last_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i40);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__generate_par_conj_6_0_i39);
	}
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__generate_par_conj_6_0_i39);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__generate_par_conj_6_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr3 = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(10) = MR_tempr3;
	MR_tempr2 = MR_sv(11);
	MR_sv(11) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r1 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__set_par_conj_depth_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i48);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__par_conj_gen__this_file_0_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i45);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_par_conj", 17);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i47);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__set_par_conj_depth_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i48);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i49);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__clear_all_registers_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i50);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i51);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_info__set_par_conj_depth_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i52);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_several_temp_slots_4_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i53);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_temp_slot_4_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i75);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i55);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i56);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__get_known_variables_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i57);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__save_variables_on_stack_4_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i58);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_instmap_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i59);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(ll_backend__code_info__acquire_several_temp_slots_8_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i60);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__last_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i62);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__generate_par_conj_6_0_i61);
	}
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__generate_par_conj_6_0_i61);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__generate_par_conj_6_0_i61);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr3 = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(10) = MR_tempr3;
	MR_tempr2 = MR_sv(11);
	MR_sv(11) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(ll_backend__code_info__set_par_conj_depth_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i70);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__par_conj_gen__this_file_0_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i67);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_par_conj", 17);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i69);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__set_par_conj_depth_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i70);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i71);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__clear_all_registers_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i72);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i73);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_info__set_par_conj_depth_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i74);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__generate_par_conj_6_0_i75);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_several_temp_slots_4_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i75);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i80);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i81);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__par_conj_gen__find_outputs_6_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i82);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 28;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("initialize sync term", 20);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i85);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("end of parallel conjunction", 27);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i88);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i89);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i90);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i91);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i92);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i93);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__clear_all_registers_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i94);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__par_conj_gen__place_all_outputs_3_0,
		ll_backend__par_conj_gen__generate_par_conj_6_0_i95);
MR_def_label(ll_backend__par_conj_gen__generate_par_conj_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
MR_decl_entry(ll_backend__exprn_aux__transform_lval_in_instr_5_0);

MR_BEGIN_MODULE(ll_backend__par_conj_gen_module4)
	MR_init_entry1(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_stack_vars_by_parent_sv_instr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__exprn_aux__transform_lval_in_instr_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__exprn_aux__transform_lval_in_rval_5_0);

MR_BEGIN_MODULE(ll_backend__par_conj_gen_module5)
	MR_init_entry1(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0);
	MR_init_label10(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,61,6,8,62,12,60,17,59,21,58)
	MR_init_label7(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,25,27,57,31,56,35,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_stack_vars_by_parent_sv_lval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i55);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i27) MR_AND
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i55) MR_AND
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i55) MR_AND
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i56) MR_AND
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i58) MR_AND
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i60) MR_AND
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i61) MR_AND
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i62) MR_AND
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i55) MR_AND
		MR_LABEL_AP(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i55));
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i6);
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i8);
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i12);
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i17);
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i21);
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i25);
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,7);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i31);
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,8);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__transform_lval_in_rval_5_0,
		ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0_i35);
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(cord__map_pred_3_0);
MR_decl_entry(ll_backend__code_info__get_stack_slots_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
MR_decl_entry(fn__map__map_values_only_2_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);

MR_BEGIN_MODULE(ll_backend__par_conj_gen_module6)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0);
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,4,3,5,6,8,9,10,12,13,15)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,16,18,21,20,25,26,29,36,37,38)
	MR_init_label3(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,39,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generate_det_par_conj_2__[4]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i3);
	}
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(cord__map_pred_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_stack_slots_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_known_variables_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i10);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(10);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,10);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__map_values_only_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i15);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(cord__map_pred_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i18);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i20);
	}
	MR_sv(7) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i21);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 30;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("finish", 6);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i36);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i25);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i26);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 29;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("fork off a child", 16);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i29);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 30;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("finish", 6);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("start of the next conjunct", 26);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i36);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i37);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i38);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i39);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	}
	MR_np_localcall_lab(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i40);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0_i41);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_112_97_114_95_99_111_110_106_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__par_conj_gen_maybe_bunch_0(void)
{
	ll_backend__par_conj_gen_module0();
	ll_backend__par_conj_gen_module1();
	ll_backend__par_conj_gen_module2();
	ll_backend__par_conj_gen_module3();
	ll_backend__par_conj_gen_module4();
	ll_backend__par_conj_gen_module5();
	ll_backend__par_conj_gen_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__par_conj_gen__init(void);
void mercury__ll_backend__par_conj_gen__init_type_tables(void);
void mercury__ll_backend__par_conj_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__par_conj_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__par_conj_gen__init_complexity_procs(void);
#endif

void mercury__ll_backend__par_conj_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__par_conj_gen_maybe_bunch_0();
	mercury__ll_backend__par_conj_gen__init_debugger();
}

void mercury__ll_backend__par_conj_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__par_conj_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__par_conj_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__par_conj_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__par_conj_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
