/*
** Automatically generated from `term_constr_initial.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__term_constr_initial__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.term_constr_initial.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.term_constr_initial.c"
#line 226 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 35 "transform_hlds.term_constr_initial.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "transform_hlds.term_constr_initial.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "transform_hlds.term_constr_initial.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "transform_hlds.term_constr_initial.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "transform_hlds.term_constr_initial.c"
#line 52 "transform_hlds.term_constr_initial.c"
#include "transform_hlds.term_constr_initial.mh"

#line 55 "transform_hlds.term_constr_initial.c"
#line 56 "transform_hlds.term_constr_initial.c"
#ifndef TRANSFORM_HLDS__TERM_CONSTR_INITIAL_DECL_GUARD
#define TRANSFORM_HLDS__TERM_CONSTR_INITIAL_DECL_GUARD

#line 60 "transform_hlds.term_constr_initial.c"
#line 61 "transform_hlds.term_constr_initial.c"

#endif
#line 64 "transform_hlds.term_constr_initial.c"

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
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];
MR_decl_label2(transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_0, 3,5)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0, 106,3,4,5,6,7,8,9,12,21)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0, 20,23,24,25,19,28,29,30,15,10)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0, 37,35,41,42,44,45,46,49,51,52)
MR_decl_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0, 53,54,55)
MR_decl_label3(transform_hlds__term_constr_initial__create_arg_size_constraint_3_0, 7,3,12)
MR_decl_label1(transform_hlds__term_constr_initial__create_lp_term_3_0, 3)
MR_decl_label9(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0, 16,3,4,5,6,7,8,9,10)
MR_decl_label5(transform_hlds__term_constr_initial__make_info_7_0, 2,3,4,5,7)
MR_decl_label2(transform_hlds__term_constr_initial__preprocess_module_4_0, 2,3)
MR_decl_label10(transform_hlds__term_constr_initial__process_builtin_preds_5_0, 17,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__term_constr_initial__process_builtin_procs_5_0, 2,3,4,5,6,11,9,15,16,17)
MR_decl_label10(transform_hlds__term_constr_initial__process_builtin_procs_5_0, 19,20,14,22,24,25,7,28,31,34)
MR_decl_label10(transform_hlds__term_constr_initial__process_builtin_procs_5_0, 35,36,30,27,43,42,46,41,40,51)
MR_decl_label9(transform_hlds__term_constr_initial__process_builtin_procs_5_0, 53,54,56,58,64,65,66,67,57)
MR_decl_label10(transform_hlds__term_constr_initial__process_imported_pred_3_0, 2,3,7,9,10,11,14,15,16,5)
MR_decl_label6(transform_hlds__term_constr_initial__process_imported_proc_3_0, 2,3,5,7,8,4)
MR_decl_label10(transform_hlds__term_constr_initial__process_imported_term_info_3_0, 2,3,5,6,7,10,12,13,15,17)
MR_decl_label10(transform_hlds__term_constr_initial__process_imported_term_info_3_0, 18,14,20,22,24,25,21,27,28,29)
MR_decl_label3(transform_hlds__term_constr_initial__process_imported_term_info_3_0, 30,31,32)
MR_decl_label10(transform_hlds__term_constr_initial__set_generated_terminates_5_0, 31,3,5,6,7,8,9,10,12,14)
MR_decl_label5(transform_hlds__term_constr_initial__set_generated_terminates_5_0, 16,17,18,19,20)
MR_decl_label10(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0, 3,60,7,9,8,14,59,17,18,19)
MR_decl_label6(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0, 23,25,30,27,24,34)
MR_decl_static(transform_hlds__term_constr_initial__make_info_7_0)
MR_decl_static(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0)
MR_decl_static(transform_hlds__term_constr_initial__set_generated_terminates_5_0)
MR_decl_static(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0)
MR_decl_static(transform_hlds__term_constr_initial__process_builtin_procs_5_0)
MR_decl_static(transform_hlds__term_constr_initial__process_builtin_preds_5_0)
MR_def_extern_entry(transform_hlds__term_constr_initial__preprocess_module_4_0)
MR_decl_static(transform_hlds__term_constr_initial__process_imported_pred_3_0)
MR_decl_static(transform_hlds__term_constr_initial__process_imported_term_info_3_0)
MR_decl_static(transform_hlds__term_constr_initial__process_imported_proc_3_0)
MR_decl_static(transform_hlds__term_constr_initial__create_arg_size_constraint_3_0)
MR_decl_static(transform_hlds__term_constr_initial__create_lp_term_3_0)
MR_decl_static(transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_0)
MR_decl_static(transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__444__1_2_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
0
},
{
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[6] =
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
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(1,2)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_2;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,3),
MR_COMMON(1,4)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,0),
MR_COMMON(1,4)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_COMMON(1,2)
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_tbmkword(0, 0)
},
{
MR_TAG_COMMON(0,0,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__preprocess_module_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_pred_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_term_info_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_arg_size_constr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_term_info_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__create_arg_size_constraint_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_arg_size_term_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__create_arg_size_constraint_3_0_2;
static const struct mercury_type_5 mercury_common_5[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_initial__preprocess_module_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_pred_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_COMMON(7,1),
MR_COMMON(7,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_term_info_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(7,4),
MR_CTOR0_ADDR(parse_tree__prog_data, arg_size_constr),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_term_info_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(7,4),
MR_CTOR0_ADDR(parse_tree__prog_data, arg_size_constr),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_initial__create_arg_size_constraint_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(7,4),
MR_CTOR0_ADDR(parse_tree__prog_data, arg_size_term),
MR_COMMON(7,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_initial__create_arg_size_constraint_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(7,4),
MR_CTOR0_ADDR(parse_tree__prog_data, arg_size_term),
MR_COMMON(7,6)
}
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(transform_hlds__term_constr_initial__process_imported_pred_3_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(transform_hlds__term_constr_initial__process_imported_proc_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
static const struct mercury_type_7 mercury_common_7[8] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(1,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,5),
MR_COMMON(1,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(1,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_TAG_COMMON(0,1,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,2),
MR_CTOR0_ADDR(libs__rat, rat)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,1,1),
MR_CTOR0_ADDR(libs__rat, rat)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_term_info_3_0_1;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_term_info_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(7,2),
MR_COMMON(7,3),
MR_INT_CTOR_ADDR,
MR_COMMON(7,4),
MR_COMMON(7,4)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__create_arg_size_constraint_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_initial",
"transform_hlds.term_constr_initial",
"create_lp_term",
3,
0
},
"transform_hlds.term_constr_initial",
"term_constr_initial.m",
238,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__create_arg_size_constraint_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_initial",
"transform_hlds.term_constr_initial",
"create_lp_term",
3,
0
},
"transform_hlds.term_constr_initial",
"term_constr_initial.m",
241,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_term_info_3_0_3 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_initial",
"transform_hlds.term_constr_initial",
"create_arg_size_constraint",
3,
0
},
"transform_hlds.term_constr_initial",
"term_constr_initial.m",
230,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_term_info_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_initial",
"transform_hlds.term_constr_initial",
"create_arg_size_constraint",
3,
0
},
"transform_hlds.term_constr_initial",
"term_constr_initial.m",
230,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_term_info_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_initial",
"transform_hlds.term_constr_initial",
"lambda_term_constr_initial_m_218",
5,
0
},
"transform_hlds.term_constr_initial",
"term_constr_initial.m",
218,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__process_imported_pred_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_initial",
"transform_hlds.term_constr_initial",
"process_imported_proc",
3,
0
},
"transform_hlds.term_constr_initial",
"term_constr_initial.m",
166,
"d1;c3;q;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__preprocess_module_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_initial",
"transform_hlds.term_constr_initial",
"process_imported_pred",
3,
0
},
"transform_hlds.term_constr_initial",
"term_constr_initial.m",
140,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_initial",
"transform_hlds.term_constr_initial",
"lambda_term_constr_initial_m_444",
2,
0
},
"transform_hlds.term_constr_initial",
"term_constr_initial.m",
444,
"d2;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"is_zero_size_var",
2,
0
},
"transform_hlds.term_constr_initial",
"term_constr_initial.m",
444,
"d2;c14;"
};


MR_decl_entry(transform_hlds__term_constr_util__make_size_var_map_3_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0);
MR_decl_entry(fn__libs__polyhedron__from_constraints_1_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module0)
	MR_init_entry1(transform_hlds__term_constr_initial__make_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__make_info_7_0);
	MR_init_label5(transform_hlds__term_constr_initial__make_info_7_0,2,3,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__make_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(transform_hlds__term_constr_util__make_size_var_map_3_0,
		transform_hlds__term_constr_initial__make_info_7_0_i2);
MR_def_label(transform_hlds__term_constr_initial__make_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0,
		transform_hlds__term_constr_initial__make_info_7_0_i3);
MR_def_label(transform_hlds__term_constr_initial__make_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0,
		transform_hlds__term_constr_initial__make_info_7_0_i4);
MR_def_label(transform_hlds__term_constr_initial__make_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_initial__make_info_7_0_i5);
MR_def_label(transform_hlds__term_constr_initial__make_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_initial__make_info_7_0_i7);
MR_def_label(transform_hlds__term_constr_initial__make_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(list__drop_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(transform_hlds__term_constr_util__is_zero_size_var_2_0);
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(fn__libs__lp_rational__make_vars_eq_constraint_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module1)
	MR_init_entry1(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0);
	MR_init_label10(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,3,60,7,9,8,14,59,17,18,19)
	MR_init_label6(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,23,25,30,27,24,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_id_to_termination'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i59) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i60) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i3) MR_AND
		MR_LABEL_AP(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i14));
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(transform_hlds__term_constr_initial__make_info_7_0);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i7);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i9);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__term_constr_initial__make_info_7_0);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_constr_initial.m", 21);
	MR_r2 = (MR_Word) MR_string_const("Less than two arguments to builtin index.", 41);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_constr_initial.m", 21);
	MR_r2 = (MR_Word) MR_string_const("special_pred_id_to_termination/8 initialise predicate", 53);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_util__make_size_var_map_3_0,
		transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i17);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i18);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0,
		transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i19);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_util__is_zero_size_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__444__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i23);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i34);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i27);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i27);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__make_vars_eq_constraint_2_0,
		transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i30);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i34);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_constr_initial.m", 21);
	MR_r2 = (MR_Word) MR_string_const("special_pred_id_to_termination/7: wrong number of args for unify.", 65);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i24);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0_i34);
MR_def_label(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__det_elem_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_termination2_info_2_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_104_101_97_100_95_118_97_114_115_32_58_61_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_termination2_info_3_0);
MR_decl_entry(svmap__det_update_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module2)
	MR_init_entry1(transform_hlds__term_constr_initial__set_generated_terminates_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__set_generated_terminates_5_0);
	MR_init_label10(transform_hlds__term_constr_initial__set_generated_terminates_5_0,31,3,5,6,7,8,9,10,12,14)
	MR_init_label5(transform_hlds__term_constr_initial__set_generated_terminates_5_0,16,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_generated_terminates'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__set_generated_terminates_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__set_generated_terminates_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__set_generated_terminates_5_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__term_constr_initial__set_generated_terminates_5_0_i31);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i6);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i7);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i8);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_initial__special_pred_id_to_termination_8_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i9);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i10);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i12);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i14);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i16);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i17);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_104_101_97_100_95_118_97_114_115_32_58_61_2_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i18);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i19);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__term_constr_initial__set_generated_terminates_5_0_i20);
MR_def_label(transform_hlds__term_constr_initial__set_generated_terminates_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__term_constr_initial__set_generated_terminates_5_0_i31);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module3)
	MR_init_entry1(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__initialise_size_var_maps_3_0);
	MR_init_label9(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,16,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_size_var_maps'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__term_constr_initial__initialise_size_var_maps_3_0_i4);
MR_def_label(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_initial__initialise_size_var_maps_3_0_i5);
MR_def_label(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_constr_initial__initialise_size_var_maps_3_0_i6);
MR_def_label(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__term_constr_util__make_size_var_map_3_0,
		transform_hlds__term_constr_initial__initialise_size_var_maps_3_0_i7);
MR_def_label(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0,
		transform_hlds__term_constr_initial__initialise_size_var_maps_3_0_i8);
MR_def_label(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		transform_hlds__term_constr_initial__initialise_size_var_maps_3_0_i9);
MR_def_label(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__term_constr_initial__initialise_size_var_maps_3_0_i10);
MR_def_label(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0_i16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_builtin_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(mdbcomp__prim_data__special_pred_name_arity_4_1);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(mdbcomp__prim_data__any_mercury_builtin_module_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0);
MR_decl_entry(fn__libs__polyhedron__universe_0_0);
MR_decl_entry(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module4)
	MR_init_entry1(transform_hlds__term_constr_initial__process_builtin_procs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__process_builtin_procs_5_0);
	MR_init_label10(transform_hlds__term_constr_initial__process_builtin_procs_5_0,2,3,4,5,6,11,9,15,16,17)
	MR_init_label10(transform_hlds__term_constr_initial__process_builtin_procs_5_0,19,20,14,22,24,25,7,28,31,34)
	MR_init_label10(transform_hlds__term_constr_initial__process_builtin_procs_5_0,35,36,30,27,43,42,46,41,40,51)
	MR_init_label9(transform_hlds__term_constr_initial__process_builtin_procs_5_0,53,54,56,58,64,65,66,67,57)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_builtin_procs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__process_builtin_procs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i2);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i3);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i4);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i5);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i6);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_builtin_1_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i11);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i9);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i25);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i15);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i16);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__special_pred_name_arity_4_1,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i17);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i14);
	}
	if ((MR_sv(10) != MR_r4)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i14);
	}
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i19);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__prim_data__any_mercury_builtin_module_1_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i20);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i14);
	}
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i24);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i22);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i7);
	}
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 0), 0);
	}
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_r4;
	MR_np_call_localret_ent(transform_hlds__term_constr_initial__set_generated_terminates_5_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i25);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r3;
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i56);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i28);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i27);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i31);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i30);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i34);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i35);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i36);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i54);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_sv(3) = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i56);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i43);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i42);
	}
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i41);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i40);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 18;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i46);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i40);
	}
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(9);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i51);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i51);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i53);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i54);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 17;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i58);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_procs_5_0_i57);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__universe_0_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i64);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i65);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i66);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_initial__initialise_size_var_maps_3_0,
		transform_hlds__term_constr_initial__process_builtin_procs_5_0_i67);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_procs_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_procedures_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__write_pred_progress_message_5_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module5)
	MR_init_entry1(transform_hlds__term_constr_initial__process_builtin_preds_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__process_builtin_preds_5_0);
	MR_init_label10(transform_hlds__term_constr_initial__process_builtin_preds_5_0,17,3,4,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_builtin_preds'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__process_builtin_preds_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_initial__process_builtin_preds_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_preds_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_preds_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("% Termination checking ", 23);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		transform_hlds__term_constr_initial__process_builtin_preds_5_0_i4);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_preds_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__term_constr_initial__process_builtin_preds_5_0_i5);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_preds_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 76;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__term_constr_initial__process_builtin_preds_5_0_i6);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_preds_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__term_constr_initial__process_builtin_preds_5_0_i7);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_preds_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__term_constr_initial__process_builtin_preds_5_0_i8);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_preds_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_initial__process_builtin_procs_5_0,
		transform_hlds__term_constr_initial__process_builtin_preds_5_0_i9);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_preds_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__term_constr_initial__process_builtin_preds_5_0_i10);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_preds_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__term_constr_initial__process_builtin_preds_5_0_i11);
MR_def_label(transform_hlds__term_constr_initial__process_builtin_preds_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_constr_initial__process_builtin_preds_5_0_i17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module6)
	MR_init_entry1(transform_hlds__term_constr_initial__preprocess_module_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__preprocess_module_4_0);
	MR_init_label2(transform_hlds__term_constr_initial__preprocess_module_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'preprocess_module'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_initial__preprocess_module_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__term_constr_initial__preprocess_module_4_0_i2);
MR_def_label(transform_hlds__term_constr_initial__preprocess_module_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__term_constr_initial__process_builtin_preds_5_0,
		transform_hlds__term_constr_initial__preprocess_module_4_0_i3);
MR_def_label(transform_hlds__term_constr_initial__preprocess_module_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_type_spec_info_2_0);
MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module7)
	MR_init_entry1(transform_hlds__term_constr_initial__process_imported_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__process_imported_pred_3_0);
	MR_init_label10(transform_hlds__term_constr_initial__process_imported_pred_3_0,2,3,7,9,10,11,14,15,16,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_imported_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__process_imported_pred_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__term_constr_initial__process_imported_pred_3_0_i2);
MR_def_label(transform_hlds__term_constr_initial__process_imported_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_spec_info_2_0,
		transform_hlds__term_constr_initial__process_imported_pred_3_0_i3);
MR_def_label(transform_hlds__term_constr_initial__process_imported_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__term_constr_initial__process_imported_pred_3_0_i7);
MR_def_label(transform_hlds__term_constr_initial__process_imported_pred_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_imported_pred_3_0_i5);
	}
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__term_constr_initial__process_imported_pred_3_0_i9);
MR_def_label(transform_hlds__term_constr_initial__process_imported_pred_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__term_constr_initial__process_imported_pred_3_0_i10);
MR_def_label(transform_hlds__term_constr_initial__process_imported_pred_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__term_constr_initial__process_imported_pred_3_0_i11);
MR_def_label(transform_hlds__term_constr_initial__process_imported_pred_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__term_constr_initial__process_imported_pred_3_0_i14);
MR_def_label(transform_hlds__term_constr_initial__process_imported_pred_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__term_constr_initial__process_imported_pred_3_0_i15);
MR_def_label(transform_hlds__term_constr_initial__process_imported_pred_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__term_constr_initial__process_imported_pred_3_0_i16);
MR_def_label(transform_hlds__term_constr_initial__process_imported_pred_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
MR_def_label(transform_hlds__term_constr_initial__process_imported_pred_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_46_46_2_0);
MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__import_success_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_arg_size_constr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__import_failure_1_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_102_97_105_108_117_114_101_95_99_111_110_115_116_114_115_32_58_61_2_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module8)
	MR_init_entry1(transform_hlds__term_constr_initial__process_imported_term_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__process_imported_term_info_3_0);
	MR_init_label10(transform_hlds__term_constr_initial__process_imported_term_info_3_0,2,3,5,6,7,10,12,13,15,17)
	MR_init_label10(transform_hlds__term_constr_initial__process_imported_term_info_3_0,18,14,20,22,24,25,21,27,28,29)
	MR_init_label3(transform_hlds__term_constr_initial__process_imported_term_info_3_0,30,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_imported_term_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__process_imported_term_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i2);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__term_constr_util__make_size_var_map_3_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i3);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i5);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_46_46_2_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i6);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i7);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i10);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i12);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__import_success_1_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i13);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_imported_term_info_3_0_i15);
	}
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_constr_initial__process_imported_term_info_3_0_i14);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_initial__create_arg_size_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, arg_size_constr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i17);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i18);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__import_failure_1_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i20);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_imported_term_info_3_0_i22);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(transform_hlds__term_constr_initial__process_imported_term_info_3_0_i21);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_initial__create_arg_size_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, arg_size_constr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i24);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i25);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i27);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i28);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_104_101_97_100_95_118_97_114_115_32_58_61_2_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i29);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i30);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_102_97_105_108_117_114_101_95_99_111_110_115_116_114_115_32_58_61_2_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i31);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_0,
		transform_hlds__term_constr_initial__process_imported_term_info_3_0_i32);
MR_def_label(transform_hlds__term_constr_initial__process_imported_term_info_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module9)
	MR_init_entry1(transform_hlds__term_constr_initial__process_imported_proc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__process_imported_proc_3_0);
	MR_init_label6(transform_hlds__term_constr_initial__process_imported_proc_3_0,2,3,5,7,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_imported_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__process_imported_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__term_constr_initial__process_imported_proc_3_0_i2);
MR_def_label(transform_hlds__term_constr_initial__process_imported_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_initial__process_imported_proc_3_0_i3);
MR_def_label(transform_hlds__term_constr_initial__process_imported_proc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__import_success_1_0,
		transform_hlds__term_constr_initial__process_imported_proc_3_0_i5);
MR_def_label(transform_hlds__term_constr_initial__process_imported_proc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__process_imported_proc_3_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_constr_initial__process_imported_term_info_3_0,
		transform_hlds__term_constr_initial__process_imported_proc_3_0_i7);
MR_def_label(transform_hlds__term_constr_initial__process_imported_proc_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		transform_hlds__term_constr_initial__process_imported_proc_3_0_i8);
MR_def_label(transform_hlds__term_constr_initial__process_imported_proc_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(svmap__det_update_4_0);
	}
MR_def_label(transform_hlds__term_constr_initial__process_imported_proc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_arg_size_term_0;
MR_decl_entry(fn__libs__lp_rational__construct_constraint_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module10)
	MR_init_entry1(transform_hlds__term_constr_initial__create_arg_size_constraint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__create_arg_size_constraint_3_0);
	MR_init_label3(transform_hlds__term_constr_initial__create_arg_size_constraint_3_0,7,3,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_arg_size_constraint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__create_arg_size_constraint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_initial__create_arg_size_constraint_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_initial__create_lp_term_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, arg_size_term);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,7);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_constr_initial__create_arg_size_constraint_3_0_i7);
MR_def_label(transform_hlds__term_constr_initial__create_arg_size_constraint_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__libs__lp_rational__construct_constraint_3_0);
MR_def_label(transform_hlds__term_constr_initial__create_arg_size_constraint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_initial__create_lp_term_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, arg_size_term);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,7);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_constr_initial__create_arg_size_constraint_3_0_i12);
MR_def_label(transform_hlds__term_constr_initial__create_arg_size_constraint_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__libs__lp_rational__construct_constraint_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module11)
	MR_init_entry1(transform_hlds__term_constr_initial__create_lp_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__create_lp_term_3_0);
	MR_init_label1(transform_hlds__term_constr_initial__create_lp_term_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_lp_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__create_lp_term_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_0,
		transform_hlds__term_constr_initial__create_lp_term_3_0_i3);
MR_def_label(transform_hlds__term_constr_initial__create_lp_term_3_0,3)
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

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module12)
	MR_init_entry1(transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_0);
	MR_init_label2(transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_substitution_map__218__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_0,
		transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_0_i3);
MR_def_label(transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_0_i5);
MR_def_label(transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__isnt_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module13)
	MR_init_entry1(transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__444__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__444__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__special_pred_id_to_termination__444__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__444__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(std_util__isnt_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__program_representation__no_type_info_builtin_3_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0);
MR_decl_entry(transform_hlds__term_util__all_args_input_or_zero_size_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_initial_module14)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0);
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,106,3,4,5,6,7,8,9,12,21)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,20,23,24,25,19,28,29,30,15,10)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,37,35,41,42,44,45,46,49,51,52)
	MR_init_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,53,54,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__set_builtin_terminates__[2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__term_constr_util__make_size_var_map_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__no_type_info_builtin_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i10);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i15);
	}
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i15);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(9), MR_string_const("unsafe_type_cast", 16)) != 0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i21);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i20);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(9), MR_string_const("unsafe_promise_unique", 21)) != 0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i19);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(1, MR_sv(7), 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i23);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i24);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__make_vars_eq_constraint_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i25);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(9), MR_string_const("store_at_ref", 12)) != 0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(9), MR_string_const("builtin_compound_eq", 19)) != 0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(9), MR_string_const("builtin_compound_lt", 19)) != 0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(9), MR_string_const("store_at_ref_impure", 19)) != 0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_constr_initial.m", 21);
	MR_r2 = (MR_Word) MR_string_const("Unrecognised predicate passed to process_special_builtin.", 57);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i41);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_util__all_args_input_or_zero_size_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i37);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_string_const("term_constr_initial.m", 21);
	MR_r2 = (MR_Word) MR_string_const("builtin with non-zero size args.", 32);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i41);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__polyhedron__from_constraints_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i44);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i45);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i46);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i49);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i51);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i52);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_104_101_97_100_95_118_97_114_115_32_58_61_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i53);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i54);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i55);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_105_110_105_116_105_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_0_i106);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__term_constr_initial_maybe_bunch_0(void)
{
	transform_hlds__term_constr_initial_module0();
	transform_hlds__term_constr_initial_module1();
	transform_hlds__term_constr_initial_module2();
	transform_hlds__term_constr_initial_module3();
	transform_hlds__term_constr_initial_module4();
	transform_hlds__term_constr_initial_module5();
	transform_hlds__term_constr_initial_module6();
	transform_hlds__term_constr_initial_module7();
	transform_hlds__term_constr_initial_module8();
	transform_hlds__term_constr_initial_module9();
	transform_hlds__term_constr_initial_module10();
	transform_hlds__term_constr_initial_module11();
	transform_hlds__term_constr_initial_module12();
	transform_hlds__term_constr_initial_module13();
	transform_hlds__term_constr_initial_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_constr_initial__init(void);
void mercury__transform_hlds__term_constr_initial__init_type_tables(void);
void mercury__transform_hlds__term_constr_initial__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_constr_initial__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_constr_initial__init_complexity_procs(void);
#endif

void mercury__transform_hlds__term_constr_initial__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_constr_initial_maybe_bunch_0();
	mercury__transform_hlds__term_constr_initial__init_debugger();
}

void mercury__transform_hlds__term_constr_initial__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__term_constr_initial__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_constr_initial__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__term_constr_initial);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_constr_initial__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
