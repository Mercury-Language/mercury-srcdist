/*
** Automatically generated from `svvarset.m'
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
INIT mercury__svvarset__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 141 "io.int2"
#include "io.mh"

#line 28 "svvarset.c"
#line 149 "io.int2"
#include "string.mh"

#line 32 "svvarset.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 36 "svvarset.c"
#line 28 "time.int2"
#include "time.mh"

#line 40 "svvarset.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "svvarset.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 48 "svvarset.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 52 "svvarset.c"
#line 50 "array.opt"
#include "store.mh"

#line 56 "svvarset.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "svvarset.c"
#line 153 "io.opt"
#include "dir.mh"

#line 64 "svvarset.c"
#line 163 "io.opt"
#include "table_builtin.mh"

#line 68 "svvarset.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "svvarset.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "svvarset.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "svvarset.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 84 "svvarset.c"
#line 4 "char.opt"
#include "char.mh"

#line 88 "svvarset.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 92 "svvarset.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 96 "svvarset.c"
#line 4 "int.opt"
#include "int.mh"

#line 100 "svvarset.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 104 "svvarset.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "svvarset.c"
#line 109 "svvarset.c"
#include "svvarset.mh"

#line 112 "svvarset.c"
#line 113 "svvarset.c"
#ifndef SVVARSET_DECL_GUARD
#define SVVARSET_DECL_GUARD

#line 117 "svvarset.c"
#line 118 "svvarset.c"

#endif
#line 121 "svvarset.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label1(svvarset__bind_vars_3_0, 4)
MR_decl_label2(svvarset__delete_var_3_0, 3,5)
MR_decl_label1(svvarset__new_named_var_4_0, 3)
MR_decl_label2(svvarset__select_3_0, 3,5)
MR_def_extern_entry(svvarset__new_var_3_0)
MR_def_extern_entry(svvarset__new_named_var_4_0)
MR_def_extern_entry(svvarset__new_maybe_named_var_4_0)
MR_def_extern_entry(svvarset__new_uniquely_named_var_4_0)
MR_def_extern_entry(svvarset__new_vars_4_0)
MR_def_extern_entry(svvarset__delete_var_3_0)
MR_def_extern_entry(svvarset__delete_vars_3_0)
MR_def_extern_entry(svvarset__name_var_4_0)
MR_def_extern_entry(svvarset__bind_var_4_0)
MR_def_extern_entry(svvarset__bind_vars_3_0)
MR_def_extern_entry(svvarset__select_3_0)
MR_decl_static(fn__f_115_118_118_97_114_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)



MR_decl_entry(varset__new_var_3_0);

MR_BEGIN_MODULE(svvarset_module0)
	MR_init_entry1(svvarset__new_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svvarset__new_var_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svvarset__new_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(varset__new_var_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(svvarset_module1)
	MR_init_entry1(svvarset__new_named_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svvarset__new_named_var_4_0);
	MR_init_label1(svvarset__new_named_var_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_named_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svvarset__new_named_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr4 = MR_r3;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 0) + (MR_Integer) 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(3) = MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_tempr4;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tfield(0, MR_tempr3, 1);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		svvarset__new_named_var_4_0_i3);
MR_def_label(svvarset__new_named_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_maybe_named_var_4_0);

MR_BEGIN_MODULE(svvarset_module2)
	MR_init_entry1(svvarset__new_maybe_named_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svvarset__new_maybe_named_var_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_maybe_named_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svvarset__new_maybe_named_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(varset__new_maybe_named_var_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_uniquely_named_var_4_0);

MR_BEGIN_MODULE(svvarset_module3)
	MR_init_entry1(svvarset__new_uniquely_named_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svvarset__new_uniquely_named_var_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_uniquely_named_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svvarset__new_uniquely_named_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(varset__new_uniquely_named_var_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_vars_2_5_0);

MR_BEGIN_MODULE(svvarset_module4)
	MR_init_entry1(svvarset__new_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svvarset__new_vars_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svvarset__new_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(varset__new_vars_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__delete_2_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;

MR_BEGIN_MODULE(svvarset_module5)
	MR_init_entry1(svvarset__delete_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svvarset__delete_var_3_0);
	MR_init_label2(svvarset__delete_var_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svvarset__delete_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		svvarset__delete_var_3_0_i3);
MR_def_label(svvarset__delete_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		svvarset__delete_var_3_0_i5);
MR_def_label(svvarset__delete_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__delete_vars_3_0);

MR_BEGIN_MODULE(svvarset_module6)
	MR_init_entry1(svvarset__delete_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svvarset__delete_vars_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svvarset__delete_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(varset__delete_vars_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__name_var_4_0);

MR_BEGIN_MODULE(svvarset_module7)
	MR_init_entry1(svvarset__name_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svvarset__name_var_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'name_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svvarset__name_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(varset__name_var_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__bind_var_4_0);

MR_BEGIN_MODULE(svvarset_module8)
	MR_init_entry1(svvarset__bind_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svvarset__bind_var_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bind_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svvarset__bind_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(varset__bind_var_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__tree234_to_assoc_list_2_3_0);
MR_decl_entry(varset__bind_vars_2_3_0);

MR_BEGIN_MODULE(svvarset_module9)
	MR_init_entry1(svvarset__bind_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svvarset__bind_vars_3_0);
	MR_init_label1(svvarset__bind_vars_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bind_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svvarset__bind_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		svvarset__bind_vars_3_0_i4);
MR_def_label(svvarset__bind_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(varset__bind_vars_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(svvarset_module10)
	MR_init_entry1(svvarset__select_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svvarset__select_3_0);
	MR_init_label2(svvarset__select_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svvarset__select_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tempr3;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		svvarset__select_3_0_i3);
MR_def_label(svvarset__select_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		svvarset__select_3_0_i5);
MR_def_label(svvarset__select_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(svvarset_module11)
	MR_init_entry1(fn__f_115_118_118_97_114_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_118_118_97_114_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_118_118_97_114_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__svvarset_maybe_bunch_0(void)
{
	svvarset_module0();
	svvarset_module1();
	svvarset_module2();
	svvarset_module3();
	svvarset_module4();
	svvarset_module5();
	svvarset_module6();
	svvarset_module7();
	svvarset_module8();
	svvarset_module9();
	svvarset_module10();
	svvarset_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__svvarset__init(void);
void mercury__svvarset__init_type_tables(void);
void mercury__svvarset__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__svvarset__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__svvarset__init_complexity_procs(void);
#endif

void mercury__svvarset__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__svvarset_maybe_bunch_0();
	mercury__svvarset__init_debugger();
}

void mercury__svvarset__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__svvarset__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__svvarset__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__svvarset);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__svvarset__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
