/*
** Automatically generated from `prog_mode.m'
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
INIT mercury__parse_tree__prog_mode__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "parse_tree.prog_mode.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "parse_tree.prog_mode.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "parse_tree.prog_mode.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "parse_tree.prog_mode.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 43 "parse_tree.prog_mode.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "parse_tree.prog_mode.c"
#line 48 "parse_tree.prog_mode.c"
#include "parse_tree.prog_mode.mh"

#line 51 "parse_tree.prog_mode.c"
#line 52 "parse_tree.prog_mode.c"
#ifndef PARSE_TREE__PROG_MODE_DECL_GUARD
#define PARSE_TREE__PROG_MODE_DECL_GUARD

#line 56 "parse_tree.prog_mode.c"
#line 57 "parse_tree.prog_mode.c"

#endif
#line 60 "parse_tree.prog_mode.c"

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
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];
MR_decl_label1(parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__382__1_3_0, 2)
MR_decl_label3(parse_tree__prog_mode__alt_list_apply_substitution_3_0, 4,5,3)
MR_decl_label1(parse_tree__prog_mode__di_mode_1_0, 2)
MR_decl_label3(parse_tree__prog_mode__functors_to_cons_ids_2_0, 4,5,2)
MR_decl_label8(parse_tree__prog_mode__get_arg_insts_4_0, 35,5,36,37,12,38,16,39)
MR_decl_label3(parse_tree__prog_mode__get_arg_insts_4_0, 21,2,1)
MR_decl_label4(parse_tree__prog_mode__get_arg_insts_2_3_0, 19,4,3,1)
MR_decl_label2(parse_tree__prog_mode__ground_inst_info_apply_substitution_4_0, 12,4)
MR_decl_label1(parse_tree__prog_mode__in_mode_1_0, 2)
MR_decl_label8(parse_tree__prog_mode__inst_apply_substitution_3_0, 4,5,73,9,10,11,13,15)
MR_decl_label8(parse_tree__prog_mode__inst_apply_substitution_3_0, 14,18,20,19,23,25,72,45)
MR_decl_label7(parse_tree__prog_mode__inst_apply_substitution_3_0, 24,27,29,32,30,35,36)
MR_decl_label8(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0, 141,5,7,8,9,12,15,19)
MR_decl_label8(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0, 17,16,21,25,28,30,31,34)
MR_decl_label8(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0, 38,42,46,50,60,63,102,66)
MR_decl_label4(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0, 68,69,67,1)
MR_decl_label2(parse_tree__prog_mode__inst_list_apply_substitution_3_0, 3,2)
MR_decl_label3(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0, 4,5,3)
MR_decl_label4(parse_tree__prog_mode__inst_lists_to_mode_list_3_0, 3,9,10,8)
MR_decl_label7(parse_tree__prog_mode__inst_name_apply_substitution_3_0, 28,7,26,10,2,27,1)
MR_decl_label2(parse_tree__prog_mode__inst_substitute_arg_list_4_0, 13,4)
MR_decl_label8(parse_tree__prog_mode__insts_to_mode_3_0, 7,2,13,8,19,14,27,20)
MR_decl_label8(parse_tree__prog_mode__insts_to_mode_3_0, 35,28,36,44,52,60,295,70)
MR_decl_label1(parse_tree__prog_mode__insts_to_mode_3_0, 68)
MR_decl_label1(parse_tree__prog_mode__make_std_mode_3_0, 2)
MR_decl_label2(parse_tree__prog_mode__mode_list_apply_substitution_3_0, 3,2)
MR_decl_label6(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0, 6,7,5,8,9,3)
MR_decl_label6(parse_tree__prog_mode__mode_substitute_arg_list_4_0, 4,7,8,6,9,20)
MR_decl_label1(parse_tree__prog_mode__out_mode_1_0, 2)
MR_decl_label1(parse_tree__prog_mode__rename_apart_inst_vars_4_0, 2)
MR_decl_label8(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0, 53,4,5,7,8,69,10,11)
MR_decl_label8(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0, 74,14,70,17,16,71,22,23)
MR_decl_label5(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0, 72,27,25,73,31)
MR_decl_label7(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0, 28,7,26,10,2,27,1)
MR_decl_label4(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0, 4,5,3,6)
MR_decl_label4(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0, 7,8,4,28)
MR_decl_label2(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0, 2,3)
MR_decl_label2(parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0, 12,4)
MR_decl_label8(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0, 4,5,8,49,10,50,12,51)
MR_decl_label8(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0, 15,52,17,53,22,23,20,26)
MR_decl_label1(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0, 46)
MR_decl_label8(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0, 48,8,9,6,12,49,14,15)
MR_decl_label8(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0, 50,17,18,19,51,21,52,23)
MR_decl_label7(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0, 53,25,54,27,56,30,55)
MR_decl_label8(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0, 4,5,3,6,10,11,7,8)
MR_decl_label1(parse_tree__prog_mode__unused_mode_1_0, 2)
MR_decl_label1(parse_tree__prog_mode__uo_mode_1_0, 2)
MR_decl_label2(fn__parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__405__1_2_0, 3,2)
MR_decl_label1(fn__parse_tree__prog_mode__di_mode_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_mode__in_any_mode_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_mode__in_mode_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_mode__in_mode_1_0, 2)
MR_decl_label1(fn__parse_tree__prog_mode__make_std_mode_2_0, 2)
MR_decl_label1(fn__parse_tree__prog_mode__out_any_mode_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_mode__out_mode_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_mode__out_mode_1_0, 2)
MR_decl_label1(fn__parse_tree__prog_mode__unused_mode_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_mode__uo_mode_0_0, 2)
MR_def_extern_entry(fn__parse_tree__prog_mode__make_std_mode_2_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__in_mode_0_0)
MR_def_extern_entry(parse_tree__prog_mode__in_mode_1_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__in_mode_1_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__out_mode_0_0)
MR_def_extern_entry(parse_tree__prog_mode__out_mode_1_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__out_mode_1_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__di_mode_0_0)
MR_def_extern_entry(parse_tree__prog_mode__di_mode_1_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__uo_mode_0_0)
MR_def_extern_entry(parse_tree__prog_mode__uo_mode_1_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__unused_mode_0_0)
MR_def_extern_entry(parse_tree__prog_mode__unused_mode_1_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__any_inst_0_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__in_any_mode_0_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__out_any_mode_0_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__ground_inst_0_0)
MR_def_extern_entry(fn__parse_tree__prog_mode__free_inst_0_0)
MR_def_extern_entry(parse_tree__prog_mode__make_std_mode_3_0)
MR_def_extern_entry(parse_tree__prog_mode__mode_list_apply_substitution_3_0)
MR_decl_static(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0)
MR_decl_static(parse_tree__prog_mode__inst_apply_substitution_3_0)
MR_decl_static(parse_tree__prog_mode__inst_name_apply_substitution_3_0)
MR_decl_static(parse_tree__prog_mode__alt_list_apply_substitution_3_0)
MR_decl_static(parse_tree__prog_mode__ground_inst_info_apply_substitution_4_0)
MR_decl_static(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0)
MR_def_extern_entry(parse_tree__prog_mode__mode_substitute_arg_list_4_0)
MR_def_extern_entry(parse_tree__prog_mode__insts_to_mode_3_0)
MR_def_extern_entry(parse_tree__prog_mode__inst_lists_to_mode_list_3_0)
MR_def_extern_entry(parse_tree__prog_mode__inst_substitute_arg_list_4_0)
MR_def_extern_entry(parse_tree__prog_mode__inst_list_apply_substitution_3_0)
MR_def_extern_entry(parse_tree__prog_mode__rename_apart_inst_vars_4_0)
MR_def_extern_entry(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0)
MR_decl_static(parse_tree__prog_mode__get_arg_insts_2_3_0)
MR_def_extern_entry(parse_tree__prog_mode__get_arg_insts_4_0)
MR_def_extern_entry(parse_tree__prog_mode__functors_to_cons_ids_2_0)
MR_def_extern_entry(parse_tree__prog_mode__mode_id_to_int_2_0)
MR_def_extern_entry(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0)
MR_def_extern_entry(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0)
MR_def_extern_entry(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_0)
MR_decl_static(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_0)
MR_decl_static(parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0)
MR_def_extern_entry(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0)
MR_decl_static(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0)
MR_decl_static(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0)
MR_decl_static(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0)
MR_decl_static(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0)
MR_decl_static(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0)
MR_decl_static(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0)
MR_decl_static(parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__382__1_3_0)
MR_decl_static(fn__parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__405__1_2_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
static const struct mercury_type_1 mercury_common_1[6] =
{
{
{
MR_TAG_COMMON(1,0,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,2),
MR_COMMON(1,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__382__1_3_0_1;
static const struct mercury_type_4 mercury_common_4[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,0),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__382__1_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0_1;
static const struct mercury_type_5 mercury_common_5[10] =
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
},
};

static const struct mercury_type_6 mercury_common_6[10] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0),
0
},
{
MR_COMMON(5,6),
MR_ENTRY_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0),
0
},
{
MR_COMMON(5,7),
MR_ENTRY_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0),
0
},
{
MR_COMMON(5,8),
MR_ENTRY_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0),
0
},
{
MR_COMMON(5,9),
MR_ENTRY_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"rename_apart_inst_vars_in_mode",
3,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
363,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"strip_builtin_qualifiers_from_mode",
2,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
535,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"strip_builtin_qualifiers_from_inst",
2,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
570,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"strip_builtin_qualifiers_from_bound_inst",
2,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
596,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"strip_builtin_qualifiers_from_mode",
2,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
535,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"strip_builtin_qualifiers_from_inst",
2,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
570,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_2 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"strip_builtin_qualifiers_from_inst",
2,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
570,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"strip_builtin_qualifiers_from_inst",
2,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
570,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_2 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"strip_builtin_qualifiers_from_inst",
2,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
570,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"rename_apart_inst_vars_in_inst",
3,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
426,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"lambda_prog_mode_m_382",
3,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
382,
"d4;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_2 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"rename_apart_inst_vars_in_mode",
3,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
389,
"d5;c4;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_3 = {
{
MR_FUNCTION,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"lambda_prog_mode_m_405",
3,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
405,
"d8;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_4 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"rename_apart_inst_vars_in_inst",
3,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
419,
"d10;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"rename_apart_inst_vars_in_inst",
3,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
373,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"strip_builtin_qualifiers_from_inst",
2,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
570,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"strip_builtin_qualifiers_from_inst",
2,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
605,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__382__1_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"rename_apart_inst_vars_in_inst",
3,
0
},
"parse_tree.prog_mode",
"prog_mode.m",
384,
"d4;c4;q;c2;"
};

MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);

MR_BEGIN_MODULE(parse_tree__prog_mode_module0)
	MR_init_entry1(fn__parse_tree__prog_mode__make_std_mode_2_0);
	MR_init_label1(fn__parse_tree__prog_mode__make_std_mode_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__make_std_mode_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_mode__make_std_mode_2_0_i2);
MR_def_label(fn__parse_tree__prog_mode__make_std_mode_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module1)
	MR_init_entry1(fn__parse_tree__prog_mode__in_mode_0_0);
	MR_init_label1(fn__parse_tree__prog_mode__in_mode_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__in_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_mode__in_mode_0_0_i2);
MR_def_label(fn__parse_tree__prog_mode__in_mode_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("in", 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module2)
	MR_init_entry1(parse_tree__prog_mode__in_mode_1_0);
	MR_init_label1(parse_tree__prog_mode__in_mode_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__in_mode_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__in_mode_1_0_i2);
MR_def_label(parse_tree__prog_mode__in_mode_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("in", 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module3)
	MR_init_entry1(fn__parse_tree__prog_mode__in_mode_1_0);
	MR_init_label1(fn__parse_tree__prog_mode__in_mode_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__in_mode_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_mode__in_mode_1_0_i2);
MR_def_label(fn__parse_tree__prog_mode__in_mode_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("in", 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module4)
	MR_init_entry1(fn__parse_tree__prog_mode__out_mode_0_0);
	MR_init_label1(fn__parse_tree__prog_mode__out_mode_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__out_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_mode__out_mode_0_0_i2);
MR_def_label(fn__parse_tree__prog_mode__out_mode_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("out", 3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module5)
	MR_init_entry1(parse_tree__prog_mode__out_mode_1_0);
	MR_init_label1(parse_tree__prog_mode__out_mode_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__out_mode_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__out_mode_1_0_i2);
MR_def_label(parse_tree__prog_mode__out_mode_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("out", 3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module6)
	MR_init_entry1(fn__parse_tree__prog_mode__out_mode_1_0);
	MR_init_label1(fn__parse_tree__prog_mode__out_mode_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__out_mode_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_mode__out_mode_1_0_i2);
MR_def_label(fn__parse_tree__prog_mode__out_mode_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("out", 3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module7)
	MR_init_entry1(fn__parse_tree__prog_mode__di_mode_0_0);
	MR_init_label1(fn__parse_tree__prog_mode__di_mode_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__di_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_mode__di_mode_0_0_i2);
MR_def_label(fn__parse_tree__prog_mode__di_mode_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("di", 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module8)
	MR_init_entry1(parse_tree__prog_mode__di_mode_1_0);
	MR_init_label1(parse_tree__prog_mode__di_mode_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__di_mode_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__di_mode_1_0_i2);
MR_def_label(parse_tree__prog_mode__di_mode_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("di", 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module9)
	MR_init_entry1(fn__parse_tree__prog_mode__uo_mode_0_0);
	MR_init_label1(fn__parse_tree__prog_mode__uo_mode_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__uo_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_mode__uo_mode_0_0_i2);
MR_def_label(fn__parse_tree__prog_mode__uo_mode_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("uo", 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module10)
	MR_init_entry1(parse_tree__prog_mode__uo_mode_1_0);
	MR_init_label1(parse_tree__prog_mode__uo_mode_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__uo_mode_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__uo_mode_1_0_i2);
MR_def_label(parse_tree__prog_mode__uo_mode_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("uo", 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module11)
	MR_init_entry1(fn__parse_tree__prog_mode__unused_mode_0_0);
	MR_init_label1(fn__parse_tree__prog_mode__unused_mode_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__unused_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_mode__unused_mode_0_0_i2);
MR_def_label(fn__parse_tree__prog_mode__unused_mode_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("unused", 6);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module12)
	MR_init_entry1(parse_tree__prog_mode__unused_mode_1_0);
	MR_init_label1(parse_tree__prog_mode__unused_mode_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__unused_mode_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__unused_mode_1_0_i2);
MR_def_label(parse_tree__prog_mode__unused_mode_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("unused", 6);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module13)
	MR_init_entry1(fn__parse_tree__prog_mode__any_inst_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__any_inst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module14)
	MR_init_entry1(fn__parse_tree__prog_mode__in_any_mode_0_0);
	MR_init_label1(fn__parse_tree__prog_mode__in_any_mode_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__in_any_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_mode__in_any_mode_0_0_i2);
MR_def_label(fn__parse_tree__prog_mode__in_any_mode_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("in", 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module15)
	MR_init_entry1(fn__parse_tree__prog_mode__out_any_mode_0_0);
	MR_init_label1(fn__parse_tree__prog_mode__out_any_mode_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__out_any_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_mode__out_any_mode_0_0_i2);
MR_def_label(fn__parse_tree__prog_mode__out_any_mode_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("out", 3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module16)
	MR_init_entry1(fn__parse_tree__prog_mode__ground_inst_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__ground_inst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module17)
	MR_init_entry1(fn__parse_tree__prog_mode__free_inst_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mode__free_inst_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module18)
	MR_init_entry1(parse_tree__prog_mode__make_std_mode_3_0);
	MR_init_label1(parse_tree__prog_mode__make_std_mode_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__make_std_mode_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__make_std_mode_3_0_i2);
MR_def_label(parse_tree__prog_mode__make_std_mode_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(parse_tree__prog_mode_module19)
	MR_init_entry1(parse_tree__prog_mode__mode_list_apply_substitution_3_0);
	MR_init_label2(parse_tree__prog_mode__mode_list_apply_substitution_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__mode_list_apply_substitution_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		parse_tree__prog_mode__mode_list_apply_substitution_3_0_i3);
MR_def_label(parse_tree__prog_mode__mode_list_apply_substitution_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__mode_list_apply_substitution_3_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_mode__mode_list_apply_substitution_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module20)
	MR_init_entry1(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0);
	MR_init_label3(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_apply_substitution_3_0,
		parse_tree__prog_mode__inst_list_apply_substitution_2_3_0_i4);
MR_def_label(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0,
		parse_tree__prog_mode__inst_list_apply_substitution_2_3_0_i5);
MR_def_label(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__singleton_set_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(parse_tree__prog_mode_module21)
	MR_init_entry1(parse_tree__prog_mode__inst_apply_substitution_3_0);
	MR_init_label8(parse_tree__prog_mode__inst_apply_substitution_3_0,4,5,73,9,10,11,13,15)
	MR_init_label8(parse_tree__prog_mode__inst_apply_substitution_3_0,14,18,20,19,23,25,72,45)
	MR_init_label7(parse_tree__prog_mode__inst_apply_substitution_3_0,24,27,29,32,30,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__inst_apply_substitution_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(parse_tree__prog_mode__inst_apply_substitution_3_0_i4) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_apply_substitution_3_0_i72) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_apply_substitution_3_0_i72) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_apply_substitution_3_0_i73));
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_apply_substitution_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(parse_tree__prog_mode__inst_apply_substitution_3_0_i9) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_apply_substitution_3_0_i11) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_apply_substitution_3_0_i13) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_apply_substitution_3_0_i18) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_apply_substitution_3_0_i29) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_apply_substitution_3_0_i35));
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_call_localret_ent(parse_tree__prog_mode__alt_list_apply_substitution_3_0,
		parse_tree__prog_mode__inst_apply_substitution_3_0_i10);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_sv(1), 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_mode__ground_inst_info_apply_substitution_4_0);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r5 = MR_ctfield(3, MR_sv(1), 1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_mode__inst_apply_substitution_3_0_i15);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_apply_substitution_3_0_i14);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_0,
		parse_tree__prog_mode__inst_apply_substitution_3_0_i20);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_apply_substitution_3_0_i19);
	}
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_GOTO_LAB(parse_tree__prog_mode__inst_apply_substitution_3_0_i23);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_mode.m", 11);
	MR_r2 = (MR_Word) MR_string_const("inst_apply_substitution: multiple inst_vars found", 49);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		parse_tree__prog_mode__inst_apply_substitution_3_0_i23);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_mode__inst_apply_substitution_3_0_i25);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_apply_substitution_3_0_i24);
	}
	MR_GOTO_LAB(parse_tree__prog_mode__inst_apply_substitution_3_0_i45);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(parse_tree__prog_mode__inst_apply_substitution_3_0,
		parse_tree__prog_mode__inst_apply_substitution_3_0_i27);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_name_apply_substitution_3_0,
		parse_tree__prog_mode__inst_apply_substitution_3_0_i32);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_apply_substitution_3_0_i30);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0,
		parse_tree__prog_mode__inst_apply_substitution_3_0_i36);
MR_def_label(parse_tree__prog_mode__inst_apply_substitution_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module22)
	MR_init_entry1(parse_tree__prog_mode__inst_name_apply_substitution_3_0);
	MR_init_label7(parse_tree__prog_mode__inst_name_apply_substitution_3_0,28,7,26,10,2,27,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__inst_name_apply_substitution_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_name_apply_substitution_3_0_i26);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(parse_tree__prog_mode__inst_name_apply_substitution_3_0_i27) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_name_apply_substitution_3_0_i27) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_name_apply_substitution_3_0_i27) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_name_apply_substitution_3_0_i27) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_name_apply_substitution_3_0_i2) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_name_apply_substitution_3_0_i28));
MR_def_label(parse_tree__prog_mode__inst_name_apply_substitution_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_localcall_lab(parse_tree__prog_mode__inst_name_apply_substitution_3_0,
		parse_tree__prog_mode__inst_name_apply_substitution_3_0_i7);
MR_def_label(parse_tree__prog_mode__inst_name_apply_substitution_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_name_apply_substitution_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_mode__inst_name_apply_substitution_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_name_apply_substitution_3_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0,
		parse_tree__prog_mode__inst_name_apply_substitution_3_0_i10);
MR_def_label(parse_tree__prog_mode__inst_name_apply_substitution_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_mode__inst_name_apply_substitution_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_mode__inst_name_apply_substitution_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_mode__inst_name_apply_substitution_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module23)
	MR_init_entry1(parse_tree__prog_mode__alt_list_apply_substitution_3_0);
	MR_init_label3(parse_tree__prog_mode__alt_list_apply_substitution_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__alt_list_apply_substitution_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__alt_list_apply_substitution_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0,
		parse_tree__prog_mode__alt_list_apply_substitution_3_0_i4);
MR_def_label(parse_tree__prog_mode__alt_list_apply_substitution_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(parse_tree__prog_mode__alt_list_apply_substitution_3_0,
		parse_tree__prog_mode__alt_list_apply_substitution_3_0_i5);
MR_def_label(parse_tree__prog_mode__alt_list_apply_substitution_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_mode__alt_list_apply_substitution_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module24)
	MR_init_entry1(parse_tree__prog_mode__ground_inst_info_apply_substitution_4_0);
	MR_init_label2(parse_tree__prog_mode__ground_inst_info_apply_substitution_4_0,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__ground_inst_info_apply_substitution_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__ground_inst_info_apply_substitution_4_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_mode__ground_inst_info_apply_substitution_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__mode_list_apply_substitution_3_0,
		parse_tree__prog_mode__ground_inst_info_apply_substitution_4_0_i4);
MR_def_label(parse_tree__prog_mode__ground_inst_info_apply_substitution_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module25)
	MR_init_entry1(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0);
	MR_init_label6(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0,6,7,5,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_apply_substitution_3_0,
		parse_tree__prog_mode__mode_list_apply_substitution_2_3_0_i6);
MR_def_label(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_apply_substitution_3_0,
		parse_tree__prog_mode__mode_list_apply_substitution_2_3_0_i7);
MR_def_label(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0,
		parse_tree__prog_mode__mode_list_apply_substitution_2_3_0_i9);
MR_def_label(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0,
		parse_tree__prog_mode__mode_list_apply_substitution_2_3_0_i8);
MR_def_label(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0,
		parse_tree__prog_mode__mode_list_apply_substitution_2_3_0_i9);
MR_def_label(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_mode__mode_list_apply_substitution_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(parse_tree__prog_mode_module26)
	MR_init_entry1(parse_tree__prog_mode__mode_substitute_arg_list_4_0);
	MR_init_label6(parse_tree__prog_mode__mode_substitute_arg_list_4_0,4,7,8,6,9,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__mode_substitute_arg_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__mode_substitute_arg_list_4_0_i20);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		parse_tree__prog_mode__mode_substitute_arg_list_4_0_i4);
MR_def_label(parse_tree__prog_mode__mode_substitute_arg_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__mode_substitute_arg_list_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_apply_substitution_3_0,
		parse_tree__prog_mode__mode_substitute_arg_list_4_0_i7);
MR_def_label(parse_tree__prog_mode__mode_substitute_arg_list_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_apply_substitution_3_0,
		parse_tree__prog_mode__mode_substitute_arg_list_4_0_i8);
MR_def_label(parse_tree__prog_mode__mode_substitute_arg_list_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_mode__mode_substitute_arg_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0,
		parse_tree__prog_mode__mode_substitute_arg_list_4_0_i9);
MR_def_label(parse_tree__prog_mode__mode_substitute_arg_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_mode__mode_substitute_arg_list_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(parse_tree__prog_mode_module27)
	MR_init_entry1(parse_tree__prog_mode__insts_to_mode_3_0);
	MR_init_label8(parse_tree__prog_mode__insts_to_mode_3_0,7,2,13,8,19,14,27,20)
	MR_init_label8(parse_tree__prog_mode__insts_to_mode_3_0,35,28,36,44,52,60,295,70)
	MR_init_label1(parse_tree__prog_mode__insts_to_mode_3_0,68)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__insts_to_mode_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i2);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i2);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__insts_to_mode_3_0_i7);
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("out", 3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i8);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i8);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__insts_to_mode_3_0_i13);
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("uo", 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i14);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__insts_to_mode_3_0_i19);
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("muo", 3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i20);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i20);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i20);
	}
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i20);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i20);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__insts_to_mode_3_0_i27);
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("in", 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i28);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i28);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i28);
	}
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,3)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i28);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i28);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__insts_to_mode_3_0_i35);
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("di", 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i36);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i36);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i36);
	}
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,4)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i36);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("mdi", 3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(parse_tree__prog_mode__make_std_mode_3_0);
	}
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i44);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i44);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i44);
	}
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i44);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i44);
	}
	MR_r1 = (MR_Word) MR_string_const("ui", 2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(parse_tree__prog_mode__make_std_mode_3_0);
	}
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i52);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i52);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i52);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i52);
	}
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i52);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i52);
	}
	MR_r1 = (MR_Word) MR_string_const("mdi", 3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(parse_tree__prog_mode__make_std_mode_3_0);
	}
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i60);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("out", 3);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_mode__make_std_mode_3_0);
	}
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i295);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr1,3)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i295);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i295);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("di", 2);
	MR_np_tailcall_ent(parse_tree__prog_mode__make_std_mode_3_0);
	}
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		parse_tree__prog_mode__insts_to_mode_3_0_i70);
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__insts_to_mode_3_0_i68);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("in", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(parse_tree__prog_mode__make_std_mode_3_0);
	}
MR_def_label(parse_tree__prog_mode__insts_to_mode_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module28)
	MR_init_entry1(parse_tree__prog_mode__inst_lists_to_mode_list_3_0);
	MR_init_label4(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,3,9,10,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__inst_lists_to_mode_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_lists_to_mode_list_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_lists_to_mode_list_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_lists_to_mode_list_3_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_mode__insts_to_mode_3_0,
		parse_tree__prog_mode__inst_lists_to_mode_list_3_0_i9);
MR_def_label(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,
		parse_tree__prog_mode__inst_lists_to_mode_list_3_0_i10);
MR_def_label(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_mode.m", 11);
	MR_r2 = (MR_Word) MR_string_const("inst_lists_to_mode_list: length mismatch", 40);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module29)
	MR_init_entry1(parse_tree__prog_mode__inst_substitute_arg_list_4_0);
	MR_init_label2(parse_tree__prog_mode__inst_substitute_arg_list_4_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__inst_substitute_arg_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_substitute_arg_list_4_0_i13);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(parse_tree__prog_mode__inst_substitute_arg_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		parse_tree__prog_mode__inst_substitute_arg_list_4_0_i4);
MR_def_label(parse_tree__prog_mode__inst_substitute_arg_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_mode__inst_apply_substitution_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module30)
	MR_init_entry1(parse_tree__prog_mode__inst_list_apply_substitution_3_0);
	MR_init_label2(parse_tree__prog_mode__inst_list_apply_substitution_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__inst_list_apply_substitution_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		parse_tree__prog_mode__inst_list_apply_substitution_3_0_i3);
MR_def_label(parse_tree__prog_mode__inst_list_apply_substitution_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_list_apply_substitution_3_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_mode__inst_list_apply_substitution_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(parse_tree__prog_mode__inst_list_apply_substitution_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__merge_subst_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(parse_tree__prog_mode_module31)
	MR_init_entry1(parse_tree__prog_mode__rename_apart_inst_vars_4_0);
	MR_init_label1(parse_tree__prog_mode__rename_apart_inst_vars_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__rename_apart_inst_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__merge_subst_4_0,
		parse_tree__prog_mode__rename_apart_inst_vars_4_0_i2);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(parse_tree__prog_mode_module32)
	MR_init_entry1(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0);
	MR_init_label8(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,141,5,7,8,9,12,15,19)
	MR_init_label8(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,17,16,21,25,28,30,31,34)
	MR_init_label8(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,38,42,46,50,60,63,102,66)
	MR_init_label4(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,68,69,67,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__inst_contains_unconstrained_var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i5) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i12) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i102) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i1) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i25) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i66));
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i67);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__member_2_1,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i7);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i8);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i9);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i67);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i67);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i15);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i17);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i19);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_localcall_lab(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i21);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i21);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i16);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i21);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i28) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i34) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i42) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i50));
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i67);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(list__member_2_1,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i30);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i31);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i38);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i102);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i141);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 2);
	MR_r1 = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_localcall_lab(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i46);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i102);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i141);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i60) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i60) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i60) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i60) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i1) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i63));
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_ctfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i141);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_ctfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i141);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i67);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__member_2_1,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i68);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,
		parse_tree__prog_mode__inst_contains_unconstrained_var_1_0_i69);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
MR_def_label(parse_tree__prog_mode__inst_contains_unconstrained_var_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(parse_tree__prog_mode_module33)
	MR_init_entry1(parse_tree__prog_mode__get_arg_insts_2_3_0);
	MR_init_label4(parse_tree__prog_mode__get_arg_insts_2_3_0,19,4,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__get_arg_insts_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_mode__get_arg_insts_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__get_arg_insts_2_3_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		parse_tree__prog_mode__get_arg_insts_2_3_0_i4);
MR_def_label(parse_tree__prog_mode__get_arg_insts_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__get_arg_insts_2_3_0_i3);
	}
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_mode__get_arg_insts_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__prog_mode__get_arg_insts_2_3_0_i19);
MR_def_label(parse_tree__prog_mode__get_arg_insts_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__duplicate_3_0);

MR_BEGIN_MODULE(parse_tree__prog_mode_module34)
	MR_init_entry1(parse_tree__prog_mode__get_arg_insts_4_0);
	MR_init_label8(parse_tree__prog_mode__get_arg_insts_4_0,35,5,36,37,12,38,16,39)
	MR_init_label3(parse_tree__prog_mode__get_arg_insts_4_0,21,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__get_arg_insts_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(parse_tree__prog_mode__get_arg_insts_4_0_i35) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__get_arg_insts_4_0_i36) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__get_arg_insts_4_0_i37) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__get_arg_insts_4_0_i12));
MR_def_label(parse_tree__prog_mode__get_arg_insts_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__get_arg_insts_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(list__duplicate_3_0,
		parse_tree__prog_mode__get_arg_insts_4_0_i21);
MR_def_label(parse_tree__prog_mode__get_arg_insts_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(list__duplicate_3_0,
		parse_tree__prog_mode__get_arg_insts_4_0_i21);
MR_def_label(parse_tree__prog_mode__get_arg_insts_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(list__duplicate_3_0,
		parse_tree__prog_mode__get_arg_insts_4_0_i21);
MR_def_label(parse_tree__prog_mode__get_arg_insts_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(list__duplicate_3_0,
		parse_tree__prog_mode__get_arg_insts_4_0_i21);
MR_def_label(parse_tree__prog_mode__get_arg_insts_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(parse_tree__prog_mode__get_arg_insts_4_0_i38) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__get_arg_insts_4_0_i39) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__get_arg_insts_4_0_i1) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__get_arg_insts_4_0_i1) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__get_arg_insts_4_0_i1) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__get_arg_insts_4_0_i1));
MR_def_label(parse_tree__prog_mode__get_arg_insts_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_mode__get_arg_insts_2_3_0,
		parse_tree__prog_mode__get_arg_insts_4_0_i16);
MR_def_label(parse_tree__prog_mode__get_arg_insts_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_mode__get_arg_insts_4_0_i2);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(list__duplicate_3_0,
		parse_tree__prog_mode__get_arg_insts_4_0_i21);
MR_def_label(parse_tree__prog_mode__get_arg_insts_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		parse_tree__prog_mode__get_arg_insts_4_0_i21);
MR_def_label(parse_tree__prog_mode__get_arg_insts_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(parse_tree__prog_mode__get_arg_insts_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(parse_tree__prog_mode__get_arg_insts_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module35)
	MR_init_entry1(parse_tree__prog_mode__functors_to_cons_ids_2_0);
	MR_init_label3(parse_tree__prog_mode__functors_to_cons_ids_2_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__functors_to_cons_ids_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__functors_to_cons_ids_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(parse_tree__prog_mode__functors_to_cons_ids_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(parse_tree__prog_mode__functors_to_cons_ids_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(parse_tree__prog_mode__functors_to_cons_ids_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module36)
	MR_init_entry1(parse_tree__prog_mode__mode_id_to_int_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__mode_id_to_int_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(parse_tree__prog_mode_module37)
	MR_init_entry1(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0);
	MR_init_label4(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0,7,8,4,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0_i28);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0_i7);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0_i8);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module38)
	MR_init_entry1(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_np_tailcall_ent(list__map_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module39)
	MR_init_entry1(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_np_tailcall_ent(list__map_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module40)
	MR_init_entry1(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_np_tailcall_ent(list__map_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module41)
	MR_init_entry1(parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0);
	MR_init_label2(parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0_i12);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,3);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0_i4);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module42)
	MR_init_entry1(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0);
	MR_init_label8(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,4,5,8,49,10,50,12,51)
	MR_init_label8(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,15,52,17,53,22,23,20,26)
	MR_init_label1(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i4) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i46) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i46) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i8));
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i49) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i50) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i46) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i51) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i52) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i53));
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_list_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i10);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_ground_inst_info_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i12);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,12)
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
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i15);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i17);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_sv(1) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i20);
	}
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i22);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i23);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i20);
	}
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i26);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0_i26);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module43)
	MR_init_entry1(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0);
	MR_init_label8(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,48,8,9,6,12,49,14,15)
	MR_init_label8(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,50,17,18,19,51,21,52,23)
	MR_init_label7(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,53,25,54,27,56,30,55)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i48) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i49) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i50) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i19));
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i6);
	}
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i8);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i9);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i6);
	}
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i12);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i12);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i14);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i15);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_sv(2) = MR_ctfield(2, MR_r1, 2);
	MR_sv(3) = MR_ctfield(2, MR_r1, 3);
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i17);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i18);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i51) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i52) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i53) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i54) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i55) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i56));
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_localcall_lab(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i21);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_localcall_lab(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i23);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_localcall_lab(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i25);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_localcall_lab(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i27);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0_i30);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_name_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module44)
	MR_init_entry1(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0);
	MR_init_label7(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0,28,7,26,10,2,27,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_i26);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_i27) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_i27) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_i27) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_i27) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_i2) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_i28));
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_localcall_lab(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_i7);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0_i10);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__map_2_0);

MR_BEGIN_MODULE(parse_tree__prog_mode_module45)
	MR_init_entry1(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0);
	MR_init_label8(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,53,4,5,7,8,69,10,11)
	MR_init_label8(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,74,14,70,17,16,71,22,23)
	MR_init_label5(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,72,27,25,73,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i4) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i7) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i7) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i8));
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i69) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i11) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i70) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i71) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i72) MR_AND
		MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i73));
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__382__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r4 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i10);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i74);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_ctfield(3, MR_tempr1, 1);
	MR_tfield(3, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_tempr2 = MR_ctfield(1, MR_r5, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i14);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r5 = MR_ctfield(3, MR_sv(1), 1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i17);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i16);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i16);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_localcall_lab(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i22);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__405__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__set__map_2_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i23);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_name_3_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i27);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i25);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i53);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0_i31);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module46)
	MR_init_entry1(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0);
	MR_init_label4(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0,4,5,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0_i4);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0_i5);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0_i6);
MR_def_label(parse_tree__prog_mode__rename_apart_inst_vars_in_mode_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module47)
	MR_init_entry1(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0);
	MR_init_label8(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0,4,5,3,6,10,11,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0_i4);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0_i5);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,8);
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0_i6);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0_i8);
	}
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0_i10);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0_i11);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module48)
	MR_init_entry1(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0);
	MR_init_label2(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0_i2);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,9);
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0_i3);
MR_def_label(parse_tree__prog_mode__strip_builtin_qualifiers_from_bound_inst_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module49)
	MR_init_entry1(parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__382__1_3_0);
	MR_init_label1(parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__382__1_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__382__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_mode__rename_apart_inst_vars_in_inst_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__382__1_3_0_i2);
MR_def_label(parse_tree__prog_mode__IntroducedFrom__pred__rename_apart_inst_vars_in_inst__382__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mode_module50)
	MR_init_entry1(fn__parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__405__1_2_0);
	MR_init_label2(fn__parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__405__1_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__405__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__405__1_2_0_i3);
MR_def_label(fn__parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__405__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__405__1_2_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__405__1_2_0_i2);
	}
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__parse_tree__prog_mode__IntroducedFrom__func__rename_apart_inst_vars_in_inst__405__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__prog_mode_maybe_bunch_0(void)
{
	parse_tree__prog_mode_module0();
	parse_tree__prog_mode_module1();
	parse_tree__prog_mode_module2();
	parse_tree__prog_mode_module3();
	parse_tree__prog_mode_module4();
	parse_tree__prog_mode_module5();
	parse_tree__prog_mode_module6();
	parse_tree__prog_mode_module7();
	parse_tree__prog_mode_module8();
	parse_tree__prog_mode_module9();
	parse_tree__prog_mode_module10();
	parse_tree__prog_mode_module11();
	parse_tree__prog_mode_module12();
	parse_tree__prog_mode_module13();
	parse_tree__prog_mode_module14();
	parse_tree__prog_mode_module15();
	parse_tree__prog_mode_module16();
	parse_tree__prog_mode_module17();
	parse_tree__prog_mode_module18();
	parse_tree__prog_mode_module19();
	parse_tree__prog_mode_module20();
	parse_tree__prog_mode_module21();
	parse_tree__prog_mode_module22();
	parse_tree__prog_mode_module23();
	parse_tree__prog_mode_module24();
	parse_tree__prog_mode_module25();
	parse_tree__prog_mode_module26();
	parse_tree__prog_mode_module27();
	parse_tree__prog_mode_module28();
	parse_tree__prog_mode_module29();
	parse_tree__prog_mode_module30();
	parse_tree__prog_mode_module31();
	parse_tree__prog_mode_module32();
	parse_tree__prog_mode_module33();
	parse_tree__prog_mode_module34();
	parse_tree__prog_mode_module35();
	parse_tree__prog_mode_module36();
	parse_tree__prog_mode_module37();
	parse_tree__prog_mode_module38();
	parse_tree__prog_mode_module39();
}

static void mercury__parse_tree__prog_mode_maybe_bunch_1(void)
{
	parse_tree__prog_mode_module40();
	parse_tree__prog_mode_module41();
	parse_tree__prog_mode_module42();
	parse_tree__prog_mode_module43();
	parse_tree__prog_mode_module44();
	parse_tree__prog_mode_module45();
	parse_tree__prog_mode_module46();
	parse_tree__prog_mode_module47();
	parse_tree__prog_mode_module48();
	parse_tree__prog_mode_module49();
	parse_tree__prog_mode_module50();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_mode__init(void);
void mercury__parse_tree__prog_mode__init_type_tables(void);
void mercury__parse_tree__prog_mode__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_mode__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_mode__init_complexity_procs(void);
#endif

void mercury__parse_tree__prog_mode__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_mode_maybe_bunch_0();
	mercury__parse_tree__prog_mode_maybe_bunch_1();
	mercury__parse_tree__prog_mode__init_debugger();
}

void mercury__parse_tree__prog_mode__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__parse_tree__prog_mode__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_mode__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_mode__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
