/*
** Automatically generated from `stack.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__stack__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "stack.c"
#line 150 "io.int2"
#include "time.mh"

#line 32 "stack.c"
#line 151 "io.int2"
#include "string.mh"

#line 36 "stack.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "stack.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "stack.c"
#line 46 "builtin.opt"
#include "array.mh"

#line 48 "stack.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 52 "stack.c"
#line 58 "array.opt"
#include "store.mh"

#line 56 "stack.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "stack.c"
#line 157 "io.opt"
#include "dir.mh"

#line 64 "stack.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 68 "stack.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "stack.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "stack.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "stack.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "stack.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "stack.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "stack.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "stack.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "stack.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "stack.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 108 "stack.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "stack.c"
#line 113 "stack.c"
#include "stack.mh"

#line 116 "stack.c"
#line 117 "stack.c"
#ifndef STACK_DECL_GUARD
#define STACK_DECL_GUARD

#line 121 "stack.c"
#line 122 "stack.c"

#endif
#line 125 "stack.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_stack__type_ctor_info_stack_1;
MR_decl_label1(f_115_116_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_0, 1)
MR_decl_label1(stack__det_pop_3_0, 3)
MR_decl_label1(stack__det_top_2_0, 3)
MR_decl_label1(stack__pop_3_0, 1)
MR_decl_label2(stack__push_list_3_0, 5,2)
MR_decl_label1(stack__top_2_0, 1)
MR_decl_label1(fn__stack__det_top_1_0, 3)
MR_decl_label1(__Unify___stack__stack_1_0, 6)
MR_decl_label2(__Compare___stack__stack_1_0, 3,2)
MR_def_extern_entry(stack__init_1_0)
MR_def_extern_entry(fn__stack__init_0_0)
MR_def_extern_entry(stack__is_empty_1_0)
MR_def_extern_entry(stack__is_full_1_0)
MR_def_extern_entry(stack__push_3_0)
MR_def_extern_entry(fn__stack__push_2_0)
MR_def_extern_entry(stack__push_list_3_0)
MR_def_extern_entry(fn__stack__push_list_2_0)
MR_def_extern_entry(stack__top_2_0)
MR_def_extern_entry(stack__det_top_2_0)
MR_def_extern_entry(fn__stack__det_top_1_0)
MR_def_extern_entry(stack__pop_3_0)
MR_def_extern_entry(stack__det_pop_3_0)
MR_def_extern_entry(stack__depth_2_0)
MR_def_extern_entry(fn__stack__depth_1_0)
MR_def_extern_entry(__Unify___stack__stack_1_0)
MR_def_extern_entry(__Compare___stack__stack_1_0)
MR_def_extern_entry(f_115_116_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_0)
MR_decl_static(fn__f_115_116_97_99_107_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__,
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_NotagFunctorDesc mercury_data_stack__notag_functor_desc_stack_1 = {
	"stack",
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	NULL
};

const MR_Integer mercury_data_stack__functor_number_map_stack_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_stack__type_ctor_info_stack_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stack__stack_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stack__stack_1_0)),
	"stack",
	"stack",
	{ (void *)&mercury_data_stack__notag_functor_desc_stack_1 },
	{ (void *)&mercury_data_stack__notag_functor_desc_stack_1 },
	1,
	4,
	mercury_data_stack__functor_number_map_stack_1
};




MR_BEGIN_MODULE(stack_module0)
	MR_init_entry1(stack__init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__stack__init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stack__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module1)
	MR_init_entry1(fn__stack__init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__stack__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__stack__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module2)
	MR_init_entry1(stack__is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__stack__is_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stack__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module3)
	MR_init_entry1(stack__is_full_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__stack__is_full_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_full'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stack__is_full_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_116_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module4)
	MR_init_entry1(stack__push_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__stack__push_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stack__push_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module5)
	MR_init_entry1(fn__stack__push_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__stack__push_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__stack__push_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module6)
	MR_init_entry1(stack__push_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__stack__push_list_3_0);
	MR_init_label2(stack__push_list_3_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stack__push_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(stack__push_list_3_0_i2);
	}
MR_def_label(stack__push_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	}
	break;
	} /* end while */
MR_def_label(stack__push_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module7)
	MR_init_entry1(fn__stack__push_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__stack__push_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__stack__push_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(stack__push_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module8)
	MR_init_entry1(stack__top_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__stack__top_2_0);
	MR_init_label1(stack__top_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'top'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stack__top_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(stack__top_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(stack__top_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(stack_module9)
	MR_init_entry1(stack__det_top_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__stack__det_top_2_0);
	MR_init_label1(stack__det_top_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_top'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stack__det_top_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(stack__det_top_2_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
MR_def_label(stack__det_top_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stack.det_top: top of empty stack", 33);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module10)
	MR_init_entry1(fn__stack__det_top_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__stack__det_top_1_0);
	MR_init_label1(fn__stack__det_top_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_top'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__stack__det_top_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__stack__det_top_1_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
MR_def_label(fn__stack__det_top_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stack.det_top: top of empty stack", 33);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module11)
	MR_init_entry1(stack__pop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__stack__pop_3_0);
	MR_init_label1(stack__pop_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stack__pop_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(stack__pop_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(stack__pop_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module12)
	MR_init_entry1(stack__det_pop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__stack__det_pop_3_0);
	MR_init_label1(stack__det_pop_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_pop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stack__det_pop_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(stack__det_pop_3_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_proceed();
MR_def_label(stack__det_pop_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stack.det_pop: pop from empty stack", 35);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);

MR_BEGIN_MODULE(stack_module13)
	MR_init_entry1(stack__depth_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__stack__depth_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'depth'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stack__depth_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(list__length_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module14)
	MR_init_entry1(fn__stack__depth_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__stack__depth_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'depth'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__stack__depth_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(list__length_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(stack_module15)
	MR_init_entry1(__Unify___stack__stack_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___stack__stack_1_0);
	MR_init_label1(__Unify___stack__stack_1_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stack__stack_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___stack__stack_1_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___stack__stack_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(stack_module16)
	MR_init_entry1(__Compare___stack__stack_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___stack__stack_1_0);
	MR_init_label2(__Compare___stack__stack_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stack__stack_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___stack__stack_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___stack__stack_1_0_i2);
MR_def_label(__Compare___stack__stack_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___stack__stack_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module17)
	MR_init_entry1(f_115_116_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_116_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_0);
	MR_init_label1(f_115_116_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__is_full__[1, 2]_0'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_116_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_116_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 807 "stack.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_115_116_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_116_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stack_module18)
	MR_init_entry1(fn__f_115_116_97_99_107_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_116_97_99_107_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_116_97_99_107_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__stack_maybe_bunch_0(void)
{
	stack_module0();
	stack_module1();
	stack_module2();
	stack_module3();
	stack_module4();
	stack_module5();
	stack_module6();
	stack_module7();
	stack_module8();
	stack_module9();
	stack_module10();
	stack_module11();
	stack_module12();
	stack_module13();
	stack_module14();
	stack_module15();
	stack_module16();
	stack_module17();
	stack_module18();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__stack__init(void);
void mercury__stack__init_type_tables(void);
void mercury__stack__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__stack__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__stack__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__stack__init_threadscope_string_table(void);
#endif

void mercury__stack__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__stack_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stack__type_ctor_info_stack_1,
		stack__stack_1_0);
	mercury__stack__init_debugger();
}

void mercury__stack__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_stack__type_ctor_info_stack_1);
	}
}


void mercury__stack__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__stack__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__stack);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__stack__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__stack__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
