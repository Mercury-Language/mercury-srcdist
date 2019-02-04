/*
** Automatically generated from `add_class.m'
** by the Mercury compiler,
** version rotd-2011-12-05, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__make_hlds__add_class__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.make_hlds.add_class.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "hlds.make_hlds.add_class.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.make_hlds.add_class.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.make_hlds.add_class.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.make_hlds.add_class.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "hlds.make_hlds.add_class.c"
#line 49 "hlds.make_hlds.add_class.c"
#include "hlds.make_hlds.add_class.mh"

#line 52 "hlds.make_hlds.add_class.c"
#line 53 "hlds.make_hlds.add_class.c"
#ifndef HLDS__MAKE_HLDS__ADD_CLASS_DECL_GUARD
#define HLDS__MAKE_HLDS__ADD_CLASS_DECL_GUARD

#line 57 "hlds.make_hlds.add_class.c"
#line 58 "hlds.make_hlds.add_class.c"

#endif
#line 61 "hlds.make_hlds.add_class.c"

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
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
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
	MR_Word * f3[10];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[14];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];
MR_decl_label4(hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0, 2,4,5,6)
MR_decl_label1(hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_0, 1)
MR_decl_label3(hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0, 17,4,5)
MR_decl_label10(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0, 3,2,5,6,8,7,11,16,17,19)
MR_decl_label6(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0, 21,24,18,15,10,28)
MR_decl_label4(hlds__make_hlds__add_class__check_instance_constraints_5_0, 2,3,6,5)
MR_decl_label10(hlds__make_hlds__add_class__check_method_modes_7_0, 86,3,7,6,9,10,12,15,17,20)
MR_decl_label10(hlds__make_hlds__add_class__check_method_modes_7_0, 43,22,26,19,27,29,31,11,5,91)
MR_decl_label2(hlds__make_hlds__add_class__class_fundeps_are_identical_2_0, 2,3)
MR_decl_label5(hlds__make_hlds__add_class__constraints_are_identical_6_0, 2,3,4,6,7)
MR_decl_label10(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0, 4,5,9,3,10,11,12,13,14,15)
MR_decl_label10(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0, 17,16,21,23,20,26,27,30,32,33)
MR_decl_label3(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0, 35,36,37)
MR_decl_label10(hlds__make_hlds__add_class__module_add_class_defn_6_0, 2,4,8,7,11,13,15,17,16,22)
MR_decl_label10(hlds__make_hlds__add_class__module_add_class_defn_6_0, 18,29,25,35,32,37,38,42,43,44)
MR_decl_label10(hlds__make_hlds__add_class__module_add_class_defn_6_0, 46,12,52,53,57,58,59,61,62,63)
MR_decl_label2(hlds__make_hlds__add_class__module_add_class_defn_6_0, 65,66)
MR_decl_label3(hlds__make_hlds__add_class__module_add_class_interface_9_0, 3,4,10)
MR_decl_label7(hlds__make_hlds__add_class__module_add_class_method_9_0, 5,6,10,11,3,15,14)
MR_decl_label10(hlds__make_hlds__add_class__module_add_instance_defn_12_0, 2,3,4,6,8,10,13,14,16,19)
MR_decl_label4(hlds__make_hlds__add_class__module_add_instance_defn_12_0, 21,22,7,23)
MR_decl_label4(hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0, 2,3,4,5)
MR_decl_label10(hlds__make_hlds__add_class__produce_instance_method_clause_14_0, 3,6,8,5,9,11,12,13,15,16)
MR_decl_label9(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0, 2,3,4,5,7,8,9,10,1)
MR_decl_label1(fn__hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__208__1_3_0, 3)
MR_decl_label4(fn__hlds__make_hlds__add_class__get_list_index_3_0, 20,6,4,3)
MR_decl_label4(fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0, 4,6,7,8)
MR_decl_static(hlds__make_hlds__add_class__constraints_are_identical_6_0)
MR_decl_static(hlds__make_hlds__add_class__class_fundeps_are_identical_2_0)
MR_decl_static(hlds__make_hlds__add_class__module_add_class_method_9_0)
MR_decl_static(hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0)
MR_decl_static(hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0)
MR_decl_static(hlds__make_hlds__add_class__check_method_modes_7_0)
MR_decl_static(hlds__make_hlds__add_class__module_add_class_interface_9_0)
MR_def_extern_entry(hlds__make_hlds__add_class__module_add_class_defn_6_0)
MR_decl_static(hlds__make_hlds__add_class__check_for_overlapping_instances_5_0)
MR_decl_static(hlds__make_hlds__add_class__undefined_type_class_error_6_0)
MR_def_extern_entry(hlds__make_hlds__add_class__module_add_instance_defn_12_0)
MR_def_extern_entry(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0)
MR_decl_static(fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0)
MR_decl_static(fn__hlds__make_hlds__add_class__get_list_index_3_0)
MR_decl_static(hlds__make_hlds__add_class__is_class_method_mode_item_1_0)
MR_decl_static(hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_0)
MR_decl_static(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0)
MR_decl_static(hlds__make_hlds__add_class__report_overlapping_instance_declaration_4_0)
MR_decl_static(hlds__make_hlds__add_class__check_instance_constraints_5_0)
MR_decl_static(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0)
MR_decl_static(hlds__make_hlds__add_class__produce_instance_method_clause_14_0)
MR_decl_static(hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_0)
MR_decl_static(fn__hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__208__1_3_0)
MR_decl_static(hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0)
MR_decl_static(hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__659__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[30] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_TAG_COMMON(3,1,2),
MR_TAG_COMMON(1,0,1)
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
MR_COMMON(0,3)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_COMMON(4,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,5)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_TAG_COMMON(0,4,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,8)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_TAG_COMMON(3,1,3),
MR_TAG_COMMON(1,0,1)
}
},
{
{
MR_TAG_COMMON(3,1,4),
MR_TAG_COMMON(1,0,1)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_COMMON(4,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn)
}
},
{
{
MR_TAG_COMMON(3,1,7),
MR_TAG_COMMON(1,0,1)
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_TAG_COMMON(3,1,10),
MR_TAG_COMMON(1,0,1)
}
},
{
{
MR_TAG_COMMON(3,1,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,0,25)
}
},
{
{
MR_TAG_COMMON(3,1,16),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const struct mercury_type_1 mercury_common_1[17] =
{
{
4,
MR_string_const("Error: no mode declaration", 26)
},
{
4,
MR_string_const("for type class method predicate", 31)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("The superclass constraints do not match.", 40)
},
{
4,
MR_string_const("The functional dependencies do not match.", 41)
},
{
4,
MR_string_const("Error:", 6)
},
{
4,
MR_string_const("for", 3)
},
{
4,
MR_string_const("without preceding typeclass declaration.", 40)
},
{
4,
MR_string_const("Error: mode declaration for type class method", 45)
},
{
4,
MR_string_const("without corresponding", 21)
},
{
4,
MR_string_const("method declaration.", 19)
},
{
4,
MR_string_const("Error: multiply defined (or overlapping)", 40)
},
{
4,
MR_string_const("instance declarations for class", 31)
},
{
4,
MR_string_const("Previous instance declaration was here.", 39)
},
{
4,
MR_string_const("In instance declaration for class ", 34)
},
{
4,
MR_string_const("instance constraints are incompatible with", 42)
},
{
4,
MR_string_const("instance constraints here.", 26)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_interface_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_class_method_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_interface_9_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(parse_tree__prog_item, class_method)
},
};

static const struct mercury_type_3 mercury_common_3[3] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(hlds__make_hlds__add_class__is_class_method_mode_item_1_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_4 mercury_common_4[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(term, context)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_interface_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__make_hlds_passes__type_ctor_info_item_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_interface_9_0_2,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(0,4),
MR_CTOR0_ADDR(hlds__make_hlds__make_hlds_passes, item_status),
MR_CTOR0_ADDR(parse_tree__prog_item, class_method),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_fundep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__check_for_overlapping_instances_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,4),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_fundep),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,4),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_fundep),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__check_for_overlapping_instances_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn),
MR_COMMON(0,15),
MR_COMMON(4,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_instance_defn_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__produce_instance_method_clause_14_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,13),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,13),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_instance_defn_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__produce_instance_method_clause_14_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func),
MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__check_for_overlapping_instances_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0_1;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__check_for_overlapping_instances_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_COMMON(4,2),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,4),
MR_COMMON(0,20),
MR_COMMON(0,21),
MR_COMMON(0,21)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_instance_defn_12_0_2;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_instance_defn_12_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_clause_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__qual_info__type_ctor_info_qual_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_info_0;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_1,
(MR_Word *) (MR_Integer) 0
},
14,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(hlds__hlds_pred, import_status),
MR_CTOR0_ADDR(parse_tree__prog_item, item_clause_info),
MR_COMMON(0,17),
MR_COMMON(0,17),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__make_hlds__qual_info, qual_info),
MR_CTOR0_ADDR(hlds__make_hlds__qual_info, qual_info),
MR_CTOR0_ADDR(hlds__hlds_clauses, clauses_info),
MR_CTOR0_ADDR(hlds__hlds_clauses, clauses_info),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
};

static const struct mercury_type_11 mercury_common_11[2] =
{
{
MR_TAG_COMMON(1,0,23)
},
{
MR_TAG_COMMON(1,0,27)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__produce_instance_method_clause_14_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"lambda_add_class_m_659",
2,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
659,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0_1 = {
{
MR_FUNCTION,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"lambda_add_class_m_208",
4,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
208,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"produce_instance_method_clause",
14,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
641,
"67"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_instance_defn_12_0_2 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"check_instance_constraints",
5,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
529,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_instance_defn_12_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"same_type_hlds_instance_defn",
2,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
527,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__check_for_overlapping_instances_5_0_2 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"report_overlapping_instance_declaration",
4,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
495,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__check_for_overlapping_instances_5_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"lambda_add_class_m_482",
3,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
482,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_4 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"lambda_add_class_m_157",
2,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
157,
"95"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_3 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"lambda_add_class_m_157",
2,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
157,
"95"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_2 = {
{
MR_FUNCTION,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"make_hlds_fundep",
3,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
92,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_defn_6_0_1 = {
{
MR_FUNCTION,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"make_hlds_fundep",
3,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
92,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_interface_9_0_2 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"add_class_pred_or_func_mode_method",
10,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
268,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_class__module_add_class_interface_9_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.add_class",
"hlds.make_hlds.add_class",
"is_class_method_mode_item",
1,
0
},
"hlds.make_hlds.add_class",
"add_class.m",
258,
"11"
};


MR_decl_entry(parse_tree__prog_data__tvarset_merge_renaming_4_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0);
MR_decl_entry(map__from_corresponding_lists_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module0)
	MR_init_entry1(hlds__make_hlds__add_class__constraints_are_identical_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__constraints_are_identical_6_0);
	MR_init_label5(hlds__make_hlds__add_class__constraints_are_identical_6_0,2,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constraints_are_identical'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__constraints_are_identical_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(parse_tree__prog_data__tvarset_merge_renaming_4_0,
		hlds__make_hlds__add_class__constraints_are_identical_6_0_i2);
MR_def_label(hlds__make_hlds__add_class__constraints_are_identical_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0,
		hlds__make_hlds__add_class__constraints_are_identical_6_0_i3);
MR_def_label(hlds__make_hlds__add_class__constraints_are_identical_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0,
		hlds__make_hlds__add_class__constraints_are_identical_6_0_i4);
MR_def_label(hlds__make_hlds__add_class__constraints_are_identical_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		hlds__make_hlds__add_class__constraints_are_identical_6_0_i6);
MR_def_label(hlds__make_hlds__add_class__constraints_are_identical_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0,
		hlds__make_hlds__add_class__constraints_are_identical_6_0_i7);
MR_def_label(hlds__make_hlds__add_class__constraints_are_identical_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;
MR_decl_entry(list__sort_and_remove_dups_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module1)
	MR_init_entry1(hlds__make_hlds__add_class__class_fundeps_are_identical_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__class_fundeps_are_identical_2_0);
	MR_init_label2(hlds__make_hlds__add_class__class_fundeps_are_identical_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'class_fundeps_are_identical'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__class_fundeps_are_identical_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		hlds__make_hlds__add_class__class_fundeps_are_identical_2_0_i2);
MR_def_label(hlds__make_hlds__add_class__class_fundeps_are_identical_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		hlds__make_hlds__add_class__class_fundeps_are_identical_2_0_i3);
MR_def_label(hlds__make_hlds__add_class__class_fundeps_are_identical_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(parse_tree__prog_type__var_list_to_type_list_3_0);
MR_decl_entry(hlds__hlds_pred__init_markers_1_0);
MR_decl_entry(hlds__hlds_pred__add_marker_3_0);
MR_decl_entry(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0);
MR_decl_entry(hlds__make_hlds__add_pred__module_add_mode_13_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module2)
	MR_init_entry1(hlds__make_hlds__add_class__module_add_class_method_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__module_add_class_method_9_0);
	MR_init_label7(hlds__make_hlds__add_class__module_add_class_method_9_0,5,6,10,11,3,15,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_add_class_method'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__module_add_class_method_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_method_9_0_i3);
	}
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(13) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_tfield(0, MR_r1, 2);
	MR_sv(6) = MR_tfield(0, MR_r1, 3);
	MR_sv(7) = MR_tfield(0, MR_r1, 4);
	MR_sv(8) = MR_tfield(0, MR_r1, 5);
	MR_sv(9) = MR_tfield(0, MR_r1, 8);
	MR_sv(10) = MR_tfield(0, MR_r1, 10);
	MR_sv(11) = MR_tfield(0, MR_r1, 11);
	MR_sv(12) = MR_tfield(0, MR_r1, 12);
	MR_sv(14) = MR_r5;
	MR_sv(15) = MR_r6;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__add_class__module_add_class_method_9_0_i5);
MR_def_label(hlds__make_hlds__add_class__module_add_class_method_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		hlds__make_hlds__add_class__module_add_class_method_9_0_i6);
MR_def_label(hlds__make_hlds__add_class__module_add_class_method_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(13);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(11);
	MR_tfield(1, MR_r1, 1) = MR_tfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(13) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__init_markers_1_0,
		hlds__make_hlds__add_class__module_add_class_method_9_0_i10);
MR_def_label(hlds__make_hlds__add_class__module_add_class_method_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_class__module_add_class_method_9_0_i11);
MR_def_label(hlds__make_hlds__add_class__module_add_class_method_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_sv(12);
	MR_r12 = MR_sv(2);
	MR_r13 = MR_sv(14);
	MR_r14 = MR_sv(15);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0);
	}
MR_def_label(hlds__make_hlds__add_class__module_add_class_method_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_method_9_0_i14);
	}
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 2);
	MR_r3 = MR_tfield(1, MR_tempr1, 3);
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr1, 5);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tfield(0, MR_sv(2), 0);
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tfield(1, MR_tempr1, 7);
	MR_r7 = MR_tfield(1, MR_r7, 0);
	MR_r8 = (MR_Integer) 1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_mode_13_0,
		hlds__make_hlds__add_class__module_add_class_method_9_0_i15);
MR_def_label(hlds__make_hlds__add_class__module_add_class_method_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
MR_def_label(hlds__make_hlds__add_class__module_add_class_method_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_class", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_class.module_add_class_method\'/9", 62);
	MR_r3 = (MR_Word) MR_string_const("no pred_or_func on mode declaration", 35);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_class_module3)
	MR_init_entry1(hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0);
	MR_init_label3(hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_class_pred_or_func_methods'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_class__module_add_class_method_9_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0_i4);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_localcall_lab(hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0_i5);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module4)
	MR_init_entry1(hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0);
	MR_init_label4(hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_method_with_no_modes_error'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0_i2);
MR_def_label(hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0_i3);
MR_def_label(hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0_i4);
MR_def_label(hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0_i5);
MR_def_label(hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_and_mode_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_pf_m_n_a_7_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module5)
	MR_init_entry1(hlds__make_hlds__add_class__check_method_modes_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__check_method_modes_7_0);
	MR_init_label10(hlds__make_hlds__add_class__check_method_modes_7_0,86,3,7,6,9,10,12,15,17,20)
	MR_init_label10(hlds__make_hlds__add_class__check_method_modes_7_0,43,22,26,19,27,29,31,11,5,91)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_method_modes'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__check_method_modes_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i5);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 4);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	}
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i9);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_class", 24);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", 57);
	MR_sv(2) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("unqualified func", 16);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i6);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i9);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i10);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_m_n_a_7_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i12);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i11);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i11);
	}
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i15);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i17);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i19);
	}
	MR_np_call_localret_ent(check_hlds__clause_to_proc__maybe_add_default_func_mode_3_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i20);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i22);
	}
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i86);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i26);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i86);
	}
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i27);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i29);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i43);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i31);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i86);
	}
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_class", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", 57);
	MR_r3 = (MR_Word) MR_string_const("handle_methods_with_no_modes", 28);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__add_class__check_method_modes_7_0_i91);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
MR_def_label(hlds__make_hlds__add_class__check_method_modes_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__add_class__check_method_modes_7_0_i86);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_class_method_0;
MR_decl_entry(list__filter_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__foldl3_8_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module6)
	MR_init_entry1(hlds__make_hlds__add_class__module_add_class_interface_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__module_add_class_interface_9_0);
	MR_init_label3(hlds__make_hlds__add_class__module_add_class_interface_9_0,3,4,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_add_class_interface'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__module_add_class_interface_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, class_method);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(list__filter_4_0,
		hlds__make_hlds__add_class__module_add_class_interface_9_0_i3);
MR_def_label(hlds__make_hlds__add_class__module_add_class_interface_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_0,
		hlds__make_hlds__add_class__module_add_class_interface_9_0_i4);
MR_def_label(hlds__make_hlds__add_class__module_add_class_interface_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_tempr4 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_r9 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		hlds__make_hlds__add_class__module_add_class_interface_9_0_i10);
MR_def_label(hlds__make_hlds__add_class__module_add_class_interface_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__make_hlds__add_class__check_method_modes_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_class_table_2_0);
MR_decl_entry(hlds__make_hlds__add_type__make_status_abstract_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_fundep_0;
MR_decl_entry(fn__list__map_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(hlds__make_hlds__add_type__combine_status_3_0);
MR_decl_entry(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(list__sort_2_0);
MR_decl_entry(map__set_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_class_table_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_instance_table_2_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_instance_table_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module7)
	MR_init_entry1(hlds__make_hlds__add_class__module_add_class_defn_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__module_add_class_defn_6_0);
	MR_init_label10(hlds__make_hlds__add_class__module_add_class_defn_6_0,2,4,8,7,11,13,15,17,16,22)
	MR_init_label10(hlds__make_hlds__add_class__module_add_class_defn_6_0,18,29,25,35,32,37,38,42,43,44)
	MR_init_label10(hlds__make_hlds__add_class__module_add_class_defn_6_0,46,12,52,53,57,58,59,61,62,63)
	MR_init_label2(hlds__make_hlds__add_class__module_add_class_defn_6_0,65,66)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_add_class_defn'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_class__module_add_class_defn_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(22);
	MR_sv(22) = (MR_Word) MR_succip;
	MR_sv(19) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(16) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(5) = MR_tfield(0, MR_r1, 4);
	MR_sv(6) = MR_tfield(0, MR_r1, 5);
	MR_sv(7) = MR_tfield(0, MR_r1, 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(20) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i2);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i4);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_defn_6_0_i7);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(19), 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_type__make_status_abstract_2_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i8);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r4 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_fundep);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i11);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r4 = MR_sv(16);
	MR_sv(9) = MR_r1;
	MR_sv(16) = MR_tfield(0, MR_sv(19), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_fundep);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i11);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__search_3_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i13);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_defn_6_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = MR_tfield(0, MR_r2, 1);
	MR_sv(12) = MR_tfield(0, MR_r2, 2);
	MR_sv(17) = MR_tfield(0, MR_r2, 4);
	MR_sv(13) = MR_tfield(0, MR_r2, 6);
	MR_sv(18) = MR_tfield(0, MR_r2, 7);
	MR_sv(14) = MR_tfield(0, MR_r2, 8);
	MR_sv(15) = MR_tfield(0, MR_r2, 9);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_type__combine_status_3_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i15);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(13),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_defn_6_0_i17);
	}
	MR_r6 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r3 = MR_sv(16);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(14);
	MR_sv(16) = MR_r7;
	MR_sv(17) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(18) = MR_sv(5);
	MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_defn_6_0_i16);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r3 = MR_sv(16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(14);
	MR_sv(16) = MR_tempr1;
	MR_sv(17) = MR_sv(18);
	MR_sv(18) = MR_sv(13);
	}
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r6;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_np_call_localret_ent(hlds__make_hlds__add_class__constraints_are_identical_6_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i22);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_defn_6_0_i18);
	}
	MR_r6 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_tbmkword(0, 8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_string_const("typeclass", 9);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(15);
	MR_r7 = (MR_Word) MR_TAG_COMMON(1,0,11);
	MR_r8 = MR_sv(20);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i35);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(6);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_class__class_fundeps_are_identical_2_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i29);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_defn_6_0_i25);
	}
	MR_r6 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_tbmkword(0, 8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_string_const("typeclass", 9);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(15);
	MR_r7 = (MR_Word) MR_TAG_COMMON(1,0,12);
	MR_r8 = MR_sv(20);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i35);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_defn_6_0_i32);
	}
	if (MR_LTAGS_TEST(MR_sv(13),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_defn_6_0_i32);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_string_const("typeclass", 9);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(15);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(20);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i35);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(22);
	}
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_defn_6_0_i37);
	}
	MR_sv(2) = MR_r6;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(19) = MR_sv(17);
	MR_sv(3) = MR_sv(20);
	MR_sv(5) = MR_sv(1);
	MR_r1 = MR_sv(21);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i44);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_sv(5), 0);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(20);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_class__module_add_class_interface_9_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i38);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r2 = MR_sv(19);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i42);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i43);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i44);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(19);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn);
	MR_r3 = MR_sv(10);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i46);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_class_table_3_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i66);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_class_defn_6_0_i52);
	}
	MR_sv(3) = MR_sv(20);
	MR_r1 = MR_sv(21);
	MR_sv(19) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i59);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(1, MR_sv(5), 0);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(20);
	MR_np_call_localret_ent(hlds__make_hlds__add_class__module_add_class_interface_9_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i53);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc);
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r2 = MR_sv(19);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i57);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i58);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i59);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(19);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(7);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn);
	MR_r3 = MR_sv(10);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i61);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_class_table_3_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i62);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_instance_table_2_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i63);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,14);
	MR_r3 = MR_sv(10);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i65);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_instance_table_3_0,
		hlds__make_hlds__add_class__module_add_class_defn_6_0_i66);
MR_def_label(hlds__make_hlds__add_class__module_add_class_defn_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(22);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(solutions__aggregate_4_3);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module8)
	MR_init_entry1(hlds__make_hlds__add_class__check_for_overlapping_instances_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__check_for_overlapping_instances_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_for_overlapping_instances'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__check_for_overlapping_instances_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__add_class__report_overlapping_instance_declaration_4_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(solutions__aggregate_4_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_class_module9)
	MR_init_entry1(hlds__make_hlds__add_class__undefined_type_class_error_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__undefined_type_class_error_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'undefined_type_class_error'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__undefined_type_class_error_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,16);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,1,6);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr3, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
MR_decl_entry(map__init_1_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module10)
	MR_init_entry1(hlds__make_hlds__add_class__module_add_instance_defn_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__module_add_instance_defn_12_0);
	MR_init_label10(hlds__make_hlds__add_class__module_add_instance_defn_12_0,2,3,4,6,8,10,13,14,16,19)
	MR_init_label4(hlds__make_hlds__add_class__module_add_instance_defn_12_0,21,22,7,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_add_instance_defn'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_class__module_add_instance_defn_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r10;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i2);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_instance_table_2_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i3);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i4);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i6);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i8);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__module_add_instance_defn_12_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i10);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_sv(11) = MR_tempr1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,14);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i13);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_class__check_for_overlapping_instances_5_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i14);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(11);
	MR_sv(12) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i16);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__add_class__check_instance_constraints_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i19);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i21);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_instance_table_3_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i22);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(14);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("instance declaration", 20);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_class__undefined_type_class_error_6_0,
		hlds__make_hlds__add_class__module_add_instance_defn_12_0_i23);
MR_def_label(hlds__make_hlds__add_class__module_add_instance_defn_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_init_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_clause_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__qual_info__type_ctor_info_qual_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_info_0;
MR_decl_entry(list__foldl5_12_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);
MR_decl_entry(varset__init_1_0);
MR_decl_entry(parse_tree__prog_util__make_n_fresh_vars_5_0);
MR_decl_entry(parse_tree__set_of_var__list_to_set_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_init_2_0);
MR_decl_entry(hlds__hlds_clauses__set_clause_list_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_init_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module11)
	MR_init_entry1(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0);
	MR_init_label10(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,4,5,9,3,10,11,12,13,14,15)
	MR_init_label10(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,17,16,21,23,20,26,27,30,32,33)
	MR_init_label3(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,35,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_produce_instance_method_clauses'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i3);
	}
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(12) = MR_r11;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i4);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_init_4_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i5);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__add_class__produce_instance_method_clause_14_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_clause_info);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,18);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__qual_info, qual_info);
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clauses_info);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_tempr2;
	MR_r13 = MR_sv(12);
	}
	MR_np_call_localret_ent(list__foldl5_12_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i9);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r4;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(14);
	}
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(11) = MR_tfield(0, MR_r1, 0);
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(12) = MR_r11;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i10);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i11);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i12);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_string_const("HeadVar__", 9);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__make_n_fresh_vars_5_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i13);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__set_of_var__list_to_set_2_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i14);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i15);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i17);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i23);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 13;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i21);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i23);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i26);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i26);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i27);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r2;
	MR_sv(6) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i30);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i32);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_init_2_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i33);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_clauses__set_clause_list_2_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i35);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_init_1_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i36);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_0,
		hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0_i37);
MR_def_label(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_tempr1;
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_sv(7);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = MR_sv(6);
	MR_tfield(0, MR_r2, 8) = (MR_Integer) 0;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module12)
	MR_init_entry1(fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0);
	MR_init_label4(fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0,4,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_hlds_fundep'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,19);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0_i4);
MR_def_label(fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__208__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0_i6);
MR_def_label(fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0_i7);
MR_def_label(fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0_i8);
MR_def_label(fn__hlds__make_hlds__add_class__make_hlds_fundep_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module13)
	MR_init_entry1(fn__hlds__make_hlds__add_class__get_list_index_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_class__get_list_index_3_0);
	MR_init_label4(fn__hlds__make_hlds__add_class__get_list_index_3_0,20,6,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_list_index'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_class__get_list_index_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__hlds__make_hlds__add_class__get_list_index_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_class__get_list_index_3_0_i3);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		fn__hlds__make_hlds__add_class__get_list_index_3_0_i6);
MR_def_label(fn__hlds__make_hlds__add_class__get_list_index_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_class__get_list_index_3_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__hlds__make_hlds__add_class__get_list_index_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__hlds__make_hlds__add_class__get_list_index_3_0_i20);
MR_def_label(fn__hlds__make_hlds__add_class__get_list_index_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_class", 24);
	MR_r2 = (MR_Word) MR_string_const("function \140hlds.make_hlds.add_class.get_list_index\'/3", 52);
	MR_r3 = (MR_Word) MR_string_const("element not found", 17);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_class_module14)
	MR_init_entry1(hlds__make_hlds__add_class__is_class_method_mode_item_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__is_class_method_mode_item_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_class_method_mode_item'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__is_class_method_mode_item_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_class_module15)
	MR_init_entry1(hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'missing_pred_or_func_method_error'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,22);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,1,8);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r4;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(list__cons_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module16)
	MR_init_entry1(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0);
	MR_init_label10(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,3,2,5,6,8,7,11,16,17,19)
	MR_init_label6(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,21,24,18,15,10,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_class_pred_or_func_mode_method'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i3);
	}
	MR_sv(9) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 7);
	MR_sv(7) = MR_r5;
	MR_r1 = MR_r6;
	MR_sv(10) = MR_r7;
	MR_GOTO_LAB(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i2);
	}
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_class", 24);
	MR_sv(11) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/10", 74);
	MR_sv(1) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("pred_or_func method item", 24);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i2);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i5);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i6);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i8);
	}
	MR_r4 = MR_sv(3);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_r6;
	MR_r3 = MR_tfield(1, MR_sv(5), 0);
	MR_GOTO_LAB(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i7);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_class", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/10", 74);
	MR_r3 = (MR_Word) MR_string_const("unexpanded \140with_inst\140 annotation", 33);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i7);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i11);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i10);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i15);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i16);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i17);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i19);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i18);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_class__module_add_class_method_9_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i21);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_sv(11) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__cons_3_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i24);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(12);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i28);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_class", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/10", 74);
	MR_r3 = (MR_Word) MR_string_const("multiple preds matching method mode", 35);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_0,
		hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0_i28);
MR_def_label(hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_class_module17)
	MR_init_entry1(hlds__make_hlds__add_class__report_overlapping_instance_declaration_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__report_overlapping_instance_declaration_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_overlapping_instance_declaration'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__report_overlapping_instance_declaration_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 3) = (MR_Word) MR_TAG_COMMON(1,0,24);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_vars_list_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module18)
	MR_init_entry1(hlds__make_hlds__add_class__check_instance_constraints_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__check_instance_constraints_5_0);
	MR_init_label4(hlds__make_hlds__add_class__check_instance_constraints_5_0,2,3,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_instance_constraints'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__check_instance_constraints_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		hlds__make_hlds__add_class__check_instance_constraints_5_0_i2);
MR_def_label(hlds__make_hlds__add_class__check_instance_constraints_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_tfield(0, MR_sv(3), 4);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		hlds__make_hlds__add_class__check_instance_constraints_5_0_i3);
MR_def_label(hlds__make_hlds__add_class__check_instance_constraints_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_r5 = MR_tfield(0, MR_tempr2, 7);
	MR_r6 = MR_tfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_class__constraints_are_identical_6_0,
		hlds__make_hlds__add_class__check_instance_constraints_5_0_i6);
MR_def_label(hlds__make_hlds__add_class__check_instance_constraints_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__check_instance_constraints_5_0_i5);
	}
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(hlds__make_hlds__add_class__check_instance_constraints_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,26);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,14);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_sv(1), 2);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_sv(3), 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,28);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module19)
	MR_init_entry1(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0);
	MR_init_label9(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0,2,3,4,5,7,8,9,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'same_type_hlds_instance_defn'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 4);
	MR_sv(2) = MR_tfield(0, MR_r2, 4);
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_r2 = MR_tfield(0, MR_r2, 7);
	MR_np_call_localret_ent(parse_tree__prog_data__tvarset_merge_renaming_4_0,
		hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0_i2);
MR_def_label(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0_i3);
MR_def_label(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0_i4);
MR_def_label(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0_i5);
MR_def_label(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0_i7);
MR_def_label(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0_i8);
MR_def_label(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0_i9);
MR_def_label(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0_i10);
MR_def_label(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__expect_4_0);
MR_decl_entry(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0);
MR_decl_entry(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0);
MR_decl_entry(hlds__make_hlds__state_var__expand_bang_states_2_0);
MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);
MR_decl_entry(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0);
MR_decl_entry(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0);
MR_decl_entry(hlds__make_hlds__make_hlds_warn__warn_overlap_5_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module20)
	MR_init_entry1(hlds__make_hlds__add_class__produce_instance_method_clause_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__produce_instance_method_clause_14_0);
	MR_init_label10(hlds__make_hlds__add_class__produce_instance_method_clause_14_0,3,6,8,5,9,11,12,13,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'produce_instance_method_clause'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__produce_instance_method_clause_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__659__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_sv(12) = MR_r9;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("hlds.make_hlds.add_class", 24);
	MR_r3 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_class.produce_instance_method_clause\'/14", 70);
	MR_r4 = (MR_Word) MR_string_const("PredOrFunc mismatch", 19);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		hlds__make_hlds__add_class__produce_instance_method_clause_14_0_i3);
MR_def_label(hlds__make_hlds__add_class__produce_instance_method_clause_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0,
		hlds__make_hlds__add_class__produce_instance_method_clause_14_0_i6);
MR_def_label(hlds__make_hlds__add_class__produce_instance_method_clause_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__produce_instance_method_clause_14_0_i5);
	}
	MR_sv(1) = MR_sv(5);
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0,
		hlds__make_hlds__add_class__produce_instance_method_clause_14_0_i8);
MR_def_label(hlds__make_hlds__add_class__produce_instance_method_clause_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__make_hlds__add_class__produce_instance_method_clause_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__expand_bang_states_2_0,
		hlds__make_hlds__add_class__produce_instance_method_clause_14_0_i9);
MR_def_label(hlds__make_hlds__add_class__produce_instance_method_clause_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,29);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_class__produce_instance_method_clause_14_0_i11);
MR_def_label(hlds__make_hlds__add_class__produce_instance_method_clause_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__add_class__produce_instance_method_clause_14_0_i12);
MR_def_label(hlds__make_hlds__add_class__produce_instance_method_clause_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(3);
	MR_r12 = (MR_Word) MR_tbmkword(0, 3);
	MR_r13 = MR_sv(10);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(8);
	MR_r16 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__clauses_info_add_clause_24_0,
		hlds__make_hlds__add_class__produce_instance_method_clause_14_0_i13);
MR_def_label(hlds__make_hlds__add_class__produce_instance_method_clause_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tempr3;
	MR_sv(9) = MR_r7;
	MR_sv(11) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r8;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_singletons_6_0,
		hlds__make_hlds__add_class__produce_instance_method_clause_14_0_i15);
MR_def_label(hlds__make_hlds__add_class__produce_instance_method_clause_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_warn__warn_overlap_5_0,
		hlds__make_hlds__add_class__produce_instance_method_clause_14_0_i16);
MR_def_label(hlds__make_hlds__add_class__produce_instance_method_clause_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_class_module21)
	MR_init_entry1(hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_0);
	MR_init_label1(hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__module_add_class_defn__157__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__insert_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module22)
	MR_init_entry1(fn__hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__208__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__208__1_3_0);
	MR_init_label1(fn__hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__208__1_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_hlds_fundep_2__208__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__208__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_class__get_list_index_3_0,
		fn__hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__208__1_3_0_i3);
MR_def_label(fn__hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__208__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__set__insert_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(parse_tree__prog_type__type_list_subsumes_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_class_module23)
	MR_init_entry1(hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0);
	MR_init_label4(hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__check_for_overlapping_instances__482__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.make_hlds.add_class.IntroducedFrom__pred__check_for_overlapping_instances__482__1/3-0", 5,
		MR_ENTRY(MR_do_fail));
	MR_r3 = MR_tfield(0, MR_r1, 5);
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(1) = MR_tfield(0, MR_r1, 4);
	MR_fv(2) = MR_tfield(0, MR_r1, 7);
	MR_fv(4) = MR_tfield(0, MR_r1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0_i2);
MR_def_label(hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 5);
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_fv(3) = MR_tfield(0, MR_r1, 4);
	MR_fv(5) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__tvarset_merge_renaming_4_0,
		hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0_i4);
MR_def_label(hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_fv(3);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0_i5);
MR_def_label(hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0_i6);
MR_def_label(hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__482__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_fv(4);
	MR_tfield(0, MR_r1, 1) = MR_fv(5);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_class_module24)
	MR_init_entry1(hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__659__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__659__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__produce_instance_method_clause__659__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__659__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__add_class_maybe_bunch_0(void)
{
	hlds__make_hlds__add_class_module0();
	hlds__make_hlds__add_class_module1();
	hlds__make_hlds__add_class_module2();
	hlds__make_hlds__add_class_module3();
	hlds__make_hlds__add_class_module4();
	hlds__make_hlds__add_class_module5();
	hlds__make_hlds__add_class_module6();
	hlds__make_hlds__add_class_module7();
	hlds__make_hlds__add_class_module8();
	hlds__make_hlds__add_class_module9();
	hlds__make_hlds__add_class_module10();
	hlds__make_hlds__add_class_module11();
	hlds__make_hlds__add_class_module12();
	hlds__make_hlds__add_class_module13();
	hlds__make_hlds__add_class_module14();
	hlds__make_hlds__add_class_module15();
	hlds__make_hlds__add_class_module16();
	hlds__make_hlds__add_class_module17();
	hlds__make_hlds__add_class_module18();
	hlds__make_hlds__add_class_module19();
	hlds__make_hlds__add_class_module20();
	hlds__make_hlds__add_class_module21();
	hlds__make_hlds__add_class_module22();
	hlds__make_hlds__add_class_module23();
	hlds__make_hlds__add_class_module24();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__add_class__init(void);
void mercury__hlds__make_hlds__add_class__init_type_tables(void);
void mercury__hlds__make_hlds__add_class__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__add_class__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__add_class__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__make_hlds__add_class__init_threadscope_string_table(void);
#endif

void mercury__hlds__make_hlds__add_class__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__add_class_maybe_bunch_0();
	mercury__hlds__make_hlds__add_class__init_debugger();
}

void mercury__hlds__make_hlds__add_class__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__make_hlds__add_class__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__add_class__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__add_class);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__add_class__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__make_hlds__add_class__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
