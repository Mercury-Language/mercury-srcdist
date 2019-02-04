/*
** Automatically generated from `builtin_lib_types.m'
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
INIT mercury__parse_tree__builtin_lib_types__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "parse_tree.builtin_lib_types.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "parse_tree.builtin_lib_types.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "parse_tree.builtin_lib_types.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "parse_tree.builtin_lib_types.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "parse_tree.builtin_lib_types.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "parse_tree.builtin_lib_types.c"
#line 48 "parse_tree.builtin_lib_types.c"
#include "parse_tree.builtin_lib_types.mh"

#line 51 "parse_tree.builtin_lib_types.c"
#line 52 "parse_tree.builtin_lib_types.c"
#ifndef PARSE_TREE__BUILTIN_LIB_TYPES_DECL_GUARD
#define PARSE_TREE__BUILTIN_LIB_TYPES_DECL_GUARD

#line 56 "parse_tree.builtin_lib_types.c"
#line 57 "parse_tree.builtin_lib_types.c"

#endif
#line 60 "parse_tree.builtin_lib_types.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label2(parse_tree__builtin_lib_types__is_region_var_2_0, 3,4)
MR_decl_label1(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__comparison_result_type_0_0, 2)
MR_decl_label2(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0, 2,4)
MR_decl_label2(fn__parse_tree__builtin_lib_types__exception_failed_functor_0_0, 2,4)
MR_decl_label1(fn__parse_tree__builtin_lib_types__exception_result_type_1_0, 3)
MR_decl_label1(fn__parse_tree__builtin_lib_types__exception_result_type_ctor_0_0, 2)
MR_decl_label2(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0, 2,4)
MR_decl_label1(fn__parse_tree__builtin_lib_types__future_type_1_0, 3)
MR_decl_label1(fn__parse_tree__builtin_lib_types__heap_pointer_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__io_io_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__io_state_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__list_type_ctor_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__poly_type_type_ctor_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__region_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__sample_type_info_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0, 3)
MR_decl_label2(fn__parse_tree__builtin_lib_types__stm_dummy_output_functor_0_0, 2,4)
MR_decl_label1(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_ctor_0_0, 2)
MR_decl_label2(fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0, 2,4)
MR_decl_label1(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_ctor_0_0, 2)
MR_decl_label2(fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0, 2,4)
MR_decl_label1(fn__parse_tree__builtin_lib_types__stm_state_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__stm_valid_result_type_ctor_0_0, 2)
MR_decl_label2(fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0, 2,4)
MR_decl_label2(fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0, 2,4)
MR_decl_label1(fn__parse_tree__builtin_lib_types__type_ctor_info_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__type_info_type_0_0, 2)
MR_decl_label1(fn__parse_tree__builtin_lib_types__univ_type_0_0, 2)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__int_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__float_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__string_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__char_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__void_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__heap_pointer_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__sample_type_info_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__type_info_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__type_ctor_info_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__comparison_result_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__io_state_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__io_io_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__univ_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__exception_result_type_1_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_state_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__region_type_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__future_type_1_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__int_type_ctor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__float_type_ctor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__char_type_ctor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__string_type_ctor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__poly_type_type_ctor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__list_type_ctor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__exception_result_type_ctor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_valid_result_type_ctor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_ctor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_ctor_0_0)
MR_def_extern_entry(parse_tree__builtin_lib_types__is_region_var_2_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__exception_failed_functor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0)
MR_def_extern_entry(fn__parse_tree__builtin_lib_types__stm_dummy_output_functor_0_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
0
},
{
1
},
{
2
},
{
3
},
};

static const struct mercury_type_1 mercury_common_1[5] =
{
{
MR_string_const("void", 4)
},
{
MR_string_const("stm_builtin", 11)
},
{
MR_string_const("int", 3)
},
{
MR_string_const("character", 9)
},
{
MR_string_const("string", 6)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_TAG_COMMON(0,1,0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_3 mercury_common_3[3] =
{
{
MR_TAG_COMMON(0,1,2),
0
},
{
MR_TAG_COMMON(0,1,3),
0
},
{
MR_TAG_COMMON(0,1,4),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module0)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__int_type_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'int_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__int_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module1)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__float_type_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'float_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__float_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,0,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module2)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__string_type_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'string_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__string_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,0,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module3)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__char_type_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'char_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__char_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,0,3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module4)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__void_type_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'void_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__void_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module5)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'c_pointer_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__c_pointer_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__c_pointer_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("c_pointer", 9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module6)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__heap_pointer_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__heap_pointer_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'heap_pointer_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__heap_pointer_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__heap_pointer_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__heap_pointer_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("heap_pointer", 12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module7)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__sample_type_info_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__sample_type_info_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'sample_type_info_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__sample_type_info_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__sample_type_info_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__sample_type_info_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("sample_type_info", 16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module8)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'sample_typeclass_info_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("sample_typeclass_info", 21);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module9)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__type_info_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__type_info_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'type_info_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__type_info_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__type_info_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__type_info_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("type_info", 9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module10)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__type_ctor_info_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__type_ctor_info_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'type_ctor_info_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__type_ctor_info_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__type_ctor_info_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__type_ctor_info_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("type_ctor_info", 14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module11)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__comparison_result_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__comparison_result_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'comparison_result_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__comparison_result_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__comparison_result_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__comparison_result_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("comparison_result", 17);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_io_module_0_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module12)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__io_state_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__io_state_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'io_state_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__io_state_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_io_module_0_0,
		fn__parse_tree__builtin_lib_types__io_state_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__io_state_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("state", 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module13)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__io_io_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__io_io_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'io_io_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__io_io_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_io_module_0_0,
		fn__parse_tree__builtin_lib_types__io_io_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__io_io_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("io", 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_univ_module_0_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module14)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__univ_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__univ_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'univ_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__univ_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_univ_module_0_0,
		fn__parse_tree__builtin_lib_types__univ_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__univ_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("univ", 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_exception_module_0_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module15)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__exception_result_type_1_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__exception_result_type_1_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'exception_result_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__exception_result_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__parse_tree__builtin_lib_types__exception_result_type_1_0_i3);
MR_def_label(fn__parse_tree__builtin_lib_types__exception_result_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("exception_result", 16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module16)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_atomic_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0,
		fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0_i3);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm", 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module17)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_state_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_state_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_state_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_state_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm", 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module18)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_valid_result_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm_validation_result", 21);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module19)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_rollback_exception_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("rollback_exception", 18);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module20)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_dummy_output_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_dummy_output_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_dummy_output_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm_dummy_output", 16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module21)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__region_type_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__region_type_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'region_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__region_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__region_type_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__region_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("region", 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module22)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__future_type_1_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__future_type_1_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'future_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__future_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__future_type_1_0_i3);
MR_def_label(fn__parse_tree__builtin_lib_types__future_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("future", 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module23)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__int_type_ctor_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'int_type_ctor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__int_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module24)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__float_type_ctor_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'float_type_ctor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__float_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module25)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__char_type_ctor_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'char_type_ctor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__char_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module26)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__string_type_ctor_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'string_type_ctor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__string_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_string_module_0_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module27)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__poly_type_type_ctor_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__poly_type_type_ctor_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'poly_type_type_ctor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__poly_type_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_string_module_0_0,
		fn__parse_tree__builtin_lib_types__poly_type_type_ctor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__poly_type_type_ctor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("poly_type", 9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_list_module_0_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module28)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__list_type_ctor_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__list_type_ctor_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'list_type_ctor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__list_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_list_module_0_0,
		fn__parse_tree__builtin_lib_types__list_type_ctor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__list_type_ctor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("list", 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module29)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__exception_result_type_ctor_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__exception_result_type_ctor_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'exception_result_type_ctor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__exception_result_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__parse_tree__builtin_lib_types__exception_result_type_ctor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__exception_result_type_ctor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("exception_result", 16);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module30)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_valid_result_type_ctor_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__stm_valid_result_type_ctor_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_valid_result_type_ctor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_valid_result_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_valid_result_type_ctor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_valid_result_type_ctor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm_validation_result", 21);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module31)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_ctor_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_ctor_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_rollback_exception_type_ctor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_ctor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_ctor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("rollback_exception", 18);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module32)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_ctor_0_0);
	MR_init_label1(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_ctor_0_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_dummy_output_type_ctor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_dummy_output_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_dummy_output_type_ctor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_ctor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm_dummy_output", 16);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module33)
	MR_init_entry1(parse_tree__builtin_lib_types__is_region_var_2_0);
	MR_init_label2(parse_tree__builtin_lib_types__is_region_var_2_0,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'is_region_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__builtin_lib_types__is_region_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__builtin_lib_types__is_region_var_2_0_i3);
MR_def_label(parse_tree__builtin_lib_types__is_region_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0,
		parse_tree__builtin_lib_types__is_region_var_2_0_i4);
MR_def_label(parse_tree__builtin_lib_types__is_region_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("region", 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module34)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0);
	MR_init_label2(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'exception_succeeded_functor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("succeeded", 9);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0_i4);
MR_def_label(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("exception_result", 16);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module35)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__exception_failed_functor_0_0);
	MR_init_label2(fn__parse_tree__builtin_lib_types__exception_failed_functor_0_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'exception_failed_functor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__exception_failed_functor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__parse_tree__builtin_lib_types__exception_failed_functor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__exception_failed_functor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("failed", 6);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__parse_tree__builtin_lib_types__exception_failed_functor_0_0_i4);
MR_def_label(fn__parse_tree__builtin_lib_types__exception_failed_functor_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("exception_result", 16);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module36)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0);
	MR_init_label2(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'exception_exception_functor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("exception", 9);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0_i4);
MR_def_label(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("exception_result", 16);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module37)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0);
	MR_init_label2(fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_validres_valid_functor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm_transaction_valid", 21);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0_i4);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm_validation_result", 21);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module38)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0);
	MR_init_label2(fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_validres_invalid_functor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm_transaction_invalid", 23);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0_i4);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm_validation_result", 21);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module39)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0);
	MR_init_label2(fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_rollback_exception_functor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("rollback_invalid_transaction", 28);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0_i4);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("rollback_exception", 18);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module40)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0);
	MR_init_label2(fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_rollback_retry_functor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("rollback_retry", 14);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0_i4);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("rollback_exception", 18);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__builtin_lib_types_module41)
	MR_init_entry1(fn__parse_tree__builtin_lib_types__stm_dummy_output_functor_0_0);
	MR_init_label2(fn__parse_tree__builtin_lib_types__stm_dummy_output_functor_0_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stm_dummy_output_functor'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__builtin_lib_types__stm_dummy_output_functor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_dummy_output_functor_0_0_i2);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_dummy_output_functor_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm_dummy_output", 16);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		fn__parse_tree__builtin_lib_types__stm_dummy_output_functor_0_0_i4);
MR_def_label(fn__parse_tree__builtin_lib_types__stm_dummy_output_functor_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm_dummy_output", 16);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__builtin_lib_types_maybe_bunch_0(void)
{
	parse_tree__builtin_lib_types_module0();
	parse_tree__builtin_lib_types_module1();
	parse_tree__builtin_lib_types_module2();
	parse_tree__builtin_lib_types_module3();
	parse_tree__builtin_lib_types_module4();
	parse_tree__builtin_lib_types_module5();
	parse_tree__builtin_lib_types_module6();
	parse_tree__builtin_lib_types_module7();
	parse_tree__builtin_lib_types_module8();
	parse_tree__builtin_lib_types_module9();
	parse_tree__builtin_lib_types_module10();
	parse_tree__builtin_lib_types_module11();
	parse_tree__builtin_lib_types_module12();
	parse_tree__builtin_lib_types_module13();
	parse_tree__builtin_lib_types_module14();
	parse_tree__builtin_lib_types_module15();
	parse_tree__builtin_lib_types_module16();
	parse_tree__builtin_lib_types_module17();
	parse_tree__builtin_lib_types_module18();
	parse_tree__builtin_lib_types_module19();
	parse_tree__builtin_lib_types_module20();
	parse_tree__builtin_lib_types_module21();
	parse_tree__builtin_lib_types_module22();
	parse_tree__builtin_lib_types_module23();
	parse_tree__builtin_lib_types_module24();
	parse_tree__builtin_lib_types_module25();
	parse_tree__builtin_lib_types_module26();
	parse_tree__builtin_lib_types_module27();
	parse_tree__builtin_lib_types_module28();
	parse_tree__builtin_lib_types_module29();
	parse_tree__builtin_lib_types_module30();
	parse_tree__builtin_lib_types_module31();
	parse_tree__builtin_lib_types_module32();
	parse_tree__builtin_lib_types_module33();
	parse_tree__builtin_lib_types_module34();
	parse_tree__builtin_lib_types_module35();
	parse_tree__builtin_lib_types_module36();
	parse_tree__builtin_lib_types_module37();
	parse_tree__builtin_lib_types_module38();
	parse_tree__builtin_lib_types_module39();
}

static void mercury__parse_tree__builtin_lib_types_maybe_bunch_1(void)
{
	parse_tree__builtin_lib_types_module40();
	parse_tree__builtin_lib_types_module41();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__builtin_lib_types__init(void);
void mercury__parse_tree__builtin_lib_types__init_type_tables(void);
void mercury__parse_tree__builtin_lib_types__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__builtin_lib_types__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__builtin_lib_types__init_complexity_procs(void);
#endif

void mercury__parse_tree__builtin_lib_types__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__builtin_lib_types_maybe_bunch_0();
	mercury__parse_tree__builtin_lib_types_maybe_bunch_1();
	mercury__parse_tree__builtin_lib_types__init_debugger();
}

void mercury__parse_tree__builtin_lib_types__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__parse_tree__builtin_lib_types__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__builtin_lib_types__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__builtin_lib_types);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__builtin_lib_types__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
