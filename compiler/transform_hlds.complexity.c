/*
** Automatically generated from `complexity.m'
** by the Mercury compiler,
** version rotd-2011-09-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__complexity__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.complexity.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.complexity.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.complexity.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.complexity.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.complexity.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.complexity.c"
#line 49 "transform_hlds.complexity.c"
#include "transform_hlds.complexity.mh"

#line 52 "transform_hlds.complexity.c"
#line 53 "transform_hlds.complexity.c"
#ifndef TRANSFORM_HLDS__COMPLEXITY_DECL_GUARD
#define TRANSFORM_HLDS__COMPLEXITY_DECL_GUARD

#line 57 "transform_hlds.complexity.c"
#line 58 "transform_hlds.complexity.c"

#endif
#line 61 "transform_hlds.complexity.c"

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
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label4(transform_hlds__complexity__allocate_slot_numbers_cl_3_0, 23,3,6,5)
MR_decl_label10(transform_hlds__complexity__classify_args_6_0, 3,9,11,10,14,17,20,23,22,16)
MR_decl_label1(transform_hlds__complexity__classify_args_6_0, 8)
MR_decl_label4(transform_hlds__complexity__complexity_generate_foreign_proc_9_0, 2,3,4,5)
MR_decl_label10(transform_hlds__complexity__complexity_process_proc_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__complexity__complexity_process_proc_8_0, 12,13,14,15,16,19,20,21,24,26)
MR_decl_label10(transform_hlds__complexity__complexity_process_proc_8_0, 29,31,32,33,34,35,36,37,38,39)
MR_decl_label10(transform_hlds__complexity__complexity_process_proc_8_0, 40,41,42,43,46,47,48,49,50,51)
MR_decl_label10(transform_hlds__complexity__complexity_process_proc_8_0, 52,53,55,56,57,58,59,60,61,62)
MR_decl_label10(transform_hlds__complexity__complexity_process_proc_8_0, 63,64,65,66,67,68,69,70,71,76)
MR_decl_label10(transform_hlds__complexity__complexity_process_proc_8_0, 73,80,82,83,84,98,79,110,113,125)
MR_decl_label5(transform_hlds__complexity__complexity_process_proc_8_0, 130,132,133,135,137)
MR_decl_label8(transform_hlds__complexity__complexity_process_proc_msg_7_0, 2,4,6,7,8,10,11,3)
MR_decl_label6(transform_hlds__complexity__generate_new_var_5_0, 2,3,4,6,7,8)
MR_decl_label10(transform_hlds__complexity__generate_size_goal_14_0, 2,4,5,6,7,8,9,10,11,12)
MR_decl_label10(transform_hlds__complexity__generate_size_goal_14_0, 16,22,23,24,25,26,27,28,29,30)
MR_decl_label8(transform_hlds__complexity__generate_size_goal_14_0, 31,32,33,34,35,36,37,38)
MR_decl_label6(transform_hlds__complexity__generate_size_goals_13_0, 19,4,5,6,7,8)
MR_decl_label10(transform_hlds__complexity__generate_slot_goals_12_0, 2,3,4,5,7,8,9,10,11,14)
MR_decl_label10(transform_hlds__complexity__generate_slot_goals_12_0, 16,17,18,19,20,21,22,23,24,25)
MR_decl_label5(transform_hlds__complexity__generate_slot_goals_12_0, 27,28,29,31,33)
MR_decl_label5(transform_hlds__complexity__make_type_info_var_9_0, 2,3,4,5,7)
MR_decl_label6(transform_hlds__complexity__read_spec_file_4_0, 2,5,4,7,8,10)
MR_decl_label9(transform_hlds__complexity__read_spec_file_lines_8_0, 37,2,4,5,9,10,12,11,15)
MR_decl_label8(fn__transform_hlds__complexity__complexity_proc_name_3_0, 2,3,4,6,8,9,10,11)
MR_decl_label1(fn__transform_hlds__complexity__is_active_type_0_0, 2)
MR_decl_label3(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0, 2,4,3)
MR_decl_static(transform_hlds__complexity__read_spec_file_lines_8_0)
MR_def_extern_entry(transform_hlds__complexity__read_spec_file_4_0)
MR_def_extern_entry(fn__transform_hlds__complexity__complexity_proc_name_3_0)
MR_def_extern_entry(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0)
MR_decl_static(fn__transform_hlds__complexity__slot_var_name_0_0)
MR_decl_static(transform_hlds__complexity__make_type_info_var_9_0)
MR_decl_static(transform_hlds__complexity__generate_size_goal_14_0)
MR_decl_static(transform_hlds__complexity__generate_size_goals_13_0)
MR_decl_static(transform_hlds__complexity__generate_new_var_5_0)
MR_decl_static(transform_hlds__complexity__complexity_generate_foreign_proc_9_0)
MR_decl_static(transform_hlds__complexity__generate_slot_goals_12_0)
MR_decl_static(transform_hlds__complexity__classify_args_6_0)
MR_decl_static(transform_hlds__complexity__allocate_slot_numbers_cl_3_0)
MR_decl_static(fn__transform_hlds__complexity__is_active_type_0_0)
MR_decl_static(transform_hlds__complexity__complexity_process_proc_8_0)
MR_def_extern_entry(transform_hlds__complexity__complexity_process_proc_msg_7_0)
MR_decl_static(transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__128__1_2_0)
MR_decl_static(transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__579__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__complexity__read_spec_file_lines_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__complexity__make_type_info_var_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__complexity__read_spec_file_lines_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__complexity__make_type_info_var_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__128__1_2_0),
1,
10
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,2,0),
MR_INT_CTOR_ADDR
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__complexity__make_type_info_var_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.complexity",
"transform_hlds.complexity",
"lambda_complexity_m_579",
2,
0
},
"transform_hlds.complexity",
"complexity.m",
579,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__complexity__read_spec_file_lines_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.complexity",
"transform_hlds.complexity",
"lambda_complexity_m_128",
2,
0
},
"transform_hlds.complexity",
"complexity.m",
128,
"27"
};


MR_decl_entry(io__read_line_4_0);
MR_decl_entry(fn__io__error_message_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__filter_4_0);
MR_decl_entry(string__from_char_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(map__insert_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module0)
	MR_init_entry1(transform_hlds__complexity__read_spec_file_lines_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__read_spec_file_lines_8_0);
	MR_init_label9(transform_hlds__complexity__read_spec_file_lines_8_0,37,2,4,5,9,10,12,11,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_spec_file_lines'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__read_spec_file_lines_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__complexity__read_spec_file_lines_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(io__read_line_4_0,
		transform_hlds__complexity__read_spec_file_lines_8_0_i2);
MR_def_label(transform_hlds__complexity__read_spec_file_lines_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__complexity__read_spec_file_lines_8_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__complexity__read_spec_file_lines_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__complexity__read_spec_file_lines_8_0_i5);
	}
	MR_sv(2) = MR_sv(1);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		transform_hlds__complexity__read_spec_file_lines_8_0_i15);
MR_def_label(transform_hlds__complexity__read_spec_file_lines_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		transform_hlds__complexity__read_spec_file_lines_8_0_i9);
MR_def_label(transform_hlds__complexity__read_spec_file_lines_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		transform_hlds__complexity__read_spec_file_lines_8_0_i10);
MR_def_label(transform_hlds__complexity__read_spec_file_lines_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(map__insert_4_0,
		transform_hlds__complexity__read_spec_file_lines_8_0_i12);
MR_def_label(transform_hlds__complexity__read_spec_file_lines_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__complexity__read_spec_file_lines_8_0_i11);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__complexity__read_spec_file_lines_8_0_i37);
	}
MR_def_label(transform_hlds__complexity__read_spec_file_lines_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("repeated line: ", 15);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__read_spec_file_lines_8_0_i15);
MR_def_label(transform_hlds__complexity__read_spec_file_lines_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_input_4_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module1)
	MR_init_entry1(transform_hlds__complexity__read_spec_file_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__read_spec_file_4_0);
	MR_init_label6(transform_hlds__complexity__read_spec_file_4_0,2,5,4,7,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_spec_file'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__complexity__read_spec_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__open_input_4_0,
		transform_hlds__complexity__read_spec_file_4_0_i2);
MR_def_label(transform_hlds__complexity__read_spec_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__complexity__read_spec_file_4_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		transform_hlds__complexity__read_spec_file_4_0_i5);
MR_def_label(transform_hlds__complexity__read_spec_file_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__complexity__read_spec_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__complexity__read_spec_file_4_0_i7);
MR_def_label(transform_hlds__complexity__read_spec_file_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__complexity__read_spec_file_lines_8_0,
		transform_hlds__complexity__read_spec_file_4_0_i8);
MR_def_label(transform_hlds__complexity__read_spec_file_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__complexity__read_spec_file_4_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__complexity__read_spec_file_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module2)
	MR_init_entry1(fn__transform_hlds__complexity__complexity_proc_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__complexity__complexity_proc_name_3_0);
	MR_init_label8(fn__transform_hlds__complexity__complexity_proc_name_3_0,2,3,4,6,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'complexity_proc_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__complexity__complexity_proc_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		fn__transform_hlds__complexity__complexity_proc_name_3_0_i2);
MR_def_label(fn__transform_hlds__complexity__complexity_proc_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__transform_hlds__complexity__complexity_proc_name_3_0_i3);
MR_def_label(fn__transform_hlds__complexity__complexity_proc_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__transform_hlds__complexity__complexity_proc_name_3_0_i4);
MR_def_label(fn__transform_hlds__complexity__complexity_proc_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		fn__transform_hlds__complexity__complexity_proc_name_3_0_i6);
MR_def_label(fn__transform_hlds__complexity__complexity_proc_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0,
		fn__transform_hlds__complexity__complexity_proc_name_3_0_i8);
MR_def_label(fn__transform_hlds__complexity__complexity_proc_name_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__transform_hlds__complexity__complexity_proc_name_3_0_i9);
MR_def_label(fn__transform_hlds__complexity__complexity_proc_name_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__transform_hlds__complexity__complexity_proc_name_3_0_i10);
MR_def_label(fn__transform_hlds__complexity__complexity_proc_name_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__transform_hlds__complexity__complexity_proc_name_3_0_i11);
MR_def_label(fn__transform_hlds__complexity__complexity_proc_name_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module3)
	MR_init_entry1(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0);
	MR_init_label3(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0,2,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_in_complexity_proc_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__transform_hlds__complexity__complexity_proc_name_3_0,
		fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0_i2);
MR_def_label(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0_i4);
MR_def_label(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__transform_hlds__complexity__is_in_complexity_proc_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__complexity_module4)
	MR_init_entry1(fn__transform_hlds__complexity__slot_var_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__complexity__slot_var_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'slot_var_name'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__complexity__slot_var_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("SlotVar", 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__polymorphism__create_poly_info_4_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0);
MR_decl_entry(check_hlds__polymorphism__poly_info_extract_6_0);
MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module5)
	MR_init_entry1(transform_hlds__complexity__make_type_info_var_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__make_type_info_var_9_0);
	MR_init_label5(transform_hlds__complexity__make_type_info_var_9_0,2,3,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_type_info_var'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__make_type_info_var_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__complexity__make_type_info_var_9_0_i2);
MR_def_label(transform_hlds__complexity__make_type_info_var_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		transform_hlds__complexity__make_type_info_var_9_0_i3);
MR_def_label(transform_hlds__complexity__make_type_info_var_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		transform_hlds__complexity__make_type_info_var_9_0_i4);
MR_def_label(transform_hlds__complexity__make_type_info_var_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		transform_hlds__complexity__make_type_info_var_9_0_i5);
MR_def_label(transform_hlds__complexity__make_type_info_var_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__579__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("transform_hlds.complexity", 25);
	MR_r3 = (MR_Word) MR_string_const("predicate \140transform_hlds.complexity.make_type_info_var\'/9", 58);
	MR_r4 = (MR_Word) MR_string_const("modified pred_info", 18);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		transform_hlds__complexity__make_type_info_var_9_0_i7);
MR_def_label(transform_hlds__complexity__make_type_info_var_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module6)
	MR_init_entry1(transform_hlds__complexity__generate_size_goal_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__generate_size_goal_14_0);
	MR_init_label10(transform_hlds__complexity__generate_size_goal_14_0,2,4,5,6,7,8,9,10,11,12)
	MR_init_label10(transform_hlds__complexity__generate_size_goal_14_0,16,22,23,24,25,26,27,28,29,30)
	MR_init_label8(transform_hlds__complexity__generate_size_goal_14_0,31,32,33,34,35,36,37,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_size_goal'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__generate_size_goal_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(10) = MR_tempr1;
	MR_sv(12) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i2);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__complexity__generate_size_goal_14_0_i4);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__complexity__make_type_info_var_9_0,
		transform_hlds__complexity__generate_size_goal_14_0_i5);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i6);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__complexity__generate_size_goal_14_0_i7);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__complexity__generate_size_goal_14_0_i8);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("arg", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i9);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__complexity__generate_size_goal_14_0_i10);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("input_typeinfo", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i11);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__complexity__generate_size_goal_14_0_i12);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__complexity__generate_size_goal_14_0_i16);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(12);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__complexity__generate_size_goal_14_0_i22);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__complexity__generate_size_goal_14_0_i23);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("));\n", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i24);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i25);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i26);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_term_size((MR_TypeInfo) ", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i27);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i28);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i29);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i30);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i31);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i32);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i33);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i34);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i35);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i36);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_complexity_fill_size_slot", 28);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i37);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goal_14_0_i38);
MR_def_label(transform_hlds__complexity__generate_size_goal_14_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

MR_BEGIN_MODULE(transform_hlds__complexity_module7)
	MR_init_entry1(transform_hlds__complexity__generate_size_goals_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__generate_size_goals_13_0);
	MR_init_label6(transform_hlds__complexity__generate_size_goals_13_0,19,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_size_goals'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__generate_size_goals_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__complexity__generate_size_goals_13_0_i19);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(transform_hlds__complexity__generate_size_goals_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_sv(5);
	MR_tempr2 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__complexity__generate_size_goal_14_0,
		transform_hlds__complexity__generate_size_goals_13_0_i4);
MR_def_label(transform_hlds__complexity__generate_size_goals_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = MR_r5;
	MR_tempr4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr5 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	}
	MR_np_localcall_lab(transform_hlds__complexity__generate_size_goals_13_0,
		transform_hlds__complexity__generate_size_goals_13_0_i5);
MR_def_label(transform_hlds__complexity__generate_size_goals_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goals_13_0_i6);
MR_def_label(transform_hlds__complexity__generate_size_goals_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goals_13_0_i7);
MR_def_label(transform_hlds__complexity__generate_size_goals_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_size_goals_13_0_i8);
MR_def_label(transform_hlds__complexity__generate_size_goals_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module8)
	MR_init_entry1(transform_hlds__complexity__generate_new_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__generate_new_var_5_0);
	MR_init_label6(transform_hlds__complexity__generate_new_var_5_0,2,3,4,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_new_var'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__generate_new_var_5_0)
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
		transform_hlds__complexity__generate_new_var_5_0_i2);
MR_def_label(transform_hlds__complexity__generate_new_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__complexity__generate_new_var_5_0_i3);
MR_def_label(transform_hlds__complexity__generate_new_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		transform_hlds__complexity__generate_new_var_5_0_i4);
MR_def_label(transform_hlds__complexity__generate_new_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__complexity__generate_new_var_5_0_i6);
MR_def_label(transform_hlds__complexity__generate_new_var_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__complexity__generate_new_var_5_0_i7);
MR_def_label(transform_hlds__complexity__generate_new_var_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__complexity__generate_new_var_5_0_i8);
MR_def_label(transform_hlds__complexity__generate_new_var_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0);
MR_decl_entry(fn__parse_tree__prog_data__default_attributes_1_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mercury_3_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_vars_1_0);
MR_decl_entry(hlds__goal_util__generate_foreign_proc_16_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module9)
	MR_init_entry1(transform_hlds__complexity__complexity_generate_foreign_proc_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__complexity_generate_foreign_proc_9_0);
	MR_init_label4(transform_hlds__complexity__complexity_generate_foreign_proc_9_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'complexity_generate_foreign_proc'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__complexity_generate_foreign_proc_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0,
		transform_hlds__complexity__complexity_generate_foreign_proc_9_0_i2);
MR_def_label(transform_hlds__complexity__complexity_generate_foreign_proc_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		transform_hlds__complexity__complexity_generate_foreign_proc_9_0_i3);
MR_def_label(transform_hlds__complexity__complexity_generate_foreign_proc_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		transform_hlds__complexity__complexity_generate_foreign_proc_9_0_i4);
MR_def_label(transform_hlds__complexity__complexity_generate_foreign_proc_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_vars_1_0,
		transform_hlds__complexity__complexity_generate_foreign_proc_9_0_i5);
MR_def_label(transform_hlds__complexity__complexity_generate_foreign_proc_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_sv(5);
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = MR_tempr1;
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__goal_util__generate_foreign_proc_16_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__int_type_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__complexity_module10)
	MR_init_entry1(transform_hlds__complexity__generate_slot_goals_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__generate_slot_goals_12_0);
	MR_init_label10(transform_hlds__complexity__generate_slot_goals_12_0,2,3,4,5,7,8,9,10,11,14)
	MR_init_label10(transform_hlds__complexity__generate_slot_goals_12_0,16,17,18,19,20,21,22,23,24,25)
	MR_init_label5(transform_hlds__complexity__generate_slot_goals_12_0,27,28,29,31,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_slot_goals'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__generate_slot_goals_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(10) = MR_r7;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i2);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i3);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i4);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("SlotVar", 7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i5);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i7);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i8);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i9);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_string_const("proc", 4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_string_const("SlotVar", 7);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__complexity__generate_size_goals_13_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i10);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i11);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_string_const("SlotVar", 7);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(10), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(10), 0) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i14);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_tfield(0, MR_r2, 1) = MR_sv(10);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = (MR_Integer) 0;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i16);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(", SlotVar);\n", 12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i17);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i18);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complexity_call_proc", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i19);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i20);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i21);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("];\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i22);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = &MR_complexity_procs[", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i23);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i24);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i25);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i27);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i28);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_ComplexityProc *proc;\n", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i29);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complexity_call_proc", 20);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__complexity__complexity_generate_foreign_proc_9_0,
		transform_hlds__complexity__generate_slot_goals_12_0_i31);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__complexity__generate_slot_goals_12_0_i33);
MR_def_label(transform_hlds__complexity__generate_slot_goals_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_string_const("SlotVar", 7);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(check_hlds__mode_util__mode_is_fully_input_2_0);
MR_decl_entry(transform_hlds__term_norm__zero_size_type_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module11)
	MR_init_entry1(transform_hlds__complexity__classify_args_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__classify_args_6_0);
	MR_init_label10(transform_hlds__complexity__classify_args_6_0,3,9,11,10,14,17,20,23,22,16)
	MR_init_label1(transform_hlds__complexity__classify_args_6_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'classify_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__classify_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__complexity__classify_args_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__complexity__classify_args_6_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__complexity__classify_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__complexity__classify_args_6_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(transform_hlds__complexity__classify_args_6_0,
		transform_hlds__complexity__classify_args_6_0_i9);
MR_def_label(transform_hlds__complexity__classify_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(varset__search_name_3_0,
		transform_hlds__complexity__classify_args_6_0_i11);
MR_def_label(transform_hlds__complexity__classify_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__complexity__classify_args_6_0_i10);
	}
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__complexity__classify_args_6_0_i14);
MR_def_label(transform_hlds__complexity__classify_args_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(transform_hlds__complexity__classify_args_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		transform_hlds__complexity__classify_args_6_0_i17);
MR_def_label(transform_hlds__complexity__classify_args_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__complexity__classify_args_6_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__complexity__classify_args_6_0_i20);
MR_def_label(transform_hlds__complexity__classify_args_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__zero_size_type_2_0,
		transform_hlds__complexity__classify_args_6_0_i23);
MR_def_label(transform_hlds__complexity__classify_args_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__complexity__classify_args_6_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__complexity__classify_args_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__complexity__classify_args_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__complexity__classify_args_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.complexity", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.complexity.classify_args\'/6", 53);
	MR_r3 = (MR_Word) MR_string_const("lists not same length", 21);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__complexity_module12)
	MR_init_entry1(transform_hlds__complexity__allocate_slot_numbers_cl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__allocate_slot_numbers_cl_3_0);
	MR_init_label4(transform_hlds__complexity__allocate_slot_numbers_cl_3_0,23,3,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'allocate_slot_numbers_cl'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__allocate_slot_numbers_cl_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__complexity__allocate_slot_numbers_cl_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__complexity__allocate_slot_numbers_cl_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__complexity__allocate_slot_numbers_cl_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 1), 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__complexity__allocate_slot_numbers_cl_3_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(transform_hlds__complexity__allocate_slot_numbers_cl_3_0,
		transform_hlds__complexity__allocate_slot_numbers_cl_3_0_i6);
MR_def_label(transform_hlds__complexity__allocate_slot_numbers_cl_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__complexity__allocate_slot_numbers_cl_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__complexity__allocate_slot_numbers_cl_3_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__construct_type_3_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module13)
	MR_init_entry1(fn__transform_hlds__complexity__is_active_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__complexity__is_active_type_0_0);
	MR_init_label1(fn__transform_hlds__complexity__is_active_type_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_active_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__complexity__is_active_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0,
		fn__transform_hlds__complexity__is_active_type_0_0_i2);
MR_def_label(fn__transform_hlds__complexity__is_active_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("complexity_is_active", 20);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(parse_tree__prog_type__construct_type_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(parse_tree__set_of_var__list_to_set_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_init_reachable_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__make_singleton_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_6_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_complexity_arg_info_0;
MR_decl_entry(assoc_list__values_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_complexity_proc_infos_2_0);
MR_decl_entry(hlds__hlds_module__module_info_set_complexity_proc_infos_3_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module14)
	MR_init_entry1(transform_hlds__complexity__complexity_process_proc_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__complexity_process_proc_8_0);
	MR_init_label10(transform_hlds__complexity__complexity_process_proc_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__complexity__complexity_process_proc_8_0,12,13,14,15,16,19,20,21,24,26)
	MR_init_label10(transform_hlds__complexity__complexity_process_proc_8_0,29,31,32,33,34,35,36,37,38,39)
	MR_init_label10(transform_hlds__complexity__complexity_process_proc_8_0,40,41,42,43,46,47,48,49,50,51)
	MR_init_label10(transform_hlds__complexity__complexity_process_proc_8_0,52,53,55,56,57,58,59,60,61,62)
	MR_init_label10(transform_hlds__complexity__complexity_process_proc_8_0,63,64,65,66,67,68,69,70,71,76)
	MR_init_label10(transform_hlds__complexity__complexity_process_proc_8_0,73,80,82,83,84,98,79,110,113,125)
	MR_init_label5(transform_hlds__complexity__complexity_process_proc_8_0,130,132,133,135,137)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'complexity_process_proc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__complexity_process_proc_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(16) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(13) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(12) = MR_tempr1;
	MR_sv(15) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i2);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i3);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i4);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i5);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i6);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i7);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i8);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__set_of_var__list_to_set_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i9);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_sv(4), 1);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i10);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i11);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i12);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__complexity__is_active_type_0_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i13);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("IsActive", 8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__complexity__generate_new_var_5_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i14);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_tempr2 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__complexity__classify_args_6_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i15);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__complexity__allocate_slot_numbers_cl_3_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i16);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(22) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i19);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(15);
	}
	MR_np_call_localret_ent(transform_hlds__complexity__generate_slot_goals_12_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i20);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i21);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_string_const("IsActive", 8);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(15), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(15), 0) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__complexity__is_active_type_0_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i24);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_tfield(0, MR_r2, 1) = MR_sv(15);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = (MR_Integer) 0;
	MR_sv(15) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i26);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(14);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(14), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(14), 0) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i29);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(11);
	MR_tfield(0, MR_r2, 1) = MR_sv(14);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = (MR_Integer) 0;
	MR_sv(14) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i31);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i32);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i33);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(", IsActive);\n", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i34);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i35);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i36);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", \"", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i37);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i38);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i39);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i40);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i41);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complexity_is_active", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i42);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i43);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complexity_is_active", 20);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr3;
	MR_r7 = MR_sv(19);
	MR_r8 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__complexity__complexity_generate_foreign_proc_9_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i46);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__complexity__slot_var_name_0_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i47);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i48);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i49);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i50);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i51);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complexity_exit_proc", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i52);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i53);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(20) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complexity_exit_proc", 20);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(19);
	MR_r8 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__complexity__complexity_generate_foreign_proc_9_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i55);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__complexity__slot_var_name_0_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i56);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i57);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i58);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i59);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i60);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complexity_fail_proc", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i61);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i62);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complexity_fail_proc", 20);
	MR_r2 = (MR_Integer) 7;
	MR_r3 = MR_sv(20);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(19);
	MR_r8 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__complexity__complexity_generate_foreign_proc_9_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i63);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__complexity__slot_var_name_0_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i64);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i65);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i66);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i67);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i68);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complexity_redo_proc", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i69);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i70);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complexity_redo_proc", 20);
	MR_r2 = (MR_Integer) 7;
	MR_r3 = MR_sv(20);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(19);
	MR_r8 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__complexity__complexity_generate_foreign_proc_9_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i71);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(17),0)) {
		MR_GOTO_LAB(transform_hlds__complexity__complexity_process_proc_8_0_i73);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i76);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(16) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i113);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(17),2)) {
		MR_GOTO_LAB(transform_hlds__complexity__complexity_process_proc_8_0_i79);
	}
	MR_sv(16) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 6;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i80);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(16);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i82);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i83);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(17);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = (MR_Integer) 2;
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i84);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tempr6 = MR_sv(8);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i98);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(16) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i113);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tempr6 = MR_sv(8);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i110);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(16) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i113);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("complexity_is_active", 20);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_string_const("is_inactive", 11);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr5, 2) = MR_sv(16);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_r1;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_string_const("is_active", 9);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr6;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 4);
	MR_sv(16) = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr7, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr7, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr7, 3) = MR_tempr2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 2;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i125);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_sv(16) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 2;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i130);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i132);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, complexity_arg_info);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(assoc_list__values_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i133);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(16) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(19);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_complexity_proc_infos_2_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i135);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(19);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_complexity_proc_infos_3_0,
		transform_hlds__complexity__complexity_process_proc_8_0_i137);
MR_def_label(transform_hlds__complexity__complexity_process_proc_8_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__passes_aux__write_proc_progress_message_6_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module15)
	MR_init_entry1(transform_hlds__complexity__complexity_process_proc_msg_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__complexity_process_proc_msg_7_0);
	MR_init_label8(transform_hlds__complexity__complexity_process_proc_msg_7_0,2,4,6,7,8,10,11,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'complexity_process_proc_msg'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__complexity__complexity_process_proc_msg_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__complexity__complexity_proc_name_3_0,
		transform_hlds__complexity__complexity_process_proc_msg_7_0_i2);
MR_def_label(transform_hlds__complexity__complexity_process_proc_msg_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__complexity__complexity_process_proc_msg_7_0_i4);
MR_def_label(transform_hlds__complexity__complexity_process_proc_msg_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__complexity__complexity_process_proc_msg_7_0_i3);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__complexity__complexity_proc_name_3_0,
		transform_hlds__complexity__complexity_process_proc_msg_7_0_i6);
MR_def_label(transform_hlds__complexity__complexity_process_proc_msg_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__complexity__complexity_process_proc_msg_7_0_i7);
MR_def_label(transform_hlds__complexity__complexity_process_proc_msg_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__complexity__complexity_process_proc_msg_7_0_i8);
MR_def_label(transform_hlds__complexity__complexity_process_proc_msg_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__complexity__complexity_process_proc_msg_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(transform_hlds__complexity__complexity_process_proc_8_0);
MR_def_label(transform_hlds__complexity__complexity_process_proc_msg_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Applying complexity experiment transformation to ", 51);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		transform_hlds__complexity__complexity_process_proc_msg_7_0_i11);
MR_def_label(transform_hlds__complexity__complexity_process_proc_msg_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(transform_hlds__complexity__complexity_process_proc_8_0);
MR_def_label(transform_hlds__complexity__complexity_process_proc_msg_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__complexity_module16)
	MR_init_entry1(transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__128__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__128__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__read_spec_file_lines__128__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__128__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_info_0_0);

MR_BEGIN_MODULE(transform_hlds__complexity_module17)
	MR_init_entry1(transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__579__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__579__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__make_type_info_var__579__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__579__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_info_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__complexity_maybe_bunch_0(void)
{
	transform_hlds__complexity_module0();
	transform_hlds__complexity_module1();
	transform_hlds__complexity_module2();
	transform_hlds__complexity_module3();
	transform_hlds__complexity_module4();
	transform_hlds__complexity_module5();
	transform_hlds__complexity_module6();
	transform_hlds__complexity_module7();
	transform_hlds__complexity_module8();
	transform_hlds__complexity_module9();
	transform_hlds__complexity_module10();
	transform_hlds__complexity_module11();
	transform_hlds__complexity_module12();
	transform_hlds__complexity_module13();
	transform_hlds__complexity_module14();
	transform_hlds__complexity_module15();
	transform_hlds__complexity_module16();
	transform_hlds__complexity_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__complexity__init(void);
void mercury__transform_hlds__complexity__init_type_tables(void);
void mercury__transform_hlds__complexity__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__complexity__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__complexity__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__complexity__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__complexity__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__complexity_maybe_bunch_0();
	mercury__transform_hlds__complexity__init_debugger();
}

void mercury__transform_hlds__complexity__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__complexity__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__complexity__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__complexity);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__complexity__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__complexity__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
