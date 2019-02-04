/*
** Automatically generated from `prog_type_subst.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__parse_tree__prog_type_subst__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "parse_tree.prog_type_subst.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "parse_tree.prog_type_subst.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "parse_tree.prog_type_subst.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "parse_tree.prog_type_subst.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 44 "parse_tree.prog_type_subst.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "parse_tree.prog_type_subst.c"
#line 49 "parse_tree.prog_type_subst.c"
#include "parse_tree.prog_type_subst.mh"

#line 52 "parse_tree.prog_type_subst.c"
#line 53 "parse_tree.prog_type_subst.c"
#ifndef PARSE_TREE__PROG_TYPE_SUBST_DECL_GUARD
#define PARSE_TREE__PROG_TYPE_SUBST_DECL_GUARD

#line 57 "parse_tree.prog_type_subst.c"
#line 58 "parse_tree.prog_type_subst.c"

#endif
#line 61 "parse_tree.prog_type_subst.c"

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
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label1(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0, 3)
MR_decl_label2(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0, 3,4)
MR_decl_label3(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0, 4,2,7)
MR_decl_label10(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0, 31,34,37,38,36,86,32,14,15,13)
MR_decl_label10(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0, 47,26,3,4,7,9,5,17,18,20)
MR_decl_label3(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0, 22,28,29)
MR_decl_label1(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0, 3)
MR_decl_label2(parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0, 3,4)
MR_decl_label3(parse_tree__prog_type_subst__apply_subst_to_tvar_4_0, 4,2,7)
MR_decl_label10(parse_tree__prog_type_subst__apply_subst_to_type_3_0, 90,33,36,37,54,35,91,14,12,92)
MR_decl_label10(parse_tree__prog_type_subst__apply_subst_to_type_3_0, 25,3,4,7,5,16,17,19,21,27)
MR_decl_label1(parse_tree__prog_type_subst__apply_subst_to_type_3_0, 28)
MR_decl_label10(parse_tree__prog_type_subst__apply_type_args_3_0, 21,22,11,12,13,7,27,3,4,5)
MR_decl_label4(parse_tree__prog_type_subst__apply_type_args_3_0, 17,18,19,51)
MR_decl_label7(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0, 36,5,7,8,6,15,41)
MR_decl_label1(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0, 3)
MR_decl_label2(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0, 3,4)
MR_decl_label2(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0, 4,2)
MR_decl_label1(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0, 4)
MR_decl_label2(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_0, 4,2)
MR_decl_label10(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0, 77,33,31,78,14,12,79,25,3,4)
MR_decl_label8(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0, 7,5,16,17,19,21,27,28)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0)
MR_decl_static(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0)
MR_decl_static(parse_tree__prog_type_subst__apply_type_args_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_subst_to_type_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_subst_to_tvar_4_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_subst_to_vartypes_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0)
MR_def_extern_entry(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0)
MR_decl_static(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, kind)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, kind)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,0),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, kind),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_type_list_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_vartypes_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0_1;
static const struct mercury_type_3 mercury_common_3[16] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_type_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_vartypes_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_0_1;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,1),
MR_COMMON(1,3),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,1),
MR_COMMON(1,3),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_rec_subst_to_prog_constraint",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
427,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_subst_to_prog_constraint",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
424,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_variable_renaming_to_prog_constraint",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
420,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_rec_subst_to_prog_constraint",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
427,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_subst_to_prog_constraint",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
424,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_variable_renaming_to_prog_constraint",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
420,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_rec_subst_to_type",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
321,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_subst_to_type",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
318,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_variable_renaming_to_type",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
315,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_rec_subst_to_type",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
332,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_vartypes_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_subst_to_type",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
329,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_variable_renaming_to_type",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
326,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_variable_renaming_to_type",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
315,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_rec_subst_to_tvar",
4,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
177,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_subst_to_tvar",
4,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
174,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_variable_renaming_to_tvar",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
171,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_rec_subst_to_type",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
321,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_subst_to_type_list_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_subst_to_type",
3,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
318,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_variable_renaming_to_tvar_kind_map_2",
5,
0
},
"parse_tree.prog_type_subst",
"prog_type_subst.m",
133,
"d1;c4;"
};


MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(parse_tree__prog_type_subst_module0)
	MR_init_entry1(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0);
	MR_init_label1(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_tvar_kind_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_subst_module1)
	MR_init_entry1(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0);
	MR_init_label2(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_tvar'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_subst_module2)
	MR_init_entry1(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_subst_to_type_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_subst_to_type_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_subst_to_type_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_subst_to_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(fn__parse_tree__prog_data__get_type_kind_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__kind_0_0);

MR_BEGIN_MODULE(parse_tree__prog_type_subst_module3)
	MR_init_entry1(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_type_args_to_kind_3_0);
	MR_init_label7(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,36,5,7,8,6,15,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_type_args_to_kind'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0_i41);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0_i15);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("prog_type_subst.m", 17);
	MR_r2 = (MR_Word) MR_string_const("too many args in apply_n", 24);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_type_kind_1_0,
		parse_tree__prog_type_subst__apply_type_args_to_kind_3_0_i7);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__kind_0_0,
		parse_tree__prog_type_subst__apply_type_args_to_kind_3_0_i8);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0_i36);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_type_subst.m", 17);
	MR_r2 = (MR_Word) MR_string_const("kind error in apply_n", 21);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_type_subst.m", 17);
	MR_r2 = (MR_Word) MR_string_const("unbound kind variable", 21);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(parse_tree__prog_type_subst_module4)
	MR_init_entry1(parse_tree__prog_type_subst__apply_type_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_type_args_3_0);
	MR_init_label10(parse_tree__prog_type_subst__apply_type_args_3_0,21,22,11,12,13,7,27,3,4,5)
	MR_init_label4(parse_tree__prog_type_subst__apply_type_args_3_0,17,18,19,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_type_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type_subst__apply_type_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_type_args_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_type_args_3_0_i11) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_type_args_3_0_i7) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_type_args_3_0_i27));
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,
		parse_tree__prog_type_subst__apply_type_args_3_0_i22);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,
		parse_tree__prog_type_subst__apply_type_args_3_0_i12);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_type_subst__apply_type_args_3_0_i13);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_type_args_3_0_i51);
	}
	MR_r1 = (MR_Word) MR_string_const("prog_type_subst.m", 17);
	MR_r2 = (MR_Word) MR_string_const("applied type args to builtin", 28);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_type_args_3_0_i17);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_type_args_3_0_i7);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_type_args_3_0_i3);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_type_args_3_0_i21) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_type_args_3_0_i11) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_type_args_3_0_i7) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_type_args_3_0_i27));
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,
		parse_tree__prog_type_subst__apply_type_args_3_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_type_subst__apply_type_args_3_0_i5);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tfield(3, MR_r2, 3) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_type_args_to_kind_3_0,
		parse_tree__prog_type_subst__apply_type_args_3_0_i18);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_type_subst__apply_type_args_3_0_i19);
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
MR_def_label(parse_tree__prog_type_subst__apply_type_args_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module5)
	MR_init_entry1(parse_tree__prog_type_subst__apply_subst_to_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_subst_to_type_3_0);
	MR_init_label10(parse_tree__prog_type_subst__apply_subst_to_type_3_0,90,33,36,37,54,35,91,14,12,92)
	MR_init_label10(parse_tree__prog_type_subst__apply_subst_to_type_3_0,25,3,4,7,5,16,17,19,21,27)
	MR_init_label1(parse_tree__prog_type_subst__apply_subst_to_type_3_0,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_subst_to_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_subst_to_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_subst_to_type_3_0_i90) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_subst_to_type_3_0_i91) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_subst_to_type_3_0_i12) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_subst_to_type_3_0_i92));
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type_subst__apply_subst_to_type_3_0_i33);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_subst_to_type_3_0_i54);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_type_kind_1_0,
		parse_tree__prog_type_subst__apply_subst_to_type_3_0_i36);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__kind_0_0,
		parse_tree__prog_type_subst__apply_subst_to_type_3_0_i37);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_subst_to_type_3_0_i35);
	}
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_type_subst.m", 17);
	MR_r2 = (MR_Word) MR_string_const("substitution not kind preserving", 32);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_subst_to_type_3_0_i14);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_subst_to_type_3_0_i27);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_subst_to_type_3_0_i16);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),2)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_subst_to_type_3_0_i3);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(parse_tree__prog_type_subst__apply_subst_to_type_3_0,
		parse_tree__prog_type_subst__apply_subst_to_type_3_0_i25);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,25)
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
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_subst_to_type_3_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type_subst__apply_subst_to_type_3_0_i7);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_subst_to_type_3_0_i5);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_type_subst__apply_type_args_3_0);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_subst_to_type_3_0_i17);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_subst_to_type_3_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	}
	MR_np_localcall_lab(parse_tree__prog_type_subst__apply_subst_to_type_3_0,
		parse_tree__prog_type_subst__apply_subst_to_type_3_0_i21);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_subst_to_type_3_0_i28);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_type_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__get_tvar_kind_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_subst_module6)
	MR_init_entry1(parse_tree__prog_type_subst__apply_subst_to_tvar_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_subst_to_tvar_4_0);
	MR_init_label3(parse_tree__prog_type_subst__apply_subst_to_tvar_4_0,4,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_subst_to_tvar'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_subst_to_tvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type_subst__apply_subst_to_tvar_4_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_tvar_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_subst_to_tvar_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_type_subst__apply_subst_to_type_3_0);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_tvar_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__get_tvar_kind_3_0,
		parse_tree__prog_type_subst__apply_subst_to_tvar_4_0_i7);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_tvar_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module7)
	MR_init_entry1(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_subst_to_type_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module8)
	MR_init_entry1(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
	MR_init_label10(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,31,34,37,38,36,86,32,14,15,13)
	MR_init_label10(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,47,26,3,4,7,9,5,17,18,20)
	MR_init_label3(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,22,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_subst_to_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i31) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i14) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i13) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i47));
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i34);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i32);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_type_kind_1_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i37);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__kind_0_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i38);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i31) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i14) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i13) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i47));
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_type_subst.m", 17);
	MR_r2 = (MR_Word) MR_string_const("substitution not kind preserving", 32);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i86);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i31) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i14) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i13) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i47));
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i15);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i28);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i17);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),2)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i3);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i26);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i7);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i9);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_type_subst__apply_type_args_3_0);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(4);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i18);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	}
	MR_np_localcall_lab(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i22);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0_i29);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module9)
	MR_init_entry1(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0);
	MR_init_label3(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0,4,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_subst_to_tvar'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__get_tvar_kind_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0_i7);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module10)
	MR_init_entry1(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_tvar_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module11)
	MR_init_entry1(parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_subst_to_tvar_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_subst_to_tvar_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
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


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module12)
	MR_init_entry1(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_subst_to_tvar_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
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


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module13)
	MR_init_entry1(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_type_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module14)
	MR_init_entry1(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
	MR_init_label10(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,77,33,31,78,14,12,79,25,3,4)
	MR_init_label8(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,7,5,16,17,19,21,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i77) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i78) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i12) MR_AND
		MR_LABEL_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i79));
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i33);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i31);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i14);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i27);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i16);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),2)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i3);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i25);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,25)
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
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i7);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i17);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	}
	MR_np_localcall_lab(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i21);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0_i28);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__map_values_only_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_subst_module15)
	MR_init_entry1(parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_vartypes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__map_values_only_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module16)
	MR_init_entry1(parse_tree__prog_type_subst__apply_subst_to_vartypes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_subst_to_vartypes_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_subst_to_vartypes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_subst_to_vartypes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_subst_to_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__map_values_only_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module17)
	MR_init_entry1(parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_subst_to_vartypes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__map_values_only_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module18)
	MR_init_entry1(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0);
	MR_init_label1(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_prog_constraint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0_i3);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module19)
	MR_init_entry1(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0);
	MR_init_label1(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_subst_to_prog_constraint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_subst_to_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0_i3);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module20)
	MR_init_entry1(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0);
	MR_init_label1(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_subst_to_prog_constraint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0_i3);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

MR_BEGIN_MODULE(parse_tree__prog_type_subst_module21)
	MR_init_entry1(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_prog_constraint_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module22)
	MR_init_entry1(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_subst_to_prog_constraint_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module23)
	MR_init_entry1(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_subst_to_prog_constraint_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module24)
	MR_init_entry1(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0);
	MR_init_label2(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_prog_constraints'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0_i3);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module25)
	MR_init_entry1(parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0);
	MR_init_label2(parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_subst_to_prog_constraints'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0_i3);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_subst_module26)
	MR_init_entry1(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0);
	MR_init_label2(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_subst_to_prog_constraints'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,15);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0_i3);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(parse_tree__prog_type_subst_module27)
	MR_init_entry1(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_0);
	MR_init_label2(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_tvar_kind_map_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_0_i4);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_0_i2);
	}
	MR_r5 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r6 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_def_label(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__prog_type_subst_maybe_bunch_0(void)
{
	parse_tree__prog_type_subst_module0();
	parse_tree__prog_type_subst_module1();
	parse_tree__prog_type_subst_module2();
	parse_tree__prog_type_subst_module3();
	parse_tree__prog_type_subst_module4();
	parse_tree__prog_type_subst_module5();
	parse_tree__prog_type_subst_module6();
	parse_tree__prog_type_subst_module7();
	parse_tree__prog_type_subst_module8();
	parse_tree__prog_type_subst_module9();
	parse_tree__prog_type_subst_module10();
	parse_tree__prog_type_subst_module11();
	parse_tree__prog_type_subst_module12();
	parse_tree__prog_type_subst_module13();
	parse_tree__prog_type_subst_module14();
	parse_tree__prog_type_subst_module15();
	parse_tree__prog_type_subst_module16();
	parse_tree__prog_type_subst_module17();
	parse_tree__prog_type_subst_module18();
	parse_tree__prog_type_subst_module19();
	parse_tree__prog_type_subst_module20();
	parse_tree__prog_type_subst_module21();
	parse_tree__prog_type_subst_module22();
	parse_tree__prog_type_subst_module23();
	parse_tree__prog_type_subst_module24();
	parse_tree__prog_type_subst_module25();
	parse_tree__prog_type_subst_module26();
	parse_tree__prog_type_subst_module27();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_type_subst__init(void);
void mercury__parse_tree__prog_type_subst__init_type_tables(void);
void mercury__parse_tree__prog_type_subst__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_type_subst__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_type_subst__init_complexity_procs(void);
#endif

void mercury__parse_tree__prog_type_subst__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_type_subst_maybe_bunch_0();
	mercury__parse_tree__prog_type_subst__init_debugger();
}

void mercury__parse_tree__prog_type_subst__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__parse_tree__prog_type_subst__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_type_subst__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__prog_type_subst);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_type_subst__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
