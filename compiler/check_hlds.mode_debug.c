/*
** Automatically generated from `mode_debug.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__mode_debug__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "check_hlds.mode_debug.c"
#include "check_hlds.mode_debug.mh"

#line 27 "check_hlds.mode_debug.c"
#line 530 "../library/io.int"
#include "io.mh"

#line 31 "check_hlds.mode_debug.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 35 "check_hlds.mode_debug.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "check_hlds.mode_debug.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "check_hlds.mode_debug.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 47 "check_hlds.mode_debug.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "check_hlds.mode_debug.c"
#line 52 "check_hlds.mode_debug.c"
#ifndef CHECK_HLDS__MODE_DEBUG_DECL_GUARD
#define CHECK_HLDS__MODE_DEBUG_DECL_GUARD

#line 56 "check_hlds.mode_debug.c"
#line 57 "check_hlds.mode_debug.c"

#endif
#line 60 "check_hlds.mode_debug.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__mode_debug__type_ctor_info_port_0;
MR_decl_label1(check_hlds__mode_debug__identical_insts_2_0, 1)
MR_decl_label8(check_hlds__mode_debug__mode_checkpoint_6_0, 2,4,5,8,9,10,11,12)
MR_decl_label8(check_hlds__mode_debug__mode_checkpoint_6_0, 13,16,18,19,20,21,14,23)
MR_decl_label8(check_hlds__mode_debug__mode_checkpoint_6_0, 6,26,32,33,34,35,36,37)
MR_decl_label8(check_hlds__mode_debug__mode_checkpoint_6_0, 40,42,43,44,45,38,47,49)
MR_decl_label5(check_hlds__mode_debug__mode_checkpoint_6_0, 30,50,51,55,56)
MR_decl_label8(check_hlds__mode_debug__write_var_insts_8_0, 56,4,9,12,32,16,17,18)
MR_decl_label8(check_hlds__mode_debug__write_var_insts_8_0, 6,20,21,22,25,26,24,27)
MR_decl_label2(check_hlds__mode_debug__write_var_insts_8_0, 58,59)
MR_decl_static(check_hlds__mode_debug__identical_insts_2_0)
MR_decl_static(check_hlds__mode_debug__write_var_insts_8_0)
MR_def_extern_entry(check_hlds__mode_debug__mode_checkpoint_6_0)
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
	MR_init_label1(check_hlds__mode_debug__identical_insts_2_0,1)
MR_BEGIN_CODE

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
#line 167 "mode_debug.m"

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 164 "check_hlds.mode_debug.c"
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

MR_decl_entry(hlds__instmap__lookup_var_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_decl_entry(io__write_string_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_structured_inst_5_0);

MR_BEGIN_MODULE(check_hlds__mode_debug_module1)
	MR_init_entry1(check_hlds__mode_debug__write_var_insts_8_0);
	MR_init_label8(check_hlds__mode_debug__write_var_insts_8_0,56,4,9,12,32,16,17,18)
	MR_init_label8(check_hlds__mode_debug__write_var_insts_8_0,6,20,21,22,25,26,24,27)
	MR_init_label2(check_hlds__mode_debug__write_var_insts_8_0,58,59)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
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
#line 167 "mode_debug.m"

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 248 "check_hlds.mode_debug.c"
	MR_RELEASE_GLOBAL_LOCK("identical_insts");
if (!MercurySuccessIndicator) MR_GOTO_LAB(check_hlds__mode_debug__write_var_insts_8_0_i9);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(check_hlds__mode_debug__write_var_insts_8_0_i32);
MR_def_label(check_hlds__mode_debug__write_var_insts_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
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
MR_decl_entry(parse_tree__prog_out__maybe_report_stats_3_0);
MR_decl_entry(parse_tree__prog_out__maybe_flush_output_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(hlds__instmap__is_reachable_1_0);
MR_decl_entry(hlds__instmap__to_assoc_list_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_varset_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instvarset_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_0);
MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(check_hlds__mode_debug_module2)
	MR_init_entry1(check_hlds__mode_debug__mode_checkpoint_6_0);
	MR_init_label8(check_hlds__mode_debug__mode_checkpoint_6_0,2,4,5,8,9,10,11,12)
	MR_init_label8(check_hlds__mode_debug__mode_checkpoint_6_0,13,16,18,19,20,21,14,23)
	MR_init_label8(check_hlds__mode_debug__mode_checkpoint_6_0,6,26,32,33,34,35,36,37)
	MR_init_label8(check_hlds__mode_debug__mode_checkpoint_6_0,40,42,43,44,45,38,47,49)
	MR_init_label5(check_hlds__mode_debug__mode_checkpoint_6_0,30,50,51,55,56)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_debug__mode_checkpoint_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_debug_modes_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i2);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_6_0_i4);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i5);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("Enter ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i8);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i9);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i10);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_report_stats_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i11);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_flush_output_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i12);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i13);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i16);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_6_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__to_assoc_list_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i18);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i19);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i20);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i21);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_debug__write_var_insts_8_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i23);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("\tUnreachable\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i23);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i49);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_6_0_i26);
	}
	MR_r1 = (MR_Word) MR_string_const("Wake ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i50);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_6_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const("Exit ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i32);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i33);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i34);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_report_stats_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i35);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_flush_output_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i36);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i37);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i40);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_debug__mode_checkpoint_6_0_i38);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__to_assoc_list_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i42);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i43);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i44);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i45);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_debug__write_var_insts_8_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i47);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = (MR_Word) MR_string_const("\tUnreachable\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i47);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i49);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i55);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Delay ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i50);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i51);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(6);
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i55);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		check_hlds__mode_debug__mode_checkpoint_6_0_i56);
MR_def_label(check_hlds__mode_debug__mode_checkpoint_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_debug_module3)
	MR_init_entry1(__Unify___check_hlds__mode_debug__port_0_0);
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
void mercury__check_hlds__mode_debug__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__mode_debug__init_complexity_procs(void);
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

void mercury__check_hlds__mode_debug__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__mode_debug__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
