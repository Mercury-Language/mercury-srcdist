/*
** Automatically generated from `generate_output.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__generate_output__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "generate_output.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "generate_output.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "generate_output.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "generate_output.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "generate_output.c"
#line 44 "generate_output.c"
#include "generate_output.mh"

#line 47 "generate_output.c"
#line 48 "generate_output.c"
#ifndef GENERATE_OUTPUT_DECL_GUARD
#define GENERATE_OUTPUT_DECL_GUARD

#line 52 "generate_output.c"
#line 53 "generate_output.c"

#endif
#line 56 "generate_output.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_generate_output__type_ctor_info_flat_key_0,
	mercury_data_generate_output__type_ctor_info_profiling_0;
MR_decl_label3(generate_output__assign_index_numbers_2_4_0, 10,3,4)
MR_decl_label8(generate_output__generate_prof_output_5_0, 2,3,4,5,6,7,9,10)
MR_decl_label5(generate_output__generate_prof_output_5_0, 11,12,13,14,15)
MR_decl_label8(generate_output__process_prof_node_4_0, 2,5,6,7,37,8,11,12)
MR_decl_label8(generate_output__process_prof_node_4_0, 13,14,16,17,18,19,20,22)
MR_decl_label8(generate_output__process_prof_node_4_0, 23,24,25,21,26,28,29,31)
MR_decl_label5(generate_output__process_prof_node_children_6_0, 15,4,5,6,7)
MR_decl_label8(generate_output__process_prof_node_children_2_4_0, 35,3,4,5,7,6,9,10)
MR_decl_label8(generate_output__process_prof_node_children_2_4_0, 11,12,13,14,15,16,17,19)
MR_decl_label2(generate_output__process_prof_node_children_2_4_0, 21,23)
MR_decl_label8(generate_output__process_prof_node_list_7_0, 18,3,5,6,7,8,4,9)
MR_decl_label8(generate_output__process_prof_node_parents_3_7_0, 28,3,4,6,5,8,9,10)
MR_decl_label2(generate_output__process_prof_node_parents_3_7_0, 13,16)
MR_decl_label7(generate_output__remove_child_cycle_members_5_0, 38,4,6,9,8,5,15)
MR_decl_label7(generate_output__remove_cycle_members_7_0, 38,4,6,9,8,5,15)
MR_decl_label1(fn__generate_output__checked_float_divide_2_0, 13)
MR_decl_label3(fn__generate_output__construct_name_1_0, 14,4,5)
MR_decl_label2(__Unify___generate_output__flat_key_0_0, 4,1)
MR_decl_label4(__Unify___generate_output__profiling_0_0, 4,6,10,1)
MR_decl_label4(__Compare___generate_output__flat_key_0_0, 3,2,5,21)
MR_decl_label5(__Compare___generate_output__profiling_0_0, 3,2,5,9,29)
MR_decl_static(fn__generate_output__construct_name_1_0)
MR_decl_static(generate_output__remove_cycle_members_7_0)
MR_def_extern_entry(fn__generate_output__checked_float_divide_2_0)
MR_decl_static(generate_output__process_prof_node_parents_3_7_0)
MR_decl_static(generate_output__remove_child_cycle_members_5_0)
MR_decl_static(generate_output__process_prof_node_children_2_4_0)
MR_decl_static(generate_output__process_prof_node_children_6_0)
MR_decl_static(generate_output__process_prof_node_4_0)
MR_decl_static(generate_output__process_prof_node_list_7_0)
MR_decl_static(generate_output__assign_index_numbers_2_4_0)
MR_def_extern_entry(generate_output__generate_prof_output_5_0)
MR_decl_static(__Unify___generate_output__flat_key_0_0)
MR_decl_static(__Compare___generate_output__flat_key_0_0)
MR_decl_static(__Unify___generate_output__profiling_0_0)
MR_decl_static(__Compare___generate_output__profiling_0_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_generate_output__field_types_flat_key_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_generate_output__du_functor_desc_flat_key_0_0 = {
	"flat_key",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_generate_output__field_types_flat_key_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_generate_output__du_stag_ordered_flat_key_0_0[] = {
	&mercury_data_generate_output__du_functor_desc_flat_key_0_0

};

const MR_DuPtagLayout mercury_data_generate_output__du_ptag_ordered_flat_key_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_generate_output__du_stag_ordered_flat_key_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_generate_output__du_name_ordered_flat_key_0[] = {
	&mercury_data_generate_output__du_functor_desc_flat_key_0_0
};

const MR_Integer mercury_data_generate_output__functor_number_map_flat_key_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_generate_output__type_ctor_info_flat_key_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___generate_output__flat_key_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___generate_output__flat_key_0_0)),
	"generate_output",
	"flat_key",
	{ (void *)mercury_data_generate_output__du_name_ordered_flat_key_0 },
	{ (void *)mercury_data_generate_output__du_ptag_ordered_flat_key_0 },
	1,
	4,
	mercury_data_generate_output__functor_number_map_flat_key_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_output_prof_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_output_prof_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_output_prof_info__type_ctor_info_output_prof_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_rbtree__type_ctor_info_rbtree_2;

static const MR_FA_TypeInfo_Struct2 mercury_data_rbtree__ti_rbtree_2builtin__type_ctor_info_float_0builtin__type_ctor_info_string_0 = {
	&mercury_data_rbtree__type_ctor_info_rbtree_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_generate_output__type_ctor_info_flat_key_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_rbtree__ti_rbtree_2generate_output__type_ctor_info_flat_key_0builtin__type_ctor_info_string_0 = {
	&mercury_data_rbtree__type_ctor_info_rbtree_2,
{	(MR_TypeInfo) &mercury_data_generate_output__type_ctor_info_flat_key_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_generate_output__field_types_profiling_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0,
	(MR_PseudoTypeInfo) &mercury_data_rbtree__ti_rbtree_2builtin__type_ctor_info_float_0builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_rbtree__ti_rbtree_2generate_output__type_ctor_info_flat_key_0builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_generate_output__du_functor_desc_profiling_0_0 = {
	"profiling",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_generate_output__field_types_profiling_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_generate_output__du_stag_ordered_profiling_0_0[] = {
	&mercury_data_generate_output__du_functor_desc_profiling_0_0

};

const MR_DuPtagLayout mercury_data_generate_output__du_ptag_ordered_profiling_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_generate_output__du_stag_ordered_profiling_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_generate_output__du_name_ordered_profiling_0[] = {
	&mercury_data_generate_output__du_functor_desc_profiling_0_0
};

const MR_Integer mercury_data_generate_output__functor_number_map_profiling_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_generate_output__type_ctor_info_profiling_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___generate_output__profiling_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___generate_output__profiling_0_0)),
	"generate_output",
	"profiling",
	{ (void *)mercury_data_generate_output__du_name_ordered_profiling_0 },
	{ (void *)mercury_data_generate_output__du_ptag_ordered_profiling_0 },
	1,
	4,
	mercury_data_generate_output__functor_number_map_profiling_0
};

MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(generate_output_module0)
	MR_init_entry1(fn__generate_output__construct_name_1_0);
	MR_init_label3(fn__generate_output__construct_name_1_0,14,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'construct_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__generate_output__construct_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__generate_output__construct_name_1_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__generate_output__construct_name_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__generate_output__construct_name_1_0,
		fn__generate_output__construct_name_1_0_i4);
MR_def_label(fn__generate_output__construct_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" or ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		fn__generate_output__construct_name_1_0_i5);
MR_def_label(fn__generate_output__construct_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(prof_info__pred_info_get_entire_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(map__search_3_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;

MR_BEGIN_MODULE(generate_output_module1)
	MR_init_entry1(generate_output__remove_cycle_members_7_0);
	MR_init_label7(generate_output__remove_cycle_members_7_0,38,4,6,9,8,5,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'remove_cycle_members'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(generate_output__remove_cycle_members_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(generate_output__remove_cycle_members_7_0_i38);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(generate_output__remove_cycle_members_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(prof_info__pred_info_get_entire_3_0,
		generate_output__remove_cycle_members_7_0_i4);
MR_def_label(generate_output__remove_cycle_members_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__search_3_0,
		generate_output__remove_cycle_members_7_0_i6);
MR_def_label(generate_output__remove_cycle_members_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(generate_output__remove_cycle_members_7_0_i5);
	}
	if ((MR_r2 != MR_sv(1))) {
		MR_GOTO_LAB(generate_output__remove_cycle_members_7_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_sv(7));
	MR_np_localcall_lab(generate_output__remove_cycle_members_7_0,
		generate_output__remove_cycle_members_7_0_i9);
MR_def_label(generate_output__remove_cycle_members_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(generate_output__remove_cycle_members_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(generate_output__remove_cycle_members_7_0,
		generate_output__remove_cycle_members_7_0_i15);
MR_def_label(generate_output__remove_cycle_members_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(generate_output__remove_cycle_members_7_0,
		generate_output__remove_cycle_members_7_0_i15);
MR_def_label(generate_output__remove_cycle_members_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);

MR_BEGIN_MODULE(generate_output_module2)
	MR_init_entry1(fn__generate_output__checked_float_divide_2_0);
	MR_init_label1(fn__generate_output__checked_float_divide_2_0,13)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'checked_float_divide'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__generate_output__checked_float_divide_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r2) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__generate_output__checked_float_divide_2_0_i13);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_proceed();
MR_def_label(fn__generate_output__checked_float_divide_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_102_108_111_97_116_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__float_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_parent_0;
MR_decl_entry(rbtree__insert_duplicate_4_0);

MR_BEGIN_MODULE(generate_output_module3)
	MR_init_entry1(generate_output__process_prof_node_parents_3_7_0);
	MR_init_label8(generate_output__process_prof_node_parents_3_7_0,28,3,4,6,5,8,9,10)
	MR_init_label2(generate_output__process_prof_node_parents_3_7_0,13,16)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'process_prof_node_parents_3'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(generate_output__process_prof_node_parents_3_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(generate_output__process_prof_node_parents_3_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(generate_output__process_prof_node_parents_3_7_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(10);
MR_def_label(generate_output__process_prof_node_parents_3_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(prof_info__pred_info_get_entire_3_0,
		generate_output__process_prof_node_parents_3_7_0_i4);
MR_def_label(generate_output__process_prof_node_parents_3_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__search_3_0,
		generate_output__process_prof_node_parents_3_7_0_i6);
MR_def_label(generate_output__process_prof_node_parents_3_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(generate_output__process_prof_node_parents_3_7_0_i5);
	}
	MR_r1 = MR_sv(8);
	MR_sv(9) = MR_r2;
	MR_GOTO_LAB(generate_output__process_prof_node_parents_3_7_0_i8);
MR_def_label(generate_output__process_prof_node_parents_3_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_sv(9) = (MR_Integer) 0;
MR_def_label(generate_output__process_prof_node_parents_3_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__float__float_1_0,
		generate_output__process_prof_node_parents_3_7_0_i9);
MR_def_label(generate_output__process_prof_node_parents_3_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(3)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(generate_output__process_prof_node_parents_3_7_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_float_to_word((MR_word_to_float(MR_sv(1)) * (MR_Float) 0.0000000000000000));
	MR_tfield(0, MR_tempr1, 3) = MR_float_to_word((MR_word_to_float(MR_sv(2)) * (MR_Float) 0.0000000000000000));
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	}
	MR_np_call_localret_ent(rbtree__insert_duplicate_4_0,
		generate_output__process_prof_node_parents_3_7_0_i16);
MR_def_label(generate_output__process_prof_node_parents_3_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		generate_output__process_prof_node_parents_3_7_0_i13);
MR_def_label(generate_output__process_prof_node_parents_3_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_float_to_word((MR_word_to_float(MR_sv(1)) * MR_word_to_float(MR_tempr2)));
	MR_tfield(0, MR_tempr1, 3) = MR_float_to_word((MR_word_to_float(MR_sv(2)) * MR_word_to_float(MR_tempr2)));
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	}
	MR_np_call_localret_ent(rbtree__insert_duplicate_4_0,
		generate_output__process_prof_node_parents_3_7_0_i16);
MR_def_label(generate_output__process_prof_node_parents_3_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(generate_output__process_prof_node_parents_3_7_0_i28);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(generate_output_module4)
	MR_init_entry1(generate_output__remove_child_cycle_members_5_0);
	MR_init_label7(generate_output__remove_child_cycle_members_5_0,38,4,6,9,8,5,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'remove_child_cycle_members'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(generate_output__remove_child_cycle_members_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(generate_output__remove_child_cycle_members_5_0_i38);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(generate_output__remove_child_cycle_members_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(prof_info__pred_info_get_entire_3_0,
		generate_output__remove_child_cycle_members_5_0_i4);
MR_def_label(generate_output__remove_child_cycle_members_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		generate_output__remove_child_cycle_members_5_0_i6);
MR_def_label(generate_output__remove_child_cycle_members_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(generate_output__remove_child_cycle_members_5_0_i5);
	}
	if ((MR_r2 != MR_sv(1))) {
		MR_GOTO_LAB(generate_output__remove_child_cycle_members_5_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(generate_output__remove_child_cycle_members_5_0,
		generate_output__remove_child_cycle_members_5_0_i9);
MR_def_label(generate_output__remove_child_cycle_members_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(generate_output__remove_child_cycle_members_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(generate_output__remove_child_cycle_members_5_0,
		generate_output__remove_child_cycle_members_5_0_i15);
MR_def_label(generate_output__remove_child_cycle_members_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(generate_output__remove_child_cycle_members_5_0,
		generate_output__remove_child_cycle_members_5_0_i15);
MR_def_label(generate_output__remove_child_cycle_members_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(prof_info__prof_get_entire_7_0);
MR_decl_entry(prof_info__get_prof_node_4_0);
MR_decl_entry(prof_info__prof_node_get_initial_counts_2_0);
MR_decl_entry(prof_info__prof_node_get_propagated_counts_2_0);
MR_decl_entry(prof_info__prof_node_get_total_calls_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_child_0;

MR_BEGIN_MODULE(generate_output_module5)
	MR_init_entry1(generate_output__process_prof_node_children_2_4_0);
	MR_init_label8(generate_output__process_prof_node_children_2_4_0,35,3,4,5,7,6,9,10)
	MR_init_label8(generate_output__process_prof_node_children_2_4_0,11,12,13,14,15,16,17,19)
	MR_init_label2(generate_output__process_prof_node_children_2_4_0,21,23)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'process_prof_node_children_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(generate_output__process_prof_node_children_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(generate_output__process_prof_node_children_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(generate_output__process_prof_node_children_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(12);
MR_def_label(generate_output__process_prof_node_children_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(prof_info__pred_info_get_entire_3_0,
		generate_output__process_prof_node_children_2_4_0_i4);
MR_def_label(generate_output__process_prof_node_children_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(prof_info__prof_get_entire_7_0,
		generate_output__process_prof_node_children_2_4_0_i5);
MR_def_label(generate_output__process_prof_node_children_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r6;
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		generate_output__process_prof_node_children_2_4_0_i7);
MR_def_label(generate_output__process_prof_node_children_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(generate_output__process_prof_node_children_2_4_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_sv(7) = MR_r4;
	MR_GOTO_LAB(generate_output__process_prof_node_children_2_4_0_i9);
MR_def_label(generate_output__process_prof_node_children_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_sv(7) = (MR_Integer) 0;
MR_def_label(generate_output__process_prof_node_children_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(prof_info__get_prof_node_4_0,
		generate_output__process_prof_node_children_2_4_0_i10);
MR_def_label(generate_output__process_prof_node_children_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(prof_info__prof_node_get_initial_counts_2_0,
		generate_output__process_prof_node_children_2_4_0_i11);
MR_def_label(generate_output__process_prof_node_children_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(prof_info__prof_node_get_propagated_counts_2_0,
		generate_output__process_prof_node_children_2_4_0_i12);
MR_def_label(generate_output__process_prof_node_children_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(prof_info__prof_node_get_total_calls_2_0,
		generate_output__process_prof_node_children_2_4_0_i13);
MR_def_label(generate_output__process_prof_node_children_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__float__float_1_0,
		generate_output__process_prof_node_children_2_4_0_i14);
MR_def_label(generate_output__process_prof_node_children_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_float_to_word((MR_word_to_float(MR_r1) + MR_word_to_float(MR_sv(8))));
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__float__float_1_0,
		generate_output__process_prof_node_children_2_4_0_i15);
MR_def_label(generate_output__process_prof_node_children_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__float__float_1_0,
		generate_output__process_prof_node_children_2_4_0_i16);
MR_def_label(generate_output__process_prof_node_children_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(generate_output__process_prof_node_children_2_4_0_i17);
	}
	MR_r1 = MR_sv(9);
	MR_sv(9) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_np_call_localret_ent(fn__float__float_1_0,
		generate_output__process_prof_node_children_2_4_0_i21);
MR_def_label(generate_output__process_prof_node_children_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		generate_output__process_prof_node_children_2_4_0_i19);
MR_def_label(generate_output__process_prof_node_children_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		generate_output__process_prof_node_children_2_4_0_i21);
MR_def_label(generate_output__process_prof_node_children_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tempr2 = MR_sv(6);
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_float_to_word(((MR_word_to_float(MR_r1) * MR_word_to_float(MR_tempr2)) * MR_word_to_float(MR_tempr3)));
	MR_tfield(0, MR_tempr1, 3) = MR_float_to_word(((MR_word_to_float(MR_sv(8)) * MR_word_to_float(MR_tempr2)) * MR_word_to_float(MR_tempr3)));
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(10);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(rbtree__insert_duplicate_4_0,
		generate_output__process_prof_node_children_2_4_0_i23);
MR_def_label(generate_output__process_prof_node_children_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(generate_output__process_prof_node_children_2_4_0_i35);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(rbtree__init_1_0);
MR_decl_entry(rbtree__values_2_0);

MR_BEGIN_MODULE(generate_output_module6)
	MR_init_entry1(generate_output__process_prof_node_children_6_0);
	MR_init_label5(generate_output__process_prof_node_children_6_0,15,4,5,6,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'process_prof_node_children'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(generate_output__process_prof_node_children_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(generate_output__process_prof_node_children_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(generate_output__process_prof_node_children_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(generate_output__remove_child_cycle_members_5_0,
		generate_output__process_prof_node_children_6_0_i4);
MR_def_label(generate_output__process_prof_node_children_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(rbtree__init_1_0,
		generate_output__process_prof_node_children_6_0_i5);
MR_def_label(generate_output__process_prof_node_children_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(generate_output__process_prof_node_children_2_4_0,
		generate_output__process_prof_node_children_6_0_i6);
MR_def_label(generate_output__process_prof_node_children_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(rbtree__values_2_0,
		generate_output__process_prof_node_children_6_0_i7);
MR_def_label(generate_output__process_prof_node_children_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(prof_info__prof_node_type_2_0);
MR_decl_entry(prof_info__prof_node_get_entire_pred_10_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
static const MR_Float mercury_float_const_100pt00000000000000 = 100.00000000000000;
MR_decl_entry(map__det_insert_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

MR_BEGIN_MODULE(generate_output_module7)
	MR_init_entry1(generate_output__process_prof_node_4_0);
	MR_init_label8(generate_output__process_prof_node_4_0,2,5,6,7,37,8,11,12)
	MR_init_label8(generate_output__process_prof_node_4_0,13,14,16,17,18,19,20,22)
	MR_init_label8(generate_output__process_prof_node_4_0,23,24,25,21,26,28,29,31)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'process_prof_node'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(generate_output__process_prof_node_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(prof_info__prof_node_type_2_0,
		generate_output__process_prof_node_4_0_i2);
MR_def_label(generate_output__process_prof_node_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(generate_output__process_prof_node_4_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(prof_info__prof_get_entire_7_0,
		generate_output__process_prof_node_4_0_i5);
MR_def_label(generate_output__process_prof_node_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__float__float_1_0,
		generate_output__process_prof_node_4_0_i6);
MR_def_label(generate_output__process_prof_node_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(prof_info__prof_node_get_entire_pred_10_0,
		generate_output__process_prof_node_4_0_i7);
MR_def_label(generate_output__process_prof_node_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(generate_output__process_prof_node_4_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(generate_output__process_prof_node_4_0_i8);
	}
MR_def_label(generate_output__process_prof_node_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(21);
MR_def_label(generate_output__process_prof_node_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_sv(11) = MR_r7;
	MR_sv(12) = MR_r8;
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_r9;
	}
	MR_np_call_localret_ent(fn__generate_output__construct_name_1_0,
		generate_output__process_prof_node_4_0_i11);
MR_def_label(generate_output__process_prof_node_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		generate_output__process_prof_node_4_0_i12);
MR_def_label(generate_output__process_prof_node_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		generate_output__process_prof_node_4_0_i13);
MR_def_label(generate_output__process_prof_node_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(1)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(generate_output__process_prof_node_4_0_i14);
	}
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(16) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r4 = MR_sv(11);
	MR_sv(1) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tempr2 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_sv(4) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r6 = MR_sv(8);
	MR_sv(8) = MR_float_to_word((MR_word_to_float(MR_tempr1) * MR_word_to_float(MR_tempr2)));
	MR_sv(9) = MR_float_to_word(((MR_word_to_float(MR_tempr1) + MR_word_to_float(MR_r6)) * MR_word_to_float(MR_tempr2)));
	MR_GOTO_LAB(generate_output__process_prof_node_4_0_i18);
	}
MR_def_label(generate_output__process_prof_node_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) + MR_word_to_float(MR_sv(8))));
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		generate_output__process_prof_node_4_0_i16);
MR_def_label(generate_output__process_prof_node_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word((MR_word_to_float(MR_r1) * (MR_Float) 100.00000000000000));
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		generate_output__process_prof_node_4_0_i17);
MR_def_label(generate_output__process_prof_node_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r4 = MR_sv(11);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_float_to_word((MR_word_to_float(MR_tempr1) * (MR_Float) 100.00000000000000));
	MR_tempr1 = MR_sv(8);
	MR_tempr3 = MR_sv(16);
	MR_sv(8) = MR_float_to_word((MR_word_to_float(MR_tempr3) * MR_word_to_float(MR_tempr2)));
	MR_sv(9) = MR_float_to_word(((MR_word_to_float(MR_tempr3) + MR_word_to_float(MR_tempr1)) * MR_word_to_float(MR_tempr2)));
	}
MR_def_label(generate_output__process_prof_node_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_sv(11) = MR_r4;
	MR_np_call_localret_ent(generate_output__remove_cycle_members_7_0,
		generate_output__process_prof_node_4_0_i19);
MR_def_label(generate_output__process_prof_node_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		generate_output__process_prof_node_4_0_i20);
MR_def_label(generate_output__process_prof_node_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(17),0,0)) {
		MR_GOTO_LAB(generate_output__process_prof_node_4_0_i22);
	}
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(10);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(generate_output__process_prof_node_4_0_i21);
MR_def_label(generate_output__process_prof_node_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_sv(19) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(rbtree__init_1_0,
		generate_output__process_prof_node_4_0_i23);
MR_def_label(generate_output__process_prof_node_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(18);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(generate_output__process_prof_node_parents_3_7_0,
		generate_output__process_prof_node_4_0_i24);
MR_def_label(generate_output__process_prof_node_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(rbtree__values_2_0,
		generate_output__process_prof_node_4_0_i25);
MR_def_label(generate_output__process_prof_node_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(2) = MR_tempr1;
	}
MR_def_label(generate_output__process_prof_node_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(generate_output__process_prof_node_children_6_0,
		generate_output__process_prof_node_4_0_i26);
MR_def_label(generate_output__process_prof_node_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 9) = MR_r1;
	MR_tfield(0, MR_tempr1, 10) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 11) = MR_r2;
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, output_prof);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		generate_output__process_prof_node_4_0_i28);
MR_def_label(generate_output__process_prof_node_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(rbtree__insert_duplicate_4_0,
		generate_output__process_prof_node_4_0_i29);
MR_def_label(generate_output__process_prof_node_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(generate_output, flat_key);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(15);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(rbtree__insert_duplicate_4_0,
		generate_output__process_prof_node_4_0_i31);
MR_def_label(generate_output__process_prof_node_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(prof_info__prof_node_get_pred_name_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(generate_output_module8)
	MR_init_entry1(generate_output__process_prof_node_list_7_0);
	MR_init_label8(generate_output__process_prof_node_list_7_0,18,3,5,6,7,8,4,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'process_prof_node_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(generate_output__process_prof_node_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(generate_output__process_prof_node_list_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(generate_output__process_prof_node_list_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(generate_output__process_prof_node_list_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(generate_output__process_prof_node_list_7_0_i5);
	}
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r4;
	MR_r6 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r6, 1);
	MR_GOTO_LAB(generate_output__process_prof_node_list_7_0_i4);
MR_def_label(generate_output__process_prof_node_list_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(prof_info__prof_node_get_pred_name_2_0,
		generate_output__process_prof_node_list_7_0_i6);
MR_def_label(generate_output__process_prof_node_list_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t% Processing ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		generate_output__process_prof_node_list_7_0_i7);
MR_def_label(generate_output__process_prof_node_list_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		generate_output__process_prof_node_list_7_0_i8);
MR_def_label(generate_output__process_prof_node_list_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(4);
MR_def_label(generate_output__process_prof_node_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(generate_output__process_prof_node_4_0,
		generate_output__process_prof_node_list_7_0_i9);
MR_def_label(generate_output__process_prof_node_list_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(generate_output__process_prof_node_list_7_0_i18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(generate_output_module9)
	MR_init_entry1(generate_output__assign_index_numbers_2_4_0);
	MR_init_label3(generate_output__assign_index_numbers_2_4_0,10,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'assign_index_numbers_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(generate_output__assign_index_numbers_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(generate_output__assign_index_numbers_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(generate_output__assign_index_numbers_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(generate_output__assign_index_numbers_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		generate_output__assign_index_numbers_2_4_0_i4);
MR_def_label(generate_output__assign_index_numbers_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(generate_output__assign_index_numbers_2_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(globals__io_lookup_bool_option_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_prof_node_0;
MR_decl_entry(fn__map__values_1_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(fn__rbtree__values_1_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__list__reverse_1_0);

MR_BEGIN_MODULE(generate_output_module10)
	MR_init_entry1(generate_output__generate_prof_output_5_0);
	MR_init_label8(generate_output__generate_prof_output_5_0,2,3,4,5,6,7,9,10)
	MR_init_label5(generate_output__generate_prof_output_5_0,11,12,13,14,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'generate_prof_output'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__generate_output__generate_prof_output_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		generate_output__generate_prof_output_5_0_i2);
MR_def_label(generate_output__generate_prof_output_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(prof_info__prof_get_entire_7_0,
		generate_output__generate_prof_output_5_0_i3);
MR_def_label(generate_output__generate_prof_output_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(fn__map__values_1_0,
		generate_output__generate_prof_output_5_0_i4);
MR_def_label(generate_output__generate_prof_output_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, output_prof);
	MR_np_call_localret_ent(map__init_1_0,
		generate_output__generate_prof_output_5_0_i5);
MR_def_label(generate_output__generate_prof_output_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(rbtree__init_1_0,
		generate_output__generate_prof_output_5_0_i6);
MR_def_label(generate_output__generate_prof_output_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(generate_output, flat_key);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(rbtree__init_1_0,
		generate_output__generate_prof_output_5_0_i7);
MR_def_label(generate_output__generate_prof_output_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(generate_output__process_prof_node_list_7_0,
		generate_output__generate_prof_output_5_0_i9);
MR_def_label(generate_output__generate_prof_output_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__rbtree__values_1_0,
		generate_output__generate_prof_output_5_0_i10);
MR_def_label(generate_output__generate_prof_output_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(generate_output, flat_key);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__rbtree__values_1_0,
		generate_output__generate_prof_output_5_0_i11);
MR_def_label(generate_output__generate_prof_output_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		generate_output__generate_prof_output_5_0_i12);
MR_def_label(generate_output__generate_prof_output_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		generate_output__generate_prof_output_5_0_i13);
MR_def_label(generate_output__generate_prof_output_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(generate_output__assign_index_numbers_2_4_0,
		generate_output__generate_prof_output_5_0_i14);
MR_def_label(generate_output__generate_prof_output_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		generate_output__generate_prof_output_5_0_i15);
MR_def_label(generate_output__generate_prof_output_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(generate_output_module11)
	MR_init_entry1(__Unify___generate_output__flat_key_0_0);
	MR_init_label2(__Unify___generate_output__flat_key_0_0,4,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___generate_output__flat_key_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___generate_output__flat_key_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_tempr3))) {
		MR_GOTO_LAB(__Unify___generate_output__flat_key_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___generate_output__flat_key_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___generate_output__flat_key_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(generate_output_module12)
	MR_init_entry1(__Compare___generate_output__flat_key_0_0);
	MR_init_label4(__Compare___generate_output__flat_key_0_0,3,2,5,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___generate_output__flat_key_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___generate_output__flat_key_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___generate_output__flat_key_0_0_i2);
MR_def_label(__Compare___generate_output__flat_key_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___generate_output__flat_key_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___generate_output__flat_key_0_0_i5);
MR_def_label(__Compare___generate_output__flat_key_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___generate_output__flat_key_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___generate_output__flat_key_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___rbtree__rbtree_2_0);

MR_BEGIN_MODULE(generate_output_module13)
	MR_init_entry1(__Unify___generate_output__profiling_0_0);
	MR_init_label4(__Unify___generate_output__profiling_0_0,4,6,10,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___generate_output__profiling_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___generate_output__profiling_0_0_i10);
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
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, output_prof);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___generate_output__profiling_0_0_i4);
MR_def_label(__Unify___generate_output__profiling_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___generate_output__profiling_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___rbtree__rbtree_2_0,
		__Unify___generate_output__profiling_0_0_i6);
MR_def_label(__Unify___generate_output__profiling_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___generate_output__profiling_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(generate_output, flat_key);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___rbtree__rbtree_2_0);
MR_def_label(__Unify___generate_output__profiling_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___generate_output__profiling_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___rbtree__rbtree_2_0);

MR_BEGIN_MODULE(generate_output_module14)
	MR_init_entry1(__Compare___generate_output__profiling_0_0);
	MR_init_label5(__Compare___generate_output__profiling_0_0,3,2,5,9,29)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___generate_output__profiling_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___generate_output__profiling_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___generate_output__profiling_0_0_i2);
MR_def_label(__Compare___generate_output__profiling_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___generate_output__profiling_0_0,2)
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
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, output_prof);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___generate_output__profiling_0_0_i5);
MR_def_label(__Compare___generate_output__profiling_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___generate_output__profiling_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___rbtree__rbtree_2_0,
		__Compare___generate_output__profiling_0_0_i9);
MR_def_label(__Compare___generate_output__profiling_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___generate_output__profiling_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(generate_output, flat_key);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___rbtree__rbtree_2_0);
MR_def_label(__Compare___generate_output__profiling_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__generate_output_maybe_bunch_0(void)
{
	generate_output_module0();
	generate_output_module1();
	generate_output_module2();
	generate_output_module3();
	generate_output_module4();
	generate_output_module5();
	generate_output_module6();
	generate_output_module7();
	generate_output_module8();
	generate_output_module9();
	generate_output_module10();
	generate_output_module11();
	generate_output_module12();
	generate_output_module13();
	generate_output_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__generate_output__init(void);
void mercury__generate_output__init_type_tables(void);
void mercury__generate_output__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__generate_output__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__generate_output__init_complexity_procs(void);
#endif

void mercury__generate_output__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__generate_output_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_generate_output__type_ctor_info_flat_key_0,
		generate_output__flat_key_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_generate_output__type_ctor_info_profiling_0,
		generate_output__profiling_0_0);
	mercury__generate_output__init_debugger();
}

void mercury__generate_output__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_generate_output__type_ctor_info_flat_key_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_generate_output__type_ctor_info_profiling_0);
	}
}


void mercury__generate_output__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__generate_output__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__generate_output);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__generate_output__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
