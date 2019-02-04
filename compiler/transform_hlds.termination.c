/*
** Automatically generated from `termination.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__termination__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.termination.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.termination.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.termination.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.termination.c"
#line 40 "transform_hlds.termination.c"
#include "transform_hlds.termination.mh"

#line 43 "transform_hlds.termination.c"
#line 44 "transform_hlds.termination.c"
#ifndef TRANSFORM_HLDS__TERMINATION_DECL_GUARD
#define TRANSFORM_HLDS__TERMINATION_DECL_GUARD

#line 48 "transform_hlds.termination.c"
#line 49 "transform_hlds.termination.c"

#endif
#line 52 "transform_hlds.termination.c"

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
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];
MR_decl_label2(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__354__1_2_0, 2,3)
MR_decl_label3(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0, 4,9,2)
MR_decl_label4(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0, 2,5,7,1)
MR_decl_label3(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0, 2,5,1)
MR_decl_label2(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__536__1_1_0, 4,1)
MR_decl_label7(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0, 15,4,5,6,7,8,17)
MR_decl_label8(transform_hlds__termination__analyse_termination_in_module_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__termination__analyse_termination_in_module_4_0, 10,11,12,13,14,19,16,15)
MR_decl_label1(transform_hlds__termination__analyse_termination_in_module_4_0, 18)
MR_decl_label8(transform_hlds__termination__analyse_termination_in_scc_6_0, 2,4,5,8,7,9,3,10)
MR_decl_label8(transform_hlds__termination__analyse_termination_in_scc_6_0, 12,13,14,17,18,19,16,23)
MR_decl_label2(transform_hlds__termination__analyse_termination_in_scc_6_0, 24,11)
MR_decl_label8(transform_hlds__termination__change_procs_arg_size_info_5_0, 30,4,8,10,11,7,13,14)
MR_decl_label2(transform_hlds__termination__change_procs_arg_size_info_5_0, 6,3)
MR_decl_label8(transform_hlds__termination__change_procs_termination_info_5_0, 30,4,8,10,11,7,13,14)
MR_decl_label2(transform_hlds__termination__change_procs_termination_info_5_0, 6,3)
MR_decl_label8(transform_hlds__termination__check_foreign_code_attributes_2_5_0, 4,3,8,10,12,13,18,16)
MR_decl_label8(transform_hlds__termination__check_foreign_code_attributes_2_5_0, 21,15,26,28,29,30,24,34)
MR_decl_label7(transform_hlds__termination__check_foreign_code_attributes_2_5_0, 36,37,38,39,33,9,7)
MR_decl_label8(transform_hlds__termination__check_preds_5_0, 82,4,5,6,7,8,9,10)
MR_decl_label8(transform_hlds__termination__check_preds_5_0, 11,12,15,13,18,21,20,17)
MR_decl_label8(transform_hlds__termination__check_preds_5_0, 29,28,32,27,34,26,35,36)
MR_decl_label8(transform_hlds__termination__check_preds_5_0, 37,39,41,43,40,45,46,47)
MR_decl_label1(transform_hlds__termination__check_preds_5_0, 3)
MR_decl_label8(transform_hlds__termination__check_procs_known_term_3_0, 36,4,5,7,6,10,2,1)
MR_decl_label8(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0, 2,4,5,6,8,7,11,12)
MR_decl_label8(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0, 14,13,17,16,20,10,23,24)
MR_decl_label4(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0, 25,26,27,28)
MR_decl_label3(transform_hlds__termination__is_solver_init_wrapper_pred_2_0, 2,3,1)
MR_decl_label8(transform_hlds__termination__make_termination_opt_int_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__termination__make_termination_opt_int_4_0, 12,13,14,15,11,17,18,19)
MR_decl_label8(transform_hlds__termination__report_termination_errors_6_0, 2,3,5,7,8,4,11,13)
MR_decl_label5(transform_hlds__termination__report_termination_errors_6_0, 15,18,19,22,10)
MR_decl_label8(transform_hlds__termination__set_builtin_terminates_6_0, 26,4,7,9,10,5,11,13)
MR_decl_label3(transform_hlds__termination__set_builtin_terminates_6_0, 14,15,3)
MR_decl_label8(transform_hlds__termination__set_compiler_gen_terminates_6_0, 4,2,8,9,10,11,13,7)
MR_decl_label3(transform_hlds__termination__set_compiler_gen_terminates_6_0, 15,18,1)
MR_decl_label8(transform_hlds__termination__set_finite_arg_size_infos_4_0, 20,4,5,6,7,8,9,10)
MR_decl_label4(transform_hlds__termination__set_finite_arg_size_infos_4_0, 11,12,13,3)
MR_decl_label8(transform_hlds__termination__set_generated_terminates_4_0, 32,7,8,10,12,13,14,15)
MR_decl_label7(transform_hlds__termination__set_generated_terminates_4_0, 16,9,18,19,20,4,3)
MR_decl_label8(transform_hlds__termination__set_infinite_arg_size_infos_4_0, 19,4,5,6,7,8,9,10)
MR_decl_label3(transform_hlds__termination__set_infinite_arg_size_infos_4_0, 11,12,3)
MR_decl_label8(transform_hlds__termination__set_termination_infos_4_0, 19,4,5,6,7,8,9,10)
MR_decl_label3(transform_hlds__termination__set_termination_infos_4_0, 11,12,3)
MR_decl_label8(transform_hlds__termination__write_pred_termination_info_4_0, 2,3,4,8,7,12,15,17)
MR_decl_label6(transform_hlds__termination__write_pred_termination_info_4_0, 18,19,20,21,22,24)
MR_decl_label1(__Unify___transform_hlds__termination__maybe__maybe_1_1, 1)
MR_decl_static(transform_hlds__termination__check_pragmas_are_consistent_5_0)
MR_decl_static(fn__transform_hlds__termination__this_file_0_0)
MR_decl_static(transform_hlds__termination__set_generated_terminates_4_0)
MR_decl_static(transform_hlds__termination__set_builtin_terminates_6_0)
MR_decl_static(transform_hlds__termination__set_compiler_gen_terminates_6_0)
MR_decl_static(transform_hlds__termination__change_procs_arg_size_info_5_0)
MR_decl_static(transform_hlds__termination__change_procs_termination_info_5_0)
MR_decl_static(transform_hlds__termination__check_preds_5_0)
MR_decl_static(transform_hlds__termination__make_termination_opt_int_4_0)
MR_def_extern_entry(transform_hlds__termination__analyse_termination_in_module_4_0)
MR_def_extern_entry(transform_hlds__termination__write_pred_termination_info_4_0)
MR_decl_static(transform_hlds__termination__check_foreign_code_attributes_2_5_0)
MR_decl_static(transform_hlds__termination__check_procs_known_term_3_0)
MR_decl_static(transform_hlds__termination__set_termination_infos_4_0)
MR_decl_static(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0)
MR_decl_static(transform_hlds__termination__set_finite_arg_size_infos_4_0)
MR_decl_static(transform_hlds__termination__set_infinite_arg_size_infos_4_0)
MR_decl_static(transform_hlds__termination__report_termination_errors_6_0)
MR_decl_static(transform_hlds__termination__analyse_termination_in_scc_6_0)
MR_decl_static(transform_hlds__termination__is_solver_init_wrapper_pred_2_0)
MR_decl_static(__Unify___transform_hlds__termination__maybe__maybe_1_1)
MR_decl_static(fn__transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__302__1_1_0)
MR_decl_static(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__354__1_2_0)
MR_decl_static(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0)
MR_decl_static(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0)
MR_decl_static(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0)
MR_decl_static(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__536__1_1_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_0 mercury_common_0[16] =
{
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
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,6,0)
}
},
{
{
MR_CTOR1_ADDR(parse_tree__prog_data, generic_arg_size_info),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_TAG_COMMON(3,9,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,9,3),
MR_TAG_COMMON(1,0,5)
}
},
{
{
MR_TAG_COMMON(3,9,2),
MR_TAG_COMMON(1,0,6)
}
},
{
{
MR_TAG_COMMON(3,9,1),
MR_TAG_COMMON(1,0,7)
}
},
{
{
MR_TAG_COMMON(3,9,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,9,6),
MR_TAG_COMMON(1,0,9)
}
},
{
{
MR_TAG_COMMON(3,9,2),
MR_TAG_COMMON(1,0,10)
}
},
{
{
MR_TAG_COMMON(3,9,5),
MR_TAG_COMMON(1,0,11)
}
},
{
{
MR_TAG_COMMON(3,9,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,9,8),
MR_TAG_COMMON(1,0,13)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__check_pragmas_are_consistent_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_module_4_0_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__check_pragmas_are_consistent_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_module_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_2 mercury_common_2[5] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(transform_hlds__termination__check_foreign_code_attributes_2_5_0),
0
},
{
MR_COMMON(10,1),
MR_ENTRY_AP(fn__transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__302__1_1_0),
0
},
{
MR_COMMON(11,0),
MR_ENTRY_AP(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__536__1_1_0),
0
},
{
MR_COMMON(11,1),
MR_ENTRY_AP(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0),
0
},
};

static const struct mercury_type_3 mercury_common_3[5] =
{
{
1,
MR_tbmkword(0, 0)
},
{
1,
MR_TAG_COMMON(1,3,0)
},
{
0,
MR_tbmkword(0, 0)
},
{
0,
MR_TAG_COMMON(1,3,2)
},
{
0,
MR_TAG_COMMON(1,3,3)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
0
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_TAG_COMMON(0,4,0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_generic_termination_info_2;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error)
}
},
{
{
MR_CTOR_ADDR(parse_tree__prog_data, generic_termination_info, 2),
MR_CTOR0_ADDR(unit, unit),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__make_termination_opt_int_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__make_termination_opt_int_4_0_1,
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
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_module_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_util__type_ctor_info_pass_info_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_module_4_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__term_util, pass_info),
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_9 mercury_common_9[10] =
{
{
3,
MR_string_const("Warning:", 8)
},
{
3,
MR_string_const("has a \140pragma terminates\'", 25)
},
{
3,
MR_string_const("declaration but also has the", 28)
},
{
3,
MR_string_const("\140does_not_terminate\' foreign", 28)
},
{
3,
MR_string_const("code attribute set.", 19)
},
{
3,
MR_string_const("has a \140pragma does_not_terminate\'", 33)
},
{
3,
MR_string_const("\140terminates\' foreign code", 25)
},
{
3,
MR_string_const("attribute set.", 14)
},
{
3,
MR_string_const("are mutually recursive but some of their", 40)
},
{
3,
MR_string_const("termination pragmas are inconsistent.", 37)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_4;
static const struct mercury_type_10 mercury_common_10[9] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_5;
static const struct mercury_type_11 mercury_common_11[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_4,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(6,2)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_5,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(6,2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__check_pragmas_are_consistent_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.termination",
"transform_hlds.termination",
"check_scc_pragmas_are_consistent",
5,
0
},
"transform_hlds.termination",
"termination.m",
263,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__make_termination_opt_int_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.termination",
"transform_hlds.termination",
"write_pred_termination_info",
4,
0
},
"transform_hlds.termination",
"termination.m",
869,
"d1;c18;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_module_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.termination",
"transform_hlds.termination",
"check_foreign_code_attributes_2",
5,
0
},
"transform_hlds.termination",
"termination.m",
151,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_module_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.termination",
"transform_hlds.termination",
"analyse_termination_in_scc",
6,
0
},
"transform_hlds.termination",
"termination.m",
121,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_util",
"transform_hlds.term_util",
"is_termination_known",
2,
0
},
"transform_hlds.termination",
"termination.m",
269,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_2 = {
{
MR_FUNCTION,
"transform_hlds.termination",
"transform_hlds.termination",
"lambda_termination_m_302",
2,
0
},
"transform_hlds.termination",
"termination.m",
302,
"d1;c8;d2;c5;e;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.termination",
"transform_hlds.termination",
"lambda_termination_m_496",
2,
0
},
"transform_hlds.termination",
"termination.m",
496,
"d1;c11;?;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.termination",
"transform_hlds.termination",
"lambda_termination_m_512",
2,
0
},
"transform_hlds.termination",
"termination.m",
512,
"d1;c11;e;c1;?;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_3 = {
{
MR_PREDICATE,
"transform_hlds.termination",
"transform_hlds.termination",
"is_solver_init_wrapper_pred",
2,
0
},
"transform_hlds.termination",
"termination.m",
525,
"d1;c11;e;c1;?;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__report_termination_errors_6_0_4 = {
{
MR_PREDICATE,
"transform_hlds.termination",
"transform_hlds.termination",
"lambda_termination_m_536",
1,
0
},
"transform_hlds.termination",
"termination.m",
536,
"d1;c11;e;c1;?;c6;e;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.termination",
"transform_hlds.termination",
"lambda_termination_m_354",
2,
0
},
"transform_hlds.termination",
"termination.m",
354,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_util",
"transform_hlds.term_util",
"is_termination_known",
2,
0
},
"transform_hlds.termination",
"termination.m",
379,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_3 = {
{
MR_PREDICATE,
"transform_hlds.term_util",
"transform_hlds.term_util",
"is_termination_known",
2,
0
},
"transform_hlds.termination",
"termination.m",
379,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_4 = {
{
MR_PREDICATE,
"transform_hlds.term_util",
"transform_hlds.term_util",
"is_termination_known",
2,
0
},
"transform_hlds.termination",
"termination.m",
379,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__termination__analyse_termination_in_scc_6_0_5 = {
{
MR_PREDICATE,
"transform_hlds.termination",
"transform_hlds.termination",
"lambda_termination_m_388",
1,
0
},
"transform_hlds.termination",
"termination.m",
388,
"d1;c12;d2;c2;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl2_6_5);

MR_BEGIN_MODULE(transform_hlds__termination_module0)
	MR_init_entry1(transform_hlds__termination__check_pragmas_are_consistent_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__check_pragmas_are_consistent_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(list__foldl2_6_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__termination_module1)
	MR_init_entry1(fn__transform_hlds__termination__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__termination__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("termination.m", 13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(transform_hlds__term_util__make_bool_list_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_maybe_termination_info_3_0);
MR_decl_entry(svmap__det_update_4_0);

MR_BEGIN_MODULE(transform_hlds__termination_module2)
	MR_init_entry1(transform_hlds__termination__set_generated_terminates_4_0);
	MR_init_label8(transform_hlds__termination__set_generated_terminates_4_0,32,7,8,10,12,13,14,15)
	MR_init_label7(transform_hlds__termination__set_generated_terminates_4_0,16,9,18,19,20,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__set_generated_terminates_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__set_generated_terminates_4_0_i3);
	}
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_EQ(MR_r2,3)) {
		MR_GOTO_LAB(transform_hlds__termination__set_generated_terminates_4_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__set_generated_terminates_4_0_i7);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__termination__set_generated_terminates_4_0_i8);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(transform_hlds__termination__set_generated_terminates_4_0_i10) MR_AND
		MR_LABEL_AP(transform_hlds__termination__set_generated_terminates_4_0_i12) MR_AND
		MR_LABEL_AP(transform_hlds__termination__set_generated_terminates_4_0_i14) MR_AND
		MR_LABEL_AP(transform_hlds__termination__set_generated_terminates_4_0_i16));
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_np_call_localret_ent(transform_hlds__term_util__make_bool_list_3_0,
		transform_hlds__termination__set_generated_terminates_4_0_i15);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_np_call_localret_ent(transform_hlds__term_util__make_bool_list_3_0,
		transform_hlds__termination__set_generated_terminates_4_0_i13);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,0);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_0,
		transform_hlds__termination__set_generated_terminates_4_0_i18);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_np_call_localret_ent(transform_hlds__term_util__make_bool_list_3_0,
		transform_hlds__termination__set_generated_terminates_4_0_i15);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,0);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_0,
		transform_hlds__termination__set_generated_terminates_4_0_i18);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("termination.m", 13);
	MR_r2 = (MR_Word) MR_string_const("special_pred_id_to_termination/4 initialise predicate", 53);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__termination__set_generated_terminates_4_0_i9);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_0,
		transform_hlds__termination__set_generated_terminates_4_0_i18);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_termination_info_3_0,
		transform_hlds__termination__set_generated_terminates_4_0_i19);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__termination__set_generated_terminates_4_0_i20);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__termination__set_generated_terminates_4_0_i32);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__termination__set_generated_terminates_4_0_i32);
MR_def_label(transform_hlds__termination__set_generated_terminates_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_util__all_args_input_or_zero_size_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(transform_hlds__termination_module3)
	MR_init_entry1(transform_hlds__termination__set_builtin_terminates_6_0);
	MR_init_label8(transform_hlds__termination__set_builtin_terminates_6_0,26,4,7,9,10,5,11,13)
	MR_init_label3(transform_hlds__termination__set_builtin_terminates_6_0,14,15,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__set_builtin_terminates_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__termination__set_builtin_terminates_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__set_builtin_terminates_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__set_builtin_terminates_6_0_i4);
MR_def_label(transform_hlds__termination__set_builtin_terminates_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__term_util__all_args_input_or_zero_size_3_0,
		transform_hlds__termination__set_builtin_terminates_6_0_i7);
MR_def_label(transform_hlds__termination__set_builtin_terminates_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__set_builtin_terminates_6_0_i5);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__termination__set_builtin_terminates_6_0_i9);
MR_def_label(transform_hlds__termination__set_builtin_terminates_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__term_util__make_bool_list_3_0,
		transform_hlds__termination__set_builtin_terminates_6_0_i10);
MR_def_label(transform_hlds__termination__set_builtin_terminates_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_0,
		transform_hlds__termination__set_builtin_terminates_6_0_i13);
MR_def_label(transform_hlds__termination__set_builtin_terminates_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__termination__set_builtin_terminates_6_0_i11);
MR_def_label(transform_hlds__termination__set_builtin_terminates_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_0,
		transform_hlds__termination__set_builtin_terminates_6_0_i13);
MR_def_label(transform_hlds__termination__set_builtin_terminates_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_termination_info_3_0,
		transform_hlds__termination__set_builtin_terminates_6_0_i14);
MR_def_label(transform_hlds__termination__set_builtin_terminates_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__termination__set_builtin_terminates_6_0_i15);
MR_def_label(transform_hlds__termination__set_builtin_terminates_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__termination__set_builtin_terminates_6_0_i26);
MR_def_label(transform_hlds__termination__set_builtin_terminates_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_builtin_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(mdbcomp__prim_data__special_pred_name_arity_4_1);
MR_decl_entry(mdbcomp__prim_data__any_mercury_builtin_module_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);

MR_BEGIN_MODULE(transform_hlds__termination_module4)
	MR_init_entry1(transform_hlds__termination__set_compiler_gen_terminates_6_0);
	MR_init_label8(transform_hlds__termination__set_compiler_gen_terminates_6_0,4,2,8,9,10,11,13,7)
	MR_init_label3(transform_hlds__termination__set_compiler_gen_terminates_6_0,15,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__set_compiler_gen_terminates_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_builtin_1_0,
		transform_hlds__termination__set_compiler_gen_terminates_6_0_i4);
MR_def_label(transform_hlds__termination__set_compiler_gen_terminates_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__set_compiler_gen_terminates_6_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__termination__set_builtin_terminates_6_0,
		transform_hlds__termination__set_compiler_gen_terminates_6_0_i18);
MR_def_label(transform_hlds__termination__set_compiler_gen_terminates_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__termination__set_compiler_gen_terminates_6_0_i8);
MR_def_label(transform_hlds__termination__set_compiler_gen_terminates_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__termination__set_compiler_gen_terminates_6_0_i9);
MR_def_label(transform_hlds__termination__set_compiler_gen_terminates_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__termination__set_compiler_gen_terminates_6_0_i10);
MR_def_label(transform_hlds__termination__set_compiler_gen_terminates_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__special_pred_name_arity_4_1,
		transform_hlds__termination__set_compiler_gen_terminates_6_0_i11);
MR_def_label(transform_hlds__termination__set_compiler_gen_terminates_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__set_compiler_gen_terminates_6_0_i7);
	}
	if ((MR_sv(4) != MR_r4)) {
		MR_GOTO_LAB(transform_hlds__termination__set_compiler_gen_terminates_6_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(mdbcomp__prim_data__any_mercury_builtin_module_1_0,
		transform_hlds__termination__set_compiler_gen_terminates_6_0_i13);
MR_def_label(transform_hlds__termination__set_compiler_gen_terminates_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__set_compiler_gen_terminates_6_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__termination__set_generated_terminates_4_0,
		transform_hlds__termination__set_compiler_gen_terminates_6_0_i18);
MR_def_label(transform_hlds__termination__set_compiler_gen_terminates_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__termination__set_compiler_gen_terminates_6_0_i15);
MR_def_label(transform_hlds__termination__set_compiler_gen_terminates_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__termination__set_compiler_gen_terminates_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 0), 0);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__termination__set_generated_terminates_4_0,
		transform_hlds__termination__set_compiler_gen_terminates_6_0_i18);
MR_def_label(transform_hlds__termination__set_compiler_gen_terminates_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__termination__set_compiler_gen_terminates_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(transform_hlds__termination_module5)
	MR_init_entry1(transform_hlds__termination__change_procs_arg_size_info_5_0);
	MR_init_label8(transform_hlds__termination__change_procs_arg_size_info_5_0,30,4,8,10,11,7,13,14)
	MR_init_label2(transform_hlds__termination__change_procs_arg_size_info_5_0,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__change_procs_arg_size_info_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__termination__change_procs_arg_size_info_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__change_procs_arg_size_info_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__change_procs_arg_size_info_5_0_i4);
MR_def_label(transform_hlds__termination__change_procs_arg_size_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__termination__change_procs_arg_size_info_5_0_i8);
	}
	MR_r2 = MR_r1;
	MR_GOTO_LAB(transform_hlds__termination__change_procs_arg_size_info_5_0_i7);
MR_def_label(transform_hlds__termination__change_procs_arg_size_info_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0,
		transform_hlds__termination__change_procs_arg_size_info_5_0_i10);
MR_def_label(transform_hlds__termination__change_procs_arg_size_info_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		transform_hlds__termination__change_procs_arg_size_info_5_0_i11);
MR_def_label(transform_hlds__termination__change_procs_arg_size_info_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__change_procs_arg_size_info_5_0_i6);
	}
	MR_r2 = MR_sv(6);
MR_def_label(transform_hlds__termination__change_procs_arg_size_info_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_0,
		transform_hlds__termination__change_procs_arg_size_info_5_0_i13);
MR_def_label(transform_hlds__termination__change_procs_arg_size_info_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__termination__change_procs_arg_size_info_5_0_i14);
MR_def_label(transform_hlds__termination__change_procs_arg_size_info_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__termination__change_procs_arg_size_info_5_0_i30);
MR_def_label(transform_hlds__termination__change_procs_arg_size_info_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__termination__change_procs_arg_size_info_5_0_i30);
MR_def_label(transform_hlds__termination__change_procs_arg_size_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0);

MR_BEGIN_MODULE(transform_hlds__termination_module6)
	MR_init_entry1(transform_hlds__termination__change_procs_termination_info_5_0);
	MR_init_label8(transform_hlds__termination__change_procs_termination_info_5_0,30,4,8,10,11,7,13,14)
	MR_init_label2(transform_hlds__termination__change_procs_termination_info_5_0,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__change_procs_termination_info_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__termination__change_procs_termination_info_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__change_procs_termination_info_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__change_procs_termination_info_5_0_i4);
MR_def_label(transform_hlds__termination__change_procs_termination_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__termination__change_procs_termination_info_5_0_i8);
	}
	MR_r2 = MR_r1;
	MR_GOTO_LAB(transform_hlds__termination__change_procs_termination_info_5_0_i7);
MR_def_label(transform_hlds__termination__change_procs_termination_info_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		transform_hlds__termination__change_procs_termination_info_5_0_i10);
MR_def_label(transform_hlds__termination__change_procs_termination_info_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		transform_hlds__termination__change_procs_termination_info_5_0_i11);
MR_def_label(transform_hlds__termination__change_procs_termination_info_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__change_procs_termination_info_5_0_i6);
	}
	MR_r2 = MR_sv(6);
MR_def_label(transform_hlds__termination__change_procs_termination_info_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_termination_info_3_0,
		transform_hlds__termination__change_procs_termination_info_5_0_i13);
MR_def_label(transform_hlds__termination__change_procs_termination_info_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__termination__change_procs_termination_info_5_0_i14);
MR_def_label(transform_hlds__termination__change_procs_termination_info_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__termination__change_procs_termination_info_5_0_i30);
MR_def_label(transform_hlds__termination__change_procs_termination_info_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__termination__change_procs_termination_info_5_0_i30);
MR_def_label(transform_hlds__termination__change_procs_termination_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__write_pred_progress_message_5_0);
MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(map__set_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__termination_module7)
	MR_init_entry1(transform_hlds__termination__check_preds_5_0);
	MR_init_label8(transform_hlds__termination__check_preds_5_0,82,4,5,6,7,8,9,10)
	MR_init_label8(transform_hlds__termination__check_preds_5_0,11,12,15,13,18,21,20,17)
	MR_init_label8(transform_hlds__termination__check_preds_5_0,29,28,32,27,34,26,35,36)
	MR_init_label8(transform_hlds__termination__check_preds_5_0,37,39,41,43,40,45,46,47)
	MR_init_label1(transform_hlds__termination__check_preds_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__check_preds_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__termination__check_preds_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("% Checking termination of ", 26);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		transform_hlds__termination__check_preds_5_0_i4);
MR_def_label(transform_hlds__termination__check_preds_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 68;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__termination__check_preds_5_0_i5);
MR_def_label(transform_hlds__termination__check_preds_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__termination__check_preds_5_0_i6);
MR_def_label(transform_hlds__termination__check_preds_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__check_preds_5_0_i7);
MR_def_label(transform_hlds__termination__check_preds_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__termination__check_preds_5_0_i8);
MR_def_label(transform_hlds__termination__check_preds_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__termination__check_preds_5_0_i9);
MR_def_label(transform_hlds__termination__check_preds_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__termination__check_preds_5_0_i10);
MR_def_label(transform_hlds__termination__check_preds_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__termination__check_preds_5_0_i11);
MR_def_label(transform_hlds__termination__check_preds_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__termination__check_preds_5_0_i12);
MR_def_label(transform_hlds__termination__check_preds_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__termination__set_compiler_gen_terminates_6_0,
		transform_hlds__termination__check_preds_5_0_i15);
MR_def_label(transform_hlds__termination__check_preds_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i13);
	}
	MR_r1 = MR_sv(10);
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i39);
MR_def_label(transform_hlds__termination__check_preds_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		transform_hlds__termination__check_preds_5_0_i18);
MR_def_label(transform_hlds__termination__check_preds_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i17);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 15;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__termination__check_preds_5_0_i21);
MR_def_label(transform_hlds__termination__check_preds_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i20);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__termination__change_procs_termination_info_5_0,
		transform_hlds__termination__check_preds_5_0_i37);
MR_def_label(transform_hlds__termination__check_preds_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_sv(4) = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i39);
MR_def_label(transform_hlds__termination__check_preds_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 15;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__termination__check_preds_5_0_i29);
MR_def_label(transform_hlds__termination__check_preds_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i28);
	}
	MR_r4 = MR_sv(9);
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i27);
MR_def_label(transform_hlds__termination__check_preds_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i26);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 17;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__termination__check_preds_5_0_i32);
MR_def_label(transform_hlds__termination__check_preds_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i26);
	}
	MR_r4 = MR_sv(9);
	MR_r1 = MR_sv(11);
MR_def_label(transform_hlds__termination__check_preds_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_call_localret_ent(transform_hlds__termination__change_procs_termination_info_5_0,
		transform_hlds__termination__check_preds_5_0_i34);
MR_def_label(transform_hlds__termination__check_preds_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i36);
	}
MR_def_label(transform_hlds__termination__check_preds_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr2;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__termination__change_procs_termination_info_5_0,
		transform_hlds__termination__check_preds_5_0_i35);
MR_def_label(transform_hlds__termination__check_preds_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 0;
MR_def_label(transform_hlds__termination__check_preds_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__termination__change_procs_arg_size_info_5_0,
		transform_hlds__termination__check_preds_5_0_i37);
MR_def_label(transform_hlds__termination__check_preds_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
MR_def_label(transform_hlds__termination__check_preds_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		transform_hlds__termination__check_preds_5_0_i41);
MR_def_label(transform_hlds__termination__check_preds_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i40);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr3;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__termination__change_procs_termination_info_5_0,
		transform_hlds__termination__check_preds_5_0_i43);
MR_def_label(transform_hlds__termination__check_preds_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__termination__check_preds_5_0_i45);
MR_def_label(transform_hlds__termination__check_preds_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__termination__check_preds_5_0_i45);
MR_def_label(transform_hlds__termination__check_preds_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__termination__check_preds_5_0_i46);
MR_def_label(transform_hlds__termination__check_preds_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__termination__check_preds_5_0_i47);
MR_def_label(transform_hlds__termination__check_preds_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__termination__check_preds_5_0_i82);
MR_def_label(transform_hlds__termination__check_preds_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(parse_tree__modules__module_name_to_file_name_6_0);
MR_decl_entry(parse_tree__prog_out__maybe_write_string_4_0);
MR_decl_entry(parse_tree__prog_out__maybe_flush_output_3_0);
MR_decl_entry(io__open_append_4_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(io__write_strings_3_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(transform_hlds__termination_module8)
	MR_init_entry1(transform_hlds__termination__make_termination_opt_int_4_0);
	MR_init_label8(transform_hlds__termination__make_termination_opt_int_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__termination__make_termination_opt_int_4_0,12,13,14,15,11,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__make_termination_opt_int_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i2);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".opt.tmp", 8);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i3);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i4);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Appending termination_info pragmas to \140", 41);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i5);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i6);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\'...", 4);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i7);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_flush_output_3_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i8);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__open_append_4_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i9);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__termination__make_termination_opt_int_4_0_i11);
	}
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i12);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__termination__write_pred_termination_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i13);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i14);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__close_output_3_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i15);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_out__maybe_write_string_4_0);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(" failed!\n", 9);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i17);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__error_message_2_0,
		transform_hlds__termination__make_termination_opt_int_4_0_i18);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,18)
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
		transform_hlds__termination__make_termination_opt_int_4_0_i19);
MR_def_label(transform_hlds__termination__make_termination_opt_int_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_get_termination_norm_3_0);
MR_decl_entry(fn__transform_hlds__term_norm__set_functor_info_2_0);
MR_decl_entry(libs__globals__io_lookup_int_option_4_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
MR_decl_entry(transform_hlds__post_term_analysis__run_post_term_analysis_3_0);

MR_BEGIN_MODULE(transform_hlds__termination_module9)
	MR_init_entry1(transform_hlds__termination__analyse_termination_in_module_4_0);
	MR_init_label8(transform_hlds__termination__analyse_termination_in_module_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__termination__analyse_termination_in_module_4_0,10,11,12,13,14,19,16,15)
	MR_init_label1(transform_hlds__termination__analyse_termination_in_module_4_0,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__termination__analyse_termination_in_module_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_termination_norm_3_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i2);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__term_norm__set_functor_info_2_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i3);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 343;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i4);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 344;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i5);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i6);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__termination__check_preds_5_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i7);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i8);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i9);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i10);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(list__foldl2_6_5,
		transform_hlds__termination__analyse_termination_in_module_4_0_i11);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__termination__check_pragmas_are_consistent_5_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i12);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__termination__analyse_termination_in_scc_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl2_6_5,
		transform_hlds__termination__analyse_termination_in_module_4_0_i13);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 68;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i14);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__termination__analyse_termination_in_module_4_0_i16);
	}
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(transform_hlds__termination__analyse_termination_in_module_4_0_i15);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__termination__make_termination_opt_int_4_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i19);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__post_term_analysis__run_post_term_analysis_3_0,
		transform_hlds__termination__analyse_termination_in_module_4_0_i18);
MR_def_label(transform_hlds__termination__analyse_termination_in_module_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_spec_info_2_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);

MR_BEGIN_MODULE(transform_hlds__termination_module10)
	MR_init_entry1(transform_hlds__termination__write_pred_termination_info_4_0);
	MR_init_label8(transform_hlds__termination__write_pred_termination_info_4_0,2,3,4,8,7,12,15,17)
	MR_init_label6(transform_hlds__termination__write_pred_termination_info_4_0,18,19,20,21,22,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__termination__write_pred_termination_info_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__termination__write_pred_termination_info_4_0_i2);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__termination__write_pred_termination_info_4_0_i3);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_spec_info_2_0,
		transform_hlds__termination__write_pred_termination_info_4_0_i4);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(transform_hlds__termination__write_pred_termination_info_4_0_i8);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_ctfield(0, MR_r2, 1);
	MR_GOTO_LAB(transform_hlds__termination__write_pred_termination_info_4_0_i7);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(transform_hlds__termination__write_pred_termination_info_4_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	}
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		transform_hlds__termination__write_pred_termination_info_4_0_i12);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__termination__write_pred_termination_info_4_0_i24);
	}
	MR_r1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__termination__write_pred_termination_info_4_0_i15);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__termination__write_pred_termination_info_4_0_i24);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__termination__write_pred_termination_info_4_0_i17);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__termination__write_pred_termination_info_4_0_i18);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__termination__write_pred_termination_info_4_0_i19);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__termination__write_pred_termination_info_4_0_i20);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__termination__write_pred_termination_info_4_0_i21);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__termination__write_pred_termination_info_4_0_i22);
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0);
	}
MR_def_label(transform_hlds__termination__write_pred_termination_info_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(transform_hlds__term_util__attributes_imply_termination_1_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
MR_decl_entry(fn__parse_tree__prog_data__get_terminates_1_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_proc_name_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(parse_tree__error_util__report_warning_5_0);

MR_BEGIN_MODULE(transform_hlds__termination_module11)
	MR_init_entry1(transform_hlds__termination__check_foreign_code_attributes_2_5_0);
	MR_init_label8(transform_hlds__termination__check_foreign_code_attributes_2_5_0,4,3,8,10,12,13,18,16)
	MR_init_label8(transform_hlds__termination__check_foreign_code_attributes_2_5_0,21,15,26,28,29,30,24,34)
	MR_init_label7(transform_hlds__termination__check_foreign_code_attributes_2_5_0,36,37,38,39,33,9,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__check_foreign_code_attributes_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_foreign_code_attributes_2_5_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__termination__this_file_0_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i4);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("check_foreign_code_attributes_2/5: empty SCC.", 45);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_foreign_code_attributes_2_5_0_i7);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i8);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i10);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_foreign_code_attributes_2_5_0_i9);
	}
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i12);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i13);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_foreign_code_attributes_2_5_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_util__attributes_imply_termination_1_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i18);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__check_foreign_code_attributes_2_5_0_i16);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_termination_info_3_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i21);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_termination_info_3_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i21);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_sv(4), 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_foreign_code_attributes_2_5_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_terminates_1_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i26);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__termination__check_foreign_code_attributes_2_5_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_termination_info_3_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i28);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i29);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i30);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__report_warning_5_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i39);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_terminates_1_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i34);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_foreign_code_attributes_2_5_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_termination_info_3_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i36);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i37);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i38);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__report_warning_5_0,
		transform_hlds__termination__check_foreign_code_attributes_2_5_0_i39);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__termination__check_foreign_code_attributes_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__termination_module12)
	MR_init_entry1(transform_hlds__termination__check_procs_known_term_3_0);
	MR_init_label8(transform_hlds__termination__check_procs_known_term_3_0,36,4,5,7,6,10,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__check_procs_known_term_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__termination__check_procs_known_term_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_procs_known_term_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__termination__check_procs_known_term_3_0_i4);
MR_def_label(transform_hlds__termination__check_procs_known_term_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		transform_hlds__termination__check_procs_known_term_3_0_i5);
MR_def_label(transform_hlds__termination__check_procs_known_term_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_procs_known_term_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("termination.m", 13);
	MR_r2 = (MR_Word) MR_string_const("No termination info for procedure.", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__termination__check_procs_known_term_3_0_i6);
MR_def_label(transform_hlds__termination__check_procs_known_term_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
MR_def_label(transform_hlds__termination__check_procs_known_term_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_procs_known_term_3_0_i10);
	}
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_procs_known_term_3_0_i1);
	}
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__termination__check_procs_known_term_3_0_i36);
MR_def_label(transform_hlds__termination__check_procs_known_term_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__termination__check_procs_known_term_3_0_i1);
	}
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__termination__check_procs_known_term_3_0_i36);
MR_def_label(transform_hlds__termination__check_procs_known_term_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__termination__check_procs_known_term_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__termination_module13)
	MR_init_entry1(transform_hlds__termination__set_termination_infos_4_0);
	MR_init_label8(transform_hlds__termination__set_termination_infos_4_0,19,4,5,6,7,8,9,10)
	MR_init_label3(transform_hlds__termination__set_termination_infos_4_0,11,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__set_termination_infos_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__termination__set_termination_infos_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__set_termination_infos_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__termination__set_termination_infos_4_0_i4);
MR_def_label(transform_hlds__termination__set_termination_infos_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__set_termination_infos_4_0_i5);
MR_def_label(transform_hlds__termination__set_termination_infos_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__termination__set_termination_infos_4_0_i6);
MR_def_label(transform_hlds__termination__set_termination_infos_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__set_termination_infos_4_0_i7);
MR_def_label(transform_hlds__termination__set_termination_infos_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_termination_info_3_0,
		transform_hlds__termination__set_termination_infos_4_0_i8);
MR_def_label(transform_hlds__termination__set_termination_infos_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__termination__set_termination_infos_4_0_i9);
MR_def_label(transform_hlds__termination__set_termination_infos_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__termination__set_termination_infos_4_0_i10);
MR_def_label(transform_hlds__termination__set_termination_infos_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__termination__set_termination_infos_4_0_i11);
MR_def_label(transform_hlds__termination__set_termination_infos_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__termination__set_termination_infos_4_0_i12);
MR_def_label(transform_hlds__termination__set_termination_infos_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__termination__set_termination_infos_4_0_i19);
MR_def_label(transform_hlds__termination__set_termination_infos_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_util__is_termination_known_2_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(transform_hlds__term_util__get_context_from_scc_3_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_several_pred_names_3_0);

MR_BEGIN_MODULE(transform_hlds__termination_module14)
	MR_init_entry1(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0);
	MR_init_label8(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,2,4,5,6,8,7,11,12)
	MR_init_label8(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,14,13,17,16,20,10,23,24)
	MR_init_label4(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,25,26,27,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_util__is_termination_known_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i2);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i5);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i6);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("termination.m", 13);
	MR_r2 = (MR_Word) MR_string_const("No termination info. found.", 27);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i7);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(5);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i11);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i12);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("termination.m", 13);
	MR_r2 = (MR_Word) MR_string_const("No termination info for procedure.", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i13);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i17);
	}
	if (MR_PTAG_TEST(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i16);
	}
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i10);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i16);
	}
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i10);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(transform_hlds__termination__check_procs_known_term_3_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i20);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i10);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__termination__set_termination_infos_4_0);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__term_util__get_context_from_scc_3_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i23);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__termination__set_termination_infos_4_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i24);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i25);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_several_pred_names_3_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i26);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,14);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i27);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__report_warning_5_0,
		transform_hlds__termination__check_scc_pragmas_are_consistent_5_0_i28);
MR_def_label(transform_hlds__termination__check_scc_pragmas_are_consistent_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__termination_module15)
	MR_init_entry1(transform_hlds__termination__set_finite_arg_size_infos_4_0);
	MR_init_label8(transform_hlds__termination__set_finite_arg_size_infos_4_0,20,4,5,6,7,8,9,10)
	MR_init_label4(transform_hlds__termination__set_finite_arg_size_infos_4_0,11,12,13,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__set_finite_arg_size_infos_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__set_finite_arg_size_infos_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__termination__set_finite_arg_size_infos_4_0_i4);
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__set_finite_arg_size_infos_4_0_i5);
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__termination__set_finite_arg_size_infos_4_0_i6);
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__set_finite_arg_size_infos_4_0_i7);
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,15);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__set_finite_arg_size_infos_4_0_i8);
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_0,
		transform_hlds__termination__set_finite_arg_size_infos_4_0_i9);
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__termination__set_finite_arg_size_infos_4_0_i10);
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__termination__set_finite_arg_size_infos_4_0_i11);
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__termination__set_finite_arg_size_infos_4_0_i12);
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__termination__set_finite_arg_size_infos_4_0_i13);
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__termination__set_finite_arg_size_infos_4_0_i20);
MR_def_label(transform_hlds__termination__set_finite_arg_size_infos_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__termination_module16)
	MR_init_entry1(transform_hlds__termination__set_infinite_arg_size_infos_4_0);
	MR_init_label8(transform_hlds__termination__set_infinite_arg_size_infos_4_0,19,4,5,6,7,8,9,10)
	MR_init_label3(transform_hlds__termination__set_infinite_arg_size_infos_4_0,11,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__set_infinite_arg_size_infos_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__termination__set_infinite_arg_size_infos_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__set_infinite_arg_size_infos_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__termination__set_infinite_arg_size_infos_4_0_i4);
MR_def_label(transform_hlds__termination__set_infinite_arg_size_infos_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__set_infinite_arg_size_infos_4_0_i5);
MR_def_label(transform_hlds__termination__set_infinite_arg_size_infos_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__termination__set_infinite_arg_size_infos_4_0_i6);
MR_def_label(transform_hlds__termination__set_infinite_arg_size_infos_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__termination__set_infinite_arg_size_infos_4_0_i7);
MR_def_label(transform_hlds__termination__set_infinite_arg_size_infos_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_0,
		transform_hlds__termination__set_infinite_arg_size_infos_4_0_i8);
MR_def_label(transform_hlds__termination__set_infinite_arg_size_infos_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__termination__set_infinite_arg_size_infos_4_0_i9);
MR_def_label(transform_hlds__termination__set_infinite_arg_size_infos_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__termination__set_infinite_arg_size_infos_4_0_i10);
MR_def_label(transform_hlds__termination__set_infinite_arg_size_infos_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__termination__set_infinite_arg_size_infos_4_0_i11);
MR_def_label(transform_hlds__termination__set_infinite_arg_size_infos_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__termination__set_infinite_arg_size_infos_4_0_i12);
MR_def_label(transform_hlds__termination__set_infinite_arg_size_infos_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__termination__set_infinite_arg_size_infos_4_0_i19);
MR_def_label(transform_hlds__termination__set_infinite_arg_size_infos_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);
MR_decl_entry(transform_hlds__term_errors__report_term_errors_5_0);
MR_decl_entry(hlds__hlds_module__module_info_incr_errors_2_0);
MR_decl_entry(list__all_false_2_0);

MR_BEGIN_MODULE(transform_hlds__termination_module17)
	MR_init_entry1(transform_hlds__termination__report_termination_errors_6_0);
	MR_init_label8(transform_hlds__termination__report_termination_errors_6_0,2,3,5,7,8,4,11,13)
	MR_init_label5(transform_hlds__termination__report_termination_errors_6_0,15,18,19,22,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__report_termination_errors_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Integer) 339;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__termination__report_termination_errors_6_0_i2);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 340;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		transform_hlds__termination__report_termination_errors_6_0_i3);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__termination__report_termination_errors_6_0_i5);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__report_termination_errors_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__term_errors__report_term_errors_5_0,
		transform_hlds__termination__report_termination_errors_6_0_i7);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		transform_hlds__termination__report_termination_errors_6_0_i8);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_incr_errors_2_0);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__termination__report_termination_errors_6_0_i11);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__report_termination_errors_6_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__termination__is_solver_init_wrapper_pred_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__all_false_2_0,
		transform_hlds__termination__report_termination_errors_6_0_i13);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__termination__report_termination_errors_6_0_i10);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__termination__report_termination_errors_6_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__termination__report_termination_errors_6_0_i22);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__termination__report_termination_errors_6_0_i10);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__termination__report_termination_errors_6_0_i18);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__report_termination_errors_6_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__termination__report_termination_errors_6_0_i22);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(transform_hlds__term_errors__report_term_errors_5_0,
		transform_hlds__termination__report_termination_errors_6_0_i10);
MR_def_label(transform_hlds__termination__report_termination_errors_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0);
MR_decl_entry(transform_hlds__term_pass2__prove_termination_in_scc_8_0);
MR_decl_entry(list__take_upto_3_0);

MR_BEGIN_MODULE(transform_hlds__termination_module18)
	MR_init_entry1(transform_hlds__termination__analyse_termination_in_scc_6_0);
	MR_init_label8(transform_hlds__termination__analyse_termination_in_scc_6_0,2,4,5,8,7,9,3,10)
	MR_init_label8(transform_hlds__termination__analyse_termination_in_scc_6_0,12,13,14,17,18,19,16,23)
	MR_init_label2(transform_hlds__termination__analyse_termination_in_scc_6_0,24,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__analyse_termination_in_scc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__354__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i2);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__analyse_termination_in_scc_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_util__is_termination_known_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_GOTO_LAB(transform_hlds__termination__analyse_termination_in_scc_6_0_i3);
	}
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__term_pass1__find_arg_sizes_in_scc_8_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i5);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__termination__analyse_termination_in_scc_6_0_i7);
	}
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__termination__set_finite_arg_size_infos_4_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i8);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_util__is_termination_known_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_GOTO_LAB(transform_hlds__termination__analyse_termination_in_scc_6_0_i3);
	}
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__termination__set_infinite_arg_size_infos_4_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i9);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_util__is_termination_known_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	}
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(list__filter_4_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i10);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__analyse_termination_in_scc_6_0_i12);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i13);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i14);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__termination__analyse_termination_in_scc_6_0_i16);
	}
	MR_r1 = (MR_Integer) 341;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i17);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__term_pass2__prove_termination_in_scc_8_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i18);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__termination__set_termination_infos_4_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i19);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__termination__analyse_termination_in_scc_6_0_i11);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__termination__report_termination_errors_6_0);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i23);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__termination__set_termination_infos_4_0,
		transform_hlds__termination__analyse_termination_in_scc_6_0_i24);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__termination__report_termination_errors_6_0);
MR_def_label(transform_hlds__termination__analyse_termination_in_scc_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__termination_module19)
	MR_init_entry1(transform_hlds__termination__is_solver_init_wrapper_pred_2_0);
	MR_init_label3(transform_hlds__termination__is_solver_init_wrapper_pred_2_0,2,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__is_solver_init_wrapper_pred_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__termination__is_solver_init_wrapper_pred_2_0_i2);
MR_def_label(transform_hlds__termination__is_solver_init_wrapper_pred_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__termination__is_solver_init_wrapper_pred_2_0_i3);
MR_def_label(transform_hlds__termination__is_solver_init_wrapper_pred_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__termination__is_solver_init_wrapper_pred_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 0);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 3);
	MR_decr_sp_and_return(1);
	}
MR_def_label(transform_hlds__termination__is_solver_init_wrapper_pred_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__termination_module20)
	MR_init_entry1(__Unify___transform_hlds__termination__maybe__maybe_1_1);
	MR_init_label1(__Unify___transform_hlds__termination__maybe__maybe_1_1,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__termination__maybe__maybe_1_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__termination__maybe__maybe_1_1_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__termination__maybe__maybe_1_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__termination_module21)
	MR_init_entry1(fn__transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__302__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__termination__IntroducedFrom__func__check_scc_pragmas_are_consistent__302__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__termination_module22)
	MR_init_entry1(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__354__1_2_0);
	MR_init_label2(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__354__1_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__354__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__354__1_2_0_i2);
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__354__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0,
		transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__354__1_2_0_i3);
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__354__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(__Unify___transform_hlds__termination__maybe__maybe_1_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__termination_module23)
	MR_init_entry1(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0);
	MR_init_label3(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0,4,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0_i2) MR_AND
		MR_LABEL_AP(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0_i2) MR_AND
		MR_LABEL_AP(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0_i9));
	}
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_mktag((MR_Integer) 2));
	MR_proceed();
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__analyse_termination_in_scc__388__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);

MR_BEGIN_MODULE(transform_hlds__termination_module24)
	MR_init_entry1(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0);
	MR_init_label4(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0,2,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0_i2);
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0_i5);
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0_i7);
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 17;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__hlds_pred__check_marker_2_0);
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__496__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__termination_module25)
	MR_init_entry1(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0);
	MR_init_label3(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0,2,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0_i2);
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0_i5);
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__512__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__term_errors__indirect_error_1_0);

MR_BEGIN_MODULE(transform_hlds__termination_module26)
	MR_init_entry1(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__536__1_1_0);
	MR_init_label2(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__536__1_1_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__536__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(transform_hlds__term_errors__indirect_error_1_0,
		transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__536__1_1_0_i4);
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__536__1_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__536__1_1_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__termination__IntroducedFrom__pred__report_termination_errors__536__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_declared_argmodes_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__write_pragma_termination_info_8_0);

MR_BEGIN_MODULE(transform_hlds__termination_module27)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0);
	MR_init_label7(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0,15,4,5,6,7,8,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0_i17);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_declared_argmodes_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0_i7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__write_pragma_termination_info_8_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0_i15);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_105_110_97_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_116_101_114_109_105_110_97_116_105_111_110_95_105_110_102_111_95_95_91_49_93_95_48_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__termination_maybe_bunch_0(void)
{
	transform_hlds__termination_module0();
	transform_hlds__termination_module1();
	transform_hlds__termination_module2();
	transform_hlds__termination_module3();
	transform_hlds__termination_module4();
	transform_hlds__termination_module5();
	transform_hlds__termination_module6();
	transform_hlds__termination_module7();
	transform_hlds__termination_module8();
	transform_hlds__termination_module9();
	transform_hlds__termination_module10();
	transform_hlds__termination_module11();
	transform_hlds__termination_module12();
	transform_hlds__termination_module13();
	transform_hlds__termination_module14();
	transform_hlds__termination_module15();
	transform_hlds__termination_module16();
	transform_hlds__termination_module17();
	transform_hlds__termination_module18();
	transform_hlds__termination_module19();
	transform_hlds__termination_module20();
	transform_hlds__termination_module21();
	transform_hlds__termination_module22();
	transform_hlds__termination_module23();
	transform_hlds__termination_module24();
	transform_hlds__termination_module25();
	transform_hlds__termination_module26();
	transform_hlds__termination_module27();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__termination__init(void);
void mercury__transform_hlds__termination__init_type_tables(void);
void mercury__transform_hlds__termination__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__termination__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__termination__init_complexity_procs(void);
#endif

void mercury__transform_hlds__termination__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__termination_maybe_bunch_0();
	mercury__transform_hlds__termination__init_debugger();
}

void mercury__transform_hlds__termination__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__termination__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__termination__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__termination__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
