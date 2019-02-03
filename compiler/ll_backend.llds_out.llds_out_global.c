/*
** Automatically generated from `llds_out_global.m'
** by the Mercury compiler,
** version 10.04.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__llds_out__llds_out_global__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 539 "../library/io.int"
#include "io.mh"

#line 28 "ll_backend.llds_out.llds_out_global.c"
#line 547 "../library/io.int"
#include "string.mh"

#line 32 "ll_backend.llds_out.llds_out_global.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ll_backend.llds_out.llds_out_global.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "ll_backend.llds_out.llds_out_global.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ll_backend.llds_out.llds_out_global.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "ll_backend.llds_out.llds_out_global.c"
#line 49 "ll_backend.llds_out.llds_out_global.c"
#include "ll_backend.llds_out.llds_out_global.mh"

#line 52 "ll_backend.llds_out.llds_out_global.c"
#line 53 "ll_backend.llds_out.llds_out_global.c"
#ifndef LL_BACKEND__LLDS_OUT__LLDS_OUT_GLOBAL_DECL_GUARD
#define LL_BACKEND__LLDS_OUT__LLDS_OUT_GLOBAL_DECL_GUARD

#line 57 "ll_backend.llds_out.llds_out_global.c"
#line 58 "ll_backend.llds_out.llds_out_global.c"

#endif
#line 61 "ll_backend.llds_out.llds_out_global.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];
MR_decl_label3(ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0, 2,4,6)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0, 36,4,6,8,9,5,12,14,16,17)
MR_decl_label1(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0, 38)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0, 19,4,5,6,7,8,9,10,11,12)
MR_decl_label2(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0, 13,21)
MR_decl_label8(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0, 28,4,6,8,9,11,13,32)
MR_decl_label8(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0, 28,4,6,8,9,11,13,32)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0, 30,4,7,8,9,5,11,12,13,14)
MR_decl_label3(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0, 15,16,32)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0, 79,6,8,11,7,14,5,18,17,4)
MR_decl_label3(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0, 26,28,82)
MR_decl_label7(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0, 14,4,5,6,7,8,16)
MR_decl_label7(ll_backend__llds_out__llds_out_global__output_cons_args_4_0, 38,5,4,11,13,15,41)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0, 29,4,5,6,7,8,10,11,12,13)
MR_decl_label8(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0, 14,15,16,17,18,19,20,31)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0, 2,6,4,8,9,10,11,12,14,16)
MR_decl_label9(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0, 17,18,20,21,22,23,24,25,26)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0, 2,5,6,7,8,9,10,11,12,13)
MR_decl_label6(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0, 14,15,16,17,19,20)
MR_decl_label6(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0, 2,3,4,5,6,7)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0, 17,4,5,6,7,8,9,10,11,19)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_table_steps_3_0, 25,4,5,6,7,8,9,11,13,14)
MR_decl_label1(ll_backend__llds_out__llds_out_global__output_table_steps_3_0, 27)
MR_decl_label5(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0, 2,3,4,5,6)
MR_decl_label5(ll_backend__llds_out__llds_out_global__output_table_tips_5_0, 3,4,5,6,7)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0, 16,17,18,22,21,140,25,26,28,29)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0, 30,31,32,33,34,35,36,20,38,39)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0, 41,40,142,44,45,46,47,49,50,51)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0, 52,53,54,55,56,57,58,59,60,61)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0, 62,63,64,65,66,67,68,70,72,73)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0, 74,77,78,79,80,81,82,83,84,85)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0, 86,87,88,89,90,91,92,76,94,95)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0, 96,97,98,99,100,101,102,103,104,107)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0, 108,109,110,111,112,106,114,115,116,117)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0, 118,119,120,121,122,75,126,127,128,125)
MR_decl_label6(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0, 130,131,132,133,134,135)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0, 2,6,4,8,9,10,11,12,14,16)
MR_decl_label9(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0, 17,18,20,21,22,23,24,25,26)
MR_decl_label10(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0, 2,5,6,7,8,9,10,11,12,13)
MR_decl_label6(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0, 14,15,16,17,19,20)
MR_decl_label1(ll_backend__llds_out__llds_out_global__project_int_constant_2_0, 1)
MR_decl_label2(fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0, 6,3)
MR_decl_label1(fn__ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_0, 3)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_table_steps_3_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_table_tips_5_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_0)
MR_decl_static(fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0)
MR_decl_static(fn__ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_cons_args_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__project_int_constant_2_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0)
MR_decl_static(ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0)

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_complexity_arg_info_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(hlds__hlds_module, complexity_arg_info)
},
};

static const struct mercury_type_1 mercury_common_1[5] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(fn__ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(ll_backend__llds_out__llds_out_global__project_int_constant_2_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
{
0,
0
}
},
{
{
0,
1
}
},
{
{
1,
0
}
},
{
{
1,
1
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, rval)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, rval)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_common_cell_value_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_common_cell_arg_group_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, common_cell_value),
MR_COMMON(4,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, common_cell_value),
MR_COMMON(4,1)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, common_cell_arg_group),
MR_COMMON(4,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, rval),
MR_INT_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_2;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, llds_out_info),
MR_CTOR0_ADDR(ll_backend__llds, common_cell_value),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, llds_out_info),
MR_CTOR0_ADDR(ll_backend__llds, common_cell_value),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.llds_out.llds_out_global",
"ll_backend.llds_out.llds_out_global",
"project_int_constant",
2,
0
},
"ll_backend.llds_out.llds_out_global",
"llds_out_global.m",
596,
"d2;c5;d1;c4;?;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0_1 = {
{
MR_FUNCTION,
"ll_backend.llds_out.llds_out_global",
"ll_backend.llds_out.llds_out_global",
"common_group_get_rvals",
2,
0
},
"ll_backend.llds_out.llds_out_global",
"llds_out_global.m",
504,
"d1;c3;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_2 = {
{
MR_PREDICATE,
"ll_backend.llds_out.llds_out_global",
"ll_backend.llds_out.llds_out_global",
"output_common_cell_value",
4,
0
},
"ll_backend.llds_out.llds_out_global",
"llds_out_global.m",
493,
"d1;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_1 = {
{
MR_FUNCTION,
"ll_backend.llds_out.llds_out_global",
"ll_backend.llds_out.llds_out_global",
"common_cell_get_rvals",
2,
0
},
"ll_backend.llds_out.llds_out_global",
"llds_out_global.m",
482,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_2 = {
{
MR_PREDICATE,
"ll_backend.llds_out.llds_out_global",
"ll_backend.llds_out.llds_out_global",
"output_common_cell_value",
4,
0
},
"ll_backend.llds_out.llds_out_global",
"llds_out_global.m",
475,
"d1;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_1 = {
{
MR_FUNCTION,
"ll_backend.llds_out.llds_out_global",
"ll_backend.llds_out.llds_out_global",
"common_cell_get_rvals",
2,
0
},
"ll_backend.llds_out.llds_out_global",
"llds_out_global.m",
464,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.llds_out.llds_out_global",
"ll_backend.llds_out.llds_out_global",
"complexity_arg_is_profiled",
1,
0
},
"ll_backend.llds_out.llds_out_global",
"llds_out_global.m",
128,
"d2;c13;"
};


MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module0)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,36,4,6,8,9,5,12,14,16,17)
	MR_init_label1(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_complexity_arg_info_array'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i38);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("{ ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL, ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_COMPLEXITY_INPUT_FIX_SIZE", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_COMPLEXITY_INPUT_VAR_SIZE", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_COMPLEXITY_OUTPUT", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" },\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_complexity_arg_info_0;
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module1)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,19,4,5,6,7,8,9,10,11,12)
	MR_init_label2(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,13,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_complexity_arg_info_arrays'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i21);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("\nMR_ComplexityArgInfo ", 22);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_complexity_arg_info_", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, complexity_arg_info);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] = {\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0_i19);
MR_def_label(ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__output_quoted_string_3_0);
MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module2)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,29,4,5,6,7,8,10,11,12,13)
	MR_init_label8(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,14,15,16,17,18,19,20,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_init_complexity_proc_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i31);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("\tMR_init_complexity_proc(", 25);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", \"", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, complexity_arg_info);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__filter_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_complexity_arg_info_", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i18);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i19);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0_i29);
MR_def_label(ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__rtti__table_trie_step_to_c_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module3)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_table_steps_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_table_steps_3_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,25,4,5,6,7,8,9,11,13,14)
	MR_init_label1(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_table_steps'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_table_steps_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i27);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("{ \"", 3);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__rtti__table_trie_step_to_c_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i11);
	}
	MR_r1 = (MR_Integer) -1;
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" },\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_table_steps_3_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_data__output_data_id_4_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module4)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0);
	MR_init_label5(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_table_steps_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("static const MR_TableStepDesc ", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0_i3);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_4_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[] = {\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_steps_3_0,
		ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module5)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_table_tips_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_table_tips_5_0);
	MR_init_label5(ll_backend__llds_out__llds_out_global__output_table_tips_5_0,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_table_tips'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_table_tips_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_tips_5_0_i3);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_tips_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("static MR_TrieNode ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_tips_5_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_tips_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_4_0,
		ll_backend__llds_out__llds_out_global__output_table_tips_5_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_tips_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_tips_5_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_tips_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_table_tips_5_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_tips_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("];\n", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__table_step_stats_kind_1_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module6)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,17,4,5,6,7,8,9,10,11,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_table_step_stats_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0_i19);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_r1 = (MR_Word) MR_string_const("{ 0, 0, ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__table_step_stats_kind_1_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0, 0, 0, 0, 0, 0, 0, 0, 0, ", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0, 0, ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0, 0, 0, 0, ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0, 0 },\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module7)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0);
	MR_init_label6(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_table_step_stats'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("static MR_TableStepStats ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0_i3);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_4_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[] = \n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_0,
		ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0);
MR_decl_entry(fn__parse_tree__prog_data__eval_method_to_table_type_1_0);
MR_decl_entry(ll_backend__llds_out__llds_out_data__output_rval_4_0);
MR_decl_entry(ll_backend__llds_out__llds_out_data__output_data_id_addr_4_0);
MR_decl_entry(ll_backend__llds_out__llds_out_util__decl_set_insert_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module8)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,16,17,18,22,21,140,25,26,28,29)
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,30,31,32,33,34,35,36,20,38,39)
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,41,40,142,44,45,46,47,49,50,51)
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,52,53,54,55,56,57,58,59,60,61)
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,62,63,64,65,66,67,68,70,72,73)
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,74,77,78,79,80,81,82,83,84,85)
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,86,87,88,89,90,91,92,76,94,95)
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,96,97,98,99,100,101,102,103,104,107)
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,108,109,110,111,112,106,114,115,116,117)
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,118,119,120,121,122,75,126,127,128,125)
	MR_init_label6(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,130,131,132,133,134,135)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_tabling_info_struct'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(22);
	MR_sv(22) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(14) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(15) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(16) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_TAG_COMMON(3,3,1);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_sv(18) = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_TAG_COMMON(3,3,2);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_sv(19) = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_TAG_COMMON(3,3,3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 3);
	MR_sv(6) = MR_tfield(0, MR_r2, 4);
	MR_sv(7) = MR_tfield(0, MR_r2, 5);
	MR_sv(8) = MR_tfield(0, MR_r2, 6);
	MR_sv(9) = MR_tfield(0, MR_r2, 7);
	MR_sv(10) = MR_tfield(0, MR_r2, 8);
	MR_sv(11) = MR_tfield(0, MR_r2, 9);
	MR_sv(13) = MR_tempr2;
	MR_sv(20) = MR_r3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__eval_method_to_table_type_1_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i18);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i20);
	}
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i22);
	}
	MR_sv(21) = MR_r1;
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_sv(10), 0);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_tips_5_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i25);
	}
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nstatic MR_ProcTableInfo ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i28);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i26);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i140);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_4_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i29);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i30);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i31);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i32);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i33);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i34);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i35);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i58);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_sv(7), 0);
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_steps_table_5_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i38);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i39);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i41);
	}
	MR_sv(20) = MR_r1;
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i40);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_sv(10), 0);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_tips_5_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i40);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i44);
	}
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nstatic MR_ProcTableInfo ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i49);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i45);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i46);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i47);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_table_step_stats_5_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i142);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_4_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i50);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i51);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i52);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i53);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i54);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i55);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i56);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i57);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("1,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i58);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(const MR_PseudoTypeInfo *) ", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i59);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_4_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i60);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i61);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(const MR_TypeParamLocns *) ", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i62);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_4_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i63);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i64);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{ 0 },\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i65);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i66);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_4_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i67);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i68);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i70);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i73);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_4_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i72);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i73);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i74);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i76);
	}
	MR_r1 = (MR_Word) MR_string_const("{{{\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i77);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i78);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i79);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i80);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},{\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i81);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i82);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i83);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i84);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}},{{\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i85);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i86);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i87);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i88);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},{\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i89);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i90);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i91);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i92);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}}},\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i75);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{{{\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i94);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i95);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i96);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_4_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i97);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i98);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},{\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i99);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i100);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i101);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_4_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i102);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i103);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}},{{\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i104);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i106);
	}
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i107);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i108);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i109);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},{\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i110);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i111);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i112);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i122);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i114);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i115);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_4_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i116);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i117);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},{\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i118);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i119);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i120);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_4_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i121);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i122);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}}},\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i75);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i125);
	}
	MR_r1 = (MR_Word) MR_string_const("-1,\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i126);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL,\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i127);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i128);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i134);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(10), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i130);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i131);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_data_id_addr_4_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i132);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i133);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i134);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0_i135);
MR_def_label(ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(20);
	MR_succip_word = MR_sv(22);
	MR_decr_sp(22);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_util__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_data__output_llds_type_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module9)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0);
	MR_init_label7(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0,14,4,5,6,7,8,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_cons_arg_types'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0_i16);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_llds_type_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" f", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module10)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,30,4,7,8,9,5,11,12,13,14)
	MR_init_label3(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,15,16,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_cons_arg_group_types'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i32);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i5);
	}
	MR_r1 = MR_r4;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_llds_type_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" f", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_llds_type_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" f", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("];\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0_i30);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_util__decl_set_is_member_2_0);
MR_decl_entry(fn__backend_libs__name_mangle__mercury_common_type_prefix_0_0);
MR_decl_entry(ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module11)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,2,6,4,8,9,10,11,12,14,16)
	MR_init_label9(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,17,18,20,21,22,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_scalar_common_data_decl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__decl_set_is_member_2_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i4);
	}
	MR_sv(1) = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("MR_STATIC_LINKAGE const struct ", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = (MR_Word) MR_string_const("struct ", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_sv(2);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_common_type_prefix_0_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" {\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i14);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__decl_set_insert_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i18);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_STATIC_LINKAGE const struct ", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_sv(2);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_common_type_prefix_0_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i22);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i24);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[];\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0_i26);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module12)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,2,6,4,8,9,10,11,12,14,16)
	MR_init_label9(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,17,18,20,21,22,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_vector_common_data_decl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__decl_set_is_member_2_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i4);
	}
	MR_sv(1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_string_const("MR_STATIC_LINKAGE const struct ", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = (MR_Word) MR_string_const("struct ", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_sv(2);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_common_type_prefix_0_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" {\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i14);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__decl_set_insert_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i18);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_STATIC_LINKAGE const struct ", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_sv(2);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_common_type_prefix_0_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i22);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i24);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[];\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0_i26);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_common_cell_value_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module13)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,2,5,6,7,8,9,10,11,12,13)
	MR_init_label6(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,14,15,16,17,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_scalar_common_data_defn'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_value);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const struct ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_sv(2);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_common_type_prefix_0_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_value);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] =\n{\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_value);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i19);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module14)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,2,5,6,7,8,9,10,11,12,13)
	MR_init_label6(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,14,15,16,17,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_vector_common_data_defn'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_value);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const struct ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_sv(2);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_common_type_prefix_0_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_value);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] =\n{\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i17);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_value);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i19);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module15)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'complexity_arg_is_profiled'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_common_cell_arg_group_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_llds_type_0;
MR_decl_entry(assoc_list__keys_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module16)
	MR_init_entry1(fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0);
	MR_init_label2(fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'common_cell_get_rvals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, common_cell_arg_group);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0_i6);
MR_def_label(fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__condense_2_0);
	}
MR_def_label(fn__ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, llds_type);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(assoc_list__keys_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module17)
	MR_init_entry1(fn__ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_0);
	MR_init_label1(fn__ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'common_group_get_rvals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
MR_def_label(fn__ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r1, 1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_0);
MR_decl_entry(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module18)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_cons_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_cons_args_4_0);
	MR_init_label7(ll_backend__llds_out__llds_out_global__output_cons_args_4_0,38,5,4,11,13,15,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_cons_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_cons_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_args_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_args_4_0_i41);
	}
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_0,
		ll_backend__llds_out__llds_out_global__output_cons_args_4_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_args_4_0_i4);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_args_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_args_4_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_args_4_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_args_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_global__output_cons_args_4_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_args_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_args_4_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_args_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_args_4_0_i15);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_args_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_args_4_0_i38);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_args_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module19)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0);
	MR_init_label8(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0,28,4,6,8,9,11,13,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_cons_arg_group_elements'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0_i32);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0_i28);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module20)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0);
	MR_init_label8(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0,28,4,6,8,9,11,13,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_cons_arg_group_ints'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0_i32);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0_i13);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0_i28);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module21)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__project_int_constant_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__project_int_constant_2_0);
	MR_init_label1(ll_backend__llds_out__llds_out_global__project_int_constant_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_int_constant'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__project_int_constant_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__project_int_constant_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__project_int_constant_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__llds_out__llds_out_global__project_int_constant_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_3_2);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module22)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0);
	MR_init_label10(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,79,6,8,11,7,14,5,18,17,4)
	MR_init_label3(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,26,28,82)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_cons_arg_groups'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i82);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(list__map_3_2,
		ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i11);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i7);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i18);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(3), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i17);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_data__output_rval_as_type_5_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i26);
	}
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i28);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0_i79);
MR_def_label(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_global_module23)
	MR_init_entry1(ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0);
	MR_init_label3(ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0,2,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_common_cell_value'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_0,
		ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_global__output_cons_args_4_0,
		ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_global__output_common_cell_value_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},\n", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__llds_out__llds_out_global_maybe_bunch_0(void)
{
	ll_backend__llds_out__llds_out_global_module0();
	ll_backend__llds_out__llds_out_global_module1();
	ll_backend__llds_out__llds_out_global_module2();
	ll_backend__llds_out__llds_out_global_module3();
	ll_backend__llds_out__llds_out_global_module4();
	ll_backend__llds_out__llds_out_global_module5();
	ll_backend__llds_out__llds_out_global_module6();
	ll_backend__llds_out__llds_out_global_module7();
	ll_backend__llds_out__llds_out_global_module8();
	ll_backend__llds_out__llds_out_global_module9();
	ll_backend__llds_out__llds_out_global_module10();
	ll_backend__llds_out__llds_out_global_module11();
	ll_backend__llds_out__llds_out_global_module12();
	ll_backend__llds_out__llds_out_global_module13();
	ll_backend__llds_out__llds_out_global_module14();
	ll_backend__llds_out__llds_out_global_module15();
	ll_backend__llds_out__llds_out_global_module16();
	ll_backend__llds_out__llds_out_global_module17();
	ll_backend__llds_out__llds_out_global_module18();
	ll_backend__llds_out__llds_out_global_module19();
	ll_backend__llds_out__llds_out_global_module20();
	ll_backend__llds_out__llds_out_global_module21();
	ll_backend__llds_out__llds_out_global_module22();
	ll_backend__llds_out__llds_out_global_module23();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__llds_out__llds_out_global__init(void);
void mercury__ll_backend__llds_out__llds_out_global__init_type_tables(void);
void mercury__ll_backend__llds_out__llds_out_global__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__llds_out__llds_out_global__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__llds_out__llds_out_global__init_complexity_procs(void);
#endif

void mercury__ll_backend__llds_out__llds_out_global__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__llds_out__llds_out_global_maybe_bunch_0();
	mercury__ll_backend__llds_out__llds_out_global__init_debugger();
}

void mercury__ll_backend__llds_out__llds_out_global__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__llds_out__llds_out_global__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__llds_out__llds_out_global__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__llds_out__llds_out_global);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__llds_out__llds_out_global__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
