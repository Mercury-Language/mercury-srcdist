/*
** Automatically generated from `prog_mutable.m'
** by the Mercury compiler,
** version rotd-2012-08-08, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__parse_tree__prog_mutable__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "parse_tree.prog_mutable.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "parse_tree.prog_mutable.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "parse_tree.prog_mutable.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "parse_tree.prog_mutable.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "parse_tree.prog_mutable.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "parse_tree.prog_mutable.c"
#line 49 "parse_tree.prog_mutable.c"
#include "parse_tree.prog_mutable.mh"

#line 52 "parse_tree.prog_mutable.c"
#line 53 "parse_tree.prog_mutable.c"
#ifndef PARSE_TREE__PROG_MUTABLE_DECL_GUARD
#define PARSE_TREE__PROG_MUTABLE_DECL_GUARD

#line 57 "parse_tree.prog_mutable.c"
#line 58 "parse_tree.prog_mutable.c"

#endif
#line 61 "parse_tree.prog_mutable.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];
MR_decl_label4(fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0, 2,3,6,8)
MR_decl_label4(fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0, 2,3,6,8)
MR_decl_label8(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0, 2,3,6,8,10,11,13,14)
MR_decl_label8(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0, 2,3,6,8,10,11,13,14)
MR_decl_label3(fn__parse_tree__prog_mutable__lock_pred_decl_3_0, 2,3,6)
MR_decl_label4(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0, 2,6,4,9)
MR_decl_label1(fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0, 2)
MR_decl_label3(fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0, 2,3,6)
MR_decl_label1(fn__parse_tree__prog_mutable__mutable_init_pred_sym_name_2_0, 2)
MR_decl_label1(fn__parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_0, 2)
MR_decl_label3(fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0, 2,3,6)
MR_decl_label1(fn__parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_0, 2)
MR_decl_label1(fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0, 2)
MR_decl_label1(fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0, 2)
MR_decl_label1(fn__parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_0, 2)
MR_decl_label1(fn__parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_0, 2)
MR_decl_label1(fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0, 2)
MR_decl_label4(fn__parse_tree__prog_mutable__std_get_pred_decl_5_0, 2,3,6,8)
MR_decl_label4(fn__parse_tree__prog_mutable__std_set_pred_decl_5_0, 2,3,6,8)
MR_decl_label3(fn__parse_tree__prog_mutable__unlock_pred_decl_3_0, 2,3,6)
MR_decl_label4(fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0, 2,3,6,8)
MR_decl_label4(fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0, 2,3,6,8)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__lock_pred_decl_3_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__unlock_pred_decl_3_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__std_get_pred_decl_5_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__std_set_pred_decl_5_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_init_pred_sym_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_mutable__mutable_mutex_var_name_1_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
2
},
{
0
},
};



MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(parse_tree__prog_mutable_module0)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_0);
	MR_init_label1(fn__parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_unsafe_get_pred_sym_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unsafe_get_", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
MR_decl_entry(fn__varset__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_1_0);

MR_BEGIN_MODULE(parse_tree__prog_mutable_module1)
	MR_init_entry1(fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0);
	MR_init_label4(fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0,2,3,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_pred_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("unsafe_get_", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0_i8);
MR_def_label(fn__parse_tree__prog_mutable__unsafe_get_pred_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 15);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(8);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_r2, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 11) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 12) = MR_sv(6);
	MR_tfield(0, MR_r2, 13) = MR_sv(3);
	MR_tfield(0, MR_r2, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module2)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0);
	MR_init_label1(fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_unsafe_set_pred_sym_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unsafe_set_", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_mode__in_mode_1_0);

MR_BEGIN_MODULE(parse_tree__prog_mutable_module3)
	MR_init_entry1(fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0);
	MR_init_label4(fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0,2,3,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_pred_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("unsafe_set_", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0_i8);
MR_def_label(fn__parse_tree__prog_mutable__unsafe_set_pred_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 15);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(8);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_r2, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 11) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 12) = MR_sv(6);
	MR_tfield(0, MR_r2, 13) = MR_sv(3);
	MR_tfield(0, MR_r2, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module4)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_0);
	MR_init_label1(fn__parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_lock_pred_sym_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lock_", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module5)
	MR_init_entry1(fn__parse_tree__prog_mutable__lock_pred_decl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__lock_pred_decl_3_0);
	MR_init_label3(fn__parse_tree__prog_mutable__lock_pred_decl_3_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_pred_decl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__lock_pred_decl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__lock_pred_decl_3_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__lock_pred_decl_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__lock_pred_decl_3_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__lock_pred_decl_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("lock_", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__lock_pred_decl_3_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__lock_pred_decl_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 12) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module6)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_0);
	MR_init_label1(fn__parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_unlock_pred_sym_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unlock_", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module7)
	MR_init_entry1(fn__parse_tree__prog_mutable__unlock_pred_decl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__unlock_pred_decl_3_0);
	MR_init_label3(fn__parse_tree__prog_mutable__unlock_pred_decl_3_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_pred_decl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__unlock_pred_decl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__unlock_pred_decl_3_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__unlock_pred_decl_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__unlock_pred_decl_3_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__unlock_pred_decl_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("unlock_", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__unlock_pred_decl_3_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__unlock_pred_decl_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 12) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module8)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0);
	MR_init_label1(fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_get_pred_sym_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("get_", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_get_pred_sym_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module9)
	MR_init_entry1(fn__parse_tree__prog_mutable__std_get_pred_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__std_get_pred_decl_5_0);
	MR_init_label4(fn__parse_tree__prog_mutable__std_get_pred_decl_5_0,2,3,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'std_get_pred_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__std_get_pred_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__std_get_pred_decl_5_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__std_get_pred_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__std_get_pred_decl_5_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__std_get_pred_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("get_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__std_get_pred_decl_5_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__std_get_pred_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		fn__parse_tree__prog_mutable__std_get_pred_decl_5_0_i8);
MR_def_label(fn__parse_tree__prog_mutable__std_get_pred_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 15);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(8);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_r2, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 11) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 12) = MR_sv(6);
	MR_tfield(0, MR_r2, 13) = MR_sv(3);
	MR_tfield(0, MR_r2, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module10)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0);
	MR_init_label1(fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_set_pred_sym_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("set_", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_set_pred_sym_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module11)
	MR_init_entry1(fn__parse_tree__prog_mutable__std_set_pred_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__std_set_pred_decl_5_0);
	MR_init_label4(fn__parse_tree__prog_mutable__std_set_pred_decl_5_0,2,3,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'std_set_pred_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__std_set_pred_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__std_set_pred_decl_5_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__std_set_pred_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__std_set_pred_decl_5_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__std_set_pred_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("set_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__std_set_pred_decl_5_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__std_set_pred_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		fn__parse_tree__prog_mutable__std_set_pred_decl_5_0_i8);
MR_def_label(fn__parse_tree__prog_mutable__std_set_pred_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 15);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(8);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_r2, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 11) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 12) = MR_sv(6);
	MR_tfield(0, MR_r2, 13) = MR_sv(3);
	MR_tfield(0, MR_r2, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module12)
	MR_init_entry1(fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0);
	MR_init_label4(fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0,2,3,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constant_get_pred_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("get_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0_i8);
MR_def_label(fn__parse_tree__prog_mutable__constant_get_pred_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 15);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(8);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_r2, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 12) = MR_sv(6);
	MR_tfield(0, MR_r2, 13) = MR_sv(3);
	MR_tfield(0, MR_r2, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module13)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0);
	MR_init_label1(fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_secret_set_pred_sym_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("secret_initialization_only_set_", 31);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module14)
	MR_init_entry1(fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0);
	MR_init_label4(fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0,2,3,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constant_set_pred_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("secret_initialization_only_set_", 31);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0_i8);
MR_def_label(fn__parse_tree__prog_mutable__constant_set_pred_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 15);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(8);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_r2, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 11) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 12) = MR_sv(6);
	MR_tfield(0, MR_r2, 13) = MR_sv(3);
	MR_tfield(0, MR_r2, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__io_state_type_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__di_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__uo_mode_0_0);

MR_BEGIN_MODULE(parse_tree__prog_mutable_module15)
	MR_init_entry1(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__io_get_pred_decl_5_0);
	MR_init_label8(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0,2,3,6,8,10,11,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'io_get_pred_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__io_get_pred_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__io_get_pred_decl_5_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__io_get_pred_decl_5_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("get_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__io_get_pred_decl_5_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		fn__parse_tree__prog_mutable__io_get_pred_decl_5_0_i8);
MR_def_label(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		fn__parse_tree__prog_mutable__io_get_pred_decl_5_0_i10);
MR_def_label(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		fn__parse_tree__prog_mutable__io_get_pred_decl_5_0_i11);
MR_def_label(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		fn__parse_tree__prog_mutable__io_get_pred_decl_5_0_i13);
MR_def_label(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		fn__parse_tree__prog_mutable__io_get_pred_decl_5_0_i14);
MR_def_label(fn__parse_tree__prog_mutable__io_get_pred_decl_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(9);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 15);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(6);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_r2, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 12) = MR_sv(4);
	MR_tfield(0, MR_r2, 13) = MR_sv(1);
	MR_tfield(0, MR_r2, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module16)
	MR_init_entry1(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__io_set_pred_decl_5_0);
	MR_init_label8(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0,2,3,6,8,10,11,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'io_set_pred_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__io_set_pred_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__io_set_pred_decl_5_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__io_set_pred_decl_5_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("set_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__io_set_pred_decl_5_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		fn__parse_tree__prog_mutable__io_set_pred_decl_5_0_i8);
MR_def_label(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		fn__parse_tree__prog_mutable__io_set_pred_decl_5_0_i10);
MR_def_label(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		fn__parse_tree__prog_mutable__io_set_pred_decl_5_0_i11);
MR_def_label(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		fn__parse_tree__prog_mutable__io_set_pred_decl_5_0_i13);
MR_def_label(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		fn__parse_tree__prog_mutable__io_set_pred_decl_5_0_i14);
MR_def_label(fn__parse_tree__prog_mutable__io_set_pred_decl_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(9);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 15);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(6);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_r2, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 12) = MR_sv(4);
	MR_tfield(0, MR_r2, 13) = MR_sv(1);
	MR_tfield(0, MR_r2, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module17)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_init_pred_sym_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_init_pred_sym_name_2_0);
	MR_init_label1(fn__parse_tree__prog_mutable__mutable_init_pred_sym_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_init_pred_sym_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_init_pred_sym_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("initialise_mutable_", 19);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_init_pred_sym_name_2_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_init_pred_sym_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module18)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0);
	MR_init_label3(fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_init_pred_decl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("initialise_mutable_", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__mutable_init_pred_decl_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 12) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module19)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_0);
	MR_init_label1(fn__parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_pre_init_pred_sym_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("pre_initialise_mutable_", 23);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module20)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0);
	MR_init_label3(fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_pre_init_pred_decl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0_i3);
MR_def_label(fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_string_const("pre_initialise_mutable_", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 15);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 9) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 12) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 14) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__file_names__mercury_std_library_module_name_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__add_outermost_qualifier_2_0);
MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);

MR_BEGIN_MODULE(parse_tree__prog_mutable_module21)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_c_var_name_2_0);
	MR_init_label4(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0,2,6,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_c_var_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_c_var_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mutable_variable_", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_mutable__mutable_c_var_name_2_0_i2);
MR_def_label(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		fn__parse_tree__prog_mutable__mutable_c_var_name_2_0_i6);
MR_def_label(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("mercury", 7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__add_outermost_qualifier_2_0,
		fn__parse_tree__prog_mutable__mutable_c_var_name_2_0_i9);
MR_def_label(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_r2;
MR_def_label(fn__parse_tree__prog_mutable__mutable_c_var_name_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_mutable_module22)
	MR_init_entry1(fn__parse_tree__prog_mutable__mutable_mutex_var_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_mutable__mutable_mutex_var_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_mutex_var_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_mutable__mutable_mutex_var_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_lock", 5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__prog_mutable_maybe_bunch_0(void)
{
	parse_tree__prog_mutable_module0();
	parse_tree__prog_mutable_module1();
	parse_tree__prog_mutable_module2();
	parse_tree__prog_mutable_module3();
	parse_tree__prog_mutable_module4();
	parse_tree__prog_mutable_module5();
	parse_tree__prog_mutable_module6();
	parse_tree__prog_mutable_module7();
	parse_tree__prog_mutable_module8();
	parse_tree__prog_mutable_module9();
	parse_tree__prog_mutable_module10();
	parse_tree__prog_mutable_module11();
	parse_tree__prog_mutable_module12();
	parse_tree__prog_mutable_module13();
	parse_tree__prog_mutable_module14();
	parse_tree__prog_mutable_module15();
	parse_tree__prog_mutable_module16();
	parse_tree__prog_mutable_module17();
	parse_tree__prog_mutable_module18();
	parse_tree__prog_mutable_module19();
	parse_tree__prog_mutable_module20();
	parse_tree__prog_mutable_module21();
	parse_tree__prog_mutable_module22();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_mutable__init(void);
void mercury__parse_tree__prog_mutable__init_type_tables(void);
void mercury__parse_tree__prog_mutable__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_mutable__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_mutable__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__parse_tree__prog_mutable__init_threadscope_string_table(void);
#endif

void mercury__parse_tree__prog_mutable__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_mutable_maybe_bunch_0();
	mercury__parse_tree__prog_mutable__init_debugger();
}

void mercury__parse_tree__prog_mutable__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__parse_tree__prog_mutable__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_mutable__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__prog_mutable);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_mutable__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__parse_tree__prog_mutable__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
