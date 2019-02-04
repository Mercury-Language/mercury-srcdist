/*
** Automatically generated from `make_hlds_error.m'
** by the Mercury compiler,
** version rotd-2011-09-25, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__make_hlds__make_hlds_error__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.make_hlds.make_hlds_error.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "hlds.make_hlds.make_hlds_error.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "hlds.make_hlds.make_hlds_error.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "hlds.make_hlds.make_hlds_error.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "hlds.make_hlds.make_hlds_error.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "hlds.make_hlds.make_hlds_error.c"
#line 49 "hlds.make_hlds.make_hlds_error.c"
#include "hlds.make_hlds.make_hlds_error.mh"

#line 52 "hlds.make_hlds.make_hlds_error.c"
#line 53 "hlds.make_hlds.make_hlds_error.c"
#ifndef HLDS__MAKE_HLDS__MAKE_HLDS_ERROR_DECL_GUARD
#define HLDS__MAKE_HLDS__MAKE_HLDS_ERROR_DECL_GUARD

#line 57 "hlds.make_hlds.make_hlds_error.c"
#line 58 "hlds.make_hlds.make_hlds_error.c"

#endif
#line 61 "hlds.make_hlds.make_hlds_error.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];
MR_decl_label1(hlds__make_hlds__make_hlds_error__error_if_exported_5_0, 2)
MR_decl_label5(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0, 2,3,4,5,16)
MR_decl_label3(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0, 57,28,37)
MR_def_extern_entry(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_error__undefined_mode_error_6_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_error__error_is_exported_4_0)
MR_def_extern_entry(hlds__make_hlds__make_hlds_error__error_if_exported_5_0)

static const struct mercury_type_0 mercury_common_0[10] =
{
{
4,
MR_string_const("Error:", 6)
},
{
4,
MR_string_const("multiply defined.", 17)
},
{
4,
MR_string_const("Here is the previous definition of", 34)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("for", 3)
},
{
4,
MR_string_const("without corresponding \140pred\' or \140func\' declaration.", 51)
},
{
4,
MR_string_const("specifies non-existent mode.", 28)
},
{
4,
MR_string_const("without preceding", 17)
},
{
4,
MR_string_const("declaration.", 12)
},
{
4,
MR_string_const("in module interface.", 20)
},
};

static const struct mercury_type_1 mercury_common_1[7] =
{
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,1),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,3),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,8),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,9),
MR_TAG_COMMON(1,1,0)
}
},
};



extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_error_module0)
	MR_init_entry1(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_error__multiple_def_error_9_0);
	MR_init_label3(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0,57,28,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'multiple_def_error'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_error__multiple_def_error_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0_i57);
	}
	MR_r1 = MR_r8;
	MR_proceed();
MR_def_label(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr10, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr10;
	MR_tfield(0, MR_tempr10, 0) = MR_r5;
	MR_tfield(0, MR_tempr10, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r6;
	MR_tag_alloc_heap(MR_tempr11, 0, (MR_Integer) 1);
	MR_r6 = MR_tempr11;
	MR_tfield(0, MR_tempr11, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 4);
	MR_r6 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr12, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr12, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr12, 3) = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0_i28);
	}
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr13, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr13, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr10;
	MR_tfield(1, MR_r2, 1) = MR_tempr13;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_error__multiple_def_error_9_0_i37);
MR_def_label(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r7;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r4;
	MR_tfield(1, MR_r2, 1) = MR_tempr4;
	MR_sv(1) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__make_hlds_error__multiple_def_error_9_0_i37);
MR_def_label(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_error_module1)
	MR_init_entry1(hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'undefined_pred_or_func_error'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr3, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_error_module2)
	MR_init_entry1(hlds__make_hlds__make_hlds_error__undefined_mode_error_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_error__undefined_mode_error_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'undefined_mode_error'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_error__undefined_mode_error_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr3, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__status_is_exported_1_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_str_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_error_module3)
	MR_init_entry1(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0);
	MR_init_label5(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0,2,3,4,5,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_undefined_pred_error'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(9) = MR_tempr1;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0_i2);
MR_def_label(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_is_exported_1_0,
		hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0_i3);
MR_def_label(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 154;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0_i4);
MR_def_label(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0_i5);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0_i5);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0_i5);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_sv(6) = MR_r2;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_sv(8) = MR_tempr2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,7);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_str_1_0,
		hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0_i16);
MR_def_label(hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(9);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_error_module4)
	MR_init_entry1(hlds__make_hlds__make_hlds_error__error_is_exported_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_error__error_is_exported_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'error_is_exported'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_error__error_is_exported_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__make_hlds_error_module5)
	MR_init_entry1(hlds__make_hlds__make_hlds_error__error_if_exported_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__make_hlds_error__error_if_exported_5_0);
	MR_init_label1(hlds__make_hlds__make_hlds_error__error_if_exported_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'error_if_exported'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__make_hlds_error__error_if_exported_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(hlds__make_hlds__make_hlds_error__error_if_exported_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_r4;
	MR_proceed();
	}
MR_def_label(hlds__make_hlds__make_hlds_error__error_if_exported_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__make_hlds_error_maybe_bunch_0(void)
{
	hlds__make_hlds__make_hlds_error_module0();
	hlds__make_hlds__make_hlds_error_module1();
	hlds__make_hlds__make_hlds_error_module2();
	hlds__make_hlds__make_hlds_error_module3();
	hlds__make_hlds__make_hlds_error_module4();
	hlds__make_hlds__make_hlds_error_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__make_hlds_error__init(void);
void mercury__hlds__make_hlds__make_hlds_error__init_type_tables(void);
void mercury__hlds__make_hlds__make_hlds_error__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__make_hlds_error__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__make_hlds_error__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__make_hlds__make_hlds_error__init_threadscope_string_table(void);
#endif

void mercury__hlds__make_hlds__make_hlds_error__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__make_hlds_error_maybe_bunch_0();
	mercury__hlds__make_hlds__make_hlds_error__init_debugger();
}

void mercury__hlds__make_hlds__make_hlds_error__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__make_hlds__make_hlds_error__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__make_hlds_error__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__make_hlds_error);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__make_hlds_error__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__make_hlds__make_hlds_error__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
