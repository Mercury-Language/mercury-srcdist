/*
** Automatically generated from `ml_switch_gen.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__ml_backend__ml_switch_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ml_backend.ml_switch_gen.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ml_backend.ml_switch_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ml_backend.ml_switch_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ml_backend.ml_switch_gen.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "ml_backend.ml_switch_gen.c"
#line 44 "ml_backend.ml_switch_gen.c"
#include "ml_backend.ml_switch_gen.mh"

#line 47 "ml_backend.ml_switch_gen.c"
#line 48 "ml_backend.ml_switch_gen.c"
#ifndef ML_BACKEND__ML_SWITCH_GEN_DECL_GUARD
#define ML_BACKEND__ML_SWITCH_GEN_DECL_GUARD

#line 52 "ml_backend.ml_switch_gen.c"
#line 53 "ml_backend.ml_switch_gen.c"

#endif
#line 56 "ml_backend.ml_switch_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0, 14,16,17,15,12,24,25,29)
MR_decl_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0, 28,31,26,33,36,38,35,20)
MR_decl_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0, 21,45,46,47,41,42,58,57)
MR_decl_label4(ml_backend__ml_switch_gen__ml_gen_switch_9_0, 61,55,64,51)
MR_decl_label4(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0, 4,6,7,3)
MR_decl_label8(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0, 6,5,41,8,12,13,14,15)
MR_decl_label2(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0, 16,17)
MR_decl_label6(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0, 4,6,10,11,12,3)
MR_decl_label8(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0, 2,3,4,6,8,9,11,5)
MR_decl_label5(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0, 13,14,15,16,17)
MR_decl_label5(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0, 4,5,6,7,3)
MR_decl_label5(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0, 2,8,15,10,12)
MR_decl_label5(ml_backend__ml_switch_gen__target_supports_goto_1_0, 2,6,13,9,11)
MR_decl_label5(ml_backend__ml_switch_gen__target_supports_int_switch_1_0, 2,5,13,9,11)
MR_decl_label5(ml_backend__ml_switch_gen__target_supports_string_switch_1_0, 2,7,8,10,3)
MR_def_extern_entry(ml_backend__ml_switch_gen__target_supports_int_switch_1_0)
MR_def_extern_entry(ml_backend__ml_switch_gen__target_supports_string_switch_1_0)
MR_def_extern_entry(ml_backend__ml_switch_gen__target_supports_goto_1_0)
MR_def_extern_entry(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0)
MR_decl_static(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0)
MR_decl_static(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0)
MR_def_extern_entry(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0)
MR_decl_static(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0)
MR_decl_static(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0)
MR_def_extern_entry(ml_backend__ml_switch_gen__ml_gen_switch_9_0)

MR_decl_entry(libs__globals__get_target_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(fn__libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module0)
	MR_init_entry1(ml_backend__ml_switch_gen__target_supports_int_switch_1_0);
	MR_init_label5(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,2,5,13,9,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__target_supports_int_switch_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i2);
MR_def_label(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i11));
MR_def_label(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 0 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i13);
MR_def_label(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module1)
	MR_init_entry1(ml_backend__ml_switch_gen__target_supports_string_switch_1_0);
	MR_init_label5(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,2,7,8,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__target_supports_string_switch_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i2);
MR_def_label(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i8) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i10));
MR_def_label(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i3);
MR_def_label(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i3);
MR_def_label(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i3);
MR_def_label(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module2)
	MR_init_entry1(ml_backend__ml_switch_gen__target_supports_goto_1_0);
	MR_init_label5(ml_backend__ml_switch_gen__target_supports_goto_1_0,2,6,13,9,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__target_supports_goto_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__ml_switch_gen__target_supports_goto_1_0_i2);
MR_def_label(ml_backend__ml_switch_gen__target_supports_goto_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i6) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i11));
MR_def_label(ml_backend__ml_switch_gen__target_supports_goto_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 0 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(ml_backend__ml_switch_gen__target_supports_goto_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_switch_gen__target_supports_goto_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_goto_1_0_i13);
MR_def_label(ml_backend__ml_switch_gen__target_supports_goto_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_goto_1_0_i13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module3)
	MR_init_entry1(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0);
	MR_init_label5(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,2,8,15,10,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__target_supports_computed_goto_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i2);
MR_def_label(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i15) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i15) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i8) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i8) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i10) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i12));
MR_def_label(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 0 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i15);
MR_def_label(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_variable_type_3_0);
MR_decl_entry(ml_backend__ml_unify_gen__ml_cons_id_to_tag_4_0);
MR_decl_entry(fn__backend_libs__switch_util__switch_priority_1_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module4)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0);
	MR_init_label5(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0_i4);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_unify_gen__ml_cons_id_to_tag_4_0,
		ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0_i5);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__switch_util__switch_priority_1_0,
		ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0_i6);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0,
		ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0_i7);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_failure_5_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(ml_backend__ml_code_gen__ml_gen_goal_6_0);
MR_decl_entry(ml_backend__ml_unify_gen__ml_gen_tag_test_7_0);
MR_decl_entry(ml_backend__ml_code_gen__ml_gen_goal_5_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_block_3_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module5)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0);
	MR_init_label8(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,6,5,41,8,12,13,14,15)
	MR_init_label2(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0_i41);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0_i5);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_failure_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0_i6);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r2 = (MR_Word) MR_string_const("switch failure", 14);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r7 = MR_ctfield(0, MR_tempr1, 3);
	MR_r9 = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0_i8);
	}
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0_i8);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r7;
	MR_r3 = MR_r6;
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r9;
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(ml_backend__ml_unify_gen__ml_gen_tag_test_7_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0_i12);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0_i13);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0_i14);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0_i15);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0_i16);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0_i17);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module6)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0);
	MR_init_label4(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,4,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__ml_switch_generate_default_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_failure_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_default_6_0_i4);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_default_6_0_i7);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module7)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0);
	MR_init_label6(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,4,6,10,11,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(3, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_sv(3), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(3), 0) = MR_tempr3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i10);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r6, 0);
	MR_tag_alloc_heap(MR_sv(3), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(3), 0) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i10);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m: invalid tag type", 33);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i10);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i11);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i12);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_type_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0);
MR_decl_entry(fn__backend_libs__foreign__to_exported_type_2_0);
MR_decl_entry(__Unify___backend_libs__foreign__exported_type_0_0);
MR_decl_entry(backend_libs__switch_util__type_range_5_0);
MR_decl_entry(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module8)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0);
	MR_init_label8(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,2,3,4,6,8,9,11,5)
	MR_init_label5(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i2);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_type_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i3);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i4);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(6), 0) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i6);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i5);
	}
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_exported_type_2_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i8);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___backend_libs__foreign__exported_type_0_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i9);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i5);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(backend_libs__switch_util__type_range_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i11);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i13);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i14);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i15);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i16);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i17);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_extended_case_0;
MR_decl_entry(list__sort_and_remove_dups_2_0);
MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);
MR_decl_entry(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(list__length_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);
MR_decl_entry(ml_backend__ml_string_switch__generate_9_0);
MR_decl_entry(ml_backend__ml_tag_switch__generate_9_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module9)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_gen_switch_9_0);
	MR_init_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0,14,16,17,15,12,24,25,29)
	MR_init_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0,28,31,26,33,36,38,35,20)
	MR_init_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0,21,45,46,47,41,42,58,57)
	MR_init_label4(ml_backend__ml_switch_gen__ml_gen_switch_9_0,61,55,64,51)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__ml_gen_switch_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_lookup_tags_4_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i2);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i3);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i4);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i5);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i6);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i7);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_globals_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i8);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 355;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i9);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(12) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(13));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i12);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i14);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r7 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,10)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i16);
	}
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r6 = MR_sv(10);
	MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i15);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,11)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i17);
	}
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r6 = MR_sv(10);
	MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i15);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(13));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i21);
	}
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i24);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 360;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i25);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(9) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i20);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i29);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i28);
	}
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i26);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i31);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i20);
	}
	MR_r1 = MR_sv(7);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_goto_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i33);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i20);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i36);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i35);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 253;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i38);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i20);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(ml_backend__ml_string_switch__generate_9_0);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i42);
	}
	if (MR_INT_NE(MR_sv(6),2)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i42);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i45);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 361;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i46);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(9) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i41);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i47);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i41);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(ml_backend__ml_tag_switch__generate_9_0);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i51);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i57);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i58);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i55);
	}
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i55);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i61);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i55);
	}
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i51);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i64);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i51);
	}
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(ml_backend__ml_switch_gen__ml_switch_generate_if_else_chain_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_switch_gen_maybe_bunch_0(void)
{
	ml_backend__ml_switch_gen_module0();
	ml_backend__ml_switch_gen_module1();
	ml_backend__ml_switch_gen_module2();
	ml_backend__ml_switch_gen_module3();
	ml_backend__ml_switch_gen_module4();
	ml_backend__ml_switch_gen_module5();
	ml_backend__ml_switch_gen_module6();
	ml_backend__ml_switch_gen_module7();
	ml_backend__ml_switch_gen_module8();
	ml_backend__ml_switch_gen_module9();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_switch_gen__init(void);
void mercury__ml_backend__ml_switch_gen__init_type_tables(void);
void mercury__ml_backend__ml_switch_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_switch_gen__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_switch_gen__init_complexity_procs(void);
#endif

void mercury__ml_backend__ml_switch_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_switch_gen_maybe_bunch_0();
	mercury__ml_backend__ml_switch_gen__init_debugger();
}

void mercury__ml_backend__ml_switch_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ml_backend__ml_switch_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_switch_gen__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_switch_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
