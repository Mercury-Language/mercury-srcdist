/*
** Automatically generated from `version_array.m'
** by the Mercury compiler,
** version rotd-2023-05-30
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module version_array.
// :- implementation.

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
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"

#line 979 "version_array.m"


#include "mercury_types.h"
#include "mercury_bitmap.h"

// Returns the number of items in a version array.
static MR_Integer
ML_va_size(ML_const_va_ptr);

// If I is in range then ML_va_get(VA, I, &X) sets X to the I'th item
// in VA (counting from zero) and returns MR_TRUE. Otherwise it
// returns MR_FALSE.
static MR_bool
ML_va_get(ML_const_va_ptr VA, MR_Integer I, MR_Word *Xptr);

// If I is in range then ML_va_set(VA0, I, X, VA) sets VA to be VA0
// updated with the I'th item as X (counting from zero) and
// returns MR_TRUE. Otherwise it returns MR_FALSE.
static MR_bool
ML_va_set(ML_va_ptr, MR_Integer, MR_Word, ML_va_ptr *,
    MR_AllocSiteInfoPtr alloc_id);

// Create a copy of VA0 as a new array.
static ML_va_ptr
ML_va_flat_copy(ML_const_va_ptr VA0, MR_AllocSiteInfoPtr alloc_id);

// Update the array VA using the override values in VA0
// i.e. recreate the state of the version array as captured in VA0.
static void
ML_va_rewind_into(ML_va_ptr VA, ML_const_va_ptr VA0,
    MR_AllocSiteInfoPtr alloc_id);

// `Rewinds' a version array, invalidating all extant successors
// including the argument.
static ML_va_ptr
ML_va_rewind(ML_va_ptr VA, MR_AllocSiteInfoPtr alloc_id);

// Resize a version array.
static ML_va_ptr
ML_va_resize(ML_va_ptr, MR_Integer, MR_Word, MR_AllocSiteInfoPtr);





static const MR_Integer mercury__version_array__version_array__functor_number_map_index_out_of_bounds_0[1];

static const MR_NotagFunctorDesc mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0;

static void MR_CALL 
mercury__version_array__cmp_version_array_2_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Integer I_6,
  MR_Integer Size_7,
  MR_Box VAa_8,
  MR_Box VAb_9,
  MR_Word * R_10);

static MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Integer I_4,
  MR_Box VAa_5,
  MR_Box VAb_6);

static void MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_p_0(
  MR_Word TypeInfo_for_T1_18,
  MR_Box VA_7,
  MR_Integer Hi_8,
  MR_Word STATE_VARIABLE_Acc_0_10,
  MR_Word * STATE_VARIABLE_Acc_11);

static void MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_114_101_118_101_114_115_101_95_108_105_115_116_95_105_110_105_116_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_Integer I_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_VA_0_3,
  MR_Box * STATE_VARIABLE_VA_4);

static void MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_105_110_105_116_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_Integer I_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_VA_0_3,
  MR_Box * STATE_VARIABLE_VA_4);

static MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__version_array____Compare____version_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__version_array_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__version_array_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__version_array_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__version_array_scalar_common_4[1][1];




static /* final */ const MR_Box mercury__version_array_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_array_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_array_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_array_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_array_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_array_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_array_scalar_common_4[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
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
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#line 1022 "version_array.m"


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

    // Cast away the 'const'.
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
        // Shortcut.
        return;
    }

    // Rewind elements from the oldest to the newest, undoing their changes.
    // So that we undo elements in the correct order we use a bitmap to
    // ensure that we never update an array slot twice.
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
        // Shortcut.
        return VA;
    }

    // Rewind elements from the oldest to the newest, undoing their changes.
    // So that we undo elements in the correct order we use a bitmap to
    // ensure that we never update an array slot twice.
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

    // This element is no-longer an update element.
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




static const MR_Integer mercury__version_array__version_array__functor_number_map_index_out_of_bounds_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0 = {
  (MR_String) "index_out_of_bounds",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__version_array__version_array__type_ctor_info_index_out_of_bounds_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__version_array____Unify____index_out_of_bounds_0_0_10001)),
  ((MR_Box) (mercury__version_array____Compare____index_out_of_bounds_0_0_10001)),
  (MR_String) "version_array",
  (MR_String) "index_out_of_bounds",
  { &mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0 },
  { &mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__version_array__version_array__functor_number_map_index_out_of_bounds_0,

};

const MR_TypeCtorInfo_Struct mercury__version_array__version_array__type_ctor_info_version_array_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__version_array____Unify____version_array_1_0_10001)),
  ((MR_Box) (mercury__version_array____Compare____version_array_1_0_10001)),
  (MR_String) "version_array",
  (MR_String) "version_array",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__version_array____Compare____version_array_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_4 == CastY_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    mercury__version_array__cmp_version_array_3_p_0(TypeInfo_for_T_6, HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_3 == CastY_4);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    succeeded = mercury__version_array__eq_version_array_2_p_0(TypeInfo_for_T_5, HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);
    MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__version_array____Compare____index_out_of_bounds_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_9  = Res;
}
    succeeded = (Var_9 < (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__set_if_in_range_4_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__version_array__set_if_in_range_4_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = HeadVar__1_1 ;
	X = (MR_Word) HeadVar__2_2 ;
	VA0 = (struct ML_va *)HeadVar__3_3 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*HeadVar__4_4  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__get_if_in_range_3_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__version_array__get_if_in_range_3_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)HeadVar__1_1 ;
	I = HeadVar__2_2 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*HeadVar__3_3  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__version_array__cmp_version_array_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * R_4,
  MR_Box VAa_5,
  MR_Box VAb_6)
{
  MR_bool succeeded;
  MR_Integer SizeA_7;
  MR_Integer SizeB_8;
  MR_Word SizeResult_9;

{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VAa_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	SizeA_7  = N;
}
{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VAb_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	SizeB_8  = N;
}
  succeeded = (SizeA_7 < SizeB_8);
  if (succeeded)
    SizeResult_9 = (MR_Integer) 1;
  else
  {
    succeeded = (SizeA_7 == SizeB_8);
    if (succeeded)
      SizeResult_9 = (MR_Integer) 0;
    else
      SizeResult_9 = (MR_Integer) 2;
  }
  switch (SizeResult_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *R_4 = SizeResult_9;
      break;
    case (MR_Integer) 0:
      mercury__version_array__cmp_version_array_2_5_p_0(TypeInfo_for_T_11, (MR_Integer) 0, SizeA_7, VAa_5, VAb_6, R_4);
      break;
  }
}

static void MR_CALL 
mercury__version_array__cmp_version_array_2_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Integer I_6,
  MR_Integer Size_7,
  MR_Box VAa_8,
  MR_Box VAb_9,
  MR_Word * R_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 >= Size_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *R_10 = (MR_Integer) 0;
    else
    {
      MR_Box ElemA_11;
      MR_Box ElemB_12;
      MR_Word R0_13;
      MR_Box X0_17;
      MR_Box X0_22;

{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_2_5_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)VAa_8 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	X0_17  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        ElemA_11 = X0_17;
      else
      {
        MR_Integer Var_18;
        MR_Integer Var_20;

{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_2_5_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VAa_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_20  = N;
}
        Var_18 = (MR_Integer) ((MR_Unsigned) Var_20 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_18, (MR_String) "version_array.lookup");
          return;
        }
      }
{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_2_5_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)VAb_9 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	X0_22  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        ElemB_12 = X0_22;
      else
      {
        MR_Integer Var_23;
        MR_Integer Var_25;

{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_2_5_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VAb_9 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_25  = N;
}
        Var_23 = (MR_Integer) ((MR_Unsigned) Var_25 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_23, (MR_String) "version_array.lookup");
          return;
        }
      }
      mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, &R0_13, ElemA_11, ElemB_12);
      switch (R0_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *R_10 = R0_13;
          break;
        case (MR_Integer) 0:
          {
            MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) I_6 + (MR_Unsigned) 1);
            MR_Integer next_value_of_I_6 = Var_14;

            // direct tailcall eliminated
            ;
            I_6 = next_value_of_I_6;
            continue;
          }
          break;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box VAa_3,
  MR_Box VAb_4)
{
  MR_bool succeeded;
  MR_Integer N_5;
  MR_Integer Var_7;
  MR_Integer Var_8;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VAa_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_8  = N;
}
  N_5 = (MR_Integer) ((MR_Unsigned) Var_8 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VAb_4 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_10  = N;
}
  Var_7 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) 1);
  succeeded = (N_5 == Var_7);
  if (succeeded)
    succeeded = mercury__version_array__eq_version_array_2_3_p_0(TypeInfo_for_T_6, N_5, VAa_3, VAb_4);
  return succeeded;
}

static MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Integer I_4,
  MR_Box VAa_5,
  MR_Box VAb_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_4 >= (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_7;
      MR_Integer Var_9;
      MR_Integer Var_10;
      MR_Box Var_12;
      MR_Box X0_13;
      MR_Box X0_18;
      MR_Integer next_value_of_I_4;

{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_3_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)VAa_5 ;
	I = I_4 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	X0_13  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Elem_7 = X0_13;
      else
      {
        MR_Integer Var_14;
        MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VAa_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_16  = N;
}
        Var_14 = (MR_Integer) ((MR_Unsigned) Var_16 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_4, Var_14, (MR_String) "version_array.lookup");
      }
{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_3_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)VAb_6 ;
	I = I_4 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	X0_18  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_12 = X0_18;
      else
      {
        MR_Integer Var_19;
        MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VAb_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_21  = N;
}
        Var_19 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_4, Var_19, (MR_String) "version_array.lookup");
      }
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, Elem_7, Var_12);
      if (succeeded)
      {
        Var_10 = (MR_Integer) 1;
        Var_9 = (MR_Integer) ((MR_Unsigned) I_4 - (MR_Unsigned) Var_10);
        // direct tailcall eliminated
        ;
        next_value_of_I_4 = Var_9;
        I_4 = next_value_of_I_4;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__version_array__version_array_to_doc_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box A_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__pretty_printer__version_array_to_doc_1_f_0(TypeInfo_for_T_4, A_3);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__version_array__unsafe_rewind_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box VA_3,
  MR_Box * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__version_array__unsafe_rewind_2_p_0

	struct ML_va * VA0;
	struct ML_va * VA;

	VA0 = (struct ML_va *)VA_3 ;
		{

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) VA;
}
}

MR_Box MR_CALL 
mercury__version_array__unsafe_rewind_1_f_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1)
{
  MR_Box HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__version_array__unsafe_rewind_1_f_0

	struct ML_va * VA0;
	struct ML_va * VA;

	VA0 = (struct ML_va *)HeadVar__1_1 ;
		{

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = (MR_Box) VA;
}
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__version_array__all_false_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Pred_3,
  MR_Box VA_4)
{
  MR_bool succeeded;
  MR_Integer Var_6;

{
#define MR_PROC_LABEL mercury__version_array__all_false_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_4 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_6  = N;
}
  succeeded = mercury__version_array__do_all_false_4_p_0(TypeInfo_for_T_7, Pred_3, (MR_Integer) 0, Var_6, VA_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_all_false_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Pred_5,
  MR_Integer I_6,
  MR_Integer N_7,
  MR_Box VA_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 < N_7);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_9;
      MR_Integer Var_10;
      MR_Integer Var_11;
      MR_Box X0_13;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Integer next_value_of_I_6;

{
#define MR_PROC_LABEL mercury__version_array__do_all_false_4_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)VA_8 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	X0_13  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Elem_9 = X0_13;
      else
      {
        MR_Integer Var_14;
        MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__version_array__do_all_false_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_16  = N;
}
        Var_14 = (MR_Integer) ((MR_Unsigned) Var_16 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_14, (MR_String) "version_array.lookup");
      }
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Pred_5, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (Pred_5)), Elem_9);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_11 = (MR_Integer) 1;
        Var_10 = (MR_Integer) ((MR_Unsigned) I_6 + (MR_Unsigned) Var_11);
        // direct tailcall eliminated
        ;
        next_value_of_I_6 = Var_10;
        I_6 = next_value_of_I_6;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__all_true_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Pred_3,
  MR_Box VA_4)
{
  MR_bool succeeded;
  MR_Integer Var_6;

{
#define MR_PROC_LABEL mercury__version_array__all_true_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_4 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_6  = N;
}
  succeeded = mercury__version_array__do_all_true_4_p_0(TypeInfo_for_T_7, Pred_3, (MR_Integer) 0, Var_6, VA_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_all_true_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Pred_5,
  MR_Integer I_6,
  MR_Integer N_7,
  MR_Box VA_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 < N_7);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_9;
      MR_Integer Var_10;
      MR_Integer Var_11;
      MR_Box X0_13;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Integer next_value_of_I_6;

{
#define MR_PROC_LABEL mercury__version_array__do_all_true_4_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)VA_8 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	X0_13  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Elem_9 = X0_13;
      else
      {
        MR_Integer Var_14;
        MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__version_array__do_all_true_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_16  = N;
}
        Var_14 = (MR_Integer) ((MR_Unsigned) Var_16 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_14, (MR_String) "version_array.lookup");
      }
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Pred_5, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (Pred_5)), Elem_9);
      if (succeeded)
      {
        Var_11 = (MR_Integer) 1;
        Var_10 = (MR_Integer) ((MR_Unsigned) I_6 + (MR_Unsigned) Var_11);
        // direct tailcall eliminated
        ;
        next_value_of_I_6 = Var_10;
        I_6 = next_value_of_I_6;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_5(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_15;
  MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_5

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_19  = N;
}
  Var_15 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 1);
  succeeded = mercury__version_array__do_foldr2_7_p_5(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, VA_8, Var_15, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_5(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word P_8,
  MR_Box VA_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc1_0_13,
  MR_Box * STATE_VARIABLE_Acc1_14,
  MR_Box STATE_VARIABLE_Acc2_0_15,
  MR_Box * STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 >= (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_18;
      MR_Box STATE_VARIABLE_Acc1_19_19;
      MR_Box STATE_VARIABLE_Acc2_20_20;
      MR_Integer Var_21;
      MR_Integer Var_24;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_15;

      Var_18 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_25, VA_9, I_10);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_8)), Var_18, STATE_VARIABLE_Acc1_0_13, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_15, &STATE_VARIABLE_Acc2_20_20);
      if (succeeded)
      {
        Var_24 = (MR_Integer) 1;
        Var_21 = (MR_Integer) ((MR_Unsigned) I_10 - (MR_Unsigned) Var_24);
        // direct tailcall eliminated
        ;
        next_value_of_I_10 = Var_21;
        next_value_of_STATE_VARIABLE_Acc1_0_13 = STATE_VARIABLE_Acc1_19_19;
        next_value_of_STATE_VARIABLE_Acc2_0_15 = STATE_VARIABLE_Acc2_20_20;
        I_10 = next_value_of_I_10;
        STATE_VARIABLE_Acc1_0_13 = next_value_of_STATE_VARIABLE_Acc1_0_13;
        STATE_VARIABLE_Acc2_0_15 = next_value_of_STATE_VARIABLE_Acc2_0_15;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc2_16 = STATE_VARIABLE_Acc2_0_15;
      *STATE_VARIABLE_Acc1_14 = STATE_VARIABLE_Acc1_0_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_4(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_15;
  MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_4

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_19  = N;
}
  Var_15 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 1);
  succeeded = mercury__version_array__do_foldr2_7_p_4(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, VA_8, Var_15, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_4(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word P_8,
  MR_Box VA_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc1_0_13,
  MR_Box * STATE_VARIABLE_Acc1_14,
  MR_Box STATE_VARIABLE_Acc2_0_15,
  MR_Box * STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 >= (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_18;
      MR_Box STATE_VARIABLE_Acc1_19_19;
      MR_Box STATE_VARIABLE_Acc2_20_20;
      MR_Integer Var_21;
      MR_Integer Var_24;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_15;

      Var_18 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_25, VA_9, I_10);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_8)), Var_18, STATE_VARIABLE_Acc1_0_13, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_15, &STATE_VARIABLE_Acc2_20_20);
      if (succeeded)
      {
        Var_24 = (MR_Integer) 1;
        Var_21 = (MR_Integer) ((MR_Unsigned) I_10 - (MR_Unsigned) Var_24);
        // direct tailcall eliminated
        ;
        next_value_of_I_10 = Var_21;
        next_value_of_STATE_VARIABLE_Acc1_0_13 = STATE_VARIABLE_Acc1_19_19;
        next_value_of_STATE_VARIABLE_Acc2_0_15 = STATE_VARIABLE_Acc2_20_20;
        I_10 = next_value_of_I_10;
        STATE_VARIABLE_Acc1_0_13 = next_value_of_STATE_VARIABLE_Acc1_0_13;
        STATE_VARIABLE_Acc2_0_15 = next_value_of_STATE_VARIABLE_Acc2_0_15;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc2_16 = STATE_VARIABLE_Acc2_0_15;
      *STATE_VARIABLE_Acc1_14 = STATE_VARIABLE_Acc1_0_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_3(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_15;
  MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_3

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_19  = N;
}
  Var_15 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 1);
  succeeded = mercury__version_array__do_foldr2_7_p_3(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, VA_8, Var_15, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_3(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word P_8,
  MR_Box VA_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc1_0_13,
  MR_Box * STATE_VARIABLE_Acc1_14,
  MR_Box STATE_VARIABLE_Acc2_0_15,
  MR_Box * STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 >= (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_18;
      MR_Box STATE_VARIABLE_Acc1_19_19;
      MR_Box STATE_VARIABLE_Acc2_20_20;
      MR_Integer Var_21;
      MR_Integer Var_24;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_15;

      Var_18 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_25, VA_9, I_10);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_8)), Var_18, STATE_VARIABLE_Acc1_0_13, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_15, &STATE_VARIABLE_Acc2_20_20);
      if (succeeded)
      {
        Var_24 = (MR_Integer) 1;
        Var_21 = (MR_Integer) ((MR_Unsigned) I_10 - (MR_Unsigned) Var_24);
        // direct tailcall eliminated
        ;
        next_value_of_I_10 = Var_21;
        next_value_of_STATE_VARIABLE_Acc1_0_13 = STATE_VARIABLE_Acc1_19_19;
        next_value_of_STATE_VARIABLE_Acc2_0_15 = STATE_VARIABLE_Acc2_20_20;
        I_10 = next_value_of_I_10;
        STATE_VARIABLE_Acc1_0_13 = next_value_of_STATE_VARIABLE_Acc1_0_13;
        STATE_VARIABLE_Acc2_0_15 = next_value_of_STATE_VARIABLE_Acc2_0_15;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc2_16 = STATE_VARIABLE_Acc2_0_15;
      *STATE_VARIABLE_Acc1_14 = STATE_VARIABLE_Acc1_0_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__version_array__foldr2_6_p_2(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_15;
  MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_2

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_19  = N;
}
  Var_15 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 1);
  mercury__version_array__do_foldr2_7_p_2(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, VA_8, Var_15, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__version_array__do_foldr2_7_p_2(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word P_8,
  MR_Box VA_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc1_0_13,
  MR_Box * STATE_VARIABLE_Acc1_14,
  MR_Box STATE_VARIABLE_Acc2_0_15,
  MR_Box * STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_18;
      MR_Box STATE_VARIABLE_Acc1_19_19;
      MR_Box STATE_VARIABLE_Acc2_20_20;
      MR_Integer Var_21;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_15;

      Var_18 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_25, VA_9, I_10);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, (MR_Integer) 1))));
      func_0(((MR_Box) (P_8)), Var_18, STATE_VARIABLE_Acc1_0_13, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_15, &STATE_VARIABLE_Acc2_20_20);
      Var_21 = (MR_Integer) ((MR_Unsigned) I_10 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = Var_21;
      next_value_of_STATE_VARIABLE_Acc1_0_13 = STATE_VARIABLE_Acc1_19_19;
      next_value_of_STATE_VARIABLE_Acc2_0_15 = STATE_VARIABLE_Acc2_20_20;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc1_0_13 = next_value_of_STATE_VARIABLE_Acc1_0_13;
      STATE_VARIABLE_Acc2_0_15 = next_value_of_STATE_VARIABLE_Acc2_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc2_16 = STATE_VARIABLE_Acc2_0_15;
      *STATE_VARIABLE_Acc1_14 = STATE_VARIABLE_Acc1_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__version_array__foldr2_6_p_1(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_15;
  MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_1

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_19  = N;
}
  Var_15 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 1);
  mercury__version_array__do_foldr2_7_p_1(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, VA_8, Var_15, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__version_array__do_foldr2_7_p_1(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word P_8,
  MR_Box VA_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc1_0_13,
  MR_Box * STATE_VARIABLE_Acc1_14,
  MR_Box STATE_VARIABLE_Acc2_0_15,
  MR_Box * STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_18;
      MR_Box STATE_VARIABLE_Acc1_19_19;
      MR_Box STATE_VARIABLE_Acc2_20_20;
      MR_Integer Var_21;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_15;

      Var_18 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_25, VA_9, I_10);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, (MR_Integer) 1))));
      func_0(((MR_Box) (P_8)), Var_18, STATE_VARIABLE_Acc1_0_13, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_15, &STATE_VARIABLE_Acc2_20_20);
      Var_21 = (MR_Integer) ((MR_Unsigned) I_10 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = Var_21;
      next_value_of_STATE_VARIABLE_Acc1_0_13 = STATE_VARIABLE_Acc1_19_19;
      next_value_of_STATE_VARIABLE_Acc2_0_15 = STATE_VARIABLE_Acc2_20_20;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc1_0_13 = next_value_of_STATE_VARIABLE_Acc1_0_13;
      STATE_VARIABLE_Acc2_0_15 = next_value_of_STATE_VARIABLE_Acc2_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc2_16 = STATE_VARIABLE_Acc2_0_15;
      *STATE_VARIABLE_Acc1_14 = STATE_VARIABLE_Acc1_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__version_array__foldr2_6_p_0(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_15;
  MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_19  = N;
}
  Var_15 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 1);
  mercury__version_array__do_foldr2_7_p_0(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, VA_8, Var_15, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__version_array__do_foldr2_7_p_0(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word P_8,
  MR_Box VA_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc1_0_13,
  MR_Box * STATE_VARIABLE_Acc1_14,
  MR_Box STATE_VARIABLE_Acc2_0_15,
  MR_Box * STATE_VARIABLE_Acc2_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_18;
      MR_Box STATE_VARIABLE_Acc1_19_19;
      MR_Box STATE_VARIABLE_Acc2_20_20;
      MR_Integer Var_21;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_15;

      Var_18 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_25, VA_9, I_10);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, (MR_Integer) 1))));
      func_0(((MR_Box) (P_8)), Var_18, STATE_VARIABLE_Acc1_0_13, &STATE_VARIABLE_Acc1_19_19, STATE_VARIABLE_Acc2_0_15, &STATE_VARIABLE_Acc2_20_20);
      Var_21 = (MR_Integer) ((MR_Unsigned) I_10 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = Var_21;
      next_value_of_STATE_VARIABLE_Acc1_0_13 = STATE_VARIABLE_Acc1_19_19;
      next_value_of_STATE_VARIABLE_Acc2_0_15 = STATE_VARIABLE_Acc2_20_20;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc1_0_13 = next_value_of_STATE_VARIABLE_Acc1_0_13;
      STATE_VARIABLE_Acc2_0_15 = next_value_of_STATE_VARIABLE_Acc2_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc2_16 = STATE_VARIABLE_Acc2_0_15;
      *STATE_VARIABLE_Acc1_14 = STATE_VARIABLE_Acc1_0_13;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr_4_p_5(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_10;
  MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_13  = N;
}
  Var_10 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) 1);
  succeeded = mercury__version_array__do_foldr_pred_5_p_5(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, VA_6, Var_10, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_5(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word P_6,
  MR_Box VA_7,
  MR_Integer I_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_8 >= (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_13;
      MR_Box STATE_VARIABLE_Acc_14_14;
      MR_Integer Var_15;
      MR_Integer Var_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_18, VA_7, I_8);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_6)), Var_13, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_14_14);
      if (succeeded)
      {
        Var_17 = (MR_Integer) 1;
        Var_15 = (MR_Integer) ((MR_Unsigned) I_8 - (MR_Unsigned) Var_17);
        // direct tailcall eliminated
        ;
        next_value_of_I_8 = Var_15;
        next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_14_14;
        I_8 = next_value_of_I_8;
        STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr_4_p_4(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_10;
  MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_13  = N;
}
  Var_10 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) 1);
  succeeded = mercury__version_array__do_foldr_pred_5_p_4(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, VA_6, Var_10, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_4(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word P_6,
  MR_Box VA_7,
  MR_Integer I_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_8 >= (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_13;
      MR_Box STATE_VARIABLE_Acc_14_14;
      MR_Integer Var_15;
      MR_Integer Var_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_18, VA_7, I_8);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_6)), Var_13, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_14_14);
      if (succeeded)
      {
        Var_17 = (MR_Integer) 1;
        Var_15 = (MR_Integer) ((MR_Unsigned) I_8 - (MR_Unsigned) Var_17);
        // direct tailcall eliminated
        ;
        next_value_of_I_8 = Var_15;
        next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_14_14;
        I_8 = next_value_of_I_8;
        STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldr_4_p_3(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_10;
  MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_13  = N;
}
  Var_10 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) 1);
  succeeded = mercury__version_array__do_foldr_pred_5_p_3(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, VA_6, Var_10, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_3(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word P_6,
  MR_Box VA_7,
  MR_Integer I_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_8 >= (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_13;
      MR_Box STATE_VARIABLE_Acc_14_14;
      MR_Integer Var_15;
      MR_Integer Var_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_18, VA_7, I_8);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_6)), Var_13, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_14_14);
      if (succeeded)
      {
        Var_17 = (MR_Integer) 1;
        Var_15 = (MR_Integer) ((MR_Unsigned) I_8 - (MR_Unsigned) Var_17);
        // direct tailcall eliminated
        ;
        next_value_of_I_8 = Var_15;
        next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_14_14;
        I_8 = next_value_of_I_8;
        STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__version_array__foldr_4_p_2(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_10;
  MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_13  = N;
}
  Var_10 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) 1);
  mercury__version_array__do_foldr_pred_5_p_2(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, VA_6, Var_10, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_2(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word P_6,
  MR_Box VA_7,
  MR_Integer I_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_8 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_13;
      MR_Box STATE_VARIABLE_Acc_14_14;
      MR_Integer Var_15;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_18, VA_7, I_8);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, (MR_Integer) 1))));
      func_0(((MR_Box) (P_6)), Var_13, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_14_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) I_8 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_8 = Var_15;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_14_14;
      I_8 = next_value_of_I_8;
      STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
    break;
  }
}

void MR_CALL 
mercury__version_array__foldr_4_p_1(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_10;
  MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_13  = N;
}
  Var_10 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) 1);
  mercury__version_array__do_foldr_pred_5_p_1(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, VA_6, Var_10, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_1(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word P_6,
  MR_Box VA_7,
  MR_Integer I_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_8 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_13;
      MR_Box STATE_VARIABLE_Acc_14_14;
      MR_Integer Var_15;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_18, VA_7, I_8);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, (MR_Integer) 1))));
      func_0(((MR_Box) (P_6)), Var_13, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_14_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) I_8 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_8 = Var_15;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_14_14;
      I_8 = next_value_of_I_8;
      STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
    break;
  }
}

void MR_CALL 
mercury__version_array__foldr_4_p_0(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_10;
  MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_13  = N;
}
  Var_10 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) 1);
  mercury__version_array__do_foldr_pred_5_p_0(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, VA_6, Var_10, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_0(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word P_6,
  MR_Box VA_7,
  MR_Integer I_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_8 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_13;
      MR_Box STATE_VARIABLE_Acc_14_14;
      MR_Integer Var_15;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_18, VA_7, I_8);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, (MR_Integer) 1))));
      func_0(((MR_Box) (P_6)), Var_13, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_14_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) I_8 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_8 = Var_15;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_14_14;
      I_8 = next_value_of_I_8;
      STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
    break;
  }
}

MR_Box MR_CALL 
mercury__version_array__foldr_3_f_0(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word F_5,
  MR_Box VA_6,
  MR_Box Acc0_7)
{
  MR_Box Acc_8;
  MR_Integer Var_9;
  MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__version_array__foldr_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_12  = N;
}
  Var_9 = (MR_Integer) ((MR_Unsigned) Var_12 - (MR_Unsigned) 1);
  mercury__version_array__do_foldr_func_5_p_0(TypeInfo_for_T1_10, TypeInfo_for_T2_11, F_5, VA_6, Var_9, Acc0_7, &Acc_8);
  return Acc_8;
}

void MR_CALL 
mercury__version_array__do_foldr_func_5_p_0(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word F_6,
  MR_Box VA_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_Integer) 0 <= Hi_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_13_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Integer next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_10;

      Var_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_18, VA_7, Hi_8);
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, F_6, (MR_Integer) 1))));
      STATE_VARIABLE_Acc_13_13 = func_0(((MR_Box) (F_6)), Var_14, STATE_VARIABLE_Acc_0_10);
      Var_15 = (MR_Integer) ((MR_Unsigned) Hi_8 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Hi_8 = Var_15;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_13_13;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_5(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_5

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_16  = N;
}
  succeeded = mercury__version_array__do_foldl2_8_p_5(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, VA_8, (MR_Integer) 0, Var_16, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_5(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Box VA_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 < Hi_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      MR_Integer Var_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

      Var_19 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_26, VA_10, Lo_11);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_9, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      if (succeeded)
      {
        Var_25 = (MR_Integer) 1;
        Var_22 = (MR_Integer) ((MR_Unsigned) Lo_11 + (MR_Unsigned) Var_25);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_11 = Var_22;
        next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
        next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
        Lo_11 = next_value_of_Lo_11;
        STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
        STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_4(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_4

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_16  = N;
}
  succeeded = mercury__version_array__do_foldl2_8_p_4(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, VA_8, (MR_Integer) 0, Var_16, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_4(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Box VA_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 < Hi_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      MR_Integer Var_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

      Var_19 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_26, VA_10, Lo_11);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_9, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      if (succeeded)
      {
        Var_25 = (MR_Integer) 1;
        Var_22 = (MR_Integer) ((MR_Unsigned) Lo_11 + (MR_Unsigned) Var_25);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_11 = Var_22;
        next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
        next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
        Lo_11 = next_value_of_Lo_11;
        STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
        STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_3(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_3

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_16  = N;
}
  succeeded = mercury__version_array__do_foldl2_8_p_3(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, VA_8, (MR_Integer) 0, Var_16, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_3(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Box VA_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 < Hi_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      MR_Integer Var_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

      Var_19 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_26, VA_10, Lo_11);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_9, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      if (succeeded)
      {
        Var_25 = (MR_Integer) 1;
        Var_22 = (MR_Integer) ((MR_Unsigned) Lo_11 + (MR_Unsigned) Var_25);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_11 = Var_22;
        next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
        next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
        Lo_11 = next_value_of_Lo_11;
        STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
        STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__version_array__foldl2_6_p_2(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_2

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_16  = N;
}
  mercury__version_array__do_foldl2_8_p_2(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, VA_8, (MR_Integer) 0, Var_16, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__version_array__do_foldl2_8_p_2(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Box VA_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 < Hi_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

      Var_19 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_26, VA_10, Lo_11);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) Lo_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_11 = Var_22;
      next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
      next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
      Lo_11 = next_value_of_Lo_11;
      STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
      STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
    }
    break;
  }
}

void MR_CALL 
mercury__version_array__foldl2_6_p_1(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_1

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_16  = N;
}
  mercury__version_array__do_foldl2_8_p_1(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, VA_8, (MR_Integer) 0, Var_16, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__version_array__do_foldl2_8_p_1(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Box VA_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 < Hi_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

      Var_19 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_26, VA_10, Lo_11);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) Lo_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_11 = Var_22;
      next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
      next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
      Lo_11 = next_value_of_Lo_11;
      STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
      STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
    }
    break;
  }
}

void MR_CALL 
mercury__version_array__foldl2_6_p_0(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_16  = N;
}
  mercury__version_array__do_foldl2_8_p_0(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, VA_8, (MR_Integer) 0, Var_16, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__version_array__do_foldl2_8_p_0(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Box VA_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 < Hi_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

      Var_19 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_26, VA_10, Lo_11);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) Lo_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_11 = Var_22;
      next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
      next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
      Lo_11 = next_value_of_Lo_11;
      STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
      STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl_4_p_5(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_11  = N;
}
  succeeded = mercury__version_array__do_foldl_pred_6_p_5(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, VA_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_5(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 < Hi_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

      Var_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_19, VA_8, Lo_9);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_7, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 1;
        Var_16 = (MR_Integer) ((MR_Unsigned) Lo_9 + (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_9 = Var_16;
        next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
        Lo_9 = next_value_of_Lo_9;
        STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl_4_p_4(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_11  = N;
}
  succeeded = mercury__version_array__do_foldl_pred_6_p_4(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, VA_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_4(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 < Hi_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

      Var_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_19, VA_8, Lo_9);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_7, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 1;
        Var_16 = (MR_Integer) ((MR_Unsigned) Lo_9 + (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_9 = Var_16;
        next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
        Lo_9 = next_value_of_Lo_9;
        STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_array__foldl_4_p_3(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_11  = N;
}
  succeeded = mercury__version_array__do_foldl_pred_6_p_3(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, VA_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_3(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 < Hi_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

      Var_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_19, VA_8, Lo_9);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_7, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 1;
        Var_16 = (MR_Integer) ((MR_Unsigned) Lo_9 + (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_Lo_9 = Var_16;
        next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
        Lo_9 = next_value_of_Lo_9;
        STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__version_array__foldl_4_p_2(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_11  = N;
}
  mercury__version_array__do_foldl_pred_6_p_2(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, VA_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_2(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 < Hi_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

      Var_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_19, VA_8, Lo_9);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_7, (MR_Integer) 1))));
      func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) Lo_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    break;
  }
}

void MR_CALL 
mercury__version_array__foldl_4_p_1(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_11  = N;
}
  mercury__version_array__do_foldl_pred_6_p_1(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, VA_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_1(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 < Hi_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

      Var_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_19, VA_8, Lo_9);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_7, (MR_Integer) 1))));
      func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) Lo_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    break;
  }
}

void MR_CALL 
mercury__version_array__foldl_4_p_0(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Box VA_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_11  = N;
}
  mercury__version_array__do_foldl_pred_6_p_0(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, VA_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_0(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Box VA_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 < Hi_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

      Var_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_19, VA_8, Lo_9);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_7, (MR_Integer) 1))));
      func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) Lo_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    break;
  }
}

MR_Box MR_CALL 
mercury__version_array__foldl_3_f_0(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word F_5,
  MR_Box VA_6,
  MR_Box Acc0_7)
{
  MR_Box Acc_8;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__version_array__foldl_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_6 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_10  = N;
}
  mercury__version_array__do_foldl_func_6_p_0(TypeInfo_for_T1_11, TypeInfo_for_T2_12, F_5, VA_6, (MR_Integer) 0, Var_10, Acc0_7, &Acc_8);
  return Acc_8;
}

void MR_CALL 
mercury__version_array__do_foldl_func_6_p_0(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word F_7,
  MR_Box VA_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 < Hi_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_14_14;
      MR_Box Var_15;
      MR_Integer Var_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

      Var_15 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_19, VA_8, Lo_9);
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, F_7, (MR_Integer) 1))));
      STATE_VARIABLE_Acc_14_14 = func_0(((MR_Box) (F_7)), Var_15, STATE_VARIABLE_Acc_0_12);
      Var_16 = (MR_Integer) ((MR_Unsigned) Lo_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_14_14;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    break;
  }
}

MR_Word MR_CALL 
mercury__version_array__to_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box VA_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__version_array__list_1_f_0(TypeInfo_for_T_4, VA_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__version_array__list_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box VA_3)
{
  MR_Word HeadVar__2_2;
  MR_Integer Var_9;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__version_array__list_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_11  = N;
}
  Var_9 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
  mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_p_0(TypeInfo_for_T_6, VA_3, Var_9, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__2_2);
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_p_0(
  MR_Word TypeInfo_for_T1_18,
  MR_Box VA_7,
  MR_Integer Hi_8,
  MR_Word STATE_VARIABLE_Acc_0_10,
  MR_Word * STATE_VARIABLE_Acc_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_Integer) 0 <= Hi_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Acc_13_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Integer next_value_of_Hi_8;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_10;

      Var_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_18, VA_7, Hi_8);
      {
        STATE_VARIABLE_Acc_13_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Acc_13_13, 0) = Var_14;
        MR_hl_field(1, STATE_VARIABLE_Acc_13_13, 1) = ((MR_Box) (STATE_VARIABLE_Acc_0_10));
      }
      Var_15 = (MR_Integer) ((MR_Unsigned) Hi_8 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Hi_8 = Var_15;
      next_value_of_STATE_VARIABLE_Acc_0_10 = STATE_VARIABLE_Acc_13_13;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_Acc_0_10 = next_value_of_STATE_VARIABLE_Acc_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
    break;
  }
}

MR_Box MR_CALL 
mercury__version_array__copy_1_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box VA_3)
{
  MR_bool succeeded;
  MR_Box HeadVar__2_2;
  MR_Integer Var_4;

{
#define MR_PROC_LABEL mercury__version_array__copy_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_4  = N;
}
  succeeded = (Var_4 == (MR_Integer) 0);
  if (succeeded)
    HeadVar__2_2 = VA_3;
  else
  {
    MR_Integer Var_5;
    MR_Box Var_6;

{
#define MR_PROC_LABEL mercury__version_array__copy_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_5  = N;
}
    Var_6 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T_8, VA_3, (MR_Integer) 0);
{
#define MR_PROC_LABEL mercury__version_array__copy_1_f_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	VA0 = (struct ML_va *)VA_3 ;
	N = Var_5 ;
	X = (MR_Word) Var_6 ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = (MR_Box) VA;
}
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__version_array__resize_4_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Integer N_5,
  MR_Box X_6,
  MR_Box VA_7,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__version_array__resize_4_p_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	VA0 = (struct ML_va *)VA_7 ;
	N = N_5 ;
	X = (MR_Word) X_6 ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) VA;
}
}

MR_Box MR_CALL 
mercury__version_array__resize_3_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Box HeadVar__4_4;

{
#define MR_PROC_LABEL mercury__version_array__resize_3_f_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	VA0 = (struct ML_va *)HeadVar__1_1 ;
	N = HeadVar__2_2 ;
	X = (MR_Word) HeadVar__3_3 ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	HeadVar__4_4  = (MR_Box) VA;
}
  return HeadVar__4_4;
}

MR_bool MR_CALL 
mercury__version_array__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box VA_2)
{
  MR_bool succeeded;
  MR_Integer Var_3;

{
#define MR_PROC_LABEL mercury__version_array__is_empty_1_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_2 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_3  = N;
}
  succeeded = (Var_3 == (MR_Integer) 0);
  return succeeded;
}

MR_Integer MR_CALL 
mercury__version_array__max_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box VA_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_4;

{
#define MR_PROC_LABEL mercury__version_array__max_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_4  = N;
}
  HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Var_4 - (MR_Unsigned) 1);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__version_array__size_1_f_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__version_array__size_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)HeadVar__1_1 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = N;
}
  return HeadVar__2_2;
}

MR_Box MR_CALL 
mercury__version_array__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Integer I_6,
  MR_Box VA0_5,
  MR_Box X_7)
{
  MR_bool succeeded;
  MR_Box VA_8;
  MR_Box STATE_VARIABLE_VA_10_10;

{
#define MR_PROC_LABEL mercury__version_array__f_101_108_101_109_32_58_61_3_f_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = I_6 ;
	X = (MR_Word) X_7 ;
	VA0 = (struct ML_va *)VA0_5 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	STATE_VARIABLE_VA_10_10  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    VA_8 = STATE_VARIABLE_VA_10_10;
  else
  {
    MR_Integer Var_11;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__version_array__f_101_108_101_109_32_58_61_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA0_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_13  = N;
}
    Var_11 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) 1);
    mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_11, (MR_String) "version_array.set");
  }
  return VA_8;
}

void MR_CALL 
mercury__version_array__set_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer I_5,
  MR_Box X_6,
  MR_Box STATE_VARIABLE_VA_0_8,
  MR_Box * STATE_VARIABLE_VA_9)
{
  MR_bool succeeded;
  MR_Box STATE_VARIABLE_VA_10_10;

{
#define MR_PROC_LABEL mercury__version_array__set_4_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = I_5 ;
	X = (MR_Word) X_6 ;
	VA0 = (struct ML_va *)STATE_VARIABLE_VA_0_8 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	STATE_VARIABLE_VA_10_10  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *STATE_VARIABLE_VA_9 = STATE_VARIABLE_VA_10_10;
  else
  {
    MR_Integer Var_11;
    MR_Integer Var_14;

{
#define MR_PROC_LABEL mercury__version_array__set_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)STATE_VARIABLE_VA_0_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_14  = N;
}
    Var_11 = (MR_Integer) ((MR_Unsigned) Var_14 - (MR_Unsigned) 1);
    {
      mercury__version_array__out_of_bounds_error_3_p_0(I_5, Var_11, (MR_String) "version_array.set");
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__version_array__elem_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Integer I_5,
  MR_Box VA_4)
{
  MR_bool succeeded;
  MR_Box X_6;
  MR_Box X0_8;

{
#define MR_PROC_LABEL mercury__version_array__elem_2_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)VA_4 ;
	I = I_5 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	X0_8  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    X_6 = X0_8;
  else
  {
    MR_Integer Var_9;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__version_array__elem_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_4 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_11  = N;
}
    Var_9 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
    mercury__version_array__out_of_bounds_error_3_p_0(I_5, Var_9, (MR_String) "version_array.lookup");
  }
  return X_6;
}

void MR_CALL 
mercury__version_array__lookup_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box VA_4,
  MR_Integer I_5,
  MR_Box * X_6)
{
  MR_bool succeeded;
  MR_Box X0_7;

{
#define MR_PROC_LABEL mercury__version_array__lookup_3_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)VA_4 ;
	I = I_5 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	X0_7  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *X_6 = X0_7;
  else
  {
    MR_Integer Var_8;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__version_array__lookup_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_4 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_11  = N;
}
    Var_8 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
    {
      mercury__version_array__out_of_bounds_error_3_p_0(I_5, Var_8, (MR_String) "version_array.lookup");
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__version_array__lookup_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box VA_4,
  MR_Integer I_5)
{
  MR_bool succeeded;
  MR_Box X_6;
  MR_Box X0_8;

{
#define MR_PROC_LABEL mercury__version_array__lookup_2_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)VA_4 ;
	I = I_5 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	X0_8  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    X_6 = X0_8;
  else
  {
    MR_Integer Var_9;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__version_array__lookup_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_4 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_11  = N;
}
    Var_9 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
    mercury__version_array__out_of_bounds_error_3_p_0(I_5, Var_9, (MR_String) "version_array.lookup");
  }
  return X_6;
}

MR_Box MR_CALL 
mercury__version_array__from_reverse_list_1_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1)
{
  MR_Box HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
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
	HeadVar__2_2  = (MR_Box) VA;
}
  }
  else
  {
    MR_Box X_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Word Xs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer NumElems_6;
    MR_Box VA0_7;
    MR_Integer Var_9;
    MR_Integer Var_10;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_12, Xs_4, (MR_Integer) 0, &Var_9);
    NumElems_6 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_9);
    VA0_7 = mercury__version_array__init_2_f_0(TypeInfo_for_T_12, NumElems_6, X_3);
    Var_10 = (MR_Integer) ((MR_Unsigned) NumElems_6 - (MR_Unsigned) 2);
    mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_114_101_118_101_114_115_101_95_108_105_115_116_95_105_110_105_116_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(Var_10, Xs_4, VA0_7, &HeadVar__2_2);
  }
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_114_101_118_101_114_115_101_95_108_105_115_116_95_105_110_105_116_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_Integer I_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_VA_0_3,
  MR_Box * STATE_VARIABLE_VA_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VA_4 = STATE_VARIABLE_VA_0_3;
    else
    {
      MR_Box X_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Xs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_VA_15_15;
      MR_Integer Var_16;
      MR_Box STATE_VARIABLE_VA_10_20;
      MR_Integer next_value_of_I_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_VA_0_3;

{
#define MR_PROC_LABEL mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_114_101_118_101_114_115_101_95_108_105_115_116_95_105_110_105_116_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = I_1 ;
	X = (MR_Word) X_10 ;
	VA0 = (struct ML_va *)STATE_VARIABLE_VA_0_3 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	STATE_VARIABLE_VA_10_20  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        STATE_VARIABLE_VA_15_15 = STATE_VARIABLE_VA_10_20;
      else
      {
        MR_Integer Var_21;
        MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_114_101_118_101_114_115_101_95_108_105_115_116_95_105_110_105_116_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)STATE_VARIABLE_VA_0_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_23  = N;
}
        Var_21 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(I_1, Var_21, (MR_String) "version_array.set");
          return;
        }
      }
      Var_16 = (MR_Integer) ((MR_Unsigned) I_1 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_1 = Var_16;
      next_value_of_HeadVar__2_2 = Xs_11;
      next_value_of_STATE_VARIABLE_VA_0_3 = STATE_VARIABLE_VA_15_15;
      I_1 = next_value_of_I_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_VA_0_3 = next_value_of_STATE_VARIABLE_VA_0_3;
      continue;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__version_array__from_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Xs_3)
{
  MR_Box HeadVar__2_2;

  HeadVar__2_2 = mercury__version_array__version_array_1_f_0(TypeInfo_for_T_4, Xs_3);
  return HeadVar__2_2;
}

MR_Box MR_CALL 
mercury__version_array__version_array_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1)
{
  MR_Box HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
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
	HeadVar__2_2  = (MR_Box) VA;
}
  }
  else
  {
    MR_Box X_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Word Xs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer NumElems_6;
    MR_Box VA0_7;
    MR_Integer Var_9;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_11, Xs_4, (MR_Integer) 0, &Var_9);
    NumElems_6 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_9);
    VA0_7 = mercury__version_array__init_2_f_0(TypeInfo_for_T_11, NumElems_6, X_3);
    mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_105_110_105_116_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, Xs_4, VA0_7, &HeadVar__2_2);
  }
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_105_110_105_116_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_Integer I_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_VA_0_3,
  MR_Box * STATE_VARIABLE_VA_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VA_4 = STATE_VARIABLE_VA_0_3;
    else
    {
      MR_Box X_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Xs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_VA_15_15;
      MR_Integer Var_16;
      MR_Box STATE_VARIABLE_VA_10_20;
      MR_Integer next_value_of_I_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_VA_0_3;

{
#define MR_PROC_LABEL mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_105_110_105_116_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = I_1 ;
	X = (MR_Word) X_10 ;
	VA0 = (struct ML_va *)STATE_VARIABLE_VA_0_3 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	STATE_VARIABLE_VA_10_20  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        STATE_VARIABLE_VA_15_15 = STATE_VARIABLE_VA_10_20;
      else
      {
        MR_Integer Var_21;
        MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_105_110_105_116_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)STATE_VARIABLE_VA_0_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_23  = N;
}
        Var_21 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(I_1, Var_21, (MR_String) "version_array.set");
          return;
        }
      }
      Var_16 = (MR_Integer) ((MR_Unsigned) I_1 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_1 = Var_16;
      next_value_of_HeadVar__2_2 = Xs_11;
      next_value_of_STATE_VARIABLE_VA_0_3 = STATE_VARIABLE_VA_15_15;
      I_1 = next_value_of_I_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_VA_0_3 = next_value_of_STATE_VARIABLE_VA_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__version_array__out_of_bounds_error_3_p_0(
  MR_Integer Index_4,
  MR_Integer Max_5,
  MR_String PredName_6)
{
  MR_String Msg_7;
  MR_Word Var_16;
  MR_String Var_19;
  MR_String Var_26;
  MR_String Var_28;
  MR_String Var_29;
  MR_String Var_36;
  MR_String Var_38;

  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__version_array_scalar_common_4[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Max_5, &Var_19);
  mercury__string__append_3_p_2(Var_19, (MR_String) "]", &Var_26);
  mercury__string__append_3_p_2((MR_String) " not in range [0, ", Var_26, &Var_28);
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__version_array_scalar_common_4[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Index_4, &Var_29);
  mercury__string__append_3_p_2(Var_29, Var_28, &Var_36);
  mercury__string__append_3_p_2((MR_String) ": index ", Var_36, &Var_38);
  mercury__string__append_3_p_2(PredName_6, Var_38, &Msg_7);
  Var_16 = (MR_Word) (Msg_7);
  {
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__version_array__version_array__type_ctor_info_index_out_of_bounds_0), ((MR_Box) (Var_16)));
    return;
  }
}

MR_Box MR_CALL 
mercury__version_array__unsafe_init_2_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_Box HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__version_array__unsafe_init_2_f_0

	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	N = HeadVar__1_1 ;
	X = (MR_Word) HeadVar__2_2 ;
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
	HeadVar__3_3  = (MR_Box) VA;
}
  return HeadVar__3_3;
}

MR_Box MR_CALL 
mercury__version_array__unsafe_empty_0_f_0(
  MR_Word TypeInfo_for_T_2)
{
  MR_Box HeadVar__1_1;

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
	HeadVar__1_1  = (MR_Box) VA;
}
  return HeadVar__1_1;
}

MR_Box MR_CALL 
mercury__version_array__init_2_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_Box HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__version_array__init_2_f_0

	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	N = HeadVar__1_1 ;
	X = (MR_Word) HeadVar__2_2 ;
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
	HeadVar__3_3  = (MR_Box) VA;
}
  return HeadVar__3_3;
}

MR_Box MR_CALL 
mercury__version_array__empty_0_f_0(
  MR_Word TypeInfo_for_T_2)
{
  MR_Box HeadVar__1_1;

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
	HeadVar__1_1  = (MR_Box) VA;
}
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__version_array____Unify____index_out_of_bounds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__version_array____Compare____index_out_of_bounds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__version_array____Unify____version_array_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__version_array____Compare____version_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__version_array____Compare____version_array_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_3)), ((MR_Box) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module version_array.
