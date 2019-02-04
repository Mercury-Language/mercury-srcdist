/*
** Automatically generated from `mercury_compile_llds_back_end.m'
** by the Mercury compiler,
** version rotd-2011-07-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__top_level__mercury_compile_llds_back_end__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "top_level.mercury_compile_llds_back_end.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "top_level.mercury_compile_llds_back_end.c"
#line 202 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 36 "top_level.mercury_compile_llds_back_end.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "top_level.mercury_compile_llds_back_end.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "top_level.mercury_compile_llds_back_end.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "top_level.mercury_compile_llds_back_end.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "top_level.mercury_compile_llds_back_end.c"
#line 53 "top_level.mercury_compile_llds_back_end.c"
#include "top_level.mercury_compile_llds_back_end.mh"

#line 56 "top_level.mercury_compile_llds_back_end.c"
#line 57 "top_level.mercury_compile_llds_back_end.c"
#ifndef TOP_LEVEL__MERCURY_COMPILE_LLDS_BACK_END_DECL_GUARD
#define TOP_LEVEL__MERCURY_COMPILE_LLDS_BACK_END_DECL_GUARD

#line 61 "top_level.mercury_compile_llds_back_end.c"
#line 62 "top_level.mercury_compile_llds_back_end.c"

#endif
#line 65 "top_level.mercury_compile_llds_back_end.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
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
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
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
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];
MR_decl_label5(top_level__mercury_compile_llds_back_end__allocate_store_map_6_0, 2,3,6,7,8)
MR_decl_label4(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0, 19,4,5,7)
MR_decl_label6(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0, 2,3,4,5,6,7)
MR_decl_label9(top_level__mercury_compile_llds_back_end__compute_liveness_6_0, 2,3,4,5,6,7,13,15,16)
MR_decl_label5(top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0, 2,3,6,7,8)
MR_decl_label5(top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0, 2,3,4,5,6)
MR_decl_label3(top_level__mercury_compile_llds_back_end__get_c_body_code_2_0, 6,7,2)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0, 2,3,4,5,7,8,9,10,11,12)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0, 13,14,15,16,17,18,19,20,22,24)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0, 12,14,15,16,17,18,19,20,21,22)
MR_decl_label4(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0, 23,24,25,26)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0, 2,3,4,6,7,8,9,10,12,14)
MR_decl_label1(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0, 15)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0, 74,3,4,5,6,8,10,11,13,14)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0, 15,16,17,12,19,20,21,22,24,25)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0, 26,27,28,29,30,18,31,32,35,34)
MR_decl_label4(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0, 36,38,39,40)
MR_decl_label6(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0, 21,4,5,6,7,9)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0, 3,4,6,7,5,8,10,11,9,12)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0, 14,15,13,16,17,18,19,20,21,25)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0, 26,32,36,37,38,39,40,41,43,44)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0, 45,42,46,47,48,49,50,51,52,54)
MR_decl_label4(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0, 55,53,56,57)
MR_decl_label5(top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0, 2,3,4,5,6)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0, 2,3,4,5,8,9,10,11,12,13)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0, 22,23,24,25,26,27,28,33,34,36)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0, 37,38,40,41,42,45,46,47,48,49)
MR_decl_label10(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0, 51,52,53,56,57,58,60,62,63,64)
MR_decl_label1(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0, 55)
MR_decl_label7(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0, 2,3,4,5,6,7,9)
MR_decl_label7(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0, 4,5,6,3,8,10,12)
MR_decl_label5(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0, 2,3,4,5,6)
MR_decl_label8(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0, 2,3,5,6,7,10,11,12)
MR_decl_label5(top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0, 2,3,4,5,6)
MR_decl_label8(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0, 2,3,5,6,7,10,11,12)
MR_decl_label8(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0, 2,3,5,6,7,8,9,10)
MR_decl_label8(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0, 2,3,5,6,7,10,11,12)
MR_decl_label8(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0, 2,3,5,6,7,10,11,12)
MR_decl_label9(top_level__mercury_compile_llds_back_end__output_llds_file_7_0, 2,3,4,5,6,7,8,9,10)
MR_def_extern_entry(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__compute_liveness_6_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__allocate_store_map_6_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0)
MR_def_extern_entry(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__get_c_body_code_2_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__combine_chunks_3_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__output_llds_file_7_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0)
MR_def_extern_entry(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0)
MR_decl_static(top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__158__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_followcode_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__allocate_store_map_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__store_alloc__type_ctor_info_store_map_run_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_2;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_followcode_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__allocate_store_map_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ll_backend__store_alloc, store_map_run_type),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info),
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info),
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(ll_backend__saved_vars__saved_vars_proc_5_0);
MR_decl_entry(ll_backend__stack_opt__stack_opt_cell_5_0);
MR_decl_entry(ll_backend__follow_code__move_follow_code_in_proc_5_0);
MR_decl_entry(ll_backend__liveness__detect_liveness_proc_4_0);
MR_decl_entry(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0);
static const struct mercury_type_1 mercury_common_1[6] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(ll_backend__saved_vars__saved_vars_proc_5_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(ll_backend__stack_opt__stack_opt_cell_5_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(ll_backend__follow_code__move_follow_code_in_proc_5_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(ll_backend__liveness__detect_liveness_proc_4_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
0,
MR_TAG_COMMON(0,1,0)
},
{
0,
MR_TAG_COMMON(0,1,1)
},
{
0,
MR_TAG_COMMON(0,1,2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__compute_liveness_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0_1;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__compute_liveness_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

static const struct mercury_type_4 mercury_common_4[4] =
{
{
MR_TAG_COMMON(0,1,3)
},
{
MR_TAG_COMMON(0,6,0)
},
{
MR_TAG_COMMON(0,1,4)
},
{
MR_TAG_COMMON(0,6,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

MR_decl_entry(hlds__mark_tail_calls__mark_tail_calls_6_0);
MR_decl_entry(ll_backend__store_alloc__allocate_store_maps_5_0);
static const struct mercury_type_6 mercury_common_6[2] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(hlds__mark_tail_calls__mark_tail_calls_6_0),
1,
10
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(ll_backend__store_alloc__allocate_store_maps_5_0),
1,
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_c_procedure_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, c_procedure)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_3;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_3,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_4,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_4 = {
{
MR_PREDICATE,
"top_level.mercury_compile_llds_back_end",
"top_level.mercury_compile_llds_back_end",
"compile_fact_table_file",
7,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
674,
"81"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_3 = {
{
MR_PREDICATE,
"top_level.mercury_compile_llds_back_end",
"top_level.mercury_compile_llds_back_end",
"foreign_decl_code_is_local",
1,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
640,
"56"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_2 = {
{
MR_PREDICATE,
"top_level.mercury_compile_llds_back_end",
"top_level.mercury_compile_llds_back_end",
"make_foreign_import_header_code",
5,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
632,
"54"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_1 = {
{
MR_PREDICATE,
"top_level.mercury_compile_llds_back_end",
"top_level.mercury_compile_llds_back_end",
"make_foreign_import_header_code",
5,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
632,
"54"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_1 = {
{
MR_PREDICATE,
"top_level.mercury_compile_llds_back_end",
"top_level.mercury_compile_llds_back_end",
"lambda_mercury_compile_llds_back_end_m_158",
2,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
158,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__allocate_store_map_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.store_alloc",
"ll_backend.store_alloc",
"allocate_store_maps",
5,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
520,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_alloc",
"ll_backend.stack_alloc",
"allocate_stack_slots_in_proc",
4,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
509,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0_1 = {
{
MR_PREDICATE,
"hlds.mark_tail_calls",
"hlds.mark_tail_calls",
"mark_tail_calls",
6,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
494,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__compute_liveness_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"detect_liveness_proc",
4,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
476,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_followcode_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.follow_code",
"ll_backend.follow_code",
"move_follow_code_in_proc",
5,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
453,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"stack_opt_cell",
5,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
436,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.saved_vars",
"ll_backend.saved_vars",
"saved_vars_proc",
5,
0
},
"top_level.mercury_compile_llds_back_end",
"mercury_compile_llds_back_end.m",
418,
"18"
};


MR_decl_entry(libs__file_util__maybe_write_string_4_0);
MR_decl_entry(libs__file_util__maybe_flush_output_3_0);
MR_decl_entry(hlds__arg_info__generate_arg_info_2_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module0)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0);
	MR_init_label5(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_args_to_regs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("% Mapping args to regs...", 25);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__arg_info__generate_arg_info_2_0,
		top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__passes_aux__process_all_nonimported_procs_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module1)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0);
	MR_init_label8(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0,2,3,5,6,7,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_saved_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 354;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Minimizing variable saves using constants...\n", 47);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0_i11);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module2)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0);
	MR_init_label8(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0,2,3,5,6,7,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_stack_opt'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 355;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Minimizing variable saves using cells...\n", 43);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0_i11);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module3)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__maybe_followcode_6_0);
	MR_init_label8(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0,2,3,5,6,7,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_followcode'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__maybe_followcode_6_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 371;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__maybe_followcode_6_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Migrating branch code...", 26);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_followcode_6_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__maybe_followcode_6_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,2);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_llds_back_end__maybe_followcode_6_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_followcode_6_0_i11);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__maybe_followcode_6_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(ll_backend__liveness__detect_liveness_preds_parallel_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module4)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__compute_liveness_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__compute_liveness_6_0);
	MR_init_label9(top_level__mercury_compile_llds_back_end__compute_liveness_6_0,2,3,4,5,6,7,13,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_liveness'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__compute_liveness_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__compute_liveness_6_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_liveness_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 286;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__compute_liveness_6_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_liveness_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 69;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		top_level__mercury_compile_llds_back_end__compute_liveness_6_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_liveness_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Computing liveness...\n", 24);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__compute_liveness_6_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_liveness_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__compute_liveness_6_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_liveness_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__compute_liveness_6_0_i7);
	}
	if (MR_INT_NE(MR_sv(3),-1)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__compute_liveness_6_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_preds_parallel_2_0,
		top_level__mercury_compile_llds_back_end__compute_liveness_6_0_i13);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_liveness_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_llds_back_end__compute_liveness_6_0_i13);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_liveness_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__compute_liveness_6_0_i15);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_liveness_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__compute_liveness_6_0_i16);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_liveness_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module5)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0);
	MR_init_label8(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0,2,3,5,6,7,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_mark_tail_rec_calls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Marking directly tail recursive calls...", 42);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,4,1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0_i11);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module6)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0);
	MR_init_label5(top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0,2,3,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_stack_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("% Computing stack vars...", 25);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0_i8);
MR_def_label(top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module7)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__allocate_store_map_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__allocate_store_map_6_0);
	MR_init_label5(top_level__mercury_compile_llds_back_end__allocate_store_map_6_0,2,3,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'allocate_store_map'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__allocate_store_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("% Allocating store map...", 25);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__allocate_store_map_6_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__allocate_store_map_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__allocate_store_map_6_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__allocate_store_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_llds_back_end__allocate_store_map_6_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__allocate_store_map_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__allocate_store_map_6_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__allocate_store_map_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__allocate_store_map_6_0_i8);
MR_def_label(top_level__mercury_compile_llds_back_end__allocate_store_map_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__proc_gen__generate_module_code_7_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module8)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0);
	MR_init_label5(top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_llds_code_for_module'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("% Generating code...\n", 21);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__proc_gen__generate_module_code_7_0,
		top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__optimize__optimize_procs_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module9)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0);
	MR_init_label8(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0,2,3,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_optimize_llds'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 441;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Doing optimizations...\n", 25);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__optimize__optimize_procs_4_0,
		top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0_i8);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0_i9);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__continuation_info__maybe_process_llds_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module10)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0);
	MR_init_label5(top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_generate_stack_layouts'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Generating call continuation information...", 45);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__continuation_info__maybe_process_llds_4_0,
		top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__maybe_dump_hlds_7_0);
MR_decl_entry(top_level__mercury_compile_front_end__maybe_simplify_10_0);
MR_decl_entry(fn__parse_tree__error_util__contains_errors_2_0);
MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module11)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0);
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,12,14,15,16,17,18,19,20,21,22)
	MR_init_label4(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'llds_backend_pass_by_phases'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 51;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 310;
	MR_r3 = (MR_Word) MR_string_const("saved_vars_const", 16);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 315;
	MR_r3 = (MR_Word) MR_string_const("saved_vars_cell", 15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i8);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__maybe_followcode_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i9);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 320;
	MR_r3 = (MR_Word) MR_string_const("followcode", 10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 5;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__maybe_simplify_10_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i11);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__158__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("top_level.mercury_compile_llds_back_end", 39);
	MR_r3 = (MR_Word) MR_string_const("predicate \140top_level.mercury_compile_llds_back_end.llds_backend_pass_by_phases\'/9", 81);
	MR_r4 = (MR_Word) MR_string_const("simplify has errors", 19);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i14);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 325;
	MR_r3 = (MR_Word) MR_string_const("ll_backend_simplify", 19);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i15);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__compute_liveness_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i16);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 330;
	MR_r3 = (MR_Word) MR_string_const("liveness", 8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i17);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i18);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 332;
	MR_r3 = (MR_Word) MR_string_const("mark_debug_tailrec_calls", 24);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i19);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__compute_stack_vars_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i20);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 335;
	MR_r3 = (MR_Word) MR_string_const("stackvars", 9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i21);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__allocate_store_map_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i22);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 340;
	MR_r3 = (MR_Word) MR_string_const("store_map", 9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i23);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i24);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i25);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0_i26);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__simplify__find_simplifications_3_0);
MR_decl_entry(fn__check_hlds__simplify__simplifications_to_list_1_0);
MR_decl_entry(fn__bool__or_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_simplification_0;
MR_decl_entry(list__cons_3_0);
MR_decl_entry(fn__list__delete_all_2_0);
MR_decl_entry(fn__check_hlds__simplify__list_to_simplifications_1_0);
MR_decl_entry(hlds__passes_aux__write_proc_progress_message_6_0);
MR_decl_entry(check_hlds__simplify__simplify_proc_7_0);
MR_decl_entry(ll_backend__proc_gen__generate_proc_code_8_0);
MR_decl_entry(ll_backend__optimize__optimize_proc_4_0);
MR_decl_entry(ll_backend__continuation_info__maybe_process_proc_llds_5_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module12)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0);
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,3,4,6,7,5,8,10,11,9,12)
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,14,15,13,16,17,18,19,20,21,25)
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,26,32,36,37,38,39,40,41,43,44)
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,45,42,46,47,48,49,50,51,52,54)
	MR_init_label4(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,55,53,56,57)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'llds_backend_pass_for_proc'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tempr3;
	MR_sv(1) = MR_tempr2;
	MR_sv(9) = MR_r2;
	MR_tempr4 = MR_r5;
	MR_sv(10) = MR_tempr4;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 354;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 355;
	MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__saved_vars__saved_vars_proc_5_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(10) = MR_r2;
	MR_r2 = (MR_Integer) 355;
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i8);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i10);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 371;
	MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i9);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__stack_opt__stack_opt_cell_5_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i11);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(10) = MR_r2;
	MR_r2 = (MR_Integer) 371;
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i14);
	}
	MR_r2 = MR_sv(3);
	MR_sv(11) = MR_sv(9);
	MR_sv(12) = MR_sv(10);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i13);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_in_proc_5_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i15);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 0;
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__find_simplifications_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i16);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__simplify__simplifications_to_list_1_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i17);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 351;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i18);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 181;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i19);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 198;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i20);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 199;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i21);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__or_list_1_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i25);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i26);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i26);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 9;
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(list__cons_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i32);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 9;
	MR_np_call_localret_ent(fn__list__delete_all_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i32);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__simplify__list_to_simplifications_1_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i36);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Simplifying ", 14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i37);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_proc_7_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i38);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% Computing liveness in ", 24);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i39);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_proc_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i40);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i41);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i43);
	}
	MR_r3 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_r1 = (MR_Word) MR_string_const("% Allocating stack slots in ", 28);
	MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i42);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Marking directly tail recursive calls in ", 43);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i44);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i45);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Allocating stack slots in ", 28);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_sv(9) = MR_r4;
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i46);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i47);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Allocating storage locations for live vars in ", 48);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i48);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__store_alloc__allocate_store_maps_5_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i49);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Generating low-level (LLDS) code for ", 39);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i50);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__proc_gen__generate_proc_code_8_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i51);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 441;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i52);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i54);
	}
	MR_r3 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_sv(6), 4);
	MR_r4 = MR_sv(9);
	MR_r1 = (MR_Word) MR_string_const("% Generating call continuation information for ", 47);
	MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i53);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__optimize__optimize_proc_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i55);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_r1, 4);
	MR_r4 = MR_sv(9);
	MR_r1 = (MR_Word) MR_string_const("% Generating call continuation information for ", 47);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r4;
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i56);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__continuation_info__maybe_process_proc_llds_5_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0_i57);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__proc_label__make_proc_label_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module13)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0);
	MR_init_label6(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0,21,4,5,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'llds_backend_pass_for_pred'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0_i21);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_11_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr4 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	}
	MR_np_localcall_lab(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0_i9);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_id_4_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(mdbcomp__program_representation__no_type_info_builtin_3_0);
MR_decl_entry(libs__globals__get_trace_level_2_0);
MR_decl_entry(libs__globals__set_trace_level_none_2_0);
MR_decl_entry(hlds__hlds_module__module_info_set_globals_3_0);
MR_decl_entry(libs__globals__set_trace_level_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
MR_decl_entry(assoc_list__values_2_0);
MR_decl_entry(ll_backend__dupproc__eliminate_duplicate_procs_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module14)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0);
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,74,3,4,5,6,8,10,11,13,14)
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,15,16,17,12,19,20,21,22,24,25)
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,26,27,28,29,30,18,31,32,35,34)
	MR_init_label4(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,36,38,39,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'llds_backend_pass_by_preds_loop_over_preds'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(13);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i74);
	}
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i11);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i13);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Generating code for ", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i14);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i15);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i16);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i17);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i19);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i20);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i21);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__no_type_info_builtin_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i22);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i18);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i24);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(libs__globals__set_trace_level_none_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i25);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_globals_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i26);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i27);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i28);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_trace_level_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i29);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_globals_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i30);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i32);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_10_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i31);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(12) = MR_r1;
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i34);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, c_procedure);
	MR_np_call_localret_ent(assoc_list__values_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i35);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(1) = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i38);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(ll_backend__dupproc__eliminate_duplicate_procs_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i36);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i38);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 51;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i39);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i40);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0_i74);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);
MR_decl_entry(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module15)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0);
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,2,3,4,6,7,8,9,10,12,14)
	MR_init_label1(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'llds_backend_pass_by_preds'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 453;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i8);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i9);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_10_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, c_procedure);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__reverse_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i14);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0_i15);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(fn__ll_backend__global_data__init_static_cell_info_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_ts_rev_string_table_3_0);
MR_decl_entry(ll_backend__global_data__global_data_init_4_0);
MR_decl_entry(ll_backend__proc_gen__add_all_tabling_info_structs_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module16)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0);
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,2,3,4,5,7,8,9,10,11,12)
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,13,14,15,16,17,18,19,20,22,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'llds_backend_pass'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 226;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 439;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__ll_backend__global_data__init_static_cell_info_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i8);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ll_backend__global_data__init_static_cell_info_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i8);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_ts_rev_string_table_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i9);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__global_data__global_data_init_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i11);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 51;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% Mapping args to regs...", 25);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i13);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i14);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__arg_info__generate_arg_info_2_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i15);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i16);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i17);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 305;
	MR_r3 = (MR_Word) MR_string_const("args_to_regs", 12);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i18);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 285;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i19);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__proc_gen__add_all_tabling_info_structs_3_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i20);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_0);
	}
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_0,
		top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0_i24);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_backend_pass_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_foreign_decl_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_foreign_import_module_2_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(hlds__hlds_module__module_info_get_foreign_body_code_2_0);
MR_decl_entry(backend_libs__foreign__filter_decls_4_0);
MR_decl_entry(backend_libs__foreign__filter_imports_4_0);
MR_decl_entry(backend_libs__foreign__filter_bodys_4_0);
MR_decl_entry(backend_libs__export__get_foreign_export_decls_2_0);
MR_decl_entry(backend_libs__export__get_foreign_export_defns_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module17)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0);
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,2,3,4,5,8,9,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'llds_get_c_interface_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_foreign_decl_2_0,
		top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_foreign_import_module_2_0,
		top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_foreign_body_code_2_0,
		top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0_i8);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__foreign__filter_decls_4_0,
		top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0_i9);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__foreign__filter_imports_4_0,
		top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(backend_libs__foreign__filter_bodys_4_0,
		top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0_i11);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(backend_libs__export__get_foreign_export_decls_2_0,
		top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(backend_libs__export__get_foreign_export_defns_2_0,
		top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0_i13);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__foreign__decl_guard_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module18)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__make_decl_guards_3_0);
	MR_init_label7(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0,2,3,4,5,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_decl_guards'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__backend_libs__foreign__decl_guard_1_0,
		top_level__mercury_compile_llds_back_end__make_decl_guards_3_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__make_decl_guards_3_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n#define ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__make_decl_guards_3_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__make_decl_guards_3_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("#ifndef ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__make_decl_guards_3_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		top_level__mercury_compile_llds_back_end__make_decl_guards_3_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		top_level__mercury_compile_llds_back_end__make_decl_guards_3_0_i9);
MR_def_label(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_string_const("\n#endif", 7);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module19)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__get_c_body_code_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__get_c_body_code_2_0);
	MR_init_label3(top_level__mercury_compile_llds_back_end__get_c_body_code_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_c_body_code'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__get_c_body_code_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__get_c_body_code_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(top_level__mercury_compile_llds_back_end__get_c_body_code_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break;
	} /* end while */
MR_def_label(top_level__mercury_compile_llds_back_end__get_c_body_code_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(top_level__mercury_compile_llds_back_end__get_c_body_code_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_string_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module20)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0);
	MR_init_label4(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0,19,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'combine_chunks_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	}
	MR_np_localcall_lab(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0,
		top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module21)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__combine_chunks_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__combine_chunks_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'combine_chunks'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__combine_chunks_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(top_level__mercury_compile_llds_back_end__combine_chunks_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__file_names__module_name_to_file_name_7_0);
MR_decl_entry(ll_backend__transform_llds__transform_llds_3_0);
MR_decl_entry(ll_backend__llds_out__llds_out_file__output_llds_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module22)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__output_llds_file_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__output_llds_file_7_0);
	MR_init_label9(top_level__mercury_compile_llds_back_end__output_llds_file_7_0,2,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_llds_file'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__output_llds_file_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Writing output to \140", 21);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__output_llds_file_7_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__output_llds_file_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(".c", 2);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		top_level__mercury_compile_llds_back_end__output_llds_file_7_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__output_llds_file_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__output_llds_file_7_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__output_llds_file_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\'...", 4);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__output_llds_file_7_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__output_llds_file_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__output_llds_file_7_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__output_llds_file_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__transform_llds__transform_llds_3_0,
		top_level__mercury_compile_llds_back_end__output_llds_file_7_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__output_llds_file_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_file__output_llds_4_0,
		top_level__mercury_compile_llds_back_end__output_llds_file_7_0_i8);
MR_def_label(top_level__mercury_compile_llds_back_end__output_llds_file_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__output_llds_file_7_0_i9);
MR_def_label(top_level__mercury_compile_llds_back_end__output_llds_file_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__output_llds_file_7_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__output_llds_file_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__file_util__maybe_report_stats_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__compile_target_code__get_linked_target_type_2_0);
MR_decl_entry(backend_libs__compile_target_code__get_object_code_type_3_0);
MR_decl_entry(backend_libs__compile_target_code__maybe_pic_object_file_extension_3_0);
MR_decl_entry(backend_libs__compile_target_code__do_compile_c_file_8_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module23)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0);
	MR_init_label5(top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'llds_c_to_obj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(backend_libs__compile_target_code__get_linked_target_type_2_0,
		top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__compile_target_code__get_object_code_type_3_0,
		top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__compile_target_code__maybe_pic_object_file_extension_3_0,
		top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(".c", 2);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(backend_libs__compile_target_code__do_compile_c_file_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__type_ctor_info__generate_rtti_2_0);
MR_decl_entry(backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_0);
MR_decl_entry(backend_libs__type_class_info__generate_type_class_info_rtti_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_data_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(ll_backend__stack_layout__generate_llds_layout_data_26_0);
MR_decl_entry(ll_backend__global_data__global_data_get_all_proc_vars_2_0);
MR_decl_entry(ll_backend__global_data__global_data_get_all_closure_layouts_2_0);
MR_decl_entry(ll_backend__global_data__global_data_get_static_cell_info_2_0);
MR_decl_entry(ll_backend__global_data__get_static_cells_3_0);
MR_decl_entry(ll_backend__global_data__global_data_get_all_alloc_sites_3_0);
MR_decl_entry(ll_backend__global_data__global_data_get_threadscope_string_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_complexity_proc_infos_2_0);
MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__chunk_3_0);
MR_decl_entry(list__map_foldl_5_0);
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(hlds__hlds_module__module_info_user_init_pred_c_names_2_0);
MR_decl_entry(hlds__hlds_module__module_info_user_final_pred_c_names_2_0);
MR_decl_entry(backend_libs__export__produce_header_file_5_0);
MR_decl_entry(io__output_stream_3_0);
MR_decl_entry(hlds__hlds_module__module_get_fact_table_files_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(list__map2_foldl_6_2);
MR_decl_entry(bool__and_list_2_0);
MR_decl_entry(parse_tree__module_cmds__maybe_set_exit_status_3_0);
MR_decl_entry(bool__not_2_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module24)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0);
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,22,23,24,25,26,27,28,33,34,36)
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,37,38,40,41,42,45,46,47,48,49)
	MR_init_label10(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,51,52,53,56,57,58,60,62,63,64)
	MR_init_label1(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'llds_output_pass'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_llds_back_end__llds_output_pass_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(49);
	MR_sv(49) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(37) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 51;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Generating layout data...", 27);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__type_ctor_info__generate_rtti_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(38) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i8);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(35) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 263;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i9);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__type_class_info__generate_type_class_info_rtti_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i10);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(39) = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(39);
	MR_r2 = MR_sv(35);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i11);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(37);
	MR_sv(37) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__stack_layout__generate_llds_layout_data_26_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i12);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(35) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(14) = MR_r9;
	MR_sv(15) = MR_r10;
	MR_sv(16) = MR_r11;
	MR_sv(17) = MR_r12;
	MR_sv(18) = MR_r13;
	MR_sv(19) = MR_r14;
	MR_sv(20) = MR_r15;
	MR_sv(21) = MR_r16;
	MR_sv(22) = MR_r17;
	MR_sv(23) = MR_r18;
	MR_sv(24) = MR_r19;
	MR_sv(25) = MR_r20;
	MR_sv(26) = MR_r21;
	MR_sv(27) = MR_r22;
	MR_sv(28) = MR_r23;
	MR_sv(29) = MR_r24;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i13);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i14);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i15);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(35);
	MR_np_call_localret_ent(ll_backend__global_data__global_data_get_all_proc_vars_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i16);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_r1 = MR_sv(35);
	MR_np_call_localret_ent(ll_backend__global_data__global_data_get_all_closure_layouts_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i17);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(32) = MR_r1;
	MR_r1 = MR_sv(35);
	MR_np_call_localret_ent(ll_backend__global_data__global_data_get_static_cell_info_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i18);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__global_data__get_static_cells_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i19);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(33) = MR_r1;
	MR_sv(34) = MR_r2;
	MR_r1 = MR_sv(35);
	MR_np_call_localret_ent(ll_backend__global_data__global_data_get_all_alloc_sites_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i20);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(35);
	MR_sv(35) = MR_r1;
	MR_sv(36) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__global_data__global_data_get_threadscope_string_table_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i21);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(37);
	MR_sv(37) = MR_r1;
	MR_r1 = MR_sv(39);
	MR_r2 = MR_sv(38);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i22);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(38) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_complexity_proc_infos_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i23);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(39) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(30);
	MR_sv(40) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(41) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(42) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(43) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(44) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_sv(40);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i24);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_module", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i25);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(43);
	MR_sv(43) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__get_c_body_code_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i26);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(45) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 461;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i27);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(43);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(4);
	MR_r5 = MR_sv(42);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i36);
	}
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, c_procedure);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__chunk_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i33);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(43);
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__combine_chunks_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i34);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r5 = MR_sv(42);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	}
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(47) = MR_r2;
	MR_sv(48) = MR_r3;
	MR_np_call_localret_ent(list__map_foldl_5_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i37);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(41);
	MR_sv(41) = MR_r1;
	MR_r1 = MR_sv(47);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i38);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(47);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i40);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(42) = MR_r1;
	MR_sv(43) = MR_r2;
	MR_r1 = MR_sv(40);
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__make_decl_guards_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i41);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(41);
	MR_sv(41) = MR_r1;
	MR_sv(46) = MR_r2;
	MR_r1 = MR_sv(47);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i42);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(41);
	MR_tfield(1, MR_r2, 1) = MR_sv(43);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(46);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(41) = MR_r1;
	MR_r1 = MR_sv(47);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i45);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(47);
	MR_r2 = MR_sv(42);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i46);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(47);
	MR_r2 = MR_sv(41);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i47);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(41) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_user_init_pred_c_names_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i48);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(42) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_user_final_pred_c_names_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i49);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 39);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(40);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(41);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(45);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(44);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(31);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(33);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(34);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(38);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 14) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 15) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 16) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 17) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 18) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 19) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 20) = MR_sv(19);
	MR_tfield(0, MR_tempr1, 21) = MR_sv(20);
	MR_tfield(0, MR_tempr1, 22) = MR_sv(21);
	MR_tfield(0, MR_tempr1, 23) = MR_sv(22);
	MR_tfield(0, MR_tempr1, 24) = MR_sv(23);
	MR_tfield(0, MR_tempr1, 25) = MR_sv(37);
	MR_tfield(0, MR_tempr1, 26) = MR_sv(24);
	MR_tfield(0, MR_tempr1, 27) = MR_sv(25);
	MR_tfield(0, MR_tempr1, 28) = MR_sv(26);
	MR_tfield(0, MR_tempr1, 29) = MR_sv(27);
	MR_tfield(0, MR_tempr1, 30) = MR_sv(28);
	MR_tfield(0, MR_tempr1, 31) = MR_sv(29);
	MR_tfield(0, MR_tempr1, 32) = MR_sv(32);
	MR_tfield(0, MR_tempr1, 33) = MR_sv(35);
	MR_tfield(0, MR_tempr1, 34) = MR_sv(36);
	MR_tfield(0, MR_tempr1, 35) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 36) = MR_sv(42);
	MR_tfield(0, MR_tempr1, 37) = MR_r1;
	MR_tfield(0, MR_tempr1, 38) = MR_sv(39);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__output_llds_file_7_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i51);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(30), 4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__export__produce_header_file_5_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i52);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 93;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i53);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i55);
	}
	MR_np_call_localret_ent(io__output_stream_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i56);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(37) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(37);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i57);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_get_fact_table_files_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i58);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(37);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_sv(48);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map2_foldl_6_2,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i60);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__and_list_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i62);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(37) = MR_r1;
	MR_np_call_localret_ent(parse_tree__module_cmds__maybe_set_exit_status_3_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i63);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(37);
	MR_np_call_localret_ent(bool__not_2_0,
		top_level__mercury_compile_llds_back_end__llds_output_pass_8_0_i64);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(49);
MR_def_label(top_level__mercury_compile_llds_back_end__llds_output_pass_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(49);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module25)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_decl_code_is_local'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__file_names__module_name_to_search_file_name_6_0);
MR_decl_entry(require__sorry_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module26)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0);
	MR_init_label7(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0,4,5,6,3,8,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_foreign_import_header_code'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = (MR_Word) MR_string_const(".mh", 3);
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_search_file_name_6_0,
		top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\"\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("#include \"", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("top_level.mercury_compile_llds_back_end", 39);
	MR_r2 = (MR_Word) MR_string_const("predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", 85);
	MR_r3 = (MR_Word) MR_string_const(":- import_module not yet implemented: \140:- pragma foreign_import_module\' for C#", 78);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,4)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("top_level.mercury_compile_llds_back_end", 39);
	MR_r2 = (MR_Word) MR_string_const("predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", 85);
	MR_r3 = (MR_Word) MR_string_const(":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Erlang", 82);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("top_level.mercury_compile_llds_back_end", 39);
	MR_r2 = (MR_Word) MR_string_const("predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", 85);
	MR_r3 = (MR_Word) MR_string_const(":- import_module not yet implemented: \140:- pragma foreign_import_module\' for IL", 78);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("top_level.mercury_compile_llds_back_end", 39);
	MR_r2 = (MR_Word) MR_string_const("predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", 85);
	MR_r3 = (MR_Word) MR_string_const(":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Java", 80);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module27)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0);
	MR_init_label6(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compile_fact_table_file'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(backend_libs__compile_target_code__get_linked_target_type_2_0,
		top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0_i2);
MR_def_label(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__compile_target_code__get_object_code_type_3_0,
		top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0_i3);
MR_def_label(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__compile_target_code__maybe_pic_object_file_extension_3_0,
		top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0_i4);
MR_def_label(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const(".c", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0_i5);
MR_def_label(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0_i6);
MR_def_label(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__compile_target_code__do_compile_c_file_8_0,
		top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0_i7);
MR_def_label(top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_llds_back_end_module28)
	MR_init_entry1(top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__158__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__158__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__llds_backend_pass_by_phases__158__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__158__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__top_level__mercury_compile_llds_back_end_maybe_bunch_0(void)
{
	top_level__mercury_compile_llds_back_end_module0();
	top_level__mercury_compile_llds_back_end_module1();
	top_level__mercury_compile_llds_back_end_module2();
	top_level__mercury_compile_llds_back_end_module3();
	top_level__mercury_compile_llds_back_end_module4();
	top_level__mercury_compile_llds_back_end_module5();
	top_level__mercury_compile_llds_back_end_module6();
	top_level__mercury_compile_llds_back_end_module7();
	top_level__mercury_compile_llds_back_end_module8();
	top_level__mercury_compile_llds_back_end_module9();
	top_level__mercury_compile_llds_back_end_module10();
	top_level__mercury_compile_llds_back_end_module11();
	top_level__mercury_compile_llds_back_end_module12();
	top_level__mercury_compile_llds_back_end_module13();
	top_level__mercury_compile_llds_back_end_module14();
	top_level__mercury_compile_llds_back_end_module15();
	top_level__mercury_compile_llds_back_end_module16();
	top_level__mercury_compile_llds_back_end_module17();
	top_level__mercury_compile_llds_back_end_module18();
	top_level__mercury_compile_llds_back_end_module19();
	top_level__mercury_compile_llds_back_end_module20();
	top_level__mercury_compile_llds_back_end_module21();
	top_level__mercury_compile_llds_back_end_module22();
	top_level__mercury_compile_llds_back_end_module23();
	top_level__mercury_compile_llds_back_end_module24();
	top_level__mercury_compile_llds_back_end_module25();
	top_level__mercury_compile_llds_back_end_module26();
	top_level__mercury_compile_llds_back_end_module27();
	top_level__mercury_compile_llds_back_end_module28();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__top_level__mercury_compile_llds_back_end__init(void);
void mercury__top_level__mercury_compile_llds_back_end__init_type_tables(void);
void mercury__top_level__mercury_compile_llds_back_end__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__top_level__mercury_compile_llds_back_end__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__top_level__mercury_compile_llds_back_end__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__top_level__mercury_compile_llds_back_end__init_threadscope_string_table(void);
#endif

void mercury__top_level__mercury_compile_llds_back_end__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__top_level__mercury_compile_llds_back_end_maybe_bunch_0();
	mercury__top_level__mercury_compile_llds_back_end__init_debugger();
}

void mercury__top_level__mercury_compile_llds_back_end__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__top_level__mercury_compile_llds_back_end__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__top_level__mercury_compile_llds_back_end__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__top_level__mercury_compile_llds_back_end);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__top_level__mercury_compile_llds_back_end__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__top_level__mercury_compile_llds_back_end__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
