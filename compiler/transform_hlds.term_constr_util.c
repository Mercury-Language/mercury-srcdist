/*
** Automatically generated from `term_constr_util.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__term_constr_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.term_constr_util.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.term_constr_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.term_constr_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.term_constr_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.term_constr_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "transform_hlds.term_constr_util.c"
#line 48 "transform_hlds.term_constr_util.c"
#include "transform_hlds.term_constr_util.mh"

#line 51 "transform_hlds.term_constr_util.c"
#line 52 "transform_hlds.term_constr_util.c"
#ifndef TRANSFORM_HLDS__TERM_CONSTR_UTIL_DECL_GUARD
#define TRANSFORM_HLDS__TERM_CONSTR_UTIL_DECL_GUARD

#line 56 "transform_hlds.term_constr_util.c"
#line 57 "transform_hlds.term_constr_util.c"

#endif
#line 60 "transform_hlds.term_constr_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
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
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_constr_util__type_ctor_info_var_substitution_0;
MR_decl_label1(transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_0, 2)
MR_decl_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_0, 2,3)
MR_decl_label1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_0, 2)
MR_decl_label2(transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_0, 3,5)
MR_decl_label10(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0, 32,3,4,5,11,8,14,15,16,7)
MR_decl_label10(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0, 32,3,4,5,11,8,14,15,16,7)
MR_decl_label4(transform_hlds__term_constr_util__create_var_substitution_2_4_0, 29,3,10,8)
MR_decl_label1(transform_hlds__term_constr_util__dump_size_varset_3_0, 2)
MR_decl_label7(transform_hlds__term_constr_util__dump_size_varset_2_4_0, 15,4,6,7,8,9,17)
MR_decl_label5(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0, 3,7,9,4,1)
MR_decl_label1(transform_hlds__term_constr_util__make_size_var_map_3_0, 2)
MR_decl_label2(transform_hlds__term_constr_util__make_size_var_map_4_0, 4,8)
MR_decl_label2(transform_hlds__term_constr_util__make_size_var_map_2_5_0, 2,5)
MR_decl_label2(transform_hlds__term_constr_util__maybe_write_trace_4_0, 11,13)
MR_decl_label3(transform_hlds__term_constr_util__maybe_write_trace_nl_5_0, 4,17,19)
MR_decl_label10(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0, 21,3,4,5,6,7,8,10,11,12)
MR_decl_label3(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0, 13,14,15)
MR_decl_label5(transform_hlds__term_constr_util__write_scc_procs_2_4_0, 12,4,5,6,14)
MR_decl_label2(transform_hlds__term_constr_util__write_size_vars_4_0, 3,5)
MR_decl_label1(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_0, 3)
MR_decl_label2(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_0, 2,5)
MR_decl_label2(fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0, 4,7)
MR_decl_label1(fn__transform_hlds__term_constr_util__create_var_substitution_2_0, 3)
MR_decl_label3(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0, 4,6,8)
MR_decl_label4(fn__transform_hlds__term_constr_util__get_abstract_proc_2_0, 2,3,4,6)
MR_decl_label2(fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0, 2,3)
MR_decl_label7(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0, 27,4,7,5,9,12,13)
MR_decl_label2(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0, 5,2)
MR_def_extern_entry(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_util__get_abstract_scc_2_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_util__get_abstract_proc_2_0)
MR_def_extern_entry(transform_hlds__term_constr_util__make_size_var_map_4_0)
MR_def_extern_entry(transform_hlds__term_constr_util__make_size_var_map_3_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0)
MR_decl_static(transform_hlds__term_constr_util__create_var_substitution_2_4_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_util__create_var_substitution_2_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0)
MR_def_extern_entry(transform_hlds__term_constr_util__is_zero_size_var_2_0)
MR_def_extern_entry(transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_util__substitute_size_vars_2_0)
MR_def_extern_entry(transform_hlds__term_constr_util__maybe_write_trace_nl_5_0)
MR_def_extern_entry(transform_hlds__term_constr_util__maybe_write_trace_4_0)
MR_decl_static(transform_hlds__term_constr_util__write_scc_procs_2_4_0)
MR_def_extern_entry(transform_hlds__term_constr_util__maybe_write_scc_procs_5_0)
MR_def_extern_entry(transform_hlds__term_constr_util__maybe_write_proc_name_6_0)
MR_def_extern_entry(transform_hlds__term_constr_util__write_size_vars_4_0)
MR_decl_static(transform_hlds__term_constr_util__dump_size_varset_2_4_0)
MR_def_extern_entry(transform_hlds__term_constr_util__dump_size_varset_3_0)
MR_def_extern_entry(transform_hlds__term_constr_util__dump_size_vars_4_0)
MR_def_extern_entry(transform_hlds__term_constr_util__update_arg_size_info_4_0)
MR_def_extern_entry(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0)
MR_def_extern_entry(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0)
MR_decl_static(transform_hlds__term_constr_util__make_size_var_map_2_5_0)
MR_decl_static(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0)
MR_def_extern_entry(__Unify___transform_hlds__term_constr_util__var_substitution_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_constr_util__var_substitution_0_0)
MR_decl_static(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_0)
MR_decl_static(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_0)
MR_decl_static(transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_0)
MR_decl_static(transform_hlds__term_constr_util__IntroducedFrom__pred__create_nonneg_constraints_2__316__1_2_0)
MR_def_extern_entry(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_0)
MR_def_extern_entry(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_0)

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__get_abstract_scc_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__substitute_size_vars_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__substitute_size_vars_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_util__get_abstract_scc_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_proc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,1),
MR_COMMON(1,3),
MR_COMMON(1,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,2),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,1),
MR_COMMON(1,3),
MR_COMMON(1,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_util__substitute_size_vars_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,3),
MR_COMMON(2,4),
MR_COMMON(2,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_util__substitute_size_vars_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(9,0),
MR_CTOR0_ADDR(libs__lp_rational, constraint),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_1 mercury_common_1[9] =
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(term, generic)
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
MR_CTOR0_ADDR(term, generic)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(1,5)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0;
static const struct mercury_type_2 mercury_common_2[7] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,1,0),
MR_TAG_COMMON(0,1,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,4),
MR_COMMON(1,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,4),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,5),
MR_CTOR0_ADDR(libs__rat, rat)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,5),
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
mercury_data__closure_layout__transform_hlds__term_constr_util__make_size_var_map_4_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_util__make_size_var_map_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,3),
MR_COMMON(2,1),
MR_COMMON(2,1),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
};

MR_decl_entry(fn__libs__lp_rational__make_nonneg_constr_1_0);
static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(transform_hlds__term_constr_util__make_size_var_map_2_5_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(fn__libs__lp_rational__make_nonneg_constr_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0_3;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,8),
MR_COMMON(1,7)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(6,0),
MR_COMMON(1,7)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,7),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_COMMON(1,5)
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
3
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_TAG_COMMON(0,7,0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_COMMON(2,5),
MR_COMMON(2,5)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_util__write_size_vars_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_util__write_size_vars_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,6),
MR_COMMON(1,7),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_util__type_ctor_info_var_substitution_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_util__var_substitution_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_util__var_substitution_0_0)),
	"transform_hlds.term_constr_util",
	"var_substitution",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_util__write_size_vars_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"lambda_term_constr_util_m_389",
4,
0
},
"transform_hlds.term_constr_util",
"term_constr_util.m",
389,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__substitute_size_vars_2_0_2 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"lambda_term_constr_util_m_296",
3,
0
},
"transform_hlds.term_constr_util",
"term_constr_util.m",
296,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__substitute_size_vars_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"lambda_term_constr_util_m_293",
3,
0
},
"transform_hlds.term_constr_util",
"term_constr_util.m",
293,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0_3 = {
{
MR_FUNCTION,
"libs.lp_rational",
"libs.lp_rational",
"make_nonneg_constr",
2,
0
},
"transform_hlds.term_constr_util",
"term_constr_util.m",
317,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"lambda_term_constr_util_m_316",
2,
0
},
"transform_hlds.term_constr_util",
"term_constr_util.m",
316,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"is_zero_size_var",
2,
0
},
"transform_hlds.term_constr_util",
"term_constr_util.m",
316,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0_2 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"prog_var_to_size_var",
3,
0
},
"transform_hlds.term_constr_util",
"term_constr_util.m",
253,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"is_zero_size_prog_var",
3,
0
},
"transform_hlds.term_constr_util",
"term_constr_util.m",
264,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"prog_var_to_size_var",
3,
0
},
"transform_hlds.term_constr_util",
"term_constr_util.m",
253,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_util__make_size_var_map_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"make_size_var_map_2",
5,
0
},
"transform_hlds.term_constr_util",
"term_constr_util.m",
242,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_constr_util__get_abstract_scc_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_util",
"transform_hlds.term_constr_util",
"get_abstract_proc",
3,
0
},
"transform_hlds.term_constr_util",
"term_constr_util.m",
463,
"d1;c4;"
};


MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(fn__map__det_elem_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_get_termination2_info_2_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_termination2_info_3_0);
MR_decl_entry(fn__f_109_97_112_95_95_100_101_116_95_101_108_101_109_32_58_61_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module0)
	MR_init_entry1(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0);
	MR_init_label10(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,21,3,4,5,6,7,8,10,11,12)
	MR_init_label3(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_pred_proc_ids_constr_arg_size_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(14);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i4);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i5);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i6);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i7);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i8);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0,
		transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i10);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i11);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_100_101_116_95_101_108_101_109_32_58_61_3_0,
		transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i12);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i13);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_100_101_116_95_101_108_101_109_32_58_61_3_0,
		transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i14);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i15);
MR_def_label(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0_i21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__success_constrs_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module1)
	MR_init_entry1(fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0);
	MR_init_label2(fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_proc_constr_arg_size_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0_i2);
MR_def_label(fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0_i3);
MR_def_label(fn__transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__transform_hlds__term_constr_main__success_constrs_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module2)
	MR_init_entry1(fn__transform_hlds__term_constr_util__get_abstract_scc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__get_abstract_scc_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_abstract_scc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_util__get_abstract_scc_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_util__get_abstract_proc_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_proc);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__abstract_rep_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module3)
	MR_init_entry1(fn__transform_hlds__term_constr_util__get_abstract_proc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__get_abstract_proc_2_0);
	MR_init_label4(fn__transform_hlds__term_constr_util__get_abstract_proc_2_0,2,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_abstract_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_util__get_abstract_proc_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		fn__transform_hlds__term_constr_util__get_abstract_proc_2_0_i2);
MR_def_label(fn__transform_hlds__term_constr_util__get_abstract_proc_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		fn__transform_hlds__term_constr_util__get_abstract_proc_2_0_i3);
MR_def_label(fn__transform_hlds__term_constr_util__get_abstract_proc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__abstract_rep_1_0,
		fn__transform_hlds__term_constr_util__get_abstract_proc_2_0_i4);
MR_def_label(fn__transform_hlds__term_constr_util__get_abstract_proc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_util__get_abstract_proc_2_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__transform_hlds__term_constr_util__get_abstract_proc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_constr_util.m", 18);
	MR_r2 = (MR_Word) MR_string_const("get_abstract_proc/2: no abstract rep. for proc.", 47);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module4)
	MR_init_entry1(transform_hlds__term_constr_util__make_size_var_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__make_size_var_map_4_0);
	MR_init_label2(transform_hlds__term_constr_util__make_size_var_map_4_0,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_size_var_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__make_size_var_map_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__term_constr_util__make_size_var_map_4_0_i4);
MR_def_label(transform_hlds__term_constr_util__make_size_var_map_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__term_constr_util__make_size_var_map_4_0_i8);
MR_def_label(transform_hlds__term_constr_util__make_size_var_map_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__init_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module5)
	MR_init_entry1(transform_hlds__term_constr_util__make_size_var_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__make_size_var_map_3_0);
	MR_init_label1(transform_hlds__term_constr_util__make_size_var_map_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_size_var_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__make_size_var_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		transform_hlds__term_constr_util__make_size_var_map_3_0_i2);
MR_def_label(transform_hlds__term_constr_util__make_size_var_map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(transform_hlds__term_constr_util__make_size_var_map_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module6)
	MR_init_entry1(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prog_vars_to_size_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module7)
	MR_init_entry1(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0);
	MR_init_label2(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prog_var_to_size_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0_i5);
MR_def_label(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_constr_util.m", 18);
	MR_r2 = (MR_Word) MR_string_const("prog_var_to_size_var/2: prog_var not in size_var_map.", 53);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__keys_1_0);
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(fn__set__from_list_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module8)
	MR_init_entry1(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0);
	MR_init_label3(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_zero_size_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__keys_1_0,
		fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0_i4);
MR_def_label(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0_i6);
MR_def_label(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_util__prog_var_to_size_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0_i8);
MR_def_label(fn__transform_hlds__term_constr_util__find_zero_size_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__set__from_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__values_1_0);
MR_decl_entry(list__filter_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module9)
	MR_init_entry1(fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0);
	MR_init_label2(fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_nonneg_constraints'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0_i4);
MR_def_label(fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_util__is_zero_size_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_util__IntroducedFrom__pred__create_nonneg_constraints_2__316__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0_i7);
MR_def_label(fn__transform_hlds__term_constr_util__create_nonneg_constraints_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module10)
	MR_init_entry1(transform_hlds__term_constr_util__create_var_substitution_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__create_var_substitution_2_4_0);
	MR_init_label4(transform_hlds__term_constr_util__create_var_substitution_2_4_0,29,3,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_var_substitution_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_util__create_var_substitution_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_util__create_var_substitution_2_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__create_var_substitution_2_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__create_var_substitution_2_4_0_i8);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__term_constr_util__create_var_substitution_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__create_var_substitution_2_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr1 = MR_tempr5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_tempr4;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__term_constr_util__create_var_substitution_2_4_0_i10);
MR_def_label(transform_hlds__term_constr_util__create_var_substitution_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__term_constr_util__create_var_substitution_2_4_0_i29);
	}
MR_def_label(transform_hlds__term_constr_util__create_var_substitution_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_constr_util.m", 18);
	MR_r2 = (MR_Word) MR_string_const("compose_bijections/5: unmatched lists.", 38);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module11)
	MR_init_entry1(fn__transform_hlds__term_constr_util__create_var_substitution_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__create_var_substitution_2_0);
	MR_init_label1(fn__transform_hlds__term_constr_util__create_var_substitution_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_var_substitution'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_util__create_var_substitution_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__transform_hlds__term_constr_util__create_var_substitution_2_0_i3);
MR_def_label(fn__transform_hlds__term_constr_util__create_var_substitution_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__term_constr_util__create_var_substitution_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__libs__rat__one_0_0);
MR_decl_entry(fn__libs__rat__zero_0_0);
MR_decl_entry(fn__libs__lp_rational__construct_constraint_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module12)
	MR_init_entry1(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__make_arg_constraints_2_0);
	MR_init_label7(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,27,4,7,5,9,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_arg_constraints'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_util__make_arg_constraints_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,
		fn__transform_hlds__term_constr_util__make_arg_constraints_2_0_i4);
MR_def_label(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__term_constr_util__make_arg_constraints_2_0_i7);
MR_def_label(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__rat__one_0_0,
		fn__transform_hlds__term_constr_util__make_arg_constraints_2_0_i9);
MR_def_label(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__libs__rat__zero_0_0,
		fn__transform_hlds__term_constr_util__make_arg_constraints_2_0_i12);
MR_def_label(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__lp_rational__construct_constraint_3_0,
		fn__transform_hlds__term_constr_util__make_arg_constraints_2_0_i13);
MR_def_label(fn__transform_hlds__term_constr_util__make_arg_constraints_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module13)
	MR_init_entry1(transform_hlds__term_constr_util__is_zero_size_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__is_zero_size_var_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_zero_size_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__is_zero_size_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module14)
	MR_init_entry1(transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_0);
	MR_init_label2(transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_context_to_constr_termination_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module15)
	MR_init_entry1(fn__transform_hlds__term_constr_util__substitute_size_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__substitute_size_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute_size_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_util__substitute_size_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module16)
	MR_init_entry1(transform_hlds__term_constr_util__maybe_write_trace_nl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__maybe_write_trace_nl_5_0);
	MR_init_label3(transform_hlds__term_constr_util__maybe_write_trace_nl_5_0,4,17,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_trace_nl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__maybe_write_trace_nl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__maybe_write_trace_nl_5_0_i19);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__term_constr_util__maybe_write_trace_nl_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__transform_hlds__term_constr_util__maybe_write_trace_nl_5_0_i4);
MR_def_label(transform_hlds__term_constr_util__maybe_write_trace_nl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__maybe_write_trace_nl_5_0_i17);
	}
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__term_constr_util__maybe_write_trace_nl_5_0_i17);
MR_def_label(transform_hlds__term_constr_util__maybe_write_trace_nl_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(transform_hlds__term_constr_util__maybe_write_trace_nl_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module17)
	MR_init_entry1(transform_hlds__term_constr_util__maybe_write_trace_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__maybe_write_trace_4_0);
	MR_init_label2(transform_hlds__term_constr_util__maybe_write_trace_4_0,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_trace'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__maybe_write_trace_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__maybe_write_trace_4_0_i13);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__term_constr_util__maybe_write_trace_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__transform_hlds__term_constr_util__maybe_write_trace_4_0_i11);
MR_def_label(transform_hlds__term_constr_util__maybe_write_trace_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(transform_hlds__term_constr_util__maybe_write_trace_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module18)
	MR_init_entry1(transform_hlds__term_constr_util__write_scc_procs_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__write_scc_procs_2_4_0);
	MR_init_label5(transform_hlds__term_constr_util__write_scc_procs_2_4_0,12,4,5,6,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_scc_procs_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_util__write_scc_procs_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_util__write_scc_procs_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__write_scc_procs_2_4_0_i14);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 9;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		transform_hlds__term_constr_util__write_scc_procs_2_4_0_i4);
MR_def_label(transform_hlds__term_constr_util__write_scc_procs_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0,
		transform_hlds__term_constr_util__write_scc_procs_2_4_0_i5);
MR_def_label(transform_hlds__term_constr_util__write_scc_procs_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__term_constr_util__write_scc_procs_2_4_0_i6);
MR_def_label(transform_hlds__term_constr_util__write_scc_procs_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__term_constr_util__write_scc_procs_2_4_0_i12);
MR_def_label(transform_hlds__term_constr_util__write_scc_procs_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module19)
	MR_init_entry1(transform_hlds__term_constr_util__maybe_write_scc_procs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__maybe_write_scc_procs_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_scc_procs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__maybe_write_scc_procs_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module20)
	MR_init_entry1(transform_hlds__term_constr_util__maybe_write_proc_name_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__maybe_write_proc_name_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_proc_name'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__maybe_write_proc_name_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module21)
	MR_init_entry1(transform_hlds__term_constr_util__write_size_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__write_size_vars_4_0);
	MR_init_label2(transform_hlds__term_constr_util__write_size_vars_4_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_size_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__write_size_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 91;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		transform_hlds__term_constr_util__write_size_vars_4_0_i3);
MR_def_label(transform_hlds__term_constr_util__write_size_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(io__write_list_5_0,
		transform_hlds__term_constr_util__write_size_vars_4_0_i5);
MR_def_label(transform_hlds__term_constr_util__write_size_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 93;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__lookup_name_2_0);
MR_decl_entry(io__write_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module22)
	MR_init_entry1(transform_hlds__term_constr_util__dump_size_varset_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__dump_size_varset_2_4_0);
	MR_init_label7(transform_hlds__term_constr_util__dump_size_varset_2_4_0,15,4,6,7,8,9,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_size_varset_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_util__dump_size_varset_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_util__dump_size_varset_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__dump_size_varset_2_4_0_i17);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		transform_hlds__term_constr_util__dump_size_varset_2_4_0_i4);
MR_def_label(transform_hlds__term_constr_util__dump_size_varset_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_3_0,
		transform_hlds__term_constr_util__dump_size_varset_2_4_0_i6);
MR_def_label(transform_hlds__term_constr_util__dump_size_varset_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__term_constr_util__dump_size_varset_2_4_0_i7);
MR_def_label(transform_hlds__term_constr_util__dump_size_varset_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__term_constr_util__dump_size_varset_2_4_0_i8);
MR_def_label(transform_hlds__term_constr_util__dump_size_varset_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__term_constr_util__dump_size_varset_2_4_0_i9);
MR_def_label(transform_hlds__term_constr_util__dump_size_varset_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_constr_util__dump_size_varset_2_4_0_i15);
MR_def_label(transform_hlds__term_constr_util__dump_size_varset_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__vars_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module23)
	MR_init_entry1(transform_hlds__term_constr_util__dump_size_varset_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__dump_size_varset_3_0);
	MR_init_label1(transform_hlds__term_constr_util__dump_size_varset_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_size_varset'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__dump_size_varset_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__varset__vars_1_0,
		transform_hlds__term_constr_util__dump_size_varset_3_0_i2);
MR_def_label(transform_hlds__term_constr_util__dump_size_varset_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(transform_hlds__term_constr_util__dump_size_varset_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module24)
	MR_init_entry1(transform_hlds__term_constr_util__dump_size_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__dump_size_vars_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_size_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__dump_size_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__term_constr_util__dump_size_varset_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module25)
	MR_init_entry1(transform_hlds__term_constr_util__update_arg_size_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__update_arg_size_info_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_arg_size_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__update_arg_size_info_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__term_constr_main__term_status_1_0);
MR_decl_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_0);
MR_decl_entry(svmap__det_update_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module26)
	MR_init_entry1(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0);
	MR_init_label10(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,32,3,4,5,11,8,14,15,16,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'change_procs_constr_termination_info'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0_i4);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0_i5);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0_i8);
	}
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__term_status_1_0,
		transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0_i11);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0_i7);
	}
	MR_r1 = MR_sv(7);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_0,
		transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0_i14);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0_i15);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0_i16);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0_i32);
	}
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__term_constr_util__change_procs_constr_termination_info_5_0_i32);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module27)
	MR_init_entry1(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0);
	MR_init_label10(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,32,3,4,5,11,8,14,15,16,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'change_procs_constr_arg_size_info'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0_i4);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0_i5);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0_i8);
	}
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__success_constrs_1_0,
		transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0_i11);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0_i7);
	}
	MR_r1 = MR_sv(7);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0,
		transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0_i14);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0_i15);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0_i16);
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0_i32);
	}
MR_def_label(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_0_i32);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svvarset__new_var_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module28)
	MR_init_entry1(transform_hlds__term_constr_util__make_size_var_map_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__make_size_var_map_2_5_0);
	MR_init_label2(transform_hlds__term_constr_util__make_size_var_map_2_5_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_size_var_map_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_util__make_size_var_map_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(svvarset__new_var_3_0,
		transform_hlds__term_constr_util__make_size_var_map_2_5_0_i2);
MR_def_label(transform_hlds__term_constr_util__make_size_var_map_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__term_constr_util__make_size_var_map_2_5_0_i5);
MR_def_label(transform_hlds__term_constr_util__make_size_var_map_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(transform_hlds__term_norm__zero_size_type_2_0);
MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module29)
	MR_init_entry1(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__is_zero_size_prog_var_3_0);
	MR_init_label5(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0,3,7,9,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_zero_size_prog_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__term_constr_util__is_zero_size_prog_var_3_0_i3);
MR_def_label(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__term_norm__zero_size_type_2_0,
		transform_hlds__term_constr_util__is_zero_size_prog_var_3_0_i7);
MR_def_label(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0_i4);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		transform_hlds__term_constr_util__is_zero_size_prog_var_3_0_i9);
MR_def_label(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0_i1);
	}
MR_def_label(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_constr_util__is_zero_size_prog_var_3_0,1)
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

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module30)
	MR_init_entry1(__Unify___transform_hlds__term_constr_util__var_substitution_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_util__var_substitution_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_constr_util__var_substitution_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module31)
	MR_init_entry1(__Compare___transform_hlds__term_constr_util__var_substitution_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_util__var_substitution_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_constr_util__var_substitution_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module32)
	MR_init_entry1(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_0);
	MR_init_label1(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__substitute_size_vars__293__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_0_i3);
MR_def_label(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_0,3)
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

MR_decl_entry(libs__lp_rational__deconstruct_constraint_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module33)
	MR_init_entry1(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_0);
	MR_init_label2(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__substitute_size_vars__296__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__lp_rational__deconstruct_constraint_4_0,
		fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_0_i2);
MR_def_label(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_0_i5);
MR_def_label(fn__transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__libs__lp_rational__construct_constraint_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module34)
	MR_init_entry1(transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_0);
	MR_init_label1(transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__write_size_vars__389__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_0_i2);
MR_def_label(transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__isnt_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_util_module35)
	MR_init_entry1(transform_hlds__term_constr_util__IntroducedFrom__pred__create_nonneg_constraints_2__316__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_util__IntroducedFrom__pred__create_nonneg_constraints_2__316__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_nonneg_constraints_2__316__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_util__IntroducedFrom__pred__create_nonneg_constraints_2__316__1_2_0)
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


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module36)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_0);
	MR_init_label1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__maybe_write_scc_procs__[3]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__term_constr_util__write_scc_procs_2_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_util_module37)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_0);
	MR_init_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__maybe_write_proc_name__[4]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__term_constr_util_maybe_bunch_0(void)
{
	transform_hlds__term_constr_util_module0();
	transform_hlds__term_constr_util_module1();
	transform_hlds__term_constr_util_module2();
	transform_hlds__term_constr_util_module3();
	transform_hlds__term_constr_util_module4();
	transform_hlds__term_constr_util_module5();
	transform_hlds__term_constr_util_module6();
	transform_hlds__term_constr_util_module7();
	transform_hlds__term_constr_util_module8();
	transform_hlds__term_constr_util_module9();
	transform_hlds__term_constr_util_module10();
	transform_hlds__term_constr_util_module11();
	transform_hlds__term_constr_util_module12();
	transform_hlds__term_constr_util_module13();
	transform_hlds__term_constr_util_module14();
	transform_hlds__term_constr_util_module15();
	transform_hlds__term_constr_util_module16();
	transform_hlds__term_constr_util_module17();
	transform_hlds__term_constr_util_module18();
	transform_hlds__term_constr_util_module19();
	transform_hlds__term_constr_util_module20();
	transform_hlds__term_constr_util_module21();
	transform_hlds__term_constr_util_module22();
	transform_hlds__term_constr_util_module23();
	transform_hlds__term_constr_util_module24();
	transform_hlds__term_constr_util_module25();
	transform_hlds__term_constr_util_module26();
	transform_hlds__term_constr_util_module27();
	transform_hlds__term_constr_util_module28();
	transform_hlds__term_constr_util_module29();
	transform_hlds__term_constr_util_module30();
	transform_hlds__term_constr_util_module31();
	transform_hlds__term_constr_util_module32();
	transform_hlds__term_constr_util_module33();
	transform_hlds__term_constr_util_module34();
	transform_hlds__term_constr_util_module35();
	transform_hlds__term_constr_util_module36();
	transform_hlds__term_constr_util_module37();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_constr_util__init(void);
void mercury__transform_hlds__term_constr_util__init_type_tables(void);
void mercury__transform_hlds__term_constr_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_constr_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_constr_util__init_complexity_procs(void);
#endif

void mercury__transform_hlds__term_constr_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_constr_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_util__type_ctor_info_var_substitution_0,
		transform_hlds__term_constr_util__var_substitution_0_0);
	mercury__transform_hlds__term_constr_util__init_debugger();
}

void mercury__transform_hlds__term_constr_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_util__type_ctor_info_var_substitution_0);
	}
}


void mercury__transform_hlds__term_constr_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_constr_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__term_constr_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_constr_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
