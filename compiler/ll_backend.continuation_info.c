/*
** Automatically generated from `continuation_info.m'
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
INIT mercury__ll_backend__continuation_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 145 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 27 "ll_backend.continuation_info.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 31 "ll_backend.continuation_info.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 35 "ll_backend.continuation_info.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 39 "ll_backend.continuation_info.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "ll_backend.continuation_info.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "ll_backend.continuation_info.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "ll_backend.continuation_info.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 55 "ll_backend.continuation_info.c"
#line 56 "ll_backend.continuation_info.c"
#include "ll_backend.continuation_info.mh"

#line 59 "ll_backend.continuation_info.c"
#line 60 "ll_backend.continuation_info.c"
#ifndef LL_BACKEND__CONTINUATION_INFO_DECL_GUARD
#define LL_BACKEND__CONTINUATION_INFO_DECL_GUARD

#line 64 "ll_backend.continuation_info.c"
#line 65 "ll_backend.continuation_info.c"

#endif
#line 68 "ll_backend.continuation_info.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
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
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__continuation_info__type_ctor_info_user_event_info_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_user_attribute_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_trace_needs_body_rep_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_slot_contents_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_return_layout_info_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_proc_layout_info_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_proc_label_layout_info_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_layout_var_info_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__continuation_info__type_ctor_info_layout_label_info_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_closure_layout_info_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_closure_arg_info_0,
	mercury_data_ll_backend__continuation_info__type_ctor_info_call_info_0;
MR_decl_label5(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0, 2,4,3,7,8)
MR_decl_label2(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__821__1_3_0, 1,3)
MR_decl_label7(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0, 6,5,8,2,10,11,12)
MR_decl_label1(ll_backend__continuation_info__IntroducedFrom__pred__process_proc_llds__463__1_2_0, 1)
MR_decl_label8(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0, 3,5,7,8,6,10,2,12)
MR_decl_label1(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0, 11)
MR_decl_label8(ll_backend__continuation_info__build_closure_info_9_0, 38,8,9,10,11,12,13,39)
MR_decl_label1(ll_backend__continuation_info__build_closure_info_9_0, 1)
MR_decl_label7(ll_backend__continuation_info__build_table_arg_info_6_0, 17,4,5,6,7,8,9)
MR_decl_label5(ll_backend__continuation_info__convert_return_data_3_0, 2,3,4,5,6)
MR_decl_label8(ll_backend__continuation_info__find_return_var_lvals_5_0, 40,4,6,5,10,12,9,14)
MR_decl_label4(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0, 2,3,4,5)
MR_decl_label8(ll_backend__continuation_info__generate_closure_layout_4_0, 2,3,4,5,6,7,8,10)
MR_decl_label3(ll_backend__continuation_info__generate_closure_layout_4_0, 12,13,9)
MR_decl_label8(ll_backend__continuation_info__generate_resume_layout_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label2(ll_backend__continuation_info__generate_resume_layout_6_0, 10,11)
MR_decl_label8(ll_backend__continuation_info__generate_resume_layout_for_var_7_0, 2,3,7,8,11,16,17,19)
MR_decl_label7(ll_backend__continuation_info__generate_resume_layout_for_var_7_0, 18,21,22,23,26,24,29)
MR_decl_label7(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0, 21,3,5,6,4,8,9)
MR_decl_label5(ll_backend__continuation_info__generate_return_live_lvalues_10_0, 2,3,4,5,6)
MR_decl_label8(ll_backend__continuation_info__generate_table_arg_type_info_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label2(ll_backend__continuation_info__generate_table_arg_type_info_3_0, 10,11)
MR_decl_label8(ll_backend__continuation_info__generate_temp_live_lvalues_2_0, 64,14,15,16,6,21,22,23)
MR_decl_label4(ll_backend__continuation_info__generate_temp_live_lvalues_2_0, 24,41,42,43)
MR_decl_label8(ll_backend__continuation_info__generate_temp_var_infos_2_0, 42,13,14,15,5,20,21,22)
MR_decl_label5(ll_backend__continuation_info__generate_temp_var_infos_2_0, 23,40,3,43,2)
MR_decl_label8(ll_backend__continuation_info__generate_var_live_lvalues_7_0, 39,6,5,7,8,10,9,12)
MR_decl_label7(ll_backend__continuation_info__generate_var_live_lvalues_7_0, 13,14,17,15,20,21,22)
MR_decl_label3(ll_backend__continuation_info__maybe_process_llds_4_0, 10,3,4)
MR_decl_label5(ll_backend__continuation_info__maybe_process_proc_llds_5_0, 2,3,4,6,7)
MR_decl_label8(ll_backend__continuation_info__process_continuation_4_0, 3,2,6,5,8,10,11,13)
MR_decl_label2(ll_backend__continuation_info__process_continuation_4_0, 14,15)
MR_decl_label3(ll_backend__continuation_info__process_proc_llds_5_0, 2,3,4)
MR_decl_label6(__Unify___ll_backend__continuation_info__call_info_0_0, 4,6,8,10,14,1)
MR_decl_label3(__Unify___ll_backend__continuation_info__closure_arg_info_0_0, 4,8,1)
MR_decl_label3(__Unify___ll_backend__continuation_info__closure_layout_info_0_0, 4,8,1)
MR_decl_label4(__Unify___ll_backend__continuation_info__internal_layout_info_0_0, 4,6,10,1)
MR_decl_label3(__Unify___ll_backend__continuation_info__layout_label_info_0_0, 4,8,1)
MR_decl_label4(__Unify___ll_backend__continuation_info__layout_var_info_0_0, 4,6,8,1)
MR_decl_label8(__Unify___ll_backend__continuation_info__proc_layout_info_0_0, 4,6,8,10,12,14,16,18)
MR_decl_label8(__Unify___ll_backend__continuation_info__proc_layout_info_0_0, 20,22,24,26,28,30,32,36)
MR_decl_label1(__Unify___ll_backend__continuation_info__proc_layout_info_0_0, 1)
MR_decl_label3(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0, 16,5,1)
MR_decl_label3(__Unify___ll_backend__continuation_info__return_layout_info_0_0, 4,8,1)
MR_decl_label3(__Unify___ll_backend__continuation_info__slot_contents_0_0, 6,36,1)
MR_decl_label5(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0, 4,6,8,12,1)
MR_decl_label3(__Unify___ll_backend__continuation_info__user_attribute_0_0, 4,8,1)
MR_decl_label2(__Unify___ll_backend__continuation_info__user_event_info_0_0, 6,1)
MR_decl_label7(__Compare___ll_backend__continuation_info__call_info_0_0, 3,2,5,9,13,17,45)
MR_decl_label4(__Compare___ll_backend__continuation_info__closure_arg_info_0_0, 3,2,5,21)
MR_decl_label4(__Compare___ll_backend__continuation_info__closure_layout_info_0_0, 3,2,5,21)
MR_decl_label5(__Compare___ll_backend__continuation_info__internal_layout_info_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___ll_backend__continuation_info__layout_label_info_0_0, 3,2,5,21)
MR_decl_label5(__Compare___ll_backend__continuation_info__layout_var_info_0_0, 3,2,5,9,29)
MR_decl_label8(__Compare___ll_backend__continuation_info__proc_layout_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label8(__Compare___ll_backend__continuation_info__proc_layout_info_0_0, 29,33,37,41,45,49,53,57)
MR_decl_label8(__Compare___ll_backend__continuation_info__proc_layout_info_0_0, 61,65,69,73,77,81,85,181)
MR_decl_label5(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0, 3,2,7,5,10)
MR_decl_label4(__Compare___ll_backend__continuation_info__return_layout_info_0_0, 3,2,5,21)
MR_decl_label8(__Compare___ll_backend__continuation_info__slot_contents_0_0, 7,22,37,52,67,82,97,112)
MR_decl_label8(__Compare___ll_backend__continuation_info__slot_contents_0_0, 127,142,157,171,160,6,185,174)
MR_decl_label8(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label4(__Compare___ll_backend__continuation_info__user_attribute_0_0, 3,2,5,21)
MR_decl_label4(__Compare___ll_backend__continuation_info__user_event_info_0_0, 3,2,5,21)
MR_def_extern_entry(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0)
MR_decl_static(ll_backend__continuation_info__process_proc_llds_5_0)
MR_def_extern_entry(ll_backend__continuation_info__maybe_process_proc_llds_5_0)
MR_def_extern_entry(ll_backend__continuation_info__maybe_process_llds_4_0)
MR_decl_static(ll_backend__continuation_info__find_return_var_lvals_5_0)
MR_decl_static(ll_backend__continuation_info__generate_temp_live_lvalues_2_0)
MR_def_extern_entry(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0)
MR_decl_static(ll_backend__continuation_info__generate_var_live_lvalues_7_0)
MR_def_extern_entry(ll_backend__continuation_info__generate_return_live_lvalues_10_0)
MR_decl_static(ll_backend__continuation_info__generate_resume_layout_for_var_7_0)
MR_decl_static(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0)
MR_decl_static(ll_backend__continuation_info__generate_temp_var_infos_2_0)
MR_def_extern_entry(ll_backend__continuation_info__generate_resume_layout_6_0)
MR_decl_static(ll_backend__continuation_info__build_closure_info_9_0)
MR_def_extern_entry(ll_backend__continuation_info__generate_closure_layout_4_0)
MR_decl_static(ll_backend__continuation_info__build_table_arg_info_6_0)
MR_def_extern_entry(ll_backend__continuation_info__generate_table_arg_type_info_3_0)
MR_decl_static(ll_backend__continuation_info__convert_return_data_3_0)
MR_decl_static(ll_backend__continuation_info__process_continuation_4_0)
MR_decl_static(__Unify___ll_backend__continuation_info__call_info_0_0)
MR_decl_static(__Compare___ll_backend__continuation_info__call_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__closure_arg_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__closure_arg_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__closure_layout_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__closure_layout_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__internal_layout_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__internal_layout_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__layout_label_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__layout_label_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__layout_var_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__layout_var_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__proc_label_layout_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__proc_label_layout_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__proc_layout_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__proc_layout_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__return_layout_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__return_layout_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__slot_contents_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__slot_contents_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__trace_needs_body_rep_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__trace_needs_body_rep_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__user_attribute_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__user_attribute_0_0)
MR_def_extern_entry(__Unify___ll_backend__continuation_info__user_event_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__continuation_info__user_event_info_0_0)
MR_decl_static(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__821__1_3_0)
MR_decl_static(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0)
MR_decl_static(ll_backend__continuation_info__IntroducedFrom__pred__process_proc_llds__463__1_2_0)
MR_decl_static(ll_backend__continuation_info__IntroducedFrom__pred__process_continuation__521__1_3_0)
MR_decl_static(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__539__1_2_0)
MR_decl_static(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__545__1_2_0)
MR_decl_static(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__550__1_3_0)
MR_decl_static(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__549__1_3_0)
MR_decl_static(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0)

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__process_proc_llds_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_call_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__generate_resume_layout_for_var_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__generate_resume_layout_for_var_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__convert_return_data_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_liveinfo_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__convert_return_data_3_0_2;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__process_proc_llds_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, instruction),
MR_CTOR0_ADDR(ll_backend__continuation_info, call_info)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__generate_resume_layout_for_var_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__generate_resume_layout_for_var_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__convert_return_data_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, liveinfo),
MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__convert_return_data_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, liveinfo),
MR_COMMON(2,5)
},
};

static const struct mercury_type_1 mercury_common_1[6] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(ll_backend__continuation_info__IntroducedFrom__pred__process_proc_llds__463__1_2_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__539__1_2_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__545__1_2_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__549__1_3_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(ll_backend__continuation_info__IntroducedFrom__pred__process_continuation__521__1_3_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__550__1_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_addr_0;
static const struct mercury_type_2 mercury_common_2[8] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__continuation_info, internal_layout_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__continuation_info, internal_layout_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(4,4),
MR_COMMON(4,5)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(4,4),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,4,1),
MR_TAG_COMMON(0,4,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(4,10),
MR_COMMON(4,11)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_TAG_COMMON(0,4,12)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ll_backend__llds, code_addr),
MR_TAG_COMMON(0,2,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__process_proc_llds_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__find_typeinfos_for_tvars_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__generate_table_arg_type_info_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_locn_0;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__process_proc_llds_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__continuation_info, call_info),
MR_COMMON(2,0),
MR_COMMON(2,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__find_typeinfos_for_tvars_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,2),
MR_COMMON(4,6),
MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn),
MR_COMMON(4,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__generate_table_arg_type_info_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(4,9),
MR_COMMON(4,6),
MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn),
MR_CTOR0_ADDR(hlds__hlds_pred, table_locn)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
static const struct mercury_type_4 mercury_common_4[15] =
{
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, layout_locn)
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, lval)
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, layout_locn)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(2,3)
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
MR_CTOR0_ADDR(ll_backend__llds, layout_locn)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__continuation_info, user_attribute)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__find_typeinfos_for_tvars_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__generate_table_arg_type_info_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__convert_return_data_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__process_continuation_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__549__1_3_0_1;
static const struct mercury_type_5 mercury_common_5[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__find_typeinfos_for_tvars_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(4,3),
MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__generate_table_arg_type_info_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(4,3),
MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__convert_return_data_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,5),
MR_COMMON(2,5),
MR_COMMON(2,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__process_continuation_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,7),
MR_COMMON(4,7),
MR_COMMON(4,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,14),
MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn),
MR_CTOR0_ADDR(ll_backend__llds, layout_locn)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__549__1_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,7),
MR_COMMON(4,7),
MR_COMMON(4,7)
}
},
};

static const struct mercury_type_6 mercury_common_6[4] =
{
{
MR_string_const("find_typeinfos_for_tvars", 24)
},
{
MR_string_const("can\'t find rval for type_info var", 33)
},
{
MR_string_const("find_typeinfos_for_tvars_table", 30)
},
{
MR_string_const("can\'t find slot for type_info var", 33)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_user_attribute_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_user_attribute_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_user_event_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0
};

const MR_ConstString mercury_data_ll_backend__continuation_info__field_names_user_event_info_0_0[] = {
	"user_port_number",
	"user_attributes"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_user_event_info_0_0 = {
	"user_event_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_user_event_info_0_0,
	mercury_data_ll_backend__continuation_info__field_names_user_event_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_user_event_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_user_event_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_user_event_info_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_user_event_info_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_user_event_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_user_event_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__user_event_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__user_event_info_0_0)),
	"ll_backend.continuation_info",
	"user_event_info",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_user_event_info_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_user_event_info_0 },
	1,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_user_event_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_user_attribute_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_ll_backend__continuation_info__field_names_user_attribute_0_0[] = {
	"attr_locn",
	"attr_var"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_user_attribute_0_0 = {
	"user_attribute",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_user_attribute_0_0,
	mercury_data_ll_backend__continuation_info__field_names_user_attribute_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_user_attribute_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_user_attribute_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_user_attribute_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_user_attribute_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_user_attribute_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__user_attribute_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__user_attribute_0_0)),
	"ll_backend.continuation_info",
	"user_attribute",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_user_attribute_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_user_attribute_0 },
	1,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_user_attribute_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_user_event_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_user_event_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_layout_label_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_trace_port_layout_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_layout_label_info_0
};

const MR_ConstString mercury_data_ll_backend__continuation_info__field_names_trace_port_layout_info_0_0[] = {
	"port_context",
	"port_type",
	"port_is_hidden",
	"port_path",
	"port_user",
	"port_label"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0 = {
	"trace_port_layout_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_trace_port_layout_info_0_0,
	mercury_data_ll_backend__continuation_info__field_names_trace_port_layout_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_trace_port_layout_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_trace_port_layout_info_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_trace_port_layout_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0)),
	"ll_backend.continuation_info",
	"trace_port_layout_info",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_trace_port_layout_info_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_trace_port_layout_info_0 },
	1,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_trace_port_layout_info_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0 = {
	"trace_needs_body_rep",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1 = {
	"trace_does_not_need_body_rep",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__continuation_info__enum_value_ordered_trace_needs_body_rep_0[] = {
	&mercury_data_ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0,
	&mercury_data_ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__continuation_info__enum_name_ordered_trace_needs_body_rep_0[] = {
	&mercury_data_ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1,
	&mercury_data_ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_trace_needs_body_rep_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_trace_needs_body_rep_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__trace_needs_body_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__trace_needs_body_rep_0_0)),
	"ll_backend.continuation_info",
	"trace_needs_body_rep",
	{ (void *)mercury_data_ll_backend__continuation_info__enum_name_ordered_trace_needs_body_rep_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__enum_value_ordered_trace_needs_body_rep_0 },
	2,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_trace_needs_body_rep_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_0 = {
	"slot_ticket",
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

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_1 = {
	"slot_ticket_counter",
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

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_2 = {
	"slot_trace_data",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_3 = {
	"slot_lookup_disj_cur",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_4 = {
	"slot_lookup_switch_cur",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_5 = {
	"slot_lookup_switch_max",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_6 = {
	"slot_sync_term",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_7 = {
	"slot_region_ite",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_8 = {
	"slot_region_disj",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_9 = {
	"slot_region_commit",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_10 = {
	"slot_success_record",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_slot_contents_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_11 = {
	"slot_lval",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	11,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_slot_contents_0_11,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_slot_contents_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_0,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_1,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_2,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_3,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_4,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_5,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_6,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_7,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_8,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_9,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_10

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_slot_contents_0_1[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_11

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_slot_contents_0[] = {
	{ 11, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_slot_contents_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_slot_contents_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_slot_contents_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_3,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_4,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_5,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_11,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_9,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_8,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_7,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_10,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_6,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_0,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_1,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_slot_contents_0_2
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_slot_contents_0[] = {
	9,
	10,
	11,
	0,
	1,
	2,
	8,
	6,
	5,
	4,
	7,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_slot_contents_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__slot_contents_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0)),
	"ll_backend.continuation_info",
	"slot_contents",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_slot_contents_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_slot_contents_0 },
	12,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_slot_contents_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__type_ctor_info_context_0cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_TypeInfo) &mercury_data_cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_addr_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_code_addr_0,
	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__type_ctor_info_context_0cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_return_layout_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_layout_label_info_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0 = {
	"return_layout_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_return_layout_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_return_layout_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_return_layout_info_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_return_layout_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_return_layout_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__return_layout_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__return_layout_info_0_0)),
	"ll_backend.continuation_info",
	"return_layout_info",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_return_layout_info_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_return_layout_info_0 },
	1,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_return_layout_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_table_io_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_table_io_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_proc_layout_table_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_table_io_info_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0 = {
	"proc_table_io_decl",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_proc_layout_table_info_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_table_struct_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_table_struct_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_proc_layout_table_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_table_struct_info_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1 = {
	"proc_table_struct",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_proc_layout_table_info_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_1[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_proc_layout_table_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_proc_layout_table_info_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0,
	&mercury_data_ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_proc_layout_table_info_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0)),
	"ll_backend.continuation_info",
	"proc_layout_table_info",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_proc_layout_table_info_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_proc_layout_table_info_0 },
	2,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_proc_layout_table_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__trace_gen__type_ctor_info_trace_slot_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_proc_layout_proc_static_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_proc_layout_proc_static_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_proc_layout_proc_static_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_proc_layout_proc_static_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_trace_needs_body_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__trace_gen__type_ctor_info_trace_slot_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_proc_layout_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_level_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_trace_needs_body_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__instmap__type_ctor_info_instmap_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__trace_gen__type_ctor_info_trace_slot_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_proc_layout_proc_static_0
};

const MR_ConstString mercury_data_ll_backend__continuation_info__field_names_proc_layout_info_0_0[] = {
	"pli_rtti_proc_label",
	"pli_entry_label",
	"pli_detism",
	"pli_stack_slot_count",
	"pli_succip_slot",
	"pli_eval_method",
	"pli_eff_trace_level",
	"pli_call_label",
	"pli_max_trace_reg",
	"pli_head_vars",
	"pli_arg_modes",
	"pli_proc_body",
	"pli_trace_body_rep",
	"pli_initial_instmap",
	"pli_trace_slot_info",
	"pli_need_proc_id",
	"pli_varset",
	"pli_vartypes",
	"pli_internal_map",
	"pli_maybe_table_info",
	"pli_need_all_names",
	"pli_deep_prof"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0 = {
	"proc_layout_info",
	22,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_proc_layout_info_0_0,
	mercury_data_ll_backend__continuation_info__field_names_proc_layout_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_proc_layout_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_proc_layout_info_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_proc_layout_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_proc_layout_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__proc_layout_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__proc_layout_info_0_0)),
	"ll_backend.continuation_info",
	"proc_layout_info",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_proc_layout_info_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_proc_layout_info_0 },
	1,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_proc_layout_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_proc_label_layout_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__proc_label_layout_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__proc_label_layout_info_0_0)),
	"ll_backend.continuation_info",
	"proc_label_layout_info",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_live_value_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_live_value_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_layout_var_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_live_value_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0 = {
	"layout_var_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_layout_var_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_layout_var_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_layout_var_info_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_layout_var_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_layout_var_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__layout_var_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__layout_var_info_0_0)),
	"ll_backend.continuation_info",
	"layout_var_info",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_layout_var_info_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_layout_var_info_0 },
	1,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_layout_var_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_layout_var_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_layout_var_info_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_layout_label_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0 = {
	"layout_label_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_layout_label_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_layout_label_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_layout_label_info_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_layout_label_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_layout_label_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__layout_label_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__layout_label_info_0_0)),
	"ll_backend.continuation_info",
	"layout_label_info",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_layout_label_info_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_layout_label_info_0 },
	1,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_layout_label_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_layout_label_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_return_layout_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_return_layout_info_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_internal_layout_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0 = {
	"internal_layout_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_internal_layout_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_internal_layout_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_internal_layout_info_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_internal_layout_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__internal_layout_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__internal_layout_info_0_0)),
	"ll_backend.continuation_info",
	"internal_layout_info",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_internal_layout_info_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_internal_layout_info_0 },
	1,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_internal_layout_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_closure_arg_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__continuation_info__type_ctor_info_closure_arg_info_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_closure_layout_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0 = {
	"closure_layout_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_closure_layout_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_closure_layout_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_closure_layout_info_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_closure_layout_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_closure_layout_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__closure_layout_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__closure_layout_info_0_0)),
	"ll_backend.continuation_info",
	"closure_layout_info",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_closure_layout_info_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_closure_layout_info_0 },
	1,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_closure_layout_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_closure_arg_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0 = {
	"closure_arg_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_closure_arg_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_closure_arg_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_closure_arg_info_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_closure_arg_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_closure_arg_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__closure_arg_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__closure_arg_info_0_0)),
	"ll_backend.continuation_info",
	"closure_arg_info",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_closure_arg_info_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_closure_arg_info_0 },
	1,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_closure_arg_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_liveinfo_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_liveinfo_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_liveinfo_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__continuation_info__field_types_call_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_code_addr_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__continuation_info__du_functor_desc_call_info_0_0 = {
	"call_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__continuation_info__field_types_call_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_stag_ordered_call_info_0_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_call_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__continuation_info__du_ptag_ordered_call_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__continuation_info__du_stag_ordered_call_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__continuation_info__du_name_ordered_call_info_0[] = {
	&mercury_data_ll_backend__continuation_info__du_functor_desc_call_info_0_0
};

const MR_Integer mercury_data_ll_backend__continuation_info__functor_number_map_call_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_call_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__continuation_info__call_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__continuation_info__call_info_0_0)),
	"ll_backend.continuation_info",
	"call_info",
	{ (void *)mercury_data_ll_backend__continuation_info__du_name_ordered_call_info_0 },
	{ (void *)mercury_data_ll_backend__continuation_info__du_ptag_ordered_call_info_0 },
	1,
	4,
	mercury_data_ll_backend__continuation_info__functor_number_map_call_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__process_proc_llds_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.continuation_info",
"ll_backend.continuation_info",
"lambda_continuation_info_m_463",
2,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
463,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__process_proc_llds_5_0_2 = {
{
MR_PREDICATE,
"ll_backend.continuation_info",
"ll_backend.continuation_info",
"process_continuation",
4,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
471,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__find_typeinfos_for_tvars_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"rtti_lookup_type_info_locn",
3,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
816,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__find_typeinfos_for_tvars_4_0_2 = {
{
MR_PREDICATE,
"ll_backend.continuation_info",
"ll_backend.continuation_info",
"lambda_continuation_info_m_818",
4,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
818,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__generate_resume_layout_for_var_7_0_1 = {
{
MR_PREDICATE,
"int",
"int",
">",
2,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
721,
"d1;c10;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__generate_resume_layout_for_var_7_0_2 = {
{
MR_PREDICATE,
"int",
"int",
">",
2,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
724,
"d1;c10;e;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__generate_table_arg_type_info_3_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"rtti_lookup_type_info_locn",
3,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
883,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__generate_table_arg_type_info_3_0_2 = {
{
MR_PREDICATE,
"ll_backend.continuation_info",
"ll_backend.continuation_info",
"lambda_continuation_info_m_898",
4,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
885,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__convert_return_data_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.continuation_info",
"ll_backend.continuation_info",
"lambda_continuation_info_m_539",
2,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
539,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__convert_return_data_3_0_2 = {
{
MR_PREDICATE,
"ll_backend.continuation_info",
"ll_backend.continuation_info",
"lambda_continuation_info_m_545",
2,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
544,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__convert_return_data_3_0_3 = {
{
MR_PREDICATE,
"ll_backend.continuation_info",
"ll_backend.continuation_info",
"lambda_continuation_info_m_549",
3,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
549,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__process_continuation_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.continuation_info",
"ll_backend.continuation_info",
"lambda_continuation_info_m_521",
3,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
521,
"d1;c8;d1;c3;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.continuation_info",
"ll_backend.continuation_info",
"lambda_continuation_info_m_821",
3,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
821,
"d1;c9;q;c3;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__549__1_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.continuation_info",
"ll_backend.continuation_info",
"lambda_continuation_info_m_550",
3,
0
},
"ll_backend.continuation_info",
"continuation_info.m",
550,
"d1;c9;q;c3;"
};

MR_decl_entry(libs__globals__lookup_bool_option_3_1);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(parse_tree__prog_type__type_is_higher_order_1_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ll_backend__continuation_info_module0)
	MR_init_entry1(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0);
	MR_init_label8(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,3,5,7,8,6,10,2,12)
	MR_init_label1(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__continuation_info__basic_stack_layout_for_proc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 106;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ll_backend__continuation_info__basic_stack_layout_for_proc_4_0_i3);
MR_def_label(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ll_backend__continuation_info__basic_stack_layout_for_proc_4_0_i5);
MR_def_label(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0_i6);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(list__member_2_1,
		ll_backend__continuation_info__basic_stack_layout_for_proc_4_0_i7);
MR_def_label(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		ll_backend__continuation_info__basic_stack_layout_for_proc_4_0_i8);
MR_def_label(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_GOTO_LAB(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0_i10);
MR_def_label(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_GOTO_LAB(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0_i2);
MR_def_label(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 213;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ll_backend__continuation_info__basic_stack_layout_for_proc_4_0_i12);
MR_def_label(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__global_data__global_data_get_proc_layout_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(ll_backend__global_data__global_data_update_proc_layout_4_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module1)
	MR_init_entry1(ll_backend__continuation_info__process_proc_llds_5_0);
	MR_init_label3(ll_backend__continuation_info__process_proc_llds_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__process_proc_llds_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__global_data__global_data_get_proc_layout_3_0,
		ll_backend__continuation_info__process_proc_llds_5_0_i2);
MR_def_label(ll_backend__continuation_info__process_proc_llds_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 18);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, call_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		ll_backend__continuation_info__process_proc_llds_5_0_i3);
MR_def_label(ll_backend__continuation_info__process_proc_llds_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__continuation_info__process_continuation_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, call_info);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__continuation_info__process_proc_llds_5_0_i4);
MR_def_label(ll_backend__continuation_info__process_proc_llds_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 22);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_r1;
	MR_tfield(0, MR_tempr1, 19) = MR_ctfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_ctfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_ctfield(0, MR_tempr2, 21);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ll_backend__global_data__global_data_update_proc_layout_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__want_return_var_layouts_2_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module2)
	MR_init_entry1(ll_backend__continuation_info__maybe_process_proc_llds_5_0);
	MR_init_label5(ll_backend__continuation_info__maybe_process_proc_llds_5_0,2,3,4,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__continuation_info__maybe_process_proc_llds_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__continuation_info__maybe_process_proc_llds_5_0_i2);
MR_def_label(ll_backend__continuation_info__maybe_process_proc_llds_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__continuation_info__maybe_process_proc_llds_5_0_i3);
MR_def_label(ll_backend__continuation_info__maybe_process_proc_llds_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(ll_backend__continuation_info__basic_stack_layout_for_proc_4_0,
		ll_backend__continuation_info__maybe_process_proc_llds_5_0_i4);
MR_def_label(ll_backend__continuation_info__maybe_process_proc_llds_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__maybe_process_proc_llds_5_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__continuation_info__maybe_process_proc_llds_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__globals__want_return_var_layouts_2_0,
		ll_backend__continuation_info__maybe_process_proc_llds_5_0_i7);
MR_def_label(ll_backend__continuation_info__maybe_process_proc_llds_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ll_backend__continuation_info__process_proc_llds_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module3)
	MR_init_entry1(ll_backend__continuation_info__maybe_process_llds_4_0);
	MR_init_label3(ll_backend__continuation_info__maybe_process_llds_4_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__continuation_info__maybe_process_llds_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__continuation_info__maybe_process_llds_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__maybe_process_llds_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__continuation_info__maybe_process_llds_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 4);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__continuation_info__maybe_process_proc_llds_5_0,
		ll_backend__continuation_info__maybe_process_llds_4_0_i4);
MR_def_label(ll_backend__continuation_info__maybe_process_llds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__continuation_info__maybe_process_llds_4_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__search_3_0);
MR_decl_entry(ll_backend__code_util__arg_loc_to_register_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__ll_backend__llds__stack_slot_to_lval_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module4)
	MR_init_entry1(ll_backend__continuation_info__find_return_var_lvals_5_0);
	MR_init_label8(ll_backend__continuation_info__find_return_var_lvals_5_0,40,4,6,5,10,12,9,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__find_return_var_lvals_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__find_return_var_lvals_5_0_i40);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__continuation_info__find_return_var_lvals_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__continuation_info__find_return_var_lvals_5_0,
		ll_backend__continuation_info__find_return_var_lvals_5_0_i4);
MR_def_label(ll_backend__continuation_info__find_return_var_lvals_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(assoc_list__search_3_0,
		ll_backend__continuation_info__find_return_var_lvals_5_0_i6);
MR_def_label(ll_backend__continuation_info__find_return_var_lvals_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__find_return_var_lvals_5_0_i5);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_util__arg_loc_to_register_2_0,
		ll_backend__continuation_info__find_return_var_lvals_5_0_i12);
MR_def_label(ll_backend__continuation_info__find_return_var_lvals_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__continuation_info__find_return_var_lvals_5_0_i10);
MR_def_label(ll_backend__continuation_info__find_return_var_lvals_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__find_return_var_lvals_5_0_i9);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_to_lval_1_0,
		ll_backend__continuation_info__find_return_var_lvals_5_0_i12);
MR_def_label(ll_backend__continuation_info__find_return_var_lvals_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__continuation_info__find_return_var_lvals_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__find_return_var_lvals_5_0_i14);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__continuation_info__find_return_var_lvals_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("continuation_info.m", 19);
	MR_r2 = (MR_Word) MR_string_const("find_return_var_lvals: no slot", 30);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module5)
	MR_init_entry1(ll_backend__continuation_info__generate_temp_live_lvalues_2_0);
	MR_init_label8(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,64,14,15,16,6,21,22,23)
	MR_init_label4(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,24,41,42,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__generate_temp_live_lvalues_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i64);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r4, 1);
	MR_r3 = MR_tempr1;
	MR_r5 = MR_tag(MR_tempr1);
	if ((MR_r5 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i6);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i41));
	}
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r4, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 8);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i42);
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r4, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 9);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i42);
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r4, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 10);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i42);
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i41);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i41));
	}
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r4, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i42);
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r4, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i42);
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r4, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i42);
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r4, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i42);
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r4, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 11);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i42);
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,
		ll_backend__continuation_info__generate_temp_live_lvalues_2_0_i43);
MR_def_label(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(map__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module6)
	MR_init_entry1(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0);
	MR_init_label4(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__continuation_info__find_typeinfos_for_tvars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__continuation_info__find_typeinfos_for_tvars_4_0_i2);
MR_def_label(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		ll_backend__continuation_info__find_typeinfos_for_tvars_4_0_i3);
MR_def_label(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__continuation_info__find_typeinfos_for_tvars_4_0_i4);
MR_def_label(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__continuation_info__find_typeinfos_for_tvars_4_0_i5);
MR_def_label(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__from_corresponding_lists_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(hlds__instmap__lookup_var_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);
MR_decl_entry(parse_tree__prog_type__type_vars_2_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module7)
	MR_init_entry1(ll_backend__continuation_info__generate_var_live_lvalues_7_0);
	MR_init_label8(ll_backend__continuation_info__generate_var_live_lvalues_7_0,39,6,5,7,8,10,9,12)
	MR_init_label7(ll_backend__continuation_info__generate_var_live_lvalues_7_0,13,14,17,15,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__generate_var_live_lvalues_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_var_live_lvalues_7_0_i39);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_var_live_lvalues_7_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(7) = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 1);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	}
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i6);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 11);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__continuation_info__generate_var_live_lvalues_7_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i22);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i7);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i8);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(varset__search_name_3_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i10);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_var_live_lvalues_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_sv(10) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(ll_backend__continuation_info__generate_var_live_lvalues_7_0_i12);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_sv(10) = (MR_Word) MR_string_const("", 0);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i13);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i14);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i17);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_var_live_lvalues_7_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tempr2 = MR_sv(11);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i20);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 2) = MR_r1;
	MR_tfield(1, MR_tempr2, 3) = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i20);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i21);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_tempr3 = MR_tempr2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_sv(1) = MR_tempr3;
	}
	MR_np_localcall_lab(ll_backend__continuation_info__generate_var_live_lvalues_7_0,
		ll_backend__continuation_info__generate_var_live_lvalues_7_0_i22);
MR_def_label(ll_backend__continuation_info__generate_var_live_lvalues_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_stack_slots_2_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(ll_backend__continuation_info_module8)
	MR_init_entry1(ll_backend__continuation_info__generate_return_live_lvalues_10_0);
	MR_init_label5(ll_backend__continuation_info__generate_return_live_lvalues_10_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__continuation_info__generate_return_live_lvalues_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r9;
	MR_r1 = MR_r8;
	MR_np_call_localret_ent(libs__globals__want_return_var_layouts_2_0,
		ll_backend__continuation_info__generate_return_live_lvalues_10_0_i2);
MR_def_label(ll_backend__continuation_info__generate_return_live_lvalues_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_stack_slots_2_0,
		ll_backend__continuation_info__generate_return_live_lvalues_10_0_i3);
MR_def_label(ll_backend__continuation_info__generate_return_live_lvalues_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__continuation_info__find_return_var_lvals_5_0,
		ll_backend__continuation_info__generate_return_live_lvalues_10_0_i4);
MR_def_label(ll_backend__continuation_info__generate_return_live_lvalues_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__continuation_info__generate_var_live_lvalues_7_0,
		ll_backend__continuation_info__generate_return_live_lvalues_10_0_i5);
MR_def_label(ll_backend__continuation_info__generate_return_live_lvalues_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__continuation_info__generate_temp_live_lvalues_2_0,
		ll_backend__continuation_info__generate_return_live_lvalues_10_0_i6);
MR_def_label(ll_backend__continuation_info__generate_return_live_lvalues_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, liveinfo);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(f_105_110_116_95_95_62_2_0);
MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module9)
	MR_init_entry1(ll_backend__continuation_info__generate_resume_layout_for_var_7_0);
	MR_init_label8(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,2,3,7,8,11,16,17,19)
	MR_init_label7(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,18,21,22,23,26,24,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__generate_resume_layout_for_var_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i2);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i3);
	}
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i7);
	}
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("continuation_info.m", 19);
	MR_r2 = (MR_Word) MR_string_const("var has more than one lval in stack resume map", 46);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i7);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(f_105_110_116_95_95_62_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_sv(5), 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("continuation_info.m", 19);
	MR_r3 = (MR_Word) MR_string_const("generate_resume_layout_for_var: bad stackvar", 44);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i11);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(f_105_110_116_95_95_62_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_sv(5), 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("continuation_info.m", 19);
	MR_r3 = (MR_Word) MR_string_const("generate_resume_layout_for_var: bad framevar", 44);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i11);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i16);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i17);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__search_name_3_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i19);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i18);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i21);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i22);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i23);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i26);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i29);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 2) = MR_r1;
	MR_tfield(1, MR_tempr2, 3) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		ll_backend__continuation_info__generate_resume_layout_for_var_7_0_i29);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("generate_result_layout_for_var", 30);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__is_dummy_argument_type_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module10)
	MR_init_entry1(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0);
	MR_init_label7(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0,21,3,5,6,4,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(9) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__continuation_info__generate_resume_layout_for_vars_9_0_i5);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ll_backend__continuation_info__generate_resume_layout_for_vars_9_0_i6);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(9);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0_i21);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__continuation_info__generate_resume_layout_for_var_7_0,
		ll_backend__continuation_info__generate_resume_layout_for_vars_9_0_i8);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__continuation_info__generate_resume_layout_for_vars_9_0_i9);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0_i21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module11)
	MR_init_entry1(ll_backend__continuation_info__generate_temp_var_infos_2_0);
	MR_init_label8(ll_backend__continuation_info__generate_temp_var_infos_2_0,42,13,14,15,5,20,21,22)
	MR_init_label5(ll_backend__continuation_info__generate_temp_var_infos_2_0,23,40,3,43,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__generate_temp_var_infos_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_var_infos_2_0_i2);
	}
	MR_r5 = (MR_Word) MR_sp;
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r3, 1);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_tag(MR_tempr1);
	if ((MR_r4 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_var_infos_2_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i40));
	}
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 8);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("generate_temp_var_infos", 23);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_var_infos_2_0_i3);
	}
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 9);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("generate_temp_var_infos", 23);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_var_infos_2_0_i3);
	}
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("generate_temp_var_infos", 23);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_var_infos_2_0_i3);
	}
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_var_infos_2_0_i40);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__continuation_info__generate_temp_var_infos_2_0_i40));
	}
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("generate_temp_var_infos", 23);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_var_infos_2_0_i3);
	}
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("generate_temp_var_infos", 23);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_var_infos_2_0_i3);
	}
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("generate_temp_var_infos", 23);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_var_infos_2_0_i3);
	}
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("generate_temp_var_infos", 23);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_var_infos_2_0_i3);
	}
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 11);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("generate_temp_var_infos", 23);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_temp_var_infos_2_0_i42);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r5))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(ll_backend__continuation_info__generate_temp_var_infos_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(set__list_to_set_2_0);
MR_decl_entry(set__union_3_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module12)
	MR_init_entry1(ll_backend__continuation_info__generate_resume_layout_6_0);
	MR_init_label8(ll_backend__continuation_info__generate_resume_layout_6_0,2,3,4,5,6,7,8,9)
	MR_init_label2(ll_backend__continuation_info__generate_resume_layout_6_0,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__continuation_info__generate_resume_layout_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__continuation_info__generate_resume_layout_6_0_i2);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__continuation_info__generate_resume_layout_6_0_i3);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__continuation_info__generate_resume_layout_6_0_i4);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__continuation_info__generate_resume_layout_for_vars_9_0,
		ll_backend__continuation_info__generate_resume_layout_6_0_i5);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		ll_backend__continuation_info__generate_resume_layout_6_0_i6);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__continuation_info__generate_resume_layout_6_0_i7);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0,
		ll_backend__continuation_info__generate_resume_layout_6_0_i8);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__continuation_info__generate_temp_var_infos_2_0,
		ll_backend__continuation_info__generate_resume_layout_6_0_i9);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		ll_backend__continuation_info__generate_resume_layout_6_0_i10);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set__union_3_0,
		ll_backend__continuation_info__generate_resume_layout_6_0_i11);
MR_def_label(ll_backend__continuation_info__generate_resume_layout_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__singleton_set_2_1);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module13)
	MR_init_entry1(ll_backend__continuation_info__build_closure_info_9_0);
	MR_init_label8(ll_backend__continuation_info__build_closure_info_9_0,38,8,9,10,11,12,13,39)
	MR_init_label1(ll_backend__continuation_info__build_closure_info_9_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__build_closure_info_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__build_closure_info_9_0_i38);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__build_closure_info_9_0_i39);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__build_closure_info_9_0_i39);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__continuation_info__build_closure_info_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__build_closure_info_9_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__build_closure_info_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r3;
	MR_sv(8) = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(9) = MR_ctfield(0, MR_ctfield(1, MR_tempr4, 0), 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		ll_backend__continuation_info__build_closure_info_9_0_i8);
MR_def_label(ll_backend__continuation_info__build_closure_info_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(set__singleton_set_2_1,
		ll_backend__continuation_info__build_closure_info_9_0_i9);
MR_def_label(ll_backend__continuation_info__build_closure_info_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,8);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__continuation_info__build_closure_info_9_0_i10);
MR_def_label(ll_backend__continuation_info__build_closure_info_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		ll_backend__continuation_info__build_closure_info_9_0_i11);
MR_def_label(ll_backend__continuation_info__build_closure_info_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__continuation_info__build_closure_info_9_0_i12);
MR_def_label(ll_backend__continuation_info__build_closure_info_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__continuation_info__build_closure_info_9_0,
		ll_backend__continuation_info__build_closure_info_9_0_i13);
MR_def_label(ll_backend__continuation_info__build_closure_info_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__build_closure_info_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__continuation_info__build_closure_info_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(ll_backend__continuation_info__build_closure_info_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_arg_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module14)
	MR_init_entry1(ll_backend__continuation_info__generate_closure_layout_4_0);
	MR_init_label8(ll_backend__continuation_info__generate_closure_layout_4_0,2,3,4,5,6,7,8,10)
	MR_init_label3(ll_backend__continuation_info__generate_closure_layout_4_0,12,13,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__continuation_info__generate_closure_layout_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ll_backend__continuation_info__generate_closure_layout_4_0_i2);
MR_def_label(ll_backend__continuation_info__generate_closure_layout_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ll_backend__continuation_info__generate_closure_layout_4_0_i3);
MR_def_label(ll_backend__continuation_info__generate_closure_layout_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		ll_backend__continuation_info__generate_closure_layout_4_0_i4);
MR_def_label(ll_backend__continuation_info__generate_closure_layout_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ll_backend__continuation_info__generate_closure_layout_4_0_i5);
MR_def_label(ll_backend__continuation_info__generate_closure_layout_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		ll_backend__continuation_info__generate_closure_layout_4_0_i6);
MR_def_label(ll_backend__continuation_info__generate_closure_layout_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,8);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__continuation_info__generate_closure_layout_4_0_i7);
MR_def_label(ll_backend__continuation_info__generate_closure_layout_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__continuation_info__generate_closure_layout_4_0_i8);
MR_def_label(ll_backend__continuation_info__generate_closure_layout_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__continuation_info__build_closure_info_9_0,
		ll_backend__continuation_info__generate_closure_layout_4_0_i10);
MR_def_label(ll_backend__continuation_info__generate_closure_layout_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__generate_closure_layout_4_0_i9);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__continuation_info__generate_closure_layout_4_0_i12);
MR_def_label(ll_backend__continuation_info__generate_closure_layout_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0,
		ll_backend__continuation_info__generate_closure_layout_4_0_i13);
MR_def_label(ll_backend__continuation_info__generate_closure_layout_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ll_backend__continuation_info__generate_closure_layout_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("continuation_info.m", 19);
	MR_r2 = (MR_Word) MR_string_const("proc headvars and pred argtypes disagree on arity", 49);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__var_to_int_2_0);
MR_decl_entry(varset__lookup_name_3_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module15)
	MR_init_entry1(ll_backend__continuation_info__build_table_arg_info_6_0);
	MR_init_label7(ll_backend__continuation_info__build_table_arg_info_6_0,17,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__build_table_arg_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__build_table_arg_info_6_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__continuation_info__build_table_arg_info_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(term__var_to_int_2_0,
		ll_backend__continuation_info__build_table_arg_info_6_0_i4);
MR_def_label(ll_backend__continuation_info__build_table_arg_info_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		ll_backend__continuation_info__build_table_arg_info_6_0_i5);
MR_def_label(ll_backend__continuation_info__build_table_arg_info_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__continuation_info__build_table_arg_info_6_0_i6);
MR_def_label(ll_backend__continuation_info__build_table_arg_info_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		ll_backend__continuation_info__build_table_arg_info_6_0_i7);
MR_def_label(ll_backend__continuation_info__build_table_arg_info_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__continuation_info__build_table_arg_info_6_0_i8);
MR_def_label(ll_backend__continuation_info__build_table_arg_info_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(ll_backend__continuation_info__build_table_arg_info_6_0,
		ll_backend__continuation_info__build_table_arg_info_6_0_i9);
MR_def_label(ll_backend__continuation_info__build_table_arg_info_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_locn_0;

MR_BEGIN_MODULE(ll_backend__continuation_info_module16)
	MR_init_entry1(ll_backend__continuation_info__generate_table_arg_type_info_3_0);
	MR_init_label8(ll_backend__continuation_info__generate_table_arg_type_info_3_0,2,3,4,5,6,7,8,9)
	MR_init_label2(ll_backend__continuation_info__generate_table_arg_type_info_3_0,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__continuation_info__generate_table_arg_type_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__continuation_info__generate_table_arg_type_info_3_0_i2);
MR_def_label(ll_backend__continuation_info__generate_table_arg_type_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__continuation_info__generate_table_arg_type_info_3_0_i3);
MR_def_label(ll_backend__continuation_info__generate_table_arg_type_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__continuation_info__generate_table_arg_type_info_3_0_i4);
MR_def_label(ll_backend__continuation_info__generate_table_arg_type_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__continuation_info__build_table_arg_info_6_0,
		ll_backend__continuation_info__generate_table_arg_type_info_3_0_i5);
MR_def_label(ll_backend__continuation_info__generate_table_arg_type_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__continuation_info__generate_table_arg_type_info_3_0_i6);
MR_def_label(ll_backend__continuation_info__generate_table_arg_type_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__continuation_info__generate_table_arg_type_info_3_0_i7);
MR_def_label(ll_backend__continuation_info__generate_table_arg_type_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		ll_backend__continuation_info__generate_table_arg_type_info_3_0_i8);
MR_def_label(ll_backend__continuation_info__generate_table_arg_type_info_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__continuation_info__generate_table_arg_type_info_3_0_i9);
MR_def_label(ll_backend__continuation_info__generate_table_arg_type_info_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_locn);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__continuation_info__generate_table_arg_type_info_3_0_i10);
MR_def_label(ll_backend__continuation_info__generate_table_arg_type_info_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_locn);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		ll_backend__continuation_info__generate_table_arg_type_info_3_0_i11);
MR_def_label(ll_backend__continuation_info__generate_table_arg_type_info_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module17)
	MR_init_entry1(ll_backend__continuation_info__convert_return_data_3_0);
	MR_init_label5(ll_backend__continuation_info__convert_return_data_3_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__convert_return_data_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, liveinfo);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__continuation_info__convert_return_data_3_0_i2);
MR_def_label(ll_backend__continuation_info__convert_return_data_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, liveinfo);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__continuation_info__convert_return_data_3_0_i3);
MR_def_label(ll_backend__continuation_info__convert_return_data_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__continuation_info__convert_return_data_3_0_i4);
MR_def_label(ll_backend__continuation_info__convert_return_data_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__continuation_info__convert_return_data_3_0_i5);
MR_def_label(ll_backend__continuation_info__convert_return_data_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		ll_backend__continuation_info__convert_return_data_3_0_i6);
MR_def_label(ll_backend__continuation_info__convert_return_data_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(set__intersect_3_0);
MR_decl_entry(map__intersect_4_1);

MR_BEGIN_MODULE(ll_backend__continuation_info_module18)
	MR_init_entry1(ll_backend__continuation_info__process_continuation_4_0);
	MR_init_label8(ll_backend__continuation_info__process_continuation_4_0,3,2,6,5,8,10,11,13)
	MR_init_label2(ll_backend__continuation_info__process_continuation_4_0,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__process_continuation_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__process_continuation_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 4);
	MR_r2 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(ll_backend__continuation_info__process_continuation_4_0_i2);
	}
MR_def_label(ll_backend__continuation_info__process_continuation_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("continuation_info.m", 19);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("process_continuation: bad return", 32);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__continuation_info__process_continuation_4_0_i2);
MR_def_label(ll_backend__continuation_info__process_continuation_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, internal_layout_info);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__continuation_info__process_continuation_4_0_i6);
MR_def_label(ll_backend__continuation_info__process_continuation_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__process_continuation_4_0_i5);
	}
	MR_r3 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__continuation_info__process_continuation_4_0_i8);
	}
MR_def_label(ll_backend__continuation_info__process_continuation_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(10);
MR_def_label(ll_backend__continuation_info__process_continuation_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__process_continuation_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, internal_layout_info);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(ll_backend__continuation_info__process_continuation_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_sv(10) = MR_r2;
	MR_np_call_localret_ent(ll_backend__continuation_info__convert_return_data_3_0,
		ll_backend__continuation_info__process_continuation_4_0_i11);
MR_def_label(ll_backend__continuation_info__process_continuation_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__process_continuation_4_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr4, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, internal_layout_info);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(ll_backend__continuation_info__process_continuation_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		ll_backend__continuation_info__process_continuation_4_0_i14);
MR_def_label(ll_backend__continuation_info__process_continuation_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__intersect_4_1,
		ll_backend__continuation_info__process_continuation_4_0_i15);
MR_def_label(ll_backend__continuation_info__process_continuation_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr4, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, internal_layout_info);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__label_0_0);
MR_decl_entry(__Unify___ll_backend__llds__code_addr_0_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(__Unify___cord__cord_1_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module19)
	MR_init_entry1(__Unify___ll_backend__continuation_info__call_info_0_0);
	MR_init_label6(__Unify___ll_backend__continuation_info__call_info_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__continuation_info__call_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__call_info_0_0_i14);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__continuation_info__call_info_0_0_i4);
MR_def_label(__Unify___ll_backend__continuation_info__call_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__call_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__code_addr_0_0,
		__Unify___ll_backend__continuation_info__call_info_0_0_i6);
MR_def_label(__Unify___ll_backend__continuation_info__call_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__call_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, liveinfo);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__continuation_info__call_info_0_0_i8);
MR_def_label(__Unify___ll_backend__continuation_info__call_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__call_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___ll_backend__continuation_info__call_info_0_0_i10);
MR_def_label(__Unify___ll_backend__continuation_info__call_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__call_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___cord__cord_1_0);
MR_def_label(__Unify___ll_backend__continuation_info__call_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__call_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__label_0_0);
MR_decl_entry(__Compare___ll_backend__llds__code_addr_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___term__context_0_0);
MR_decl_entry(__Compare___cord__cord_1_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module20)
	MR_init_entry1(__Compare___ll_backend__continuation_info__call_info_0_0);
	MR_init_label7(__Compare___ll_backend__continuation_info__call_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__continuation_info__call_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__call_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__call_info_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__call_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__call_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__continuation_info__call_info_0_0_i5);
MR_def_label(__Compare___ll_backend__continuation_info__call_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__call_info_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__code_addr_0_0,
		__Compare___ll_backend__continuation_info__call_info_0_0_i9);
MR_def_label(__Compare___ll_backend__continuation_info__call_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__call_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, liveinfo);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__continuation_info__call_info_0_0_i13);
MR_def_label(__Compare___ll_backend__continuation_info__call_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__call_info_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___ll_backend__continuation_info__call_info_0_0_i17);
MR_def_label(__Compare___ll_backend__continuation_info__call_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__call_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___cord__cord_1_0);
MR_def_label(__Compare___ll_backend__continuation_info__call_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module21)
	MR_init_entry1(__Unify___ll_backend__continuation_info__closure_arg_info_0_0);
	MR_init_label3(__Unify___ll_backend__continuation_info__closure_arg_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__closure_arg_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__closure_arg_info_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___ll_backend__continuation_info__closure_arg_info_0_0_i4);
MR_def_label(__Unify___ll_backend__continuation_info__closure_arg_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__closure_arg_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___ll_backend__continuation_info__closure_arg_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__closure_arg_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module22)
	MR_init_entry1(__Compare___ll_backend__continuation_info__closure_arg_info_0_0);
	MR_init_label4(__Compare___ll_backend__continuation_info__closure_arg_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__closure_arg_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__closure_arg_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__closure_arg_info_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__closure_arg_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__closure_arg_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___ll_backend__continuation_info__closure_arg_info_0_0_i5);
MR_def_label(__Compare___ll_backend__continuation_info__closure_arg_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__closure_arg_info_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Compare___ll_backend__continuation_info__closure_arg_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module23)
	MR_init_entry1(__Unify___ll_backend__continuation_info__closure_layout_info_0_0);
	MR_init_label3(__Unify___ll_backend__continuation_info__closure_layout_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__closure_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__closure_layout_info_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, closure_arg_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__continuation_info__closure_layout_info_0_0_i4);
MR_def_label(__Unify___ll_backend__continuation_info__closure_layout_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__closure_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___ll_backend__continuation_info__closure_layout_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__closure_layout_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module24)
	MR_init_entry1(__Compare___ll_backend__continuation_info__closure_layout_info_0_0);
	MR_init_label4(__Compare___ll_backend__continuation_info__closure_layout_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__closure_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__closure_layout_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__closure_layout_info_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__closure_layout_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__closure_layout_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, closure_arg_info);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__continuation_info__closure_layout_info_0_0_i5);
MR_def_label(__Compare___ll_backend__continuation_info__closure_layout_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__closure_layout_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___ll_backend__continuation_info__closure_layout_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module25)
	MR_init_entry1(__Unify___ll_backend__continuation_info__internal_layout_info_0_0);
	MR_init_label4(__Unify___ll_backend__continuation_info__internal_layout_info_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__internal_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__internal_layout_info_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, trace_port_layout_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__continuation_info__internal_layout_info_0_0_i4);
MR_def_label(__Unify___ll_backend__continuation_info__internal_layout_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__internal_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_label_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__continuation_info__internal_layout_info_0_0_i6);
MR_def_label(__Unify___ll_backend__continuation_info__internal_layout_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__internal_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, return_layout_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__continuation_info__internal_layout_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__internal_layout_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module26)
	MR_init_entry1(__Compare___ll_backend__continuation_info__internal_layout_info_0_0);
	MR_init_label5(__Compare___ll_backend__continuation_info__internal_layout_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__internal_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__internal_layout_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__internal_layout_info_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__internal_layout_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__internal_layout_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, trace_port_layout_info);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__continuation_info__internal_layout_info_0_0_i5);
MR_def_label(__Compare___ll_backend__continuation_info__internal_layout_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__internal_layout_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_label_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__continuation_info__internal_layout_info_0_0_i9);
MR_def_label(__Compare___ll_backend__continuation_info__internal_layout_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__internal_layout_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, return_layout_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__continuation_info__internal_layout_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module27)
	MR_init_entry1(__Unify___ll_backend__continuation_info__layout_label_info_0_0);
	MR_init_label3(__Unify___ll_backend__continuation_info__layout_label_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__layout_label_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__layout_label_info_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__continuation_info__layout_label_info_0_0_i4);
MR_def_label(__Unify___ll_backend__continuation_info__layout_label_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__layout_label_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___ll_backend__continuation_info__layout_label_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__layout_label_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module28)
	MR_init_entry1(__Compare___ll_backend__continuation_info__layout_label_info_0_0);
	MR_init_label4(__Compare___ll_backend__continuation_info__layout_label_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__layout_label_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__layout_label_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__layout_label_info_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__layout_label_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__layout_label_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__continuation_info__layout_label_info_0_0_i5);
MR_def_label(__Compare___ll_backend__continuation_info__layout_label_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__layout_label_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___ll_backend__continuation_info__layout_label_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__layout_locn_0_0);
MR_decl_entry(__Unify___ll_backend__llds__live_value_type_0_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module29)
	MR_init_entry1(__Unify___ll_backend__continuation_info__layout_var_info_0_0);
	MR_init_label4(__Unify___ll_backend__continuation_info__layout_var_info_0_0,4,6,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__layout_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__layout_var_info_0_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__layout_locn_0_0,
		__Unify___ll_backend__continuation_info__layout_var_info_0_0_i4);
MR_def_label(__Unify___ll_backend__continuation_info__layout_var_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__layout_var_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__live_value_type_0_0,
		__Unify___ll_backend__continuation_info__layout_var_info_0_0_i6);
MR_def_label(__Unify___ll_backend__continuation_info__layout_var_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__layout_var_info_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(2), (char *)MR_sv(4)) == 0);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__continuation_info__layout_var_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__layout_var_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__layout_locn_0_0);
MR_decl_entry(__Compare___ll_backend__llds__live_value_type_0_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module30)
	MR_init_entry1(__Compare___ll_backend__continuation_info__layout_var_info_0_0);
	MR_init_label5(__Compare___ll_backend__continuation_info__layout_var_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__layout_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__layout_var_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__layout_var_info_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__layout_var_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__layout_var_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__layout_locn_0_0,
		__Compare___ll_backend__continuation_info__layout_var_info_0_0_i5);
MR_def_label(__Compare___ll_backend__continuation_info__layout_var_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__layout_var_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__live_value_type_0_0,
		__Compare___ll_backend__continuation_info__layout_var_info_0_0_i9);
MR_def_label(__Compare___ll_backend__continuation_info__layout_var_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__layout_var_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__continuation_info__layout_var_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module31)
	MR_init_entry1(__Unify___ll_backend__continuation_info__proc_label_layout_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__proc_label_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, internal_layout_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module32)
	MR_init_entry1(__Compare___ll_backend__continuation_info__proc_label_layout_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__proc_label_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, internal_layout_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__eval_method_0_0);
MR_decl_entry(__Unify___libs__trace_params__trace_level_0_0);
MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(__Unify___hlds__instmap__instmap_0_0);
MR_decl_entry(__Unify___ll_backend__trace_gen__trace_slot_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module33)
	MR_init_entry1(__Unify___ll_backend__continuation_info__proc_layout_info_0_0);
	MR_init_label8(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,4,6,8,10,12,14,16,18)
	MR_init_label8(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,20,22,24,26,28,30,32,36)
	MR_init_label1(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__proc_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i36);
	}
	MR_incr_sp(43);
	MR_sv(43) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 13);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 14);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 15);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 16);
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 17);
	MR_sv(18) = MR_ctfield(0, MR_tempr1, 18);
	MR_sv(19) = MR_ctfield(0, MR_tempr1, 19);
	MR_sv(20) = MR_ctfield(0, MR_tempr1, 20);
	MR_sv(21) = MR_ctfield(0, MR_tempr1, 21);
	MR_sv(22) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(23) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(24) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(25) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(26) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(27) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(28) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(29) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(30) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(31) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(32) = MR_ctfield(0, MR_tempr2, 11);
	MR_sv(33) = MR_ctfield(0, MR_tempr2, 12);
	MR_sv(34) = MR_ctfield(0, MR_tempr2, 13);
	MR_sv(35) = MR_ctfield(0, MR_tempr2, 14);
	MR_sv(36) = MR_ctfield(0, MR_tempr2, 15);
	MR_sv(37) = MR_ctfield(0, MR_tempr2, 16);
	MR_sv(38) = MR_ctfield(0, MR_tempr2, 17);
	MR_sv(39) = MR_ctfield(0, MR_tempr2, 18);
	MR_sv(40) = MR_ctfield(0, MR_tempr2, 19);
	MR_sv(41) = MR_ctfield(0, MR_tempr2, 20);
	MR_sv(42) = MR_ctfield(0, MR_tempr2, 21);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i4);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i6);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(23))) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(24))) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i8);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__eval_method_0_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i10);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(__Unify___libs__trace_params__trace_level_0_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i12);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(28);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i14);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(29))) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(30);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i16);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(31);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i18);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(32);
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i20);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	if ((MR_sv(12) != MR_sv(33))) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(34);
	MR_np_call_localret_ent(__Unify___hlds__instmap__instmap_0_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i22);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(35);
	MR_np_call_localret_ent(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i24);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	if ((MR_sv(15) != MR_sv(36))) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(37);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i26);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(38);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i28);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, internal_layout_info);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(39);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i30);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, proc_layout_table_info);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(40);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i32);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	if ((MR_sv(20) != MR_sv(41))) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, proc_layout_proc_static);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(42);
	MR_succip_word = MR_sv(43);
	MR_decr_sp(43);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(43);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___parse_tree__prog_data__eval_method_0_0);
MR_decl_entry(__Compare___libs__trace_params__trace_level_0_0);
MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(__Compare___hlds__instmap__instmap_0_0);
MR_decl_entry(__Compare___ll_backend__trace_gen__trace_slot_info_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module34)
	MR_init_entry1(__Compare___ll_backend__continuation_info__proc_layout_info_0_0);
	MR_init_label8(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label8(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,29,33,37,41,45,49,53,57)
	MR_init_label8(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,61,65,69,73,77,81,85,181)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__proc_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i3);
	}
	MR_incr_sp(43);
	MR_sv(43) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(42) = MR_ctfield(0, MR_tempr5, 21);
	MR_sv(41) = MR_ctfield(0, MR_tempr5, 20);
	MR_sv(40) = MR_ctfield(0, MR_tempr5, 19);
	MR_sv(39) = MR_ctfield(0, MR_tempr5, 18);
	MR_sv(38) = MR_ctfield(0, MR_tempr5, 17);
	MR_sv(37) = MR_ctfield(0, MR_tempr5, 16);
	MR_sv(36) = MR_ctfield(0, MR_tempr5, 15);
	MR_sv(35) = MR_ctfield(0, MR_tempr5, 14);
	MR_sv(34) = MR_ctfield(0, MR_tempr5, 13);
	MR_sv(33) = MR_ctfield(0, MR_tempr5, 12);
	MR_sv(32) = MR_ctfield(0, MR_tempr5, 11);
	MR_sv(31) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(30) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(29) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(28) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(27) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(26) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(25) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(24) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(23) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(22) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(21) = MR_ctfield(0, MR_tempr6, 21);
	MR_sv(20) = MR_ctfield(0, MR_tempr6, 20);
	MR_sv(19) = MR_ctfield(0, MR_tempr6, 19);
	MR_sv(18) = MR_ctfield(0, MR_tempr6, 18);
	MR_sv(17) = MR_ctfield(0, MR_tempr6, 17);
	MR_sv(16) = MR_ctfield(0, MR_tempr6, 16);
	MR_sv(15) = MR_ctfield(0, MR_tempr6, 15);
	MR_sv(14) = MR_ctfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_ctfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_ctfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_ctfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i5);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i9);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i13);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i17);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i21);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__eval_method_0_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i25);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(__Compare___libs__trace_params__trace_level_0_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i29);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(28);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i33);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i37);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(30);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i41);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(31);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i45);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(32);
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i49);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(33);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i53);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(34);
	MR_np_call_localret_ent(__Compare___hlds__instmap__instmap_0_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i57);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(35);
	MR_np_call_localret_ent(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i61);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(36);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i65);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(37);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i69);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(38);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i73);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, internal_layout_info);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(39);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i77);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, proc_layout_table_info);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(40);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i81);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(41);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i85);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_info_0_0_i181);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, proc_layout_proc_static);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(42);
	MR_succip_word = MR_sv(43);
	MR_decr_sp(43);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_info_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(43);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__proc_table_io_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__proc_table_struct_info_0_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module35)
	MR_init_entry1(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0);
	MR_init_label3(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0,16,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__proc_layout_table_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__proc_table_io_info_0_0);
	}
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__proc_table_struct_info_0_0);
MR_def_label(__Unify___ll_backend__continuation_info__proc_layout_table_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__proc_table_io_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__proc_table_struct_info_0_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module36)
	MR_init_entry1(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0);
	MR_init_label5(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0,3,2,7,5,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__proc_layout_table_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0_i7);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__proc_table_io_info_0_0);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__continuation_info__proc_layout_table_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__proc_table_struct_info_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module37)
	MR_init_entry1(__Unify___ll_backend__continuation_info__return_layout_info_0_0);
	MR_init_label3(__Unify___ll_backend__continuation_info__return_layout_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__return_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__return_layout_info_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__continuation_info__return_layout_info_0_0_i4);
MR_def_label(__Unify___ll_backend__continuation_info__return_layout_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__return_layout_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__continuation_info__layout_label_info_0_0);
MR_def_label(__Unify___ll_backend__continuation_info__return_layout_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__return_layout_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module38)
	MR_init_entry1(__Compare___ll_backend__continuation_info__return_layout_info_0_0);
	MR_init_label4(__Compare___ll_backend__continuation_info__return_layout_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__return_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__return_layout_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__return_layout_info_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__return_layout_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__return_layout_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__continuation_info__return_layout_info_0_0_i5);
MR_def_label(__Compare___ll_backend__continuation_info__return_layout_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__return_layout_info_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__continuation_info__layout_label_info_0_0);
MR_def_label(__Compare___ll_backend__continuation_info__return_layout_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module39)
	MR_init_entry1(__Unify___ll_backend__continuation_info__slot_contents_0_0);
	MR_init_label3(__Unify___ll_backend__continuation_info__slot_contents_0_0,6,36,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__slot_contents_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__slot_contents_0_0_i36);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__slot_contents_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__continuation_info__slot_contents_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__slot_contents_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
MR_def_label(__Unify___ll_backend__continuation_info__slot_contents_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__slot_contents_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module40)
	MR_init_entry1(__Compare___ll_backend__continuation_info__slot_contents_0_0);
	MR_init_label8(__Compare___ll_backend__continuation_info__slot_contents_0_0,7,22,37,52,67,82,97,112)
	MR_init_label8(__Compare___ll_backend__continuation_info__slot_contents_0_0,127,142,157,171,160,6,185,174)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__slot_contents_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i171);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i6);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i52) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i67) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i112) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i127) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i142) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i157));
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i171);
	}
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i171) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160));
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i171) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160));
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i171) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160));
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i171) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160));
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i171) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160));
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i171) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160));
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i171) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160));
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i171) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160));
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i171) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160));
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i160);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),10)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i185);
	}
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__slot_contents_0_0_i174);
	}
	}
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__continuation_info__slot_contents_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module41)
	MR_init_entry1(__Unify___ll_backend__continuation_info__trace_needs_body_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__trace_needs_body_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module42)
	MR_init_entry1(__Compare___ll_backend__continuation_info__trace_needs_body_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__trace_needs_body_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module43)
	MR_init_entry1(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0);
	MR_init_label5(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__trace_port_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0_i12);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0_i4);
MR_def_label(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___cord__cord_1_0,
		__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0_i6);
MR_def_label(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, user_event_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0_i8);
MR_def_label(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___ll_backend__continuation_info__layout_label_info_0_0);
MR_def_label(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__trace_port_layout_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module44)
	MR_init_entry1(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0);
	MR_init_label8(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__trace_port_layout_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i5);
MR_def_label(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i53);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i9);
MR_def_label(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i13);
MR_def_label(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___cord__cord_1_0,
		__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i17);
MR_def_label(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, user_event_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i21);
MR_def_label(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0_i53);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___ll_backend__continuation_info__layout_label_info_0_0);
MR_def_label(__Compare___ll_backend__continuation_info__trace_port_layout_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__rval_0_0);
MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module45)
	MR_init_entry1(__Unify___ll_backend__continuation_info__user_attribute_0_0);
	MR_init_label3(__Unify___ll_backend__continuation_info__user_attribute_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__user_attribute_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__user_attribute_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__continuation_info__user_attribute_0_0_i4);
MR_def_label(__Unify___ll_backend__continuation_info__user_attribute_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__user_attribute_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___ll_backend__continuation_info__user_attribute_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__user_attribute_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__rval_0_0);
MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module46)
	MR_init_entry1(__Compare___ll_backend__continuation_info__user_attribute_0_0);
	MR_init_label4(__Compare___ll_backend__continuation_info__user_attribute_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__user_attribute_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__user_attribute_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__user_attribute_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__user_attribute_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__user_attribute_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__continuation_info__user_attribute_0_0_i5);
MR_def_label(__Compare___ll_backend__continuation_info__user_attribute_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__user_attribute_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___ll_backend__continuation_info__user_attribute_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module47)
	MR_init_entry1(__Unify___ll_backend__continuation_info__user_event_info_0_0);
	MR_init_label2(__Unify___ll_backend__continuation_info__user_event_info_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__continuation_info__user_event_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__user_event_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__continuation_info__user_event_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ll_backend__continuation_info__user_event_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__continuation_info__user_event_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module48)
	MR_init_entry1(__Compare___ll_backend__continuation_info__user_event_info_0_0);
	MR_init_label4(__Compare___ll_backend__continuation_info__user_event_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__continuation_info__user_event_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__user_event_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__continuation_info__user_event_info_0_0_i2);
MR_def_label(__Compare___ll_backend__continuation_info__user_event_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__continuation_info__user_event_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__continuation_info__user_event_info_0_0_i5);
MR_def_label(__Compare___ll_backend__continuation_info__user_event_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__continuation_info__user_event_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__continuation_info__user_event_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(set__member_2_1);

MR_BEGIN_MODULE(ll_backend__continuation_info_module49)
	MR_init_entry1(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__821__1_3_0);
	MR_init_label2(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__821__1_3_0,1,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__821__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ll_backend.continuation_info.IntroducedFrom__pred__find_typeinfos_for_tvars__821__1/3-0", 1,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__member_2_1,
		ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__821__1_3_0_i1);
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__821__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_fv(1),0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__821__1_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__821__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_fv(1), 1);
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__type_info_locn_var_2_0);
MR_decl_entry(solutions__solutions_set_2_1);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(ll_backend__continuation_info_module50)
	MR_init_entry1(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0);
	MR_init_label5(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0,2,4,3,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__type_info_locn_var_2_0,
		ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0_i2);
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,8);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0_i4);
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__821__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, layout_locn);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(solutions__solutions_set_2_1);
	}
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0_i7);
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,6,1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,6,0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("%s: %s %s", 9);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0_i8);
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__818__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("continuation_info.m", 19);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module51)
	MR_init_entry1(ll_backend__continuation_info__IntroducedFrom__pred__process_proc_llds__463__1_2_0);
	MR_init_label1(ll_backend__continuation_info__IntroducedFrom__pred__process_proc_llds__463__1_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__IntroducedFrom__pred__process_proc_llds__463__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ll_backend__continuation_info__IntroducedFrom__pred__process_proc_llds__463__1_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__IntroducedFrom__pred__process_proc_llds__463__1_2_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(3, MR_tempr1, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(3, MR_tempr1, 3);
	MR_tfield(0, MR_tempr3, 3) = MR_ctfield(3, MR_tempr1, 4);
	MR_tfield(0, MR_tempr3, 4) = MR_ctfield(3, MR_tempr1, 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__process_proc_llds__463__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module52)
	MR_init_entry1(ll_backend__continuation_info__IntroducedFrom__pred__process_continuation__521__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__IntroducedFrom__pred__process_continuation__521__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, layout_locn);
	MR_np_tailcall_ent(set__intersect_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module53)
	MR_init_entry1(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__539__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__539__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_string_const("convert_return_data", 19);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module54)
	MR_init_entry1(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__545__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__545__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module55)
	MR_init_entry1(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__550__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__550__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, layout_locn);
	MR_np_tailcall_ent(set__intersect_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__union_4_1);

MR_BEGIN_MODULE(ll_backend__continuation_info_module56)
	MR_init_entry1(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__549__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__549__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_np_tailcall_ent(map__union_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__continuation_info_module57)
	MR_init_entry1(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0);
	MR_init_label7(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0,6,5,8,2,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(assoc_list__search_3_0,
		ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0_i6);
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(1, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(assoc_list__search_3_0,
		ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0_i8);
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__type_info_locn_var_2_0,
		ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0_i10);
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0_i11);
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,6,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,6,2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("%s: %s %s", 9);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0_i12);
MR_def_label(ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__898__1_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("continuation_info.m", 19);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__continuation_info_maybe_bunch_0(void)
{
	ll_backend__continuation_info_module0();
	ll_backend__continuation_info_module1();
	ll_backend__continuation_info_module2();
	ll_backend__continuation_info_module3();
	ll_backend__continuation_info_module4();
	ll_backend__continuation_info_module5();
	ll_backend__continuation_info_module6();
	ll_backend__continuation_info_module7();
	ll_backend__continuation_info_module8();
	ll_backend__continuation_info_module9();
	ll_backend__continuation_info_module10();
	ll_backend__continuation_info_module11();
	ll_backend__continuation_info_module12();
	ll_backend__continuation_info_module13();
	ll_backend__continuation_info_module14();
	ll_backend__continuation_info_module15();
	ll_backend__continuation_info_module16();
	ll_backend__continuation_info_module17();
	ll_backend__continuation_info_module18();
	ll_backend__continuation_info_module19();
	ll_backend__continuation_info_module20();
	ll_backend__continuation_info_module21();
	ll_backend__continuation_info_module22();
	ll_backend__continuation_info_module23();
	ll_backend__continuation_info_module24();
	ll_backend__continuation_info_module25();
	ll_backend__continuation_info_module26();
	ll_backend__continuation_info_module27();
	ll_backend__continuation_info_module28();
	ll_backend__continuation_info_module29();
	ll_backend__continuation_info_module30();
	ll_backend__continuation_info_module31();
	ll_backend__continuation_info_module32();
	ll_backend__continuation_info_module33();
	ll_backend__continuation_info_module34();
	ll_backend__continuation_info_module35();
	ll_backend__continuation_info_module36();
	ll_backend__continuation_info_module37();
	ll_backend__continuation_info_module38();
	ll_backend__continuation_info_module39();
}

static void mercury__ll_backend__continuation_info_maybe_bunch_1(void)
{
	ll_backend__continuation_info_module40();
	ll_backend__continuation_info_module41();
	ll_backend__continuation_info_module42();
	ll_backend__continuation_info_module43();
	ll_backend__continuation_info_module44();
	ll_backend__continuation_info_module45();
	ll_backend__continuation_info_module46();
	ll_backend__continuation_info_module47();
	ll_backend__continuation_info_module48();
	ll_backend__continuation_info_module49();
	ll_backend__continuation_info_module50();
	ll_backend__continuation_info_module51();
	ll_backend__continuation_info_module52();
	ll_backend__continuation_info_module53();
	ll_backend__continuation_info_module54();
	ll_backend__continuation_info_module55();
	ll_backend__continuation_info_module56();
	ll_backend__continuation_info_module57();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__continuation_info__init(void);
void mercury__ll_backend__continuation_info__init_type_tables(void);
void mercury__ll_backend__continuation_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__continuation_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__continuation_info__init_complexity_procs(void);
#endif

void mercury__ll_backend__continuation_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__continuation_info_maybe_bunch_0();
	mercury__ll_backend__continuation_info_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_user_event_info_0,
		ll_backend__continuation_info__user_event_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_user_attribute_0,
		ll_backend__continuation_info__user_attribute_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0,
		ll_backend__continuation_info__trace_port_layout_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_trace_needs_body_rep_0,
		ll_backend__continuation_info__trace_needs_body_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_slot_contents_0,
		ll_backend__continuation_info__slot_contents_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_return_layout_info_0,
		ll_backend__continuation_info__return_layout_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0,
		ll_backend__continuation_info__proc_layout_table_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_proc_layout_info_0,
		ll_backend__continuation_info__proc_layout_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_proc_label_layout_info_0,
		ll_backend__continuation_info__proc_label_layout_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_layout_var_info_0,
		ll_backend__continuation_info__layout_var_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_layout_label_info_0,
		ll_backend__continuation_info__layout_label_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0,
		ll_backend__continuation_info__internal_layout_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_closure_layout_info_0,
		ll_backend__continuation_info__closure_layout_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_closure_arg_info_0,
		ll_backend__continuation_info__closure_arg_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__continuation_info__type_ctor_info_call_info_0,
		ll_backend__continuation_info__call_info_0_0);
	mercury__ll_backend__continuation_info__init_debugger();
}

void mercury__ll_backend__continuation_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_user_event_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_user_attribute_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_trace_needs_body_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_slot_contents_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_return_layout_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_proc_layout_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_proc_label_layout_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_layout_var_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_layout_label_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_closure_layout_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_closure_arg_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__continuation_info__type_ctor_info_call_info_0);
	}
}


void mercury__ll_backend__continuation_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__continuation_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__continuation_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__continuation_info__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
