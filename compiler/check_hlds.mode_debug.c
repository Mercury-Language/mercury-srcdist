/*
** Automatically generated from `mode_debug.m'
** by the Mercury compiler,
** version rotd-2011-05-29, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__mode_debug__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "check_hlds.mode_debug.c"
#include "check_hlds.mode_debug.mh"

#line 28 "check_hlds.mode_debug.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "check_hlds.mode_debug.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 36 "check_hlds.mode_debug.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "check_hlds.mode_debug.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "check_hlds.mode_debug.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "check_hlds.mode_debug.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 52 "check_hlds.mode_debug.c"
#line 53 "check_hlds.mode_debug.c"
#ifndef CHECK_HLDS__MODE_DEBUG_DECL_GUARD
#define CHECK_HLDS__MODE_DEBUG_DECL_GUARD

#line 57 "check_hlds.mode_debug.c"
#line 58 "check_hlds.mode_debug.c"

#endif
#line 61 "check_hlds.mode_debug.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__mode_debug__type_ctor_info_port_0;
MR_decl_label1(check_hlds__mode_debug__identical_insts_2_0, 1)
MR_decl_label10(check_hlds__mode_debug__mode_checkpoint_4_0, 2,4,5,7,10,8,6,11,12,13)
MR_decl_label10(check_hlds__mode_debug__mode_checkpoint_4_0, 39,15,16,17,18,21,23,24,25,26)
MR_decl_label4(check_hlds__mode_debug__mode_checkpoint_4_0, 20,30,31,33)
MR_decl_label10(check_hlds__mode_debug__write_var_insts_8_0, 56,4,9,12,32,16,17,18,6,20)
MR_decl_label8(check_hlds__mode_debug__write_var_insts_8_0, 21,22,25,26,24,27,58,59)
MR_decl_static(check_hlds__mode_debug__identical_insts_2_0)
MR_decl_static(check_hlds__mode_debug__write_var_insts_8_0)
MR_def_extern_entry(check_hlds__mode_debug__mode_checkpoint_4_0)
MR_def_extern_entry(__Unify___check_hlds__mode_debug__port_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_debug__port_0_0)

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_debug__enum_functor_desc_port_0_0 = {
	"enter",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_debug__enum_functor_desc_port_0_1 = {
	"exit",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_debug__enum_functor_desc_port_0_2 = {
	"wakeup",
	2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_debug__enum_value_ordered_port_0[] = {
	&mercury_data_check_hlds__mode_debug__enum_functor_desc_port_0_0,
	&mercury_data_check_hlds__mode_debug__enum_functor_desc_port_0_1,
	&mercury_data_check_hlds__mode_debug__enum_functor_desc_port_0_2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_debug__enum_name_ordered_port_0[] = {
	&mercury_data_check_hlds__mode_debug__enum_functor_desc_port_0_0,
	&mercury_data_check_hlds__mode_debug__enum_functor_desc_port_0_1,
	&mercury_data_check_hlds__mode_debug__enum_functor_desc_port_0_2
};

const MR_Integer mercury_data_check_hlds__mode_debug__functor_number_map_port_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_debug__type_ctor_info_port_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_debug__port_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_debug__port_0_0)),
	"check_hlds.mode_debug",
	"port",
	{ (void *)mercury_data_check_hlds__mode_debug__enum_name_ordered_port_0 },
	{ (void *)mercury_data_check_hlds__mode_debug__enum_value_ordered_port_0 },
	3,
	4,
	mercury_data_check_hlds__mode_debug__functor_number_map_port_0
};




MR_BEGIN_MODULE(check_hlds__mode_debug_module0)
	MR_init_entry1(check_hlds__mode_debug__identical_insts_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_debug__identical_insts_2_0);
	MR_init_label1(check_hlds__mode_debug__identical_insts_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'identical_insts'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_debug__identical_insts_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	InstA;
	MR_Word	InstB;
#define	MR_PROC_LABEL	mercury__check_hlds__mode_debug__identical_insts_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	InstA = MR_r1;
	InstB = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("identical_insts");
{
#line 173 "mode_debug.m"

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 167 "check_hlds.mode_debug.c"
	MR_RELEASE_GLOBAL_LOCK("identical_insts");
if (!MercurySuccessIndicator) MR_GOTO_LAB(check_hlds__mode_debug__identical_insts_2_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__mode_debug__identical_insts_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_decl_entry(io__write_string_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_structured_inst_5_0);

MR_BEGIN_MODULE(check_hlds__mode_debug_module1)
	MR_init_entry1(check_hlds__mode_debug__write_var_insts_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_debug__write_var_insts_8_0);
	MR_init_label10(check_hlds__mode_debug__write_var_insts_8_0,56,4,9,12,32,16,17,18,6,20)
	MR_init_label8(check_hlds__mode_debug__write_var_insts_8_0,21,22,25,26,24,27,58,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_var_insts'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_debug__write_var_insts_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_debug__write_var_insts_8_0_i59);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__mode_debug__write_var_insts_8_0_i4);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	InstA;
	MR_Word	InstB;
#define	MR_PROC_LABEL	mercury__check_hlds__mode_debug__write_var_insts_8_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	InstA = MR_sv(7);
	InstB = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("identical_insts");
{
#line 173 "mode_debug.m"

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 252 "check_hlds.mode_debug.c"
	MR_RELEASE_GLOBAL_LOCK("identical_insts");
if (!MercurySuccessIndicator) MR_GOTO_LAB(check_hlds__mode_debug__write_var_insts_8_0_i9);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(check_hlds__mode_debug__write_var_insts_8_0_i32);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		check_hlds__mode_debug__write_var_insts_8_0_i12);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_debug__write_var_insts_8_0_i6);
	}
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(8);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__mode_debug__write_var_insts_8_0_i58);
	}
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__write_var_insts_8_0_i16);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		check_hlds__mode_debug__write_var_insts_8_0_i17);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ::", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__write_var_insts_8_0_i18);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" unchanged\n", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__write_var_insts_8_0_i26);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__write_var_insts_8_0_i20);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		check_hlds__mode_debug__write_var_insts_8_0_i21);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ::", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__write_var_insts_8_0_i22);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__mode_debug__write_var_insts_8_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__write_var_insts_8_0_i25);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_structured_inst_5_0,
		check_hlds__mode_debug__write_var_insts_8_0_i26);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__mode_debug__write_var_insts_8_0_i56);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" changed\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__write_var_insts_8_0_i27);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__mode_debug__write_var_insts_8_0_i56);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_debug_modes_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_errors_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);
MR_decl_entry(libs__file_util__maybe_flush_output_3_0);
MR_decl_entry(hlds__instmap__instmap_is_reachable_1_0);
MR_decl_entry(hlds__instmap__instmap_to_assoc_list_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_varset_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instvarset_2_0);
MR_decl_entry(io__flush_output_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_0);

MR_BEGIN_MODULE(check_hlds__mode_debug_module2)
	MR_init_entry1(check_hlds__mode_debug__mode_checkpoint_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_debug__mode_checkpoint_4_0);
	MR_init_label10(check_hlds__mode_debug__mode_checkpoint_4_0,2,4,5,7,10,8,6,11,12,13)
	MR_init_label10(check_hlds__mode_debug__mode_checkpoint_4_0,39,15,16,17,18,21,23,24,25,26)
	MR_init_label4(check_hlds__mode_debug__mode_checkpoint_4_0,20,30,31,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_checkpoint'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_debug__mode_checkpoint_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_debug_modes_2_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i2);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_4_0_i4);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i5);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_4_0_i7);
	}
	MR_sv(1) = (MR_Word) MR_string_const("Enter ", 6);
	MR_sv(6) = (MR_Integer) 1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_4_0_i6);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_4_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_4_0_i10);
	}
	MR_sv(1) = (MR_Word) MR_string_const("Exit ", 5);
	MR_sv(6) = (MR_Integer) 1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_4_0_i6);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("Delay ", 6);
	MR_sv(6) = (MR_Integer) 0;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_4_0_i6);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("Wake ", 5);
	MR_sv(6) = (MR_Integer) 0;
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i11);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i12);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i13);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_4_0_i15);
	}
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i30);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i16);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i17);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i18);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i21);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_4_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_to_assoc_list_2_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i23);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i24);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i25);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i26);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__write_var_insts_8_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i39);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tUnreachable\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i39);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		check_hlds__mode_debug__mode_checkpoint_4_0_i31);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_4_0_i33);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_debug_module3)
	MR_init_entry1(__Unify___check_hlds__mode_debug__port_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_debug__port_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_debug__port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__mode_debug_module4)
	MR_init_entry1(__Compare___check_hlds__mode_debug__port_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_debug__port_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_debug__port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__mode_debug_maybe_bunch_0(void)
{
	check_hlds__mode_debug_module0();
	check_hlds__mode_debug_module1();
	check_hlds__mode_debug_module2();
	check_hlds__mode_debug_module3();
	check_hlds__mode_debug_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__mode_debug__init(void);
void mercury__check_hlds__mode_debug__init_type_tables(void);
void mercury__check_hlds__mode_debug__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__mode_debug__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__mode_debug__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__mode_debug__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__mode_debug__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__mode_debug_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_debug__type_ctor_info_port_0,
		check_hlds__mode_debug__port_0_0);
	mercury__check_hlds__mode_debug__init_debugger();
}

void mercury__check_hlds__mode_debug__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_debug__type_ctor_info_port_0);
	}
}


void mercury__check_hlds__mode_debug__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__mode_debug__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__mode_debug);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__mode_debug__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__mode_debug__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
