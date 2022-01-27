/*
** Automatically generated from `ctgc.datastruct.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__transform_hlds__ctgc__datastruct__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.ctgc.datastruct.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "transform_hlds.ctgc.datastruct.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "transform_hlds.ctgc.datastruct.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "transform_hlds.ctgc.datastruct.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "transform_hlds.ctgc.datastruct.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "transform_hlds.ctgc.datastruct.c"
#line 49 "transform_hlds.ctgc.datastruct.c"
#include "transform_hlds.ctgc.datastruct.mh"

#line 52 "transform_hlds.ctgc.datastruct.c"
#line 53 "transform_hlds.ctgc.datastruct.c"
#ifndef TRANSFORM_HLDS__CTGC__DATASTRUCT_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__DATASTRUCT_DECL_GUARD

#line 57 "transform_hlds.ctgc.datastruct.c"
#line 58 "transform_hlds.ctgc.datastruct.c"

#endif
#line 61 "transform_hlds.ctgc.datastruct.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label3(transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0, 2,3,4)
MR_decl_label4(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0, 19,6,3,1)
MR_decl_label4(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0, 2,4,5,1)
MR_decl_label3(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0, 6,9,5)
MR_decl_label1(fn__transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_0, 2)
MR_decl_label1(fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0, 3)
MR_decl_label5(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0, 16,4,5,6,7)
MR_decl_label3(fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0, 2,3,4)
MR_def_extern_entry(fn__transform_hlds__ctgc__datastruct__datastruct_init_with_selector_2_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_0)
MR_def_extern_entry(transform_hlds__ctgc__datastruct__datastruct_equal_2_0)
MR_def_extern_entry(transform_hlds__ctgc__datastruct__datastruct_same_vars_2_0)
MR_def_extern_entry(transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0)
MR_def_extern_entry(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0)
MR_def_extern_entry(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_0)
MR_def_extern_entry(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0)
MR_decl_static(transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_0)
MR_def_extern_entry(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0)
MR_def_extern_entry(transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0)
MR_def_extern_entry(transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__datastruct__datastructs_vars_1_0)
MR_decl_static(transform_hlds__ctgc__datastruct__IntroducedFrom__pred__datastructs_project__196__1_2_0)
MR_decl_static(fn__transform_hlds__ctgc__datastruct__IntroducedFrom__func__datastructs_vars__200__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[5] =
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__datastruct__datastructs_vars_1_0_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,3),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__datastruct__datastructs_vars_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_COMMON(0,4)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__transform_hlds__ctgc__datastruct__IntroducedFrom__func__datastructs_vars__200__1_1_0),
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__datastruct__datastructs_vars_1_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"lambda_ctgc_datastruct_m_200",
2,
0
},
"transform_hlds.ctgc.datastruct",
"ctgc.datastruct.m",
200,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"lambda_ctgc_datastruct_m_196",
2,
0
},
"transform_hlds.ctgc.datastruct",
"ctgc.datastruct.m",
196,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastructs_subsume_datastruct",
4,
0
},
"transform_hlds.ctgc.datastruct",
"ctgc.datastruct.m",
190,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastructs_subsume_datastruct",
4,
0
},
"transform_hlds.ctgc.datastruct",
"ctgc.datastruct.m",
171,
"7"
};



MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module0)
	MR_init_entry1(fn__transform_hlds__ctgc__datastruct__datastruct_init_with_selector_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__datastruct__datastruct_init_with_selector_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_init_with_selector'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__datastruct__datastruct_init_with_selector_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module1)
	MR_init_entry1(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_init'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__selector__selector_init_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module2)
	MR_init_entry1(fn__transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_0);
	MR_init_label1(fn__transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_init_with_pos'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__selector__selector_init_2_0,
		fn__transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_0_i2);
MR_def_label(fn__transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_0,2)
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

MR_decl_entry(__Unify___parse_tree__prog_data__datastruct_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module3)
	MR_init_entry1(transform_hlds__ctgc__datastruct__datastruct_equal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__datastruct__datastruct_equal_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_equal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__datastruct__datastruct_equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__datastruct_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module4)
	MR_init_entry1(transform_hlds__ctgc__datastruct__datastruct_same_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__datastruct__datastruct_same_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_same_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__datastruct__datastruct_same_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module5)
	MR_init_entry1(transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_refers_to_topcell'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__selector__selector_termshift_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(parse_tree__prog_data__lookup_var_type_3_0);
MR_decl_entry(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module6)
	MR_init_entry1(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0);
	MR_init_label5(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0,16,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_termshift'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0_i16);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__selector_termshift_3_0,
		fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0_i4);
MR_def_label(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0_i5);
MR_def_label(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_type_3_0,
		fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0_i6);
MR_def_label(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,
		fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0_i7);
MR_def_label(fn__transform_hlds__ctgc__datastruct__datastruct_termshift_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module7)
	MR_init_entry1(fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0);
	MR_init_label3(fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalize_datastruct'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0_i2);
MR_def_label(fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_type_3_0,
		fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0_i3);
MR_def_label(fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,
		fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0_i4);
MR_def_label(fn__transform_hlds__ctgc__datastruct__normalize_datastruct_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__selector__selector_subsumed_by_6_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module8)
	MR_init_entry1(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0);
	MR_init_label4(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0,2,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_subsumed_by_return_selector'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0_i2);
MR_def_label(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0_i4);
MR_def_label(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_type_3_0,
		transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0_i5);
MR_def_label(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__ctgc__selector__selector_subsumed_by_6_0);
	}
MR_def_label(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0,1)
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


MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module9)
	MR_init_entry1(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_subsumed_by'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module10)
	MR_init_entry1(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0);
	MR_init_label4(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0,19,6,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_subsumed_by_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0_i1);
	}
	MR_sv(4) = MR_tfield(1, MR_r4, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_0,
		transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0_i6);
MR_def_label(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0_i19);
MR_def_label(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module11)
	MR_init_entry1(transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastructs_subsume_datastruct'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module12)
	MR_init_entry1(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0);
	MR_init_label3(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0,6,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastructs_subsumed_by_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0_i5);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0_i6);
MR_def_label(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_0,
		transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0_i9);
MR_def_label(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module13)
	MR_init_entry1(transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastructs_that_are_subsumed_by_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(list__filter_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);
MR_decl_entry(fn__list__append_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module14)
	MR_init_entry1(fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0);
	MR_init_label1(fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_lists_least_upper_bound'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0_i3);
MR_def_label(fn__transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__append_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__selector__selector_apply_widening_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module15)
	MR_init_entry1(transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0);
	MR_init_label3(transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastruct_apply_widening'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0_i2);
MR_def_label(transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_type_3_0,
		transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0_i3);
MR_def_label(transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__selector_apply_widening_4_0,
		transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0_i4);
MR_def_label(transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__filter_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module16)
	MR_init_entry1(fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastructs_project'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__datastruct__datastructs_project_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__datastruct__IntroducedFrom__pred__datastructs_project__196__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__filter_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module17)
	MR_init_entry1(fn__transform_hlds__ctgc__datastruct__datastructs_vars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__datastruct__datastructs_vars_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'datastructs_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__datastruct__datastructs_vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module18)
	MR_init_entry1(transform_hlds__ctgc__datastruct__IntroducedFrom__pred__datastructs_project__196__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__datastruct__IntroducedFrom__pred__datastructs_project__196__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__datastructs_project__196__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__datastruct__IntroducedFrom__pred__datastructs_project__196__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__datastruct_module19)
	MR_init_entry1(fn__transform_hlds__ctgc__datastruct__IntroducedFrom__func__datastructs_vars__200__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__datastruct__IntroducedFrom__func__datastructs_vars__200__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__datastructs_vars__200__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__datastruct__IntroducedFrom__func__datastructs_vars__200__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__datastruct_maybe_bunch_0(void)
{
	transform_hlds__ctgc__datastruct_module0();
	transform_hlds__ctgc__datastruct_module1();
	transform_hlds__ctgc__datastruct_module2();
	transform_hlds__ctgc__datastruct_module3();
	transform_hlds__ctgc__datastruct_module4();
	transform_hlds__ctgc__datastruct_module5();
	transform_hlds__ctgc__datastruct_module6();
	transform_hlds__ctgc__datastruct_module7();
	transform_hlds__ctgc__datastruct_module8();
	transform_hlds__ctgc__datastruct_module9();
	transform_hlds__ctgc__datastruct_module10();
	transform_hlds__ctgc__datastruct_module11();
	transform_hlds__ctgc__datastruct_module12();
	transform_hlds__ctgc__datastruct_module13();
	transform_hlds__ctgc__datastruct_module14();
	transform_hlds__ctgc__datastruct_module15();
	transform_hlds__ctgc__datastruct_module16();
	transform_hlds__ctgc__datastruct_module17();
	transform_hlds__ctgc__datastruct_module18();
	transform_hlds__ctgc__datastruct_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__datastruct__init(void);
void mercury__transform_hlds__ctgc__datastruct__init_type_tables(void);
void mercury__transform_hlds__ctgc__datastruct__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__datastruct__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__datastruct__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__ctgc__datastruct__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__ctgc__datastruct__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__datastruct_maybe_bunch_0();
	mercury__transform_hlds__ctgc__datastruct__init_debugger();
}

void mercury__transform_hlds__ctgc__datastruct__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__ctgc__datastruct__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__datastruct__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__transform_hlds__ctgc__datastruct);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__datastruct__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__ctgc__datastruct__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
