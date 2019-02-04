/*
** Automatically generated from `java_util.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__java_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.java_util.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.java_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ml_backend.java_util.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "ml_backend.java_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "ml_backend.java_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ml_backend.java_util.c"
#line 49 "ml_backend.java_util.c"
#include "ml_backend.java_util.mh"

#line 52 "ml_backend.java_util.c"
#line 53 "ml_backend.java_util.c"
#ifndef ML_BACKEND__JAVA_UTIL_DECL_GUARD
#define ML_BACKEND__JAVA_UTIL_DECL_GUARD

#line 57 "ml_backend.java_util.c"
#line 58 "ml_backend.java_util.c"

#endif
#line 61 "ml_backend.java_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label10(ml_backend__java_util__java_binary_infix_op_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label8(ml_backend__java_util__java_binary_infix_op_2_0, 13,14,15,16,17,18,19,1)
MR_decl_label6(ml_backend__java_util__java_float_compare_op_2_0, 3,4,5,6,7,1)
MR_decl_label4(ml_backend__java_util__java_float_op_2_0, 3,4,5,1)
MR_decl_label6(ml_backend__java_util__java_string_compare_op_2_0, 3,4,5,6,7,1)
MR_decl_label10(ml_backend__java_util__java_unary_prefix_op_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_def_extern_entry(ml_backend__java_util__java_unary_prefix_op_2_0)
MR_def_extern_entry(ml_backend__java_util__java_string_compare_op_2_0)
MR_def_extern_entry(ml_backend__java_util__java_float_op_2_0)
MR_def_extern_entry(ml_backend__java_util__java_float_compare_op_2_0)
MR_def_extern_entry(ml_backend__java_util__java_binary_infix_op_2_0)




MR_BEGIN_MODULE(ml_backend__java_util_module0)
	MR_init_entry1(ml_backend__java_util__java_unary_prefix_op_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__java_util__java_unary_prefix_op_2_0);
	MR_init_label10(ml_backend__java_util__java_unary_prefix_op_2_0,3,4,5,6,7,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'java_unary_prefix_op'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__java_util__java_unary_prefix_op_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ml_backend__java_util__java_unary_prefix_op_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("~", 1);
	MR_proceed();
MR_def_label(ml_backend__java_util__java_unary_prefix_op_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(ml_backend__java_util__java_unary_prefix_op_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("mercury.String.hash_1_f_0", 25);
	MR_proceed();
MR_def_label(ml_backend__java_util__java_unary_prefix_op_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(ml_backend__java_util__java_unary_prefix_op_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("mercury.String.hash2_1_f_0", 26);
	MR_proceed();
MR_def_label(ml_backend__java_util__java_unary_prefix_op_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(ml_backend__java_util__java_unary_prefix_op_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("mercury.String.hash3_1_f_0", 26);
	MR_proceed();
MR_def_label(ml_backend__java_util__java_unary_prefix_op_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(ml_backend__java_util__java_unary_prefix_op_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("!", 1);
	MR_proceed();
MR_def_label(ml_backend__java_util__java_unary_prefix_op_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(ml_backend__java_util__java_unary_prefix_op_2_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("/* mkbody */ ", 13);
	MR_proceed();
MR_def_label(ml_backend__java_util__java_unary_prefix_op_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__java_util__java_unary_prefix_op_2_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("/* mktag */ ", 12);
	MR_proceed();
MR_def_label(ml_backend__java_util__java_unary_prefix_op_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__java_util__java_unary_prefix_op_2_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("/* strip_tag */ ", 16);
	MR_proceed();
MR_def_label(ml_backend__java_util__java_unary_prefix_op_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__java_util__java_unary_prefix_op_2_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(ml_backend__java_util__java_unary_prefix_op_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(ml_backend__java_util__java_unary_prefix_op_2_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("/* unmkbody */ ", 15);
	MR_proceed();
MR_def_label(ml_backend__java_util__java_unary_prefix_op_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* unmktag */ ", 14);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__java_util_module1)
	MR_init_entry1(ml_backend__java_util__java_string_compare_op_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__java_util__java_string_compare_op_2_0);
	MR_init_label6(ml_backend__java_util__java_string_compare_op_2_0,3,4,5,6,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'java_string_compare_op'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__java_util__java_string_compare_op_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(ml_backend__java_util__java_string_compare_op_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const("==", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_string_compare_op_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,20)) {
		MR_GOTO_LAB(ml_backend__java_util__java_string_compare_op_2_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const(">=", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_string_compare_op_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(ml_backend__java_util__java_string_compare_op_2_0_i5);
	}
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_string_compare_op_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,19)) {
		MR_GOTO_LAB(ml_backend__java_util__java_string_compare_op_2_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const("<=", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_string_compare_op_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(ml_backend__java_util__java_string_compare_op_2_0_i7);
	}
	MR_r2 = (MR_Word) MR_string_const("<", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_string_compare_op_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(ml_backend__java_util__java_string_compare_op_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_string_const("!=", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_string_compare_op_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__java_util_module2)
	MR_init_entry1(ml_backend__java_util__java_float_op_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__java_util__java_float_op_2_0);
	MR_init_label4(ml_backend__java_util__java_float_op_2_0,3,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'java_float_op'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__java_util__java_float_op_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,30)) {
		MR_GOTO_LAB(ml_backend__java_util__java_float_op_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_float_op_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,28)) {
		MR_GOTO_LAB(ml_backend__java_util__java_float_op_2_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const("-", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_float_op_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,27)) {
		MR_GOTO_LAB(ml_backend__java_util__java_float_op_2_0_i5);
	}
	MR_r2 = (MR_Word) MR_string_const("+", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_float_op_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,29)) {
		MR_GOTO_LAB(ml_backend__java_util__java_float_op_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_string_const("*", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_float_op_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__java_util_module3)
	MR_init_entry1(ml_backend__java_util__java_float_compare_op_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__java_util__java_float_compare_op_2_0);
	MR_init_label6(ml_backend__java_util__java_float_compare_op_2_0,3,4,5,6,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'java_float_compare_op'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__java_util__java_float_compare_op_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,31)) {
		MR_GOTO_LAB(ml_backend__java_util__java_float_compare_op_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const("==", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_float_compare_op_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,36)) {
		MR_GOTO_LAB(ml_backend__java_util__java_float_compare_op_2_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const(">=", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_float_compare_op_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,34)) {
		MR_GOTO_LAB(ml_backend__java_util__java_float_compare_op_2_0_i5);
	}
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_float_compare_op_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,35)) {
		MR_GOTO_LAB(ml_backend__java_util__java_float_compare_op_2_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const("<=", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_float_compare_op_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,33)) {
		MR_GOTO_LAB(ml_backend__java_util__java_float_compare_op_2_0_i7);
	}
	MR_r2 = (MR_Word) MR_string_const("<", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_float_compare_op_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,32)) {
		MR_GOTO_LAB(ml_backend__java_util__java_float_compare_op_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_string_const("!=", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_float_compare_op_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__java_util_module4)
	MR_init_entry1(ml_backend__java_util__java_binary_infix_op_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__java_util__java_binary_infix_op_2_0);
	MR_init_label10(ml_backend__java_util__java_binary_infix_op_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label8(ml_backend__java_util__java_binary_infix_op_2_0,13,14,15,16,17,18,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'java_binary_infix_op'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__java_util__java_binary_infix_op_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const("&", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const("|", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i5);
	}
	MR_r2 = (MR_Word) MR_string_const("^", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const("==", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i7);
	}
	MR_r2 = (MR_Word) MR_string_const("+", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i8);
	}
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,25)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i9);
	}
	MR_r2 = (MR_Word) MR_string_const(">=", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,23)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i10);
	}
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,24)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i11);
	}
	MR_r2 = (MR_Word) MR_string_const("<=", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,22)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i12);
	}
	MR_r2 = (MR_Word) MR_string_const("<", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i13);
	}
	MR_r2 = (MR_Word) MR_string_const("%", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i14);
	}
	MR_r2 = (MR_Word) MR_string_const("*", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i15);
	}
	MR_r2 = (MR_Word) MR_string_const("-", 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i16);
	}
	MR_r2 = (MR_Word) MR_string_const("&&", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i17);
	}
	MR_r2 = (MR_Word) MR_string_const("||", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i18);
	}
	MR_r2 = (MR_Word) MR_string_const("!=", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i19);
	}
	MR_r2 = (MR_Word) MR_string_const("<<", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(ml_backend__java_util__java_binary_infix_op_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_string_const(">>", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__java_util__java_binary_infix_op_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__java_util_maybe_bunch_0(void)
{
	ml_backend__java_util_module0();
	ml_backend__java_util_module1();
	ml_backend__java_util_module2();
	ml_backend__java_util_module3();
	ml_backend__java_util_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__java_util__init(void);
void mercury__ml_backend__java_util__init_type_tables(void);
void mercury__ml_backend__java_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__java_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__java_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__java_util__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__java_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__java_util_maybe_bunch_0();
	mercury__ml_backend__java_util__init_debugger();
}

void mercury__ml_backend__java_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ml_backend__java_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__java_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__java_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__java_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__java_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
