/*
** Automatically generated from `version_array.m'
** by the Mercury compiler,
** version rotd-2017-06-13
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module version_array. */
/* :- implementation. */

/*
INIT mercury__version_array__init
ENDINIT
*/

#include "version_array.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"


#line 995 "version_array.m"


#include "mercury_types.h"
#include "mercury_bitmap.h"

/*
** Returns the number of items in a version array.
*/
static MR_Integer
ML_va_size(ML_const_va_ptr);

/*
** If I is in range then ML_va_get(VA, I, &X) sets X to the I'th item
** in VA (counting from zero) and returns MR_TRUE. Otherwise it
** returns MR_FALSE.
*/
static MR_bool
ML_va_get(ML_const_va_ptr VA, MR_Integer I, MR_Word *Xptr);

/*
** If I is in range then ML_va_set(VA0, I, X, VA) sets VA to be VA0
** updated with the I'th item as X (counting from zero) and
** returns MR_TRUE. Otherwise it returns MR_FALSE.
*/
static MR_bool
ML_va_set(ML_va_ptr, MR_Integer, MR_Word, ML_va_ptr *,
    MR_AllocSiteInfoPtr alloc_id);

/*
** Create a copy of VA0 as a new array.
*/
static ML_va_ptr
ML_va_flat_copy(ML_const_va_ptr VA0, MR_AllocSiteInfoPtr alloc_id);

/*
** Update the array VA using the override values in VA0
** i.e. recreate the state of the version array as captured in VA0.
*/
static void
ML_va_rewind_into(ML_va_ptr VA, ML_const_va_ptr VA0,
    MR_AllocSiteInfoPtr alloc_id);

/*
** `Rewinds' a version array, invalidating all extant successors
** including the argument.
*/
static ML_va_ptr
ML_va_rewind(ML_va_ptr VA, MR_AllocSiteInfoPtr alloc_id);

/*
** Resize a version array.
*/
static ML_va_ptr
ML_va_resize(ML_va_ptr, MR_Integer, MR_Word, MR_AllocSiteInfoPtr);




static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_array__version_array__pti_version_array_1__pseudo_1;

static const MR_Integer mercury__version_array__version_array__functor_number_map_index_out_of_bounds_0[1];

static const MR_NotagFunctorDesc mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0;

static MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0_10001(
  MR_Box mercury__version_array__wrapper_arg_1,
  MR_Box mercury__version_array__wrapper_arg_2);

static void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0_10001(
  MR_Box * mercury__version_array__wrapper_arg_1,
  MR_Box mercury__version_array__wrapper_arg_2,
  MR_Box mercury__version_array__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0_10001(
  MR_Box mercury__version_array__wrapper_arg_1,
  MR_Box mercury__version_array__wrapper_arg_2,
  MR_Box mercury__version_array__wrapper_arg_3);

static void MR_CALL 
mercury__version_array____Compare____version_array_1_0_10001(
  MR_Box mercury__version_array__wrapper_arg_1,
  MR_Box * mercury__version_array__wrapper_arg_2,
  MR_Box mercury__version_array__wrapper_arg_3,
  MR_Box mercury__version_array__wrapper_arg_4);

static MR_Word MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_15,
  MR_Box mercury__version_array__VA_7,
  MR_Word mercury__version_array__Acc_8,
  MR_Integer mercury__version_array__Hi_9);

static MR_Integer MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Box MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2072__1_3_f_0_1(
  MR_Box mercury__version_array__closure_arg);

static MR_Word MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2072__1_3_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_28,
  MR_Integer mercury__version_array__I_4,
  MR_Box mercury__version_array__VA_5);

static void MR_CALL 
mercury__version_array__cmp_version_array_2_5_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_16,
  MR_Integer mercury__version_array__I_6,
  MR_Integer mercury__version_array__Size_7,
  MR_Box mercury__version_array__VAa_8,
  MR_Box mercury__version_array__VAb_9,
  MR_Word * mercury__version_array__R_10);

static MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_3_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_11,
  MR_Integer mercury__version_array__I_4,
  MR_Box mercury__version_array__VAa_5,
  MR_Box mercury__version_array__VAb_6);

static void MR_CALL 
mercury__version_array__from_reverse_list_loop_4_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_19,
  MR_Integer mercury__version_array__I_1,
  MR_Word mercury__version_array__HeadVar__2_2,
  MR_Box mercury__version_array__STATE_VARIABLE_VA_0_3,
  MR_Box * mercury__version_array__STATE_VARIABLE_VA_4);

static void MR_CALL 
mercury__version_array__version_array_loop_4_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_19,
  MR_Integer mercury__version_array__I_1,
  MR_Word mercury__version_array__HeadVar__2_2,
  MR_Box mercury__version_array__STATE_VARIABLE_VA_0_3,
  MR_Box * mercury__version_array__STATE_VARIABLE_VA_4);

static MR_Box MR_CALL 
mercury__version_array__version_array_to_doc_1_f_0_1(
  MR_Box mercury__version_array__closure_arg);


static /* final */ const MR_Box mercury__version_array_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__version_array_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__version_array_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__version_array_scalar_common_4[11][2];

static /* final */ const MR_Box mercury__version_array_scalar_common_5[8][1];

static /* final */ const MR_Integer mercury__version_array_scalar_common_6[1][2];

static /* final */ const MR_Box mercury__version_array_scalar_common_7[1][7];




static /* final */ const MR_Box mercury__version_array_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_array_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_array_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_array_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_array_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_array_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_array_scalar_common_4[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__version_array_scalar_common_5[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "version_array(["))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[6])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "])"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "  "))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Integer mercury__version_array_scalar_common_6[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__version_array_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__version_array_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__version_array__version_array__pti_version_array_1__pseudo_1)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "version_array.mh"
#line 1052 "version_array.m"


#define ML_va_latest_version(VA)   ((VA)->index == -1)

#ifdef MR_THREAD_SAFE
    #define ML_maybe_lock(lock)                         \
        do {                                            \
            if (lock) {                                 \
                MR_LOCK(lock, "ML_maybe_lock");       \
            }                                           \
        } while (0)

    #define ML_maybe_unlock(lock)                       \
        do {                                            \
            if (lock) {                                 \
                MR_UNLOCK(lock, "ML_maybe_unlock");   \
            }                                           \
        } while (0)
#else
    #define ML_maybe_lock(lock)     ((void) 0)
    #define ML_maybe_unlock(lock)   ((void) 0)
#endif

ML_va_ptr
ML_va_get_latest(ML_const_va_ptr VA)
{
    while (!ML_va_latest_version(VA)) {
        VA = VA->rest.next;
    }

    /* Cast away the 'const' */
    return (ML_va_ptr)VA;
}

MR_Integer
ML_va_size_dolock(ML_const_va_ptr VA)
{
#ifdef MR_THREAD_SAFE
    MercuryLock *lock = VA->lock;
#endif
    MR_Integer  size;

    ML_maybe_lock(lock);

    size = ML_va_size(VA);

    ML_maybe_unlock(lock);

    return size;
}

static MR_Integer
ML_va_size(ML_const_va_ptr VA)
{
    VA = ML_va_get_latest(VA);

    return VA->rest.array->size;
}

int
ML_va_get_dolock(ML_const_va_ptr VA, MR_Integer I, MR_Word *Xptr)
{
#ifdef MR_THREAD_SAFE
    MercuryLock *lock = VA->lock;
#endif
    int         ret;

    ML_maybe_lock(lock);

    ret = ML_va_get(VA, I, Xptr);

    ML_maybe_unlock(lock);

    return ret;
}

static int
ML_va_get(ML_const_va_ptr VA, MR_Integer I, MR_Word *Xptr)
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
ML_va_set_dolock(ML_va_ptr VA0, MR_Integer I, MR_Word X, ML_va_ptr *VAptr,
    MR_AllocSiteInfoPtr alloc_id)
{
#ifdef MR_THREAD_SAFE
    MercuryLock *lock = VA0->lock;
#endif
    int         ret;

    ML_maybe_lock(lock);

    ret = ML_va_set(VA0, I, X, VAptr, alloc_id);

    ML_maybe_unlock(lock);

    return ret;
}

static int
ML_va_set(ML_va_ptr VA0, MR_Integer I, MR_Word X, ML_va_ptr *VAptr,
    MR_AllocSiteInfoPtr alloc_id)
{
    ML_va_ptr VA1;

    if (ML_va_latest_version(VA0)) {
        if (I < 0 || I >= VA0->rest.array->size) {
            return MR_FALSE;
        }

        MR_incr_hp_type_msg(VA1, struct ML_va, alloc_id,
            "version_array.version_array/1");
        VA1->index      = -1;
        VA1->value      = (MR_Word) NULL;
        VA1->rest.array = VA0->rest.array;
#ifdef MR_THREAD_SAFE
        VA1->lock       = VA0->lock;
#endif

        VA0->index     = I;
        VA0->value     = VA0->rest.array->elements[I];
        VA0->rest.next = VA1;

        VA1->rest.array->elements[I] = X;
    } else {
        VA1 = ML_va_flat_copy(VA0, alloc_id);

        if (I < 0 || I >= VA1->rest.array->size) {
            return MR_FALSE;
        }

        VA1->rest.array->elements[I] = X;
    }

    *VAptr = VA1;
    return MR_TRUE;
}

static ML_va_ptr
ML_va_flat_copy(ML_const_va_ptr VA0, MR_AllocSiteInfoPtr alloc_id)
{
    ML_va_ptr   latest;
    ML_va_ptr   VA;
    MR_Word     array;
    MR_Integer  N;
    MR_Integer  i;

    latest = ML_va_get_latest(VA0);
    N = latest->rest.array->size;

    MR_incr_hp_type_msg(VA, struct ML_va,
        alloc_id, "version_array.version_array/1");
    MR_incr_hp_msg(array, N + 1,
        alloc_id, "version_array.version_array/1");

    VA->index               = -1;
    VA->value               = (MR_Word) NULL;
    VA->rest.array          = (MR_ArrayPtr) array;
    VA->rest.array->size    = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = latest->rest.array->elements[i];
    }

#ifdef MR_THREAD_SAFE
    if (VA0->lock != NULL) {
        MR_incr_hp_type_msg(VA->lock, MercuryLock, alloc_id, NULL);
        pthread_mutex_init(VA->lock, MR_MUTEX_ATTR);
    } else {
        VA->lock = NULL;
    }
#endif

    ML_va_rewind_into(VA, VA0, alloc_id);

    return VA;
}

static void
ML_va_rewind_into(ML_va_ptr VA_dest, ML_const_va_ptr VA_src,
    MR_AllocSiteInfoPtr alloc_id)
{
    MR_Integer      I;
    MR_Word         X;
    ML_const_va_ptr cur;
    MR_BitmapPtr    bitmap;

    if (ML_va_latest_version(VA_src)) {
        /* Shortcut */
        return;
    }

    /*
    ** Rewind elements from the oldest to the newest, undoing their changes.
    ** So that we undo elements in the correct order we use a bitmap to
    ** ensure that we never update an array slot twice.
    */
    cur = VA_src;
    MR_allocate_bitmap_msg(bitmap, VA_dest->rest.array->size, alloc_id);
    MR_bitmap_zero(bitmap);
    while (!ML_va_latest_version(cur)) {
        I = cur->index;
        X = cur->value;
        if (I < VA_dest->rest.array->size && !MR_bitmap_get_bit(bitmap, I)) {
            VA_dest->rest.array->elements[I] = X;
            MR_bitmap_set_bit(bitmap, I);
        }

        cur = cur->rest.next;
    }
}

ML_va_ptr
ML_va_rewind_dolock(ML_va_ptr VA, MR_AllocSiteInfoPtr alloc_id)
{
#ifdef MR_THREAD_SAFE
    MercuryLock *lock = VA->lock;
#endif
    ML_maybe_lock(lock);

    VA = ML_va_rewind(VA, alloc_id);

    ML_maybe_unlock(lock);

    return VA;
}

static ML_va_ptr
ML_va_rewind(ML_va_ptr VA, MR_AllocSiteInfoPtr alloc_id)
{
    MR_Integer      I;
    MR_Word         X;
    ML_va_ptr       cur;
    MR_ArrayPtr     array;
    MR_BitmapPtr    bitmap;

    if (ML_va_latest_version(VA)) {
        /* Shortcut */
        return VA;
    }

    /*
    ** Rewind elements from the oldest to the newest, undoing their changes.
    ** So that we undo elements in the correct order we use a bitmap to
    ** ensure that we never update an array slot twice.
    */
    cur = VA;
    array = ML_va_get_latest(VA)->rest.array;
    MR_allocate_bitmap_msg(bitmap, array->size, alloc_id);
    while (!ML_va_latest_version(cur)) {
        I = cur->index;
        X = cur->value;

        if (!MR_bitmap_get_bit(bitmap, I)) {
            array->elements[I] = X;
            MR_bitmap_set_bit(bitmap, I);
        }

        cur = cur->rest.next;
    }
    VA->rest.array = array;

    /*
     * This element is no-longer an update element.
     */
    VA->index = -1;
    VA->value = 0;
    return VA;
}

ML_va_ptr
ML_va_resize_dolock(ML_va_ptr VA0, MR_Integer N, MR_Word X,
    MR_AllocSiteInfoPtr alloc_id)
{
#ifdef MR_THREAD_SAFE
    MercuryLock *lock = VA0->lock;
#endif
    ML_va_ptr   VA;

    ML_maybe_lock(lock);

    VA = ML_va_resize(VA0, N, X, alloc_id);

    ML_maybe_unlock(lock);

    return VA;
}

static ML_va_ptr
ML_va_resize(ML_va_ptr VA0, MR_Integer N, MR_Word X,
    MR_AllocSiteInfoPtr alloc_id)
{
    ML_va_ptr   latest;
    ML_va_ptr   VA;
    MR_Integer  i;
    MR_Integer  size_VA0;
    MR_Integer  min;
    MR_Word     array;

    latest = ML_va_get_latest(VA0);

    size_VA0 = ML_va_size(latest);
    min      = (N <= size_VA0 ? N : size_VA0);
    MR_incr_hp_type_msg(VA, struct ML_va,
        alloc_id, "version_array.version_array/1");
    MR_incr_hp_msg(array, N + 1,
        alloc_id, "version_array.version_array/1");

    VA->index               = -1;
    VA->value               = (MR_Word) NULL;
    VA->rest.array          = (MR_ArrayPtr) array;
    VA->rest.array->size    = N;

    for (i = 0; i < min; i++) {
        VA->rest.array->elements[i] = latest->rest.array->elements[i];
    }

#ifdef MR_THREAD_SAFE
    if (VA0->lock != NULL) {
        MR_incr_hp_type_msg(VA->lock, MercuryLock, alloc_id, NULL);
        pthread_mutex_init(VA->lock, MR_MUTEX_ATTR);
    } else {
        VA->lock = NULL;
    }
#endif

    ML_va_rewind_into(VA, VA0, alloc_id);

    for (i = min; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }

    return VA;
}




static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_array__version_array__pti_version_array_1__pseudo_1 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_Integer mercury__version_array__version_array__functor_number_map_index_out_of_bounds_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0 = {
  (MR_String) "index_out_of_bounds",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__version_array__version_array__type_ctor_info_index_out_of_bounds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__version_array____Unify____index_out_of_bounds_0_0_10001)),
  ((MR_Box) (mercury__version_array____Compare____index_out_of_bounds_0_0_10001)),
  (MR_String) "version_array",
  (MR_String) "index_out_of_bounds",
  {     &mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0 },
  {     &mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__version_array__version_array__functor_number_map_index_out_of_bounds_0
};

const MR_TypeCtorInfo_Struct mercury__version_array__version_array__type_ctor_info_version_array_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__version_array____Unify____version_array_1_0_10001)),
  ((MR_Box) (mercury__version_array____Compare____version_array_1_0_10001)),
  (MR_String) "version_array",
  (MR_String) "version_array",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0_10001(
  MR_Box mercury__version_array__wrapper_arg_1,
  MR_Box mercury__version_array__wrapper_arg_2)
{
  {
    MR_bool mercury__version_array__succeeded;

    {
      mercury__version_array__succeeded = mercury__version_array____Unify____index_out_of_bounds_0_0(((MR_Word) mercury__version_array__wrapper_arg_1), ((MR_Word) mercury__version_array__wrapper_arg_2));
    }
    return mercury__version_array__succeeded;
  }
}

static void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0_10001(
  MR_Box * mercury__version_array__wrapper_arg_1,
  MR_Box mercury__version_array__wrapper_arg_2,
  MR_Box mercury__version_array__wrapper_arg_3)
{
  {
    MR_Word mercury__version_array__conv0_HeadVar__1_1;

    {
      mercury__version_array____Compare____index_out_of_bounds_0_0(&mercury__version_array__conv0_HeadVar__1_1, ((MR_Word) mercury__version_array__wrapper_arg_2), ((MR_Word) mercury__version_array__wrapper_arg_3));
    }
    *mercury__version_array__wrapper_arg_1 = ((MR_Box) (mercury__version_array__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0_10001(
  MR_Box mercury__version_array__wrapper_arg_1,
  MR_Box mercury__version_array__wrapper_arg_2,
  MR_Box mercury__version_array__wrapper_arg_3)
{
  {
    MR_bool mercury__version_array__succeeded;

    {
      mercury__version_array__succeeded = mercury__version_array____Unify____version_array_1_0(((MR_Word) mercury__version_array__wrapper_arg_1), ((MR_Box) mercury__version_array__wrapper_arg_2), ((MR_Box) mercury__version_array__wrapper_arg_3));
    }
    return mercury__version_array__succeeded;
  }
}

static void MR_CALL 
mercury__version_array____Compare____version_array_1_0_10001(
  MR_Box mercury__version_array__wrapper_arg_1,
  MR_Box * mercury__version_array__wrapper_arg_2,
  MR_Box mercury__version_array__wrapper_arg_3,
  MR_Box mercury__version_array__wrapper_arg_4)
{
  {
    MR_Word mercury__version_array__conv0_HeadVar__1_1;

    {
      mercury__version_array____Compare____version_array_1_0(((MR_Word) mercury__version_array__wrapper_arg_1), &mercury__version_array__conv0_HeadVar__1_1, ((MR_Box) mercury__version_array__wrapper_arg_3), ((MR_Box) mercury__version_array__wrapper_arg_4));
    }
    *mercury__version_array__wrapper_arg_2 = ((MR_Box) (mercury__version_array__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_15,
  MR_Box mercury__version_array__VA_7,
  MR_Word mercury__version_array__Acc_8,
  MR_Integer mercury__version_array__Hi_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = ((MR_Integer) 0 <= mercury__version_array__Hi_9);
        MR_Word mercury__version_array__HeadVar__5_5;

        if (mercury__version_array__succeeded)
          {
            MR_Word mercury__version_array__Var_11;
            MR_Box mercury__version_array__Var_12;
            MR_Integer mercury__version_array__Var_13;

            {
              mercury__version_array__Var_12 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_15, mercury__version_array__VA_7, mercury__version_array__Hi_9);
            }
            {
              mercury__version_array__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__version_array__Var_11, 0) = mercury__version_array__Var_12;
              MR_hl_field(MR_mktag(1), mercury__version_array__Var_11, 1) = ((MR_Box) (mercury__version_array__Acc_8));
            }
            mercury__version_array__Var_13 = (mercury__version_array__Hi_9 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__version_array__next_value_of_Acc_8 = mercury__version_array__Var_11;
              MR_Integer mercury__version_array__next_value_of_Hi_9 = mercury__version_array__Var_13;

              mercury__version_array__Hi_9 = mercury__version_array__next_value_of_Hi_9;
              mercury__version_array__Acc_8 = mercury__version_array__next_value_of_Acc_8;
            }
            continue;
          }
        else
          mercury__version_array__HeadVar__5_5 = mercury__version_array__Acc_8;
        return mercury__version_array__HeadVar__5_5;
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__version_array__succeeded;

    return (MR_Integer) 1200;
  }
}

static MR_Box MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2072__1_3_f_0_1(
  MR_Box mercury__version_array__closure_arg)
{
  {
    MR_Box mercury__version_array__wrapper_arg_1;
    MR_Box mercury__version_array__closure = mercury__version_array__closure_arg;
    MR_Word mercury__version_array__conv0_LambdaHeadVar__1_24;

    {
      mercury__version_array__conv0_LambdaHeadVar__1_24 = mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2072__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 4))), ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 5))));
    }
    mercury__version_array__wrapper_arg_1 = ((MR_Box) (mercury__version_array__conv0_LambdaHeadVar__1_24));
    return mercury__version_array__wrapper_arg_1;
  }
}

static MR_Word MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2072__1_3_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_28,
  MR_Integer mercury__version_array__I_4,
  MR_Box mercury__version_array__VA_5)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Word mercury__version_array__LambdaHeadVar__1_24;
    MR_Integer mercury__version_array__Var_25 = (mercury__version_array__I_4 + (MR_Integer) 1);
    MR_Integer mercury__version_array__Var_32;
    MR_Integer mercury__version_array__Var_56;
    MR_Word mercury__version_array__TypeInfo_for_T_75;

{
#define MR_PROC_LABEL mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2072__1_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_5 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_56  = N;
}
    mercury__version_array__Var_32 = (mercury__version_array__Var_56 - (MR_Integer) 1);
    mercury__version_array__succeeded = (mercury__version_array__Var_25 > mercury__version_array__Var_32);
    if (mercury__version_array__succeeded)
      {
        mercury__version_array__LambdaHeadVar__1_24 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
      }
    else
      {
        MR_Word mercury__version_array__Var_34;
        MR_Word mercury__version_array__Var_35;
        MR_Word mercury__version_array__Var_36;
        MR_Box mercury__version_array__Var_37;
        MR_Word mercury__version_array__Var_38;
        MR_Word mercury__version_array__Var_39;
        MR_Word mercury__version_array__Var_47;
        MR_Word mercury__version_array__Var_48;
        MR_Word mercury__version_array__Var_49;
        MR_Word mercury__version_array__Var_53;
        MR_Word mercury__version_array__V_4_59;
        MR_Integer mercury__version_array__Var_54;
        MR_Integer mercury__version_array__Var_63;
        MR_Word mercury__version_array__TypeInfo_for_T_76;

        {
          mercury__version_array__Var_37 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_28, mercury__version_array__VA_5, mercury__version_array__Var_25);
        }
        {
          mercury__univ__type_to_univ_2_p_1(mercury__version_array__TypeInfo_for_T_28, mercury__version_array__Var_37, &mercury__version_array__V_4_59);
        }
        {
          mercury__version_array__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mercury__version_array__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), mercury__version_array__Var_36, 1) = ((MR_Box) (mercury__version_array__V_4_59));
        }
        {
          mercury__version_array__Var_35 = mercury__pretty_printer__format_arg_1_f_0(mercury__version_array__Var_36);
        }
{
#define MR_PROC_LABEL mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2072__1_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_5 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_63  = N;
}
        mercury__version_array__Var_54 = (mercury__version_array__Var_63 - (MR_Integer) 1);
        mercury__version_array__succeeded = (mercury__version_array__Var_25 == mercury__version_array__Var_54);
        if (mercury__version_array__succeeded)
          {
            mercury__version_array__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
          }
        else
          {
            MR_Word mercury__version_array__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[1]);
            MR_Word mercury__version_array__V_4_66 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[6]);
            MR_Word mercury__version_array__V_5_67 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[2]);
            MR_Word mercury__version_array__V_7_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[5]);
            MR_Word mercury__version_array__V_6_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__version_array__V_8_70 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[3]);
            MR_Word mercury__version_array__V_9_71 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[4]);
            MR_Word mercury__version_array__V_10_72 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[3]);
            MR_Word mercury__version_array__V_12_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__version_array__V_11_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

            mercury__version_array__Var_39 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[4]);
          }
        {
          mercury__version_array__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_49, 0) = ((MR_Box) (&mercury__version_array_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_49, 1) = ((MR_Box) (mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2072__1_3_f_0_1));
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_49, 3) = ((MR_Box) (mercury__version_array__TypeInfo_for_T_28));
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_49, 4) = ((MR_Box) (mercury__version_array__Var_25));
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_49, 5) = ((MR_Box) (mercury__version_array__VA_5));
        }
        {
          mercury__version_array__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mercury__version_array__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), mercury__version_array__Var_48, 1) = ((MR_Box) (mercury__version_array__Var_49));
        }
        mercury__version_array__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__version_array__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_47, 0) = ((MR_Box) (mercury__version_array__Var_48));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_47, 1) = ((MR_Box) (mercury__version_array__Var_53));
        }
        {
          mercury__version_array__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_38, 0) = ((MR_Box) (mercury__version_array__Var_39));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_38, 1) = ((MR_Box) (mercury__version_array__Var_47));
        }
        {
          mercury__version_array__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_34, 0) = ((MR_Box) (mercury__version_array__Var_35));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_34, 1) = ((MR_Box) (mercury__version_array__Var_38));
        }
        {
          mercury__version_array__LambdaHeadVar__1_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), mercury__version_array__LambdaHeadVar__1_24, 0) = ((MR_Box) (mercury__version_array__Var_34));
        }
      }
    return mercury__version_array__LambdaHeadVar__1_24;
  }
}

void MR_CALL 
mercury__version_array____Compare____version_array_1_0(
  MR_Word mercury__version_array__TypeInfo_for_T_6,
  MR_Word * mercury__version_array__HeadVar__1_1,
  MR_Box mercury__version_array__HeadVar__2_2,
  MR_Box mercury__version_array__HeadVar__3_3)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__CastX_4 = (MR_Integer) mercury__version_array__HeadVar__2_2;
    MR_Integer mercury__version_array__CastY_5 = (MR_Integer) mercury__version_array__HeadVar__3_3;

    mercury__version_array__succeeded = (mercury__version_array__CastX_4 == mercury__version_array__CastY_5);
    if (mercury__version_array__succeeded)
      *mercury__version_array__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        mercury__version_array__cmp_version_array_3_p_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__HeadVar__1_1, mercury__version_array__HeadVar__2_2, mercury__version_array__HeadVar__3_3);
      }
  }
}

MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0(
  MR_Word mercury__version_array__TypeInfo_for_T_5,
  MR_Box mercury__version_array__HeadVar__1_1,
  MR_Box mercury__version_array__HeadVar__2_2)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__CastX_3 = (MR_Integer) mercury__version_array__HeadVar__1_1;
    MR_Integer mercury__version_array__CastY_4 = (MR_Integer) mercury__version_array__HeadVar__2_2;

    mercury__version_array__succeeded = (mercury__version_array__CastX_3 == mercury__version_array__CastY_4);
    if (mercury__version_array__succeeded)
      mercury__version_array__succeeded = MR_TRUE;
    else
      {
        mercury__version_array__succeeded = mercury__version_array__eq_version_array_2_p_0(mercury__version_array__TypeInfo_for_T_5, mercury__version_array__HeadVar__1_1, mercury__version_array__HeadVar__2_2);
      }
    return mercury__version_array__succeeded;
  }
}

void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0(
  MR_Word * mercury__version_array__HeadVar__1_1,
  MR_Word mercury__version_array__HeadVar__2_2,
  MR_Word mercury__version_array__HeadVar__3_3)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__CastX_6 = (MR_Integer) mercury__version_array__HeadVar__2_2;
    MR_Integer mercury__version_array__CastY_7 = (MR_Integer) mercury__version_array__HeadVar__3_3;

    mercury__version_array__succeeded = (mercury__version_array__CastX_6 == mercury__version_array__CastY_7);
    if (mercury__version_array__succeeded)
      *mercury__version_array__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mercury__version_array__Var_4 = (MR_String) mercury__version_array__HeadVar__2_2;
        MR_String mercury__version_array__Var_5 = (MR_String) mercury__version_array__HeadVar__3_3;
        MR_Integer mercury__version_array__V_7_12;

{
#define MR_PROC_LABEL mercury__version_array____Compare____index_out_of_bounds_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__version_array__Var_4 ;
	S2 =  mercury__version_array__Var_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_7_12  = Res;
}
        mercury__version_array__succeeded = (mercury__version_array__V_7_12 < (MR_Integer) 0);
        if (mercury__version_array__succeeded)
          *mercury__version_array__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__version_array__succeeded = (mercury__version_array__V_7_12 == (MR_Integer) 0);
            if (mercury__version_array__succeeded)
              *mercury__version_array__HeadVar__1_1 = (MR_Integer) 0;
            else
              *mercury__version_array__HeadVar__1_1 = (MR_Integer) 2;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0(
  MR_Word mercury__version_array__HeadVar__1_1,
  MR_Word mercury__version_array__HeadVar__2_2)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__CastX_5 = (MR_Integer) mercury__version_array__HeadVar__1_1;
    MR_Integer mercury__version_array__CastY_6 = (MR_Integer) mercury__version_array__HeadVar__2_2;

    mercury__version_array__succeeded = (mercury__version_array__CastX_5 == mercury__version_array__CastY_6);
    if (mercury__version_array__succeeded)
      mercury__version_array__succeeded = MR_TRUE;
    else
      {
        MR_String mercury__version_array__Var_3 = (MR_String) mercury__version_array__HeadVar__1_1;
        MR_String mercury__version_array__Var_4 = (MR_String) mercury__version_array__HeadVar__2_2;

        mercury__version_array__succeeded = (strcmp(mercury__version_array__Var_3, mercury__version_array__Var_4) == 0);
      }
    return mercury__version_array__succeeded;
  }
}

void MR_CALL 
mercury__version_array__out_of_bounds_error_3_p_0(
  MR_Integer mercury__version_array__Index_4,
  MR_Integer mercury__version_array__Max_5,
  MR_String mercury__version_array__PredName_6)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Word mercury__version_array__TypeCtorInfo_17_17;
    MR_String mercury__version_array__Msg_7;
    MR_Word mercury__version_array__Var_16;
    MR_String mercury__version_array__Var_19;
    MR_Word mercury__version_array__Var_25 = (MR_Word) &mercury__version_array_scalar_common_5[7];
    MR_String mercury__version_array__Var_26;
    MR_String mercury__version_array__Var_28;
    MR_String mercury__version_array__Var_29;
    MR_String mercury__version_array__Var_36;
    MR_String mercury__version_array__Var_38;
    MR_Word mercury__version_array__V_7_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__version_array__V_8_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__version_array__V_7_59;
    MR_Word mercury__version_array__V_8_60;

    {
      mercury__string__format__format_signed_int_component_5_p_0(mercury__version_array__Var_25, mercury__version_array__V_7_42, mercury__version_array__V_8_43, mercury__version_array__Max_5, &mercury__version_array__Var_19);
    }
    {
      mercury__string__append_3_p_2(mercury__version_array__Var_19, (MR_String) "]", &mercury__version_array__Var_26);
    }
    {
      mercury__string__append_3_p_2((MR_String) " not in range [0, ", mercury__version_array__Var_26, &mercury__version_array__Var_28);
    }
    mercury__version_array__V_7_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__version_array__V_8_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_signed_int_component_5_p_0(mercury__version_array__Var_25, mercury__version_array__V_7_59, mercury__version_array__V_8_60, mercury__version_array__Index_4, &mercury__version_array__Var_29);
    }
    {
      mercury__string__append_3_p_2(mercury__version_array__Var_29, mercury__version_array__Var_28, &mercury__version_array__Var_36);
    }
    {
      mercury__string__append_3_p_2((MR_String) ": index ", mercury__version_array__Var_36, &mercury__version_array__Var_38);
    }
    {
      mercury__string__append_3_p_2(mercury__version_array__PredName_6, mercury__version_array__Var_38, &mercury__version_array__Msg_7);
    }
    mercury__version_array__Var_16 = (MR_Word) mercury__version_array__Msg_7;
    mercury__version_array__TypeCtorInfo_17_17 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_index_out_of_bounds_0;
    {
      mercury__exception__throw_1_p_0(mercury__version_array__TypeCtorInfo_17_17, ((MR_Box) (mercury__version_array__Var_16)));
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__version_array__set_if_in_range_4_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_5,
  MR_Integer mercury__version_array__HeadVar__1_1,
  MR_Box mercury__version_array__HeadVar__2_2,
  MR_Box mercury__version_array__HeadVar__3_3,
  MR_Box * mercury__version_array__HeadVar__4_4)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Word mercury__version_array__TypeInfo_for_T_6;

{
#define MR_PROC_LABEL mercury__version_array__set_if_in_range_4_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I =  mercury__version_array__HeadVar__1_1 ;
	X = (MR_Word) mercury__version_array__HeadVar__2_2 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__HeadVar__3_3 , VA0);
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, *mercury__version_array__HeadVar__4_4 );
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__get_if_in_range_3_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_4,
  MR_Box mercury__version_array__HeadVar__1_1,
  MR_Integer mercury__version_array__HeadVar__2_2,
  MR_Box * mercury__version_array__HeadVar__3_3)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Word mercury__version_array__TypeInfo_for_T_5;

{
#define MR_PROC_LABEL mercury__version_array__get_if_in_range_3_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__HeadVar__1_1 , VA);
	I =  mercury__version_array__HeadVar__2_2 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__version_array__HeadVar__3_3  = (MR_Box) X;
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__version_array__succeeded;
  }
}

static void MR_CALL 
mercury__version_array__cmp_version_array_2_5_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_16,
  MR_Integer mercury__version_array__I_6,
  MR_Integer mercury__version_array__Size_7,
  MR_Box mercury__version_array__VAa_8,
  MR_Box mercury__version_array__VAb_9,
  MR_Word * mercury__version_array__R_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_6 >= mercury__version_array__Size_7);

        if (mercury__version_array__succeeded)
          *mercury__version_array__R_10 = (MR_Integer) 0;
        else
          {
            MR_Word mercury__version_array__R0_11;
            MR_Box mercury__version_array__Var_12;
            MR_Box mercury__version_array__Var_13;

            {
              mercury__version_array__Var_12 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_16, mercury__version_array__VAa_8, mercury__version_array__I_6);
            }
            {
              mercury__version_array__Var_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_16, mercury__version_array__VAb_9, mercury__version_array__I_6);
            }
            {
              mercury__builtin__compare_3_p_0(mercury__version_array__TypeInfo_for_T_16, &mercury__version_array__R0_11, mercury__version_array__Var_12, mercury__version_array__Var_13);
            }
            switch (mercury__version_array__R0_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *mercury__version_array__R_10 = mercury__version_array__R0_11;
                break;
              case (MR_Integer) 0:
                {
                  MR_Integer mercury__version_array__Var_14 = (mercury__version_array__I_6 + (MR_Integer) 1);

                  /* direct tailcall eliminated */
                  {
                    MR_Integer mercury__version_array__next_value_of_I_6 = mercury__version_array__Var_14;

                    mercury__version_array__I_6 = mercury__version_array__next_value_of_I_6;
                  }
                  continue;
                }
                break;
            }
          }
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__cmp_version_array_3_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_11,
  MR_Word * mercury__version_array__R_4,
  MR_Box mercury__version_array__VAa_5,
  MR_Box mercury__version_array__VAb_6)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__SizeA_7;
    MR_Integer mercury__version_array__SizeB_8;
    MR_Word mercury__version_array__SizeResult_9;
    MR_Word mercury__version_array__TypeInfo_for_T_16;
    MR_Word mercury__version_array__TypeInfo_for_T_17;

{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAa_5 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__SizeA_7  = N;
}
{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAb_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__SizeB_8  = N;
}
    mercury__version_array__succeeded = (mercury__version_array__SizeA_7 < mercury__version_array__SizeB_8);
    if (mercury__version_array__succeeded)
      mercury__version_array__SizeResult_9 = (MR_Integer) 1;
    else
      {
        mercury__version_array__succeeded = (mercury__version_array__SizeA_7 == mercury__version_array__SizeB_8);
        if (mercury__version_array__succeeded)
          mercury__version_array__SizeResult_9 = (MR_Integer) 0;
        else
          mercury__version_array__SizeResult_9 = (MR_Integer) 2;
      }
    switch (mercury__version_array__SizeResult_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *mercury__version_array__R_4 = mercury__version_array__SizeResult_9;
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__version_array__cmp_version_array_2_5_p_0(mercury__version_array__TypeInfo_for_T_11, (MR_Integer) 0, mercury__version_array__SizeA_7, mercury__version_array__VAa_5, mercury__version_array__VAb_6, mercury__version_array__R_4);
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_3_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_11,
  MR_Integer mercury__version_array__I_4,
  MR_Box mercury__version_array__VAa_5,
  MR_Box mercury__version_array__VAb_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_4 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_8;
            MR_Integer mercury__version_array__Var_9;
            MR_Integer mercury__version_array__Var_10;
            MR_Box mercury__version_array__Var_12;

            {
              mercury__version_array__Var_8 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__VAa_5, mercury__version_array__I_4);
            }
            {
              mercury__version_array__Var_12 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__VAb_6, mercury__version_array__I_4);
            }
            {
              mercury__version_array__succeeded = mercury__builtin__unify_2_p_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__Var_8, mercury__version_array__Var_12);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_10 = (MR_Integer) 1;
                mercury__version_array__Var_9 = (mercury__version_array__I_4 - mercury__version_array__Var_10);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_I_4 = mercury__version_array__Var_9;

                  mercury__version_array__I_4 = mercury__version_array__next_value_of_I_4;
                }
                continue;
              }
          }
        else
          mercury__version_array__succeeded = MR_TRUE;
        return mercury__version_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_6,
  MR_Box mercury__version_array__VAa_3,
  MR_Box mercury__version_array__VAb_4)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__N_5;
    MR_Integer mercury__version_array__Var_7;
    MR_Integer mercury__version_array__Var_9;
    MR_Integer mercury__version_array__Var_12;
    MR_Word mercury__version_array__TypeInfo_for_T_14;
    MR_Word mercury__version_array__TypeInfo_for_T_15;

{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAa_3 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_9  = N;
}
    mercury__version_array__N_5 = (mercury__version_array__Var_9 - (MR_Integer) 1);
{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAb_4 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_12  = N;
}
    mercury__version_array__Var_7 = (mercury__version_array__Var_12 - (MR_Integer) 1);
    mercury__version_array__succeeded = (mercury__version_array__N_5 == mercury__version_array__Var_7);
    if (mercury__version_array__succeeded)
      {
        mercury__version_array__succeeded = mercury__version_array__eq_version_array_2_3_p_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__N_5, mercury__version_array__VAa_3, mercury__version_array__VAb_4);
      }
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__do_all_false_4_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_12,
  MR_Word mercury__version_array__Pred_5,
  MR_Integer mercury__version_array__I_6,
  MR_Integer mercury__version_array__N_7,
  MR_Box mercury__version_array__VA_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_6 < mercury__version_array__N_7);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Elem_9;
            MR_Integer mercury__version_array__Var_10;
            MR_Integer mercury__version_array__Var_11;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box);

            {
              mercury__version_array__Elem_9 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_12, mercury__version_array__VA_8, mercury__version_array__I_6);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_array__Pred_5, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__Pred_5), mercury__version_array__Elem_9);
            }
            mercury__version_array__succeeded = !(mercury__version_array__succeeded);
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_11 = (MR_Integer) 1;
                mercury__version_array__Var_10 = (mercury__version_array__I_6 + mercury__version_array__Var_11);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_I_6 = mercury__version_array__Var_10;

                  mercury__version_array__I_6 = mercury__version_array__next_value_of_I_6;
                }
                continue;
              }
          }
        else
          mercury__version_array__succeeded = MR_TRUE;
        return mercury__version_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_all_true_4_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_12,
  MR_Word mercury__version_array__Pred_5,
  MR_Integer mercury__version_array__I_6,
  MR_Integer mercury__version_array__N_7,
  MR_Box mercury__version_array__VA_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_6 < mercury__version_array__N_7);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Elem_9;
            MR_Integer mercury__version_array__Var_10;
            MR_Integer mercury__version_array__Var_11;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box);

            {
              mercury__version_array__Elem_9 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_12, mercury__version_array__VA_8, mercury__version_array__I_6);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_array__Pred_5, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__Pred_5), mercury__version_array__Elem_9);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_11 = (MR_Integer) 1;
                mercury__version_array__Var_10 = (mercury__version_array__I_6 + mercury__version_array__Var_11);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_I_6 = mercury__version_array__Var_10;

                  mercury__version_array__I_6 = mercury__version_array__next_value_of_I_6;
                }
                continue;
              }
          }
        else
          mercury__version_array__succeeded = MR_TRUE;
        return mercury__version_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_5(
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
  MR_Word mercury__version_array__P_8,
  MR_Box mercury__version_array__VA_9,
  MR_Integer mercury__version_array__I_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_18;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
            MR_Integer mercury__version_array__Var_21;
            MR_Integer mercury__version_array__Var_24;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__Var_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_24 = (MR_Integer) 1;
                mercury__version_array__Var_21 = (mercury__version_array__I_10 - mercury__version_array__Var_24);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_I_10 = mercury__version_array__Var_21;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

                  mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15;
                  mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13;
                  mercury__version_array__I_10 = mercury__version_array__next_value_of_I_10;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_4(
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
  MR_Word mercury__version_array__P_8,
  MR_Box mercury__version_array__VA_9,
  MR_Integer mercury__version_array__I_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_18;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
            MR_Integer mercury__version_array__Var_21;
            MR_Integer mercury__version_array__Var_24;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__Var_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_24 = (MR_Integer) 1;
                mercury__version_array__Var_21 = (mercury__version_array__I_10 - mercury__version_array__Var_24);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_I_10 = mercury__version_array__Var_21;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

                  mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15;
                  mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13;
                  mercury__version_array__I_10 = mercury__version_array__next_value_of_I_10;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_3(
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
  MR_Word mercury__version_array__P_8,
  MR_Box mercury__version_array__VA_9,
  MR_Integer mercury__version_array__I_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_18;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
            MR_Integer mercury__version_array__Var_21;
            MR_Integer mercury__version_array__Var_24;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__Var_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_24 = (MR_Integer) 1;
                mercury__version_array__Var_21 = (mercury__version_array__I_10 - mercury__version_array__Var_24);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_I_10 = mercury__version_array__Var_21;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

                  mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15;
                  mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13;
                  mercury__version_array__I_10 = mercury__version_array__next_value_of_I_10;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldr2_7_p_2(
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
  MR_Word mercury__version_array__P_8,
  MR_Box mercury__version_array__VA_9,
  MR_Integer mercury__version_array__I_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_18;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
            MR_Integer mercury__version_array__Var_21;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__Var_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
            mercury__version_array__Var_21 = (mercury__version_array__I_10 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_I_10 = mercury__version_array__Var_21;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

              mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15;
              mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13;
              mercury__version_array__I_10 = mercury__version_array__next_value_of_I_10;
            }
            continue;
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldr2_7_p_1(
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
  MR_Word mercury__version_array__P_8,
  MR_Box mercury__version_array__VA_9,
  MR_Integer mercury__version_array__I_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_18;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
            MR_Integer mercury__version_array__Var_21;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__Var_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
            mercury__version_array__Var_21 = (mercury__version_array__I_10 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_I_10 = mercury__version_array__Var_21;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

              mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15;
              mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13;
              mercury__version_array__I_10 = mercury__version_array__next_value_of_I_10;
            }
            continue;
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldr2_7_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
  MR_Word mercury__version_array__P_8,
  MR_Box mercury__version_array__VA_9,
  MR_Integer mercury__version_array__I_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_18;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
            MR_Integer mercury__version_array__Var_21;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__Var_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
            mercury__version_array__Var_21 = (mercury__version_array__I_10 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_I_10 = mercury__version_array__Var_21;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

              mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_15;
              mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_13;
              mercury__version_array__I_10 = mercury__version_array__next_value_of_I_10;
            }
            continue;
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_5(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__P_6,
  MR_Box mercury__version_array__VA_7,
  MR_Integer mercury__version_array__I_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_13;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
            MR_Integer mercury__version_array__Var_15;
            MR_Integer mercury__version_array__Var_17;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__Var_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_17 = (MR_Integer) 1;
                mercury__version_array__Var_15 = (mercury__version_array__I_8 - mercury__version_array__Var_17);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_I_8 = mercury__version_array__Var_15;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

                  mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10;
                  mercury__version_array__I_8 = mercury__version_array__next_value_of_I_8;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_4(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__P_6,
  MR_Box mercury__version_array__VA_7,
  MR_Integer mercury__version_array__I_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_13;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
            MR_Integer mercury__version_array__Var_15;
            MR_Integer mercury__version_array__Var_17;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__Var_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_17 = (MR_Integer) 1;
                mercury__version_array__Var_15 = (mercury__version_array__I_8 - mercury__version_array__Var_17);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_I_8 = mercury__version_array__Var_15;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

                  mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10;
                  mercury__version_array__I_8 = mercury__version_array__next_value_of_I_8;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_3(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__P_6,
  MR_Box mercury__version_array__VA_7,
  MR_Integer mercury__version_array__I_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_13;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
            MR_Integer mercury__version_array__Var_15;
            MR_Integer mercury__version_array__Var_17;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__Var_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_17 = (MR_Integer) 1;
                mercury__version_array__Var_15 = (mercury__version_array__I_8 - mercury__version_array__Var_17);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_I_8 = mercury__version_array__Var_15;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

                  mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10;
                  mercury__version_array__I_8 = mercury__version_array__next_value_of_I_8;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_2(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__P_6,
  MR_Box mercury__version_array__VA_7,
  MR_Integer mercury__version_array__I_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_13;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
            MR_Integer mercury__version_array__Var_15;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__Var_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
            mercury__version_array__Var_15 = (mercury__version_array__I_8 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_I_8 = mercury__version_array__Var_15;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

              mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10;
              mercury__version_array__I_8 = mercury__version_array__next_value_of_I_8;
            }
            continue;
          }
        else
          *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_1(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__P_6,
  MR_Box mercury__version_array__VA_7,
  MR_Integer mercury__version_array__I_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_13;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
            MR_Integer mercury__version_array__Var_15;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__Var_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
            mercury__version_array__Var_15 = (mercury__version_array__I_8 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_I_8 = mercury__version_array__Var_15;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

              mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10;
              mercury__version_array__I_8 = mercury__version_array__next_value_of_I_8;
            }
            continue;
          }
        else
          *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__P_6,
  MR_Box mercury__version_array__VA_7,
  MR_Integer mercury__version_array__I_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_13;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
            MR_Integer mercury__version_array__Var_15;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__Var_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
            mercury__version_array__Var_15 = (mercury__version_array__I_8 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_I_8 = mercury__version_array__Var_15;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

              mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_10;
              mercury__version_array__I_8 = mercury__version_array__next_value_of_I_8;
            }
            continue;
          }
        else
          *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
      }
      break;
    }
}

MR_Box MR_CALL 
mercury__version_array__do_foldr_func_4_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_15,
  MR_Word mercury__version_array__TypeInfo_for_T2_16,
  MR_Word mercury__version_array__F_6,
  MR_Box mercury__version_array__VA_7,
  MR_Box mercury__version_array__Acc_8,
  MR_Integer mercury__version_array__Hi_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = ((MR_Integer) 0 <= mercury__version_array__Hi_9);
        MR_Box mercury__version_array__HeadVar__5_5;

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_11;
            MR_Box mercury__version_array__Var_12;
            MR_Integer mercury__version_array__Var_13;
            MR_Box MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box);

            {
              mercury__version_array__Var_12 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_15, mercury__version_array__VA_7, mercury__version_array__Hi_9);
            }
            mercury__version_array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_array__F_6, (MR_Integer) 1)));
            {
              mercury__version_array__Var_11 = mercury__version_array__func_0(((MR_Box) mercury__version_array__F_6), mercury__version_array__Var_12, mercury__version_array__Acc_8);
            }
            mercury__version_array__Var_13 = (mercury__version_array__Hi_9 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Box mercury__version_array__next_value_of_Acc_8 = mercury__version_array__Var_11;
              MR_Integer mercury__version_array__next_value_of_Hi_9 = mercury__version_array__Var_13;

              mercury__version_array__Hi_9 = mercury__version_array__next_value_of_Hi_9;
              mercury__version_array__Acc_8 = mercury__version_array__next_value_of_Acc_8;
            }
            continue;
          }
        else
          mercury__version_array__HeadVar__5_5 = mercury__version_array__Acc_8;
        return mercury__version_array__HeadVar__5_5;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_5(
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
  MR_Word mercury__version_array__P_9,
  MR_Box mercury__version_array__VA_10,
  MR_Integer mercury__version_array__Lo_11,
  MR_Integer mercury__version_array__Hi_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
            MR_Integer mercury__version_array__Var_22;
            MR_Integer mercury__version_array__Var_25;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__Var_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_25 = (MR_Integer) 1;
                mercury__version_array__Var_22 = (mercury__version_array__Lo_11 + mercury__version_array__Var_25);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_Lo_11 = mercury__version_array__Var_22;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

                  mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17;
                  mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15;
                  mercury__version_array__Lo_11 = mercury__version_array__next_value_of_Lo_11;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_4(
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
  MR_Word mercury__version_array__P_9,
  MR_Box mercury__version_array__VA_10,
  MR_Integer mercury__version_array__Lo_11,
  MR_Integer mercury__version_array__Hi_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
            MR_Integer mercury__version_array__Var_22;
            MR_Integer mercury__version_array__Var_25;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__Var_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_25 = (MR_Integer) 1;
                mercury__version_array__Var_22 = (mercury__version_array__Lo_11 + mercury__version_array__Var_25);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_Lo_11 = mercury__version_array__Var_22;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

                  mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17;
                  mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15;
                  mercury__version_array__Lo_11 = mercury__version_array__next_value_of_Lo_11;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_3(
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
  MR_Word mercury__version_array__P_9,
  MR_Box mercury__version_array__VA_10,
  MR_Integer mercury__version_array__Lo_11,
  MR_Integer mercury__version_array__Hi_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
            MR_Integer mercury__version_array__Var_22;
            MR_Integer mercury__version_array__Var_25;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__Var_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_25 = (MR_Integer) 1;
                mercury__version_array__Var_22 = (mercury__version_array__Lo_11 + mercury__version_array__Var_25);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_Lo_11 = mercury__version_array__Var_22;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

                  mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17;
                  mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15;
                  mercury__version_array__Lo_11 = mercury__version_array__next_value_of_Lo_11;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldl2_8_p_2(
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
  MR_Word mercury__version_array__P_9,
  MR_Box mercury__version_array__VA_10,
  MR_Integer mercury__version_array__Lo_11,
  MR_Integer mercury__version_array__Hi_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
            MR_Integer mercury__version_array__Var_22;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__Var_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
            mercury__version_array__Var_22 = (mercury__version_array__Lo_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_Lo_11 = mercury__version_array__Var_22;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

              mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17;
              mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15;
              mercury__version_array__Lo_11 = mercury__version_array__next_value_of_Lo_11;
            }
            continue;
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldl2_8_p_1(
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
  MR_Word mercury__version_array__P_9,
  MR_Box mercury__version_array__VA_10,
  MR_Integer mercury__version_array__Lo_11,
  MR_Integer mercury__version_array__Hi_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
            MR_Integer mercury__version_array__Var_22;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__Var_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
            mercury__version_array__Var_22 = (mercury__version_array__Lo_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_Lo_11 = mercury__version_array__Var_22;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

              mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17;
              mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15;
              mercury__version_array__Lo_11 = mercury__version_array__next_value_of_Lo_11;
            }
            continue;
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldl2_8_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
  MR_Word mercury__version_array__P_9,
  MR_Box mercury__version_array__VA_10,
  MR_Integer mercury__version_array__Lo_11,
  MR_Integer mercury__version_array__Hi_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_19;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
            MR_Integer mercury__version_array__Var_22;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__Var_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
            mercury__version_array__Var_22 = (mercury__version_array__Lo_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_Lo_11 = mercury__version_array__Var_22;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

              mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc2_0_17;
              mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc1_0_15;
              mercury__version_array__Lo_11 = mercury__version_array__next_value_of_Lo_11;
            }
            continue;
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_5(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Integer mercury__version_array__Lo_9,
  MR_Integer mercury__version_array__Hi_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_14;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
            MR_Integer mercury__version_array__Var_16;
            MR_Integer mercury__version_array__Var_18;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__Var_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_18 = (MR_Integer) 1;
                mercury__version_array__Var_16 = (mercury__version_array__Lo_9 + mercury__version_array__Var_18);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_Lo_9 = mercury__version_array__Var_16;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

                  mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12;
                  mercury__version_array__Lo_9 = mercury__version_array__next_value_of_Lo_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_4(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Integer mercury__version_array__Lo_9,
  MR_Integer mercury__version_array__Hi_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_14;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
            MR_Integer mercury__version_array__Var_16;
            MR_Integer mercury__version_array__Var_18;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__Var_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_18 = (MR_Integer) 1;
                mercury__version_array__Var_16 = (mercury__version_array__Lo_9 + mercury__version_array__Var_18);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_Lo_9 = mercury__version_array__Var_16;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

                  mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12;
                  mercury__version_array__Lo_9 = mercury__version_array__next_value_of_Lo_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_3(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Integer mercury__version_array__Lo_9,
  MR_Integer mercury__version_array__Hi_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_14;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
            MR_Integer mercury__version_array__Var_16;
            MR_Integer mercury__version_array__Var_18;
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
            {
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__Var_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
            if (mercury__version_array__succeeded)
              {
                mercury__version_array__Var_18 = (MR_Integer) 1;
                mercury__version_array__Var_16 = (mercury__version_array__Lo_9 + mercury__version_array__Var_18);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_array__next_value_of_Lo_9 = mercury__version_array__Var_16;
                  MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

                  mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12;
                  mercury__version_array__Lo_9 = mercury__version_array__next_value_of_Lo_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
            mercury__version_array__succeeded = MR_TRUE;
          }
        return mercury__version_array__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_2(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Integer mercury__version_array__Lo_9,
  MR_Integer mercury__version_array__Hi_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_14;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
            MR_Integer mercury__version_array__Var_16;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__Var_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
            mercury__version_array__Var_16 = (mercury__version_array__Lo_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_Lo_9 = mercury__version_array__Var_16;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

              mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12;
              mercury__version_array__Lo_9 = mercury__version_array__next_value_of_Lo_9;
            }
            continue;
          }
        else
          *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_1(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Integer mercury__version_array__Lo_9,
  MR_Integer mercury__version_array__Hi_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_14;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
            MR_Integer mercury__version_array__Var_16;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__Var_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
            mercury__version_array__Var_16 = (mercury__version_array__Lo_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_Lo_9 = mercury__version_array__Var_16;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

              mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12;
              mercury__version_array__Lo_9 = mercury__version_array__next_value_of_Lo_9;
            }
            continue;
          }
        else
          *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
      }
      break;
    }
}

void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Integer mercury__version_array__Lo_9,
  MR_Integer mercury__version_array__Hi_10,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_14;
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
            MR_Integer mercury__version_array__Var_16;
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__version_array__Var_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
            {
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__Var_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
            mercury__version_array__Var_16 = (mercury__version_array__Lo_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_Lo_9 = mercury__version_array__Var_16;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

              mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__next_value_of_STATE_VARIABLE_Acc_0_12;
              mercury__version_array__Lo_9 = mercury__version_array__next_value_of_Lo_9;
            }
            continue;
          }
        else
          *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
      }
      break;
    }
}

MR_Box MR_CALL 
mercury__version_array__do_foldl_func_5_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_16,
  MR_Word mercury__version_array__TypeInfo_for_T2_17,
  MR_Word mercury__version_array__F_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__Acc_9,
  MR_Integer mercury__version_array__Lo_10,
  MR_Integer mercury__version_array__Hi_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_10 < mercury__version_array__Hi_11);
        MR_Box mercury__version_array__HeadVar__6_6;

        if (mercury__version_array__succeeded)
          {
            MR_Box mercury__version_array__Var_12;
            MR_Box mercury__version_array__Var_13;
            MR_Integer mercury__version_array__Var_14;
            MR_Box MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box);

            {
              mercury__version_array__Var_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_16, mercury__version_array__VA_8, mercury__version_array__Lo_10);
            }
            mercury__version_array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_array__F_7, (MR_Integer) 1)));
            {
              mercury__version_array__Var_12 = mercury__version_array__func_0(((MR_Box) mercury__version_array__F_7), mercury__version_array__Var_13, mercury__version_array__Acc_9);
            }
            mercury__version_array__Var_14 = (mercury__version_array__Lo_10 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Box mercury__version_array__next_value_of_Acc_9 = mercury__version_array__Var_12;
              MR_Integer mercury__version_array__next_value_of_Lo_10 = mercury__version_array__Var_14;

              mercury__version_array__Lo_10 = mercury__version_array__next_value_of_Lo_10;
              mercury__version_array__Acc_9 = mercury__version_array__next_value_of_Acc_9;
            }
            continue;
          }
        else
          mercury__version_array__HeadVar__6_6 = mercury__version_array__Acc_9;
        return mercury__version_array__HeadVar__6_6;
      }
      break;
    }
}

static void MR_CALL 
mercury__version_array__from_reverse_list_loop_4_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_19,
  MR_Integer mercury__version_array__I_1,
  MR_Word mercury__version_array__HeadVar__2_2,
  MR_Box mercury__version_array__STATE_VARIABLE_VA_0_3,
  MR_Box * mercury__version_array__STATE_VARIABLE_VA_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded;

        if ((mercury__version_array__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__version_array__STATE_VARIABLE_VA_4 = mercury__version_array__STATE_VARIABLE_VA_0_3;
        else
          {
            MR_Box mercury__version_array__X_10 = (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__version_array__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__version_array__STATE_VARIABLE_VA_15_15;
            MR_Integer mercury__version_array__Var_16;

            {
              mercury__version_array__set_4_p_0(mercury__version_array__TypeInfo_for_T_19, mercury__version_array__I_1, mercury__version_array__X_10, mercury__version_array__STATE_VARIABLE_VA_0_3, &mercury__version_array__STATE_VARIABLE_VA_15_15);
            }
            mercury__version_array__Var_16 = (mercury__version_array__I_1 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_I_1 = mercury__version_array__Var_16;
              MR_Word mercury__version_array__next_value_of_HeadVar__2_2 = mercury__version_array__Xs_11;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_VA_0_3 = mercury__version_array__STATE_VARIABLE_VA_15_15;

              mercury__version_array__STATE_VARIABLE_VA_0_3 = mercury__version_array__next_value_of_STATE_VARIABLE_VA_0_3;
              mercury__version_array__HeadVar__2_2 = mercury__version_array__next_value_of_HeadVar__2_2;
              mercury__version_array__I_1 = mercury__version_array__next_value_of_I_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__version_array__version_array_loop_4_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_19,
  MR_Integer mercury__version_array__I_1,
  MR_Word mercury__version_array__HeadVar__2_2,
  MR_Box mercury__version_array__STATE_VARIABLE_VA_0_3,
  MR_Box * mercury__version_array__STATE_VARIABLE_VA_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_array__succeeded;

        if ((mercury__version_array__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__version_array__STATE_VARIABLE_VA_4 = mercury__version_array__STATE_VARIABLE_VA_0_3;
        else
          {
            MR_Box mercury__version_array__X_10 = (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__version_array__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__version_array__STATE_VARIABLE_VA_15_15;
            MR_Integer mercury__version_array__Var_16;

            {
              mercury__version_array__set_4_p_0(mercury__version_array__TypeInfo_for_T_19, mercury__version_array__I_1, mercury__version_array__X_10, mercury__version_array__STATE_VARIABLE_VA_0_3, &mercury__version_array__STATE_VARIABLE_VA_15_15);
            }
            mercury__version_array__Var_16 = (mercury__version_array__I_1 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_array__next_value_of_I_1 = mercury__version_array__Var_16;
              MR_Word mercury__version_array__next_value_of_HeadVar__2_2 = mercury__version_array__Xs_11;
              MR_Box mercury__version_array__next_value_of_STATE_VARIABLE_VA_0_3 = mercury__version_array__STATE_VARIABLE_VA_15_15;

              mercury__version_array__STATE_VARIABLE_VA_0_3 = mercury__version_array__next_value_of_STATE_VARIABLE_VA_0_3;
              mercury__version_array__HeadVar__2_2 = mercury__version_array__next_value_of_HeadVar__2_2;
              mercury__version_array__I_1 = mercury__version_array__next_value_of_I_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
mercury__version_array__version_array_to_doc_1_f_0_1(
  MR_Box mercury__version_array__closure_arg)
{
  {
    MR_Box mercury__version_array__wrapper_arg_1;
    MR_Box mercury__version_array__closure = mercury__version_array__closure_arg;
    MR_Word mercury__version_array__conv0_LambdaHeadVar__1_24;

    {
      mercury__version_array__conv0_LambdaHeadVar__1_24 = mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2072__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 4))), ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 5))));
    }
    mercury__version_array__wrapper_arg_1 = ((MR_Box) (mercury__version_array__conv0_LambdaHeadVar__1_24));
    return mercury__version_array__wrapper_arg_1;
  }
}

MR_Word MR_CALL 
mercury__version_array__version_array_to_doc_1_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_14,
  MR_Box mercury__version_array__A_3)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Word mercury__version_array__HeadVar__2_2;
    MR_Word mercury__version_array__Var_4;
    MR_Word mercury__version_array__Var_5 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[1]);
    MR_Word mercury__version_array__Var_7;
    MR_Word mercury__version_array__Var_8;
    MR_Word mercury__version_array__Var_10;
    MR_Word mercury__version_array__Var_11;
    MR_Word mercury__version_array__Var_13;
    MR_Word mercury__version_array__V_6_65;
    MR_Word mercury__version_array__V_7_66;
    MR_Word mercury__version_array__V_9_67;
    MR_Word mercury__version_array__V_8_68;
    MR_Word mercury__version_array__V_10_69;
    MR_Word mercury__version_array__V_11_70;
    MR_Word mercury__version_array__V_12_71;
    MR_Word mercury__version_array__V_14_72;
    MR_Word mercury__version_array__V_13_73;
    MR_Integer mercury__version_array__Var_17;
    MR_Integer mercury__version_array__Var_41;
    MR_Word mercury__version_array__TypeInfo_for_T_74;

{
#define MR_PROC_LABEL mercury__version_array__version_array_to_doc_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__A_3 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_41  = N;
}
    mercury__version_array__Var_17 = (mercury__version_array__Var_41 - (MR_Integer) 1);
    mercury__version_array__succeeded = ((MR_Integer) 0 > mercury__version_array__Var_17);
    if (mercury__version_array__succeeded)
      {
        mercury__version_array__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
      }
    else
      {
        MR_Word mercury__version_array__Var_19;
        MR_Word mercury__version_array__Var_20;
        MR_Word mercury__version_array__Var_21;
        MR_Box mercury__version_array__Var_22;
        MR_Word mercury__version_array__Var_23;
        MR_Word mercury__version_array__Var_24;
        MR_Word mercury__version_array__Var_32;
        MR_Word mercury__version_array__Var_33;
        MR_Word mercury__version_array__Var_34;
        MR_Word mercury__version_array__Var_38;
        MR_Word mercury__version_array__V_4_44;
        MR_Integer mercury__version_array__Var_39;
        MR_Integer mercury__version_array__Var_48;
        MR_Word mercury__version_array__TypeInfo_for_T_75;

        {
          mercury__version_array__Var_22 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_14, mercury__version_array__A_3, (MR_Integer) 0);
        }
        {
          mercury__univ__type_to_univ_2_p_1(mercury__version_array__TypeInfo_for_T_14, mercury__version_array__Var_22, &mercury__version_array__V_4_44);
        }
        {
          mercury__version_array__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mercury__version_array__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), mercury__version_array__Var_21, 1) = ((MR_Box) (mercury__version_array__V_4_44));
        }
        {
          mercury__version_array__Var_20 = mercury__pretty_printer__format_arg_1_f_0(mercury__version_array__Var_21);
        }
{
#define MR_PROC_LABEL mercury__version_array__version_array_to_doc_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__A_3 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_48  = N;
}
        mercury__version_array__Var_39 = (mercury__version_array__Var_48 - (MR_Integer) 1);
        mercury__version_array__succeeded = ((MR_Integer) 0 == mercury__version_array__Var_39);
        if (mercury__version_array__succeeded)
          {
            mercury__version_array__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
          }
        else
          {
            MR_Word mercury__version_array__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[1]);
            MR_Word mercury__version_array__V_4_51 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[6]);
            MR_Word mercury__version_array__V_5_52 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[2]);
            MR_Word mercury__version_array__V_7_53 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[5]);
            MR_Word mercury__version_array__V_6_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__version_array__V_8_55 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[3]);
            MR_Word mercury__version_array__V_9_56 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[4]);
            MR_Word mercury__version_array__V_10_57 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[3]);
            MR_Word mercury__version_array__V_12_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__version_array__V_11_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

            mercury__version_array__Var_24 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[4]);
          }
        {
          mercury__version_array__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_34, 0) = ((MR_Box) (&mercury__version_array_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_34, 1) = ((MR_Box) (mercury__version_array__version_array_to_doc_1_f_0_1));
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_34, 3) = ((MR_Box) (mercury__version_array__TypeInfo_for_T_14));
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_34, 4) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), mercury__version_array__Var_34, 5) = ((MR_Box) (mercury__version_array__A_3));
        }
        {
          mercury__version_array__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mercury__version_array__Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), mercury__version_array__Var_33, 1) = ((MR_Box) (mercury__version_array__Var_34));
        }
        mercury__version_array__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__version_array__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_32, 0) = ((MR_Box) (mercury__version_array__Var_33));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_32, 1) = ((MR_Box) (mercury__version_array__Var_38));
        }
        {
          mercury__version_array__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_23, 0) = ((MR_Box) (mercury__version_array__Var_24));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_23, 1) = ((MR_Box) (mercury__version_array__Var_32));
        }
        {
          mercury__version_array__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_19, 0) = ((MR_Box) (mercury__version_array__Var_20));
          MR_hl_field(MR_mktag(1), mercury__version_array__Var_19, 1) = ((MR_Box) (mercury__version_array__Var_23));
        }
        {
          mercury__version_array__Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), mercury__version_array__Var_8, 0) = ((MR_Box) (mercury__version_array__Var_19));
        }
      }
    mercury__version_array__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[5]);
    mercury__version_array__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__version_array__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[7]);
    {
      mercury__version_array__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__version_array__Var_7, 0) = ((MR_Box) (mercury__version_array__Var_8));
      MR_hl_field(MR_mktag(1), mercury__version_array__Var_7, 1) = ((MR_Box) (mercury__version_array__Var_10));
    }
    {
      mercury__version_array__Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__version_array__Var_4, 0) = ((MR_Box) (mercury__version_array__Var_5));
      MR_hl_field(MR_mktag(1), mercury__version_array__Var_4, 1) = ((MR_Box) (mercury__version_array__Var_7));
    }
    mercury__version_array__V_8_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[6]);
    mercury__version_array__V_7_66 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[8]);
    {
      mercury__version_array__V_10_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__version_array__V_10_69, 0) = ((MR_Box) (mercury__version_array__Var_4));
    }
    mercury__version_array__V_13_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
    mercury__version_array__V_12_71 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[9]);
    mercury__version_array__V_14_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__version_array__V_11_70 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[10]);
    {
      mercury__version_array__V_9_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__version_array__V_9_67, 0) = ((MR_Box) (mercury__version_array__V_10_69));
      MR_hl_field(MR_mktag(1), mercury__version_array__V_9_67, 1) = ((MR_Box) (mercury__version_array__V_11_70));
    }
    {
      mercury__version_array__V_6_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__version_array__V_6_65, 0) = ((MR_Box) (mercury__version_array__V_7_66));
      MR_hl_field(MR_mktag(1), mercury__version_array__V_6_65, 1) = ((MR_Box) (mercury__version_array__V_9_67));
    }
    {
      mercury__version_array__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__version_array__HeadVar__2_2, 0) = ((MR_Box) (mercury__version_array__V_6_65));
    }
    return mercury__version_array__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__version_array__unsafe_rewind_2_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_4,
  MR_Box mercury__version_array__VA_3,
  MR_Box * mercury__version_array__HeadVar__2_2)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Word mercury__version_array__TypeInfo_for_T_5;

{
#define MR_PROC_LABEL mercury__version_array__unsafe_rewind_2_p_0

	struct ML_va * VA0;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA0);
		{

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, *mercury__version_array__HeadVar__2_2 );
}
  }
}

MR_Box MR_CALL 
mercury__version_array__unsafe_rewind_1_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_3,
  MR_Box mercury__version_array__HeadVar__1_1)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__2_2;
    MR_Word mercury__version_array__TypeInfo_for_T_4;

{
#define MR_PROC_LABEL mercury__version_array__unsafe_rewind_1_f_0

	struct ML_va * VA0;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__HeadVar__1_1 , VA0);
		{

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__2_2 );
}
    return mercury__version_array__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__version_array__all_false_2_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_7,
  MR_Word mercury__version_array__Pred_3,
  MR_Box mercury__version_array__VA_4)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_6;
    MR_Word mercury__version_array__TypeInfo_for_T_8;

{
#define MR_PROC_LABEL mercury__version_array__all_false_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_4 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_6  = N;
}
    {
      mercury__version_array__succeeded = mercury__version_array__do_all_false_4_p_0(mercury__version_array__TypeInfo_for_T_7, mercury__version_array__Pred_3, (MR_Integer) 0, mercury__version_array__Var_6, mercury__version_array__VA_4);
    }
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__all_true_2_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_7,
  MR_Word mercury__version_array__Pred_3,
  MR_Box mercury__version_array__VA_4)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_6;
    MR_Word mercury__version_array__TypeInfo_for_T_8;

{
#define MR_PROC_LABEL mercury__version_array__all_true_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_4 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_6  = N;
}
    {
      mercury__version_array__succeeded = mercury__version_array__do_all_true_4_p_0(mercury__version_array__TypeInfo_for_T_7, mercury__version_array__Pred_3, (MR_Integer) 0, mercury__version_array__Var_6, mercury__version_array__VA_4);
    }
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_5(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_15;
    MR_Integer mercury__version_array__Var_22;
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_22  = N;
}
    mercury__version_array__Var_15 = (mercury__version_array__Var_22 - (MR_Integer) 1);
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldr2_7_p_5(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__Var_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_4(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_15;
    MR_Integer mercury__version_array__Var_22;
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_22  = N;
}
    mercury__version_array__Var_15 = (mercury__version_array__Var_22 - (MR_Integer) 1);
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldr2_7_p_4(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__Var_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_3(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_15;
    MR_Integer mercury__version_array__Var_22;
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_22  = N;
}
    mercury__version_array__Var_15 = (mercury__version_array__Var_22 - (MR_Integer) 1);
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldr2_7_p_3(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__Var_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
    return mercury__version_array__succeeded;
  }
}

void MR_CALL 
mercury__version_array__foldr2_6_p_2(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_15;
    MR_Integer mercury__version_array__Var_22;
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_22  = N;
}
    mercury__version_array__Var_15 = (mercury__version_array__Var_22 - (MR_Integer) 1);
    {
      mercury__version_array__do_foldr2_7_p_2(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__Var_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
  }
}

void MR_CALL 
mercury__version_array__foldr2_6_p_1(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_15;
    MR_Integer mercury__version_array__Var_22;
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_22  = N;
}
    mercury__version_array__Var_15 = (mercury__version_array__Var_22 - (MR_Integer) 1);
    {
      mercury__version_array__do_foldr2_7_p_1(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__Var_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
  }
}

void MR_CALL 
mercury__version_array__foldr2_6_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_15;
    MR_Integer mercury__version_array__Var_22;
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_22  = N;
}
    mercury__version_array__Var_15 = (mercury__version_array__Var_22 - (MR_Integer) 1);
    {
      mercury__version_array__do_foldr2_7_p_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__Var_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr_4_p_5(
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_10;
    MR_Integer mercury__version_array__Var_15;
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_15  = N;
}
    mercury__version_array__Var_10 = (mercury__version_array__Var_15 - (MR_Integer) 1);
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldr_pred_5_p_5(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__Var_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr_4_p_4(
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_10;
    MR_Integer mercury__version_array__Var_15;
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_15  = N;
}
    mercury__version_array__Var_10 = (mercury__version_array__Var_15 - (MR_Integer) 1);
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldr_pred_5_p_4(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__Var_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr_4_p_3(
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_10;
    MR_Integer mercury__version_array__Var_15;
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_15  = N;
}
    mercury__version_array__Var_10 = (mercury__version_array__Var_15 - (MR_Integer) 1);
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldr_pred_5_p_3(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__Var_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
    return mercury__version_array__succeeded;
  }
}

void MR_CALL 
mercury__version_array__foldr_4_p_2(
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_10;
    MR_Integer mercury__version_array__Var_15;
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_15  = N;
}
    mercury__version_array__Var_10 = (mercury__version_array__Var_15 - (MR_Integer) 1);
    {
      mercury__version_array__do_foldr_pred_5_p_2(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__Var_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
  }
}

void MR_CALL 
mercury__version_array__foldr_4_p_1(
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_10;
    MR_Integer mercury__version_array__Var_15;
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_15  = N;
}
    mercury__version_array__Var_10 = (mercury__version_array__Var_15 - (MR_Integer) 1);
    {
      mercury__version_array__do_foldr_pred_5_p_1(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__Var_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
  }
}

void MR_CALL 
mercury__version_array__foldr_4_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_10;
    MR_Integer mercury__version_array__Var_15;
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_15  = N;
}
    mercury__version_array__Var_10 = (mercury__version_array__Var_15 - (MR_Integer) 1);
    {
      mercury__version_array__do_foldr_pred_5_p_0(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__Var_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
  }
}

MR_Box MR_CALL 
mercury__version_array__foldr_3_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_9,
  MR_Word mercury__version_array__TypeInfo_for_T2_10,
  MR_Word mercury__version_array__F_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__Acc_7)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__4_4;
    MR_Integer mercury__version_array__Var_8;
    MR_Integer mercury__version_array__Var_12;
    MR_Word mercury__version_array__TypeInfo_for_T1_14;

{
#define MR_PROC_LABEL mercury__version_array__foldr_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_12  = N;
}
    mercury__version_array__Var_8 = (mercury__version_array__Var_12 - (MR_Integer) 1);
    {
      mercury__version_array__HeadVar__4_4 = mercury__version_array__do_foldr_func_4_f_0(mercury__version_array__TypeInfo_for_T1_9, mercury__version_array__TypeInfo_for_T2_10, mercury__version_array__F_5, mercury__version_array__VA_6, mercury__version_array__Acc_7, mercury__version_array__Var_8);
    }
    return mercury__version_array__HeadVar__4_4;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_5(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_16;
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_16  = N;
}
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldl2_8_p_5(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__Var_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_4(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_16;
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_16  = N;
}
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldl2_8_p_4(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__Var_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_3(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_16;
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_16  = N;
}
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldl2_8_p_3(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__Var_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
    return mercury__version_array__succeeded;
  }
}

void MR_CALL 
mercury__version_array__foldl2_6_p_2(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_16;
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_16  = N;
}
    {
      mercury__version_array__do_foldl2_8_p_2(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__Var_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
  }
}

void MR_CALL 
mercury__version_array__foldl2_6_p_1(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_16;
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_16  = N;
}
    {
      mercury__version_array__do_foldl2_8_p_1(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__Var_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
  }
}

void MR_CALL 
mercury__version_array__foldl2_6_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
  MR_Word mercury__version_array__P_7,
  MR_Box mercury__version_array__VA_8,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_16;
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_16  = N;
}
    {
      mercury__version_array__do_foldl2_8_p_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__Var_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl_4_p_5(
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_11;
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_11  = N;
}
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldl_pred_6_p_5(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__Var_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl_4_p_4(
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_11;
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_11  = N;
}
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldl_pred_6_p_4(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__Var_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
    return mercury__version_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl_4_p_3(
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_11;
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_11  = N;
}
    {
      mercury__version_array__succeeded = mercury__version_array__do_foldl_pred_6_p_3(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__Var_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
    return mercury__version_array__succeeded;
  }
}

void MR_CALL 
mercury__version_array__foldl_4_p_2(
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_11;
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_11  = N;
}
    {
      mercury__version_array__do_foldl_pred_6_p_2(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__Var_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
  }
}

void MR_CALL 
mercury__version_array__foldl_4_p_1(
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_11;
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_11  = N;
}
    {
      mercury__version_array__do_foldl_pred_6_p_1(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__Var_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
  }
}

void MR_CALL 
mercury__version_array__foldl_4_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
  MR_Word mercury__version_array__P_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_11;
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_11  = N;
}
    {
      mercury__version_array__do_foldl_pred_6_p_0(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__Var_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
  }
}

MR_Box MR_CALL 
mercury__version_array__foldl_3_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T1_10,
  MR_Word mercury__version_array__TypeInfo_for_T2_11,
  MR_Word mercury__version_array__F_5,
  MR_Box mercury__version_array__VA_6,
  MR_Box mercury__version_array__Acc_7)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__4_4;
    MR_Integer mercury__version_array__Var_9;
    MR_Word mercury__version_array__TypeInfo_for_T1_12;

{
#define MR_PROC_LABEL mercury__version_array__foldl_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_9  = N;
}
    {
      mercury__version_array__HeadVar__4_4 = mercury__version_array__do_foldl_func_5_f_0(mercury__version_array__TypeInfo_for_T1_10, mercury__version_array__TypeInfo_for_T2_11, mercury__version_array__F_5, mercury__version_array__VA_6, mercury__version_array__Acc_7, (MR_Integer) 0, mercury__version_array__Var_9);
    }
    return mercury__version_array__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__version_array__to_list_1_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_4,
  MR_Box mercury__version_array__VA_3)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Word mercury__version_array__HeadVar__2_2;

    {
      mercury__version_array__HeadVar__2_2 = mercury__version_array__list_1_f_0(mercury__version_array__TypeInfo_for_T_4, mercury__version_array__VA_3);
    }
    return mercury__version_array__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__version_array__list_1_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_6,
  MR_Box mercury__version_array__VA_3)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Word mercury__version_array__HeadVar__2_2;
    MR_Word mercury__version_array__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__version_array__Var_15;
    MR_Integer mercury__version_array__Var_18;
    MR_Word mercury__version_array__TypeInfo_for_T_20;

{
#define MR_PROC_LABEL mercury__version_array__list_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_18  = N;
}
    mercury__version_array__Var_15 = (mercury__version_array__Var_18 - (MR_Integer) 1);
    {
      mercury__version_array__HeadVar__2_2 = mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__VA_3, mercury__version_array__Var_5, mercury__version_array__Var_15);
    }
    return mercury__version_array__HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__version_array__copy_1_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_8,
  MR_Box mercury__version_array__VA_3)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__2_2;
    MR_Integer mercury__version_array__Var_4;
    MR_Word mercury__version_array__TypeInfo_for_T_9;

{
#define MR_PROC_LABEL mercury__version_array__copy_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_4  = N;
}
    mercury__version_array__succeeded = (mercury__version_array__Var_4 == (MR_Integer) 0);
    if (mercury__version_array__succeeded)
      mercury__version_array__HeadVar__2_2 = mercury__version_array__VA_3;
    else
      {
        MR_Integer mercury__version_array__Var_5;
        MR_Box mercury__version_array__Var_6;
        MR_Word mercury__version_array__TypeInfo_for_T_10;
        MR_Word mercury__version_array__TypeInfo_for_T_11;

{
#define MR_PROC_LABEL mercury__version_array__copy_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_5  = N;
}
        {
          mercury__version_array__Var_6 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_8, mercury__version_array__VA_3, (MR_Integer) 0);
        }
{
#define MR_PROC_LABEL mercury__version_array__copy_1_f_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA0);
	N =  mercury__version_array__Var_5 ;
	X = (MR_Word) mercury__version_array__Var_6 ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__2_2 );
}
      }
    return mercury__version_array__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__version_array__resize_4_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_8,
  MR_Integer mercury__version_array__N_5,
  MR_Box mercury__version_array__X_6,
  MR_Box mercury__version_array__VA_7,
  MR_Box * mercury__version_array__HeadVar__4_4)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Word mercury__version_array__TypeInfo_for_T_9;

{
#define MR_PROC_LABEL mercury__version_array__resize_4_p_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_7 , VA0);
	N =  mercury__version_array__N_5 ;
	X = (MR_Word) mercury__version_array__X_6 ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, *mercury__version_array__HeadVar__4_4 );
}
  }
}

MR_Box MR_CALL 
mercury__version_array__resize_3_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_5,
  MR_Box mercury__version_array__HeadVar__1_1,
  MR_Integer mercury__version_array__HeadVar__2_2,
  MR_Box mercury__version_array__HeadVar__3_3)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__4_4;
    MR_Word mercury__version_array__TypeInfo_for_T_6;

{
#define MR_PROC_LABEL mercury__version_array__resize_3_f_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__HeadVar__1_1 , VA0);
	N =  mercury__version_array__HeadVar__2_2 ;
	X = (MR_Word) mercury__version_array__HeadVar__3_3 ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__4_4 );
}
    return mercury__version_array__HeadVar__4_4;
  }
}

MR_bool MR_CALL 
mercury__version_array__is_empty_1_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_4,
  MR_Box mercury__version_array__VA_2)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__Var_3;
    MR_Word mercury__version_array__TypeInfo_for_T_5;

{
#define MR_PROC_LABEL mercury__version_array__is_empty_1_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_2 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_3  = N;
}
    mercury__version_array__succeeded = (mercury__version_array__Var_3 == (MR_Integer) 0);
    return mercury__version_array__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__version_array__max_1_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_6,
  MR_Box mercury__version_array__VA_3)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__HeadVar__2_2;
    MR_Integer mercury__version_array__Var_4;
    MR_Word mercury__version_array__TypeInfo_for_T_7;

{
#define MR_PROC_LABEL mercury__version_array__max_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_4  = N;
}
    mercury__version_array__HeadVar__2_2 = (mercury__version_array__Var_4 - (MR_Integer) 1);
    return mercury__version_array__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__version_array__size_1_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_3,
  MR_Box mercury__version_array__HeadVar__1_1)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Integer mercury__version_array__HeadVar__2_2;
    MR_Word mercury__version_array__TypeInfo_for_T_4;

{
#define MR_PROC_LABEL mercury__version_array__size_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__HeadVar__1_1 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__HeadVar__2_2  = N;
}
    return mercury__version_array__HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__version_array__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_9,
  MR_Integer mercury__version_array__I_6,
  MR_Box mercury__version_array__VA0_5,
  MR_Box mercury__version_array__X_7)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__VA_8;

    {
      mercury__version_array__set_4_p_0(mercury__version_array__TypeInfo_for_T_9, mercury__version_array__I_6, mercury__version_array__X_7, mercury__version_array__VA0_5, &mercury__version_array__VA_8);
    }
    return mercury__version_array__VA_8;
  }
}

void MR_CALL 
mercury__version_array__set_4_p_0(
  MR_Word mercury__version_array__TypeInfo_for_T_14,
  MR_Integer mercury__version_array__I_5,
  MR_Box mercury__version_array__X_6,
  MR_Box mercury__version_array__STATE_VARIABLE_VA_0_8,
  MR_Box * mercury__version_array__STATE_VARIABLE_VA_9)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__STATE_VARIABLE_VA_10_10;
    MR_Word mercury__version_array__TypeInfo_for_T_18;

{
#define MR_PROC_LABEL mercury__version_array__set_4_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I =  mercury__version_array__I_5 ;
	X = (MR_Word) mercury__version_array__X_6 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__STATE_VARIABLE_VA_0_8 , VA0);
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__STATE_VARIABLE_VA_10_10 );
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__version_array__succeeded)
      *mercury__version_array__STATE_VARIABLE_VA_9 = mercury__version_array__STATE_VARIABLE_VA_10_10;
    else
      {
        MR_Integer mercury__version_array__Var_11;
        MR_Integer mercury__version_array__Var_16;
        MR_Word mercury__version_array__TypeInfo_for_T_19;

{
#define MR_PROC_LABEL mercury__version_array__set_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__STATE_VARIABLE_VA_0_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_16  = N;
}
        mercury__version_array__Var_11 = (mercury__version_array__Var_16 - (MR_Integer) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(mercury__version_array__I_5, mercury__version_array__Var_11, (MR_String) "version_array.set");
          return;
        }
      }
  }
}

MR_Box MR_CALL 
mercury__version_array__elem_2_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_6,
  MR_Integer mercury__version_array__I_5,
  MR_Box mercury__version_array__VA_4)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__3_3;

    {
      mercury__version_array__HeadVar__3_3 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__VA_4, mercury__version_array__I_5);
    }
    return mercury__version_array__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__version_array__lookup_2_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_10,
  MR_Box mercury__version_array__VA_4,
  MR_Integer mercury__version_array__I_5)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__X_6;
    MR_Box mercury__version_array__X0_7;
    MR_Word mercury__version_array__TypeInfo_for_T_14;

{
#define MR_PROC_LABEL mercury__version_array__lookup_2_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_4 , VA);
	I =  mercury__version_array__I_5 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__version_array__X0_7  = (MR_Box) X;
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__version_array__succeeded)
      mercury__version_array__X_6 = mercury__version_array__X0_7;
    else
      {
        MR_Integer mercury__version_array__Var_8;
        MR_Integer mercury__version_array__Var_12;
        MR_Word mercury__version_array__TypeInfo_for_T_15;

{
#define MR_PROC_LABEL mercury__version_array__lookup_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_4 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Var_12  = N;
}
        mercury__version_array__Var_8 = (mercury__version_array__Var_12 - (MR_Integer) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(mercury__version_array__I_5, mercury__version_array__Var_8, (MR_String) "version_array.lookup");
        }
      }
    return mercury__version_array__X_6;
  }
}

MR_Box MR_CALL 
mercury__version_array__from_reverse_list_1_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_12,
  MR_Word mercury__version_array__HeadVar__1_1)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__2_2;

    if ((mercury__version_array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__version_array__TypeInfo_for_T_18;

{
#define MR_PROC_LABEL mercury__version_array__from_reverse_list_1_f_0

	struct ML_va * VA;

		{

    MR_Word array;

    MR_incr_hp_type_msg(VA, struct ML_va,
        MR_ALLOC_ID, "version_array.version_array/1");
    MR_incr_hp_msg(array, 1,
        MR_ALLOC_ID, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = 0;

#ifdef MR_THREAD_SAFE
    MR_incr_hp_type_msg(VA->lock, MercuryLock, MR_ALLOC_ID, NULL);
    pthread_mutex_init(VA->lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__2_2 );
}
      }
    else
      {
        MR_Box mercury__version_array__X_3 = (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__version_array__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__version_array__NumElems_6;
        MR_Box mercury__version_array__VA0_7;
        MR_Integer mercury__version_array__Var_9;
        MR_Integer mercury__version_array__Var_10;

        {
          mercury__list__length_acc_3_p_0(mercury__version_array__TypeInfo_for_T_12, mercury__version_array__Xs_4, (MR_Integer) 0, &mercury__version_array__Var_9);
        }
        mercury__version_array__NumElems_6 = ((MR_Integer) 1 + mercury__version_array__Var_9);
        {
          mercury__version_array__VA0_7 = mercury__version_array__init_2_f_0(mercury__version_array__TypeInfo_for_T_12, mercury__version_array__NumElems_6, mercury__version_array__X_3);
        }
        mercury__version_array__Var_10 = (mercury__version_array__NumElems_6 - (MR_Integer) 2);
        {
          mercury__version_array__from_reverse_list_loop_4_p_0(mercury__version_array__TypeInfo_for_T_12, mercury__version_array__Var_10, mercury__version_array__Xs_4, mercury__version_array__VA0_7, &mercury__version_array__HeadVar__2_2);
        }
      }
    return mercury__version_array__HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__version_array__from_list_1_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_4,
  MR_Word mercury__version_array__Xs_3)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__2_2;

    {
      mercury__version_array__HeadVar__2_2 = mercury__version_array__version_array_1_f_0(mercury__version_array__TypeInfo_for_T_4, mercury__version_array__Xs_3);
    }
    return mercury__version_array__HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__version_array__version_array_1_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_11,
  MR_Word mercury__version_array__HeadVar__1_1)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__2_2;

    if ((mercury__version_array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__version_array__TypeInfo_for_T_17;

{
#define MR_PROC_LABEL mercury__version_array__version_array_1_f_0

	struct ML_va * VA;

		{

    MR_Word array;

    MR_incr_hp_type_msg(VA, struct ML_va,
        MR_ALLOC_ID, "version_array.version_array/1");
    MR_incr_hp_msg(array, 1,
        MR_ALLOC_ID, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = 0;

#ifdef MR_THREAD_SAFE
    MR_incr_hp_type_msg(VA->lock, MercuryLock, MR_ALLOC_ID, NULL);
    pthread_mutex_init(VA->lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__2_2 );
}
      }
    else
      {
        MR_Box mercury__version_array__X_3 = (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__version_array__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mercury__version_array__VA0_6;
        MR_Integer mercury__version_array__Var_7;
        MR_Integer mercury__version_array__Var_9;

        {
          mercury__list__length_acc_3_p_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__Xs_4, (MR_Integer) 0, &mercury__version_array__Var_9);
        }
        mercury__version_array__Var_7 = ((MR_Integer) 1 + mercury__version_array__Var_9);
        {
          mercury__version_array__VA0_6 = mercury__version_array__init_2_f_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__Var_7, mercury__version_array__X_3);
        }
        {
          mercury__version_array__version_array_loop_4_p_0(mercury__version_array__TypeInfo_for_T_11, (MR_Integer) 1, mercury__version_array__Xs_4, mercury__version_array__VA0_6, &mercury__version_array__HeadVar__2_2);
        }
      }
    return mercury__version_array__HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__version_array__unsafe_new_2_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_6,
  MR_Integer mercury__version_array__N_4,
  MR_Box mercury__version_array__X_5)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__3_3;

    {
      mercury__version_array__HeadVar__3_3 = mercury__version_array__unsafe_init_2_f_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__N_4, mercury__version_array__X_5);
    }
    return mercury__version_array__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__version_array__unsafe_init_2_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_4,
  MR_Integer mercury__version_array__HeadVar__1_1,
  MR_Box mercury__version_array__HeadVar__2_2)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__3_3;
    MR_Word mercury__version_array__TypeInfo_for_T_5;

{
#define MR_PROC_LABEL mercury__version_array__unsafe_init_2_f_0

	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	N =  mercury__version_array__HeadVar__1_1 ;
	X = (MR_Word) mercury__version_array__HeadVar__2_2 ;
		{

    MR_Integer  i;
    MR_Word     array;

    MR_incr_hp_type_msg(VA, struct ML_va,
        MR_ALLOC_ID, "version_array.version_array/1");
    MR_incr_hp_msg(array,  N + 1,
        MR_ALLOC_ID, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }

#ifdef MR_THREAD_SAFE
    VA->lock             = NULL;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__3_3 );
}
    return mercury__version_array__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__version_array__unsafe_empty_0_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_2)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__1_1;
    MR_Word mercury__version_array__TypeInfo_for_T_3;

{
#define MR_PROC_LABEL mercury__version_array__unsafe_empty_0_f_0

	struct ML_va * VA;

		{

    MR_Word array;

    MR_incr_hp_type_msg(VA, struct ML_va,
        MR_ALLOC_ID, "version_array.version_array/1");
    MR_incr_hp_msg(array, 1,
        MR_ALLOC_ID, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = 0;

#ifdef MR_THREAD_SAFE
    VA->lock             = NULL;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__1_1 );
}
    return mercury__version_array__HeadVar__1_1;
  }
}

MR_Box MR_CALL 
mercury__version_array__init_2_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_4,
  MR_Integer mercury__version_array__HeadVar__1_1,
  MR_Box mercury__version_array__HeadVar__2_2)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__3_3;
    MR_Word mercury__version_array__TypeInfo_for_T_5;

{
#define MR_PROC_LABEL mercury__version_array__init_2_f_0

	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	N =  mercury__version_array__HeadVar__1_1 ;
	X = (MR_Word) mercury__version_array__HeadVar__2_2 ;
		{

    MR_Integer  i;
    MR_Word     array;

    MR_incr_hp_type_msg(VA, struct ML_va,
        MR_ALLOC_ID, "version_array.version_array/1");
    MR_incr_hp_msg(array, N + 1,
        MR_ALLOC_ID, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }

#ifdef MR_THREAD_SAFE
    MR_incr_hp_type_msg(VA->lock, MercuryLock, MR_ALLOC_ID, NULL);
    pthread_mutex_init(VA->lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__3_3 );
}
    return mercury__version_array__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__version_array__empty_0_f_0(
  MR_Word mercury__version_array__TypeInfo_for_T_2)
{
  {
    MR_bool mercury__version_array__succeeded;
    MR_Box mercury__version_array__HeadVar__1_1;
    MR_Word mercury__version_array__TypeInfo_for_T_3;

{
#define MR_PROC_LABEL mercury__version_array__empty_0_f_0

	struct ML_va * VA;

		{

    MR_Word array;

    MR_incr_hp_type_msg(VA, struct ML_va,
        MR_ALLOC_ID, "version_array.version_array/1");
    MR_incr_hp_msg(array, 1,
        MR_ALLOC_ID, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = 0;

#ifdef MR_THREAD_SAFE
    MR_incr_hp_type_msg(VA->lock, MercuryLock, MR_ALLOC_ID, NULL);
    pthread_mutex_init(VA->lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__1_1 );
}
    return mercury__version_array__HeadVar__1_1;
  }
}

void mercury__version_array__init(void)
{
}

void mercury__version_array__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__version_array__version_array__type_ctor_info_index_out_of_bounds_0);
	MR_register_type_ctor_info(&mercury__version_array__version_array__type_ctor_info_version_array_1);
}

void mercury__version_array__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__version_array__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module version_array. */
