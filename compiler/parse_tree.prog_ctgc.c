/*
** Automatically generated from `prog_ctgc.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__parse_tree__prog_ctgc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "parse_tree.prog_ctgc.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "parse_tree.prog_ctgc.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "parse_tree.prog_ctgc.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "parse_tree.prog_ctgc.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "parse_tree.prog_ctgc.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "parse_tree.prog_ctgc.c"
#line 48 "parse_tree.prog_ctgc.c"
#include "parse_tree.prog_ctgc.mh"

#line 51 "parse_tree.prog_ctgc.c"
#line 52 "parse_tree.prog_ctgc.c"
#ifndef PARSE_TREE__PROG_CTGC_DECL_GUARD
#define PARSE_TREE__PROG_CTGC_DECL_GUARD

#line 56 "parse_tree.prog_ctgc.c"
#line 57 "parse_tree.prog_ctgc.c"

#endif
#line 60 "parse_tree.prog_ctgc.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];
MR_decl_label7(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0, 38,5,14,7,8,10,11)
MR_decl_label8(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0, 39,5,11,12,13,15,9,10)
MR_decl_label4(parse_tree__prog_ctgc__get_list_term_arguments_2_0, 43,10,42,1)
MR_decl_label8(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0, 119,10,11,12,14,118,23,25)
MR_decl_label8(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0, 27,29,30,31,34,37,42,117)
MR_decl_label1(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0, 1)
MR_decl_label8(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0, 15,16,18,21,30,31,33,36)
MR_decl_label1(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0, 1)
MR_decl_label3(parse_tree__prog_ctgc__print_datastruct_5_0, 2,6,7)
MR_decl_label2(parse_tree__prog_ctgc__print_datastructs_5_0, 2,4)
MR_decl_label8(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0, 37,5,6,15,8,9,11,12)
MR_decl_label1(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0, 19)
MR_decl_label3(parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_0, 16,5,6)
MR_decl_label4(parse_tree__prog_ctgc__print_selector_4_0, 20,5,6,19)
MR_decl_label7(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0, 2,3,4,5,6,7,8)
MR_decl_label8(parse_tree__prog_ctgc__print_structure_sharing_9_0, 2,6,8,9,11,17,10,12)
MR_decl_label8(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0, 2,8,10,12,13,15,6,7)
MR_decl_label4(parse_tree__prog_ctgc__print_structure_sharing_pair_5_0, 2,3,4,5)
MR_decl_label2(parse_tree__prog_ctgc__rename_datastruct_4_0, 3,5)
MR_decl_label3(parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0, 3,4,5)
MR_decl_label3(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0, 8,22,5)
MR_decl_label2(parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0, 21,7)
MR_decl_label2(parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0, 2,3)
MR_decl_label2(parse_tree__prog_ctgc__rename_unit_selector_3_0, 13,4)
MR_decl_label8(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0, 3,46,9,12,10,16,19,20)
MR_decl_label3(fn__parse_tree__prog_ctgc__parse_datastruct_1_0, 10,11,2)
MR_decl_label5(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0, 10,11,5,13,2)
MR_decl_label4(fn__parse_tree__prog_ctgc__parse_selector_1_0, 10,11,5,2)
MR_decl_label6(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0, 11,12,13,14,5,2)
MR_decl_label5(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0, 10,11,5,13,2)
MR_decl_label5(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0, 5,7,13,9,2)
MR_decl_label4(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0, 6,11,12,2)
MR_decl_label5(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0, 7,6,11,9,2)
MR_decl_label3(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0, 9,10,2)
MR_decl_label8(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0, 12,15,11,23,28,33,5,48)
MR_decl_label4(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0, 49,47,43,2)
MR_decl_label6(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0, 4,5,6,7,3,16)
MR_def_extern_entry(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0)
MR_def_extern_entry(fn__parse_tree__prog_ctgc__parse_selector_1_0)
MR_def_extern_entry(fn__parse_tree__prog_ctgc__parse_datastruct_1_0)
MR_def_extern_entry(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0)
MR_def_extern_entry(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0)
MR_def_extern_entry(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0)
MR_decl_static(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0)
MR_def_extern_entry(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0)
MR_def_extern_entry(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0)
MR_def_extern_entry(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0)
MR_decl_static(parse_tree__prog_ctgc__get_list_term_arguments_2_0)
MR_def_extern_entry(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0)
MR_def_extern_entry(parse_tree__prog_ctgc__print_selector_4_0)
MR_def_extern_entry(parse_tree__prog_ctgc__print_datastruct_5_0)
MR_def_extern_entry(parse_tree__prog_ctgc__print_datastructs_5_0)
MR_def_extern_entry(parse_tree__prog_ctgc__print_structure_sharing_pair_5_0)
MR_def_extern_entry(parse_tree__prog_ctgc__print_structure_sharing_9_0)
MR_def_extern_entry(parse_tree__prog_ctgc__print_structure_sharing_as_list_5_0)
MR_def_extern_entry(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0)
MR_def_extern_entry(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0)
MR_def_extern_entry(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0)
MR_def_extern_entry(parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_0)
MR_def_extern_entry(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0)
MR_def_extern_entry(parse_tree__prog_ctgc__rename_unit_selector_3_0)
MR_def_extern_entry(parse_tree__prog_ctgc__rename_selector_3_0)
MR_def_extern_entry(parse_tree__prog_ctgc__rename_datastruct_4_0)
MR_def_extern_entry(fn__parse_tree__prog_ctgc__rename_datastruct_3_0)
MR_def_extern_entry(parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0)
MR_def_extern_entry(parse_tree__prog_ctgc__rename_structure_sharing_4_0)
MR_def_extern_entry(parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0)
MR_def_extern_entry(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0)
MR_def_extern_entry(parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0)
MR_def_extern_entry(parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_0)
MR_def_extern_entry(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0)
MR_decl_static(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0)
MR_decl_static(parse_tree__prog_ctgc__mer_type_to_typesel_2_0)
MR_decl_static(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0)
MR_decl_static(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0)
MR_decl_static(parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__615__1_3_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const("from parse_structure_sharing_domain", 35)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_1 mercury_common_1[10] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
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
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,8),
MR_COMMON(1,8)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_2;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,3),
MR_COMMON(2,1)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector)
},
};

static const struct mercury_type_4 mercury_common_4[5] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__615__1_3_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__615__1_3_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(parse_tree__prog_ctgc__mer_type_to_typesel_2_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(parse_tree__prog_ctgc__mer_type_to_typesel_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__print_selector_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_top_feedback_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_selector_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_datastruct_4_0_1;
static const struct mercury_type_5 mercury_common_5[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__print_selector_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, top_feedback),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, top_feedback),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__rename_selector_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,2),
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector),
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__rename_datastruct_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,2),
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector),
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector)
}
},
};

static const struct mercury_type_6 mercury_common_6[3] =
{
{
MR_string_const("]", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const(", ", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const(")", 1),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__print_datastructs_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__print_structure_sharing_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_1;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__print_datastructs_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,5),
MR_COMMON(1,4),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__print_structure_sharing_9_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,5),
MR_COMMON(1,4),
MR_COMMON(2,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,5),
MR_COMMON(1,4),
MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,5),
MR_COMMON(1,4),
MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_sharing_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0_1;
static const struct mercury_type_8 mercury_common_8[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_sharing_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_COMMON(2,2),
MR_COMMON(2,1),
MR_COMMON(2,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_COMMON(2,2),
MR_COMMON(2,1),
MR_COMMON(2,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_COMMON(2,2),
MR_COMMON(2,1),
MR_COMMON(2,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_COMMON(2,2),
MR_COMMON(2,1),
MR_COMMON(2,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_COMMON(2,2),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_COMMON(2,2),
MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition),
MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_COMMON(2,2),
MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition),
MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"parse_user_annotated_sharing_pair_term",
2,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
462,
"d1;c4;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__print_selector_4_0_1 = {
{
MR_FUNCTION,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"unit_selector_to_string",
3,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
519,
"d1;c4;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__print_datastructs_5_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"print_datastruct",
5,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
552,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__print_structure_sharing_9_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"print_structure_sharing_pair",
5,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
580,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"lambda_prog_ctgc_m_615",
3,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
615,
"d1;c12;d1;c2;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"lambda_prog_ctgc_m_615",
3,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
615,
"d1;c12;d1;c2;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"print_structure_reuse_condition",
5,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
670,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"print_structure_reuse_condition",
5,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
670,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_selector_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"rename_unit_selector",
3,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
720,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_datastruct_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"rename_unit_selector",
3,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
720,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_sharing_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"rename_structure_sharing_pair",
4,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
736,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"rename_structure_sharing_pair",
4,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
736,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"rename_structure_sharing_pair",
4,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
736,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_2 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"rename_structure_sharing_pair",
4,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
736,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0_1 = {
{
MR_FUNCTION,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"rename_datastruct",
4,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
783,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"rename_structure_reuse_condition",
4,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
788,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"rename_structure_reuse_condition",
4,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
788,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"mer_type_to_typesel",
2,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
499,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_2 = {
{
MR_PREDICATE,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"mer_type_to_typesel",
2,
0
},
"parse_tree.prog_ctgc",
"prog_ctgc.m",
499,
"d1;c13;"
};

MR_decl_entry(parse_tree__prog_io__sym_name_and_args_3_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(fn__term__coerce_1_0);
MR_decl_entry(parse_tree__prog_io_util__maybe_parse_type_2_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module0)
	MR_init_entry1(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0);
	MR_init_label8(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,12,15,11,23,28,33,5,48)
	MR_init_label4(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,49,47,43,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_ctgc__parse_unit_selector_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("sel", 3)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i5);
	}
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i5);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i5);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i5);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i5);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_r1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__sym_name_and_args_3_0,
		fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i12);
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i15);
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i11);
	}
	MR_tempr2 = MR_ctfield(0, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_ctfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_ctfield(1, MR_tempr2, 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i23);
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i28);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_ctfield(3, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i33);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_ctfield(2, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("parse_unit_selector: unknown cons_id in unit selector", 53);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("typesel", 7)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i43);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i43);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_ctfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(fn__term__coerce_1_0,
		fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i48);
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_io_util__maybe_parse_type_2_0,
		fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i49);
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0_i47);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("parse_unit_selector: error in parsing type selector", 51);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("parse_unit_selector: selector is neither sel/3 nor typesel/1.", 61);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("parse_unit_selector: term not a functor", 39);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module1)
	MR_init_entry1(fn__parse_tree__prog_ctgc__parse_selector_1_0);
	MR_init_label4(fn__parse_tree__prog_ctgc__parse_selector_1_0,10,11,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_ctgc__parse_selector_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_selector_1_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_selector_1_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_selector_1_0_i5);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_selector_1_0_i5);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_selector_1_0_i5);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_selector_1_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_unit_selector_1_0,
		fn__parse_tree__prog_ctgc__parse_selector_1_0_i10);
MR_def_label(fn__parse_tree__prog_ctgc__parse_selector_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__parse_tree__prog_ctgc__parse_selector_1_0,
		fn__parse_tree__prog_ctgc__parse_selector_1_0_i11);
MR_def_label(fn__parse_tree__prog_ctgc__parse_selector_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_selector_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_ctgc__parse_selector_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("parse_selector: term not a functor", 34);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__coerce_var_1_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module2)
	MR_init_entry1(fn__parse_tree__prog_ctgc__parse_datastruct_1_0);
	MR_init_label3(fn__parse_tree__prog_ctgc__parse_datastruct_1_0,10,11,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_ctgc__parse_datastruct_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_1_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_1_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("cel", 3)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_1_0_i2);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_1_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_1_0_i2);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_1_0_i2);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_1_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(fn__term__coerce_var_1_0,
		fn__parse_tree__prog_ctgc__parse_datastruct_1_0_i10);
MR_def_label(fn__parse_tree__prog_ctgc__parse_datastruct_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_selector_1_0,
		fn__parse_tree__prog_ctgc__parse_datastruct_1_0_i11);
MR_def_label(fn__parse_tree__prog_ctgc__parse_datastruct_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_datastruct_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("parse_datastruct: error while parsing datastruct.", 49);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module3)
	MR_init_entry1(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0);
	MR_init_label3(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0,9,10,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("pair", 4)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0_i2);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0_i2);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_datastruct_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0_i9);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_datastruct_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0_i10);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Error while parsing structure sharing pair.", 43);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module4)
	MR_init_entry1(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0);
	MR_init_label4(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0,6,11,12,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0_i2);
	}
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0_i2);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_structure_sharing_pair_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0_i11);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0_i12);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Error while parsing list of structure sharing pairs.", 52);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_top_feedback_0;
MR_decl_entry(fn__set__make_singleton_set_1_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module5)
	MR_init_entry1(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0);
	MR_init_label5(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0,7,6,11,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0_i2);
	}
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0_i6);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_structure_sharing_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0_i7);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("top", 3)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0_i9);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, top_feedback);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,0,0);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0_i11);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("bottom", 6)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Error while parsing structure sharing domain.", 45);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module6)
	MR_init_entry1(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0);
	MR_init_label5(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0,10,11,5,13,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0_i2);
	}
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0_i5);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0_i5);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0_i5);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_datastruct_1_0,
		fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0_i10);
MR_def_label(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0,
		fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0_i11);
MR_def_label(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Error while parsing list of datastructs.", 40);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Error while parsing list of datastructs (term not a functor).", 61);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__from_list_1_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module7)
	MR_init_entry1(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0);
	MR_init_label6(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0,11,12,13,14,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("condition", 9)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0_i5);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0_i5);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0_i5);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0_i5);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0_i5);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0_i11);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0_i12);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_datastruct_list_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0_i13);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_structure_sharing_domain_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0_i14);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Error while parsing reuse condition.", 36);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Error while parsing reuse condition (term not a functor).", 57);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module8)
	MR_init_entry1(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0);
	MR_init_label5(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0,10,11,5,13,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0_i2);
	}
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0_i5);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0_i5);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0_i5);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_structure_reuse_condition_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0_i10);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0_i11);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Error while parsing reuse conditions.", 37);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Error while parsing reuse conditions (term not a functor).", 58);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module9)
	MR_init_entry1(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0);
	MR_init_label5(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0,5,7,13,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0_i2);
	}
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("has_no_reuse", 12)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("has_only_unconditional_reuse", 28)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("has_conditional_reuse", 21)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0_i9);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0_i9);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_ctgc__parse_structure_reuse_conditions_1_0,
		fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0_i13);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Error while parsing reuse domain.", 33);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__parse_tree__prog_ctgc__parse_structure_reuse_domain_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_ctgc.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Error while parsing reuse domain (term not a functor).", 54);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module10)
	MR_init_entry1(parse_tree__prog_ctgc__get_list_term_arguments_2_0);
	MR_init_label4(parse_tree__prog_ctgc__get_list_term_arguments_2_0,43,10,42,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_ctgc__get_list_term_arguments_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__get_list_term_arguments_2_0_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__get_list_term_arguments_2_0_i42);
	}
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__get_list_term_arguments_2_0_i43);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_ctgc__get_list_term_arguments_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__get_list_term_arguments_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__get_list_term_arguments_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__get_list_term_arguments_2_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__get_list_term_arguments_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(parse_tree__prog_ctgc__get_list_term_arguments_2_0,
		parse_tree__prog_ctgc__get_list_term_arguments_2_0_i10);
MR_def_label(parse_tree__prog_ctgc__get_list_term_arguments_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__get_list_term_arguments_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_ctgc__get_list_term_arguments_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_ctgc__get_list_term_arguments_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__context_to_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(parse_tree__prog_io_util__maybe_parse_types_2_0);
MR_decl_entry(term__vars_list_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(varset__select_3_0);
MR_decl_entry(fn__varset__coerce_1_0);
MR_decl_entry(list__map_3_2);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module11)
	MR_init_entry1(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0);
	MR_init_label8(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,119,10,11,12,14,118,23,25)
	MR_init_label8(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,27,29,30,31,34,37,42,117)
	MR_init_label1(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i117);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i117);
	}
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i118);
	}
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("no_sharing", 10)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i119);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("unknown_sharing", 15)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 2);
	MR_np_call_localret_ent(parse_tree__prog_out__context_to_string_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i10);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i11);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("user declared top(", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i12);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, top_feedback);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i14);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("sharing", 7)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i1);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	MR_r3 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i1);
	}
	MR_r5 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i23);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_ctgc__get_list_term_arguments_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i34);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("yes", 3)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_sv(3) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_io_util__maybe_parse_types_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i25);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__vars_list_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i27);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i29);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__select_3_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i30);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__varset__coerce_1_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i31);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__prog_ctgc__get_list_term_arguments_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i34);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_2,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i42);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__join_list_2_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module12)
	MR_init_entry1(parse_tree__prog_ctgc__print_selector_4_0);
	MR_init_label4(parse_tree__prog_ctgc__print_selector_4_0,20,5,6,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__print_selector_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__print_selector_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_ctgc__print_selector_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		parse_tree__prog_ctgc__print_selector_4_0_i5);
MR_def_label(parse_tree__prog_ctgc__print_selector_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		parse_tree__prog_ctgc__print_selector_4_0_i6);
MR_def_label(parse_tree__prog_ctgc__print_selector_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("[", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		parse_tree__prog_ctgc__print_selector_4_0_i19);
MR_def_label(parse_tree__prog_ctgc__print_selector_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(io__write_strings_3_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module13)
	MR_init_entry1(parse_tree__prog_ctgc__print_datastruct_5_0);
	MR_init_label3(parse_tree__prog_ctgc__print_datastruct_5_0,2,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__print_datastruct_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		parse_tree__prog_ctgc__print_datastruct_5_0_i2);
MR_def_label(parse_tree__prog_ctgc__print_datastruct_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("cel(", 4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		parse_tree__prog_ctgc__print_datastruct_5_0_i6);
MR_def_label(parse_tree__prog_ctgc__print_datastruct_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__print_selector_4_0,
		parse_tree__prog_ctgc__print_datastruct_5_0_i7);
MR_def_label(parse_tree__prog_ctgc__print_datastruct_5_0,7)
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

MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module14)
	MR_init_entry1(parse_tree__prog_ctgc__print_datastructs_5_0);
	MR_init_label2(parse_tree__prog_ctgc__print_datastructs_5_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__print_datastructs_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_datastructs_5_0_i2);
MR_def_label(parse_tree__prog_ctgc__print_datastructs_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__print_datastruct_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		parse_tree__prog_ctgc__print_datastructs_5_0_i4);
MR_def_label(parse_tree__prog_ctgc__print_datastructs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module15)
	MR_init_entry1(parse_tree__prog_ctgc__print_structure_sharing_pair_5_0);
	MR_init_label4(parse_tree__prog_ctgc__print_structure_sharing_pair_5_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__print_structure_sharing_pair_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("pair(", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_sharing_pair_5_0_i2);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_pair_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__print_datastruct_5_0,
		parse_tree__prog_ctgc__print_structure_sharing_pair_5_0_i3);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_pair_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_sharing_pair_5_0_i4);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_pair_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__print_datastruct_5_0,
		parse_tree__prog_ctgc__print_structure_sharing_pair_5_0_i5);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_pair_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__take_upto_3_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module16)
	MR_init_entry1(parse_tree__prog_ctgc__print_structure_sharing_9_0);
	MR_init_label8(parse_tree__prog_ctgc__print_structure_sharing_9_0,2,6,8,9,11,17,10,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__print_structure_sharing_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_sharing_9_0_i2);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__print_structure_sharing_pair_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__print_structure_sharing_9_0_i6);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		parse_tree__prog_ctgc__print_structure_sharing_9_0_i17);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(3), 0);
	MR_sv(2) = MR_r4;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(list__take_upto_3_0,
		parse_tree__prog_ctgc__print_structure_sharing_9_0_i8);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		parse_tree__prog_ctgc__print_structure_sharing_9_0_i9);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__length_1_0,
		parse_tree__prog_ctgc__print_structure_sharing_9_0_i11);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__print_structure_sharing_9_0_i10);
	}
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_sharing_9_0_i12);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("...", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_sharing_9_0_i17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module17)
	MR_init_entry1(parse_tree__prog_ctgc__print_structure_sharing_as_list_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__print_structure_sharing_as_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_string_const("[", 1);
	MR_r5 = (MR_Word) MR_string_const(",", 1);
	MR_r6 = (MR_Word) MR_string_const("]", 1);
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_ctgc__print_structure_sharing_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module18)
	MR_init_entry1(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0);
	MR_init_label8(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0,2,8,10,12,13,15,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__print_structure_sharing_domain_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_i2);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(5));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_i6);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("bottom", 6);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_i7);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("top", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_i7);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_string_const("top([", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_i12);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, top_feedback);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_i13);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, top_feedback);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_i15);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("])", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_i7);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_string_const("[", 1);
	MR_r5 = (MR_Word) MR_string_const(", ", 2);
	MR_r6 = (MR_Word) MR_string_const("]", 1);
	MR_r7 = MR_ctfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__print_structure_sharing_9_0,
		parse_tree__prog_ctgc__print_structure_sharing_domain_7_0_i7);
MR_def_label(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module19)
	MR_init_entry1(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0);
	MR_init_label8(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,39,5,11,12,13,15,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_i39);
	}
	MR_r1 = (MR_Word) MR_string_const("% no sharing information available.\n", 36);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("%\t ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_i5);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(3));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("bottom", 6);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_i10);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_sv(3), 0);
	MR_r1 = (MR_Word) MR_string_const("top([", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_i12);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, top_feedback);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_i13);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, top_feedback);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("\n%\t", 3);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_i15);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("])", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_i10);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_string_const("[", 1);
	MR_r5 = (MR_Word) MR_string_const("\n%\t", 3);
	MR_r6 = (MR_Word) MR_string_const("]", 1);
	MR_r7 = MR_ctfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__print_structure_sharing_9_0,
		parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0_i10);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module20)
	MR_init_entry1(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0);
	MR_init_label7(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,38,5,14,7,8,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("% no reuse information available.\n", 34);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("%\t ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_i5);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_i7);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("has_no_reuse", 12);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_i11);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("has_only_unconditional_reuse", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_i11);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_sv(3), 0);
	MR_r1 = (MR_Word) MR_string_const("has_conditional_reuse([", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_i8);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", \n%\t ", 6);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_i10);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("])", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0_i11);
MR_def_label(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module21)
	MR_init_entry1(parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_0);
	MR_init_label3(parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_0,16,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("not_available", 13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("yes(", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_0_i5);
MR_def_label(parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0,
		parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_0_i6);
MR_def_label(parse_tree__prog_ctgc__print_interface_structure_sharing_domain_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module22)
	MR_init_entry1(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0);
	MR_init_label8(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0,37,5,6,15,8,9,11,12)
	MR_init_label1(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("not_available", 13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("yes(", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_i5);
MR_def_label(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_i6);
MR_def_label(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_i8);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("has_no_reuse", 12);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_i12);
MR_def_label(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("has_only_unconditional_reuse", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_i12);
MR_def_label(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_sv(3), 0);
	MR_r1 = (MR_Word) MR_string_const("has_conditional_reuse([", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_i9);
MR_def_label(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_i11);
MR_def_label(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("])", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_i12);
MR_def_label(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0_i19);
MR_def_label(parse_tree__prog_ctgc__print_interface_maybe_structure_reuse_domain_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_subst_to_type_3_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module23)
	MR_init_entry1(parse_tree__prog_ctgc__rename_unit_selector_3_0);
	MR_init_label2(parse_tree__prog_ctgc__rename_unit_selector_3_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__rename_unit_selector_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__rename_unit_selector_3_0_i13);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(parse_tree__prog_ctgc__rename_unit_selector_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_3_0,
		parse_tree__prog_ctgc__rename_unit_selector_3_0_i4);
MR_def_label(parse_tree__prog_ctgc__rename_unit_selector_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module24)
	MR_init_entry1(parse_tree__prog_ctgc__rename_selector_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__rename_selector_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__rename_unit_selector_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module25)
	MR_init_entry1(parse_tree__prog_ctgc__rename_datastruct_4_0);
	MR_init_label2(parse_tree__prog_ctgc__rename_datastruct_4_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__rename_datastruct_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_ctgc__rename_datastruct_4_0_i3);
MR_def_label(parse_tree__prog_ctgc__rename_datastruct_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__rename_unit_selector_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_ctgc__rename_datastruct_4_0_i5);
MR_def_label(parse_tree__prog_ctgc__rename_datastruct_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module26)
	MR_init_entry1(fn__parse_tree__prog_ctgc__rename_datastruct_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_ctgc__rename_datastruct_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(parse_tree__prog_ctgc__rename_datastruct_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module27)
	MR_init_entry1(parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0);
	MR_init_label2(parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__rename_datastruct_4_0,
		parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0_i2);
MR_def_label(parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_ctgc__rename_datastruct_4_0,
		parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0_i3);
MR_def_label(parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module28)
	MR_init_entry1(parse_tree__prog_ctgc__rename_structure_sharing_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__rename_structure_sharing_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module29)
	MR_init_entry1(parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0);
	MR_init_label2(parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0,21,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0_i21);
	}
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0_i7);
MR_def_label(parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(parse_tree__prog_type__type_list_subsumes_det_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module30)
	MR_init_entry1(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0);
	MR_init_label8(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0,3,46,9,12,10,16,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r4, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_i46);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r4, 1);
	MR_sv(3) = MR_ctfield(1, MR_r5, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_i9);
MR_def_label(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_sv(2), 0), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_det_3_0,
		parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_i12);
MR_def_label(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_GOTO_LAB(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_i19);
	}
MR_def_label(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_i16);
MR_def_label(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__rename_structure_sharing_pair_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	}
MR_def_label(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0_i20);
MR_def_label(parse_tree__prog_ctgc__rename_user_annotated_sharing_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__map_2_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module31)
	MR_init_entry1(parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0);
	MR_init_label3(parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__parse_tree__prog_ctgc__rename_datastruct_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_tempr5 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_tempr2 = MR_tempr5;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__map_2_0,
		parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0_i3);
MR_def_label(parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0_i4);
MR_def_label(parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(5), 3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__rename_structure_sharing_domain_4_0,
		parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0_i5);
MR_def_label(parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module32)
	MR_init_entry1(parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__rename_structure_reuse_conditions_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module33)
	MR_init_entry1(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0);
	MR_init_label3(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0,8,22,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0_i22);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_ctgc__rename_structure_reuse_condition_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0_i5);
MR_def_label(parse_tree__prog_ctgc__rename_structure_reuse_domain_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__coerce_var_2_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module34)
	MR_init_entry1(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0);
	MR_init_label8(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0,15,16,18,21,30,31,33,36)
	MR_init_label1(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("-", 1)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr4, MR_string_const("cel", 3)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(term__coerce_var_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i15);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_ctgc__get_list_term_arguments_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i16);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_io_util__maybe_parse_types_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i18);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i21);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("cel", 3)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(term__coerce_var_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i30);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_ctgc__get_list_term_arguments_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i31);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_io_util__maybe_parse_types_2_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i33);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0_i36);
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_ctgc__parse_user_annotated_sharing_pair_term_2_0,1)
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


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module35)
	MR_init_entry1(parse_tree__prog_ctgc__mer_type_to_typesel_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_ctgc__mer_type_to_typesel_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_0);
MR_decl_entry(fn__parse_tree__prog_util__cons_id_arity_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module36)
	MR_init_entry1(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0);
	MR_init_label6(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0,4,5,6,7,3,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_0,
		fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0_i4);
MR_def_label(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__cons_id_arity_1_0,
		fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0_i5);
MR_def_label(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0_i6);
MR_def_label(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0_i7);
MR_def_label(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(",", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(",", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("sel(", 4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
MR_def_label(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0_i16);
MR_def_label(fn__parse_tree__prog_ctgc__unit_selector_to_string_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("typesel(", 8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_ctgc_module37)
	MR_init_entry1(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0);
	MR_init_label7(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		parse_tree__prog_ctgc__print_structure_reuse_condition_5_0_i2);
MR_def_label(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("condition(", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_reuse_condition_5_0_i3);
MR_def_label(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__print_datastructs_5_0,
		parse_tree__prog_ctgc__print_structure_reuse_condition_5_0_i4);
MR_def_label(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_reuse_condition_5_0_i5);
MR_def_label(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__print_datastructs_5_0,
		parse_tree__prog_ctgc__print_structure_reuse_condition_5_0_i6);
MR_def_label(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_ctgc__print_structure_reuse_condition_5_0_i7);
MR_def_label(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__print_structure_sharing_domain_7_0,
		parse_tree__prog_ctgc__print_structure_reuse_condition_5_0_i8);
MR_def_label(parse_tree__prog_ctgc__print_structure_reuse_condition_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(parse_tree__prog_ctgc_module38)
	MR_init_entry1(parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__615__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_ctgc__IntroducedFrom__pred__do_print_structure_sharing_domain__615__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, top_feedback);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__prog_ctgc_maybe_bunch_0(void)
{
	parse_tree__prog_ctgc_module0();
	parse_tree__prog_ctgc_module1();
	parse_tree__prog_ctgc_module2();
	parse_tree__prog_ctgc_module3();
	parse_tree__prog_ctgc_module4();
	parse_tree__prog_ctgc_module5();
	parse_tree__prog_ctgc_module6();
	parse_tree__prog_ctgc_module7();
	parse_tree__prog_ctgc_module8();
	parse_tree__prog_ctgc_module9();
	parse_tree__prog_ctgc_module10();
	parse_tree__prog_ctgc_module11();
	parse_tree__prog_ctgc_module12();
	parse_tree__prog_ctgc_module13();
	parse_tree__prog_ctgc_module14();
	parse_tree__prog_ctgc_module15();
	parse_tree__prog_ctgc_module16();
	parse_tree__prog_ctgc_module17();
	parse_tree__prog_ctgc_module18();
	parse_tree__prog_ctgc_module19();
	parse_tree__prog_ctgc_module20();
	parse_tree__prog_ctgc_module21();
	parse_tree__prog_ctgc_module22();
	parse_tree__prog_ctgc_module23();
	parse_tree__prog_ctgc_module24();
	parse_tree__prog_ctgc_module25();
	parse_tree__prog_ctgc_module26();
	parse_tree__prog_ctgc_module27();
	parse_tree__prog_ctgc_module28();
	parse_tree__prog_ctgc_module29();
	parse_tree__prog_ctgc_module30();
	parse_tree__prog_ctgc_module31();
	parse_tree__prog_ctgc_module32();
	parse_tree__prog_ctgc_module33();
	parse_tree__prog_ctgc_module34();
	parse_tree__prog_ctgc_module35();
	parse_tree__prog_ctgc_module36();
	parse_tree__prog_ctgc_module37();
	parse_tree__prog_ctgc_module38();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_ctgc__init(void);
void mercury__parse_tree__prog_ctgc__init_type_tables(void);
void mercury__parse_tree__prog_ctgc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_ctgc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_ctgc__init_complexity_procs(void);
#endif

void mercury__parse_tree__prog_ctgc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_ctgc_maybe_bunch_0();
	mercury__parse_tree__prog_ctgc__init_debugger();
}

void mercury__parse_tree__prog_ctgc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__parse_tree__prog_ctgc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_ctgc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__prog_ctgc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_ctgc__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
