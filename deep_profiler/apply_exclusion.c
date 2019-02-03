/*
** Automatically generated from `apply_exclusion.m'
** by the Mercury compiler,
** version 11.07.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__apply_exclusion__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 284 "profile.int"
#include "profile.mh"

#line 28 "apply_exclusion.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "apply_exclusion.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 36 "apply_exclusion.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 40 "apply_exclusion.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "apply_exclusion.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "apply_exclusion.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "apply_exclusion.c"
#line 53 "apply_exclusion.c"
#include "apply_exclusion.mh"

#line 56 "apply_exclusion.c"
#line 57 "apply_exclusion.c"
#ifndef APPLY_EXCLUSION_DECL_GUARD
#define APPLY_EXCLUSION_DECL_GUARD

#line 61 "apply_exclusion.c"
#line 62 "apply_exclusion.c"

#endif
#line 65 "apply_exclusion.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label9(apply_exclusion__accumulate_parent_csd_prof_info_7_0, 2,3,4,5,6,7,8,9,11)
MR_decl_label3(apply_exclusion__compensate_using_comp_table_5_0, 2,4,3)
MR_decl_label2(apply_exclusion__compute_parent_csd_prof_info_5_0, 3,4)
MR_decl_label3(fn__apply_exclusion__accumulate_csds_by_call_site_3_0, 2,5,3)
MR_decl_label4(fn__apply_exclusion__accumulate_csds_by_clique_3_0, 2,3,6,4)
MR_decl_label5(fn__apply_exclusion__accumulate_csds_by_module_3_0, 2,3,4,7,5)
MR_decl_label4(fn__apply_exclusion__accumulate_csds_by_procedure_3_0, 2,3,6,4)
MR_decl_label2(fn__apply_exclusion__group_csds_by_call_site_2_0, 6,7)
MR_decl_label2(fn__apply_exclusion__group_csds_by_clique_2_0, 6,7)
MR_decl_label2(fn__apply_exclusion__group_csds_by_module_2_0, 6,7)
MR_decl_label2(fn__apply_exclusion__group_csds_by_procedure_2_0, 6,7)
MR_decl_label1(fn__apply_exclusion__pair_contour_3_0, 2)
MR_def_extern_entry(fn__apply_exclusion__group_csds_by_call_site_2_0)
MR_def_extern_entry(fn__apply_exclusion__group_csds_by_procedure_2_0)
MR_def_extern_entry(fn__apply_exclusion__group_csds_by_module_2_0)
MR_def_extern_entry(fn__apply_exclusion__group_csds_by_clique_2_0)
MR_def_extern_entry(apply_exclusion__compute_parent_csd_prof_info_5_0)
MR_def_extern_entry(fn__apply_exclusion__pair_self_1_0)
MR_def_extern_entry(fn__apply_exclusion__pair_contour_3_0)
MR_decl_static(fn__apply_exclusion__accumulate_csds_by_call_site_3_0)
MR_decl_static(fn__apply_exclusion__accumulate_csds_by_procedure_3_0)
MR_decl_static(fn__apply_exclusion__accumulate_csds_by_module_3_0)
MR_decl_static(fn__apply_exclusion__accumulate_csds_by_clique_3_0)
MR_decl_static(apply_exclusion__accumulate_parent_csd_prof_info_7_0)
MR_decl_static(apply_exclusion__compensate_using_comp_table_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
static const struct mercury_type_0 mercury_common_0[10] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_COMMON(1,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_COMMON(1,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(1,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(1,1)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_call_site_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_procedure_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_module_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_clique_2_0_1;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_call_site_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_procedure_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(0,2),
MR_COMMON(0,5),
MR_COMMON(0,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_module_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(0,2),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_clique_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(0,2),
MR_COMMON(0,9),
MR_COMMON(0,9)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__apply_exclusion__compute_parent_csd_prof_info_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__apply_exclusion__compute_parent_csd_prof_info_5_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__apply_exclusion__accumulate_parent_csd_prof_info_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__apply_exclusion__accumulate_parent_csd_prof_info_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, proc_static_ptr),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__apply_exclusion__accumulate_parent_csd_prof_info_7_0_1 = {
{
MR_PREDICATE,
"apply_exclusion",
"apply_exclusion",
"compensate_using_comp_table",
5,
0
},
"apply_exclusion",
"apply_exclusion.m",
157,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__apply_exclusion__compute_parent_csd_prof_info_5_0_1 = {
{
MR_PREDICATE,
"apply_exclusion",
"apply_exclusion",
"accumulate_parent_csd_prof_info",
7,
0
},
"apply_exclusion",
"apply_exclusion.m",
134,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_clique_2_0_1 = {
{
MR_FUNCTION,
"apply_exclusion",
"apply_exclusion",
"accumulate_csds_by_clique",
4,
0
},
"apply_exclusion",
"apply_exclusion.m",
69,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_module_2_0_1 = {
{
MR_FUNCTION,
"apply_exclusion",
"apply_exclusion",
"accumulate_csds_by_module",
4,
0
},
"apply_exclusion",
"apply_exclusion.m",
64,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_procedure_2_0_1 = {
{
MR_FUNCTION,
"apply_exclusion",
"apply_exclusion",
"accumulate_csds_by_procedure",
4,
0
},
"apply_exclusion",
"apply_exclusion.m",
59,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__apply_exclusion__group_csds_by_call_site_2_0_1 = {
{
MR_FUNCTION,
"apply_exclusion",
"apply_exclusion",
"accumulate_csds_by_call_site",
4,
0
},
"apply_exclusion",
"apply_exclusion.m",
54,
"6"
};


MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__list__foldl_3_0);
MR_decl_entry(map__to_assoc_list_2_0);

MR_BEGIN_MODULE(apply_exclusion_module0)
	MR_init_entry1(fn__apply_exclusion__group_csds_by_call_site_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__apply_exclusion__group_csds_by_call_site_2_0);
	MR_init_label2(fn__apply_exclusion__group_csds_by_call_site_2_0,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_csds_by_call_site'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__apply_exclusion__group_csds_by_call_site_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__apply_exclusion__accumulate_csds_by_call_site_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__apply_exclusion__group_csds_by_call_site_2_0_i6);
MR_def_label(fn__apply_exclusion__group_csds_by_call_site_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__apply_exclusion__group_csds_by_call_site_2_0_i7);
MR_def_label(fn__apply_exclusion__group_csds_by_call_site_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__to_assoc_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(apply_exclusion_module1)
	MR_init_entry1(fn__apply_exclusion__group_csds_by_procedure_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__apply_exclusion__group_csds_by_procedure_2_0);
	MR_init_label2(fn__apply_exclusion__group_csds_by_procedure_2_0,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_csds_by_procedure'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__apply_exclusion__group_csds_by_procedure_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__apply_exclusion__accumulate_csds_by_procedure_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__apply_exclusion__group_csds_by_procedure_2_0_i6);
MR_def_label(fn__apply_exclusion__group_csds_by_procedure_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__apply_exclusion__group_csds_by_procedure_2_0_i7);
MR_def_label(fn__apply_exclusion__group_csds_by_procedure_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__to_assoc_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(apply_exclusion_module2)
	MR_init_entry1(fn__apply_exclusion__group_csds_by_module_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__apply_exclusion__group_csds_by_module_2_0);
	MR_init_label2(fn__apply_exclusion__group_csds_by_module_2_0,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_csds_by_module'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__apply_exclusion__group_csds_by_module_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__apply_exclusion__accumulate_csds_by_module_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__apply_exclusion__group_csds_by_module_2_0_i6);
MR_def_label(fn__apply_exclusion__group_csds_by_module_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__apply_exclusion__group_csds_by_module_2_0_i7);
MR_def_label(fn__apply_exclusion__group_csds_by_module_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__to_assoc_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(apply_exclusion_module3)
	MR_init_entry1(fn__apply_exclusion__group_csds_by_clique_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__apply_exclusion__group_csds_by_clique_2_0);
	MR_init_label2(fn__apply_exclusion__group_csds_by_clique_2_0,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_csds_by_clique'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__apply_exclusion__group_csds_by_clique_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__apply_exclusion__accumulate_csds_by_clique_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__apply_exclusion__group_csds_by_clique_2_0_i6);
MR_def_label(fn__apply_exclusion__group_csds_by_clique_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__apply_exclusion__group_csds_by_clique_2_0_i7);
MR_def_label(fn__apply_exclusion__group_csds_by_clique_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__to_assoc_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__zero_own_prof_info_0_0);
MR_decl_entry(fn__measurements__zero_inherit_prof_info_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(apply_exclusion_module4)
	MR_init_entry1(apply_exclusion__compute_parent_csd_prof_info_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__apply_exclusion__compute_parent_csd_prof_info_5_0);
	MR_init_label2(apply_exclusion__compute_parent_csd_prof_info_5_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_parent_csd_prof_info'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__apply_exclusion__compute_parent_csd_prof_info_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(apply_exclusion__accumulate_parent_csd_prof_info_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r3;
	}
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		apply_exclusion__compute_parent_csd_prof_info_5_0_i3);
MR_def_label(apply_exclusion__compute_parent_csd_prof_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__zero_inherit_prof_info_0_0,
		apply_exclusion__compute_parent_csd_prof_info_5_0_i4);
MR_def_label(apply_exclusion__compute_parent_csd_prof_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(apply_exclusion_module5)
	MR_init_entry1(fn__apply_exclusion__pair_self_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__apply_exclusion__pair_self_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pair_self'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__apply_exclusion__pair_self_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__exclude__apply_contour_exclusion_3_0);

MR_BEGIN_MODULE(apply_exclusion_module6)
	MR_init_entry1(fn__apply_exclusion__pair_contour_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__apply_exclusion__pair_contour_3_0);
	MR_init_label1(fn__apply_exclusion__pair_contour_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pair_contour'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__apply_exclusion__pair_contour_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__exclude__apply_contour_exclusion_3_0,
		fn__apply_exclusion__pair_contour_3_0_i2);
MR_def_label(fn__apply_exclusion__pair_contour_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_call_site_static_map_3_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(apply_exclusion_module7)
	MR_init_entry1(fn__apply_exclusion__accumulate_csds_by_call_site_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__apply_exclusion__accumulate_csds_by_call_site_3_0);
	MR_init_label3(fn__apply_exclusion__accumulate_csds_by_call_site_3_0,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_csds_by_call_site'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__apply_exclusion__accumulate_csds_by_call_site_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_static_map_3_0,
		fn__apply_exclusion__accumulate_csds_by_call_site_3_0_i2);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_call_site_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		fn__apply_exclusion__accumulate_csds_by_call_site_3_0_i5);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_call_site_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__apply_exclusion__accumulate_csds_by_call_site_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(fn__apply_exclusion__accumulate_csds_by_call_site_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_call_site_statics_3_0);

MR_BEGIN_MODULE(apply_exclusion_module8)
	MR_init_entry1(fn__apply_exclusion__accumulate_csds_by_procedure_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__apply_exclusion__accumulate_csds_by_procedure_3_0);
	MR_init_label4(fn__apply_exclusion__accumulate_csds_by_procedure_3_0,2,3,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_csds_by_procedure'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__apply_exclusion__accumulate_csds_by_procedure_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_r3;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_static_map_3_0,
		fn__apply_exclusion__accumulate_csds_by_procedure_3_0_i2);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_procedure_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__apply_exclusion__accumulate_csds_by_procedure_3_0_i3);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_procedure_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		fn__apply_exclusion__accumulate_csds_by_procedure_3_0_i6);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_procedure_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__apply_exclusion__accumulate_csds_by_procedure_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(fn__apply_exclusion__accumulate_csds_by_procedure_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_proc_statics_3_0);

MR_BEGIN_MODULE(apply_exclusion_module9)
	MR_init_entry1(fn__apply_exclusion__accumulate_csds_by_module_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__apply_exclusion__accumulate_csds_by_module_3_0);
	MR_init_label5(fn__apply_exclusion__accumulate_csds_by_module_3_0,2,3,4,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_csds_by_module'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__apply_exclusion__accumulate_csds_by_module_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_r3;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_static_map_3_0,
		fn__apply_exclusion__accumulate_csds_by_module_3_0_i2);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_module_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		fn__apply_exclusion__accumulate_csds_by_module_3_0_i3);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_module_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__apply_exclusion__accumulate_csds_by_module_3_0_i4);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_module_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		fn__apply_exclusion__accumulate_csds_by_module_3_0_i7);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_module_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__apply_exclusion__accumulate_csds_by_module_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(fn__apply_exclusion__accumulate_csds_by_module_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_call_site_dynamics_3_0);
MR_decl_entry(profile__deep_lookup_clique_index_3_0);

MR_BEGIN_MODULE(apply_exclusion_module10)
	MR_init_entry1(fn__apply_exclusion__accumulate_csds_by_clique_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__apply_exclusion__accumulate_csds_by_clique_3_0);
	MR_init_label4(fn__apply_exclusion__accumulate_csds_by_clique_3_0,2,3,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_csds_by_clique'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__apply_exclusion__accumulate_csds_by_clique_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_r3;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__apply_exclusion__accumulate_csds_by_clique_3_0_i2);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_clique_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		fn__apply_exclusion__accumulate_csds_by_clique_3_0_i3);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_clique_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		fn__apply_exclusion__accumulate_csds_by_clique_3_0_i6);
MR_def_label(fn__apply_exclusion__accumulate_csds_by_clique_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__apply_exclusion__accumulate_csds_by_clique_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(fn__apply_exclusion__accumulate_csds_by_clique_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_csd_own_3_0);
MR_decl_entry(profile__deep_lookup_csd_desc_3_0);
MR_decl_entry(fn__measurements__add_own_to_own_2_0);
MR_decl_entry(fn__measurements__add_inherit_to_inherit_2_0);
MR_decl_entry(profile__deep_lookup_clique_members_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(apply_exclusion_module11)
	MR_init_entry1(apply_exclusion__accumulate_parent_csd_prof_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__apply_exclusion__accumulate_parent_csd_prof_info_7_0);
	MR_init_label9(apply_exclusion__accumulate_parent_csd_prof_info_7_0,2,3,4,5,6,7,8,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_parent_csd_prof_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(apply_exclusion__accumulate_parent_csd_prof_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		apply_exclusion__accumulate_parent_csd_prof_info_7_0_i2);
MR_def_label(apply_exclusion__accumulate_parent_csd_prof_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_r1, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(apply_exclusion__accumulate_parent_csd_prof_info_7_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(apply_exclusion__accumulate_parent_csd_prof_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_csd_own_3_0,
		apply_exclusion__accumulate_parent_csd_prof_info_7_0_i4);
MR_def_label(apply_exclusion__accumulate_parent_csd_prof_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_csd_desc_3_0,
		apply_exclusion__accumulate_parent_csd_prof_info_7_0_i5);
MR_def_label(apply_exclusion__accumulate_parent_csd_prof_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_own_to_own_2_0,
		apply_exclusion__accumulate_parent_csd_prof_info_7_0_i6);
MR_def_label(apply_exclusion__accumulate_parent_csd_prof_info_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__add_inherit_to_inherit_2_0,
		apply_exclusion__accumulate_parent_csd_prof_info_7_0_i7);
MR_def_label(apply_exclusion__accumulate_parent_csd_prof_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		apply_exclusion__accumulate_parent_csd_prof_info_7_0_i8);
MR_def_label(apply_exclusion__accumulate_parent_csd_prof_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_members_3_0,
		apply_exclusion__accumulate_parent_csd_prof_info_7_0_i9);
MR_def_label(apply_exclusion__accumulate_parent_csd_prof_info_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(apply_exclusion__compensate_using_comp_table_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		apply_exclusion__accumulate_parent_csd_prof_info_7_0_i11);
MR_def_label(apply_exclusion__accumulate_parent_csd_prof_info_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_pd_comp_table_3_0);
MR_decl_entry(fn__measurements__subtract_inherit_from_inherit_2_0);

MR_BEGIN_MODULE(apply_exclusion_module12)
	MR_init_entry1(apply_exclusion__compensate_using_comp_table_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__apply_exclusion__compensate_using_comp_table_5_0);
	MR_init_label3(apply_exclusion__compensate_using_comp_table_5_0,2,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compensate_using_comp_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(apply_exclusion__compensate_using_comp_table_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(profile__deep_lookup_pd_comp_table_3_0,
		apply_exclusion__compensate_using_comp_table_5_0_i2);
MR_def_label(apply_exclusion__compensate_using_comp_table_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		apply_exclusion__compensate_using_comp_table_5_0_i4);
MR_def_label(apply_exclusion__compensate_using_comp_table_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(apply_exclusion__compensate_using_comp_table_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__measurements__subtract_inherit_from_inherit_2_0);
MR_def_label(apply_exclusion__compensate_using_comp_table_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__apply_exclusion_maybe_bunch_0(void)
{
	apply_exclusion_module0();
	apply_exclusion_module1();
	apply_exclusion_module2();
	apply_exclusion_module3();
	apply_exclusion_module4();
	apply_exclusion_module5();
	apply_exclusion_module6();
	apply_exclusion_module7();
	apply_exclusion_module8();
	apply_exclusion_module9();
	apply_exclusion_module10();
	apply_exclusion_module11();
	apply_exclusion_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__apply_exclusion__init(void);
void mercury__apply_exclusion__init_type_tables(void);
void mercury__apply_exclusion__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__apply_exclusion__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__apply_exclusion__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__apply_exclusion__init_threadscope_string_table(void);
#endif

void mercury__apply_exclusion__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__apply_exclusion_maybe_bunch_0();
	mercury__apply_exclusion__init_debugger();
}

void mercury__apply_exclusion__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__apply_exclusion__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__apply_exclusion__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__apply_exclusion);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__apply_exclusion__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__apply_exclusion__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
