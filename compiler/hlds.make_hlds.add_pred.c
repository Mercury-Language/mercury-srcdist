/*
** Automatically generated from `add_pred.m'
** by the Mercury compiler,
** version rotd-2011-08-19, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__make_hlds__add_pred__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.make_hlds.add_pred.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "hlds.make_hlds.add_pred.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "hlds.make_hlds.add_pred.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "hlds.make_hlds.add_pred.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "hlds.make_hlds.add_pred.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "hlds.make_hlds.add_pred.c"
#line 49 "hlds.make_hlds.add_pred.c"
#include "hlds.make_hlds.add_pred.mh"

#line 52 "hlds.make_hlds.add_pred.c"
#line 53 "hlds.make_hlds.add_pred.c"
#ifndef HLDS__MAKE_HLDS__ADD_PRED_DECL_GUARD
#define HLDS__MAKE_HLDS__ADD_PRED_DECL_GUARD

#line 57 "hlds.make_hlds.add_pred.c"
#line 58 "hlds.make_hlds.add_pred.c"

#endif
#line 61 "hlds.make_hlds.add_pred.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1[2];
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];
MR_decl_label10(hlds__make_hlds__add_pred__add_builtin_5_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label10(hlds__make_hlds__add_pred__add_builtin_5_0, 13,15,16,19,20,23,24,18,14,28)
MR_decl_label10(hlds__make_hlds__add_pred__add_builtin_5_0, 29,32,34,49,50,53,54,55,60,61)
MR_decl_label10(hlds__make_hlds__add_pred__add_builtin_5_0, 27,70,71,69,79,81,82,85,86,87)
MR_decl_label10(hlds__make_hlds__add_pred__add_builtin_5_0, 88,90,91,92,98,100,101,94,103,105)
MR_decl_label4(hlds__make_hlds__add_pred__add_builtin_5_0, 106,107,108,109)
MR_decl_label10(hlds__make_hlds__add_pred__add_new_pred_15_0, 2,5,6,7,10,11,12,13,14,15)
MR_decl_label10(hlds__make_hlds__add_pred__add_new_pred_15_0, 16,18,20,22,24,27,28,29,30,31)
MR_decl_label10(hlds__make_hlds__add_pred__add_new_pred_15_0, 23,32,33,36,38,39,40,41,42,43)
MR_decl_label5(hlds__make_hlds__add_pred__add_new_pred_15_0, 34,45,9,47,48)
MR_decl_label8(hlds__make_hlds__add_pred__do_add_new_proc_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label10(hlds__make_hlds__add_pred__module_add_mode_13_0, 2,3,4,5,7,10,6,13,14,15)
MR_decl_label6(hlds__make_hlds__add_pred__module_add_mode_13_0, 16,17,18,19,20,21)
MR_decl_label10(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0, 2,3,4,13,14,15,16,17,19,21)
MR_decl_label6(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0, 20,9,27,29,28,32)
MR_decl_label10(hlds__make_hlds__add_pred__module_do_add_mode_11_0, 4,5,6,7,11,13,33,10,35,3)
MR_decl_label1(hlds__make_hlds__add_pred__module_do_add_mode_11_0, 38)
MR_decl_label10(hlds__make_hlds__add_pred__preds_add_implicit_11_0, 2,3,4,5,7,8,9,10,12,14)
MR_decl_label6(hlds__make_hlds__add_pred__preds_add_implicit_11_0, 15,16,17,19,18,22)
MR_decl_label10(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0, 2,3,4,6,7,9,10,11,12,14)
MR_decl_label7(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0, 16,17,18,19,21,20,24)
MR_decl_label7(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0, 2,3,6,5,8,9,10)
MR_decl_static(hlds__make_hlds__add_pred__preds_add_implicit_11_0)
MR_def_extern_entry(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0)
MR_def_extern_entry(hlds__make_hlds__add_pred__do_add_new_proc_12_0)
MR_decl_static(hlds__make_hlds__add_pred__unspecified_det_for_method_6_0)
MR_decl_static(hlds__make_hlds__add_pred__unspecified_det_for_exported_6_0)
MR_decl_static(hlds__make_hlds__add_pred__module_do_add_mode_11_0)
MR_def_extern_entry(hlds__make_hlds__add_pred__module_add_mode_13_0)
MR_decl_static(hlds__make_hlds__add_pred__add_builtin_5_0)
MR_decl_static(hlds__make_hlds__add_pred__unqualified_pred_error_5_0)
MR_decl_static(hlds__make_hlds__add_pred__add_new_pred_15_0)
MR_def_extern_entry(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0)
MR_def_extern_entry(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;
static const struct mercury_type_0 mercury_common_0[16] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,1,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,6),
MR_TAG_COMMON(1,0,4)
}
},
{
{
MR_TAG_COMMON(3,1,7),
MR_TAG_COMMON(1,0,5)
}
},
{
{
MR_TAG_COMMON(3,1,8),
MR_TAG_COMMON(1,0,6)
}
},
{
{
MR_TAG_COMMON(3,1,9),
MR_TAG_COMMON(1,0,7)
}
},
{
{
MR_TAG_COMMON(2,2,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(3,4,1)
}
},
{
{
MR_TAG_COMMON(3,4,1),
MR_TAG_COMMON(3,4,1)
}
},
{
{
MR_TAG_COMMON(0,0,10),
MR_TAG_COMMON(0,0,11)
}
},
{
{
MR_TAG_COMMON(0,0,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, marker)
}
},
};

static const struct mercury_type_1 mercury_common_1[12] =
{
{
4,
MR_string_const("Error: no determinism declaration", 33)
},
{
4,
MR_string_const("for type class method", 21)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("Error: no determinism declaration for exported", 46)
},
{
4,
MR_string_const("Error: no determinism declaration for local", 43)
},
{
4,
MR_string_const("of local predicates.)", 21)
},
{
4,
MR_string_const("to automatically infer the determinism", 38)
},
{
4,
MR_string_const("Use the \140--infer-det\' option if you want the compiler", 53)
},
{
4,
MR_string_const("you specified the \140--no-infer-det\' options.", 43)
},
{
4,
MR_string_const("(This is an error because", 25)
},
{
4,
MR_string_const("Internal error: the unqualified predicate name", 46)
},
{
4,
MR_string_const("should have been qualified by prog_io.m.", 40)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_TAG_COMMON(1,0,8)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
155,
0
},
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
2,
0,
MR_tbmkword(0, 0)
},
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
5,
0
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_TAG_COMMON(3,5,0),
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
1
},
{
2
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_pred__add_new_pred_15_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_pred__add_new_pred_15_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, marker),
MR_COMMON(0,15),
MR_COMMON(0,15)
}
},
};

MR_decl_entry(hlds__hlds_pred__add_marker_3_0);
static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_COMMON(8,0),
MR_ENTRY_AP(hlds__hlds_pred__add_marker_3_0),
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_pred__add_new_pred_15_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_pred",
"hlds.hlds_pred",
"add_marker",
3,
0
},
"hlds.make_hlds.add_pred",
"add_pred.m",
186,
"39"
};


MR_decl_entry(fn__hlds__hlds_clauses__init_clause_item_numbers_user_0_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_init_4_0);
MR_decl_entry(varset__init_1_0);
MR_decl_entry(parse_tree__prog_util__make_n_fresh_vars_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(parse_tree__prog_type__var_list_to_type_list_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
MR_decl_entry(map__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;
MR_decl_entry(hlds__hlds_pred__init_markers_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(hlds__hlds_pred__pred_info_init_18_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_partial_qualifier_info_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_qual_6_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module0)
	MR_init_entry1(hlds__make_hlds__add_pred__preds_add_implicit_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__preds_add_implicit_11_0);
	MR_init_label10(hlds__make_hlds__add_pred__preds_add_implicit_11_0,2,3,4,5,7,8,9,10,12,14)
	MR_init_label6(hlds__make_hlds__add_pred__preds_add_implicit_11_0,15,16,17,19,18,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'preds_add_implicit'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_pred__preds_add_implicit_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__init_clause_item_numbers_user_0_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i2);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_init_4_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i3);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i4);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_string_const("T", 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__make_n_fresh_vars_5_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i5);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(15) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i7);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i8);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i9);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i10);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(hlds__hlds_pred__init_markers_1_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i12);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i14);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_tbmkword(0, 3);
	MR_r9 = MR_sv(15);
	MR_r10 = MR_sv(11);
	MR_r11 = MR_sv(10);
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = MR_sv(14);
	MR_r14 = MR_sv(12);
	MR_r15 = MR_sv(13);
	MR_r16 = MR_sv(8);
	MR_r17 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_init_18_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i15);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i16);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i17);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i19);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__preds_add_implicit_11_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_pred", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_pred.preds_add_implicit_2\'/12", 59);
	MR_r3 = (MR_Word) MR_string_const("search succeeded", 16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_partial_qualifier_info_2_0,
		hlds__make_hlds__add_pred__preds_add_implicit_11_0_i22);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_insert_qual_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0);
MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);
MR_decl_entry(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module1)
	MR_init_entry1(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0);
	MR_init_label7(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,2,3,6,5,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'preds_add_implicit_report_error'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r11;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0_i2);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0,
		hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0_i3);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0_i5);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0_i6);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__maybe_check_field_access_function_7_0,
		hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0_i5);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0_i8);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__preds_add_implicit_11_0,
		hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0_i9);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0_i10);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_var_name_remap_2_0);
MR_decl_entry(hlds__hlds_pred__next_mode_id_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_init_11_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_inst_varset_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module2)
	MR_init_entry1(hlds__make_hlds__add_pred__do_add_new_proc_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__do_add_new_proc_12_0);
	MR_init_label8(hlds__make_hlds__add_pred__do_add_new_proc_12_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_add_new_proc'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_pred__do_add_new_proc_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__make_hlds__add_pred__do_add_new_proc_12_0_i2);
MR_def_label(hlds__make_hlds__add_pred__do_add_new_proc_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		hlds__make_hlds__add_pred__do_add_new_proc_12_0_i3);
MR_def_label(hlds__make_hlds__add_pred__do_add_new_proc_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_var_name_remap_2_0,
		hlds__make_hlds__add_pred__do_add_new_proc_12_0_i4);
MR_def_label(hlds__make_hlds__add_pred__do_add_new_proc_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__next_mode_id_2_0,
		hlds__make_hlds__add_pred__do_add_new_proc_12_0_i5);
MR_def_label(hlds__make_hlds__add_pred__do_add_new_proc_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_init_11_0,
		hlds__make_hlds__add_pred__do_add_new_proc_12_0_i6);
MR_def_label(hlds__make_hlds__add_pred__do_add_new_proc_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_inst_varset_3_0,
		hlds__make_hlds__add_pred__do_add_new_proc_12_0_i7);
MR_def_label(hlds__make_hlds__add_pred__do_add_new_proc_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__make_hlds__add_pred__do_add_new_proc_12_0_i8);
MR_def_label(hlds__make_hlds__add_pred__do_add_new_proc_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		hlds__make_hlds__add_pred__do_add_new_proc_12_0_i9);
MR_def_label(hlds__make_hlds__add_pred__do_add_new_proc_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module3)
	MR_init_entry1(hlds__make_hlds__add_pred__unspecified_det_for_method_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__unspecified_det_for_method_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unspecified_det_for_method'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_pred__unspecified_det_for_method_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,1,0);
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


MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module4)
	MR_init_entry1(hlds__make_hlds__add_pred__unspecified_det_for_exported_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__unspecified_det_for_exported_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unspecified_det_for_exported'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_pred__unspecified_det_for_exported_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r4;
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__status_is_exported_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module5)
	MR_init_entry1(hlds__make_hlds__add_pred__module_do_add_mode_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__module_do_add_mode_11_0);
	MR_init_label10(hlds__make_hlds__add_pred__module_do_add_mode_11_0,4,5,6,7,11,13,33,10,35,3)
	MR_init_label1(hlds__make_hlds__add_pred__module_do_add_mode_11_0,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_do_add_mode'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_pred__module_do_add_mode_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_do_add_mode_11_0_i3);
	}
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		hlds__make_hlds__add_pred__module_do_add_mode_11_0_i4);
MR_def_label(hlds__make_hlds__add_pred__module_do_add_mode_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__make_hlds__add_pred__module_do_add_mode_11_0_i5);
MR_def_label(hlds__make_hlds__add_pred__module_do_add_mode_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__make_hlds__add_pred__module_do_add_mode_11_0_i6);
MR_def_label(hlds__make_hlds__add_pred__module_do_add_mode_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__make_hlds__add_pred__module_do_add_mode_11_0_i7);
MR_def_label(hlds__make_hlds__add_pred__module_do_add_mode_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_do_add_mode_11_0_i10);
	}
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_is_exported_1_0,
		hlds__make_hlds__add_pred__module_do_add_mode_11_0_i11);
MR_def_label(hlds__make_hlds__add_pred__module_do_add_mode_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_do_add_mode_11_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tempr5 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,9);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = ((MR_Integer) 155 | ((MR_Integer) 0 << (MR_Integer) 10));
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tempr6 = MR_sv(4);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tempr7 = MR_sv(2);
	MR_tfield(1, MR_r4, 0) = MR_tempr7;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr5;
	MR_r3 = MR_tempr7;
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr6;
	MR_r6 = (MR_Integer) 2;
	MR_r10 = MR_sv(9);
	MR_sv(11) = MR_tempr2;
	MR_r9 = (MR_Integer) 1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__do_add_new_proc_12_0,
		hlds__make_hlds__add_pred__module_do_add_mode_11_0_i38);
MR_def_label(hlds__make_hlds__add_pred__module_do_add_mode_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__unspecified_det_for_exported_6_0,
		hlds__make_hlds__add_pred__module_do_add_mode_11_0_i33);
MR_def_label(hlds__make_hlds__add_pred__module_do_add_mode_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tfield(1, MR_r4, 0) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r6 = (MR_Integer) 2;
	MR_r10 = MR_sv(9);
	MR_sv(11) = MR_tempr1;
	MR_r9 = (MR_Integer) 1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__do_add_new_proc_12_0,
		hlds__make_hlds__add_pred__module_do_add_mode_11_0_i38);
MR_def_label(hlds__make_hlds__add_pred__module_do_add_mode_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__unspecified_det_for_method_6_0,
		hlds__make_hlds__add_pred__module_do_add_mode_11_0_i35);
MR_def_label(hlds__make_hlds__add_pred__module_do_add_mode_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tfield(1, MR_r4, 0) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r6 = (MR_Integer) 2;
	MR_r10 = MR_sv(9);
	MR_sv(11) = MR_tempr1;
	MR_r9 = (MR_Integer) 1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__do_add_new_proc_12_0,
		hlds__make_hlds__add_pred__module_do_add_mode_11_0_i38);
MR_def_label(hlds__make_hlds__add_pred__module_do_add_mode_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tempr2 = MR_r7;
	MR_r7 = MR_r4;
	MR_sv(11) = MR_r8;
	MR_r8 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_r10 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r9 = (MR_Integer) 1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__do_add_new_proc_12_0,
		hlds__make_hlds__add_pred__module_do_add_mode_11_0_i38);
MR_def_label(hlds__make_hlds__add_pred__module_do_add_mode_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(mdbcomp__prim_data__sym_name_get_module_name_default_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__length_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(hlds__pred_table__predicate_table_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__pred_table__predicate_table_set_preds_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module6)
	MR_init_entry1(hlds__make_hlds__add_pred__module_add_mode_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__module_add_mode_13_0);
	MR_init_label10(hlds__make_hlds__add_pred__module_add_mode_13_0,2,3,4,5,7,10,6,13,14,15)
	MR_init_label6(hlds__make_hlds__add_pred__module_add_mode_13_0,16,17,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_add_mode'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_pred__module_add_mode_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(3) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(12) = MR_tempr1;
	MR_sv(13) = MR_r10;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i2);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__sym_name_get_module_name_default_3_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i3);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i4);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i5);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i7);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_mode_13_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_mode_13_0_i6);
	}
	MR_sv(11) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i10);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_mode_13_0_i6);
	}
	MR_sv(5) = MR_sv(11);
	MR_r1 = MR_sv(12);
	MR_sv(11) = MR_sv(13);
	MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_mode_13_0_i14);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tempr2 = MR_sv(5);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(2);
	MR_r9 = (MR_Word) MR_string_const("mode declaration", 16);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i13);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(11) = MR_r3;
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i15);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i16);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i17);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_do_add_mode_11_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i18);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i19);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i20);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__add_pred__module_add_mode_13_0_i21);
MR_def_label(hlds__make_hlds__add_pred__module_add_mode_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_2_0);
MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__list_to_set_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__int_type_0_0);
MR_decl_entry(fn__parse_tree__set_of_var__make_singleton_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__uo_mode_0_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_proc_id_0_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_init_1_0);
MR_decl_entry(fn__hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_0);
MR_decl_entry(hlds__hlds_clauses__set_clause_list_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module7)
	MR_init_entry1(hlds__make_hlds__add_pred__add_builtin_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__add_builtin_5_0);
	MR_init_label10(hlds__make_hlds__add_pred__add_builtin_5_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label10(hlds__make_hlds__add_pred__add_builtin_5_0,13,15,16,19,20,23,24,18,14,28)
	MR_init_label10(hlds__make_hlds__add_pred__add_builtin_5_0,29,32,34,49,50,53,54,55,60,61)
	MR_init_label10(hlds__make_hlds__add_pred__add_builtin_5_0,27,70,71,69,79,81,82,85,86,87)
	MR_init_label10(hlds__make_hlds__add_pred__add_builtin_5_0,88,90,91,92,98,100,101,94,103,105)
	MR_init_label4(hlds__make_hlds__add_pred__add_builtin_5_0,106,107,108,109)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_builtin'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_pred__add_builtin_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i2);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i3);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i4);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i5);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i6);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvars_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i7);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i8);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i9);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(17) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i11);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i12);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i13);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i15);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i16);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i14);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("builtin_compound_eq", 19)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i19);
	}
	MR_r3 = MR_sv(11);
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i18);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("builtin_compound_lt", 19)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i20);
	}
	MR_r3 = MR_sv(11);
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i18);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("store_at_ref", 12)) == 0) || (strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("store_at_ref_impure", 19)) == 0)))) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i14);
	}
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i23);
	}
	MR_r3 = MR_sv(11);
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i18);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),6)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i24);
	}
	MR_r3 = MR_sv(11);
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i18);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),3)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i14);
	}
	MR_r3 = MR_sv(11);
	MR_r1 = MR_sv(18);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_sv(8) = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_sv(7);
	MR_sv(7) = (MR_Integer) 1;
	MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i85);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i28);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i29);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i27);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("trace_get_io_state", 18)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i27);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i32);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_r1;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i34);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tempr4 = MR_sv(8);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_TAG_COMMON(1,0,13);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 5);
	MR_sv(7) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tfield(1, MR_tempr3, 2) = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_tfield(1, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i49);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i50);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i53);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i54);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i55);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(13);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(14);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_sv(11);
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i60);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i61);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr6, 1) = (MR_Word) MR_TAG_COMMON(2,7,0);
	MR_tfield(3, MR_tempr6, 2) = MR_tempr5;
	MR_r3 = MR_sv(11);
	MR_r5 = MR_sv(5);
	MR_sv(5) = MR_tempr6;
	MR_sv(8) = MR_sv(4);
	MR_r2 = MR_r5;
	MR_sv(7) = (MR_Integer) 0;
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i85);
	}
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i70);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i71);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i69);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(6), MR_string_const("trace_set_io_state", 18)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i69);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(2,7,1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_sv(8) = MR_tempr3;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_sv(7);
	MR_sv(7) = (MR_Integer) 0;
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i85);
	}
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i79);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 6);
	MR_tfield(2, MR_r2, 0) = MR_sv(5);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_tfield(2, MR_r2, 2) = MR_sv(11);
	MR_tfield(2, MR_r2, 3) = (MR_Integer) 0;
	MR_tfield(2, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r2, 5) = MR_sv(8);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i81);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i82);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_sv(7);
	MR_sv(7) = (MR_Integer) 0;
	MR_r1 = MR_sv(18);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i86);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i87);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i88);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(17);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i90);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_init_1_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i91);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i92);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_builtin_5_0_i94);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__set_clause_list_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i98);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i100);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i101);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i109);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_clauses__set_clause_list_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i103);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i105);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i106);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i107);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i108);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_pred__add_builtin_5_0_i109);
MR_def_label(hlds__make_hlds__add_pred__add_builtin_5_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_markers_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module8)
	MR_init_entry1(hlds__make_hlds__add_pred__unqualified_pred_error_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__unqualified_pred_error_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unqualified_pred_error'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_pred__unqualified_pred_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,14);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,1,10);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_r4;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__purity_to_markers_2_0);
MR_decl_entry(hlds__hlds_pred__markers_to_marker_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_markers_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_pf_m_n_a_7_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_str_1_0);
MR_decl_entry(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_builtin_1_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(hlds__hlds_module__module_info_incr_errors_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module9)
	MR_init_entry1(hlds__make_hlds__add_pred__add_new_pred_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__add_new_pred_15_0);
	MR_init_label10(hlds__make_hlds__add_pred__add_new_pred_15_0,2,5,6,7,10,11,12,13,14,15)
	MR_init_label10(hlds__make_hlds__add_pred__add_new_pred_15_0,16,18,20,22,24,27,28,29,30,31)
	MR_init_label10(hlds__make_hlds__add_pred__add_new_pred_15_0,23,32,33,36,38,39,40,41,42,43)
	MR_init_label5(hlds__make_hlds__add_pred__add_new_pred_15_0,34,45,9,47,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_new_pred'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_pred__add_new_pred_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(22);
	MR_sv(22) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_new_pred_15_0_i2);
	}
	MR_sv(20) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(18) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(15) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r10;
	MR_sv(6) = MR_r11;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(2,7,0);
	MR_r1 = MR_r12;
	MR_sv(21) = MR_r13;
	MR_GOTO_LAB(hlds__make_hlds__add_pred__add_new_pred_15_0_i5);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(18) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(15) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(3) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r10;
	MR_sv(6) = MR_r11;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_r12;
	MR_sv(21) = MR_r13;
	}
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i6);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i7);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(18),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_new_pred_15_0_i9);
	}
	MR_sv(9) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(18);
	MR_sv(10) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(19);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i10);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__init_clause_item_numbers_user_0_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i11);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_init_4_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i12);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i13);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i14);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__purity_to_markers_2_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i15);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__markers_to_marker_list_2_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i16);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, marker);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_markers);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(16);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i18);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i20);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tempr3 = MR_sv(18);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_sv(7);
	MR_r8 = (MR_Word) MR_tbmkword(0, 3);
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(20);
	MR_r12 = MR_sv(17);
	MR_r13 = MR_sv(2);
	MR_r14 = MR_sv(14);
	MR_r15 = MR_sv(15);
	MR_r16 = MR_sv(13);
	MR_r17 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_init_18_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i22);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(9);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_m_n_a_7_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i24);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_new_pred_15_0_i23);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_new_pred_15_0_i23);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i27);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i28);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_str_1_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i29);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i30);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(17);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(20);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(21);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i31);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(22);
	}
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_partial_qualifier_info_2_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i32);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_qual_6_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i33);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_builtin_1_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i36);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__add_new_pred_15_0_i34);
	}
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i38);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i39);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(20);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__add_builtin_5_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i40);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i41);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(20);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i42);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i43);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i45);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i45);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(21);
	MR_decr_sp_and_return(22);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_errors_2_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i47);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(21);
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__unqualified_pred_error_5_0,
		hlds__make_hlds__add_pred__add_new_pred_15_0_i48);
MR_def_label(hlds__make_hlds__add_pred__add_new_pred_15_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(22);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_util__split_types_and_modes_3_0);
MR_decl_entry(parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(parse_tree__prog_mode__out_mode_1_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module10)
	MR_init_entry1(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__module_add_pred_or_func_17_0);
	MR_init_label10(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,2,3,4,13,14,15,16,17,19,21)
	MR_init_label6(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,20,9,27,29,28,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_add_pred_or_func'/17 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_pred__module_add_pred_or_func_17_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(14) = MR_r9;
	MR_sv(5) = MR_r10;
	MR_sv(6) = MR_r11;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r12;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_r13;
	MR_sv(11) = MR_r14;
	MR_r1 = MR_r6;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__split_types_and_modes_3_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i2);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_tempr2 = MR_sv(12);
	MR_sv(12) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(2);
	MR_r12 = MR_sv(10);
	MR_r13 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__add_new_pred_15_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i3);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i4);
	}
	if (MR_LTAGS_TEST(MR_sv(12),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(12), 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i4);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i9);
	}
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i13);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i14);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i15);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i16);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i17);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__append_3_1,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i19);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i21);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r8 = (MR_Integer) 1;
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(13);
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_mode_13_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i32);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(13);
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_mode_13_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i32);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_tfield(1, MR_sv(12), 0);
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i29);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(13);
	MR_r3 = MR_sv(9);
	MR_r8 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_mode_13_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i32);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(13);
	MR_r3 = MR_sv(9);
	MR_r8 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_mode_13_0,
		hlds__make_hlds__add_pred__module_add_pred_or_func_17_0_i32);
MR_def_label(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_pred_module11)
	MR_init_entry1(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0);
	MR_init_label10(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,2,3,4,6,7,9,10,11,12,14)
	MR_init_label7(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,16,17,18,19,21,20,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'preds_add_implicit_for_assertion'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i2);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(term__context_file_2_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i3);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(term__context_line_2_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i4);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(9);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i6);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_string_const("T", 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__make_n_fresh_vars_5_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i7);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(15) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i9);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i10);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i11);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i12);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(hlds__hlds_pred__init_markers_1_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i14);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i16);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_tbmkword(0, 3);
	MR_r9 = MR_sv(15);
	MR_r10 = MR_sv(11);
	MR_r11 = MR_sv(10);
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = MR_sv(14);
	MR_r14 = MR_sv(12);
	MR_r15 = MR_sv(13);
	MR_r16 = MR_sv(7);
	MR_r17 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_init_18_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i17);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i18);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i19);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i21);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_pred", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_pred.preds_add_implicit_2\'/12", 59);
	MR_r3 = (MR_Word) MR_string_const("search succeeded", 16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_partial_qualifier_info_2_0,
		hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0_i24);
MR_def_label(hlds__make_hlds__add_pred__preds_add_implicit_for_assertion_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(hlds__pred_table__predicate_table_insert_qual_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__add_pred_maybe_bunch_0(void)
{
	hlds__make_hlds__add_pred_module0();
	hlds__make_hlds__add_pred_module1();
	hlds__make_hlds__add_pred_module2();
	hlds__make_hlds__add_pred_module3();
	hlds__make_hlds__add_pred_module4();
	hlds__make_hlds__add_pred_module5();
	hlds__make_hlds__add_pred_module6();
	hlds__make_hlds__add_pred_module7();
	hlds__make_hlds__add_pred_module8();
	hlds__make_hlds__add_pred_module9();
	hlds__make_hlds__add_pred_module10();
	hlds__make_hlds__add_pred_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__add_pred__init(void);
void mercury__hlds__make_hlds__add_pred__init_type_tables(void);
void mercury__hlds__make_hlds__add_pred__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__add_pred__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__add_pred__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__make_hlds__add_pred__init_threadscope_string_table(void);
#endif

void mercury__hlds__make_hlds__add_pred__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__add_pred_maybe_bunch_0();
	mercury__hlds__make_hlds__add_pred__init_debugger();
}

void mercury__hlds__make_hlds__add_pred__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__make_hlds__add_pred__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__add_pred__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__add_pred);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__add_pred__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__make_hlds__add_pred__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
