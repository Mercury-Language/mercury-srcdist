/*
** Automatically generated from `abstract_mode_constraints.m'
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
INIT mercury__check_hlds__abstract_mode_constraints__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "check_hlds.abstract_mode_constraints.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "check_hlds.abstract_mode_constraints.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "check_hlds.abstract_mode_constraints.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "check_hlds.abstract_mode_constraints.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "check_hlds.abstract_mode_constraints.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "check_hlds.abstract_mode_constraints.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "check_hlds.abstract_mode_constraints.c"
#line 52 "check_hlds.abstract_mode_constraints.c"
#include "check_hlds.abstract_mode_constraints.mh"

#line 55 "check_hlds.abstract_mode_constraints.c"
#line 56 "check_hlds.abstract_mode_constraints.c"
#ifndef CHECK_HLDS__ABSTRACT_MODE_CONSTRAINTS_DECL_GUARD
#define CHECK_HLDS__ABSTRACT_MODE_CONSTRAINTS_DECL_GUARD

#line 60 "check_hlds.abstract_mode_constraints.c"
#line 61 "check_hlds.abstract_mode_constraints.c"

#endif
#line 64 "check_hlds.abstract_mode_constraints.c"

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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1,
	mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_0,
	mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0,
	mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_varset_0,
	mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_var_0,
	mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
	mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_bindings_0,
	mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formulae_0,
	mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0,
	mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_and_annotation_0;
MR_decl_label2(check_hlds__abstract_mode_constraints__add_constraint_4_0, 2,3)
MR_decl_label1(check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_0, 2)
MR_decl_label2(check_hlds__abstract_mode_constraints__add_proc_specific_constraint_5_0, 2,3)
MR_decl_label7(check_hlds__abstract_mode_constraints__dump_constraint_6_0, 22,27,9,10,26,5,6)
MR_decl_label1(check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0, 2)
MR_decl_label8(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0, 4,5,6,7,10,11,12,13)
MR_decl_label8(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0, 15,16,17,18,21,23,24,25)
MR_decl_label8(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0, 26,22,30,31,29,34,35,36)
MR_decl_label8(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0, 3,35,7,10,11,12,9,14)
MR_decl_label1(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0, 15)
MR_decl_label1(check_hlds__abstract_mode_constraints__mc_var_val_to_string_2_0, 3)
MR_decl_label6(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0, 2,3,4,5,6,7)
MR_decl_label7(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0, 2,3,4,5,6,7,8)
MR_decl_label8(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0, 18,19,11,12,13,14,15,16)
MR_decl_label6(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0, 4,5,6,7,8,9)
MR_decl_label3(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0, 11,4,13)
MR_decl_label1(check_hlds__abstract_mode_constraints__pretty_print_mc_var_4_0, 2)
MR_decl_label8(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0, 28,4,5,8,9,10,13,30)
MR_decl_label8(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0, 4,5,6,7,9,10,13,14)
MR_decl_label8(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0, 15,17,19,20,21,18,25,24)
MR_decl_label2(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0, 28,29)
MR_decl_label2(fn__check_hlds__abstract_mode_constraints__init_0_0, 2,3)
MR_decl_label3(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_2_0, 2,3,4)
MR_decl_label1(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_and_annotations_2_0, 2)
MR_decl_label1(__Unify___check_hlds__abstract_mode_constraints__constraint_annotation_0_0, 6)
MR_decl_label4(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0, 10,6,26,1)
MR_decl_label4(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0, 4,6,10,1)
MR_decl_label8(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0, 6,8,10,14,16,20,23,21)
MR_decl_label3(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0, 27,52,1)
MR_decl_label2(__Compare___check_hlds__abstract_mode_constraints__constraint_annotation_0_0, 3,2)
MR_decl_label7(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0, 3,2,12,6,32,11,9)
MR_decl_label5(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0, 3,2,5,9,29)
MR_decl_label8(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0, 3,2,6,9,11,18,19,21)
MR_decl_label8(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0, 25,28,29,31,36,38,43,160)
MR_decl_label8(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0, 46,56,47,69,97,62,78,99)
MR_decl_label1(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0, 185)
MR_decl_static(check_hlds__abstract_mode_constraints__pretty_print_mc_var_4_0)
MR_decl_static(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0)
MR_decl_static(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0)
MR_decl_static(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0)
MR_decl_static(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__pretty_print_constraints_4_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__pretty_print_solutions_4_0)
MR_def_extern_entry(fn__check_hlds__abstract_mode_constraints__init_0_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__add_constraint_4_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__add_proc_specific_constraint_5_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_0)
MR_def_extern_entry(fn__check_hlds__abstract_mode_constraints__pred_constraints_to_formulae_1_0)
MR_def_extern_entry(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_2_0)
MR_def_extern_entry(fn__check_hlds__abstract_mode_constraints__pred_constraints_to_formulae_and_annotations_1_0)
MR_def_extern_entry(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_and_annotations_2_0)
MR_def_extern_entry(fn__check_hlds__abstract_mode_constraints__proc_constraints_to_formulae_and_annotations_2_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__equiv_no_4_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__equivalent_4_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__equiv_disj_5_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__at_most_one_4_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__not_both_5_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__exactly_one_4_0)
MR_def_extern_entry(check_hlds__abstract_mode_constraints__xor_5_0)
MR_decl_static(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0)
MR_decl_static(check_hlds__abstract_mode_constraints__mc_var_val_to_string_2_0)
MR_decl_static(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0)
MR_decl_static(check_hlds__abstract_mode_constraints__dump_constraint_6_0)
MR_decl_static(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0)
MR_decl_static(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0)
MR_def_extern_entry(__Unify___check_hlds__abstract_mode_constraints__constraint_and_annotation_0_0)
MR_def_extern_entry(__Compare___check_hlds__abstract_mode_constraints__constraint_and_annotation_0_0)
MR_def_extern_entry(__Unify___check_hlds__abstract_mode_constraints__constraint_annotation_0_0)
MR_def_extern_entry(__Compare___check_hlds__abstract_mode_constraints__constraint_annotation_0_0)
MR_def_extern_entry(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0)
MR_def_extern_entry(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0)
MR_def_extern_entry(__Unify___check_hlds__abstract_mode_constraints__constraint_formulae_0_0)
MR_def_extern_entry(__Compare___check_hlds__abstract_mode_constraints__constraint_formulae_0_0)
MR_def_extern_entry(__Unify___check_hlds__abstract_mode_constraints__mc_bindings_0_0)
MR_def_extern_entry(__Compare___check_hlds__abstract_mode_constraints__mc_bindings_0_0)
MR_def_extern_entry(__Unify___check_hlds__abstract_mode_constraints__mc_type_0_0)
MR_def_extern_entry(__Compare___check_hlds__abstract_mode_constraints__mc_type_0_0)
MR_def_extern_entry(__Unify___check_hlds__abstract_mode_constraints__mc_var_0_0)
MR_def_extern_entry(__Compare___check_hlds__abstract_mode_constraints__mc_var_0_0)
MR_def_extern_entry(__Unify___check_hlds__abstract_mode_constraints__mc_varset_0_0)
MR_def_extern_entry(__Compare___check_hlds__abstract_mode_constraints__mc_varset_0_0)
MR_def_extern_entry(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0)
MR_def_extern_entry(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0)
MR_def_extern_entry(__Unify___check_hlds__abstract_mode_constraints__var_constraint_0_0)
MR_def_extern_entry(__Compare___check_hlds__abstract_mode_constraints__var_constraint_0_0)
MR_def_extern_entry(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0)
MR_def_extern_entry(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[9] =
{
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
}
},
{
{
MR_TAG_COMMON(3,3,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,2,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__abstract_mode_constraints__pretty_print_solutions_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__abstract_mode_constraints__dump_constraint_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__abstract_mode_constraints__dump_constraint_6_0_2;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__abstract_mode_constraints__pretty_print_solutions_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,0),
MR_COMMON(2,0),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__abstract_mode_constraints__dump_constraint_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__abstract_mode_constraints__dump_constraint_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,1),
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,2),
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula),
MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation)
}
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
3,
MR_string_const("disj(", 5)
},
{
3,
MR_string_const(") end disj", 10)
},
{
3,
MR_string_const("conj(", 5)
},
{
3,
MR_string_const(") end conj", 10)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,0),
MR_COMMON(2,0),
MR_COMMON(0,7),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_var_1__pseudo_1 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0 = {
	"equiv_bool",
	2,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0,
	NULL,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_term__pti_var_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_1
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1 = {
	"equivalent",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2 = {
	"implies",
	2,
	3,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3 = {
	"equiv_disj",
	2,
	3,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4 = {
	"at_most_one",
	1,
	1,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5 = {
	"exactly_one",
	1,
	1,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3,
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4,
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5

};

const MR_DuPtagLayout mercury_data_check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4,
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0,
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3,
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1,
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5,
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2
};

const MR_Integer mercury_data_check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1[] = {
	1,
	3,
	5,
	2,
	0,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1 = {
	1,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0)),
	"check_hlds.abstract_mode_constraints",
	"var_constraint",
	{ (void *)mercury_data_check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1 },
	{ (void *)mercury_data_check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1 },
	6,
	4,
	mercury_data_check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1
};

static const MR_FA_TypeInfo_Struct1 mercury_data_check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__abstract_mode_constraints__var_constraint_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_0_0)),
	"check_hlds.abstract_mode_constraints",
	"var_constraint",
	{ 0 },
	{ (void *)&mercury_data_check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0,
	(MR_TypeInfo) &mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0[] = {
	"proc_constraints",
	"pred_constraints",
	"mode_infer_callees"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0 = {
	"pred_constraints",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0,
	mercury_data_check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0
};

const MR_Integer mercury_data_check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0)),
	"check_hlds.abstract_mode_constraints",
	"pred_p_c_constraints",
	{ (void *)mercury_data_check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0 },
	{ (void *)mercury_data_check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0 },
	1,
	4,
	mercury_data_check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_varset_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__abstract_mode_constraints__mc_varset_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__abstract_mode_constraints__mc_varset_0_0)),
	"check_hlds.abstract_mode_constraints",
	"mc_varset",
	{ 0 },
	{ (void *)&mercury_data_varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_var_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__abstract_mode_constraints__mc_var_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__abstract_mode_constraints__mc_var_0_0)),
	"check_hlds.abstract_mode_constraints",
	"mc_var",
	{ 0 },
	{ (void *)&mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0 = {
	"mc_type",
	0
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__enum_value_ordered_mc_type_0[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0
};

const MR_Integer mercury_data_check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__abstract_mode_constraints__mc_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__abstract_mode_constraints__mc_type_0_0)),
	"check_hlds.abstract_mode_constraints",
	"mc_type",
	{ (void *)mercury_data_check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0 },
	{ (void *)mercury_data_check_hlds__abstract_mode_constraints__enum_value_ordered_mc_type_0 },
	1,
	4,
	mercury_data_check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
	(MR_TypeInfo) &mercury_data_bool__type_ctor_info_bool_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_bindings_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__abstract_mode_constraints__mc_bindings_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__abstract_mode_constraints__mc_bindings_0_0)),
	"check_hlds.abstract_mode_constraints",
	"mc_bindings",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formulae_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__abstract_mode_constraints__constraint_formulae_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__abstract_mode_constraints__constraint_formulae_0_0)),
	"check_hlds.abstract_mode_constraints",
	"constraint_formulae",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__abstract_mode_constraints__field_types_constraint_formula_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_constraint_formula_0_0 = {
	"atomic_constraint",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__abstract_mode_constraints__field_types_constraint_formula_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__abstract_mode_constraints__field_types_constraint_formula_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_constraint_formula_0_1 = {
	"disj",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__abstract_mode_constraints__field_types_constraint_formula_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__abstract_mode_constraints__field_types_constraint_formula_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_constraint_formula_0_2 = {
	"conj",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__abstract_mode_constraints__field_types_constraint_formula_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_constraint_formula_0_0[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_constraint_formula_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_constraint_formula_0_1[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_constraint_formula_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_constraint_formula_0_2[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_constraint_formula_0_2

};

const MR_DuPtagLayout mercury_data_check_hlds__abstract_mode_constraints__du_ptag_ordered_constraint_formula_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_constraint_formula_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_constraint_formula_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__abstract_mode_constraints__du_stag_ordered_constraint_formula_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__abstract_mode_constraints__du_name_ordered_constraint_formula_0[] = {
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_constraint_formula_0_0,
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_constraint_formula_0_2,
	&mercury_data_check_hlds__abstract_mode_constraints__du_functor_desc_constraint_formula_0_1
};

const MR_Integer mercury_data_check_hlds__abstract_mode_constraints__functor_number_map_constraint_formula_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0)),
	"check_hlds.abstract_mode_constraints",
	"constraint_formula",
	{ (void *)mercury_data_check_hlds__abstract_mode_constraints__du_name_ordered_constraint_formula_0 },
	{ (void *)mercury_data_check_hlds__abstract_mode_constraints__du_ptag_ordered_constraint_formula_0 },
	3,
	4,
	mercury_data_check_hlds__abstract_mode_constraints__functor_number_map_constraint_formula_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

static const MR_NotagFunctorDesc mercury_data_check_hlds__abstract_mode_constraints__notag_functor_desc_constraint_annotation_0 = {
	"constraint_annotation",
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	"context"
};

const MR_Integer mercury_data_check_hlds__abstract_mode_constraints__functor_number_map_constraint_annotation_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__abstract_mode_constraints__constraint_annotation_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__abstract_mode_constraints__constraint_annotation_0_0)),
	"check_hlds.abstract_mode_constraints",
	"constraint_annotation",
	{ (void *)&mercury_data_check_hlds__abstract_mode_constraints__notag_functor_desc_constraint_annotation_0 },
	{ (void *)&mercury_data_check_hlds__abstract_mode_constraints__notag_functor_desc_constraint_annotation_0 },
	1,
	4,
	mercury_data_check_hlds__abstract_mode_constraints__functor_number_map_constraint_annotation_0
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_and_annotation_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__abstract_mode_constraints__constraint_and_annotation_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__abstract_mode_constraints__constraint_and_annotation_0_0)),
	"check_hlds.abstract_mode_constraints",
	"constraint_and_annotation",
	{ 0 },
	{ (void *)&mercury_data_pair__ti_pair_2check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"dump_constraint",
6,
0
},
"check_hlds.abstract_mode_constraints",
"abstract_mode_constraints.m",
407,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__abstract_mode_constraints__pretty_print_solutions_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"pretty_print_bindings",
6,
0
},
"check_hlds.abstract_mode_constraints",
"abstract_mode_constraints.m",
619,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__abstract_mode_constraints__dump_constraint_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"dump_constraint",
6,
0
},
"check_hlds.abstract_mode_constraints",
"abstract_mode_constraints.m",
417,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__abstract_mode_constraints__dump_constraint_6_0_2 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"dump_constraint",
6,
0
},
"check_hlds.abstract_mode_constraints",
"abstract_mode_constraints.m",
417,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.abstract_mode_constraints",
"check_hlds.abstract_mode_constraints",
"pretty_print_binding",
5,
0
},
"check_hlds.abstract_mode_constraints",
"abstract_mode_constraints.m",
629,
"d1;c15;"
};

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module0)
	MR_init_entry1(check_hlds__abstract_mode_constraints__pretty_print_mc_var_4_0);
	MR_init_label1(check_hlds__abstract_mode_constraints__pretty_print_mc_var_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__abstract_mode_constraints__pretty_print_mc_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_mc_var_4_0_i2);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_mc_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module1)
	MR_init_entry1(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0);
	MR_init_label8(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,28,4,5,8,9,10,13,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0_i30);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0_i4);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0_i5);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0_i8);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0_i9);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0_i10);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0_i13);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0_i28);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__print_3_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module2)
	MR_init_entry1(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0);
	MR_init_label8(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,4,5,6,7,9,10,13,14)
	MR_init_label8(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,15,17,19,20,21,18,25,24)
	MR_init_label2(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i9) MR_AND
		MR_LABEL_AP(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i13) MR_AND
		MR_LABEL_AP(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i17));
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i5);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i6);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i7);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__print_3_0);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("equivalent(", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i10);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i29);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(2, MR_r2, 1);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__pretty_print_mc_var_4_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i14);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i15);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__pretty_print_mc_var_4_0);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i18);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i19);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i20);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" <-> disj(", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i21);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i29);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("at_most_one(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i25);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i29);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("exactly_one(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i28);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_0,
		check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0_i29);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module3)
	MR_init_entry1(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0);
	MR_init_label3(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0,11,4,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0_i4);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0_i11);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__nl_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module4)
	MR_init_entry1(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0);
	MR_init_label8(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,18,19,11,12,13,14,15,16)
	MR_init_label6(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i4);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 0);
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i18);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i19);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(2, MR_r2, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i12);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("conj(\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i13);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i14);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i15);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i16);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") end conj\n", 11);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i5);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("disj(\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i6);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i7);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i8);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0_i9);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_constraint_indent_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") end disj\n", 11);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module5)
	MR_init_entry1(check_hlds__abstract_mode_constraints__pretty_print_constraints_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__pretty_print_constraints_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__keys_and_values_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_corresponding_5_4);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module6)
	MR_init_entry1(check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0);
	MR_init_label1(check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation);
	MR_np_call_localret_ent(assoc_list__keys_and_values_3_0,
		check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0_i2);
MR_def_label(check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__dump_constraint_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_corresponding_5_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__foldl2_6_5);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module7)
	MR_init_entry1(check_hlds__abstract_mode_constraints__pretty_print_solutions_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__pretty_print_solutions_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(list__foldl2_6_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(fn__multi_map__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module8)
	MR_init_entry1(fn__check_hlds__abstract_mode_constraints__init_0_0);
	MR_init_label2(fn__check_hlds__abstract_mode_constraints__init_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__abstract_mode_constraints__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		fn__check_hlds__abstract_mode_constraints__init_0_0_i2);
MR_def_label(fn__check_hlds__abstract_mode_constraints__init_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__check_hlds__abstract_mode_constraints__init_0_0_i3);
MR_def_label(fn__check_hlds__abstract_mode_constraints__init_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__pair__pair_2_0);
MR_decl_entry(fn__list__cons_2_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module9)
	MR_init_entry1(check_hlds__abstract_mode_constraints__add_constraint_4_0);
	MR_init_label2(check_hlds__abstract_mode_constraints__add_constraint_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__add_constraint_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation);
	}
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		check_hlds__abstract_mode_constraints__add_constraint_4_0_i2);
MR_def_label(check_hlds__abstract_mode_constraints__add_constraint_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__cons_2_0,
		check_hlds__abstract_mode_constraints__add_constraint_4_0_i3);
MR_def_label(check_hlds__abstract_mode_constraints__add_constraint_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__multi_map__add_3_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module10)
	MR_init_entry1(check_hlds__abstract_mode_constraints__add_proc_specific_constraint_5_0);
	MR_init_label2(check_hlds__abstract_mode_constraints__add_proc_specific_constraint_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__add_proc_specific_constraint_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation);
	}
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		check_hlds__abstract_mode_constraints__add_proc_specific_constraint_5_0_i2);
MR_def_label(check_hlds__abstract_mode_constraints__add_proc_specific_constraint_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__multi_map__add_3_0,
		check_hlds__abstract_mode_constraints__add_proc_specific_constraint_5_0_i3);
MR_def_label(check_hlds__abstract_mode_constraints__add_proc_specific_constraint_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__insert_2_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module11)
	MR_init_entry1(check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_0);
	MR_init_label1(check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_0_i2);
MR_def_label(check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__assoc_list__keys_1_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module12)
	MR_init_entry1(fn__check_hlds__abstract_mode_constraints__pred_constraints_to_formulae_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__abstract_mode_constraints__pred_constraints_to_formulae_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__assoc_list__keys_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__multi_map__lookup_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module13)
	MR_init_entry1(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_2_0);
	MR_init_label3(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r3 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__multi_map__lookup_2_0,
		fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_2_0_i2);
MR_def_label(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation);
	MR_np_call_localret_ent(fn__assoc_list__keys_1_0,
		fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_2_0_i3);
MR_def_label(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation);
	MR_np_call_localret_ent(fn__assoc_list__keys_1_0,
		fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_2_0_i4);
MR_def_label(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module14)
	MR_init_entry1(fn__check_hlds__abstract_mode_constraints__pred_constraints_to_formulae_and_annotations_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__abstract_mode_constraints__pred_constraints_to_formulae_and_annotations_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module15)
	MR_init_entry1(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_and_annotations_2_0);
	MR_init_label1(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_and_annotations_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_and_annotations_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__multi_map__lookup_2_0,
		fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_and_annotations_2_0_i2);
MR_def_label(fn__check_hlds__abstract_mode_constraints__pred_constraints_for_proc_to_formulae_and_annotations_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module16)
	MR_init_entry1(fn__check_hlds__abstract_mode_constraints__proc_constraints_to_formulae_and_annotations_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__abstract_mode_constraints__proc_constraints_to_formulae_and_annotations_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(fn__multi_map__lookup_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module17)
	MR_init_entry1(check_hlds__abstract_mode_constraints__equiv_no_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__equiv_no_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__add_constraint_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module18)
	MR_init_entry1(check_hlds__abstract_mode_constraints__equivalent_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__equivalent_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__add_constraint_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module19)
	MR_init_entry1(check_hlds__abstract_mode_constraints__equiv_disj_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__equiv_disj_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__add_constraint_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module20)
	MR_init_entry1(check_hlds__abstract_mode_constraints__at_most_one_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__at_most_one_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__add_constraint_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module21)
	MR_init_entry1(check_hlds__abstract_mode_constraints__not_both_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__not_both_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__add_constraint_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module22)
	MR_init_entry1(check_hlds__abstract_mode_constraints__exactly_one_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__exactly_one_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__add_constraint_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module23)
	MR_init_entry1(check_hlds__abstract_mode_constraints__xor_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__abstract_mode_constraints__xor_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__add_constraint_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module24)
	MR_init_entry1(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0);
	MR_init_label8(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,3,35,7,10,11,12,9,14)
	MR_init_label1(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r4 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0_i35);
	}
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(varset__lookup_name_3_0);
	}
MR_def_label(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0_i7);
MR_def_label(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0_i9);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0_i10);
MR_def_label(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,
		check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0_i11);
MR_def_label(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0_i12);
MR_def_label(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0_i14);
MR_def_label(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0_i14);
MR_def_label(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0_i15);
MR_def_label(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module25)
	MR_init_entry1(check_hlds__abstract_mode_constraints__mc_var_val_to_string_2_0);
	MR_init_label1(check_hlds__abstract_mode_constraints__mc_var_val_to_string_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__abstract_mode_constraints__mc_var_val_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__mc_var_val_to_string_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("no", 2);
	MR_proceed();
MR_def_label(check_hlds__abstract_mode_constraints__mc_var_val_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("yes", 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__error_util__write_error_pieces_5_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module26)
	MR_init_entry1(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0);
	MR_init_label8(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,4,5,6,7,10,11,12,13)
	MR_init_label8(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,15,16,17,18,21,23,24,25)
	MR_init_label8(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,26,22,30,31,29,34,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i15) MR_AND
		MR_LABEL_AP(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i21));
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i5);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__mc_var_val_to_string_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i6);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i7);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i36);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i11);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i12);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("equivalent(", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i13);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__error_util__write_error_pieces_5_0);
	}
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i16);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i17);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i18);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i36);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i23);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i24);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i25);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" <-> disj(", 10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i26);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i36);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i29);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i30);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i31);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("at_most_one(", 12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i36);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i34);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i35);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("exactly_one(", 12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__dump_var_constraint_6_0_i36);
MR_def_label(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__error_util__write_error_pieces_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module27)
	MR_init_entry1(check_hlds__abstract_mode_constraints__dump_constraint_6_0);
	MR_init_label7(check_hlds__abstract_mode_constraints__dump_constraint_6_0,22,27,9,10,26,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__abstract_mode_constraints__dump_constraint_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(check_hlds__abstract_mode_constraints__dump_constraint_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__dump_constraint_6_0_i26);
	}
	if (MR_PTAG_TEST(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__abstract_mode_constraints__dump_constraint_6_0_i27);
	}
	MR_r4 = MR_ctfield(0, MR_r4, 0);
	MR_np_tailcall_ent(check_hlds__abstract_mode_constraints__dump_var_constraint_6_0);
MR_def_label(check_hlds__abstract_mode_constraints__dump_constraint_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(2, MR_r4, 0);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,5);
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		check_hlds__abstract_mode_constraints__dump_constraint_6_0_i9);
MR_def_label(check_hlds__abstract_mode_constraints__dump_constraint_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(check_hlds__abstract_mode_constraints__dump_constraint_6_0_i22);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__abstract_mode_constraints__dump_constraint_6_0_i10);
MR_def_label(check_hlds__abstract_mode_constraints__dump_constraint_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,6);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__error_util__write_error_pieces_5_0);
MR_def_label(check_hlds__abstract_mode_constraints__dump_constraint_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r4, 0);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,3);
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		check_hlds__abstract_mode_constraints__dump_constraint_6_0_i5);
MR_def_label(check_hlds__abstract_mode_constraints__dump_constraint_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(check_hlds__abstract_mode_constraints__dump_constraint_6_0_i22);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__abstract_mode_constraints__dump_constraint_6_0_i6);
MR_def_label(check_hlds__abstract_mode_constraints__dump_constraint_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__error_util__write_error_pieces_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__from_int_1_0);
MR_decl_entry(fn__map__keys_1_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module28)
	MR_init_entry1(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0);
	MR_init_label7(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0_i2);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":\n{\n", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0_i3);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Solution ", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0_i4);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0_i5);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__keys_1_0,
		check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0_i6);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0_i7);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0_i8);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_bindings_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__lookup_name_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module29)
	MR_init_entry1(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0);
	MR_init_label6(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("    ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_binding_5_0_i2);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		check_hlds__abstract_mode_constraints__pretty_print_binding_5_0_i3);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_binding_5_0_i4);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_binding_5_0_i5);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_binding_5_0_i6);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_np_call_localret_ent(io__print_3_0,
		check_hlds__abstract_mode_constraints__pretty_print_binding_5_0_i7);
MR_def_label(check_hlds__abstract_mode_constraints__pretty_print_binding_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module30)
	MR_init_entry1(__Unify___check_hlds__abstract_mode_constraints__constraint_and_annotation_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__abstract_mode_constraints__constraint_and_annotation_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___pair__pair_2_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module31)
	MR_init_entry1(__Compare___check_hlds__abstract_mode_constraints__constraint_and_annotation_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__abstract_mode_constraints__constraint_and_annotation_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_annotation);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module32)
	MR_init_entry1(__Unify___check_hlds__abstract_mode_constraints__constraint_annotation_0_0);
	MR_init_label1(__Unify___check_hlds__abstract_mode_constraints__constraint_annotation_0_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__abstract_mode_constraints__constraint_annotation_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__constraint_annotation_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__constraint_annotation_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module33)
	MR_init_entry1(__Compare___check_hlds__abstract_mode_constraints__constraint_annotation_0_0);
	MR_init_label2(__Compare___check_hlds__abstract_mode_constraints__constraint_annotation_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__abstract_mode_constraints__constraint_annotation_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_annotation_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_annotation_0_0_i2);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__constraint_annotation_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__constraint_annotation_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module34)
	MR_init_entry1(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0);
	MR_init_label4(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0,10,6,26,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i26);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0);
	}
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r2 = MR_ctfield(2, MR_r4, 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__constraint_formula_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module35)
	MR_init_entry1(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0);
	MR_init_label7(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0,3,2,12,6,32,11,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i2);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i12);
	}
	MR_tempr2 = MR_sv(2);
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i11);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0);
	}
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i32);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i9);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0_i11);
	}
	}
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__constraint_formula_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_r2 = MR_const_mask_field(MR_r4, 0);
	MR_r3 = MR_const_mask_field(MR_r5, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module36)
	MR_init_entry1(__Unify___check_hlds__abstract_mode_constraints__constraint_formulae_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__abstract_mode_constraints__constraint_formulae_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
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


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module37)
	MR_init_entry1(__Compare___check_hlds__abstract_mode_constraints__constraint_formulae_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__abstract_mode_constraints__constraint_formulae_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, constraint_formula);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module38)
	MR_init_entry1(__Unify___check_hlds__abstract_mode_constraints__mc_bindings_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__abstract_mode_constraints__mc_bindings_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
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

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module39)
	MR_init_entry1(__Compare___check_hlds__abstract_mode_constraints__mc_bindings_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__abstract_mode_constraints__mc_bindings_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module40)
	MR_init_entry1(__Unify___check_hlds__abstract_mode_constraints__mc_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__abstract_mode_constraints__mc_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module41)
	MR_init_entry1(__Compare___check_hlds__abstract_mode_constraints__mc_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__abstract_mode_constraints__mc_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module42)
	MR_init_entry1(__Unify___check_hlds__abstract_mode_constraints__mc_var_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__abstract_mode_constraints__mc_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module43)
	MR_init_entry1(__Compare___check_hlds__abstract_mode_constraints__mc_var_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__abstract_mode_constraints__mc_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___term__var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module44)
	MR_init_entry1(__Unify___check_hlds__abstract_mode_constraints__mc_varset_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__abstract_mode_constraints__mc_varset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___varset__varset_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module45)
	MR_init_entry1(__Compare___check_hlds__abstract_mode_constraints__mc_varset_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__abstract_mode_constraints__mc_varset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___varset__varset_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module46)
	MR_init_entry1(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0);
	MR_init_label4(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0_i10);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0_i4);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0_i6);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module47)
	MR_init_entry1(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0);
	MR_init_label5(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0_i2);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0_i5);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0_i9);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module48)
	MR_init_entry1(__Unify___check_hlds__abstract_mode_constraints__var_constraint_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__abstract_mode_constraints__var_constraint_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module49)
	MR_init_entry1(__Compare___check_hlds__abstract_mode_constraints__var_constraint_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__abstract_mode_constraints__var_constraint_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__abstract_mode_constraints, mc_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module50)
	MR_init_entry1(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0);
	MR_init_label8(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,6,8,10,14,16,20,23,21)
	MR_init_label3(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,27,52,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i52);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r4 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i6) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i10) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i14) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i20));
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i8);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	MR_r3 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i16);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i23);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i27);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__abstract_mode_constraints__var_constraint_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module51)
	MR_init_entry1(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0);
	MR_init_label8(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,3,2,6,9,11,18,19,21)
	MR_init_label8(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,25,28,29,31,36,38,43,160)
	MR_init_label8(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,46,56,47,69,97,62,78,99)
	MR_init_label1(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,185)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i2);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i6) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i21) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i31) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i46));
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i9) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i160) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i160) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i18));
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_r5;
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i11);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i185);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r5, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r5, 0),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i160);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i99) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i25) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i160) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i28));
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_ctfield(1, MR_r5, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r5, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i29);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r5, 0),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i160);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i99) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i99) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i36) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i43));
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_r5;
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(2, MR_tempr3, 0);
	MR_r3 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i38);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i185);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i99);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i160);
	}
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr3 = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i56);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i185);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i62);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i99);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i69);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r5, 0),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i160);
	}
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i99);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i78);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r5, 0),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0_i97);
	}
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___check_hlds__abstract_mode_constraints__var_constraint_1_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module52)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__abstract_mode_constraints_module53)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__abstract_mode_constraints_maybe_bunch_0(void)
{
	check_hlds__abstract_mode_constraints_module0();
	check_hlds__abstract_mode_constraints_module1();
	check_hlds__abstract_mode_constraints_module2();
	check_hlds__abstract_mode_constraints_module3();
	check_hlds__abstract_mode_constraints_module4();
	check_hlds__abstract_mode_constraints_module5();
	check_hlds__abstract_mode_constraints_module6();
	check_hlds__abstract_mode_constraints_module7();
	check_hlds__abstract_mode_constraints_module8();
	check_hlds__abstract_mode_constraints_module9();
	check_hlds__abstract_mode_constraints_module10();
	check_hlds__abstract_mode_constraints_module11();
	check_hlds__abstract_mode_constraints_module12();
	check_hlds__abstract_mode_constraints_module13();
	check_hlds__abstract_mode_constraints_module14();
	check_hlds__abstract_mode_constraints_module15();
	check_hlds__abstract_mode_constraints_module16();
	check_hlds__abstract_mode_constraints_module17();
	check_hlds__abstract_mode_constraints_module18();
	check_hlds__abstract_mode_constraints_module19();
	check_hlds__abstract_mode_constraints_module20();
	check_hlds__abstract_mode_constraints_module21();
	check_hlds__abstract_mode_constraints_module22();
	check_hlds__abstract_mode_constraints_module23();
	check_hlds__abstract_mode_constraints_module24();
	check_hlds__abstract_mode_constraints_module25();
	check_hlds__abstract_mode_constraints_module26();
	check_hlds__abstract_mode_constraints_module27();
	check_hlds__abstract_mode_constraints_module28();
	check_hlds__abstract_mode_constraints_module29();
	check_hlds__abstract_mode_constraints_module30();
	check_hlds__abstract_mode_constraints_module31();
	check_hlds__abstract_mode_constraints_module32();
	check_hlds__abstract_mode_constraints_module33();
	check_hlds__abstract_mode_constraints_module34();
	check_hlds__abstract_mode_constraints_module35();
	check_hlds__abstract_mode_constraints_module36();
	check_hlds__abstract_mode_constraints_module37();
	check_hlds__abstract_mode_constraints_module38();
	check_hlds__abstract_mode_constraints_module39();
}

static void mercury__check_hlds__abstract_mode_constraints_maybe_bunch_1(void)
{
	check_hlds__abstract_mode_constraints_module40();
	check_hlds__abstract_mode_constraints_module41();
	check_hlds__abstract_mode_constraints_module42();
	check_hlds__abstract_mode_constraints_module43();
	check_hlds__abstract_mode_constraints_module44();
	check_hlds__abstract_mode_constraints_module45();
	check_hlds__abstract_mode_constraints_module46();
	check_hlds__abstract_mode_constraints_module47();
	check_hlds__abstract_mode_constraints_module48();
	check_hlds__abstract_mode_constraints_module49();
	check_hlds__abstract_mode_constraints_module50();
	check_hlds__abstract_mode_constraints_module51();
	check_hlds__abstract_mode_constraints_module52();
	check_hlds__abstract_mode_constraints_module53();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__abstract_mode_constraints__init(void);
void mercury__check_hlds__abstract_mode_constraints__init_type_tables(void);
void mercury__check_hlds__abstract_mode_constraints__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__abstract_mode_constraints__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__abstract_mode_constraints__init_complexity_procs(void);
#endif

void mercury__check_hlds__abstract_mode_constraints__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__abstract_mode_constraints_maybe_bunch_0();
	mercury__check_hlds__abstract_mode_constraints_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1,
		check_hlds__abstract_mode_constraints__var_constraint_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_0,
		check_hlds__abstract_mode_constraints__var_constraint_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0,
		check_hlds__abstract_mode_constraints__pred_p_c_constraints_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_varset_0,
		check_hlds__abstract_mode_constraints__mc_varset_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_var_0,
		check_hlds__abstract_mode_constraints__mc_var_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
		check_hlds__abstract_mode_constraints__mc_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_bindings_0,
		check_hlds__abstract_mode_constraints__mc_bindings_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formulae_0,
		check_hlds__abstract_mode_constraints__constraint_formulae_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0,
		check_hlds__abstract_mode_constraints__constraint_formula_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0,
		check_hlds__abstract_mode_constraints__constraint_annotation_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_and_annotation_0,
		check_hlds__abstract_mode_constraints__constraint_and_annotation_0_0);
	mercury__check_hlds__abstract_mode_constraints__init_debugger();
}

void mercury__check_hlds__abstract_mode_constraints__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_varset_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_var_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_mc_bindings_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formulae_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_formula_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_annotation_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__abstract_mode_constraints__type_ctor_info_constraint_and_annotation_0);
	}
}


void mercury__check_hlds__abstract_mode_constraints__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__abstract_mode_constraints__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__abstract_mode_constraints__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
