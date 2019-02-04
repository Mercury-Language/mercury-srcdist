/*
** Automatically generated from `structure_reuse.domain.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__structure_reuse__domain__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 532 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.ctgc.structure_reuse.domain.c"
#line 540 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.ctgc.structure_reuse.domain.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "transform_hlds.ctgc.structure_reuse.domain.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "transform_hlds.ctgc.structure_reuse.domain.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "transform_hlds.ctgc.structure_reuse.domain.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "transform_hlds.ctgc.structure_reuse.domain.c"
#line 48 "transform_hlds.ctgc.structure_reuse.domain.c"
#include "transform_hlds.ctgc.structure_reuse.domain.mh"

#line 51 "transform_hlds.ctgc.structure_reuse.domain.c"
#line 52 "transform_hlds.ctgc.structure_reuse.domain.c"
#ifndef TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__DOMAIN_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__DOMAIN_DECL_GUARD

#line 56 "transform_hlds.ctgc.structure_reuse.domain.c"
#line 57 "transform_hlds.ctgc.structure_reuse.domain.c"

#endif
#line 60 "transform_hlds.ctgc.structure_reuse.domain.c"

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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_conditions_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
MR_decl_label8(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0, 10,11,12)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0, 2,3)
MR_decl_label4(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0, 2,3,5,6)
MR_decl_label5(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0, 4,3,42,13,11)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_0, 2)
MR_decl_label5(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0, 15,5,4,36,13)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0, 1)
MR_decl_label3(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0, 5,18,6)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_7_0, 2,3)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0, 9,1)
MR_decl_label4(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0, 4,10,17,1)
MR_decl_label5(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0, 5,4,8,9,25)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_0, 1)
MR_decl_label4(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0, 14,4,5,6)
MR_decl_label5(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0, 4,6,7,2,1)
MR_decl_label4(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0, 5,7,2,1)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0, 42,7,9,11,13,4,5,1)
MR_decl_label4(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0, 19,3,6,4)
MR_decl_label1(fn__transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_0, 2)
MR_decl_label3(fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0, 5,18,6)
MR_decl_label2(fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0, 2,3)
MR_decl_label3(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0, 5,23,8)
MR_decl_label1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_0, 2)
MR_decl_label5(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0, 5,23,6,7,8)
MR_decl_label8(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0, 4,5,7,8,9,10,11,12)
MR_decl_label1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0, 3)
MR_decl_label8(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0, 2,3,5,4,7,8,9,10)
MR_decl_label7(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0, 12,13,14,15,16,17,18)
MR_decl_label2(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_0, 3,1)
MR_decl_label3(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0, 5,18,6)
MR_decl_label3(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0, 6,18,1)
MR_decl_label5(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0, 16,5,7,9,1)
MR_decl_label5(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0, 26,7,14,6,18)
MR_decl_label7(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0, 30,7,5,9,11,15,21)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_7_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_4_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_init_0_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_2_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_0_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
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
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(4,4),
MR_COMMON(4,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0_1;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,3),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition),
MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition)
},
};

MR_decl_entry(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0);
static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_COMMON(0,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,5),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0_1;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(4,0),
MR_COMMON(4,1),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_COMMON(0,6),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(4,0),
MR_COMMON(4,1),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_COMMON(4,4),
MR_COMMON(4,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_COMMON(0,7),
MR_COMMON(0,2),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__livedata__type_ctor_info_livedata_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__livedata, livedata),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as),
MR_COMMON(0,7),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,3),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_conditions_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_0_0)),
	"transform_hlds.ctgc.structure_reuse.domain",
	"reuse_conditions",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0 = {
	"always",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_condition_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0
};

const MR_ConstString mercury_data_transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_condition_0_1[] = {
	"reuseable_nodes",
	"local_use_headvars",
	"local_sharing_headvars"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1 = {
	"condition",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_condition_0_1,
	mercury_data_transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_condition_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_1[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1

};

const MR_DuPtagLayout mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_condition_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_condition_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0,
	&mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1
};

const MR_Integer mercury_data_transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_condition_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0)),
	"transform_hlds.ctgc.structure_reuse.domain",
	"reuse_condition",
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_condition_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_condition_0 },
	2,
	4,
	mercury_data_transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_condition_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0)),
	"transform_hlds.ctgc.structure_reuse.domain",
	"reuse_as_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0 = {
	"no_reuse",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1 = {
	"unconditional",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2 = {
	"conditional",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0,
	&mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_1[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2

};

const MR_DuPtagLayout mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2,
	&mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0,
	&mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1
};

const MR_Integer mercury_data_transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0)),
	"transform_hlds.ctgc.structure_reuse.domain",
	"reuse_as",
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_0 },
	3,
	4,
	mercury_data_transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_0
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.structure_sharing.domain",
"transform_hlds.ctgc.structure_sharing.domain",
"extend_datastruct",
5,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
291,
"d1;c11;e;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_2 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_init",
2,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
292,
"d1;c11;e;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0_1 = {
{
MR_FUNCTION,
"parse_tree.prog_ctgc",
"parse_tree.prog_ctgc",
"rename_datastruct",
4,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
335,
"d1;c5;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.domain",
"transform_hlds.ctgc.structure_reuse.domain",
"reuse_conditions_subsume_reuse_condition",
4,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
381,
"d1;c5;d4;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.domain",
"transform_hlds.ctgc.structure_reuse.domain",
"reuse_condition_rename",
4,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
407,
"d1;c5;d3;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.structure_reuse.domain",
"transform_hlds.ctgc.structure_reuse.domain",
"reuse_condition_from_called_proc_to_local_condition",
7,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
521,
"d1;c8;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.domain",
"transform_hlds.ctgc.structure_reuse.domain",
"reuse_as_add_condition",
5,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
524,
"d1;c8;d3;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.domain",
"transform_hlds.ctgc.structure_reuse.domain",
"reuse_condition_satisfied",
6,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
580,
"d1;c7;d3;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.structure_reuse.domain",
"transform_hlds.ctgc.structure_reuse.domain",
"from_public_reuse_condition",
2,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
631,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.structure_reuse.domain",
"transform_hlds.ctgc.structure_reuse.domain",
"to_structure_reuse_condition",
2,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
659,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.domain",
"transform_hlds.ctgc.structure_reuse.domain",
"dump_entries",
3,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
696,
"d1;c4;e;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.domain",
"transform_hlds.ctgc.structure_reuse.domain",
"load_structure_reuse_table_2",
4,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
710,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.domain",
"transform_hlds.ctgc.structure_reuse.domain",
"load_structure_reuse_table_3",
5,
0
},
"transform_hlds.ctgc.structure_reuse.domain",
"structure_reuse.domain.m",
719,
"d1;c7;"
};

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_0);
MR_decl_entry(fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module0)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0);
	MR_init_label8(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,2,3,5,4,7,8,9,10)
	MR_init_label7(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,12,13,14,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i2);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i3);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i5);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_tempr1;
	MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i9);
	}
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i7);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i8);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i12);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i13);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i14);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i15);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i16);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i17);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0_i18);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module1)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_0);
	MR_init_label1(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_ctgc__rename_datastruct_3_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module2)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0);
	MR_init_label4(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0,14,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__parse_tree__prog_ctgc__rename_datastruct_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_tempr5 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 2);
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_tempr2 = MR_tempr5;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(5), 3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module3)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0);
	MR_init_label4(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0,5,7,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0_i2);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 2);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module4)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module5)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_0);
	MR_init_label1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module6)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0);
	MR_init_label5(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0,5,23,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0_i23);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("n", 1);
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("u", 1);
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0_i6);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0_i7);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0_i8);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("c(", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__takewhile_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module7)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0);
	MR_init_label4(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0,4,10,17,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0_i4);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0_i17);
	}
	if (MR_LTAGS_TEST(MR_r4,0,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0_i17);
	}
	MR_r1 = (MR_tag(MR_r4) == MR_mktag((MR_Integer) 1));
	MR_proceed();
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(1, MR_r4, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module8)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0);
	MR_init_label1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module9)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 1));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module10)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module11)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0);
	MR_init_label3(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0,5,18,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0_i18);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0,6)
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

MR_decl_entry(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0);
MR_decl_entry(fn__transform_hlds__ctgc__util__get_type_substitution_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module12)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_7_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_7_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_7_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__util__get_type_substitution_4_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_7_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module13)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0,42,7,9,11,13,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0_i1);
	}
	MR_sv(4) = MR_ctfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r4, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 2);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0_i4);
	}
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0_i42);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module14)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0);
	MR_init_label5(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0,4,3,42,13,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0_i42);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0_i11);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module15)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_0);
	MR_init_label1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_0_i2);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module16)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0);
	MR_init_label4(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0,19,3,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0_i19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module17)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0);
	MR_init_label5(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0,15,5,4,36,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0_i4);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0_i5);
	}
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0_i36);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0,13)
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


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module18)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module19)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0);
	MR_init_label3(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0,5,23,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0_i23);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("structure_reuse.domain.m", 24);
	MR_r2 = (MR_Word) MR_string_const("reuse_as_from_called_procedure_to_local_reuse_as: reuse_as does not specify any reuses.", 87);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("structure_reuse.domain.m", 24);
	MR_r2 = (MR_Word) MR_string_const("reuse_as_from_called_procedure_to_local_reuse_as: reuse_as is unconditional.", 76);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_tfield(0, MR_tempr1, 7) = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_r6, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0_i8);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__all_true_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module20)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0_i9);
	}
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_tfield(0, MR_tempr1, 7) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_r6, 0);
	MR_np_tailcall_ent(list__all_true_2_0);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_reuse_condition_0;

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module21)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0);
	MR_init_label3(fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0,5,18,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0_i18);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0_i6);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0,6)
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

MR_decl_entry(fn__list__filter_map_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module22)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0);
	MR_init_label3(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0,5,18,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0_i18);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_condition);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0_i6);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_0,6)
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

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module23)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_init_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
	MR_np_tailcall_ent(fn__map__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__elem_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module24)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
	MR_np_tailcall_ent(fn__map__elem_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module25)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__map__to_assoc_list_1_0);
MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module26)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0);
	MR_init_label5(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0,5,4,8,9,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0_i25);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("% ReuseTable: Empty", 19);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ReuseTable: PPId --> Reuse\n", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__to_assoc_list_1_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_list_5_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module27)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0);
	MR_init_label2(fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0_i2);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0_i3);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module28)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_0);
MR_decl_entry(fn__list__append_2_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module29)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0);
	MR_init_label8(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0,4,5,7,8,9,10,11,12)
	MR_init_label1(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0_i4);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0_i5);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__append_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0_i8);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0_i9);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0_i10);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0_i11);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_2_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0_i12);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("structure_reuse.domain.m", 24);
	MR_r2 = (MR_Word) MR_string_const("reuse_condition_from_called_proc_to_local_condition: explicit condition expected.", 81);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0);
MR_decl_entry(transform_hlds__ctgc__livedata__nodes_are_not_live_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module30)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0);
	MR_init_label5(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0,4,6,7,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = MR_r5;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__livedata__livedata_add_liveness_5_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(transform_hlds__ctgc__livedata__nodes_are_not_live_4_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_satisfied_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module31)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_0);
	MR_init_label1(fn__transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_0_i2);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module32)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_0);
	MR_init_label2(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_0_i1);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_0,
		fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_0_i3);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_id_to_int_1_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module33)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,2,3,4,5,6,7,8,9)
	MR_init_label3(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_id_to_int_1_0,
		transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0,
		transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t-->", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__dump_entries_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module34)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_structure_reuse_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module35)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0);
	MR_init_label4(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0,2,3,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_structure_reuse_2_0,
		transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_0,
		transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module36)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0);
	MR_init_label3(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,6,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module37)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0);
	MR_init_label5(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,26,7,14,6,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0_i6);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0_i7);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr3);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0_i14);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr3),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0_i14);
	}
	}
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0_i14);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r5);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_ctfield(1, MR_r5, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module38)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
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

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module39)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___transform_hlds__ctgc__structure_sharing__domain__sharing_as_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module40)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0);
	MR_init_label5(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,16,5,7,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i16);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(6);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i7);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i9);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___transform_hlds__ctgc__structure_sharing__domain__sharing_as_0_0);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___transform_hlds__ctgc__structure_sharing__domain__sharing_as_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module41)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0);
	MR_init_label7(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,30,7,5,9,11,15,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i7);
	}
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i11);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i15);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___transform_hlds__ctgc__structure_sharing__domain__sharing_as_0_0);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module42)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
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


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__domain_module43)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
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

static void mercury__transform_hlds__ctgc__structure_reuse__domain_maybe_bunch_0(void)
{
	transform_hlds__ctgc__structure_reuse__domain_module0();
	transform_hlds__ctgc__structure_reuse__domain_module1();
	transform_hlds__ctgc__structure_reuse__domain_module2();
	transform_hlds__ctgc__structure_reuse__domain_module3();
	transform_hlds__ctgc__structure_reuse__domain_module4();
	transform_hlds__ctgc__structure_reuse__domain_module5();
	transform_hlds__ctgc__structure_reuse__domain_module6();
	transform_hlds__ctgc__structure_reuse__domain_module7();
	transform_hlds__ctgc__structure_reuse__domain_module8();
	transform_hlds__ctgc__structure_reuse__domain_module9();
	transform_hlds__ctgc__structure_reuse__domain_module10();
	transform_hlds__ctgc__structure_reuse__domain_module11();
	transform_hlds__ctgc__structure_reuse__domain_module12();
	transform_hlds__ctgc__structure_reuse__domain_module13();
	transform_hlds__ctgc__structure_reuse__domain_module14();
	transform_hlds__ctgc__structure_reuse__domain_module15();
	transform_hlds__ctgc__structure_reuse__domain_module16();
	transform_hlds__ctgc__structure_reuse__domain_module17();
	transform_hlds__ctgc__structure_reuse__domain_module18();
	transform_hlds__ctgc__structure_reuse__domain_module19();
	transform_hlds__ctgc__structure_reuse__domain_module20();
	transform_hlds__ctgc__structure_reuse__domain_module21();
	transform_hlds__ctgc__structure_reuse__domain_module22();
	transform_hlds__ctgc__structure_reuse__domain_module23();
	transform_hlds__ctgc__structure_reuse__domain_module24();
	transform_hlds__ctgc__structure_reuse__domain_module25();
	transform_hlds__ctgc__structure_reuse__domain_module26();
	transform_hlds__ctgc__structure_reuse__domain_module27();
	transform_hlds__ctgc__structure_reuse__domain_module28();
	transform_hlds__ctgc__structure_reuse__domain_module29();
	transform_hlds__ctgc__structure_reuse__domain_module30();
	transform_hlds__ctgc__structure_reuse__domain_module31();
	transform_hlds__ctgc__structure_reuse__domain_module32();
	transform_hlds__ctgc__structure_reuse__domain_module33();
	transform_hlds__ctgc__structure_reuse__domain_module34();
	transform_hlds__ctgc__structure_reuse__domain_module35();
	transform_hlds__ctgc__structure_reuse__domain_module36();
	transform_hlds__ctgc__structure_reuse__domain_module37();
	transform_hlds__ctgc__structure_reuse__domain_module38();
	transform_hlds__ctgc__structure_reuse__domain_module39();
}

static void mercury__transform_hlds__ctgc__structure_reuse__domain_maybe_bunch_1(void)
{
	transform_hlds__ctgc__structure_reuse__domain_module40();
	transform_hlds__ctgc__structure_reuse__domain_module41();
	transform_hlds__ctgc__structure_reuse__domain_module42();
	transform_hlds__ctgc__structure_reuse__domain_module43();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__structure_reuse__domain__init(void);
void mercury__transform_hlds__ctgc__structure_reuse__domain__init_type_tables(void);
void mercury__transform_hlds__ctgc__structure_reuse__domain__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__structure_reuse__domain__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__structure_reuse__domain__init_complexity_procs(void);
#endif

void mercury__transform_hlds__ctgc__structure_reuse__domain__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__structure_reuse__domain_maybe_bunch_0();
	mercury__transform_hlds__ctgc__structure_reuse__domain_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_conditions_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_condition_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0,
		transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0);
	mercury__transform_hlds__ctgc__structure_reuse__domain__init_debugger();
}

void mercury__transform_hlds__ctgc__structure_reuse__domain__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_conditions_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0);
	}
}


void mercury__transform_hlds__ctgc__structure_reuse__domain__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__structure_reuse__domain__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__ctgc__structure_reuse__domain);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__structure_reuse__domain__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
