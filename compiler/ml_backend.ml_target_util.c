/*
** Automatically generated from `ml_target_util.m'
** by the Mercury compiler,
** version rotd-2011-10-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_target_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_target_util.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ml_backend.ml_target_util.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ml_backend.ml_target_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ml_backend.ml_target_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ml_backend.ml_target_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "ml_backend.ml_target_util.c"
#line 49 "ml_backend.ml_target_util.c"
#include "ml_backend.ml_target_util.mh"

#line 52 "ml_backend.ml_target_util.c"
#line 53 "ml_backend.ml_target_util.c"
#ifndef ML_BACKEND__ML_TARGET_UTIL_DECL_GUARD
#define ML_BACKEND__ML_TARGET_UTIL_DECL_GUARD

#line 57 "ml_backend.ml_target_util.c"
#line 58 "ml_backend.ml_target_util.c"

#endif
#line 61 "ml_backend.ml_target_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label1(fn__ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_0, 2)
MR_decl_label1(fn__ml_backend__ml_target_util__globals_target_supports_computed_goto_1_0, 2)
MR_decl_label1(fn__ml_backend__ml_target_util__globals_target_supports_goto_1_0, 2)
MR_decl_label1(fn__ml_backend__ml_target_util__globals_target_supports_int_switch_1_0, 2)
MR_decl_label1(fn__ml_backend__ml_target_util__globals_target_supports_string_switch_1_0, 2)
MR_decl_label6(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0, 3,4,5,6,7,8)
MR_decl_label6(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0, 3,4,5,6,7,8)
MR_decl_label6(fn__ml_backend__ml_target_util__target_supports_goto_1_0, 3,4,5,6,7,8)
MR_decl_label6(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0, 3,4,5,6,7,8)
MR_decl_label6(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0, 3,4,5,6,7,8)
MR_decl_label6(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0, 3,4,5,6,7,8)
MR_def_extern_entry(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0)
MR_def_extern_entry(fn__ml_backend__ml_target_util__globals_target_supports_int_switch_1_0)
MR_def_extern_entry(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0)
MR_def_extern_entry(fn__ml_backend__ml_target_util__globals_target_supports_string_switch_1_0)
MR_def_extern_entry(fn__ml_backend__ml_target_util__target_supports_goto_1_0)
MR_def_extern_entry(fn__ml_backend__ml_target_util__globals_target_supports_goto_1_0)
MR_def_extern_entry(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0)
MR_def_extern_entry(fn__ml_backend__ml_target_util__globals_target_supports_computed_goto_1_0)
MR_def_extern_entry(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0)
MR_def_extern_entry(fn__ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_0)
MR_def_extern_entry(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0)



extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(fn__require__unexpected_3_0);

MR_BEGIN_MODULE(ml_backend__ml_target_util_module0)
	MR_init_entry1(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_target_util__target_supports_int_switch_1_0);
	MR_init_label6(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'target_supports_int_switch'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_target_util__target_supports_int_switch_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_int_switch\'/1", 65);
	MR_r4 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_tailcall_ent(fn__require__unexpected_3_0);
MR_def_label(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_int_switch\'/1", 65);
	MR_r4 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_tailcall_ent(fn__require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_target_2_0);

MR_BEGIN_MODULE(ml_backend__ml_target_util_module1)
	MR_init_entry1(fn__ml_backend__ml_target_util__globals_target_supports_int_switch_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_target_util__globals_target_supports_int_switch_1_0);
	MR_init_label1(fn__ml_backend__ml_target_util__globals_target_supports_int_switch_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'globals_target_supports_int_switch'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_target_util__globals_target_supports_int_switch_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__ml_backend__ml_target_util__globals_target_supports_int_switch_1_0_i2);
MR_def_label(fn__ml_backend__ml_target_util__globals_target_supports_int_switch_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__ml_backend__ml_target_util__target_supports_int_switch_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_target_util_module2)
	MR_init_entry1(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_target_util__target_supports_string_switch_1_0);
	MR_init_label6(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'target_supports_string_switch'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_target_util__target_supports_string_switch_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_string_switch\'/1", 68);
	MR_r4 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_tailcall_ent(fn__require__unexpected_3_0);
MR_def_label(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_string_switch\'/1", 68);
	MR_r4 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_tailcall_ent(fn__require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_target_util_module3)
	MR_init_entry1(fn__ml_backend__ml_target_util__globals_target_supports_string_switch_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_target_util__globals_target_supports_string_switch_1_0);
	MR_init_label1(fn__ml_backend__ml_target_util__globals_target_supports_string_switch_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'globals_target_supports_string_switch'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_target_util__globals_target_supports_string_switch_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__ml_backend__ml_target_util__globals_target_supports_string_switch_1_0_i2);
MR_def_label(fn__ml_backend__ml_target_util__globals_target_supports_string_switch_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__ml_backend__ml_target_util__target_supports_string_switch_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_target_util_module4)
	MR_init_entry1(fn__ml_backend__ml_target_util__target_supports_goto_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_target_util__target_supports_goto_1_0);
	MR_init_label6(fn__ml_backend__ml_target_util__target_supports_goto_1_0,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'target_supports_goto'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_target_util__target_supports_goto_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_goto_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_goto_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_goto_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_goto_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_goto_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_goto_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_goto_1_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_goto_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_goto_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_goto_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_goto_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_goto\'/1", 59);
	MR_r4 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_tailcall_ent(fn__require__unexpected_3_0);
MR_def_label(fn__ml_backend__ml_target_util__target_supports_goto_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_goto\'/1", 59);
	MR_r4 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_tailcall_ent(fn__require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_target_util_module5)
	MR_init_entry1(fn__ml_backend__ml_target_util__globals_target_supports_goto_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_target_util__globals_target_supports_goto_1_0);
	MR_init_label1(fn__ml_backend__ml_target_util__globals_target_supports_goto_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'globals_target_supports_goto'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_target_util__globals_target_supports_goto_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__ml_backend__ml_target_util__globals_target_supports_goto_1_0_i2);
MR_def_label(fn__ml_backend__ml_target_util__globals_target_supports_goto_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__ml_backend__ml_target_util__target_supports_goto_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_target_util_module6)
	MR_init_entry1(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0);
	MR_init_label6(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'target_supports_computed_goto'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_computed_goto\'/1", 68);
	MR_r4 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_tailcall_ent(fn__require__unexpected_3_0);
MR_def_label(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_computed_goto\'/1", 68);
	MR_r4 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_tailcall_ent(fn__require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_target_util_module7)
	MR_init_entry1(fn__ml_backend__ml_target_util__globals_target_supports_computed_goto_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_target_util__globals_target_supports_computed_goto_1_0);
	MR_init_label1(fn__ml_backend__ml_target_util__globals_target_supports_computed_goto_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'globals_target_supports_computed_goto'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_target_util__globals_target_supports_computed_goto_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__ml_backend__ml_target_util__globals_target_supports_computed_goto_1_0_i2);
MR_def_label(fn__ml_backend__ml_target_util__globals_target_supports_computed_goto_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__ml_backend__ml_target_util__target_supports_computed_goto_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ml_backend__ml_target_util_module8)
	MR_init_entry1(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0);
	MR_init_label6(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'target_supports_break_and_continue'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_break_and_continue\'/1", 73);
	MR_r3 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_break_and_continue\'/1", 73);
	MR_r3 = (MR_Word) MR_string_const("target x86_64 with --high-level-code", 36);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_target_util_module9)
	MR_init_entry1(fn__ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_0);
	MR_init_label1(fn__ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'globals_target_supports_break_and_continue'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_0_i2);
MR_def_label(fn__ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__ml_backend__ml_target_util__target_supports_break_and_continue_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_target_util_module10)
	MR_init_entry1(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_target_util__target_supports_inheritence_1_0);
	MR_init_label6(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'target_supports_inheritence'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_target_util__target_supports_inheritence_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_inheritence\'/1", 66);
	MR_r4 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_tailcall_ent(fn__require__unexpected_3_0);
MR_def_label(fn__ml_backend__ml_target_util__target_supports_inheritence_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_target_util", 25);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.ml_target_util.target_supports_inheritence\'/1", 66);
	MR_r4 = (MR_Word) MR_string_const("target_x86_64 and --high-level-code", 35);
	MR_np_tailcall_ent(fn__require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_target_util_maybe_bunch_0(void)
{
	ml_backend__ml_target_util_module0();
	ml_backend__ml_target_util_module1();
	ml_backend__ml_target_util_module2();
	ml_backend__ml_target_util_module3();
	ml_backend__ml_target_util_module4();
	ml_backend__ml_target_util_module5();
	ml_backend__ml_target_util_module6();
	ml_backend__ml_target_util_module7();
	ml_backend__ml_target_util_module8();
	ml_backend__ml_target_util_module9();
	ml_backend__ml_target_util_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_target_util__init(void);
void mercury__ml_backend__ml_target_util__init_type_tables(void);
void mercury__ml_backend__ml_target_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_target_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_target_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ml_target_util__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ml_target_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_target_util_maybe_bunch_0();
	mercury__ml_backend__ml_target_util__init_debugger();
}

void mercury__ml_backend__ml_target_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ml_backend__ml_target_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_target_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_target_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_target_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ml_target_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
