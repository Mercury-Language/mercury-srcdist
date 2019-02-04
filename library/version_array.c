/*
** Automatically generated from `version_array.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
INIT mercury__version_array__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "version_array.c"
#include "version_array.mh"

#line 27 "version_array.c"
#line 136 "io.int2"
#include "io.mh"

#line 31 "version_array.c"
#line 144 "io.int2"
#include "string.mh"

#line 35 "version_array.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "version_array.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "version_array.c"
#line 31 "array.int2"
#include "array.mh"

#line 47 "version_array.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "version_array.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 55 "version_array.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 59 "version_array.c"
#line 150 "io.opt"
#include "dir.mh"

#line 63 "version_array.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 67 "version_array.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "version_array.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "version_array.c"
#line 20 "store.opt"
#include "store.mh"

#line 79 "version_array.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 83 "version_array.c"
#line 4 "char.opt"
#include "char.mh"

#line 87 "version_array.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 91 "version_array.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 95 "version_array.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 99 "version_array.c"
#line 4 "int.opt"
#include "int.mh"

#line 103 "version_array.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "version_array.c"
#line 108 "version_array.c"
#ifndef VERSION_ARRAY_DECL_GUARD
#define VERSION_ARRAY_DECL_GUARD

#line 112 "version_array.c"
#line 527 "version_array.m"

    /*
    ** If index is -1 then value is undefined and rest is the latest
    ** array value.
    **
    ** Otherwise value is the overwritten value at index and rest is
    ** a pointer to the next version in the chain.
    */

typedef struct ML_va    *ML_va_ptr;

struct ML_va {
    MR_Integer          index;  /* -1 for latest, >= 0 for older */
    MR_Word             value;  /* Valid if index >= 0           */
    union {
        MR_ArrayPtr     array;  /* Valid if index == -1          */
        ML_va_ptr       next;   /* Valid if index >= 0           */
    } rest;
};

    /*
    ** Returns a pointer to the latest version of the array.
    */
extern ML_va_ptr    ML_va_get_latest(ML_va_ptr VA);

    /*
    ** Returns the number of items in a version array.
    */
extern MR_Integer   ML_va_size(ML_va_ptr);

    /*
    ** If I is in range then ML_va_get(VA, I, &X) sets X to the Ith item
    ** in VA (counting from zero) and returns MR_TRUE.  Otherwise it
    ** returns MR_FALSE.
    */
extern int          ML_va_get(ML_va_ptr, MR_Integer, MR_Word *);

    /*
    ** If I is in range then ML_va_set(VA0, I, X, VA) sets VA to be VA0
    ** updated with the Ith item as X (counting from zero) and
    ** returns MR_TRUE.  Otherwise it returns MR_FALSE.
    */
extern int          ML_va_set(ML_va_ptr, MR_Integer, MR_Word, ML_va_ptr *);

    /*
    ** Create a copy of VA0 as a new array.
    */
static ML_va_ptr    ML_va_flat_copy(const ML_va_ptr VA0);

    /*
    ** Update the array VA using the override values in VA0
    ** i.e. recreate the state of the version array as captured in VA0.
    */
static void         ML_va_rewind_into(ML_va_ptr VA, const ML_va_ptr VA0);

    /*
    ** `Rewinds' a version array, invalidating all extant successors
    ** including the argument.
    */
extern ML_va_ptr    ML_va_rewind(ML_va_ptr);


#line 176 "version_array.c"
#line 177 "version_array.c"

#endif
#line 180 "version_array.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_version_array__type_ctor_info_version_array_1;
MR_decl_label4(version_array__cmp_version_array_3_0, 2,3,5,25)
MR_decl_label8(version_array__cmp_version_array_2_5_0, 45,2,4,8,10,14,15,48)
MR_decl_label1(version_array__eq_version_array_2_0, 1)
MR_decl_label8(version_array__eq_version_array_2_3_0, 45,4,8,10,14,15,19,1)
MR_decl_label5(version_array__foldl_2_6_0, 25,4,8,9,2)
MR_decl_label5(version_array__foldl_2_6_1, 25,4,8,9,2)
MR_decl_label5(version_array__foldl_2_6_2, 25,4,8,9,2)
MR_decl_label1(version_array__get_if_in_range_3_0, 1)
MR_decl_label1(version_array__set_4_0, 3)
MR_decl_label1(version_array__set_if_in_range_4_0, 1)
MR_decl_label4(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0, 25,4,27,2)
MR_decl_label3(fn__version_array__copy_1_0, 25,24,6)
MR_decl_label1(fn__version_array__elem_2_0, 3)
MR_decl_label1(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0, 3)
MR_decl_label5(fn__version_array__foldl_2_5_0, 25,4,8,9,2)
MR_decl_label5(fn__version_array__foldr_2_4_0, 25,4,8,9,2)
MR_decl_label1(fn__version_array__lookup_2_0, 3)
MR_decl_label3(fn__version_array__version_array_1_0, 14,4,5)
MR_decl_label4(fn__version_array__version_array_2_3_0, 25,3,5,28)
MR_decl_label1(__Unify___version_array__version_array_1_0, 6)
MR_decl_label2(__Compare___version_array__version_array_1_0, 3,2)
MR_def_extern_entry(fn__version_array__empty_0_0)
MR_def_extern_entry(fn__version_array__new_2_0)
MR_def_extern_entry(fn__version_array__init_2_0)
MR_def_extern_entry(version_array__set_if_in_range_4_0)
MR_def_extern_entry(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0)
MR_decl_static(fn__version_array__version_array_2_3_0)
MR_def_extern_entry(fn__version_array__version_array_1_0)
MR_def_extern_entry(fn__version_array__from_list_1_0)
MR_def_extern_entry(version_array__get_if_in_range_3_0)
MR_def_extern_entry(fn__version_array__elem_2_0)
MR_def_extern_entry(fn__version_array__lookup_2_0)
MR_def_extern_entry(version_array__set_4_0)
MR_def_extern_entry(fn__version_array__size_1_0)
MR_def_extern_entry(fn__version_array__max_1_0)
MR_def_extern_entry(fn__version_array__resize_3_0)
MR_def_extern_entry(version_array__resize_4_0)
MR_def_extern_entry(fn__version_array__foldr_2_4_0)
MR_def_extern_entry(fn__version_array__foldr_3_0)
MR_def_extern_entry(fn__version_array__list_1_0)
MR_def_extern_entry(fn__version_array__to_list_1_0)
MR_def_extern_entry(fn__version_array__foldl_2_5_0)
MR_def_extern_entry(fn__version_array__foldl_3_0)
MR_def_extern_entry(version_array__foldl_2_6_0)
MR_def_extern_entry(version_array__foldl_2_6_1)
MR_def_extern_entry(version_array__foldl_2_6_2)
MR_def_extern_entry(version_array__foldl_4_0)
MR_def_extern_entry(version_array__foldl_4_1)
MR_def_extern_entry(version_array__foldl_4_2)
MR_def_extern_entry(fn__version_array__copy_1_0)
MR_def_extern_entry(fn__version_array__unsafe_rewind_1_0)
MR_def_extern_entry(version_array__unsafe_rewind_2_0)
MR_decl_static(version_array__eq_version_array_2_3_0)
MR_def_extern_entry(version_array__eq_version_array_2_0)
MR_decl_static(version_array__cmp_version_array_2_5_0)
MR_def_extern_entry(version_array__cmp_version_array_3_0)
MR_def_extern_entry(__Unify___version_array__version_array_1_0)
MR_def_extern_entry(__Compare___version_array__version_array_1_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0)

const MR_TypeCtorInfo_Struct mercury_data_version_array__type_ctor_info_version_array_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_array__version_array_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_array__version_array_1_0)),
	"version_array",
	"version_array",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(version_array_module0)
	MR_init_entry1(fn__version_array__empty_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__empty_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__empty_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__empty_0_0
	MR_OBTAIN_GLOBAL_LOCK("empty");
{
#line 334 "version_array.m"

    VA = MR_GC_NEW(struct ML_va);

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, 1);
    VA->rest.array->size = 0;
;}
#line 297 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("empty");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module1)
	MR_init_entry1(fn__version_array__new_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__new_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__new_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__new_2_0
	N = MR_r2;
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("new");
{
#line 359 "version_array.m"

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
#line 346 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("new");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module2)
	MR_init_entry1(fn__version_array__init_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__init_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__version_array__new_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module3)
	MR_init_entry1(version_array__set_if_in_range_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__set_if_in_range_4_0);
	MR_init_label1(version_array__set_if_in_range_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_if_in_range'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__set_if_in_range_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_array__set_if_in_range_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	I = MR_r3;
	X = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 493 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 412 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__set_if_in_range_4_0_i1);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(version_array__set_if_in_range_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(version_array_module4)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
	MR_init_label1(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem :='/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA0);
	I = MR_r2;
	X = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 493 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 468 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0_i3);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module5)
	MR_init_entry1(fn__version_array__version_array_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__version_array_2_3_0);
	MR_init_label4(fn__version_array__version_array_2_3_0,25,3,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'version_array_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_array__version_array_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__version_array__version_array_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__version_array__version_array_2_3_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(fn__version_array__version_array_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r2;
	MR_tempr1 = ((MR_Integer) MR_tempr4 + (MR_Integer) 1);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr3 = MR_tfield(1, MR_tempr5, 0);
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__version_array_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA0);
	I = MR_tempr4;
	X = MR_tempr3;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 493 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 547 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__version_array_2_3_0_i5);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r4);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__version_array__version_array_2_3_0_i25);
	}
MR_def_label(fn__version_array__version_array_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	}
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_array__version_array_2_3_0_i28);
MR_def_label(fn__version_array__version_array_2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__version_array__version_array_2_3_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);

MR_BEGIN_MODULE(version_array_module6)
	MR_init_entry1(fn__version_array__version_array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__version_array_1_0);
	MR_init_label3(fn__version_array__version_array_1_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'version_array'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__version_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__version_array__version_array_1_0_i14);
	}
	{
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__version_array_1_0
	MR_OBTAIN_GLOBAL_LOCK("empty");
{
#line 334 "version_array.m"

    VA = MR_GC_NEW(struct ML_va);

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, 1);
    VA->rest.array->size = 0;
;}
#line 615 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("empty");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__version_array__version_array_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__version_array__version_array_1_0_i4);
MR_def_label(fn__version_array__version_array_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) 1 + (MR_Integer) MR_tempr1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__version_array__new_2_0,
		fn__version_array__version_array_1_0_i5);
MR_def_label(fn__version_array__version_array_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__version_array__version_array_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module7)
	MR_init_entry1(fn__version_array__from_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__from_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__from_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__version_array__version_array_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module8)
	MR_init_entry1(version_array__get_if_in_range_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__get_if_in_range_3_0);
	MR_init_label1(version_array__get_if_in_range_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_if_in_range'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__get_if_in_range_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__get_if_in_range_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 718 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__get_if_in_range_3_0_i1);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(version_array__get_if_in_range_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module9)
	MR_init_entry1(fn__version_array__elem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__elem_2_0);
	MR_init_label1(fn__version_array__elem_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__elem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__elem_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 771 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__elem_2_0_i3);
	MR_tempr1 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__version_array__elem_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module10)
	MR_init_entry1(fn__version_array__lookup_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__lookup_2_0);
	MR_init_label1(fn__version_array__lookup_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__lookup_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 825 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__lookup_2_0_i3);
	MR_tempr1 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__version_array__lookup_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module11)
	MR_init_entry1(version_array__set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__set_4_0);
	MR_init_label1(version_array__set_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_array__set_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA0);
	I = MR_r2;
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 493 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 881 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__set_4_0_i3);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(version_array__set_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module12)
	MR_init_entry1(fn__version_array__size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__size_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__size_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__size_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 934 "version_array.c"
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


MR_BEGIN_MODULE(version_array_module13)
	MR_init_entry1(fn__version_array__max_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__max_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__max_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__max_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 973 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module14)
	MR_init_entry1(fn__version_array__resize_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__resize_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'resize'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__resize_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__resize_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	N = MR_r3;
	X = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("resize");
{
#line 390 "version_array.m"

    ML_va_ptr   latest;
    MR_Integer  i;
    MR_Integer  size_VA0;
    MR_Integer  min;

    latest = ML_va_get_latest(VA0);

    size_VA0 = ML_va_size(latest);
    min      = (N <= size_VA0 ? N : size_VA0);
    VA       = MR_GC_NEW(struct ML_va);

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, N + 1);
    VA->rest.array->size = N;

    for (i = 0; i < min; i++) {
        VA->rest.array->elements[i] = latest->rest.array->elements[i];
    }

    ML_va_rewind_into(VA, VA0);

    for (i = min; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }
;}
#line 1040 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("resize");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module15)
	MR_init_entry1(version_array__resize_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__resize_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'resize'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__resize_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__version_array__resize_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(version_array_module16)
	MR_init_entry1(fn__version_array__foldr_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__foldr_2_4_0);
	MR_init_label5(fn__version_array__foldr_2_4_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__foldr_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__version_array__foldr_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__version_array__foldr_2_4_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__foldr_2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1120 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__foldr_2_4_0_i4);
	MR_r7 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_GOTO_LAB(fn__version_array__foldr_2_4_0_i8);
MR_def_label(fn__version_array__foldr_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_array__foldr_2_4_0_i8);
MR_def_label(fn__version_array__foldr_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__version_array__foldr_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__version_array__foldr_2_4_0_i9);
MR_def_label(fn__version_array__foldr_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__version_array__foldr_2_4_0_i25);
	}
MR_def_label(fn__version_array__foldr_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module17)
	MR_init_entry1(fn__version_array__foldr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__foldr_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__foldr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__foldr_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 1199 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_np_tailcall_ent(fn__version_array__foldr_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module18)
	MR_init_entry1(fn__version_array__list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__list_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 1240 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module19)
	MR_init_entry1(fn__version_array__to_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__to_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__to_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__version_array__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module20)
	MR_init_entry1(fn__version_array__foldl_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__foldl_2_5_0);
	MR_init_label5(fn__version_array__foldl_2_5_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__foldl_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__version_array__foldl_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__version_array__foldl_2_5_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__foldl_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1314 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__foldl_2_5_0_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(fn__version_array__foldl_2_5_0_i8);
MR_def_label(fn__version_array__foldl_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_array__foldl_2_5_0_i8);
MR_def_label(fn__version_array__foldl_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__version_array__foldl_2_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__version_array__foldl_2_5_0_i9);
MR_def_label(fn__version_array__foldl_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__version_array__foldl_2_5_0_i25);
	}
MR_def_label(fn__version_array__foldl_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module21)
	MR_init_entry1(fn__version_array__foldl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__foldl_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__foldl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__foldl_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 1393 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r7 = N;
#undef	MR_PROC_LABEL
	}
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__version_array__foldl_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module22)
	MR_init_entry1(version_array__foldl_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_2_6_0);
	MR_init_label5(version_array__foldl_2_6_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(version_array__foldl_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(version_array__foldl_2_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__foldl_2_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1444 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__foldl_2_6_0_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(version_array__foldl_2_6_0_i8);
MR_def_label(version_array__foldl_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__foldl_2_6_0_i8);
MR_def_label(version_array__foldl_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__foldl_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__foldl_2_6_0_i9);
MR_def_label(version_array__foldl_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(version_array__foldl_2_6_0_i25);
	}
MR_def_label(version_array__foldl_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module23)
	MR_init_entry1(version_array__foldl_2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_2_6_1);
	MR_init_label5(version_array__foldl_2_6_1,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(version_array__foldl_2_6_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(version_array__foldl_2_6_1_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__foldl_2_6_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1536 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__foldl_2_6_1_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(version_array__foldl_2_6_1_i8);
MR_def_label(version_array__foldl_2_6_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__foldl_2_6_1_i8);
MR_def_label(version_array__foldl_2_6_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__foldl_2_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__foldl_2_6_1_i9);
MR_def_label(version_array__foldl_2_6_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(version_array__foldl_2_6_1_i25);
	}
MR_def_label(version_array__foldl_2_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module24)
	MR_init_entry1(version_array__foldl_2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_2_6_2);
	MR_init_label5(version_array__foldl_2_6_2,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(version_array__foldl_2_6_2,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(version_array__foldl_2_6_2_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__foldl_2_6_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1628 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__foldl_2_6_2_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(version_array__foldl_2_6_2_i8);
MR_def_label(version_array__foldl_2_6_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__foldl_2_6_2_i8);
MR_def_label(version_array__foldl_2_6_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__foldl_2_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__foldl_2_6_2_i9);
MR_def_label(version_array__foldl_2_6_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(version_array__foldl_2_6_2_i25);
	}
MR_def_label(version_array__foldl_2_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module25)
	MR_init_entry1(version_array__foldl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 1707 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r6 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(version_array__foldl_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module26)
	MR_init_entry1(version_array__foldl_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 1750 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r6 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(version_array__foldl_2_6_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module27)
	MR_init_entry1(version_array__foldl_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl_4_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 1793 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r6 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(version_array__foldl_2_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module28)
	MR_init_entry1(fn__version_array__copy_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__copy_1_0);
	MR_init_label3(fn__version_array__copy_1_0,25,24,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__copy_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__copy_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 1837 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r3 = N;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__version_array__copy_1_0_i25);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__version_array__copy_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__copy_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 1862 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r3 = N;
#undef	MR_PROC_LABEL
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__copy_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1883 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__copy_1_0_i6);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(fn__version_array__copy_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__version_array__resize_3_0);
MR_def_label(fn__version_array__copy_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_array__copy_1_0_i24);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module29)
	MR_init_entry1(fn__version_array__unsafe_rewind_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__unsafe_rewind_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_rewind'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__unsafe_rewind_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__unsafe_rewind_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	MR_OBTAIN_GLOBAL_LOCK("unsafe_rewind");
{
#line 515 "version_array.m"

    VA = ML_va_rewind(VA0);
;}
#line 1933 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_rewind");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module30)
	MR_init_entry1(version_array__unsafe_rewind_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__unsafe_rewind_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_rewind'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__unsafe_rewind_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_array__unsafe_rewind_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	MR_OBTAIN_GLOBAL_LOCK("unsafe_rewind");
{
#line 515 "version_array.m"

    VA = ML_va_rewind(VA0);
;}
#line 1970 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_rewind");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(version_array_module31)
	MR_init_entry1(version_array__eq_version_array_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__eq_version_array_2_3_0);
	MR_init_label8(version_array__eq_version_array_2_3_0,45,4,8,10,14,15,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eq_version_array_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_array__eq_version_array_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(version_array__eq_version_array_2_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i19);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__eq_version_array_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2021 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i4);
	MR_r5 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i8);
MR_def_label(version_array__eq_version_array_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__eq_version_array_2_3_0_i8);
MR_def_label(version_array__eq_version_array_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__eq_version_array_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(3), VA);
	I = MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2058 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i10);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i14);
MR_def_label(version_array__eq_version_array_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__eq_version_array_2_3_0_i14);
MR_def_label(version_array__eq_version_array_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(builtin__unify_2_0,
		version_array__eq_version_array_2_3_0_i15);
MR_def_label(version_array__eq_version_array_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i45);
MR_def_label(version_array__eq_version_array_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(version_array__eq_version_array_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module32)
	MR_init_entry1(version_array__eq_version_array_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__eq_version_array_2_0);
	MR_init_label1(version_array__eq_version_array_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eq_version_array'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__eq_version_array_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__eq_version_array_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 2131 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__eq_version_array_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 2147 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr2 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	if ((MR_tempr3 != MR_tempr1)) {
		MR_GOTO_LAB(version_array__eq_version_array_2_0_i1);
	}
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(version_array__eq_version_array_2_3_0);
	}
MR_def_label(version_array__eq_version_array_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(version_array_module33)
	MR_init_entry1(version_array__cmp_version_array_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__cmp_version_array_2_5_0);
	MR_init_label8(version_array__cmp_version_array_2_5_0,45,2,4,8,10,14,15,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmp_version_array_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_array__cmp_version_array_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(version_array__cmp_version_array_2_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(version_array__cmp_version_array_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__cmp_version_array_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2217 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i4);
	MR_r6 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_r6;
	MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i8);
MR_def_label(version_array__cmp_version_array_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__cmp_version_array_2_5_0_i8);
MR_def_label(version_array__cmp_version_array_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__cmp_version_array_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(4), VA);
	I = MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2255 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i10);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i14);
MR_def_label(version_array__cmp_version_array_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__cmp_version_array_2_5_0_i14);
MR_def_label(version_array__cmp_version_array_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(builtin__compare_3_0,
		version_array__cmp_version_array_2_5_0_i15);
MR_def_label(version_array__cmp_version_array_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r1 == (MR_Integer) 1) || ((MR_Integer) MR_r1 == (MR_Integer) 2))) {
		MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i48);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i45);
MR_def_label(version_array__cmp_version_array_2_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module34)
	MR_init_entry1(version_array__cmp_version_array_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__cmp_version_array_3_0);
	MR_init_label4(version_array__cmp_version_array_3_0,2,3,5,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmp_version_array'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__cmp_version_array_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__cmp_version_array_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 2322 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r4 = N;
#undef	MR_PROC_LABEL
	}
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__cmp_version_array_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 450 "version_array.m"

    N = ML_va_size(VA);
;}
#line 2338 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r5 = N;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(version_array__cmp_version_array_3_0_i2);
	}
	MR_r6 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r5 = MR_r6;
	MR_GOTO_LAB(version_array__cmp_version_array_3_0_i5);
MR_def_label(version_array__cmp_version_array_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(version_array__cmp_version_array_3_0_i3);
	}
	MR_r6 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r5 = MR_r6;
	MR_GOTO_LAB(version_array__cmp_version_array_3_0_i5);
MR_def_label(version_array__cmp_version_array_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r5 = MR_tempr1;
	}
MR_def_label(version_array__cmp_version_array_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(version_array__cmp_version_array_3_0_i25);
	}
	MR_r1 = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(version_array__cmp_version_array_2_5_0);
	}
MR_def_label(version_array__cmp_version_array_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module35)
	MR_init_entry1(__Unify___version_array__version_array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___version_array__version_array_1_0);
	MR_init_label1(__Unify___version_array__version_array_1_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_array__version_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___version_array__version_array_1_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_decr_sp(4);
	MR_np_tailcall_ent(version_array__eq_version_array_2_0);
MR_def_label(__Unify___version_array__version_array_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module36)
	MR_init_entry1(__Compare___version_array__version_array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___version_array__version_array_1_0);
	MR_init_label2(__Compare___version_array__version_array_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_array__version_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___version_array__version_array_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___version_array__version_array_1_0_i2);
MR_def_label(__Compare___version_array__version_array_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___version_array__version_array_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(version_array__cmp_version_array_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module37)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module38)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0);
	MR_init_label4(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,25,4,27,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__foldr_2__ho9__[1, 2, 4, 5]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (((MR_Integer) 0 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 468 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2532 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i4);
	MR_tempr1 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	continue;
	}
	break; } /* end while */
MR_def_label(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i27);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i25);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 590 "version_array.m"


#define ML_va_latest_version(VA)   ((VA)->index == -1)

ML_va_ptr
ML_va_get_latest(ML_va_ptr VA)
{
    while (!ML_va_latest_version(VA)) {
        VA = VA->rest.next;
    }

    return VA;
}

MR_Integer
ML_va_size(ML_va_ptr VA)
{
    VA = ML_va_get_latest(VA);

    return VA->rest.array->size;
}

int
ML_va_get(ML_va_ptr VA, MR_Integer I, MR_Word *Xptr)
{
    while (!ML_va_latest_version(VA)) {
        if (I == VA->index) {
            *Xptr = VA->value;
            return MR_TRUE;
        }

        VA = VA->rest.next;
    }

    if (0 <= I && I < VA->rest.array->size) {
        *Xptr = VA->rest.array->elements[I];
        return MR_TRUE;
    } else {
        return MR_FALSE;
    }
}

int
ML_va_set(ML_va_ptr VA0, MR_Integer I, MR_Word X, ML_va_ptr *VAptr)
{
    ML_va_ptr VA1;

    if (ML_va_latest_version(VA0)) {
        if (I < 0 || I >= VA0->rest.array->size) {
            return MR_FALSE;
        }

        VA1 = MR_GC_NEW(struct ML_va);
        VA1->index      = -1;
        VA1->value      = (MR_Word) NULL;
        VA1->rest.array = VA0->rest.array;

        VA0->index     = I;
        VA0->value     = VA0->rest.array->elements[I];
        VA0->rest.next = VA1;

        VA1->rest.array->elements[I] = X;
    } else {
        VA1 = ML_va_flat_copy(VA0);

        if (I < 0 || I >= VA1->rest.array->size) {
            return MR_FALSE;
        }

        VA1->rest.array->elements[I] = X;
    }

    *VAptr = VA1;
    return MR_TRUE;
}

static ML_va_ptr
ML_va_flat_copy(const ML_va_ptr VA0)
{
    ML_va_ptr   latest;
    ML_va_ptr   VA;
    MR_Integer  N;
    MR_Integer  i;

    latest = ML_va_get_latest(VA0);
    N = latest->rest.array->size;

    VA = MR_GC_NEW(struct ML_va);
    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, N + 1);
    VA->rest.array->size = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = latest->rest.array->elements[i];
    }

    ML_va_rewind_into(VA, VA0);

    return VA;
}

static void
ML_va_rewind_into(ML_va_ptr VA, const ML_va_ptr VA0)
{
    MR_Integer I;
    MR_Word    X;

    if (ML_va_latest_version(VA0)) {
        return;
    }

    ML_va_rewind_into(VA, VA0->rest.next);

    I  = VA0->index;
    X  = VA0->value;
    if (I < VA->rest.array->size) {
        VA->rest.array->elements[I] = X;
    }
}

ML_va_ptr
ML_va_rewind(ML_va_ptr VA)
{
    MR_Integer I;
    MR_Word    X;

    if (ML_va_latest_version(VA)) {
        return VA;
    }

    I  = VA->index;
    X  = VA->value;
    VA = ML_va_rewind(VA->rest.next);
    VA->rest.array->elements[I] = X;

    return VA;
}


#line 2709 "version_array.c"

static void mercury__version_array_maybe_bunch_0(void)
{
	version_array_module0();
	version_array_module1();
	version_array_module2();
	version_array_module3();
	version_array_module4();
	version_array_module5();
	version_array_module6();
	version_array_module7();
	version_array_module8();
	version_array_module9();
	version_array_module10();
	version_array_module11();
	version_array_module12();
	version_array_module13();
	version_array_module14();
	version_array_module15();
	version_array_module16();
	version_array_module17();
	version_array_module18();
	version_array_module19();
	version_array_module20();
	version_array_module21();
	version_array_module22();
	version_array_module23();
	version_array_module24();
	version_array_module25();
	version_array_module26();
	version_array_module27();
	version_array_module28();
	version_array_module29();
	version_array_module30();
	version_array_module31();
	version_array_module32();
	version_array_module33();
	version_array_module34();
	version_array_module35();
	version_array_module36();
	version_array_module37();
	version_array_module38();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__version_array__init(void);
void mercury__version_array__init_type_tables(void);
void mercury__version_array__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__version_array__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__version_array__init_complexity_procs(void);
#endif

void mercury__version_array__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__version_array_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_array__type_ctor_info_version_array_1,
		version_array__version_array_1_0);
	mercury__version_array__init_debugger();
}

void mercury__version_array__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_version_array__type_ctor_info_version_array_1);
	}
}


void mercury__version_array__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__version_array__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__version_array);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__version_array__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
