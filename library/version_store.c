/*
** Automatically generated from `version_store.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__version_store__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 33 "version_array.int"
#include "version_array.mh"

#line 27 "version_store.c"
#line 130 "io.int2"
#include "io.mh"

#line 31 "version_store.c"
#line 136 "io.int2"
#include "string.mh"

#line 35 "version_store.c"
#line 23 "bitmap.int2"
#include "bitmap.mh"

#line 39 "version_store.c"
#line 26 "time.int2"
#include "time.mh"

#line 43 "version_store.c"
#line 28 "array.int2"
#include "array.mh"

#line 47 "version_store.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "version_store.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 55 "version_store.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 59 "version_store.c"
#line 131 "io.opt"
#include "dir.mh"

#line 63 "version_store.c"
#line 139 "io.opt"
#include "table_builtin.mh"

#line 67 "version_store.c"
#line 4 "char.opt"
#include "char.mh"

#line 71 "version_store.c"
#line 3 "float.opt"
#include "float.mh"

#line 75 "version_store.c"
#line 3 "math.opt"
#include "math.mh"

#line 79 "version_store.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 83 "version_store.c"
#line 22 "store.opt"
#include "store.mh"

#line 87 "version_store.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 91 "version_store.c"
#line 4 "int.opt"
#include "int.mh"

#line 95 "version_store.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 99 "version_store.c"
#line 100 "version_store.c"
#include "version_store.mh"

#line 103 "version_store.c"
#line 104 "version_store.c"
#ifndef VERSION_STORE_DECL_GUARD
#define VERSION_STORE_DECL_GUARD

#line 108 "version_store.c"
#line 109 "version_store.c"

#endif
#line 112 "version_store.c"


struct mercury_type_0 {
	MR_Word * f1[2];
};
static const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_version_store__type_ctor_info_version_store_1,
	mercury_data_version_store__type_ctor_info_some_version_store_type_0,
	mercury_data_version_store__type_ctor_info_mutvar_2;
MR_decl_label1(version_store__copy_mutvar_4_0, 2)
MR_decl_label1(version_store__get_mutvar_4_0, 2)
MR_decl_label7(version_store__new_cyclic_mutvar_4_0, 2,4,3,5,6,7,8)
MR_decl_label6(version_store__new_mutvar_4_0, 2,4,3,5,6,7)
MR_decl_label2(fn__version_store__elem_2_0, 10,3)
MR_decl_label2(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0, 2,3)
MR_decl_label1(fn__version_store__new_0_0, 2)
MR_decl_label1(fn__version_store__resize_2_0, 2)
MR_decl_label2(__Compare___version_store__mutvar_2_0, 2,3)
MR_def_extern_entry(fn__version_store__new_0_0)
MR_def_extern_entry(fn__version_store__elem_2_0)
MR_def_extern_entry(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0)
MR_def_extern_entry(fn__version_store__size_1_0)
MR_def_extern_entry(fn__version_store__resize_2_0)
MR_def_extern_entry(version_store__new_cyclic_mutvar_4_0)
MR_def_extern_entry(version_store__new_mutvar_4_0)
MR_def_extern_entry(version_store__copy_mutvar_4_0)
MR_def_extern_entry(fn__version_store__lookup_2_0)
MR_def_extern_entry(version_store__get_mutvar_4_0)
MR_def_extern_entry(fn__version_store__set_3_0)
MR_def_extern_entry(version_store__set_mutvar_4_0)
MR_def_extern_entry(fn__version_store__unsafe_rewind_1_0)
MR_def_extern_entry(version_store__unsafe_rewind_2_0)
MR_def_extern_entry(__Unify___version_store__mutvar_2_0)
MR_def_extern_entry(__Compare___version_store__mutvar_2_0)
MR_def_extern_entry(__Unify___version_store__some_version_store_type_0_0)
MR_def_extern_entry(__Compare___version_store__some_version_store_type_0_0)
MR_def_extern_entry(__Unify___version_store__version_store_1_0)
MR_def_extern_entry(__Compare___version_store__version_store_1_0)
MR_def_extern_entry(f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_version_array__type_ctor_info_version_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(version_array, version_array),
MR_CTOR0_ADDR(univ, univ)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_version_array__ti_version_array_1univ__type_ctor_info_univ_0 = {
	&mercury_data_version_array__type_ctor_info_version_array_1,
{	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0
}};

static const MR_NotagFunctorDesc mercury_data_version_store__notag_functor_desc_version_store_1 = {
	"version_store",
	(MR_PseudoTypeInfo) &mercury_data_version_array__ti_version_array_1univ__type_ctor_info_univ_0,
	NULL
};

const MR_Integer mercury_data_version_store__functor_number_map_version_store_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_version_store__type_ctor_info_version_store_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_store__version_store_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_store__version_store_1_0)),
	"version_store",
	"version_store",
	{ (void *)&mercury_data_version_store__notag_functor_desc_version_store_1 },
	{ (void *)&mercury_data_version_store__notag_functor_desc_version_store_1 },
	1,
	4,
	mercury_data_version_store__functor_number_map_version_store_1
};

static const MR_EnumFunctorDesc mercury_data_version_store__enum_functor_desc_some_version_store_type_0_0 = {
	"some_version_store_type",
	0
};

const MR_EnumFunctorDescPtr mercury_data_version_store__enum_value_ordered_some_version_store_type_0[] = {
	&mercury_data_version_store__enum_functor_desc_some_version_store_type_0_0
};

const MR_EnumFunctorDescPtr mercury_data_version_store__enum_name_ordered_some_version_store_type_0[] = {
	&mercury_data_version_store__enum_functor_desc_some_version_store_type_0_0
};

const MR_Integer mercury_data_version_store__functor_number_map_some_version_store_type_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_version_store__type_ctor_info_some_version_store_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_store__some_version_store_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_store__some_version_store_type_0_0)),
	"version_store",
	"some_version_store_type",
	{ (void *)mercury_data_version_store__enum_name_ordered_some_version_store_type_0 },
	{ (void *)mercury_data_version_store__enum_value_ordered_some_version_store_type_0 },
	1,
	4,
	mercury_data_version_store__functor_number_map_some_version_store_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc mercury_data_version_store__notag_functor_desc_mutvar_2 = {
	"mutvar",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_version_store__functor_number_map_mutvar_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_version_store__type_ctor_info_mutvar_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_store__mutvar_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_store__mutvar_2_0)),
	"version_store",
	"mutvar",
	{ (void *)&mercury_data_version_store__notag_functor_desc_mutvar_2 },
	{ (void *)&mercury_data_version_store__notag_functor_desc_mutvar_2 },
	1,
	4,
	mercury_data_version_store__functor_number_map_mutvar_2
};

extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
MR_decl_entry(univ__type_to_univ_2_1);

MR_BEGIN_MODULE(version_store_module0)
	MR_init_entry1(fn__version_store__new_0_0);
	MR_init_label1(fn__version_store__new_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_store__new_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		fn__version_store__new_0_0_i2);
MR_def_label(fn__version_store__new_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_store__new_0_0
	N = (MR_Integer) 256;
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("new");
{
#line 54 "version_array.opt"

    MR_Integer  i;
    
    VA = MR_GC_NEW(struct ML_va);
    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, N + 1);
    VA->rest.array->size = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }
;}
#line 306 "version_store.c"
	MR_RELEASE_GLOBAL_LOCK("new");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(version_store, some_version_store_type);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__det_univ_to_type_2_0);
MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(version_store_module1)
	MR_init_entry1(fn__version_store__elem_2_0);
	MR_init_label2(fn__version_store__elem_2_0,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_store__elem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_store__elem_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 169 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 353 "version_store.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_store__elem_2_0_i3);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(fn__version_store__elem_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(univ__det_univ_to_type_2_0);
MR_def_label(fn__version_store__elem_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_store__elem_2_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module2)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0);
	MR_init_label2(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0_i2);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA0);
	I = MR_sv(2);
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 420 "version_store.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0_i3);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module3)
	MR_init_entry1(fn__version_store__size_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_store__size_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_store__size_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 93 "version_array.opt"

    N = ML_va_size(VA);
;}
#line 466 "version_store.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r1 = N;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
MR_decl_entry(univ__type_to_univ_2_0);

MR_BEGIN_MODULE(version_store_module4)
	MR_init_entry1(fn__version_store__resize_2_0);
	MR_init_label1(fn__version_store__resize_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_store__resize_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		fn__version_store__resize_2_0_i2);
MR_def_label(fn__version_store__resize_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA0;
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_store__resize_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA0);
	N = MR_sv(2);
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("resize");
{
#line 100 "version_array.opt"

    MR_Integer  i;
    MR_Integer  size_VA0;
    MR_Integer  min;
    
    size_VA0 = ML_va_size(VA0);
    min      = (N <= size_VA0 ? N : size_VA0);
    VA       = MR_GC_NEW(struct ML_va);

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, N + 1);
    VA->rest.array->size = N;

    for (i = 0; i < min; i++) {
        (void) ML_va_get(VA0, i, &VA->rest.array->elements[i]);
    }

    for (i = min; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }
;}
#line 537 "version_store.c"
	MR_RELEASE_GLOBAL_LOCK("resize");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(version_store_module5)
	MR_init_entry1(version_store__new_cyclic_mutvar_4_0);
	MR_init_label7(version_store__new_cyclic_mutvar_4_0,2,4,3,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_store__new_cyclic_mutvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = (MR_Integer) 0;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__version_store__elem_2_0,
		version_store__new_cyclic_mutvar_4_0_i2);
MR_def_label(version_store__new_cyclic_mutvar_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_store__new_cyclic_mutvar_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(2), VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 93 "version_array.opt"

    N = ML_va_size(VA);
;}
#line 590 "version_store.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(version_store__new_cyclic_mutvar_4_0_i3);
	}
	MR_sv(8) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_tempr1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		version_store__new_cyclic_mutvar_4_0_i4);
MR_def_label(version_store__new_cyclic_mutvar_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_store__new_cyclic_mutvar_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(8), VA0);
	N = MR_sv(5);
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("resize");
{
#line 100 "version_array.opt"

    MR_Integer  i;
    MR_Integer  size_VA0;
    MR_Integer  min;
    
    size_VA0 = ML_va_size(VA0);
    min      = (N <= size_VA0 ? N : size_VA0);
    VA       = MR_GC_NEW(struct ML_va);

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, N + 1);
    VA->rest.array->size = N;

    for (i = 0; i < min; i++) {
        (void) ML_va_get(VA0, i, &VA->rest.array->elements[i]);
    }

    for (i = min; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }
;}
#line 642 "version_store.c"
	MR_RELEASE_GLOBAL_LOCK("resize");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_sv(3);
	MR_r4 = MR_r6;
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_GOTO_LAB(version_store__new_cyclic_mutvar_4_0_i5);
MR_def_label(version_store__new_cyclic_mutvar_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r5 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
MR_def_label(version_store__new_cyclic_mutvar_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0,
		version_store__new_cyclic_mutvar_4_0_i6);
MR_def_label(version_store__new_cyclic_mutvar_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_store__new_cyclic_mutvar_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__version_store__new_cyclic_mutvar_4_0_i7);
MR_def_label(version_store__new_cyclic_mutvar_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0,
		version_store__new_cyclic_mutvar_4_0_i8);
MR_def_label(version_store__new_cyclic_mutvar_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module6)
	MR_init_entry1(version_store__new_mutvar_4_0);
	MR_init_label6(version_store__new_mutvar_4_0,2,4,3,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_store__new_mutvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__version_store__elem_2_0,
		version_store__new_mutvar_4_0_i2);
MR_def_label(version_store__new_mutvar_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_store__new_mutvar_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(2), VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 93 "version_array.opt"

    N = ML_va_size(VA);
;}
#line 740 "version_store.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(version_store__new_mutvar_4_0_i3);
	}
	MR_sv(8) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(7) = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_tempr1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		version_store__new_mutvar_4_0_i4);
MR_def_label(version_store__new_mutvar_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_store__new_mutvar_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(8), VA0);
	N = MR_sv(7);
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("resize");
{
#line 100 "version_array.opt"

    MR_Integer  i;
    MR_Integer  size_VA0;
    MR_Integer  min;
    
    size_VA0 = ML_va_size(VA0);
    min      = (N <= size_VA0 ? N : size_VA0);
    VA       = MR_GC_NEW(struct ML_va);

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, N + 1);
    VA->rest.array->size = N;

    for (i = 0; i < min; i++) {
        (void) ML_va_get(VA0, i, &VA->rest.array->elements[i]);
    }

    for (i = min; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }
;}
#line 792 "version_store.c"
	MR_RELEASE_GLOBAL_LOCK("resize");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r4 = MR_r6;
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_GOTO_LAB(version_store__new_mutvar_4_0_i5);
MR_def_label(version_store__new_mutvar_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
MR_def_label(version_store__new_mutvar_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0,
		version_store__new_mutvar_4_0_i6);
MR_def_label(version_store__new_mutvar_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0,
		version_store__new_mutvar_4_0_i7);
MR_def_label(version_store__new_mutvar_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module7)
	MR_init_entry1(version_store__copy_mutvar_4_0);
	MR_init_label1(version_store__copy_mutvar_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_store__copy_mutvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__version_store__elem_2_0,
		version_store__copy_mutvar_4_0_i2);
MR_def_label(version_store__copy_mutvar_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(version_store__new_mutvar_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module8)
	MR_init_entry1(fn__version_store__lookup_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_store__lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__version_store__elem_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module9)
	MR_init_entry1(version_store__get_mutvar_4_0);
	MR_init_label1(version_store__get_mutvar_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_store__get_mutvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__version_store__elem_2_0,
		version_store__get_mutvar_4_0_i2);
MR_def_label(version_store__get_mutvar_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module10)
	MR_init_entry1(fn__version_store__set_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_store__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module11)
	MR_init_entry1(version_store__set_mutvar_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_store__set_mutvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_101_108_101_109_32_58_61_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module12)
	MR_init_entry1(fn__version_store__unsafe_rewind_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_store__unsafe_rewind_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA0;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_store__unsafe_rewind_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	MR_OBTAIN_GLOBAL_LOCK("unsafe_rewind");
{
#line 139 "version_array.opt"

    VA = ML_va_rewind(VA0);
;}
#line 1003 "version_store.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_rewind");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module13)
	MR_init_entry1(version_store__unsafe_rewind_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_store__unsafe_rewind_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA0;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_store__unsafe_rewind_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	MR_OBTAIN_GLOBAL_LOCK("unsafe_rewind");
{
#line 139 "version_array.opt"

    VA = ML_va_rewind(VA0);
;}
#line 1041 "version_store.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_rewind");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module14)
	MR_init_entry1(__Unify___version_store__mutvar_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_store__mutvar_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r3 == MR_r4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module15)
	MR_init_entry1(__Compare___version_store__mutvar_2_0);
	MR_init_label2(__Compare___version_store__mutvar_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_store__mutvar_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___version_store__mutvar_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___version_store__mutvar_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(__Compare___version_store__mutvar_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___version_store__mutvar_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module16)
	MR_init_entry1(__Unify___version_store__some_version_store_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_store__some_version_store_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module17)
	MR_init_entry1(__Compare___version_store__some_version_store_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_store__some_version_store_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___version_array__version_array_1_0);

MR_BEGIN_MODULE(version_store_module18)
	MR_init_entry1(__Unify___version_store__version_store_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_store__version_store_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_np_tailcall_ent(__Unify___version_array__version_array_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___version_array__version_array_1_0);

MR_BEGIN_MODULE(version_store_module19)
	MR_init_entry1(__Compare___version_store__version_store_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_store__version_store_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_np_tailcall_ent(__Compare___version_array__version_array_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module20)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module21)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_store_module22)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__version_store_maybe_bunch_0(void)
{
	version_store_module0();
	version_store_module1();
	version_store_module2();
	version_store_module3();
	version_store_module4();
	version_store_module5();
	version_store_module6();
	version_store_module7();
	version_store_module8();
	version_store_module9();
	version_store_module10();
	version_store_module11();
	version_store_module12();
	version_store_module13();
	version_store_module14();
	version_store_module15();
	version_store_module16();
	version_store_module17();
	version_store_module18();
	version_store_module19();
	version_store_module20();
	version_store_module21();
	version_store_module22();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__version_store__init(void);
void mercury__version_store__init_type_tables(void);
void mercury__version_store__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__version_store__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__version_store__init_complexity_procs(void);
#endif

void mercury__version_store__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__version_store_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_store__type_ctor_info_version_store_1,
		version_store__version_store_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_store__type_ctor_info_some_version_store_type_0,
		version_store__some_version_store_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_store__type_ctor_info_mutvar_2,
		version_store__mutvar_2_0);
	mercury__version_store__init_debugger();
}

void mercury__version_store__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_version_store__type_ctor_info_version_store_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_version_store__type_ctor_info_some_version_store_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_version_store__type_ctor_info_mutvar_2);
	}
}


void mercury__version_store__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__version_store__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__version_store__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
