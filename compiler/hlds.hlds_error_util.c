/*
** Automatically generated from `hlds_error_util.m'
** by the Mercury compiler,
** version rotd-2011-03-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__hlds_error_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "hlds.hlds_error_util.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "hlds.hlds_error_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "hlds.hlds_error_util.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "hlds.hlds_error_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "hlds.hlds_error_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.hlds_error_util.c"
#line 49 "hlds.hlds_error_util.c"
#include "hlds.hlds_error_util.mh"

#line 52 "hlds.hlds_error_util.c"
#line 53 "hlds.hlds_error_util.c"
#ifndef HLDS__HLDS_ERROR_UTIL_DECL_GUARD
#define HLDS__HLDS_ERROR_UTIL_DECL_GUARD

#line 57 "hlds.hlds_error_util.c"
#line 58 "hlds.hlds_error_util.c"

#endif
#line 61 "hlds.hlds_error_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_String f2;
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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__hlds_error_util__type_ctor_info_should_module_qualify_0;
MR_decl_label1(hlds__hlds_error_util__definitely_write_out_errors_6_0, 2)
MR_decl_label3(hlds__hlds_error_util__maybe_write_out_errors_8_0, 16,4,5)
MR_decl_label6(fn__hlds__hlds_error_util__describe_one_call_site_3_0, 2,3,4,5,7,8)
MR_decl_label10(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0, 2,3,4,5,6,7,8,11,13,14)
MR_decl_label10(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0, 12,16,9,32,31,37,39,40,41,36)
MR_decl_label4(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0, 47,46,57,59)
MR_decl_label1(fn__hlds__hlds_error_util__describe_one_pred_name_3_0, 2)
MR_decl_label10(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0, 2,3,4,5,6,7,9,11,8,13)
MR_decl_label10(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0, 16,18,19,20,21,22,23,15,26,27)
MR_decl_label7(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0, 28,29,14,32,33,31,44)
MR_decl_label4(fn__hlds__hlds_error_util__describe_one_proc_name_3_0, 2,3,4,5)
MR_decl_label3(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0, 2,3,4)
MR_decl_label1(fn__hlds__hlds_error_util__describe_several_call_sites_3_0, 5)
MR_decl_label1(fn__hlds__hlds_error_util__describe_several_pred_names_3_0, 4)
MR_decl_label1(fn__hlds__hlds_error_util__describe_several_proc_names_3_0, 4)
MR_def_extern_entry(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0)
MR_def_extern_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0)
MR_def_extern_entry(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0)
MR_def_extern_entry(fn__hlds__hlds_error_util__describe_several_pred_names_3_0)
MR_def_extern_entry(fn__hlds__hlds_error_util__describe_one_proc_name_3_0)
MR_def_extern_entry(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0)
MR_def_extern_entry(fn__hlds__hlds_error_util__describe_several_proc_names_3_0)
MR_def_extern_entry(fn__hlds__hlds_error_util__describe_one_call_site_3_0)
MR_def_extern_entry(fn__hlds__hlds_error_util__describe_several_call_sites_3_0)
MR_def_extern_entry(hlds__hlds_error_util__definitely_write_out_errors_6_0)
MR_def_extern_entry(hlds__hlds_error_util__maybe_write_out_errors_8_0)
MR_def_extern_entry(__Unify___hlds__hlds_error_util__should_module_qualify_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_error_util__should_module_qualify_0_0)

static const struct mercury_type_0 mercury_common_0[8] =
{
{
4,
MR_string_const("for type", 8)
},
{
4,
MR_string_const("for type constructor", 20)
},
{
4,
MR_string_const("type class method implementation", 32)
},
{
4,
MR_string_const("declaration", 11)
},
{
4,
MR_string_const("type class", 10)
},
{
4,
MR_string_const("method", 6)
},
{
4,
MR_string_const("mode", 4)
},
{
4,
MR_string_const("at", 2)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
{
MR_TAG_COMMON(3,0,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_error_util__describe_several_pred_names_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_error_util__type_ctor_info_should_module_qualify_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_error_util__describe_several_proc_names_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_error_util__describe_several_call_sites_3_0_1;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_error_util__describe_several_pred_names_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_error_util, should_module_qualify),
MR_INT_CTOR_ADDR,
MR_COMMON(1,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_error_util__describe_several_proc_names_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_error_util, should_module_qualify),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_error_util__describe_several_call_sites_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_error_util, should_module_qualify),
MR_COMMON(3,1),
MR_COMMON(1,4)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(term, context)
}
},
};

static const MR_EnumFunctorDesc mercury_data_hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0 = {
	"should_module_qualify",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1 = {
	"should_not_module_qualify",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__hlds_error_util__enum_value_ordered_should_module_qualify_0[] = {
	&mercury_data_hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0,
	&mercury_data_hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0[] = {
	&mercury_data_hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0,
	&mercury_data_hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1
};

const MR_Integer mercury_data_hlds__hlds_error_util__functor_number_map_should_module_qualify_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_error_util__type_ctor_info_should_module_qualify_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_error_util__should_module_qualify_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_error_util__should_module_qualify_0_0)),
	"hlds.hlds_error_util",
	"should_module_qualify",
	{ (void *)mercury_data_hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0 },
	{ (void *)mercury_data_hlds__hlds_error_util__enum_value_ordered_should_module_qualify_0 },
	2,
	4,
	mercury_data_hlds__hlds_error_util__functor_number_map_should_module_qualify_0
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_error_util__describe_several_call_sites_3_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_error_util",
"hlds.hlds_error_util",
"describe_one_call_site",
4,
0
},
"hlds.hlds_error_util",
"hlds_error_util.m",
256,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_error_util__describe_several_proc_names_3_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_error_util",
"hlds.hlds_error_util",
"describe_one_proc_name",
4,
0
},
"hlds.hlds_error_util",
"hlds_error_util.m",
240,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_error_util__describe_several_pred_names_3_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_error_util",
"hlds.hlds_error_util",
"describe_one_pred_name",
4,
0
},
"hlds.hlds_error_util",
"hlds_error_util.m",
218,
"7"
};


MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__special_pred__special_pred_description_2_0);
MR_decl_entry(fn__mdbcomp__prim_data__unqualify_name_1_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_goal_type_2_0);
MR_decl_entry(fn__parse_tree__prog_out__promise_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_error_util_module0)
	MR_init_entry1(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0);
	MR_init_label10(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,2,3,4,5,6,7,8,11,13,14)
	MR_init_label10(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,12,16,9,32,31,37,39,40,41,36)
	MR_init_label4(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,47,46,57,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_one_pred_info_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i2);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i3);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i4);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i5);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i6);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i7);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i8);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i9);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__special_pred__special_pred_description_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i11);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i12);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i14);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i16);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i32);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i31);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_decr_sp_and_return(8);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i37);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i36);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__promise_to_string_1_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i39);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i40);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i41);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_decr_sp_and_return(8);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i47);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i57);
	}
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);

MR_BEGIN_MODULE(hlds__hlds_error_util_module1)
	MR_init_entry1(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
	MR_init_label1(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_one_pred_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_3_0_i2);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__drop_3_0);
MR_decl_entry(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0);
MR_decl_entry(require__unexpected_2_0);
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_mode_to_string_2_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_mode_list_to_string_2_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_error_util_module2)
	MR_init_entry1(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0);
	MR_init_label10(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,2,3,4,5,6,7,9,11,8,13)
	MR_init_label10(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,16,18,19,20,21,22,23,15,26,27)
	MR_init_label7(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,28,29,14,32,33,31,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_one_pred_name_mode'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i2);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i3);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i4);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i5);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i6);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i7);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(4));
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i9);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i8);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i11);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i13);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_error_util.m", 17);
	MR_r2 = (MR_Word) MR_string_const("describe_one_pred_name_mode: bad argument list", 46);
	MR_np_call_localret_ent(require__unexpected_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i13);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i15);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i16);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_to_string_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i22);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_list_to_string_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i19);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i20);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i21);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_to_string_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i22);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i23);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i29);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i26);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i14);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_list_to_string_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i27);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i28);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i29);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i31);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i32);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i33);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\'", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\140", 1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i44);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("\'", 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("", 0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\140", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0_i44);
MR_def_label(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__parse_tree__error_util__component_lists_to_pieces_1_0);

MR_BEGIN_MODULE(hlds__hlds_error_util_module3)
	MR_init_entry1(fn__hlds__hlds_error_util__describe_several_pred_names_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_error_util__describe_several_pred_names_3_0);
	MR_init_label1(fn__hlds__hlds_error_util__describe_several_pred_names_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_several_pred_names'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_error_util__describe_several_pred_names_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_error_util__describe_several_pred_names_3_0_i4);
MR_def_label(fn__hlds__hlds_error_util__describe_several_pred_names_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__parse_tree__error_util__component_lists_to_pieces_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(string__int_to_string_2_0);

MR_BEGIN_MODULE(hlds__hlds_error_util_module4)
	MR_init_entry1(fn__hlds__hlds_error_util__describe_one_proc_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_error_util__describe_one_proc_name_3_0);
	MR_init_label4(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_one_proc_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_error_util__describe_one_proc_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__hlds__hlds_error_util__describe_one_proc_name_3_0_i2);
MR_def_label(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_info_name_2_0,
		fn__hlds__hlds_error_util__describe_one_proc_name_3_0_i3);
MR_def_label(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__hlds__hlds_error_util__describe_one_proc_name_3_0_i4);
MR_def_label(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__hlds__hlds_error_util__describe_one_proc_name_3_0_i5);
MR_def_label(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);

MR_BEGIN_MODULE(hlds__hlds_error_util_module5)
	MR_init_entry1(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0);
	MR_init_label3(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_one_proc_name_mode'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r3, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0_i2);
MR_def_label(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0_i3);
MR_def_label(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0_i4);
MR_def_label(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_error_util_module6)
	MR_init_entry1(fn__hlds__hlds_error_util__describe_several_proc_names_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_error_util__describe_several_proc_names_3_0);
	MR_init_label1(fn__hlds__hlds_error_util__describe_several_proc_names_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_several_proc_names'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_error_util__describe_several_proc_names_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_error_util__describe_one_proc_name_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_error_util__describe_several_proc_names_3_0_i4);
MR_def_label(fn__hlds__hlds_error_util__describe_several_proc_names_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__parse_tree__error_util__component_lists_to_pieces_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);

MR_BEGIN_MODULE(hlds__hlds_error_util_module7)
	MR_init_entry1(fn__hlds__hlds_error_util__describe_one_call_site_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_error_util__describe_one_call_site_3_0);
	MR_init_label6(fn__hlds__hlds_error_util__describe_one_call_site_3_0,2,3,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_one_call_site'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_error_util__describe_one_call_site_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		fn__hlds__hlds_error_util__describe_one_call_site_3_0_i2);
MR_def_label(fn__hlds__hlds_error_util__describe_one_call_site_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(term__context_file_2_0,
		fn__hlds__hlds_error_util__describe_one_call_site_3_0_i3);
MR_def_label(fn__hlds__hlds_error_util__describe_one_call_site_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(term__context_line_2_0,
		fn__hlds__hlds_error_util__describe_one_call_site_3_0_i4);
MR_def_label(fn__hlds__hlds_error_util__describe_one_call_site_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__hlds__hlds_error_util__describe_one_call_site_3_0_i5);
MR_def_label(fn__hlds__hlds_error_util__describe_one_call_site_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,0,7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_error_util__describe_one_call_site_3_0_i7);
MR_def_label(fn__hlds__hlds_error_util__describe_one_call_site_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_error_util__describe_one_call_site_3_0_i8);
MR_def_label(fn__hlds__hlds_error_util__describe_one_call_site_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_error_util_module8)
	MR_init_entry1(fn__hlds__hlds_error_util__describe_several_call_sites_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_error_util__describe_several_call_sites_3_0);
	MR_init_label1(fn__hlds__hlds_error_util__describe_several_call_sites_3_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_several_call_sites'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_error_util__describe_several_call_sites_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_error_util__describe_one_call_site_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_error_util__describe_several_call_sites_3_0_i5);
MR_def_label(fn__hlds__hlds_error_util__describe_several_call_sites_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__parse_tree__error_util__component_lists_to_pieces_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);
MR_decl_entry(hlds__hlds_module__module_info_incr_num_errors_3_0);

MR_BEGIN_MODULE(hlds__hlds_error_util_module9)
	MR_init_entry1(hlds__hlds_error_util__definitely_write_out_errors_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_error_util__definitely_write_out_errors_6_0);
	MR_init_label1(hlds__hlds_error_util__definitely_write_out_errors_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'definitely_write_out_errors'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_error_util__definitely_write_out_errors_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		hlds__hlds_error_util__definitely_write_out_errors_6_0_i2);
MR_def_label(hlds__hlds_error_util__definitely_write_out_errors_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_incr_num_errors_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_error_util_module10)
	MR_init_entry1(hlds__hlds_error_util__maybe_write_out_errors_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_error_util__maybe_write_out_errors_8_0);
	MR_init_label3(hlds__hlds_error_util__maybe_write_out_errors_8_0,16,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_out_errors'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_error_util__maybe_write_out_errors_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_error_util__maybe_write_out_errors_8_0_i16);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(hlds__hlds_error_util__maybe_write_out_errors_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		hlds__hlds_error_util__maybe_write_out_errors_8_0_i4);
MR_def_label(hlds__hlds_error_util__maybe_write_out_errors_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		hlds__hlds_error_util__maybe_write_out_errors_8_0_i5);
MR_def_label(hlds__hlds_error_util__maybe_write_out_errors_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_error_util_module11)
	MR_init_entry1(__Unify___hlds__hlds_error_util__should_module_qualify_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_error_util__should_module_qualify_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_error_util__should_module_qualify_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__hlds_error_util_module12)
	MR_init_entry1(__Compare___hlds__hlds_error_util__should_module_qualify_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_error_util__should_module_qualify_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_error_util__should_module_qualify_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_error_util_maybe_bunch_0(void)
{
	hlds__hlds_error_util_module0();
	hlds__hlds_error_util_module1();
	hlds__hlds_error_util_module2();
	hlds__hlds_error_util_module3();
	hlds__hlds_error_util_module4();
	hlds__hlds_error_util_module5();
	hlds__hlds_error_util_module6();
	hlds__hlds_error_util_module7();
	hlds__hlds_error_util_module8();
	hlds__hlds_error_util_module9();
	hlds__hlds_error_util_module10();
	hlds__hlds_error_util_module11();
	hlds__hlds_error_util_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_error_util__init(void);
void mercury__hlds__hlds_error_util__init_type_tables(void);
void mercury__hlds__hlds_error_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_error_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_error_util__init_complexity_procs(void);
#endif

void mercury__hlds__hlds_error_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_error_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_error_util__type_ctor_info_should_module_qualify_0,
		hlds__hlds_error_util__should_module_qualify_0_0);
	mercury__hlds__hlds_error_util__init_debugger();
}

void mercury__hlds__hlds_error_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_error_util__type_ctor_info_should_module_qualify_0);
	}
}


void mercury__hlds__hlds_error_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_error_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__hlds_error_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_error_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
