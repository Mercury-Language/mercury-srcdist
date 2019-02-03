/*
** Automatically generated from `term_constr_main.m'
** by the Mercury compiler,
** version 11.07.1, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__term_constr_main__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.term_constr_main.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "transform_hlds.term_constr_main.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "transform_hlds.term_constr_main.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.term_constr_main.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.term_constr_main.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.term_constr_main.c"
#line 49 "transform_hlds.term_constr_main.c"
#include "transform_hlds.term_constr_main.mh"

#line 52 "transform_hlds.term_constr_main.c"
#line 53 "transform_hlds.term_constr_main.c"
#ifndef TRANSFORM_HLDS__TERM_CONSTR_MAIN_DECL_GUARD
#define TRANSFORM_HLDS__TERM_CONSTR_MAIN_DECL_GUARD

#line 57 "transform_hlds.term_constr_main.c"
#line 58 "transform_hlds.term_constr_main.c"

#endif
#line 61 "transform_hlds.term_constr_main.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
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
	MR_Integer f2;
	MR_Word * f3;
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

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_constr_main__type_ctor_info_constr_arg_size_info_0,
	mercury_data_transform_hlds__term_constr_main__type_ctor_info_constr_termination_info_0,
	mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0,
	mercury_data_transform_hlds__term_constr_main__type_ctor_info_term_reason_0,
	mercury_data_transform_hlds__term_constr_main__type_ctor_info_termination2_info_0;
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0, 15,4,5,6,7,8,9,17)
MR_decl_label10(transform_hlds__term_constr_main__analyse_scc_9_0, 3,4,7,8,10,12,11,15,16,21)
MR_decl_label6(transform_hlds__term_constr_main__analyse_scc_9_0, 24,26,36,23,18,17)
MR_decl_label2(transform_hlds__term_constr_main__has_arg_size_info_2_0, 2,3)
MR_decl_label2(transform_hlds__term_constr_main__has_term_info_2_0, 2,3)
MR_decl_label10(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0, 2,3,6,7,8,9,10,11,12,13)
MR_decl_label10(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0, 14,15,18,19,24,17,26,28,29,30)
MR_decl_label1(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0, 4)
MR_decl_label6(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0, 24,5,6,9,10,12)
MR_decl_label2(transform_hlds__term_constr_main__output_maybe_termination2_info_3_0, 3,6)
MR_decl_label10(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0, 2,5,6,4,9,10,12,13,14,15)
MR_decl_label10(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0, 16,18,20,21,24,25,27,28,29,30)
MR_decl_label2(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0, 31,32)
MR_decl_label10(transform_hlds__term_constr_main__output_pred_termination2_info_4_0, 2,3,6,7,8,12,11,16,19,21)
MR_decl_label6(transform_hlds__term_constr_main__output_pred_termination2_info_4_0, 22,23,24,25,26,4)
MR_decl_label10(transform_hlds__term_constr_main__pass_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label6(transform_hlds__term_constr_main__pass_4_0, 12,13,14,15,18,19)
MR_decl_label3(transform_hlds__term_constr_main__proc_needs_ar_built_2_0, 2,3,4)
MR_decl_label3(transform_hlds__term_constr_main__set_termination_info_for_proc_4_0, 2,3,6)
MR_decl_label1(fn__transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__614__1_2_0, 3)
MR_decl_label1(fn__transform_hlds__term_constr_main__term2_info_init_0_0, 4)
MR_decl_label10(__Unify___transform_hlds__term_constr_main__termination2_info_0_0, 6,8,11,13,15,17,22,24,28,1)
MR_decl_label10(__Compare___transform_hlds__term_constr_main__termination2_info_0_0, 3,2,7,12,17,22,26,30,37,41)
MR_decl_label1(__Compare___transform_hlds__term_constr_main__termination2_info_0_0, 112)
MR_def_extern_entry(fn__transform_hlds__term_constr_main__term2_info_init_0_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_main__size_var_map_1_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_main__import_success_1_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_main__import_failure_1_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_main__success_constrs_1_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_main__failure_constrs_1_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_main__term_status_1_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_main__abstract_rep_1_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_main__intermod_status_1_0)
MR_def_extern_entry(fn__transform_hlds__term_constr_main__head_vars_1_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_102_97_105_108_117_114_101_95_99_111_110_115_116_114_115_32_58_61_2_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_104_101_97_100_95_118_97_114_115_32_58_61_2_0)
MR_decl_static(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0)
MR_def_extern_entry(transform_hlds__term_constr_main__pass_4_0)
MR_decl_static(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0)
MR_decl_static(transform_hlds__term_constr_main__output_maybe_termination2_info_3_0)
MR_def_extern_entry(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0)
MR_def_extern_entry(transform_hlds__term_constr_main__output_pred_termination2_info_4_0)
MR_decl_static(transform_hlds__term_constr_main__analyse_scc_9_0)
MR_decl_static(transform_hlds__term_constr_main__set_termination_info_for_proc_4_0)
MR_decl_static(transform_hlds__term_constr_main__has_arg_size_info_2_0)
MR_decl_static(transform_hlds__term_constr_main__has_term_info_2_0)
MR_decl_static(transform_hlds__term_constr_main__proc_needs_ar_built_2_0)
MR_def_extern_entry(__Unify___transform_hlds__term_constr_main__constr_arg_size_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_constr_main__constr_arg_size_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_constr_main__constr_termination_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_constr_main__constr_termination_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_constr_main__intermod_status_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_constr_main__intermod_status_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_constr_main__term_reason_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_constr_main__term_reason_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_constr_main__termination2_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_constr_main__termination2_info_0_0)
MR_decl_static(transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__390__1_2_0)
MR_decl_static(transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__408__1_2_0)
MR_decl_static(transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__612__1_2_0)
MR_decl_static(fn__transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__614__1_2_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_arg_size_constr_0;
static const struct mercury_type_0 mercury_common_0[11] =
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
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
MR_LIST_CTOR_ADDR,
MR_COMMON(8,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,8,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, arg_size_constr)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_6;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_7;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(8,3),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_7,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(8,3),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__pass_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_build__type_ctor_info_term_build_options_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__pass_4_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(0,3),
MR_CTOR0_ADDR(transform_hlds__term_constr_build, term_build_options),
MR_CTOR0_ADDR(transform_hlds__term_constr_fixpoint, fixpoint_options),
MR_CTOR0_ADDR(transform_hlds__term_constr_pass2, pass2_options),
MR_COMMON(0,4),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_1;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(libs__lp_rational, constraint)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(libs__lp_rational, constraint)
},
};

MR_decl_entry(libs__lp_rational__nonneg_constr_1_0);
static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(libs__lp_rational__nonneg_constr_1_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(libs__lp_rational__nonneg_constr_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_CTOR0_ADDR(libs__lp_rational, constraint)
},
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_5;
static const struct mercury_type_6 mercury_common_6[7] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,0),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,0),
MR_CTOR0_ADDR(libs__lp_rational, constraint)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,1),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,1),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__612__1_2_0),
1,
MR_TAG_COMMON(0,4,0)
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__612__1_2_0),
1,
MR_TAG_COMMON(0,4,1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_generic_termination_info_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_main__type_ctor_info_term_reason_0;
static const struct mercury_type_8 mercury_common_8[5] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,6),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_constr_errors, termination2_error)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_constr_errors, termination2_error)
}
},
{
{
MR_CTOR_ADDR(parse_tree__prog_data, generic_termination_info, 2),
MR_CTOR0_ADDR(transform_hlds__term_constr_main, term_reason),
MR_COMMON(0,8)
}
},
{
{
MR_CTOR_ADDR(parse_tree__prog_data, generic_termination_info, 2),
MR_CTOR0_ADDR(transform_hlds__term_constr_main, term_reason),
MR_TAG_COMMON(0,0,9)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_3;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(8,0),
MR_COMMON(0,7),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(8,0),
MR_COMMON(0,7),
MR_STRING_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0;

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_main__type_ctor_info_constr_arg_size_info_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_main__constr_arg_size_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_main__constr_arg_size_info_0_0)),
	"transform_hlds.term_constr_main",
	"constr_arg_size_info",
	{ 0 },
	{ (void *)&mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
	&mercury_data_parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_constr_main__type_ctor_info_term_reason_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_main__type_ctor_info_constr_termination_info_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_main__constr_termination_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_main__constr_termination_info_0_0)),
	"transform_hlds.term_constr_main",
	"constr_termination_info",
	{ 0 },
	{ (void *)&mercury_data_parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0 = {
	"not_mutually_recursive",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1 = {
	"may_be_mutually_recursive",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0[] = {
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0,
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0[] = {
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1,
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_main__functor_number_map_intermod_status_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_main__intermod_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_main__intermod_status_0_0)),
	"transform_hlds.term_constr_main",
	"intermod_status",
	{ (void *)mercury_data_transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0 },
	2,
	4,
	mercury_data_transform_hlds__term_constr_main__functor_number_map_intermod_status_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0 = {
	"term_reason_builtin",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1 = {
	"term_reason_pragma_supplied",
	1
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2 = {
	"term_reason_foreign_supplied",
	2
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3 = {
	"term_reason_import_supplied",
	3
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4 = {
	"term_reason_analysis",
	4
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__term_constr_main__enum_value_ordered_term_reason_0[] = {
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0,
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1,
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2,
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3,
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__term_constr_main__enum_name_ordered_term_reason_0[] = {
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4,
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0,
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2,
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3,
	&mercury_data_transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1
};

const MR_Integer mercury_data_transform_hlds__term_constr_main__functor_number_map_term_reason_0[] = {
	1,
	4,
	2,
	3,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_main__type_ctor_info_term_reason_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_main__term_reason_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_main__term_reason_0_0)),
	"transform_hlds.term_constr_main",
	"term_reason",
	{ (void *)mercury_data_transform_hlds__term_constr_main__enum_name_ordered_term_reason_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_main__enum_value_ordered_term_reason_0 },
	5,
	4,
	mercury_data_transform_hlds__term_constr_main__functor_number_map_term_reason_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_arg_size_constr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_libs__polyhedron__type_ctor_info_polyhedron_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1transform_hlds__term_constr_main__type_ctor_info_intermod_status_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_constr_main__field_types_termination2_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1transform_hlds__term_constr_main__type_ctor_info_intermod_status_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
};

const MR_ConstString mercury_data_transform_hlds__term_constr_main__field_names_termination2_info_0_0[] = {
	"size_var_map",
	"head_vars",
	"import_success",
	"import_failure",
	"success_constrs",
	"failure_constrs",
	"term_status",
	"intermod_status",
	"abstract_rep"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0 = {
	"term2_info",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_constr_main__field_types_termination2_info_0_0,
	mercury_data_transform_hlds__term_constr_main__field_names_termination2_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0[] = {
	&mercury_data_transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_constr_main__du_name_ordered_termination2_info_0[] = {
	&mercury_data_transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_constr_main__functor_number_map_termination2_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_constr_main__type_ctor_info_termination2_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_constr_main__termination2_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_constr_main__termination2_info_0_0)),
	"transform_hlds.term_constr_main",
	"termination2_info",
	{ (void *)mercury_data_transform_hlds__term_constr_main__du_name_ordered_termination2_info_0 },
	{ (void *)mercury_data_transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0 },
	1,
	4,
	mercury_data_transform_hlds__term_constr_main__functor_number_map_termination2_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_7 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"set_termination_info_for_proc",
4,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
443,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_6 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"set_termination_info_for_proc",
4,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
443,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_5 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"lambda_term_constr_main_m_408",
2,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
408,
"35"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_4 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"has_term_info",
2,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
408,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_3 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"lambda_term_constr_main_m_390",
2,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
390,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"has_arg_size_info",
2,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
390,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__analyse_scc_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"proc_needs_ar_built",
2,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
378,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_3 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"lambda_term_constr_main_m_614",
3,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
614,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"lambda_term_constr_main_m_612",
2,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
612,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_1 = {
{
MR_PREDICATE,
"libs.lp_rational",
"libs.lp_rational",
"nonneg_constr",
1,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
612,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_3 = {
{
MR_FUNCTION,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"lambda_term_constr_main_m_614",
3,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
614,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"lambda_term_constr_main_m_612",
2,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
612,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_1 = {
{
MR_PREDICATE,
"libs.lp_rational",
"libs.lp_rational",
"nonneg_constr",
1,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
612,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__pass_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"analyse_scc",
9,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
322,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_constr_main",
"transform_hlds.term_constr_main",
"output_pred_termination2_info",
4,
0
},
"transform_hlds.term_constr_main",
"term_constr_main.m",
494,
"24"
};


MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module0)
	MR_init_entry1(fn__transform_hlds__term_constr_main__term2_info_init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_main__term2_info_init_0_0);
	MR_init_label1(fn__transform_hlds__term_constr_main__term2_info_init_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term2_info_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_main__term2_info_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__transform_hlds__term_constr_main__term2_info_init_0_0_i4);
MR_def_label(fn__transform_hlds__term_constr_main__term2_info_init_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module1)
	MR_init_entry1(fn__transform_hlds__term_constr_main__size_var_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_main__size_var_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'size_var_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_main__size_var_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module2)
	MR_init_entry1(fn__transform_hlds__term_constr_main__import_success_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_main__import_success_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'import_success'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_main__import_success_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module3)
	MR_init_entry1(fn__transform_hlds__term_constr_main__import_failure_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_main__import_failure_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'import_failure'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_main__import_failure_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module4)
	MR_init_entry1(fn__transform_hlds__term_constr_main__success_constrs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_main__success_constrs_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'success_constrs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_main__success_constrs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module5)
	MR_init_entry1(fn__transform_hlds__term_constr_main__failure_constrs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_main__failure_constrs_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'failure_constrs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_main__failure_constrs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module6)
	MR_init_entry1(fn__transform_hlds__term_constr_main__term_status_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_main__term_status_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_status'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_main__term_status_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module7)
	MR_init_entry1(fn__transform_hlds__term_constr_main__abstract_rep_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_main__abstract_rep_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstract_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_main__abstract_rep_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module8)
	MR_init_entry1(fn__transform_hlds__term_constr_main__intermod_status_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_main__intermod_status_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intermod_status'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_main__intermod_status_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module9)
	MR_init_entry1(fn__transform_hlds__term_constr_main__head_vars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_main__head_vars_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'head_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_constr_main__head_vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module10)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'size_var_map :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r1, 8);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module11)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'import_success :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r1, 8);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module12)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'import_failure :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r1, 8);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module13)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'success_constrs :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r1, 8);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module14)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_102_97_105_108_117_114_101_95_99_111_110_115_116_114_115_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_102_97_105_108_117_114_101_95_99_111_110_115_116_114_115_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'failure_constrs :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_102_97_105_108_117_114_101_95_99_111_110_115_116_114_115_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r1, 8);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module15)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_status :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r2;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r1, 8);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module16)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intermod_status :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r2;
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r1, 8);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module17)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abstract_rep :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module18)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_104_101_97_100_95_118_97_114_115_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_104_101_97_100_95_118_97_114_115_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'head_vars :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_104_101_97_100_95_118_97_114_115_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r1, 8);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(parse_tree__file_names__module_name_to_file_name_7_0);
MR_decl_entry(libs__file_util__maybe_write_string_4_0);
MR_decl_entry(libs__file_util__maybe_flush_output_3_0);
MR_decl_entry(io__open_append_4_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(io__write_strings_3_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(io__set_output_stream_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);
MR_decl_entry(io__close_output_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module19)
	MR_init_entry1(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0);
	MR_init_label10(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,2,3,6,7,8,9,10,11,12,13)
	MR_init_label10(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,14,15,18,19,24,17,26,28,29,30)
	MR_init_label1(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_make_optimization_interface'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i2);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 84;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i3);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i6);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i7);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i8);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(".opt.tmp", 8);
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i9);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 44;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i10);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Appending termination2_info pragmas to \140", 42);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i11);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i12);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\'...", 4);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i13);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i14);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__open_append_4_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i15);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i17);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(" failed!\n", 9);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i18);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__error_message_2_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i19);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\' for output: ", 14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("Error opening file \140", 20);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i24);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i26);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_main__output_pred_termination2_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i28);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i29);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__close_output_3_0,
		transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0_i30);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__file_util__maybe_write_string_4_0);
MR_def_label(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_termination2_norm_2_0);
MR_decl_entry(fn__transform_hlds__term_norm__set_functor_info_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_build__term_build_options_init_3_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(fn__transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_pass2__pass2_options_init_1_0);
MR_decl_entry(transform_hlds__term_constr_initial__preprocess_module_4_0);
MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__foldl2_6_2);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module20)
	MR_init_entry1(transform_hlds__term_constr_main__pass_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__pass_4_0);
	MR_init_label10(transform_hlds__term_constr_main__pass_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label6(transform_hlds__term_constr_main__pass_4_0,12,13,14,15,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pass'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_main__pass_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__term_constr_main__pass_4_0_i2);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_termination2_norm_2_0,
		transform_hlds__term_constr_main__pass_4_0_i3);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_norm__set_functor_info_2_0,
		transform_hlds__term_constr_main__pass_4_0_i4);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 416;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__term_constr_main__pass_4_0_i5);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 415;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__term_constr_main__pass_4_0_i6);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_build__term_build_options_init_3_0,
		transform_hlds__term_constr_main__pass_4_0_i7);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 417;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__term_constr_main__pass_4_0_i8);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 414;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		transform_hlds__term_constr_main__pass_4_0_i9);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_0,
		transform_hlds__term_constr_main__pass_4_0_i10);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_pass2__pass2_options_init_1_0,
		transform_hlds__term_constr_main__pass_4_0_i11);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__term_constr_initial__preprocess_module_4_0,
		transform_hlds__term_constr_main__pass_4_0_i12);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__term_constr_main__pass_4_0_i13);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__term_constr_main__pass_4_0_i14);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__term_constr_main__pass_4_0_i15);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_main__analyse_scc_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_tfield(0, MR_tempr1, 3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		transform_hlds__term_constr_main__pass_4_0_i18);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__term_constr_main__maybe_make_optimization_interface_3_0,
		transform_hlds__term_constr_main__pass_4_0_i19);
MR_def_label(transform_hlds__term_constr_main__pass_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__libs__polyhedron__non_false_constraints_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__lp_rational__type_ctor_info_constraint_0;
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(fn__list__sort_1_0);
MR_decl_entry(libs__lp_rational__output_constraints_4_0);
MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module21)
	MR_init_entry1(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0);
	MR_init_label6(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0,24,5,6,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_maybe_constr_arg_size_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("not_set", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("constraints(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_i5);
MR_def_label(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_i6);
MR_def_label(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_i9);
MR_def_label(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__sort_1_0,
		transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_i10);
MR_def_label(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__614__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(libs__lp_rational__output_constraints_4_0,
		transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0_i12);
MR_def_label(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module22)
	MR_init_entry1(transform_hlds__term_constr_main__output_maybe_termination2_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__output_maybe_termination2_info_3_0);
	MR_init_label2(transform_hlds__term_constr_main__output_maybe_termination2_info_3_0,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_maybe_termination2_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_main__output_maybe_termination2_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__output_maybe_termination2_info_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("not_set", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(transform_hlds__term_constr_main__output_maybe_termination2_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__output_maybe_termination2_info_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("can_loop", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(transform_hlds__term_constr_main__output_maybe_termination2_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot_loop", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(fn__varset__init_0_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_func_mode_subdecl_8_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_7_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_46_46_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(map__det_insert_from_corresponding_lists_4_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module23)
	MR_init_entry1(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__output_pragma_termination2_info_10_0);
	MR_init_label10(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,2,5,6,4,9,10,12,13,14,15)
	MR_init_label10(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,16,18,20,21,24,25,27,28,29,30)
	MR_init_label2(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_pragma_termination2_info'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_main__output_pragma_termination2_info_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = (MR_Word) MR_string_const(":- pragma termination2_info(", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i2);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i5);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i6);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_func_mode_subdecl_8_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i10);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i9);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_7_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i10);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i12);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_46_46_2_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i13);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i14);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_from_corresponding_lists_4_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i15);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i16);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("not_set", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i28);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_string_const("constraints(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i20);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__libs__polyhedron__non_false_constraints_1_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i21);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i24);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__sort_1_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i25);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__614__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(libs__lp_rational__output_constraints_4_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i27);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i28);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i29);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i30);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i31);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__term_constr_main__output_maybe_termination2_info_3_0,
		transform_hlds__term_constr_main__output_pragma_termination2_info_10_0_i32);
MR_def_label(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").\n", 3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_spec_info_2_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module24)
	MR_init_entry1(transform_hlds__term_constr_main__output_pred_termination2_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__output_pred_termination2_info_4_0);
	MR_init_label10(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,2,3,6,7,8,12,11,16,19,21)
	MR_init_label6(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,22,23,24,25,26,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_pred_termination2_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_constr_main__output_pred_termination2_info_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i2);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 410;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i3);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i6);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i7);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_spec_info_2_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i8);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i12);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_GOTO_LAB(transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i11);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i4);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i16);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i19);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i21);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i22);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i23);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i24);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i25);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__term_constr_main__output_pred_termination2_info_4_0_i26);
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0);
	}
MR_def_label(transform_hlds__term_constr_main__output_pred_termination2_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0);
MR_decl_entry(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(transform_hlds__term_constr_errors__report_termination2_errors_6_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module25)
	MR_init_entry1(transform_hlds__term_constr_main__analyse_scc_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__analyse_scc_9_0);
	MR_init_label10(transform_hlds__term_constr_main__analyse_scc_9_0,3,4,7,8,10,12,11,15,16,21)
	MR_init_label6(transform_hlds__term_constr_main__analyse_scc_9_0,24,26,36,23,18,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'analyse_scc'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_main__analyse_scc_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_main__proc_needs_ar_built_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r6;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__term_constr_main__analyse_scc_9_0_i3);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_0,
		transform_hlds__term_constr_main__analyse_scc_9_0_i4);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_main__has_arg_size_info_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__390__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__term_constr_main__analyse_scc_9_0_i7);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_0,
		transform_hlds__term_constr_main__analyse_scc_9_0_i8);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__term_constr_main__analyse_scc_9_0_i10);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__analyse_scc_9_0_i12);
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__term_constr_main__analyse_scc_9_0_i11);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = MR_sv(3);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__term_constr_main__analyse_scc_9_0_i15);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 415;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__term_constr_main__analyse_scc_9_0_i16);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__analyse_scc_9_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_main__has_term_info_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,6);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__408__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__term_constr_main__analyse_scc_9_0_i21);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__analyse_scc_9_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_constr_pass2__prove_termination_in_scc_6_0,
		transform_hlds__term_constr_main__analyse_scc_9_0_i24);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_main__set_termination_info_for_proc_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__term_constr_main__analyse_scc_9_0_i26);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__analyse_scc_9_0_i17);
	}
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__term_constr_errors__report_termination2_errors_6_0);
	}
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_constr_main__set_termination_info_for_proc_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_sv(2), 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__term_constr_main__analyse_scc_9_0_i36);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(transform_hlds__term_constr_main__analyse_scc_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_termination2_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_termination2_info_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_5_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module26)
	MR_init_entry1(transform_hlds__term_constr_main__set_termination_info_for_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__set_termination_info_for_proc_4_0);
	MR_init_label3(transform_hlds__term_constr_main__set_termination_info_for_proc_4_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_termination_info_for_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_main__set_termination_info_for_proc_4_0)
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
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_constr_main__set_termination_info_for_proc_4_0_i2);
MR_def_label(transform_hlds__term_constr_main__set_termination_info_for_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_main__set_termination_info_for_proc_4_0_i3);
MR_def_label(transform_hlds__term_constr_main__set_termination_info_for_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_tfield(0, MR_r1, 8);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_termination2_info_3_0,
		transform_hlds__term_constr_main__set_termination_info_for_proc_4_0_i6);
MR_def_label(transform_hlds__term_constr_main__set_termination_info_for_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module27)
	MR_init_entry1(transform_hlds__term_constr_main__has_arg_size_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__has_arg_size_info_2_0);
	MR_init_label2(transform_hlds__term_constr_main__has_arg_size_info_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'has_arg_size_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_main__has_arg_size_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_constr_main__has_arg_size_info_2_0_i2);
MR_def_label(transform_hlds__term_constr_main__has_arg_size_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_main__has_arg_size_info_2_0_i3);
MR_def_label(transform_hlds__term_constr_main__has_arg_size_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 4);
	MR_r1 = ((MR_Integer) MR_r2 != (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module28)
	MR_init_entry1(transform_hlds__term_constr_main__has_term_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__has_term_info_2_0);
	MR_init_label2(transform_hlds__term_constr_main__has_term_info_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'has_term_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_main__has_term_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_constr_main__has_term_info_2_0_i2);
MR_def_label(transform_hlds__term_constr_main__has_term_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_main__has_term_info_2_0_i3);
MR_def_label(transform_hlds__term_constr_main__has_term_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 6);
	MR_r1 = ((MR_Integer) MR_r2 != (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module29)
	MR_init_entry1(transform_hlds__term_constr_main__proc_needs_ar_built_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__proc_needs_ar_built_2_0);
	MR_init_label3(transform_hlds__term_constr_main__proc_needs_ar_built_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_needs_ar_built'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_main__proc_needs_ar_built_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_constr_main__proc_needs_ar_built_2_0_i2);
MR_def_label(transform_hlds__term_constr_main__proc_needs_ar_built_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		transform_hlds__term_constr_main__proc_needs_ar_built_2_0_i3);
MR_def_label(transform_hlds__term_constr_main__proc_needs_ar_built_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 4);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_constr_main__proc_needs_ar_built_2_0_i4);
	}
	MR_r2 = MR_tfield(0, MR_r1, 6);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_constr_main__proc_needs_ar_built_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___libs__polyhedron__polyhedron_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module30)
	MR_init_entry1(__Unify___transform_hlds__term_constr_main__constr_arg_size_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_main__constr_arg_size_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_constr_main__constr_arg_size_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___libs__polyhedron__polyhedron_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___libs__polyhedron__polyhedron_0_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module31)
	MR_init_entry1(__Compare___transform_hlds__term_constr_main__constr_arg_size_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_main__constr_arg_size_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_constr_main__constr_arg_size_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___libs__polyhedron__polyhedron_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__generic_termination_info_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module32)
	MR_init_entry1(__Unify___transform_hlds__term_constr_main__constr_termination_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_main__constr_termination_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_constr_main__constr_termination_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_main, term_reason);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__generic_termination_info_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__generic_termination_info_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module33)
	MR_init_entry1(__Compare___transform_hlds__term_constr_main__constr_termination_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_main__constr_termination_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_constr_main__constr_termination_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_main, term_reason);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__generic_termination_info_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module34)
	MR_init_entry1(__Unify___transform_hlds__term_constr_main__intermod_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_main__intermod_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_constr_main__intermod_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module35)
	MR_init_entry1(__Compare___transform_hlds__term_constr_main__intermod_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_main__intermod_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_constr_main__intermod_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module36)
	MR_init_entry1(__Unify___transform_hlds__term_constr_main__term_reason_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_main__term_reason_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_constr_main__term_reason_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module37)
	MR_init_entry1(__Compare___transform_hlds__term_constr_main__term_reason_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_main__term_reason_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_constr_main__term_reason_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module38)
	MR_init_entry1(__Unify___transform_hlds__term_constr_main__termination2_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_constr_main__termination2_info_0_0);
	MR_init_label10(__Unify___transform_hlds__term_constr_main__termination2_info_0_0,6,8,11,13,15,17,22,24,28,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_constr_main__termination2_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i28);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__term_constr_main__termination2_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i1);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__term_constr_main__termination2_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i11);
MR_def_label(__Unify___transform_hlds__term_constr_main__termination2_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i13);
MR_def_label(__Unify___transform_hlds__term_constr_main__termination2_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i15);
MR_def_label(__Unify___transform_hlds__term_constr_main__termination2_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i17);
MR_def_label(__Unify___transform_hlds__term_constr_main__termination2_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i22);
MR_def_label(__Unify___transform_hlds__term_constr_main__termination2_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_main, intermod_status);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i24);
MR_def_label(__Unify___transform_hlds__term_constr_main__termination2_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_constr_main__termination2_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_proc);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___transform_hlds__term_constr_main__termination2_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_constr_main__termination2_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module39)
	MR_init_entry1(__Compare___transform_hlds__term_constr_main__termination2_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_constr_main__termination2_info_0_0);
	MR_init_label10(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,3,2,7,12,17,22,26,30,37,41)
	MR_init_label1(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,112)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_constr_main__termination2_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i7);
MR_def_label(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i112);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i12);
MR_def_label(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i112);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i112);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i22);
MR_def_label(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i112);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i26);
MR_def_label(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i112);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__polyhedron, polyhedron);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i30);
MR_def_label(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i112);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i37);
MR_def_label(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i112);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_main, intermod_status);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i41);
MR_def_label(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_constr_main__termination2_info_0_0_i112);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_constr_data, abstract_proc);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___transform_hlds__term_constr_main__termination2_info_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__isnt_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module40)
	MR_init_entry1(transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__390__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__390__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__analyse_scc__390__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__390__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
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


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module41)
	MR_init_entry1(transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__408__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__408__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__analyse_scc__408__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__408__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
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


MR_BEGIN_MODULE(transform_hlds__term_constr_main_module42)
	MR_init_entry1(transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__612__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__612__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_maybe_constr_arg_size_info__612__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__612__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__lp_rational, constraint);
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

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module43)
	MR_init_entry1(fn__transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__614__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__614__1_2_0);
	MR_init_label1(fn__transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__614__1_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__output_maybe_constr_arg_size_info__614__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__614__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__614__1_2_0_i3);
MR_def_label(fn__transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__614__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__string__int_to_string_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(fn__map__det_elem_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_declared_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0);

MR_BEGIN_MODULE(transform_hlds__term_constr_main_module44)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0,15,4,5,6,7,8,9,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__make_opt_int_procs__[1]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0_i17);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_declared_argmodes_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0_i7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(7), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_util__prog_vars_to_size_vars_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_tempr2 = MR_sv(7);
	MR_r5 = MR_tfield(0, MR_tempr2, 4);
	MR_r6 = MR_tfield(0, MR_tempr2, 5);
	MR_r7 = MR_tfield(0, MR_tempr2, 6);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_constr_main__output_pragma_termination2_info_10_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0_i15);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_99_111_110_115_116_114_95_109_97_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__term_constr_main_maybe_bunch_0(void)
{
	transform_hlds__term_constr_main_module0();
	transform_hlds__term_constr_main_module1();
	transform_hlds__term_constr_main_module2();
	transform_hlds__term_constr_main_module3();
	transform_hlds__term_constr_main_module4();
	transform_hlds__term_constr_main_module5();
	transform_hlds__term_constr_main_module6();
	transform_hlds__term_constr_main_module7();
	transform_hlds__term_constr_main_module8();
	transform_hlds__term_constr_main_module9();
	transform_hlds__term_constr_main_module10();
	transform_hlds__term_constr_main_module11();
	transform_hlds__term_constr_main_module12();
	transform_hlds__term_constr_main_module13();
	transform_hlds__term_constr_main_module14();
	transform_hlds__term_constr_main_module15();
	transform_hlds__term_constr_main_module16();
	transform_hlds__term_constr_main_module17();
	transform_hlds__term_constr_main_module18();
	transform_hlds__term_constr_main_module19();
	transform_hlds__term_constr_main_module20();
	transform_hlds__term_constr_main_module21();
	transform_hlds__term_constr_main_module22();
	transform_hlds__term_constr_main_module23();
	transform_hlds__term_constr_main_module24();
	transform_hlds__term_constr_main_module25();
	transform_hlds__term_constr_main_module26();
	transform_hlds__term_constr_main_module27();
	transform_hlds__term_constr_main_module28();
	transform_hlds__term_constr_main_module29();
	transform_hlds__term_constr_main_module30();
	transform_hlds__term_constr_main_module31();
	transform_hlds__term_constr_main_module32();
	transform_hlds__term_constr_main_module33();
	transform_hlds__term_constr_main_module34();
	transform_hlds__term_constr_main_module35();
	transform_hlds__term_constr_main_module36();
	transform_hlds__term_constr_main_module37();
	transform_hlds__term_constr_main_module38();
	transform_hlds__term_constr_main_module39();
}

static void mercury__transform_hlds__term_constr_main_maybe_bunch_1(void)
{
	transform_hlds__term_constr_main_module40();
	transform_hlds__term_constr_main_module41();
	transform_hlds__term_constr_main_module42();
	transform_hlds__term_constr_main_module43();
	transform_hlds__term_constr_main_module44();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_constr_main__init(void);
void mercury__transform_hlds__term_constr_main__init_type_tables(void);
void mercury__transform_hlds__term_constr_main__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_constr_main__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_constr_main__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__term_constr_main__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__term_constr_main__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_constr_main_maybe_bunch_0();
	mercury__transform_hlds__term_constr_main_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_main__type_ctor_info_constr_arg_size_info_0,
		transform_hlds__term_constr_main__constr_arg_size_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_main__type_ctor_info_constr_termination_info_0,
		transform_hlds__term_constr_main__constr_termination_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0,
		transform_hlds__term_constr_main__intermod_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_main__type_ctor_info_term_reason_0,
		transform_hlds__term_constr_main__term_reason_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_constr_main__type_ctor_info_termination2_info_0,
		transform_hlds__term_constr_main__termination2_info_0_0);
	mercury__transform_hlds__term_constr_main__init_debugger();
}

void mercury__transform_hlds__term_constr_main__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_main__type_ctor_info_constr_arg_size_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_main__type_ctor_info_constr_termination_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_main__type_ctor_info_intermod_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_main__type_ctor_info_term_reason_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_constr_main__type_ctor_info_termination2_info_0);
	}
}


void mercury__transform_hlds__term_constr_main__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_constr_main__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__term_constr_main);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_constr_main__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__term_constr_main__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
