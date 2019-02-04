/*
** Automatically generated from `pred_table.m'
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
INIT mercury__hlds__pred_table__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "hlds.pred_table.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "hlds.pred_table.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 35 "hlds.pred_table.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "hlds.pred_table.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "hlds.pred_table.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "hlds.pred_table.c"
#line 48 "hlds.pred_table.c"
#include "hlds.pred_table.mh"

#line 51 "hlds.pred_table.c"
#line 52 "hlds.pred_table.c"
#ifndef HLDS__PRED_TABLE_DECL_GUARD
#define HLDS__PRED_TABLE_DECL_GUARD

#line 56 "hlds.pred_table.c"
#line 57 "hlds.pred_table.c"

#endif
#line 60 "hlds.pred_table.c"

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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__pred_table__type_ctor_info_accessibility_table_0,
	mercury_data_hlds__pred_table__type_ctor_info_constraint_search_0,
	mercury_data_hlds__pred_table__type_ctor_info_is_fully_qualified_0,
	mercury_data_hlds__pred_table__type_ctor_info_mode_no_0,
	mercury_data_hlds__pred_table__type_ctor_info_module_name_arity_index_0,
	mercury_data_hlds__pred_table__type_ctor_info_name_accessibility_0,
	mercury_data_hlds__pred_table__type_ctor_info_name_arity_0,
	mercury_data_hlds__pred_table__type_ctor_info_name_arity_index_0,
	mercury_data_hlds__pred_table__type_ctor_info_name_index_0,
	mercury_data_hlds__pred_table__type_ctor_info_pred_table_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__pred_table__type_ctor_info_predicate_table_0;
MR_decl_label10(hlds__pred_table__find_matching_pred_id_10_0, 71,4,5,6,7,10,11,12,13,15)
MR_decl_label10(hlds__pred_table__find_matching_pred_id_10_0, 9,17,18,22,24,25,26,40,20,3)
MR_decl_label2(hlds__pred_table__find_matching_pred_id_10_0, 45,1)
MR_decl_label10(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0, 3,4,5,7,2,9,10,11,12,21)
MR_decl_label2(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0, 23,24)
MR_decl_label4(hlds__pred_table__get_pred_id_by_types_10_0, 2,3,4,1)
MR_decl_label10(hlds__pred_table__get_proc_id_3_0, 2,3,4,7,8,9,10,11,13,32)
MR_decl_label5(hlds__pred_table__insert_into_mna_index_6_0, 7,9,2,12,14)
MR_decl_label10(hlds__pred_table__lookup_builtin_pred_proc_id_8_0, 2,7,10,6,12,15,3,21,24,20)
MR_decl_label10(hlds__pred_table__lookup_builtin_pred_proc_id_8_0, 26,29,18,31,36,37,40,41,42,45)
MR_decl_label10(hlds__pred_table__lookup_builtin_pred_proc_id_8_0, 48,49,50,51,52,44,56,55,58,59)
MR_decl_label6(hlds__pred_table__lookup_builtin_pred_proc_id_8_0, 60,61,62,63,64,65)
MR_decl_label2(hlds__pred_table__pred_id_matches_module_3_0, 2,3)
MR_decl_label10(hlds__pred_table__predicate_table_do_insert_14_0, 4,6,3,2,8,9,15,7,16,18)
MR_decl_label3(hlds__pred_table__predicate_table_get_predids_3_0, 3,4,2)
MR_decl_label9(hlds__pred_table__predicate_table_init_1_0, 2,3,4,6,7,10,11,12,13)
MR_decl_label10(hlds__pred_table__predicate_table_insert_4_0, 2,3,4,5,6,9,8,11,7,13)
MR_decl_label10(hlds__pred_table__predicate_table_insert_qual_6_0, 3,4,5,6,7,10,9,12,8,14)
MR_decl_label6(hlds__pred_table__predicate_table_optimize_2_0, 3,4,7,8,9,10)
MR_decl_label10(hlds__pred_table__predicate_table_remove_from_index_10_0, 4,6,8,11,2,14,17,19,21,26)
MR_decl_label10(hlds__pred_table__predicate_table_remove_from_index_10_0, 15,34,35,36,37,40,42,41,39,47)
MR_decl_label1(hlds__pred_table__predicate_table_remove_from_index_10_0, 48)
MR_decl_label10(hlds__pred_table__predicate_table_remove_predicate_3_0, 2,3,4,5,6,7,8,9,12,11)
MR_decl_label1(hlds__pred_table__predicate_table_remove_predicate_3_0, 14)
MR_decl_label2(hlds__pred_table__predicate_table_remove_predid_3_0, 2,3)
MR_decl_label10(hlds__pred_table__predicate_table_restrict_4_0, 2,3,5,6,9,10,11,12,14,16)
MR_decl_label2(hlds__pred_table__predicate_table_restrict_4_0, 17,18)
MR_decl_label5(hlds__pred_table__predicate_table_search_func_m_n_a_6_0, 6,8,13,10,1)
MR_decl_label5(hlds__pred_table__predicate_table_search_func_module_name_5_0, 6,8,9,11,1)
MR_decl_label7(hlds__pred_table__predicate_table_search_func_sym_4_0, 8,10,11,15,13,3,1)
MR_decl_label2(hlds__pred_table__predicate_table_search_func_sym_arity_5_0, 3,1)
MR_decl_label6(hlds__pred_table__predicate_table_search_m_n_a_6_0, 4,2,9,8,12,1)
MR_decl_label7(hlds__pred_table__predicate_table_search_name_3_0, 4,2,6,9,7,12,1)
MR_decl_label7(hlds__pred_table__predicate_table_search_name_arity_4_0, 5,2,7,11,8,14,1)
MR_decl_label1(hlds__pred_table__predicate_table_search_pf_m_n_a_7_0, 3)
MR_decl_label1(hlds__pred_table__predicate_table_search_pf_name_arity_5_0, 3)
MR_decl_label1(hlds__pred_table__predicate_table_search_pf_sym_5_0, 3)
MR_decl_label3(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0, 5,3,1)
MR_decl_label5(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0, 6,8,13,10,1)
MR_decl_label7(hlds__pred_table__predicate_table_search_pred_sym_4_0, 8,10,11,15,13,3,1)
MR_decl_label2(hlds__pred_table__predicate_table_search_pred_sym_arity_5_0, 3,1)
MR_decl_label10(hlds__pred_table__predicate_table_search_sym_4_0, 9,11,12,14,4,20,19,23,3,59)
MR_decl_label1(hlds__pred_table__predicate_table_search_sym_4_0, 1)
MR_decl_label2(hlds__pred_table__predicate_table_search_sym_arity_5_0, 3,1)
MR_decl_label10(hlds__pred_table__reinsert_for_restrict_6_0, 2,3,5,4,7,6,11,12,13,14)
MR_decl_label4(hlds__pred_table__reinsert_for_restrict_6_0, 17,16,19,21)
MR_decl_label7(hlds__pred_table__resolve_pred_overloading_10_0, 2,4,5,3,7,9,8)
MR_decl_label6(hlds__pred_table__univ_constraints_match_2_0, 30,3,6,7,9,1)
MR_decl_label3(__Unify___hlds__pred_table__mode_no_0_0, 10,5,1)
MR_decl_label2(__Unify___hlds__pred_table__name_accessibility_0_0, 4,1)
MR_decl_label2(__Unify___hlds__pred_table__name_arity_0_0, 4,1)
MR_decl_label10(__Unify___hlds__pred_table__predicate_table_0_0, 4,7,9,11,13,15,19,21,23,27)
MR_decl_label1(__Unify___hlds__pred_table__predicate_table_0_0, 1)
MR_decl_label4(__Compare___hlds__pred_table__mode_no_0_0, 18,7,5,9)
MR_decl_label4(__Compare___hlds__pred_table__name_accessibility_0_0, 3,2,5,21)
MR_decl_label4(__Compare___hlds__pred_table__name_arity_0_0, 3,2,5,21)
MR_decl_label10(__Compare___hlds__pred_table__predicate_table_0_0, 3,2,5,9,13,17,21,26,31,38)
MR_decl_label3(__Compare___hlds__pred_table__predicate_table_0_0, 43,48,103)
MR_def_extern_entry(hlds__pred_table__predicate_table_init_1_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_optimize_2_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_get_preds_2_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_get_predids_3_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_restrict_4_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_set_preds_3_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_remove_predid_3_0)
MR_decl_static(hlds__pred_table__predicate_table_remove_from_index_10_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_remove_predicate_3_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_pred_name_3_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_func_name_3_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_name_3_0)
MR_decl_static(hlds__pred_table__predicate_table_search_func_module_name_5_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_sym_4_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_pred_sym_4_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_func_sym_4_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_pred_name_arity_4_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_func_name_arity_4_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_name_arity_4_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_func_m_n_a_6_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_m_n_a_6_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_sym_arity_5_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_pred_sym_arity_5_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_func_sym_arity_5_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_pf_m_n_a_7_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_pf_name_arity_5_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_search_pf_sym_5_0)
MR_decl_static(hlds__pred_table__insert_into_mna_index_6_0)
MR_decl_static(hlds__pred_table__predicate_table_do_insert_14_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_insert_qual_6_0)
MR_def_extern_entry(hlds__pred_table__predicate_table_insert_4_0)
MR_decl_static(hlds__pred_table__univ_constraints_match_2_0)
MR_decl_static(fn__hlds__pred_table__this_file_0_0)
MR_def_extern_entry(hlds__pred_table__find_matching_pred_id_10_0)
MR_def_extern_entry(hlds__pred_table__resolve_pred_overloading_10_0)
MR_def_extern_entry(hlds__pred_table__get_pred_id_by_types_10_0)
MR_def_extern_entry(hlds__pred_table__get_proc_id_3_0)
MR_def_extern_entry(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0)
MR_def_extern_entry(hlds__pred_table__lookup_builtin_pred_proc_id_8_0)
MR_def_extern_entry(hlds__pred_table__get_next_pred_id_2_0)
MR_decl_static(hlds__pred_table__pred_id_matches_module_3_0)
MR_decl_static(hlds__pred_table__reinsert_for_restrict_6_0)
MR_decl_static(__Unify___hlds__pred_table__accessibility_table_0_0)
MR_decl_static(__Compare___hlds__pred_table__accessibility_table_0_0)
MR_def_extern_entry(__Unify___hlds__pred_table__constraint_search_0_0)
MR_def_extern_entry(__Compare___hlds__pred_table__constraint_search_0_0)
MR_def_extern_entry(__Unify___hlds__pred_table__is_fully_qualified_0_0)
MR_def_extern_entry(__Compare___hlds__pred_table__is_fully_qualified_0_0)
MR_def_extern_entry(__Unify___hlds__pred_table__mode_no_0_0)
MR_def_extern_entry(__Compare___hlds__pred_table__mode_no_0_0)
MR_decl_static(__Unify___hlds__pred_table__module_name_arity_index_0_0)
MR_decl_static(__Compare___hlds__pred_table__module_name_arity_index_0_0)
MR_decl_static(__Unify___hlds__pred_table__name_accessibility_0_0)
MR_decl_static(__Compare___hlds__pred_table__name_accessibility_0_0)
MR_decl_static(__Unify___hlds__pred_table__name_arity_0_0)
MR_decl_static(__Compare___hlds__pred_table__name_arity_0_0)
MR_decl_static(__Unify___hlds__pred_table__name_arity_index_0_0)
MR_decl_static(__Compare___hlds__pred_table__name_arity_index_0_0)
MR_decl_static(__Unify___hlds__pred_table__name_index_0_0)
MR_decl_static(__Compare___hlds__pred_table__name_index_0_0)
MR_def_extern_entry(__Unify___hlds__pred_table__pred_table_0_0)
MR_def_extern_entry(__Compare___hlds__pred_table__pred_table_0_0)
MR_def_extern_entry(__Unify___hlds__pred_table__predicate_table_0_0)
MR_def_extern_entry(__Compare___hlds__pred_table__predicate_table_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,4,3),
MR_TAG_COMMON(1,0,2)
}
},
{
{
MR_TAG_COMMON(3,4,2),
MR_TAG_COMMON(1,0,3)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_name_accessibility_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_1 mercury_common_1[8] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__pred_table, name_accessibility)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(0,1)
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
MR_TAG_COMMON(0,1,0),
MR_TAG_COMMON(0,1,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_restrict_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__module_qual__type_ctor_info_partial_qualifier_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_predicate_table_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_do_insert_14_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__pred_table__predicate_table_restrict_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(parse_tree__module_qual, partial_qualifier_info),
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__pred_table, predicate_table),
MR_CTOR0_ADDR(hlds__pred_table, predicate_table)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__pred_table__predicate_table_do_insert_14_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_func_module_name_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_sym_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_pred_sym_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_func_sym_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_pred_m_n_a_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_func_m_n_a_6_0_1;
static const struct mercury_type_3 mercury_common_3[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__pred_table__predicate_table_search_func_module_name_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__pred_table__predicate_table_search_sym_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__pred_table__predicate_table_search_pred_sym_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__pred_table__predicate_table_search_func_sym_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__pred_table__predicate_table_search_pred_m_n_a_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__pred_table__predicate_table_search_func_m_n_a_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_4 mercury_common_4[4] =
{
{
4,
MR_string_const("Error: unresolved predicate overloading, matched", 48)
},
{
4,
MR_string_const("and", 3)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("You need to use an explicit module qualifier.", 45)
},
};

static const struct mercury_type_5 mercury_common_5[5] =
{
{
MR_string_const("(Sorry, confused by earlier errors -- bailing out.)", 51),
MR_tbmkword(0, 0)
},
{
MR_string_const("\' with no modes.\n", 17),
MR_TAG_COMMON(1,5,0)
},
{
MR_string_const("(use an explicit lambda expression instead)", 43),
MR_tbmkword(0, 0)
},
{
MR_string_const("\' with multiple modes.\n", 23),
MR_TAG_COMMON(1,5,2)
},
{
MR_string_const("\'", 1),
MR_tbmkword(0, 0)
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__pred_table__type_ctor_info_name_accessibility_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__pred_table__type_ctor_info_name_accessibility_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_accessibility_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__pred_table__accessibility_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__pred_table__accessibility_table_0_0)),
	"hlds.pred_table",
	"accessibility_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__pred_table__type_ctor_info_name_accessibility_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0
}};

static const MR_VA_TypeInfo_Struct2 mercury_data___vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_constraint_search_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__pred_table__constraint_search_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__pred_table__constraint_search_0_0)),
	"hlds.pred_table",
	"constraint_search",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0 = {
	"is_fully_qualified",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1 = {
	"may_be_partially_qualified",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__pred_table__enum_value_ordered_is_fully_qualified_0[] = {
	&mercury_data_hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
	&mercury_data_hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__pred_table__enum_name_ordered_is_fully_qualified_0[] = {
	&mercury_data_hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
	&mercury_data_hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

const MR_Integer mercury_data_hlds__pred_table__functor_number_map_is_fully_qualified_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_is_fully_qualified_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__pred_table__is_fully_qualified_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__pred_table__is_fully_qualified_0_0)),
	"hlds.pred_table",
	"is_fully_qualified",
	{ (void *)mercury_data_hlds__pred_table__enum_name_ordered_is_fully_qualified_0 },
	{ (void *)mercury_data_hlds__pred_table__enum_value_ordered_is_fully_qualified_0 },
	2,
	4,
	mercury_data_hlds__pred_table__functor_number_map_is_fully_qualified_0
};

static const MR_DuFunctorDesc mercury_data_hlds__pred_table__du_functor_desc_mode_no_0_0 = {
	"only_mode",
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

const MR_PseudoTypeInfo mercury_data_hlds__pred_table__field_types_mode_no_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__pred_table__du_functor_desc_mode_no_0_1 = {
	"mode_no",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__pred_table__field_types_mode_no_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__pred_table__du_stag_ordered_mode_no_0_0[] = {
	&mercury_data_hlds__pred_table__du_functor_desc_mode_no_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__pred_table__du_stag_ordered_mode_no_0_1[] = {
	&mercury_data_hlds__pred_table__du_functor_desc_mode_no_0_1

};

const MR_DuPtagLayout mercury_data_hlds__pred_table__du_ptag_ordered_mode_no_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__pred_table__du_stag_ordered_mode_no_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__pred_table__du_stag_ordered_mode_no_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__pred_table__du_name_ordered_mode_no_0[] = {
	&mercury_data_hlds__pred_table__du_functor_desc_mode_no_0_1,
	&mercury_data_hlds__pred_table__du_functor_desc_mode_no_0_0
};

const MR_Integer mercury_data_hlds__pred_table__functor_number_map_mode_no_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_mode_no_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__pred_table__mode_no_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__pred_table__mode_no_0_0)),
	"hlds.pred_table",
	"mode_no",
	{ (void *)mercury_data_hlds__pred_table__du_name_ordered_mode_no_0 },
	{ (void *)mercury_data_hlds__pred_table__du_ptag_ordered_mode_no_0 },
	2,
	4,
	mercury_data_hlds__pred_table__functor_number_map_mode_no_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_module_name_arity_index_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__pred_table__module_name_arity_index_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__pred_table__module_name_arity_index_0_0)),
	"hlds.pred_table",
	"module_name_arity_index",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_hlds__pred_table__field_types_name_accessibility_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_hlds__pred_table__field_names_name_accessibility_0_0[] = {
	"accessible_by_unqualifed_name",
	"accessible_by_partially_qualified_names"
};

static const MR_DuFunctorDesc mercury_data_hlds__pred_table__du_functor_desc_name_accessibility_0_0 = {
	"access",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__pred_table__field_types_name_accessibility_0_0,
	mercury_data_hlds__pred_table__field_names_name_accessibility_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__pred_table__du_stag_ordered_name_accessibility_0_0[] = {
	&mercury_data_hlds__pred_table__du_functor_desc_name_accessibility_0_0

};

const MR_DuPtagLayout mercury_data_hlds__pred_table__du_ptag_ordered_name_accessibility_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__pred_table__du_stag_ordered_name_accessibility_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__pred_table__du_name_ordered_name_accessibility_0[] = {
	&mercury_data_hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

const MR_Integer mercury_data_hlds__pred_table__functor_number_map_name_accessibility_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_name_accessibility_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__pred_table__name_accessibility_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__pred_table__name_accessibility_0_0)),
	"hlds.pred_table",
	"name_accessibility",
	{ (void *)mercury_data_hlds__pred_table__du_name_ordered_name_accessibility_0 },
	{ (void *)mercury_data_hlds__pred_table__du_ptag_ordered_name_accessibility_0 },
	1,
	4,
	mercury_data_hlds__pred_table__functor_number_map_name_accessibility_0
};

const MR_PseudoTypeInfo mercury_data_hlds__pred_table__field_types_name_arity_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__pred_table__du_functor_desc_name_arity_0_0 = {
	"/",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__pred_table__field_types_name_arity_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__pred_table__du_stag_ordered_name_arity_0_0[] = {
	&mercury_data_hlds__pred_table__du_functor_desc_name_arity_0_0

};

const MR_DuPtagLayout mercury_data_hlds__pred_table__du_ptag_ordered_name_arity_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__pred_table__du_stag_ordered_name_arity_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__pred_table__du_name_ordered_name_arity_0[] = {
	&mercury_data_hlds__pred_table__du_functor_desc_name_arity_0_0
};

const MR_Integer mercury_data_hlds__pred_table__functor_number_map_name_arity_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_name_arity_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__pred_table__name_arity_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__pred_table__name_arity_0_0)),
	"hlds.pred_table",
	"name_arity",
	{ (void *)mercury_data_hlds__pred_table__du_name_ordered_name_arity_0 },
	{ (void *)mercury_data_hlds__pred_table__du_ptag_ordered_name_arity_0 },
	1,
	4,
	mercury_data_hlds__pred_table__functor_number_map_name_arity_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_name_arity_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__pred_table__type_ctor_info_name_arity_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_name_arity_index_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__pred_table__name_arity_index_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__pred_table__name_arity_index_0_0)),
	"hlds.pred_table",
	"name_arity_index",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_name_index_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__pred_table__name_index_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__pred_table__name_index_0_0)),
	"hlds.pred_table",
	"name_index",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_pred_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__pred_table__pred_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__pred_table__pred_table_0_0)),
	"hlds.pred_table",
	"pred_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_info_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__pred_table__field_types_predicate_table_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__pred_table__type_ctor_info_name_accessibility_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_hlds__pred_table__field_names_predicate_table_0_0[] = {
	"preds",
	"next_pred_id",
	"old_pred_ids",
	"new_rev_pred_ids",
	"accessibility_table",
	"pred_name_index",
	"pred_name_arity_index",
	"pred_module_name_arity_index",
	"func_name_index",
	"func_name_arity_index",
	"func_module_name_arity_index"
};

static const MR_DuFunctorDesc mercury_data_hlds__pred_table__du_functor_desc_predicate_table_0_0 = {
	"predicate_table",
	11,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__pred_table__field_types_predicate_table_0_0,
	mercury_data_hlds__pred_table__field_names_predicate_table_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__pred_table__du_stag_ordered_predicate_table_0_0[] = {
	&mercury_data_hlds__pred_table__du_functor_desc_predicate_table_0_0

};

const MR_DuPtagLayout mercury_data_hlds__pred_table__du_ptag_ordered_predicate_table_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__pred_table__du_stag_ordered_predicate_table_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__pred_table__du_name_ordered_predicate_table_0[] = {
	&mercury_data_hlds__pred_table__du_functor_desc_predicate_table_0_0
};

const MR_Integer mercury_data_hlds__pred_table__functor_number_map_predicate_table_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__pred_table__type_ctor_info_predicate_table_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__pred_table__predicate_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__pred_table__predicate_table_0_0)),
	"hlds.pred_table",
	"predicate_table",
	{ (void *)mercury_data_hlds__pred_table__du_name_ordered_predicate_table_0 },
	{ (void *)mercury_data_hlds__pred_table__du_ptag_ordered_predicate_table_0 },
	1,
	4,
	mercury_data_hlds__pred_table__functor_number_map_predicate_table_0
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_do_insert_14_0_1 = {
{
MR_PREDICATE,
"hlds.pred_table",
"hlds.pred_table",
"insert_into_mna_index",
6,
0
},
"hlds.pred_table",
"pred_table.m",
931,
"d1;c16;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_func_m_n_a_6_0_1 = {
{
MR_PREDICATE,
"hlds.pred_table",
"hlds.pred_table",
"pred_id_matches_module",
3,
0
},
"hlds.pred_table",
"pred_table.m",
730,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_pred_m_n_a_6_0_1 = {
{
MR_PREDICATE,
"hlds.pred_table",
"hlds.pred_table",
"pred_id_matches_module",
3,
0
},
"hlds.pred_table",
"pred_table.m",
730,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_func_sym_4_0_1 = {
{
MR_PREDICATE,
"hlds.pred_table",
"hlds.pred_table",
"pred_id_matches_module",
3,
0
},
"hlds.pred_table",
"pred_table.m",
730,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_pred_sym_4_0_1 = {
{
MR_PREDICATE,
"hlds.pred_table",
"hlds.pred_table",
"pred_id_matches_module",
3,
0
},
"hlds.pred_table",
"pred_table.m",
730,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_sym_4_0_1 = {
{
MR_PREDICATE,
"hlds.pred_table",
"hlds.pred_table",
"pred_id_matches_module",
3,
0
},
"hlds.pred_table",
"pred_table.m",
730,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_search_func_module_name_5_0_1 = {
{
MR_PREDICATE,
"hlds.pred_table",
"hlds.pred_table",
"pred_id_matches_module",
3,
0
},
"hlds.pred_table",
"pred_table.m",
730,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__pred_table__predicate_table_restrict_4_0_1 = {
{
MR_PREDICATE,
"hlds.pred_table",
"hlds.pred_table",
"reinsert_for_restrict",
6,
0
},
"hlds.pred_table",
"pred_table.m",
786,
"d1;c8;"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__init_1_0);
MR_decl_entry(fn__hlds__hlds_pred__initial_pred_id_0_0);

MR_BEGIN_MODULE(hlds__pred_table_module0)
	MR_init_entry1(hlds__pred_table__predicate_table_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_init_1_0);
	MR_init_label9(hlds__pred_table__predicate_table_init_1_0,2,3,4,6,7,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__pred_table__predicate_table_init_1_0_i2);
MR_def_label(hlds__pred_table__predicate_table_init_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_pred_id_0_0,
		hlds__pred_table__predicate_table_init_1_0_i3);
MR_def_label(hlds__pred_table__predicate_table_init_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_accessibility);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__pred_table__predicate_table_init_1_0_i4);
MR_def_label(hlds__pred_table__predicate_table_init_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__pred_table__predicate_table_init_1_0_i6);
MR_def_label(hlds__pred_table__predicate_table_init_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__pred_table__predicate_table_init_1_0_i7);
MR_def_label(hlds__pred_table__predicate_table_init_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__pred_table__predicate_table_init_1_0_i10);
MR_def_label(hlds__pred_table__predicate_table_init_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__pred_table__predicate_table_init_1_0_i11);
MR_def_label(hlds__pred_table__predicate_table_init_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__pred_table__predicate_table_init_1_0_i12);
MR_def_label(hlds__pred_table__predicate_table_init_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__pred_table__predicate_table_init_1_0_i13);
MR_def_label(hlds__pred_table__predicate_table_init_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__optimize_2_0);

MR_BEGIN_MODULE(hlds__pred_table_module1)
	MR_init_entry1(hlds__pred_table__predicate_table_optimize_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_optimize_2_0);
	MR_init_label6(hlds__pred_table__predicate_table_optimize_2_0,3,4,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_optimize'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_optimize_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(map__optimize_2_0,
		hlds__pred_table__predicate_table_optimize_2_0_i3);
MR_def_label(hlds__pred_table__predicate_table_optimize_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__optimize_2_0,
		hlds__pred_table__predicate_table_optimize_2_0_i4);
MR_def_label(hlds__pred_table__predicate_table_optimize_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__optimize_2_0,
		hlds__pred_table__predicate_table_optimize_2_0_i7);
MR_def_label(hlds__pred_table__predicate_table_optimize_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__optimize_2_0,
		hlds__pred_table__predicate_table_optimize_2_0_i8);
MR_def_label(hlds__pred_table__predicate_table_optimize_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__optimize_2_0,
		hlds__pred_table__predicate_table_optimize_2_0_i9);
MR_def_label(hlds__pred_table__predicate_table_optimize_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__optimize_2_0,
		hlds__pred_table__predicate_table_optimize_2_0_i10);
MR_def_label(hlds__pred_table__predicate_table_optimize_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module2)
	MR_init_entry1(hlds__pred_table__predicate_table_get_preds_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_get_preds_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_get_preds'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_get_preds_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__pred_table_module3)
	MR_init_entry1(hlds__pred_table__predicate_table_get_predids_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_get_predids_3_0);
	MR_init_label3(hlds__pred_table__predicate_table_get_predids_3_0,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_get_predids'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_get_predids_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_get_predids_3_0_i3);
	}
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 4);
	MR_GOTO_LAB(hlds__pred_table__predicate_table_get_predids_3_0_i2);
	}
MR_def_label(hlds__pred_table__predicate_table_get_predids_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__pred_table__predicate_table_get_predids_3_0_i4);
MR_def_label(hlds__pred_table__predicate_table_get_predids_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__pred_table__predicate_table_get_predids_3_0_i2);
MR_def_label(hlds__pred_table__predicate_table_get_predids_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(4);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(list__sort_2_0);

MR_BEGIN_MODULE(hlds__pred_table_module4)
	MR_init_entry1(hlds__pred_table__predicate_table_restrict_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_restrict_4_0);
	MR_init_label10(hlds__pred_table__predicate_table_restrict_4_0,2,3,5,6,9,10,11,12,14,16)
	MR_init_label2(hlds__pred_table__predicate_table_restrict_4_0,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_restrict'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_restrict_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__pred_table__predicate_table_restrict_4_0_i2);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_accessibility);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__pred_table__predicate_table_restrict_4_0_i3);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__pred_table__predicate_table_restrict_4_0_i5);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__pred_table__predicate_table_restrict_4_0_i6);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__pred_table__predicate_table_restrict_4_0_i9);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__pred_table__predicate_table_restrict_4_0_i10);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__pred_table__predicate_table_restrict_4_0_i11);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__pred_table__predicate_table_restrict_4_0_i12);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 10) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		hlds__pred_table__predicate_table_restrict_4_0_i14);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__pred_table__reinsert_for_restrict_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_sv(3), 4);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, predicate_table);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__pred_table__predicate_table_restrict_4_0_i16);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_predids_3_0,
		hlds__pred_table__predicate_table_restrict_4_0_i17);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		hlds__pred_table__predicate_table_restrict_4_0_i18);
MR_def_label(hlds__pred_table__predicate_table_restrict_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module5)
	MR_init_entry1(hlds__pred_table__predicate_table_set_preds_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_set_preds_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_set_preds'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_set_preds_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_all_3_1);

MR_BEGIN_MODULE(hlds__pred_table_module6)
	MR_init_entry1(hlds__pred_table__predicate_table_remove_predid_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_remove_predid_3_0);
	MR_init_label2(hlds__pred_table__predicate_table_remove_predid_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_remove_predid'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_remove_predid_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__delete_all_3_1,
		hlds__pred_table__predicate_table_remove_predid_3_0_i2);
MR_def_label(hlds__pred_table__predicate_table_remove_predid_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__delete_all_3_1,
		hlds__pred_table__predicate_table_remove_predid_3_0_i3);
MR_def_label(hlds__pred_table__predicate_table_remove_predid_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(map__delete_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__pred_table_module7)
	MR_init_entry1(hlds__pred_table__predicate_table_remove_from_index_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_remove_from_index_10_0);
	MR_init_label10(hlds__pred_table__predicate_table_remove_from_index_10_0,4,6,8,11,2,14,17,19,21,26)
	MR_init_label10(hlds__pred_table__predicate_table_remove_from_index_10_0,15,34,35,36,37,40,42,41,39,47)
	MR_init_label1(hlds__pred_table__predicate_table_remove_from_index_10_0,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_remove_from_index'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__pred_table__predicate_table_remove_from_index_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i4);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_remove_from_index_10_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__delete_all_3_1,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i6);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_remove_from_index_10_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__delete_3_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i11);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i11);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_sv(5) = MR_r1;
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(hlds__pred_table__predicate_table_remove_from_index_10_0_i14);
	}
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_sv(6);
	}
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i17);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_remove_from_index_10_0_i15);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__delete_all_3_1,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i19);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_remove_from_index_10_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(map__delete_3_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i26);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i26);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_GOTO_LAB(hlds__pred_table__predicate_table_remove_from_index_10_0_i34);
	}
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(1) = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	}
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i35);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i36);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__delete_all_3_1,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i37);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_remove_from_index_10_0_i39);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__delete_3_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i40);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i42);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_remove_from_index_10_0_i41);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__delete_3_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i48);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i48);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i47);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__pred_table__predicate_table_remove_from_index_10_0_i48);
MR_def_label(hlds__pred_table__predicate_table_remove_from_index_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_remove_4_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);

MR_BEGIN_MODULE(hlds__pred_table_module8)
	MR_init_entry1(hlds__pred_table__predicate_table_remove_predicate_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_remove_predicate_3_0);
	MR_init_label10(hlds__pred_table__predicate_table_remove_predicate_3_0,2,3,4,5,6,7,8,9,12,11)
	MR_init_label1(hlds__pred_table__predicate_table_remove_predicate_3_0,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_remove_predicate'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_remove_predicate_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__delete_all_3_1,
		hlds__pred_table__predicate_table_remove_predicate_3_0_i2);
MR_def_label(hlds__pred_table__predicate_table_remove_predicate_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__delete_all_3_1,
		hlds__pred_table__predicate_table_remove_predicate_3_0_i3);
MR_def_label(hlds__pred_table__predicate_table_remove_predicate_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_remove_4_0,
		hlds__pred_table__predicate_table_remove_predicate_3_0_i4);
MR_def_label(hlds__pred_table__predicate_table_remove_predicate_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_accessibility);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_remove_4_0,
		hlds__pred_table__predicate_table_remove_predicate_3_0_i5);
MR_def_label(hlds__pred_table__predicate_table_remove_predicate_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__pred_table__predicate_table_remove_predicate_3_0_i6);
MR_def_label(hlds__pred_table__predicate_table_remove_predicate_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__pred_table__predicate_table_remove_predicate_3_0_i7);
MR_def_label(hlds__pred_table__predicate_table_remove_predicate_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		hlds__pred_table__predicate_table_remove_predicate_3_0_i8);
MR_def_label(hlds__pred_table__predicate_table_remove_predicate_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__pred_table__predicate_table_remove_predicate_3_0_i9);
MR_def_label(hlds__pred_table__predicate_table_remove_predicate_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_remove_predicate_3_0_i11);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_remove_from_index_10_0,
		hlds__pred_table__predicate_table_remove_predicate_3_0_i12);
MR_def_label(hlds__pred_table__predicate_table_remove_predicate_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_r2;
	MR_tfield(0, MR_tempr1, 10) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
MR_def_label(hlds__pred_table__predicate_table_remove_predicate_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_remove_from_index_10_0,
		hlds__pred_table__predicate_table_remove_predicate_3_0_i14);
MR_def_label(hlds__pred_table__predicate_table_remove_predicate_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_r2;
	MR_tfield(0, MR_tempr1, 7) = MR_r3;
	MR_tfield(0, MR_tempr1, 8) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(11);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module9)
	MR_init_entry1(hlds__pred_table__predicate_table_search_pred_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_pred_name_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_pred_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_pred_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module10)
	MR_init_entry1(hlds__pred_table__predicate_table_search_func_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_func_name_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_func_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_func_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr1, 8);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(hlds__pred_table_module11)
	MR_init_entry1(hlds__pred_table__predicate_table_search_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_name_3_0);
	MR_init_label7(hlds__pred_table__predicate_table_search_name_3_0,4,2,6,9,7,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_search_name_3_0_i4);
MR_def_label(hlds__pred_table__predicate_table_search_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_name_3_0_i2);
	}
	MR_r4 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(hlds__pred_table__predicate_table_search_name_3_0_i6);
MR_def_label(hlds__pred_table__predicate_table_search_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(hlds__pred_table__predicate_table_search_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_search_name_3_0_i9);
MR_def_label(hlds__pred_table__predicate_table_search_name_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_name_3_0_i7);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__pred_table__predicate_table_search_name_3_0_i12);
MR_def_label(hlds__pred_table__predicate_table_search_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__pred_table__predicate_table_search_name_3_0_i12);
MR_def_label(hlds__pred_table__predicate_table_search_name_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_name_3_0_i1);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__pred_table__predicate_table_search_name_3_0,1)
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

MR_decl_entry(map__values_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(hlds__pred_table_module12)
	MR_init_entry1(hlds__pred_table__predicate_table_search_func_module_name_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_func_module_name_5_0);
	MR_init_label5(hlds__pred_table__predicate_table_search_func_module_name_5_0,6,8,9,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_func_module_name'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__pred_table__predicate_table_search_func_module_name_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(0, MR_sv(1), 10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_search_func_module_name_5_0_i6);
MR_def_label(hlds__pred_table__predicate_table_search_func_module_name_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_module_name_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__values_2_0,
		hlds__pred_table__predicate_table_search_func_module_name_5_0_i8);
MR_def_label(hlds__pred_table__predicate_table_search_func_module_name_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		hlds__pred_table__predicate_table_search_func_module_name_5_0_i9);
MR_def_label(hlds__pred_table__predicate_table_search_func_module_name_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_module_name_5_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__pred_table__pred_id_matches_module_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__pred_table__predicate_table_search_func_module_name_5_0_i11);
MR_def_label(hlds__pred_table__predicate_table_search_func_module_name_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__pred_table__predicate_table_search_func_module_name_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module13)
	MR_init_entry1(hlds__pred_table__predicate_table_search_sym_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_sym_4_0);
	MR_init_label10(hlds__pred_table__predicate_table_search_sym_4_0,9,11,12,14,4,20,19,23,3,59)
	MR_init_label1(hlds__pred_table__predicate_table_search_sym_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_sym'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_sym_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_sym_4_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(0, MR_sv(1), 7);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_search_sym_4_0_i9);
MR_def_label(hlds__pred_table__predicate_table_search_sym_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_sym_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__values_2_0,
		hlds__pred_table__predicate_table_search_sym_4_0_i11);
MR_def_label(hlds__pred_table__predicate_table_search_sym_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		hlds__pred_table__predicate_table_search_sym_4_0_i12);
MR_def_label(hlds__pred_table__predicate_table_search_sym_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_sym_4_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__pred_table__pred_id_matches_module_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__pred_table__predicate_table_search_sym_4_0_i14);
MR_def_label(hlds__pred_table__predicate_table_search_sym_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_tempr2 = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_func_module_name_5_0,
		hlds__pred_table__predicate_table_search_sym_4_0_i20);
MR_def_label(hlds__pred_table__predicate_table_search_sym_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_func_module_name_5_0,
		hlds__pred_table__predicate_table_search_sym_4_0_i20);
MR_def_label(hlds__pred_table__predicate_table_search_sym_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_sym_4_0_i19);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__pred_table__predicate_table_search_sym_4_0_i23);
MR_def_label(hlds__pred_table__predicate_table_search_sym_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__pred_table__predicate_table_search_sym_4_0_i23);
MR_def_label(hlds__pred_table__predicate_table_search_sym_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_sym_4_0_i1);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(hlds__pred_table__predicate_table_search_sym_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_sym_4_0_i59);
	}
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_name_3_0);
MR_def_label(hlds__pred_table__predicate_table_search_sym_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__pred_table__predicate_table_search_sym_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module14)
	MR_init_entry1(hlds__pred_table__predicate_table_search_pred_sym_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_pred_sym_4_0);
	MR_init_label7(hlds__pred_table__predicate_table_search_pred_sym_4_0,8,10,11,15,13,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_pred_sym'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_pred_sym_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pred_sym_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(0, MR_sv(1), 7);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_search_pred_sym_4_0_i8);
MR_def_label(hlds__pred_table__predicate_table_search_pred_sym_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pred_sym_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__values_2_0,
		hlds__pred_table__predicate_table_search_pred_sym_4_0_i10);
MR_def_label(hlds__pred_table__predicate_table_search_pred_sym_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		hlds__pred_table__predicate_table_search_pred_sym_4_0_i11);
MR_def_label(hlds__pred_table__predicate_table_search_pred_sym_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pred_sym_4_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__pred_table__pred_id_matches_module_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__pred_table__predicate_table_search_pred_sym_4_0_i15);
MR_def_label(hlds__pred_table__predicate_table_search_pred_sym_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pred_sym_4_0_i1);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__pred_table__predicate_table_search_pred_sym_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pred_sym_4_0_i1);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__pred_table__predicate_table_search_pred_sym_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pred_sym_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__search_3_0);
	}
MR_def_label(hlds__pred_table__predicate_table_search_pred_sym_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module15)
	MR_init_entry1(hlds__pred_table__predicate_table_search_func_sym_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_func_sym_4_0);
	MR_init_label7(hlds__pred_table__predicate_table_search_func_sym_4_0,8,10,11,15,13,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_func_sym'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_func_sym_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_sym_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(0, MR_sv(1), 10);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_search_func_sym_4_0_i8);
MR_def_label(hlds__pred_table__predicate_table_search_func_sym_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_sym_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__values_2_0,
		hlds__pred_table__predicate_table_search_func_sym_4_0_i10);
MR_def_label(hlds__pred_table__predicate_table_search_func_sym_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		hlds__pred_table__predicate_table_search_func_sym_4_0_i11);
MR_def_label(hlds__pred_table__predicate_table_search_func_sym_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_sym_4_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__pred_table__pred_id_matches_module_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__pred_table__predicate_table_search_func_sym_4_0_i15);
MR_def_label(hlds__pred_table__predicate_table_search_func_sym_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_sym_4_0_i1);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__pred_table__predicate_table_search_func_sym_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_sym_4_0_i1);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__pred_table__predicate_table_search_func_sym_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_sym_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(0, MR_sv(1), 8);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__search_3_0);
	}
MR_def_label(hlds__pred_table__predicate_table_search_func_sym_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module16)
	MR_init_entry1(hlds__pred_table__predicate_table_search_pred_name_arity_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_pred_name_arity_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_pred_name_arity'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_pred_name_arity_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module17)
	MR_init_entry1(hlds__pred_table__predicate_table_search_func_name_arity_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_func_name_arity_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_func_name_arity'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_func_name_arity_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr2, 9);
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module18)
	MR_init_entry1(hlds__pred_table__predicate_table_search_name_arity_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_name_arity_4_0);
	MR_init_label7(hlds__pred_table__predicate_table_search_name_arity_4_0,5,2,7,11,8,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_name_arity'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_name_arity_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_sv(1), 6);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_search_name_arity_4_0_i5);
MR_def_label(hlds__pred_table__predicate_table_search_name_arity_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_name_arity_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(hlds__pred_table__predicate_table_search_name_arity_4_0_i7);
MR_def_label(hlds__pred_table__predicate_table_search_name_arity_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(hlds__pred_table__predicate_table_search_name_arity_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr2, 9);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_search_name_arity_4_0_i11);
MR_def_label(hlds__pred_table__predicate_table_search_name_arity_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_name_arity_4_0_i8);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__pred_table__predicate_table_search_name_arity_4_0_i14);
MR_def_label(hlds__pred_table__predicate_table_search_name_arity_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__pred_table__predicate_table_search_name_arity_4_0_i14);
MR_def_label(hlds__pred_table__predicate_table_search_name_arity_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_name_arity_4_0_i1);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__pred_table__predicate_table_search_name_arity_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__pred_table_module19)
	MR_init_entry1(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_pred_m_n_a_6_0);
	MR_init_label5(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0,6,8,13,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_pred_m_n_a'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_pred_m_n_a_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(0, MR_sv(1), 7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_search_pred_m_n_a_6_0_i6);
MR_def_label(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		hlds__pred_table__predicate_table_search_pred_m_n_a_6_0_i8);
MR_def_label(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0_i1);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__pred_table__pred_id_matches_module_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__pred_table__predicate_table_search_pred_m_n_a_6_0_i13);
MR_def_label(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0,1)
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


MR_BEGIN_MODULE(hlds__pred_table_module20)
	MR_init_entry1(hlds__pred_table__predicate_table_search_func_m_n_a_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_func_m_n_a_6_0);
	MR_init_label5(hlds__pred_table__predicate_table_search_func_m_n_a_6_0,6,8,13,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_func_m_n_a'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_func_m_n_a_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(0, MR_sv(1), 10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__predicate_table_search_func_m_n_a_6_0_i6);
MR_def_label(hlds__pred_table__predicate_table_search_func_m_n_a_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_m_n_a_6_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		hlds__pred_table__predicate_table_search_func_m_n_a_6_0_i8);
MR_def_label(hlds__pred_table__predicate_table_search_func_m_n_a_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_m_n_a_6_0_i1);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_m_n_a_6_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__pred_table__pred_id_matches_module_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__pred_table__predicate_table_search_func_m_n_a_6_0_i13);
MR_def_label(hlds__pred_table__predicate_table_search_func_m_n_a_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(hlds__pred_table__predicate_table_search_func_m_n_a_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__pred_table__predicate_table_search_func_m_n_a_6_0,1)
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


MR_BEGIN_MODULE(hlds__pred_table_module21)
	MR_init_entry1(hlds__pred_table__predicate_table_search_m_n_a_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_m_n_a_6_0);
	MR_init_label6(hlds__pred_table__predicate_table_search_m_n_a_6_0,4,2,9,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_m_n_a'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_m_n_a_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0,
		hlds__pred_table__predicate_table_search_m_n_a_6_0_i4);
MR_def_label(hlds__pred_table__predicate_table_search_m_n_a_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_m_n_a_6_0_i2);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_func_m_n_a_6_0,
		hlds__pred_table__predicate_table_search_m_n_a_6_0_i9);
MR_def_label(hlds__pred_table__predicate_table_search_m_n_a_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_func_m_n_a_6_0,
		hlds__pred_table__predicate_table_search_m_n_a_6_0_i9);
MR_def_label(hlds__pred_table__predicate_table_search_m_n_a_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_m_n_a_6_0_i8);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__pred_table__predicate_table_search_m_n_a_6_0_i12);
MR_def_label(hlds__pred_table__predicate_table_search_m_n_a_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__pred_table__predicate_table_search_m_n_a_6_0_i12);
MR_def_label(hlds__pred_table__predicate_table_search_m_n_a_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_m_n_a_6_0_i1);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__pred_table__predicate_table_search_m_n_a_6_0,1)
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


MR_BEGIN_MODULE(hlds__pred_table_module22)
	MR_init_entry1(hlds__pred_table__predicate_table_search_sym_arity_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_sym_arity_5_0);
	MR_init_label2(hlds__pred_table__predicate_table_search_sym_arity_5_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_sym_arity'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_sym_arity_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_sym_arity_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_m_n_a_6_0);
	}
MR_def_label(hlds__pred_table__predicate_table_search_sym_arity_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_sym_arity_5_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_name_arity_4_0);
MR_def_label(hlds__pred_table__predicate_table_search_sym_arity_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module23)
	MR_init_entry1(hlds__pred_table__predicate_table_search_pred_sym_arity_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_pred_sym_arity_5_0);
	MR_init_label2(hlds__pred_table__predicate_table_search_pred_sym_arity_5_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_pred_sym_arity'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_pred_sym_arity_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pred_sym_arity_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0);
	}
MR_def_label(hlds__pred_table__predicate_table_search_pred_sym_arity_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pred_sym_arity_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(map__search_3_0);
	}
MR_def_label(hlds__pred_table__predicate_table_search_pred_sym_arity_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module24)
	MR_init_entry1(hlds__pred_table__predicate_table_search_func_sym_arity_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_func_sym_arity_5_0);
	MR_init_label2(hlds__pred_table__predicate_table_search_func_sym_arity_5_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_func_sym_arity'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_func_sym_arity_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_sym_arity_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_func_m_n_a_6_0);
	}
MR_def_label(hlds__pred_table__predicate_table_search_func_sym_arity_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_func_sym_arity_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr2, 9);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(map__search_3_0);
	}
MR_def_label(hlds__pred_table__predicate_table_search_func_sym_arity_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module25)
	MR_init_entry1(hlds__pred_table__predicate_table_search_pf_m_n_a_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_pf_m_n_a_7_0);
	MR_init_label1(hlds__pred_table__predicate_table_search_pf_m_n_a_7_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_pf_m_n_a'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_pf_m_n_a_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pf_m_n_a_7_0_i3);
	}
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = ((MR_Integer) MR_r6 - (MR_Integer) 1);
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_func_m_n_a_6_0);
MR_def_label(hlds__pred_table__predicate_table_search_pf_m_n_a_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module26)
	MR_init_entry1(hlds__pred_table__predicate_table_search_pf_name_arity_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_pf_name_arity_5_0);
	MR_init_label1(hlds__pred_table__predicate_table_search_pf_name_arity_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_pf_name_arity'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_pf_name_arity_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pf_name_arity_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr2, 9);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(map__search_3_0);
	}
MR_def_label(hlds__pred_table__predicate_table_search_pf_name_arity_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module27)
	MR_init_entry1(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_pf_sym_arity_6_0);
	MR_init_label3(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_pf_sym_arity'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_pf_sym_arity_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0_i3);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0_i5);
	}
	MR_r3 = MR_tfield(1, MR_r4, 0);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_r5 = ((MR_Integer) MR_r5 - (MR_Integer) 1);
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_func_m_n_a_6_0);
MR_def_label(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r4, 0);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0);
MR_def_label(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0_i1);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_r4, 0);
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_pf_name_arity_5_0);
MR_def_label(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module28)
	MR_init_entry1(hlds__pred_table__predicate_table_search_pf_sym_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_search_pf_sym_5_0);
	MR_init_label1(hlds__pred_table__predicate_table_search_pf_sym_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_search_pf_sym'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_search_pf_sym_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_search_pf_sym_5_0_i3);
	}
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_func_sym_4_0);
MR_def_label(hlds__pred_table__predicate_table_search_pf_sym_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_search_pred_sym_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(multi_map__set_4_0);
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(hlds__pred_table_module29)
	MR_init_entry1(hlds__pred_table__insert_into_mna_index_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__insert_into_mna_index_6_0);
	MR_init_label5(hlds__pred_table__insert_into_mna_index_6_0,7,9,2,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_into_mna_index'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__pred_table__insert_into_mna_index_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__pred_table__insert_into_mna_index_6_0_i7);
MR_def_label(hlds__pred_table__insert_into_mna_index_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__insert_into_mna_index_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(multi_map__set_4_0,
		hlds__pred_table__insert_into_mna_index_6_0_i9);
MR_def_label(hlds__pred_table__insert_into_mna_index_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(svmap__det_update_4_0);
	}
MR_def_label(hlds__pred_table__insert_into_mna_index_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__pred_table__insert_into_mna_index_6_0_i12);
MR_def_label(hlds__pred_table__insert_into_mna_index_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		hlds__pred_table__insert_into_mna_index_6_0_i14);
MR_def_label(hlds__pred_table__insert_into_mna_index_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svmulti_map__set_4_0);
MR_decl_entry(parse_tree__module_qual__get_partial_qualifiers_3_0);
MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(hlds__pred_table_module30)
	MR_init_entry1(hlds__pred_table__predicate_table_do_insert_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_do_insert_14_0);
	MR_init_label10(hlds__pred_table__predicate_table_do_insert_14_0,4,6,3,2,8,9,15,7,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_do_insert'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__pred_table__predicate_table_do_insert_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_do_insert_14_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r8;
	}
	MR_np_call_localret_ent(svmulti_map__set_4_0,
		hlds__pred_table__predicate_table_do_insert_14_0_i4);
MR_def_label(hlds__pred_table__predicate_table_do_insert_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(svmulti_map__set_4_0,
		hlds__pred_table__predicate_table_do_insert_14_0_i6);
MR_def_label(hlds__pred_table__predicate_table_do_insert_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r6 = (MR_Integer) 1;
	MR_r5 = MR_sv(9);
	MR_GOTO_LAB(hlds__pred_table__predicate_table_do_insert_14_0_i2);
MR_def_label(hlds__pred_table__predicate_table_do_insert_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r3 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_r5 = MR_r10;
MR_def_label(hlds__pred_table__predicate_table_do_insert_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_do_insert_14_0_i8);
	}
	MR_sv(4) = MR_r6;
	MR_sv(1) = (MR_Integer) 0;
	MR_GOTO_LAB(hlds__pred_table__predicate_table_do_insert_14_0_i7);
MR_def_label(hlds__pred_table__predicate_table_do_insert_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r6;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__module_qual__get_partial_qualifiers_3_0,
		hlds__pred_table__predicate_table_do_insert_14_0_i9);
MR_def_label(hlds__pred_table__predicate_table_do_insert_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__pred_table__insert_into_mna_index_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__pred_table__predicate_table_do_insert_14_0_i15);
MR_def_label(hlds__pred_table__predicate_table_do_insert_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_sv(1) = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	}
MR_def_label(hlds__pred_table__predicate_table_do_insert_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(hlds__pred_table__insert_into_mna_index_6_0,
		hlds__pred_table__predicate_table_do_insert_14_0_i16);
MR_def_label(hlds__pred_table__predicate_table_do_insert_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_accessibility);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		hlds__pred_table__predicate_table_do_insert_14_0_i18);
MR_def_label(hlds__pred_table__predicate_table_do_insert_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__next_pred_id_2_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(hlds__pred_table_module31)
	MR_init_entry1(hlds__pred_table__predicate_table_insert_qual_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_insert_qual_6_0);
	MR_init_label10(hlds__pred_table__predicate_table_insert_qual_6_0,3,4,5,6,7,10,9,12,8,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_insert_qual'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_insert_qual_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 10);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__pred_table__predicate_table_insert_qual_6_0_i3);
MR_def_label(hlds__pred_table__predicate_table_insert_qual_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__pred_table__predicate_table_insert_qual_6_0_i4);
MR_def_label(hlds__pred_table__predicate_table_insert_qual_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		hlds__pred_table__predicate_table_insert_qual_6_0_i5);
MR_def_label(hlds__pred_table__predicate_table_insert_qual_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__next_pred_id_2_0,
		hlds__pred_table__predicate_table_insert_qual_6_0_i6);
MR_def_label(hlds__pred_table__predicate_table_insert_qual_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__pred_table__predicate_table_insert_qual_6_0_i7);
MR_def_label(hlds__pred_table__predicate_table_insert_qual_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_insert_qual_6_0_i9);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = ((MR_Integer) MR_sv(17) - (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(14);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_do_insert_14_0,
		hlds__pred_table__predicate_table_insert_qual_6_0_i10);
MR_def_label(hlds__pred_table__predicate_table_insert_qual_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r7 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_sv(8) = MR_r3;
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_sv(9);
	MR_sv(4) = MR_sv(10);
	MR_sv(5) = MR_sv(11);
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r7;
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_GOTO_LAB(hlds__pred_table__predicate_table_insert_qual_6_0_i8);
	}
MR_def_label(hlds__pred_table__predicate_table_insert_qual_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(11);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_do_insert_14_0,
		hlds__pred_table__predicate_table_insert_qual_6_0_i12);
MR_def_label(hlds__pred_table__predicate_table_insert_qual_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_sv(4) = MR_r3;
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_tempr2;
	MR_sv(7) = MR_sv(12);
	MR_sv(8) = MR_sv(13);
	MR_sv(9) = MR_sv(14);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	}
MR_def_label(hlds__pred_table__predicate_table_insert_qual_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__pred_table__predicate_table_insert_qual_6_0_i14);
MR_def_label(hlds__pred_table__predicate_table_insert_qual_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(9);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module32)
	MR_init_entry1(hlds__pred_table__predicate_table_insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__predicate_table_insert_4_0);
	MR_init_label10(hlds__pred_table__predicate_table_insert_4_0,2,3,4,5,6,9,8,11,7,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_table_insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__predicate_table_insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 10);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__pred_table__predicate_table_insert_4_0_i2);
MR_def_label(hlds__pred_table__predicate_table_insert_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__pred_table__predicate_table_insert_4_0_i3);
MR_def_label(hlds__pred_table__predicate_table_insert_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		hlds__pred_table__predicate_table_insert_4_0_i4);
MR_def_label(hlds__pred_table__predicate_table_insert_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__next_pred_id_2_0,
		hlds__pred_table__predicate_table_insert_4_0_i5);
MR_def_label(hlds__pred_table__predicate_table_insert_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__pred_table__predicate_table_insert_4_0_i6);
MR_def_label(hlds__pred_table__predicate_table_insert_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__pred_table__predicate_table_insert_4_0_i8);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = ((MR_Integer) MR_sv(15) - (MR_Integer) 1);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(11);
	MR_r10 = MR_sv(12);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_do_insert_14_0,
		hlds__pred_table__predicate_table_insert_4_0_i9);
MR_def_label(hlds__pred_table__predicate_table_insert_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r7 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_sv(7);
	MR_sv(5) = MR_sv(8);
	MR_sv(6) = MR_sv(9);
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_GOTO_LAB(hlds__pred_table__predicate_table_insert_4_0_i7);
	}
MR_def_label(hlds__pred_table__predicate_table_insert_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_do_insert_14_0,
		hlds__pred_table__predicate_table_insert_4_0_i11);
MR_def_label(hlds__pred_table__predicate_table_insert_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_sv(6) = MR_r4;
	MR_r4 = MR_tempr2;
	MR_sv(5) = MR_r3;
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_sv(10);
	MR_sv(8) = MR_sv(11);
	MR_sv(9) = MR_sv(12);
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	}
MR_def_label(hlds__pred_table__predicate_table_insert_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__pred_table__predicate_table_insert_4_0_i13);
MR_def_label(hlds__pred_table__predicate_table_insert_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(9);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(hlds__pred_table_module33)
	MR_init_entry1(hlds__pred_table__univ_constraints_match_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__univ_constraints_match_2_0);
	MR_init_label6(hlds__pred_table__univ_constraints_match_2_0,30,3,6,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_constraints_match'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__pred_table__univ_constraints_match_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__pred_table__univ_constraints_match_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__univ_constraints_match_2_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(6);
MR_def_label(hlds__pred_table__univ_constraints_match_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__univ_constraints_match_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__length_2_0,
		hlds__pred_table__univ_constraints_match_2_0_i6);
MR_def_label(hlds__pred_table__univ_constraints_match_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		hlds__pred_table__univ_constraints_match_2_0_i7);
MR_def_label(hlds__pred_table__univ_constraints_match_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__univ_constraints_match_2_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__pred_table__univ_constraints_match_2_0_i9);
MR_def_label(hlds__pred_table__univ_constraints_match_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__univ_constraints_match_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__pred_table__univ_constraints_match_2_0_i30);
MR_def_label(hlds__pred_table__univ_constraints_match_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module34)
	MR_init_entry1(fn__hlds__pred_table__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__pred_table__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__pred_table__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pred_table.m", 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_tvar_kinds_2_0);
MR_decl_entry(parse_tree__prog_type__arg_type_list_subsumes_8_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(hlds__hlds_pred__pred_info_get_call_id_2_0);
MR_decl_entry(parse_tree__error_util__write_error_pieces_5_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(hlds__pred_table_module35)
	MR_init_entry1(hlds__pred_table__find_matching_pred_id_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__find_matching_pred_id_10_0);
	MR_init_label10(hlds__pred_table__find_matching_pred_id_10_0,71,4,5,6,7,10,11,12,13,15)
	MR_init_label10(hlds__pred_table__find_matching_pred_id_10_0,9,17,18,22,24,25,26,40,20,3)
	MR_init_label2(hlds__pred_table__find_matching_pred_id_10_0,45,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_matching_pred_id'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__find_matching_pred_id_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__find_matching_pred_id_10_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__pred_table__find_matching_pred_id_10_0_i4);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		hlds__pred_table__find_matching_pred_id_10_0_i5);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_tvar_kinds_2_0,
		hlds__pred_table__find_matching_pred_id_10_0_i6);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__arg_type_list_subsumes_8_0,
		hlds__pred_table__find_matching_pred_id_10_0_i7);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__find_matching_pred_id_10_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__pred_table__find_matching_pred_id_10_0_i10);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__pred_table__find_matching_pred_id_10_0_i9);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_tfield(1, MR_sv(8), 0);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		hlds__pred_table__find_matching_pred_id_10_0_i11);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__pred_table__find_matching_pred_id_10_0_i12);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__pred_table__find_matching_pred_id_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__hlds__pred_table__find_matching_pred_id_10_0_i13);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__find_matching_pred_id_10_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__pred_table__univ_constraints_match_2_0,
		hlds__pred_table__find_matching_pred_id_10_0_i15);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__find_matching_pred_id_10_0_i3);
	}
	MR_r1 = MR_sv(10);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__pred_table__find_matching_pred_id_10_0_i17);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__pred_table__find_matching_pred_id_10_0_i18);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(11);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	}
	MR_np_localcall_lab(hlds__pred_table__find_matching_pred_id_10_0,
		hlds__pred_table__find_matching_pred_id_10_0_i22);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__find_matching_pred_id_10_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__pred_table__find_matching_pred_id_10_0_i24);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_call_id_2_0,
		hlds__pred_table__find_matching_pred_id_10_0_i25);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_call_id_2_0,
		hlds__pred_table__find_matching_pred_id_10_0_i26);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_5_0,
		hlds__pred_table__find_matching_pred_id_10_0_i40);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pred_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("find_matching_pred_id: unresolvable predicate overloading", 57);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__pred_table__find_matching_pred_id_10_0_i45);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(14);
	}
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(hlds__pred_table__find_matching_pred_id_10_0_i71);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(14);
MR_def_label(hlds__pred_table__find_matching_pred_id_10_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0);

MR_BEGIN_MODULE(hlds__pred_table_module36)
	MR_init_entry1(hlds__pred_table__resolve_pred_overloading_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__resolve_pred_overloading_10_0);
	MR_init_label7(hlds__pred_table__resolve_pred_overloading_10_0,2,4,5,3,7,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'resolve_pred_overloading'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__resolve_pred_overloading_10_0);
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
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__pred_table__resolve_pred_overloading_10_0_i2);
MR_def_label(hlds__pred_table__resolve_pred_overloading_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0,
		hlds__pred_table__resolve_pred_overloading_10_0_i4);
MR_def_label(hlds__pred_table__resolve_pred_overloading_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pred_sym_4_0,
		hlds__pred_table__resolve_pred_overloading_10_0_i5);
MR_def_label(hlds__pred_table__resolve_pred_overloading_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__resolve_pred_overloading_10_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_GOTO_LAB(hlds__pred_table__resolve_pred_overloading_10_0_i7);
MR_def_label(hlds__pred_table__resolve_pred_overloading_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(hlds__pred_table__resolve_pred_overloading_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__pred_table__find_matching_pred_id_10_0,
		hlds__pred_table__resolve_pred_overloading_10_0_i9);
MR_def_label(hlds__pred_table__resolve_pred_overloading_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__resolve_pred_overloading_10_0_i8);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__pred_table__resolve_pred_overloading_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pred_table.m", 12);
	MR_r2 = (MR_Word) MR_string_const("type error in pred call: no matching pred", 41);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module37)
	MR_init_entry1(hlds__pred_table__get_pred_id_by_types_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__get_pred_id_by_types_10_0);
	MR_init_label4(hlds__pred_table__get_pred_id_by_types_10_0,2,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_pred_id_by_types'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__get_pred_id_by_types_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__pred_table__get_pred_id_by_types_10_0_i2);
MR_def_label(hlds__pred_table__get_pred_id_by_types_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__pred_table__get_pred_id_by_types_10_0_i3);
MR_def_label(hlds__pred_table__get_pred_id_by_types_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,
		hlds__pred_table__get_pred_id_by_types_10_0_i4);
MR_def_label(hlds__pred_table__get_pred_id_by_types_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__get_pred_id_by_types_10_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__pred_table__find_matching_pred_id_10_0);
MR_def_label(hlds__pred_table__get_pred_id_by_types_10_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_str_1_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(hlds__pred_table_module38)
	MR_init_entry1(hlds__pred_table__get_proc_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__get_proc_id_3_0);
	MR_init_label10(hlds__pred_table__get_proc_id_3_0,2,3,4,7,8,9,10,11,13,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_proc_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__get_proc_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__pred_table__get_proc_id_3_0_i2);
MR_def_label(hlds__pred_table__get_proc_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		hlds__pred_table__get_proc_id_3_0_i3);
MR_def_label(hlds__pred_table__get_proc_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__get_proc_id_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__get_proc_id_3_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__pred_table__get_proc_id_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__pred_table__get_proc_id_3_0_i7);
MR_def_label(hlds__pred_table__get_proc_id_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__pred_table__get_proc_id_3_0_i8);
MR_def_label(hlds__pred_table__get_proc_id_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		hlds__pred_table__get_proc_id_3_0_i9);
MR_def_label(hlds__pred_table__get_proc_id_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_str_1_0,
		hlds__pred_table__get_proc_id_3_0_i10);
MR_def_label(hlds__pred_table__get_proc_id_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		hlds__pred_table__get_proc_id_3_0_i11);
MR_def_label(hlds__pred_table__get_proc_id_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__pred_table__get_proc_id_3_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\n\140", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("cannot take address of ", 23);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		hlds__pred_table__get_proc_id_3_0_i32);
MR_def_label(hlds__pred_table__get_proc_id_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,5,3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\n\140", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("taking address of ", 18);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("sorry, not implemented: ", 24);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		hlds__pred_table__get_proc_id_3_0_i32);
MR_def_label(hlds__pred_table__get_proc_id_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("pred_table.m", 12);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);

MR_BEGIN_MODULE(hlds__pred_table_module39)
	MR_init_entry1(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0);
	MR_init_label10(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,3,4,5,7,2,9,10,11,12,21)
	MR_init_label2(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_pred_id_and_proc_id_by_types'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i3);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i4);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,
		hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i5);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i2);
	}
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(9);
	MR_np_call_localret_ent(hlds__pred_table__find_matching_pred_id_10_0,
		hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i7);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i2);
	}
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i23);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i9);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_str_1_0,
		hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i10);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i11);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i12);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,5,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\n\140", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("undefined/invalid ", 18);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("get_pred_id_and_proc_id_by_types: ", 34);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i21);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("pred_table.m", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i23);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__pred_table__get_proc_id_3_0,
		hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0_i24);
MR_def_label(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(list__index0_3_0);

MR_BEGIN_MODULE(hlds__pred_table_module40)
	MR_init_entry1(hlds__pred_table__lookup_builtin_pred_proc_id_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__lookup_builtin_pred_proc_id_8_0);
	MR_init_label10(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,2,7,10,6,12,15,3,21,24,20)
	MR_init_label10(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,26,29,18,31,36,37,40,41,42,45)
	MR_init_label10(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,48,49,50,51,52,44,56,55,58,59)
	MR_init_label6(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,60,61,62,63,64,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_builtin_pred_proc_id'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__lookup_builtin_pred_proc_id_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i2);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i6);
	}
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_func_m_n_a_6_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i7);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(8) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i10);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i40);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i12);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(8) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i15);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i40);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i20);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_func_m_n_a_6_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i21);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i18);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i24);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i40);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i26);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i18);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i29);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i40);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i31);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("can\'t locate ", 13);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i36);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__pred_table__this_file_0_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i37);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i40);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i41);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i42);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i44);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i45);
	}
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__pred_table__this_file_0_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i48);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i49);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i50);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i51);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("expected single mode for ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i52);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_sv(6), 0);
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__index0_3_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i56);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i55);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__pred_table__this_file_0_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i58);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i59);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i60);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i61);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" for ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i62);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i63);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i64);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("there is no mode ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__pred_table__lookup_builtin_pred_proc_id_8_0_i65);
MR_def_label(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module41)
	MR_init_entry1(hlds__pred_table__get_next_pred_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__get_next_pred_id_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_next_pred_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__pred_table__get_next_pred_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module42)
	MR_init_entry1(hlds__pred_table__pred_id_matches_module_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__pred_id_matches_module_3_0);
	MR_init_label2(hlds__pred_table__pred_id_matches_module_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_id_matches_module'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__pred_table__pred_id_matches_module_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__pred_table__pred_id_matches_module_3_0_i2);
MR_def_label(hlds__pred_table__pred_id_matches_module_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__pred_table__pred_id_matches_module_3_0_i3);
MR_def_label(hlds__pred_table__pred_id_matches_module_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__lookup_2_0);

MR_BEGIN_MODULE(hlds__pred_table_module43)
	MR_init_entry1(hlds__pred_table__reinsert_for_restrict_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__pred_table__reinsert_for_restrict_6_0);
	MR_init_label10(hlds__pred_table__reinsert_for_restrict_6_0,2,3,5,4,7,6,11,12,13,14)
	MR_init_label4(hlds__pred_table__reinsert_for_restrict_6_0,17,16,19,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reinsert_for_restrict'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__pred_table__reinsert_for_restrict_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		hlds__pred_table__reinsert_for_restrict_6_0_i2);
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_accessibility);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		hlds__pred_table__reinsert_for_restrict_6_0_i3);
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__pred_table__reinsert_for_restrict_6_0_i5);
	}
	MR_r4 = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_r4, 1);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(hlds__pred_table__reinsert_for_restrict_6_0_i4);
	}
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = (MR_Integer) 1;
	}
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__pred_table__reinsert_for_restrict_6_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_sv(1) = MR_r3;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 1);
	MR_GOTO_LAB(hlds__pred_table__reinsert_for_restrict_6_0_i6);
	}
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(12) = MR_tfield(0, MR_tempr3, 8);
	MR_sv(13) = MR_tfield(0, MR_tempr3, 9);
	MR_sv(14) = MR_tfield(0, MR_tempr3, 10);
	MR_sv(18) = MR_tfield(0, MR_tempr3, 1);
	}
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__pred_table__reinsert_for_restrict_6_0_i11);
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__pred_table__reinsert_for_restrict_6_0_i12);
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		hlds__pred_table__reinsert_for_restrict_6_0_i13);
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_sv(4), 0);
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__pred_table__reinsert_for_restrict_6_0_i14);
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__pred_table__reinsert_for_restrict_6_0_i16);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = ((MR_Integer) MR_sv(17) - (MR_Integer) 1);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(14);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_do_insert_14_0,
		hlds__pred_table__reinsert_for_restrict_6_0_i17);
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_sv(8) = MR_r4;
	MR_r4 = MR_tempr2;
	MR_sv(7) = MR_r3;
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_sv(9);
	MR_sv(3) = MR_sv(10);
	MR_sv(4) = MR_sv(11);
	MR_sv(5) = MR_r2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__pred_table__reinsert_for_restrict_6_0_i21);
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(11);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_do_insert_14_0,
		hlds__pred_table__reinsert_for_restrict_6_0_i19);
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tempr3 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_sv(12);
	MR_sv(7) = MR_sv(13);
	MR_sv(8) = MR_sv(14);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__pred_table__reinsert_for_restrict_6_0_i21);
MR_def_label(hlds__pred_table__reinsert_for_restrict_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(8);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__pred_table_module44)
	MR_init_entry1(__Unify___hlds__pred_table__accessibility_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__pred_table__accessibility_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__pred_table__accessibility_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_accessibility);
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

MR_BEGIN_MODULE(hlds__pred_table_module45)
	MR_init_entry1(__Compare___hlds__pred_table__accessibility_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__pred_table__accessibility_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__pred_table__accessibility_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_accessibility);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(hlds__pred_table_module46)
	MR_init_entry1(__Unify___hlds__pred_table__constraint_search_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__pred_table__constraint_search_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__pred_table__constraint_search_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(hlds__pred_table_module47)
	MR_init_entry1(__Compare___hlds__pred_table__constraint_search_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__pred_table__constraint_search_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__pred_table__constraint_search_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module48)
	MR_init_entry1(__Unify___hlds__pred_table__is_fully_qualified_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__pred_table__is_fully_qualified_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__pred_table__is_fully_qualified_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__pred_table_module49)
	MR_init_entry1(__Compare___hlds__pred_table__is_fully_qualified_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__pred_table__is_fully_qualified_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__pred_table__is_fully_qualified_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module50)
	MR_init_entry1(__Unify___hlds__pred_table__mode_no_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__pred_table__mode_no_0_0);
	MR_init_label3(__Unify___hlds__pred_table__mode_no_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__pred_table__mode_no_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__mode_no_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__mode_no_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__pred_table__mode_no_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__pred_table__mode_no_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__mode_no_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__pred_table__mode_no_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module51)
	MR_init_entry1(__Compare___hlds__pred_table__mode_no_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__pred_table__mode_no_0_0);
	MR_init_label4(__Compare___hlds__pred_table__mode_no_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__pred_table__mode_no_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__mode_no_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__mode_no_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__mode_no_0_0_i7);
	}
MR_def_label(__Compare___hlds__pred_table__mode_no_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__pred_table__mode_no_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__pred_table__mode_no_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__mode_no_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__pred_table__mode_no_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module52)
	MR_init_entry1(__Unify___hlds__pred_table__module_name_arity_index_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__pred_table__module_name_arity_index_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__pred_table__module_name_arity_index_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module53)
	MR_init_entry1(__Compare___hlds__pred_table__module_name_arity_index_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__pred_table__module_name_arity_index_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__pred_table__module_name_arity_index_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module54)
	MR_init_entry1(__Unify___hlds__pred_table__name_accessibility_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__pred_table__name_accessibility_0_0);
	MR_init_label2(__Unify___hlds__pred_table__name_accessibility_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__pred_table__name_accessibility_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__name_accessibility_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__name_accessibility_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__pred_table__name_accessibility_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__pred_table__name_accessibility_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module55)
	MR_init_entry1(__Compare___hlds__pred_table__name_accessibility_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__pred_table__name_accessibility_0_0);
	MR_init_label4(__Compare___hlds__pred_table__name_accessibility_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__pred_table__name_accessibility_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__name_accessibility_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__pred_table__name_accessibility_0_0_i2);
MR_def_label(__Compare___hlds__pred_table__name_accessibility_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__pred_table__name_accessibility_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__pred_table__name_accessibility_0_0_i5);
MR_def_label(__Compare___hlds__pred_table__name_accessibility_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__name_accessibility_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__pred_table__name_accessibility_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module56)
	MR_init_entry1(__Unify___hlds__pred_table__name_arity_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__pred_table__name_arity_0_0);
	MR_init_label2(__Unify___hlds__pred_table__name_arity_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__pred_table__name_arity_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__name_arity_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__name_arity_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__pred_table__name_arity_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__pred_table__name_arity_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(hlds__pred_table_module57)
	MR_init_entry1(__Compare___hlds__pred_table__name_arity_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__pred_table__name_arity_0_0);
	MR_init_label4(__Compare___hlds__pred_table__name_arity_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__pred_table__name_arity_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__name_arity_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__pred_table__name_arity_0_0_i2);
MR_def_label(__Compare___hlds__pred_table__name_arity_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__pred_table__name_arity_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___hlds__pred_table__name_arity_0_0_i5);
MR_def_label(__Compare___hlds__pred_table__name_arity_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__name_arity_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__pred_table__name_arity_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module58)
	MR_init_entry1(__Unify___hlds__pred_table__name_arity_index_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__pred_table__name_arity_index_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__pred_table__name_arity_index_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module59)
	MR_init_entry1(__Compare___hlds__pred_table__name_arity_index_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__pred_table__name_arity_index_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__pred_table__name_arity_index_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module60)
	MR_init_entry1(__Unify___hlds__pred_table__name_index_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__pred_table__name_index_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__pred_table__name_index_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module61)
	MR_init_entry1(__Compare___hlds__pred_table__name_index_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__pred_table__name_index_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__pred_table__name_index_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module62)
	MR_init_entry1(__Unify___hlds__pred_table__pred_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__pred_table__pred_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__pred_table__pred_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module63)
	MR_init_entry1(__Compare___hlds__pred_table__pred_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__pred_table__pred_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__pred_table__pred_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__pred_table_module64)
	MR_init_entry1(__Unify___hlds__pred_table__predicate_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__pred_table__predicate_table_0_0);
	MR_init_label10(__Unify___hlds__pred_table__predicate_table_0_0,4,7,9,11,13,15,19,21,23,27)
	MR_init_label1(__Unify___hlds__pred_table__predicate_table_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__pred_table__predicate_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__predicate_table_0_0_i27);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
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
	MR_sv(9) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(19) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__pred_table__predicate_table_0_0_i4);
MR_def_label(__Unify___hlds__pred_table__predicate_table_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__predicate_table_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__predicate_table_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__pred_table__predicate_table_0_0_i7);
MR_def_label(__Unify___hlds__pred_table__predicate_table_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__predicate_table_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__pred_table__predicate_table_0_0_i9);
MR_def_label(__Unify___hlds__pred_table__predicate_table_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__predicate_table_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_accessibility);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__pred_table__predicate_table_0_0_i11);
MR_def_label(__Unify___hlds__pred_table__predicate_table_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__predicate_table_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__pred_table__predicate_table_0_0_i13);
MR_def_label(__Unify___hlds__pred_table__predicate_table_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__predicate_table_0_0_i1);
	}
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__pred_table__predicate_table_0_0_i15);
MR_def_label(__Unify___hlds__pred_table__predicate_table_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__predicate_table_0_0_i1);
	}
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__pred_table__predicate_table_0_0_i19);
MR_def_label(__Unify___hlds__pred_table__predicate_table_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__predicate_table_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__pred_table__predicate_table_0_0_i21);
MR_def_label(__Unify___hlds__pred_table__predicate_table_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__predicate_table_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__pred_table__predicate_table_0_0_i23);
MR_def_label(__Unify___hlds__pred_table__predicate_table_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__pred_table__predicate_table_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(20);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___hlds__pred_table__predicate_table_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__pred_table__predicate_table_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(hlds__pred_table_module65)
	MR_init_entry1(__Compare___hlds__pred_table__predicate_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__pred_table__predicate_table_0_0);
	MR_init_label10(__Compare___hlds__pred_table__predicate_table_0_0,3,2,5,9,13,17,21,26,31,38)
	MR_init_label3(__Compare___hlds__pred_table__predicate_table_0_0,43,48,103)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__pred_table__predicate_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i3);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i2);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__pred_table__predicate_table_0_0_i5);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i103);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__pred_table__predicate_table_0_0_i9);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i103);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__pred_table__predicate_table_0_0_i13);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i103);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__pred_table__predicate_table_0_0_i17);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i103);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_accessibility);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__pred_table__predicate_table_0_0_i21);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i103);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__pred_table__predicate_table_0_0_i26);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i103);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__pred_table__predicate_table_0_0_i31);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i103);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__pred_table__predicate_table_0_0_i38);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i103);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__pred_table__predicate_table_0_0_i43);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i103);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__pred_table, name_arity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__pred_table__predicate_table_0_0_i48);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__pred_table__predicate_table_0_0_i103);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(20);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___hlds__pred_table__predicate_table_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__pred_table_maybe_bunch_0(void)
{
	hlds__pred_table_module0();
	hlds__pred_table_module1();
	hlds__pred_table_module2();
	hlds__pred_table_module3();
	hlds__pred_table_module4();
	hlds__pred_table_module5();
	hlds__pred_table_module6();
	hlds__pred_table_module7();
	hlds__pred_table_module8();
	hlds__pred_table_module9();
	hlds__pred_table_module10();
	hlds__pred_table_module11();
	hlds__pred_table_module12();
	hlds__pred_table_module13();
	hlds__pred_table_module14();
	hlds__pred_table_module15();
	hlds__pred_table_module16();
	hlds__pred_table_module17();
	hlds__pred_table_module18();
	hlds__pred_table_module19();
	hlds__pred_table_module20();
	hlds__pred_table_module21();
	hlds__pred_table_module22();
	hlds__pred_table_module23();
	hlds__pred_table_module24();
	hlds__pred_table_module25();
	hlds__pred_table_module26();
	hlds__pred_table_module27();
	hlds__pred_table_module28();
	hlds__pred_table_module29();
	hlds__pred_table_module30();
	hlds__pred_table_module31();
	hlds__pred_table_module32();
	hlds__pred_table_module33();
	hlds__pred_table_module34();
	hlds__pred_table_module35();
	hlds__pred_table_module36();
	hlds__pred_table_module37();
	hlds__pred_table_module38();
	hlds__pred_table_module39();
}

static void mercury__hlds__pred_table_maybe_bunch_1(void)
{
	hlds__pred_table_module40();
	hlds__pred_table_module41();
	hlds__pred_table_module42();
	hlds__pred_table_module43();
	hlds__pred_table_module44();
	hlds__pred_table_module45();
	hlds__pred_table_module46();
	hlds__pred_table_module47();
	hlds__pred_table_module48();
	hlds__pred_table_module49();
	hlds__pred_table_module50();
	hlds__pred_table_module51();
	hlds__pred_table_module52();
	hlds__pred_table_module53();
	hlds__pred_table_module54();
	hlds__pred_table_module55();
	hlds__pred_table_module56();
	hlds__pred_table_module57();
	hlds__pred_table_module58();
	hlds__pred_table_module59();
	hlds__pred_table_module60();
	hlds__pred_table_module61();
	hlds__pred_table_module62();
	hlds__pred_table_module63();
	hlds__pred_table_module64();
	hlds__pred_table_module65();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__pred_table__init(void);
void mercury__hlds__pred_table__init_type_tables(void);
void mercury__hlds__pred_table__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__pred_table__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__pred_table__init_complexity_procs(void);
#endif

void mercury__hlds__pred_table__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__pred_table_maybe_bunch_0();
	mercury__hlds__pred_table_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__pred_table__type_ctor_info_accessibility_table_0,
		hlds__pred_table__accessibility_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__pred_table__type_ctor_info_constraint_search_0,
		hlds__pred_table__constraint_search_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__pred_table__type_ctor_info_is_fully_qualified_0,
		hlds__pred_table__is_fully_qualified_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__pred_table__type_ctor_info_mode_no_0,
		hlds__pred_table__mode_no_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__pred_table__type_ctor_info_module_name_arity_index_0,
		hlds__pred_table__module_name_arity_index_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__pred_table__type_ctor_info_name_accessibility_0,
		hlds__pred_table__name_accessibility_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__pred_table__type_ctor_info_name_arity_0,
		hlds__pred_table__name_arity_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__pred_table__type_ctor_info_name_arity_index_0,
		hlds__pred_table__name_arity_index_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__pred_table__type_ctor_info_name_index_0,
		hlds__pred_table__name_index_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__pred_table__type_ctor_info_pred_table_0,
		hlds__pred_table__pred_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__pred_table__type_ctor_info_predicate_table_0,
		hlds__pred_table__predicate_table_0_0);
	mercury__hlds__pred_table__init_debugger();
}

void mercury__hlds__pred_table__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__pred_table__type_ctor_info_accessibility_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__pred_table__type_ctor_info_constraint_search_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__pred_table__type_ctor_info_is_fully_qualified_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__pred_table__type_ctor_info_mode_no_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__pred_table__type_ctor_info_module_name_arity_index_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__pred_table__type_ctor_info_name_accessibility_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__pred_table__type_ctor_info_name_arity_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__pred_table__type_ctor_info_name_arity_index_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__pred_table__type_ctor_info_name_index_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__pred_table__type_ctor_info_pred_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__pred_table__type_ctor_info_predicate_table_0);
	}
}


void mercury__hlds__pred_table__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__pred_table__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__pred_table);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__pred_table__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
