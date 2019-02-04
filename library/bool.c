/*
** Automatically generated from `bool.m'
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
INIT mercury__bool__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "bool.c"
#include "bool.mh"

#line 28 "bool.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "bool.c"
#line 150 "io.int2"
#include "time.mh"

#line 36 "bool.c"
#line 151 "io.int2"
#include "string.mh"

#line 40 "bool.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 44 "bool.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "bool.c"
#line 46 "builtin.opt"
#include "array.mh"

#line 52 "bool.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 56 "bool.c"
#line 58 "array.opt"
#include "store.mh"

#line 60 "bool.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "bool.c"
#line 157 "io.opt"
#include "dir.mh"

#line 68 "bool.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 72 "bool.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 76 "bool.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "bool.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "bool.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 88 "bool.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 92 "bool.c"
#line 4 "char.opt"
#include "char.mh"

#line 96 "bool.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 100 "bool.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 104 "bool.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "bool.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 112 "bool.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 116 "bool.c"
#line 117 "bool.c"
#ifndef BOOL_DECL_GUARD
#define BOOL_DECL_GUARD

#line 121 "bool.c"
#line 122 "bool.c"

#endif
#line 125 "bool.c"

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

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_enum__enum__arity1__bool__bool__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_bool__type_ctor_info_bool_0;
MR_decl_label1(bool__and_3_0, 3)
MR_decl_label2(bool__and_list_2_0, 3,5)
MR_decl_label1(bool__not_2_0, 3)
MR_decl_label1(bool__or_3_0, 3)
MR_decl_label2(bool__or_list_2_0, 3,5)
MR_decl_label2(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0, 3,1)
MR_decl_label1(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0, 3)
MR_decl_label1(fn__bool__and_2_0, 3)
MR_decl_label1(fn__bool__not_1_0, 3)
MR_decl_label1(fn__bool__or_2_0, 3)
MR_decl_label2(fn__bool__pred_to_bool_1_0, 3,2)
MR_decl_label3(fn__bool__xor_2_0, 9,3,10)
MR_decl_label2(__Compare___bool__bool_0_0, 2,3)
MR_def_extern_entry(bool__or_3_0)
MR_def_extern_entry(fn__bool__or_2_0)
MR_def_extern_entry(bool__or_list_2_0)
MR_def_extern_entry(fn__bool__or_list_1_0)
MR_def_extern_entry(bool__and_3_0)
MR_def_extern_entry(fn__bool__and_2_0)
MR_def_extern_entry(bool__and_list_2_0)
MR_def_extern_entry(fn__bool__and_list_1_0)
MR_def_extern_entry(bool__not_2_0)
MR_def_extern_entry(fn__bool__not_1_0)
MR_def_extern_entry(fn__bool__xor_2_0)
MR_def_extern_entry(fn__bool__pred_to_bool_1_0)
MR_decl_static(fn__bool__return_no_0_0)
MR_decl_static(fn__bool__return_yes_0_0)
MR_def_extern_entry(__Unify___bool__bool_0_0)
MR_def_extern_entry(__Compare___bool__bool_0_0)
MR_def_extern_entry(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0)
MR_def_extern_entry(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0)
MR_decl_static(fn__f_98_111_111_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

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

static const MR_EnumFunctorDesc mercury_data_bool__enum_functor_desc_bool_0_0 = {
	"no",
	0
};

static const MR_EnumFunctorDesc mercury_data_bool__enum_functor_desc_bool_0_1 = {
	"yes",
	1
};

const MR_EnumFunctorDescPtr mercury_data_bool__enum_value_ordered_bool_0[] = {
	&mercury_data_bool__enum_functor_desc_bool_0_0,
	&mercury_data_bool__enum_functor_desc_bool_0_1
};

const MR_EnumFunctorDescPtr mercury_data_bool__enum_name_ordered_bool_0[] = {
	&mercury_data_bool__enum_functor_desc_bool_0_0,
	&mercury_data_bool__enum_functor_desc_bool_0_1
};

const MR_Integer mercury_data_bool__functor_number_map_bool_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bool__bool_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bool__bool_0_0)),
	"bool",
	"bool",
	{ (void *)mercury_data_bool__enum_name_ordered_bool_0 },
	{ (void *)mercury_data_bool__enum_value_ordered_bool_0 },
	2,
	4,
	mercury_data_bool__functor_number_map_bool_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_enum__enum__arity1__bool__bool__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0))
};




MR_BEGIN_MODULE(bool_module0)
	MR_init_entry1(bool__or_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bool__or_3_0);
	MR_init_label1(bool__or_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'or'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bool__or_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bool__or_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(bool__or_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module1)
	MR_init_entry1(fn__bool__or_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bool__or_2_0);
	MR_init_label1(fn__bool__or_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'or'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__or_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__or_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__bool__or_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module2)
	MR_init_entry1(bool__or_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bool__or_list_2_0);
	MR_init_label2(bool__or_list_2_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'or_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bool__or_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bool__or_list_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(bool__or_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(bool__or_list_2_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(bool__or_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(bool__or_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module3)
	MR_init_entry1(fn__bool__or_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bool__or_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'or_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__or_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bool__or_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module4)
	MR_init_entry1(bool__and_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bool__and_3_0);
	MR_init_label1(bool__and_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'and'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bool__and_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bool__and_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(bool__and_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module5)
	MR_init_entry1(fn__bool__and_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bool__and_2_0);
	MR_init_label1(fn__bool__and_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'and'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__and_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__and_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__bool__and_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module6)
	MR_init_entry1(bool__and_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bool__and_list_2_0);
	MR_init_label2(bool__and_list_2_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'and_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bool__and_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bool__and_list_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(bool__and_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(bool__and_list_2_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(bool__and_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(bool__and_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module7)
	MR_init_entry1(fn__bool__and_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bool__and_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'and_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__and_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bool__and_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module8)
	MR_init_entry1(bool__not_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bool__not_2_0);
	MR_init_label1(bool__not_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'not'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bool__not_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bool__not_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(bool__not_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module9)
	MR_init_entry1(fn__bool__not_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bool__not_1_0);
	MR_init_label1(fn__bool__not_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'not'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__not_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__not_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__bool__not_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module10)
	MR_init_entry1(fn__bool__xor_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bool__xor_2_0);
	MR_init_label3(fn__bool__xor_2_0,9,3,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'xor'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__xor_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__xor_2_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__bool__xor_2_0_i10);
	}
MR_def_label(fn__bool__xor_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__bool__xor_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__bool__xor_2_0_i9);
	}
MR_def_label(fn__bool__xor_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_0);

MR_BEGIN_MODULE(bool_module11)
	MR_init_entry1(fn__bool__pred_to_bool_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bool__pred_to_bool_1_0);
	MR_init_label2(fn__bool__pred_to_bool_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_to_bool'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__pred_to_bool_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__bool__pred_to_bool_1_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__fn__bool__pred_to_bool_1_0_i3);
MR_def_label(fn__bool__pred_to_bool_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__bool__pred_to_bool_1_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__bool__pred_to_bool_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module12)
	MR_init_entry1(fn__bool__return_no_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bool__return_no_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'return_no'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bool__return_no_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module13)
	MR_init_entry1(fn__bool__return_yes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bool__return_yes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'return_yes'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bool__return_yes_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module14)
	MR_init_entry1(__Unify___bool__bool_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bool__bool_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bool__bool_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module15)
	MR_init_entry1(__Compare___bool__bool_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bool__bool_0_0);
	MR_init_label2(__Compare___bool__bool_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bool__bool_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___bool__bool_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___bool__bool_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___bool__bool_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bool__bool_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module16)
	MR_init_entry1(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0);
	MR_init_label1(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module17)
	MR_init_entry1(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0);
	MR_init_label2(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bool_module18)
	MR_init_entry1(fn__f_98_111_111_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_98_111_111_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_111_111_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__fn__bool__return_yes_0_0);

MR_Word
ML_bool_return_yes(void);

MR_Word
ML_bool_return_yes(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__bool__return_yes_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__bool__return_yes_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__bool__return_no_0_0);

MR_Word
ML_bool_return_no(void);

MR_Word
ML_bool_return_no(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__bool__return_no_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__bool__return_no_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


static void mercury__bool_maybe_bunch_0(void)
{
	bool_module0();
	bool_module1();
	bool_module2();
	bool_module3();
	bool_module4();
	bool_module5();
	bool_module6();
	bool_module7();
	bool_module8();
	bool_module9();
	bool_module10();
	bool_module11();
	bool_module12();
	bool_module13();
	bool_module14();
	bool_module15();
	bool_module16();
	bool_module17();
	bool_module18();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__bool__init(void);
void mercury__bool__init_type_tables(void);
void mercury__bool__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__bool__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__bool__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__bool__init_threadscope_string_table(void);
#endif

void mercury__bool__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__bool_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bool__type_ctor_info_bool_0,
		bool__bool_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_enum__enum__arity1__bool__bool__arity0__, 5) =
			MR_ENTRY_AP(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_enum__enum__arity1__bool__bool__arity0__, 6) =
			MR_ENTRY_AP(fn__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__bool__init_debugger();
}

void mercury__bool__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_bool__type_ctor_info_bool_0);
	}
}


void mercury__bool__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__bool__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__bool);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__bool__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__bool__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
