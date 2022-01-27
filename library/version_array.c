/*
** Automatically generated from `version_array.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "char.mih"
#include "construct.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"


#line 975 "version_array.m"


#include "mercury_types.h"
#include "mercury_bitmap.h"

/*
** Returns the number of items in a version array.
*/
static MR_Integer
ML_va_size(ML_const_va_ptr);

/*
** If I is in range then ML_va_get(VA, I, &X) sets X to the Ith item
** in VA (counting from zero) and returns MR_TRUE. Otherwise it
** returns MR_FALSE.
*/
static MR_bool
ML_va_get(ML_const_va_ptr VA, MR_Integer I, MR_Word *Xptr);

/*
** If I is in range then ML_va_set(VA0, I, X, VA) sets VA to be VA0
** updated with the Ith item as X (counting from zero) and
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
ML_va_rewind_into(ML_va_ptr VA, ML_const_va_ptr VA0);

/*
** `Rewinds' a version array, invalidating all extant successors
** including the argument.
*/
static ML_va_ptr
ML_va_rewind(ML_va_ptr VA);

/*
** Resize a version array.
*/
static ML_va_ptr
ML_va_resize(ML_va_ptr, MR_Integer, MR_Word, MR_AllocSiteInfoPtr);




#line 146 "version_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_array__version_array__pti_version_array_1__pseudo_1;

#line 149 "version_array.c"
static const MR_Integer mercury__version_array__version_array__functor_number_map_index_out_of_bounds_0[1];

#line 152 "version_array.c"
static const MR_NotagFunctorDesc mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0;

#line 155 "version_array.c"
static MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0_10001(
#line 158 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 160 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2);

#line 163 "version_array.c"
static void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0_10001(
#line 166 "version_array.c"
  MR_Box * mercury__version_array__wrapper_arg_1,
#line 168 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2,
#line 170 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3);

#line 173 "version_array.c"
static MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0_10001(
#line 176 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 178 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2,
#line 180 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3);

#line 183 "version_array.c"
static void MR_CALL 
mercury__version_array____Compare____version_array_1_0_10001(
#line 186 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 188 "version_array.c"
  MR_Box * mercury__version_array__wrapper_arg_2,
#line 190 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3,
#line 192 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_4);

#line 400 "version_array.m"
static MR_Word MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_0(
#line 400 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_15,
#line 400 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 400 "version_array.m"
  MR_Word mercury__version_array__Acc_8,
#line 400 "version_array.m"
  MR_Integer mercury__version_array__Hi_9);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 2050 "version_array.m"
static MR_Box MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2050__1_3_f_0_1(
#line 2050 "version_array.m"
  MR_Box mercury__version_array__closure_arg);

#line 2050 "version_array.m"
static MR_Word MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2050__1_3_f_0(
#line 2050 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_28,
#line 2050 "version_array.m"
  MR_Integer mercury__version_array__I_4,
#line 2050 "version_array.m"
  MR_Box mercury__version_array__VA_5);

#line 568 "version_array.m"
static void MR_CALL 
mercury__version_array__cmp_version_array_2_5_p_0(
#line 568 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_16,
#line 568 "version_array.m"
  MR_Integer mercury__version_array__I_6,
#line 568 "version_array.m"
  MR_Integer mercury__version_array__Size_7,
#line 568 "version_array.m"
  MR_Box mercury__version_array__VAa_8,
#line 568 "version_array.m"
  MR_Box mercury__version_array__VAb_9,
#line 568 "version_array.m"
  MR_Word * mercury__version_array__R_10);

#line 539 "version_array.m"
static MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_3_p_0(
#line 539 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_11,
#line 539 "version_array.m"
  MR_Integer mercury__version_array__I_4,
#line 539 "version_array.m"
  MR_Box mercury__version_array__VAa_5,
#line 539 "version_array.m"
  MR_Box mercury__version_array__VAb_6);

#line 274 "version_array.m"
static void MR_CALL 
mercury__version_array__version_array_2_4_p_0(
#line 274 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_19,
#line 274 "version_array.m"
  MR_Integer mercury__version_array__I_1,
#line 274 "version_array.m"
  MR_Word mercury__version_array__HeadVar__2_2,
#line 274 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_VA_0_3,
#line 274 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_VA_4);

#line 2050 "version_array.m"
static MR_Box MR_CALL 
mercury__version_array__version_array_to_doc_1_f_0_1(
#line 2050 "version_array.m"
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



#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#line 1031 "version_array.m"


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

    ML_va_rewind_into(VA, VA0);

    return VA;
}

static void
ML_va_rewind_into(ML_va_ptr VA_dest, ML_const_va_ptr VA_src)
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
    MR_allocate_bitmap_msg(bitmap, VA_dest->rest.array->size, MR_ALLOC_ID);
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
ML_va_rewind_dolock(ML_va_ptr VA)
{
#ifdef MR_THREAD_SAFE
    MercuryLock *lock = VA->lock;
#endif
    ML_maybe_lock(lock);

    VA = ML_va_rewind(VA);

    ML_maybe_unlock(lock);

    return VA;
}

static ML_va_ptr
ML_va_rewind(ML_va_ptr VA)
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
    MR_allocate_bitmap_msg(bitmap, array->size, MR_ALLOC_ID);
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

    ML_va_rewind_into(VA, VA0);

    for (i = min; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }

    return VA;
}




#line 1100 "version_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_array__version_array__pti_version_array_1__pseudo_1 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1108 "version_array.c"
static const MR_Integer mercury__version_array__version_array__functor_number_map_index_out_of_bounds_0[1] = {
  (MR_Integer) 0
};

#line 1113 "version_array.c"
static const MR_NotagFunctorDesc mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0 = {
  (MR_String) "index_out_of_bounds",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1120 "version_array.c"
const MR_TypeCtorInfo_Struct mercury__version_array__version_array__type_ctor_info_index_out_of_bounds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__version_array____Unify____index_out_of_bounds_0_0_10001)),
  ((MR_Box) (mercury__version_array____Compare____index_out_of_bounds_0_0_10001)),
  (MR_String) "version_array",
  (MR_String) "index_out_of_bounds",
  {
    &mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0
  },
  {
    &mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__version_array__version_array__functor_number_map_index_out_of_bounds_0
};

#line 1141 "version_array.c"
const MR_TypeCtorInfo_Struct mercury__version_array__version_array__type_ctor_info_version_array_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__version_array____Unify____version_array_1_0_10001)),
  ((MR_Box) (mercury__version_array____Compare____version_array_1_0_10001)),
  (MR_String) "version_array",
  (MR_String) "version_array",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1162 "version_array.c"
static MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0_10001(
#line 1165 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 1167 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2)
#line 1169 "version_array.c"
{
#line 1171 "version_array.c"
  {
#line 1173 "version_array.c"
    MR_bool mercury__version_array__succeeded;

#line 1176 "version_array.c"
    {
#line 1178 "version_array.c"
      mercury__version_array__succeeded = mercury__version_array____Unify____index_out_of_bounds_0_0(((MR_Word) mercury__version_array__wrapper_arg_1), ((MR_Word) mercury__version_array__wrapper_arg_2));
    }
#line 1181 "version_array.c"
    return mercury__version_array__succeeded;
#line 1183 "version_array.c"
  }
#line 1185 "version_array.c"
}

#line 1188 "version_array.c"
static void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0_10001(
#line 1191 "version_array.c"
  MR_Box * mercury__version_array__wrapper_arg_1,
#line 1193 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2,
#line 1195 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3)
#line 1197 "version_array.c"
{
#line 1199 "version_array.c"
  {
#line 1201 "version_array.c"
    MR_Word mercury__version_array__conv0_HeadVar__1_1;

#line 1204 "version_array.c"
    {
#line 1206 "version_array.c"
      mercury__version_array____Compare____index_out_of_bounds_0_0(&mercury__version_array__conv0_HeadVar__1_1, ((MR_Word) mercury__version_array__wrapper_arg_2), ((MR_Word) mercury__version_array__wrapper_arg_3));
    }
#line 1209 "version_array.c"
    *mercury__version_array__wrapper_arg_1 = ((MR_Box) (mercury__version_array__conv0_HeadVar__1_1));
#line 1211 "version_array.c"
  }
#line 1213 "version_array.c"
}

#line 1216 "version_array.c"
static MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0_10001(
#line 1219 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 1221 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2,
#line 1223 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3)
#line 1225 "version_array.c"
{
#line 1227 "version_array.c"
  {
#line 1229 "version_array.c"
    MR_bool mercury__version_array__succeeded;

#line 1232 "version_array.c"
    {
#line 1234 "version_array.c"
      mercury__version_array__succeeded = mercury__version_array____Unify____version_array_1_0(((MR_Word) mercury__version_array__wrapper_arg_1), ((MR_Box) mercury__version_array__wrapper_arg_2), ((MR_Box) mercury__version_array__wrapper_arg_3));
    }
#line 1237 "version_array.c"
    return mercury__version_array__succeeded;
#line 1239 "version_array.c"
  }
#line 1241 "version_array.c"
}

#line 1244 "version_array.c"
static void MR_CALL 
mercury__version_array____Compare____version_array_1_0_10001(
#line 1247 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 1249 "version_array.c"
  MR_Box * mercury__version_array__wrapper_arg_2,
#line 1251 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3,
#line 1253 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_4)
#line 1255 "version_array.c"
{
#line 1257 "version_array.c"
  {
#line 1259 "version_array.c"
    MR_Word mercury__version_array__conv0_HeadVar__1_1;

#line 1262 "version_array.c"
    {
#line 1264 "version_array.c"
      mercury__version_array____Compare____version_array_1_0(((MR_Word) mercury__version_array__wrapper_arg_1), &mercury__version_array__conv0_HeadVar__1_1, ((MR_Box) mercury__version_array__wrapper_arg_3), ((MR_Box) mercury__version_array__wrapper_arg_4));
    }
#line 1267 "version_array.c"
    *mercury__version_array__wrapper_arg_2 = ((MR_Box) (mercury__version_array__conv0_HeadVar__1_1));
#line 1269 "version_array.c"
  }
#line 1271 "version_array.c"
}

#line 400 "version_array.m"
static MR_Word MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_0(
#line 400 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_15,
#line 400 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 400 "version_array.m"
  MR_Word mercury__version_array__Acc_8,
#line 400 "version_array.m"
  MR_Integer mercury__version_array__Hi_9)
#line 400 "version_array.m"
{
#line 402 "version_array.m"
  while (MR_TRUE)
#line 402 "version_array.m"
    {
#line 402 "version_array.m"
      /* tailcall optimized into a loop */
#line 402 "version_array.m"
      {
#line 402 "version_array.m"
        MR_bool mercury__version_array__succeeded = ((MR_Integer) 0 <= mercury__version_array__Hi_9);
#line 402 "version_array.m"
        MR_Word mercury__version_array__HeadVar__5_5;

#line 402 "version_array.m"
        if (mercury__version_array__succeeded)
#line 404 "version_array.m"
          {
#line 404 "version_array.m"
            MR_Word mercury__version_array__V_11_11;
#line 404 "version_array.m"
            MR_Box mercury__version_array__V_12_12;
#line 404 "version_array.m"
            MR_Integer mercury__version_array__V_13_13;

#line 404 "version_array.m"
            {
#line 404 "version_array.m"
              mercury__version_array__V_12_12 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_15, mercury__version_array__VA_7, mercury__version_array__Hi_9);
            }
#line 44 "list.opt"
            {
#line 44 "list.opt"
              mercury__version_array__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 44 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__version_array__V_11_11, 0) = mercury__version_array__V_12_12;
#line 44 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__version_array__V_11_11, 1) = ((MR_Box) (mercury__version_array__Acc_8));
#line 44 "list.opt"
            }
#line 404 "version_array.m"
            mercury__version_array__V_13_13 = (mercury__version_array__Hi_9 - (MR_Integer) 1);
#line 404 "version_array.m"
            /* direct tailcall eliminated */
#line 404 "version_array.m"
            {
#line 404 "version_array.m"
              MR_Word mercury__version_array__Acc__tmp_copy_8 = mercury__version_array__V_11_11;
#line 404 "version_array.m"
              MR_Integer mercury__version_array__Hi__tmp_copy_9 = mercury__version_array__V_13_13;

#line 404 "version_array.m"
              mercury__version_array__Hi_9 = mercury__version_array__Hi__tmp_copy_9;
#line 404 "version_array.m"
              mercury__version_array__Acc_8 = mercury__version_array__Acc__tmp_copy_8;
#line 404 "version_array.m"
            }
#line 404 "version_array.m"
            continue;
#line 404 "version_array.m"
          }
#line 402 "version_array.m"
        else
#line 402 "version_array.m"
          mercury__version_array__HeadVar__5_5 = mercury__version_array__Acc_8;
#line 402 "version_array.m"
        return mercury__version_array__HeadVar__5_5;
#line 402 "version_array.m"
      }
#line 402 "version_array.m"
      break;
#line 402 "version_array.m"
    }
#line 400 "version_array.m"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__version_array__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 2050 "version_array.m"
static MR_Box MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2050__1_3_f_0_1(
#line 2050 "version_array.m"
  MR_Box mercury__version_array__closure_arg)
#line 2050 "version_array.m"
{
#line 2050 "version_array.m"
  {
#line 2050 "version_array.m"
    MR_Box mercury__version_array__wrapper_arg_1;
#line 2050 "version_array.m"
    MR_Box mercury__version_array__closure = mercury__version_array__closure_arg;
#line 2050 "version_array.m"
    MR_Word mercury__version_array__conv0_HeadVar__4_24;

#line 2050 "version_array.m"
    {
#line 2050 "version_array.m"
      mercury__version_array__conv0_HeadVar__4_24 = mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2050__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 4))), ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 5))));
    }
#line 2050 "version_array.m"
    mercury__version_array__wrapper_arg_1 = ((MR_Box) (mercury__version_array__conv0_HeadVar__4_24));
#line 2050 "version_array.m"
    return mercury__version_array__wrapper_arg_1;
#line 2050 "version_array.m"
  }
#line 2050 "version_array.m"
}

#line 2050 "version_array.m"
static MR_Word MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2050__1_3_f_0(
#line 2050 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_28,
#line 2050 "version_array.m"
  MR_Integer mercury__version_array__I_4,
#line 2050 "version_array.m"
  MR_Box mercury__version_array__VA_5)
#line 2050 "version_array.m"
{
#line 2050 "version_array.m"
  {
#line 2050 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 2050 "version_array.m"
    MR_Word mercury__version_array__HeadVar__4_24;
#line 2050 "version_array.m"
    MR_Integer mercury__version_array__V_25_25 = (mercury__version_array__I_4 + (MR_Integer) 1);
#line 2040 "version_array.m"
    MR_Integer mercury__version_array__V_32_32;
#line 2040 "version_array.m"
    MR_Integer mercury__version_array__V_56_56;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_75;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2050__1_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_5 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 1448 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_56_56  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_32_32 = (mercury__version_array__V_56_56 - (MR_Integer) 1);
#line 2040 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__V_25_25 > mercury__version_array__V_32_32);
#line 2039 "version_array.m"
    if (mercury__version_array__succeeded)
#line 2041 "version_array.m"
      {
#line 2041 "version_array.m"
        mercury__version_array__HeadVar__4_24 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
#line 2041 "version_array.m"
      }
#line 2039 "version_array.m"
    else
#line 2043 "version_array.m"
      {
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_34_34;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_35_35;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_36_36;
#line 2043 "version_array.m"
        MR_Box mercury__version_array__V_37_37;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_38_38;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_39_39;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_47_47;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_48_48;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_49_49;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_53_53;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_4_59;
#line 2045 "version_array.m"
        MR_Integer mercury__version_array__V_54_54;
#line 2045 "version_array.m"
        MR_Integer mercury__version_array__V_63_63;
#line 779 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_76;

#line 2044 "version_array.m"
        {
#line 2044 "version_array.m"
          mercury__version_array__V_37_37 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_28, mercury__version_array__VA_5, mercury__version_array__V_25_25);
        }
#line 8 "univ.opt"
        {
#line 8 "univ.opt"
          mercury__univ__type_to_univ_2_p_1(mercury__version_array__TypeInfo_for_T_28, mercury__version_array__V_37_37, &mercury__version_array__V_4_59);
        }
#line 105 "pretty_printer.opt"
        {
#line 105 "pretty_printer.opt"
          mercury__version_array__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "pretty_printer.opt"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 105 "pretty_printer.opt"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_36_36, 1) = ((MR_Box) (mercury__version_array__V_4_59));
#line 105 "pretty_printer.opt"
        }
#line 2044 "version_array.m"
        {
#line 2044 "version_array.m"
          mercury__version_array__V_35_35 = mercury__pretty_printer__format_arg_1_f_0(mercury__version_array__V_36_36);
        }
#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2050__1_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_5 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 1538 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_63_63  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
        mercury__version_array__V_54_54 = (mercury__version_array__V_63_63 - (MR_Integer) 1);
#line 2045 "version_array.m"
        mercury__version_array__succeeded = (mercury__version_array__V_25_25 == mercury__version_array__V_54_54);
#line 2049 "version_array.m"
        if (mercury__version_array__succeeded)
#line 2046 "version_array.m"
          {
#line 2046 "version_array.m"
            mercury__version_array__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
#line 2046 "version_array.m"
          }
#line 2049 "version_array.m"
        else
#line 2048 "version_array.m"
          {
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[1]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_4_66 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[6]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_5_67 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[2]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_7_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[5]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_6_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_8_70 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[3]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_9_71 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[4]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_10_72 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[3]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_12_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_11_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

#line 95 "pretty_printer.opt"
            mercury__version_array__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[4]);
#line 2048 "version_array.m"
          }
#line 2050 "version_array.m"
        {
#line 2050 "version_array.m"
          mercury__version_array__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 0) = ((MR_Box) (&mercury__version_array_scalar_common_7[0]));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 1) = ((MR_Box) (mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2050__1_3_f_0_1));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 3) = ((MR_Box) (mercury__version_array__TypeInfo_for_T_28));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 4) = ((MR_Box) (mercury__version_array__V_25_25));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 5) = ((MR_Box) (mercury__version_array__VA_5));
#line 2050 "version_array.m"
        }
#line 2050 "version_array.m"
        {
#line 2050 "version_array.m"
          mercury__version_array__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_48_48, 1) = ((MR_Box) (mercury__version_array__V_49_49));
#line 2050 "version_array.m"
        }
#line 2051 "version_array.m"
        mercury__version_array__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2051 "version_array.m"
        {
#line 2051 "version_array.m"
          mercury__version_array__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_47_47, 0) = ((MR_Box) (mercury__version_array__V_48_48));
#line 2051 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_47_47, 1) = ((MR_Box) (mercury__version_array__V_53_53));
#line 2051 "version_array.m"
        }
#line 2049 "version_array.m"
        {
#line 2049 "version_array.m"
          mercury__version_array__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_38_38, 0) = ((MR_Box) (mercury__version_array__V_39_39));
#line 2049 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_38_38, 1) = ((MR_Box) (mercury__version_array__V_47_47));
#line 2049 "version_array.m"
        }
#line 2044 "version_array.m"
        {
#line 2044 "version_array.m"
          mercury__version_array__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2044 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_34_34, 0) = ((MR_Box) (mercury__version_array__V_35_35));
#line 2044 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_34_34, 1) = ((MR_Box) (mercury__version_array__V_38_38));
#line 2044 "version_array.m"
        }
#line 2043 "version_array.m"
        {
#line 2043 "version_array.m"
          mercury__version_array__HeadVar__4_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2043 "version_array.m"
          MR_hl_field(MR_mktag(2), mercury__version_array__HeadVar__4_24, 0) = ((MR_Box) (mercury__version_array__V_34_34));
#line 2043 "version_array.m"
        }
#line 2043 "version_array.m"
      }
#line 2050 "version_array.m"
    return mercury__version_array__HeadVar__4_24;
#line 2050 "version_array.m"
  }
#line 2050 "version_array.m"
}

#line 527 "version_array.m"
void MR_CALL 
mercury__version_array____Compare____version_array_1_0(
#line 527 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 527 "version_array.m"
  MR_Word * mercury__version_array__HeadVar__1_1,
#line 527 "version_array.m"
  MR_Box mercury__version_array__HeadVar__2_2,
#line 527 "version_array.m"
  MR_Box mercury__version_array__HeadVar__3_3)
#line 527 "version_array.m"
{
#line 527 "version_array.m"
  {
#line 527 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 527 "version_array.m"
    MR_Integer mercury__version_array__CastX_4 = (MR_Integer) mercury__version_array__HeadVar__2_2;
#line 527 "version_array.m"
    MR_Integer mercury__version_array__CastY_5 = (MR_Integer) mercury__version_array__HeadVar__3_3;

#line 527 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__CastX_4 == mercury__version_array__CastY_5);
#line 527 "version_array.m"
    if (mercury__version_array__succeeded)
#line 527 "version_array.m"
      *mercury__version_array__HeadVar__1_1 = (MR_Integer) 0;
#line 527 "version_array.m"
    else
#line 527 "version_array.m"
      {
#line 527 "version_array.m"
        mercury__version_array__cmp_version_array_3_p_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__HeadVar__1_1, mercury__version_array__HeadVar__2_2, mercury__version_array__HeadVar__3_3);
#line 527 "version_array.m"
        return;
      }
#line 527 "version_array.m"
  }
#line 527 "version_array.m"
}

#line 527 "version_array.m"
MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0(
#line 527 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_5,
#line 527 "version_array.m"
  MR_Box mercury__version_array__HeadVar__1_1,
#line 527 "version_array.m"
  MR_Box mercury__version_array__HeadVar__2_2)
#line 527 "version_array.m"
{
#line 527 "version_array.m"
  {
#line 527 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 527 "version_array.m"
    MR_Integer mercury__version_array__CastX_3 = (MR_Integer) mercury__version_array__HeadVar__1_1;
#line 527 "version_array.m"
    MR_Integer mercury__version_array__CastY_4 = (MR_Integer) mercury__version_array__HeadVar__2_2;

#line 527 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__CastX_3 == mercury__version_array__CastY_4);
#line 527 "version_array.m"
    if (mercury__version_array__succeeded)
#line 527 "version_array.m"
      mercury__version_array__succeeded = MR_TRUE;
#line 527 "version_array.m"
    else
#line 527 "version_array.m"
      {
#line 527 "version_array.m"
        return mercury__version_array__succeeded = mercury__version_array__eq_version_array_2_p_0(mercury__version_array__TypeInfo_for_T_5, mercury__version_array__HeadVar__1_1, mercury__version_array__HeadVar__2_2);
      }
#line 527 "version_array.m"
    return mercury__version_array__succeeded;
#line 527 "version_array.m"
  }
#line 527 "version_array.m"
}

#line 70 "version_array.m"
void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0(
#line 70 "version_array.m"
  MR_Word * mercury__version_array__HeadVar__1_1,
#line 70 "version_array.m"
  MR_Word mercury__version_array__HeadVar__2_2,
#line 70 "version_array.m"
  MR_Word mercury__version_array__HeadVar__3_3)
#line 70 "version_array.m"
{
#line 70 "version_array.m"
  {
#line 70 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 70 "version_array.m"
    MR_Integer mercury__version_array__CastX_6 = (MR_Integer) mercury__version_array__HeadVar__2_2;
#line 70 "version_array.m"
    MR_Integer mercury__version_array__CastY_7 = (MR_Integer) mercury__version_array__HeadVar__3_3;

#line 70 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__CastX_6 == mercury__version_array__CastY_7);
#line 70 "version_array.m"
    if (mercury__version_array__succeeded)
#line 1769 "version_array.c"
      *mercury__version_array__HeadVar__1_1 = (MR_Integer) 0;
#line 70 "version_array.m"
    else
#line 70 "version_array.m"
      {
#line 70 "version_array.m"
        MR_String mercury__version_array__V_4_4 = (MR_String) mercury__version_array__HeadVar__2_2;
#line 70 "version_array.m"
        MR_String mercury__version_array__V_5_5 = (MR_String) mercury__version_array__HeadVar__3_3;
#line 70 "version_array.m"
        MR_Integer mercury__version_array__Res_7_12;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__version_array____Compare____index_out_of_bounds_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__version_array__V_4_4 ;
	S2 =  mercury__version_array__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 1797 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Res_7_12  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__version_array__succeeded = (mercury__version_array__Res_7_12 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__version_array__succeeded)
#line 104 "private_builtin.opt"
          *mercury__version_array__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__version_array__succeeded = (mercury__version_array__Res_7_12 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__version_array__succeeded)
#line 109 "private_builtin.opt"
              *mercury__version_array__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              *mercury__version_array__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 70 "version_array.m"
      }
#line 70 "version_array.m"
  }
#line 70 "version_array.m"
}

#line 70 "version_array.m"
MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0(
#line 70 "version_array.m"
  MR_Word mercury__version_array__HeadVar__1_1,
#line 70 "version_array.m"
  MR_Word mercury__version_array__HeadVar__2_2)
#line 70 "version_array.m"
{
#line 70 "version_array.m"
  {
#line 70 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 70 "version_array.m"
    MR_Integer mercury__version_array__CastX_5 = (MR_Integer) mercury__version_array__HeadVar__1_1;
#line 70 "version_array.m"
    MR_Integer mercury__version_array__CastY_6 = (MR_Integer) mercury__version_array__HeadVar__2_2;

#line 70 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__CastX_5 == mercury__version_array__CastY_6);
#line 70 "version_array.m"
    if (mercury__version_array__succeeded)
#line 70 "version_array.m"
      mercury__version_array__succeeded = MR_TRUE;
#line 70 "version_array.m"
    else
#line 70 "version_array.m"
      {
#line 70 "version_array.m"
        MR_String mercury__version_array__V_3_3 = (MR_String) mercury__version_array__HeadVar__1_1;
#line 70 "version_array.m"
        MR_String mercury__version_array__V_4_4 = (MR_String) mercury__version_array__HeadVar__2_2;

#line 1866 "version_array.c"
        mercury__version_array__succeeded = (strcmp(mercury__version_array__V_3_3, mercury__version_array__V_4_4) == 0);
#line 70 "version_array.m"
      }
#line 70 "version_array.m"
    return mercury__version_array__succeeded;
#line 70 "version_array.m"
  }
#line 70 "version_array.m"
}

#line 2020 "version_array.m"
void MR_CALL 
mercury__version_array__out_of_bounds_error_3_p_0(
#line 2020 "version_array.m"
  MR_Integer mercury__version_array__Index_4,
#line 2020 "version_array.m"
  MR_Integer mercury__version_array__Max_5,
#line 2020 "version_array.m"
  MR_String mercury__version_array__PredName_6)
#line 2020 "version_array.m"
{
#line 2022 "version_array.m"
  {
#line 2022 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 2022 "version_array.m"
    MR_Word mercury__version_array__TypeCtorInfo_17_17;
#line 2022 "version_array.m"
    MR_String mercury__version_array__Msg_7;
#line 2022 "version_array.m"
    MR_Word mercury__version_array__V_16_16;
#line 2022 "version_array.m"
    MR_String mercury__version_array__V_19_19;
#line 2022 "version_array.m"
    MR_Word mercury__version_array__V_25_25 = (MR_Word) &mercury__version_array_scalar_common_5[7];
#line 2022 "version_array.m"
    MR_String mercury__version_array__V_26_26;
#line 2022 "version_array.m"
    MR_String mercury__version_array__V_28_28;
#line 2022 "version_array.m"
    MR_String mercury__version_array__V_29_29;
#line 2022 "version_array.m"
    MR_String mercury__version_array__V_36_36;
#line 2022 "version_array.m"
    MR_String mercury__version_array__V_38_38;
#line 2022 "version_array.m"
    MR_String mercury__version_array__V_39_39;
#line 2022 "version_array.m"
    MR_Word mercury__version_array__MaybeWidth_7_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2022 "version_array.m"
    MR_Word mercury__version_array__MaybePrec_8_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2022 "version_array.m"
    MR_Word mercury__version_array__MaybeWidth_7_66;
#line 2022 "version_array.m"
    MR_Word mercury__version_array__MaybePrec_8_67;
#line 2022 "version_array.m"
    MR_Word mercury__version_array__MaybeWidth_7_83;
#line 2022 "version_array.m"
    MR_Word mercury__version_array__MaybePrec_8_84;

#line 38 "string.format.opt"
    {
#line 38 "string.format.opt"
      mercury__string__format__format_signed_int_component_5_p_0(mercury__version_array__V_25_25, mercury__version_array__MaybeWidth_7_49, mercury__version_array__MaybePrec_8_50, mercury__version_array__Max_5, &mercury__version_array__V_19_19);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__version_array__V_19_19, (MR_String) "]", &mercury__version_array__V_26_26);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) " not in range [0, ", mercury__version_array__V_26_26, &mercury__version_array__V_28_28);
    }
#line 36 "string.format.opt"
    mercury__version_array__MaybeWidth_7_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 37 "string.format.opt"
    mercury__version_array__MaybePrec_8_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 38 "string.format.opt"
    {
#line 38 "string.format.opt"
      mercury__string__format__format_signed_int_component_5_p_0(mercury__version_array__V_25_25, mercury__version_array__MaybeWidth_7_66, mercury__version_array__MaybePrec_8_67, mercury__version_array__Index_4, &mercury__version_array__V_29_29);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__version_array__V_29_29, mercury__version_array__V_28_28, &mercury__version_array__V_36_36);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": index ", mercury__version_array__V_36_36, &mercury__version_array__V_38_38);
    }
#line 20 "string.format.opt"
    mercury__version_array__MaybeWidth_7_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.format.opt"
    mercury__version_array__MaybePrec_8_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "string.format.opt"
    {
#line 22 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__version_array__V_25_25, mercury__version_array__MaybeWidth_7_83, mercury__version_array__MaybePrec_8_84, mercury__version_array__PredName_6, &mercury__version_array__V_39_39);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__version_array__V_39_39, mercury__version_array__V_38_38, &mercury__version_array__Msg_7);
    }
#line 2030 "version_array.m"
    mercury__version_array__V_16_16 = (MR_Word) mercury__version_array__Msg_7;
#line 1977 "version_array.c"
    mercury__version_array__TypeCtorInfo_17_17 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_index_out_of_bounds_0;
#line 2030 "version_array.m"
    {
#line 2030 "version_array.m"
      mercury__exception__throw_1_p_0(mercury__version_array__TypeCtorInfo_17_17, ((MR_Box) (mercury__version_array__V_16_16)));
#line 2030 "version_array.m"
      return;
    }
#line 2022 "version_array.m"
  }
#line 2020 "version_array.m"
}

#line 844 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__set_if_in_range_4_p_0(
#line 844 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_5,
#line 844 "version_array.m"
  MR_Integer mercury__version_array__HeadVar__1_1,
#line 844 "version_array.m"
  MR_Box mercury__version_array__HeadVar__2_2,
#line 844 "version_array.m"
  MR_Box mercury__version_array__HeadVar__3_3,
#line 844 "version_array.m"
  MR_Box * mercury__version_array__HeadVar__4_4)
#line 844 "version_array.m"
{
#line 847 "version_array.m"
  {
#line 847 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 847 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_6;

#line 851 "version_array.m"
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
#line 851 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);

#line 2031 "version_array.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, *mercury__version_array__HeadVar__4_4 );
#line 851 "version_array.m"
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
#line 847 "version_array.m"
    return mercury__version_array__succeeded;
#line 847 "version_array.m"
  }
#line 844 "version_array.m"
}

#line 806 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__get_if_in_range_3_p_0(
#line 806 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 806 "version_array.m"
  MR_Box mercury__version_array__HeadVar__1_1,
#line 806 "version_array.m"
  MR_Integer mercury__version_array__HeadVar__2_2,
#line 806 "version_array.m"
  MR_Box * mercury__version_array__HeadVar__3_3)
#line 806 "version_array.m"
{
#line 808 "version_array.m"
  {
#line 808 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 808 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_5;

#line 812 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__get_if_in_range_3_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__HeadVar__1_1 , VA);
	I =  mercury__version_array__HeadVar__2_2 ;
		{
#line 812 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);

#line 2084 "version_array.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__version_array__HeadVar__3_3  = (MR_Box) X;
#line 812 "version_array.m"
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
#line 808 "version_array.m"
    return mercury__version_array__succeeded;
#line 808 "version_array.m"
  }
#line 806 "version_array.m"
}

#line 568 "version_array.m"
static void MR_CALL 
mercury__version_array__cmp_version_array_2_5_p_0(
#line 568 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_16,
#line 568 "version_array.m"
  MR_Integer mercury__version_array__I_6,
#line 568 "version_array.m"
  MR_Integer mercury__version_array__Size_7,
#line 568 "version_array.m"
  MR_Box mercury__version_array__VAa_8,
#line 568 "version_array.m"
  MR_Box mercury__version_array__VAb_9,
#line 568 "version_array.m"
  MR_Word * mercury__version_array__R_10)
#line 568 "version_array.m"
{
#line 574 "version_array.m"
  while (MR_TRUE)
#line 574 "version_array.m"
    {
#line 574 "version_array.m"
      /* tailcall optimized into a loop */
#line 574 "version_array.m"
      {
#line 574 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_6 >= mercury__version_array__Size_7);

#line 574 "version_array.m"
        if (mercury__version_array__succeeded)
#line 573 "version_array.m"
          *mercury__version_array__R_10 = (MR_Integer) 0;
#line 574 "version_array.m"
        else
#line 575 "version_array.m"
          {
#line 575 "version_array.m"
            MR_Word mercury__version_array__R0_11;
#line 575 "version_array.m"
            MR_Box mercury__version_array__V_12_12;
#line 575 "version_array.m"
            MR_Box mercury__version_array__V_13_13;

#line 575 "version_array.m"
            {
#line 575 "version_array.m"
              mercury__version_array__V_12_12 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_16, mercury__version_array__VAa_8, mercury__version_array__I_6);
            }
#line 575 "version_array.m"
            {
#line 575 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_16, mercury__version_array__VAb_9, mercury__version_array__I_6);
            }
#line 575 "version_array.m"
            {
#line 575 "version_array.m"
              mercury__builtin__compare_3_p_0(mercury__version_array__TypeInfo_for_T_16, &mercury__version_array__R0_11, mercury__version_array__V_12_12, mercury__version_array__V_13_13);
            }
#line 579 "version_array.m"
            if ((mercury__version_array__R0_11 == (MR_Integer) 0))
#line 577 "version_array.m"
              {
#line 577 "version_array.m"
                MR_Integer mercury__version_array__V_14_14 = (mercury__version_array__I_6 + (MR_Integer) 1);

#line 578 "version_array.m"
                /* direct tailcall eliminated */
#line 578 "version_array.m"
                {
#line 578 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_6 = mercury__version_array__V_14_14;

#line 578 "version_array.m"
                  mercury__version_array__I_6 = mercury__version_array__I__tmp_copy_6;
#line 578 "version_array.m"
                }
#line 578 "version_array.m"
                continue;
#line 577 "version_array.m"
              }
#line 579 "version_array.m"
            else
#line 583 "version_array.m"
              *mercury__version_array__R_10 = mercury__version_array__R0_11;
#line 575 "version_array.m"
          }
#line 574 "version_array.m"
      }
#line 574 "version_array.m"
      break;
#line 574 "version_array.m"
    }
#line 568 "version_array.m"
}

#line 551 "version_array.m"
void MR_CALL 
mercury__version_array__cmp_version_array_3_p_0(
#line 551 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_11,
#line 551 "version_array.m"
  MR_Word * mercury__version_array__R_4,
#line 551 "version_array.m"
  MR_Box mercury__version_array__VAa_5,
#line 551 "version_array.m"
  MR_Box mercury__version_array__VAb_6)
#line 551 "version_array.m"
{
#line 554 "version_array.m"
  {
#line 554 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 554 "version_array.m"
    MR_Integer mercury__version_array__SizeA_7;
#line 554 "version_array.m"
    MR_Integer mercury__version_array__SizeB_8;
#line 554 "version_array.m"
    MR_Word mercury__version_array__SizeResult_9;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_16;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_17;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAa_5 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 2237 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__SizeA_7  = N;
#line 783 "version_array.m"
}
#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAb_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 2257 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__SizeB_8  = N;
#line 783 "version_array.m"
}
#line 66 "private_builtin.opt"
    mercury__version_array__succeeded = (mercury__version_array__SizeA_7 < mercury__version_array__SizeB_8);
#line 69 "private_builtin.opt"
    if (mercury__version_array__succeeded)
#line 68 "private_builtin.opt"
      mercury__version_array__SizeResult_9 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__version_array__succeeded = (mercury__version_array__SizeA_7 == mercury__version_array__SizeB_8);
#line 74 "private_builtin.opt"
        if (mercury__version_array__succeeded)
#line 73 "private_builtin.opt"
          mercury__version_array__SizeResult_9 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          mercury__version_array__SizeResult_9 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 561 "version_array.m"
    if ((mercury__version_array__SizeResult_9 == (MR_Integer) 0))
#line 559 "version_array.m"
      {
#line 560 "version_array.m"
        {
#line 560 "version_array.m"
          mercury__version_array__cmp_version_array_2_5_p_0(mercury__version_array__TypeInfo_for_T_11, (MR_Integer) 0, mercury__version_array__SizeA_7, mercury__version_array__VAa_5, mercury__version_array__VAb_6, mercury__version_array__R_4);
#line 560 "version_array.m"
          return;
        }
#line 559 "version_array.m"
      }
#line 561 "version_array.m"
    else
#line 565 "version_array.m"
      *mercury__version_array__R_4 = mercury__version_array__SizeResult_9;
#line 554 "version_array.m"
  }
#line 551 "version_array.m"
}

#line 539 "version_array.m"
static MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_3_p_0(
#line 539 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_11,
#line 539 "version_array.m"
  MR_Integer mercury__version_array__I_4,
#line 539 "version_array.m"
  MR_Box mercury__version_array__VAa_5,
#line 539 "version_array.m"
  MR_Box mercury__version_array__VAb_6)
#line 539 "version_array.m"
{
#line 546 "version_array.m"
  while (MR_TRUE)
#line 546 "version_array.m"
    {
#line 546 "version_array.m"
      /* tailcall optimized into a loop */
#line 546 "version_array.m"
      {
#line 546 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_4 >= (MR_Integer) 0);

#line 546 "version_array.m"
        if (mercury__version_array__succeeded)
#line 544 "version_array.m"
          {
#line 544 "version_array.m"
            MR_Box mercury__version_array__V_8_8;
#line 544 "version_array.m"
            MR_Integer mercury__version_array__V_9_9;
#line 544 "version_array.m"
            MR_Integer mercury__version_array__V_10_10;
#line 544 "version_array.m"
            MR_Box mercury__version_array__V_12_12;

#line 544 "version_array.m"
            {
#line 544 "version_array.m"
              mercury__version_array__V_8_8 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__VAa_5, mercury__version_array__I_4);
            }
#line 544 "version_array.m"
            {
#line 544 "version_array.m"
              mercury__version_array__V_12_12 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__VAb_6, mercury__version_array__I_4);
            }
#line 544 "version_array.m"
            {
#line 544 "version_array.m"
              mercury__version_array__succeeded = mercury__builtin__unify_2_p_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__V_8_8, mercury__version_array__V_12_12);
            }
#line 544 "version_array.m"
            if (mercury__version_array__succeeded)
#line 544 "version_array.m"
              {
#line 545 "version_array.m"
                mercury__version_array__V_10_10 = (MR_Integer) 1;
#line 545 "version_array.m"
                mercury__version_array__V_9_9 = (mercury__version_array__I_4 - mercury__version_array__V_10_10);
#line 545 "version_array.m"
                /* direct tailcall eliminated */
#line 545 "version_array.m"
                {
#line 545 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_4 = mercury__version_array__V_9_9;

#line 545 "version_array.m"
                  mercury__version_array__I_4 = mercury__version_array__I__tmp_copy_4;
#line 545 "version_array.m"
                }
#line 545 "version_array.m"
                continue;
#line 544 "version_array.m"
              }
#line 544 "version_array.m"
          }
#line 546 "version_array.m"
        else
#line 547 "version_array.m"
          mercury__version_array__succeeded = MR_TRUE;
#line 546 "version_array.m"
        return mercury__version_array__succeeded;
#line 546 "version_array.m"
      }
#line 546 "version_array.m"
      break;
#line 546 "version_array.m"
    }
#line 539 "version_array.m"
}

#line 531 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_p_0(
#line 531 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 531 "version_array.m"
  MR_Box mercury__version_array__VAa_3,
#line 531 "version_array.m"
  MR_Box mercury__version_array__VAb_4)
#line 531 "version_array.m"
{
#line 534 "version_array.m"
  {
#line 534 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 534 "version_array.m"
    MR_Integer mercury__version_array__N_5;
#line 534 "version_array.m"
    MR_Integer mercury__version_array__V_7_7;
#line 534 "version_array.m"
    MR_Integer mercury__version_array__V_9_9;
#line 534 "version_array.m"
    MR_Integer mercury__version_array__V_12_12;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_14;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_15;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAa_3 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 2441 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_9_9  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__N_5 = (mercury__version_array__V_9_9 - (MR_Integer) 1);
#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAb_4 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 2463 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_12_12  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_7_7 = (mercury__version_array__V_12_12 - (MR_Integer) 1);
#line 536 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__N_5 == mercury__version_array__V_7_7);
#line 534 "version_array.m"
    if (mercury__version_array__succeeded)
#line 537 "version_array.m"
      {
#line 537 "version_array.m"
        return mercury__version_array__succeeded = mercury__version_array__eq_version_array_2_3_p_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__N_5, mercury__version_array__VAa_3, mercury__version_array__VAb_4);
      }
#line 534 "version_array.m"
    return mercury__version_array__succeeded;
#line 534 "version_array.m"
  }
#line 531 "version_array.m"
}

#line 481 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_all_false_4_p_0(
#line 481 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_12,
#line 481 "version_array.m"
  MR_Word mercury__version_array__Pred_5,
#line 481 "version_array.m"
  MR_Integer mercury__version_array__I_6,
#line 481 "version_array.m"
  MR_Integer mercury__version_array__N_7,
#line 481 "version_array.m"
  MR_Box mercury__version_array__VA_8)
#line 481 "version_array.m"
{
#line 489 "version_array.m"
  while (MR_TRUE)
#line 489 "version_array.m"
    {
#line 489 "version_array.m"
      /* tailcall optimized into a loop */
#line 489 "version_array.m"
      {
#line 489 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_6 < mercury__version_array__N_7);

#line 489 "version_array.m"
        if (mercury__version_array__succeeded)
#line 486 "version_array.m"
          {
#line 486 "version_array.m"
            MR_Box mercury__version_array__Elem_9;
#line 486 "version_array.m"
            MR_Integer mercury__version_array__V_10_10;
#line 486 "version_array.m"
            MR_Integer mercury__version_array__V_11_11;
#line 487 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box);

#line 296 "version_array.m"
            {
#line 296 "version_array.m"
              mercury__version_array__Elem_9 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_12, mercury__version_array__VA_8, mercury__version_array__I_6);
            }
#line 487 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_array__Pred_5, (MR_Integer) 1)));
#line 487 "version_array.m"
            {
#line 487 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__Pred_5), mercury__version_array__Elem_9);
            }
#line 487 "version_array.m"
            mercury__version_array__succeeded = !(mercury__version_array__succeeded);
#line 486 "version_array.m"
            if (mercury__version_array__succeeded)
#line 486 "version_array.m"
              {
#line 488 "version_array.m"
                mercury__version_array__V_11_11 = (MR_Integer) 1;
#line 488 "version_array.m"
                mercury__version_array__V_10_10 = (mercury__version_array__I_6 + mercury__version_array__V_11_11);
#line 488 "version_array.m"
                /* direct tailcall eliminated */
#line 488 "version_array.m"
                {
#line 488 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_6 = mercury__version_array__V_10_10;

#line 488 "version_array.m"
                  mercury__version_array__I_6 = mercury__version_array__I__tmp_copy_6;
#line 488 "version_array.m"
                }
#line 488 "version_array.m"
                continue;
#line 486 "version_array.m"
              }
#line 486 "version_array.m"
          }
#line 489 "version_array.m"
        else
#line 490 "version_array.m"
          mercury__version_array__succeeded = MR_TRUE;
#line 489 "version_array.m"
        return mercury__version_array__succeeded;
#line 489 "version_array.m"
      }
#line 489 "version_array.m"
      break;
#line 489 "version_array.m"
    }
#line 481 "version_array.m"
}

#line 466 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_all_true_4_p_0(
#line 466 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_12,
#line 466 "version_array.m"
  MR_Word mercury__version_array__Pred_5,
#line 466 "version_array.m"
  MR_Integer mercury__version_array__I_6,
#line 466 "version_array.m"
  MR_Integer mercury__version_array__N_7,
#line 466 "version_array.m"
  MR_Box mercury__version_array__VA_8)
#line 466 "version_array.m"
{
#line 474 "version_array.m"
  while (MR_TRUE)
#line 474 "version_array.m"
    {
#line 474 "version_array.m"
      /* tailcall optimized into a loop */
#line 474 "version_array.m"
      {
#line 474 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_6 < mercury__version_array__N_7);

#line 474 "version_array.m"
        if (mercury__version_array__succeeded)
#line 471 "version_array.m"
          {
#line 471 "version_array.m"
            MR_Box mercury__version_array__Elem_9;
#line 471 "version_array.m"
            MR_Integer mercury__version_array__V_10_10;
#line 471 "version_array.m"
            MR_Integer mercury__version_array__V_11_11;
#line 472 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box);

#line 296 "version_array.m"
            {
#line 296 "version_array.m"
              mercury__version_array__Elem_9 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_12, mercury__version_array__VA_8, mercury__version_array__I_6);
            }
#line 472 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_array__Pred_5, (MR_Integer) 1)));
#line 472 "version_array.m"
            {
#line 472 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__Pred_5), mercury__version_array__Elem_9);
            }
#line 471 "version_array.m"
            if (mercury__version_array__succeeded)
#line 471 "version_array.m"
              {
#line 473 "version_array.m"
                mercury__version_array__V_11_11 = (MR_Integer) 1;
#line 473 "version_array.m"
                mercury__version_array__V_10_10 = (mercury__version_array__I_6 + mercury__version_array__V_11_11);
#line 473 "version_array.m"
                /* direct tailcall eliminated */
#line 473 "version_array.m"
                {
#line 473 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_6 = mercury__version_array__V_10_10;

#line 473 "version_array.m"
                  mercury__version_array__I_6 = mercury__version_array__I__tmp_copy_6;
#line 473 "version_array.m"
                }
#line 473 "version_array.m"
                continue;
#line 471 "version_array.m"
              }
#line 471 "version_array.m"
          }
#line 474 "version_array.m"
        else
#line 475 "version_array.m"
          mercury__version_array__succeeded = MR_TRUE;
#line 474 "version_array.m"
        return mercury__version_array__succeeded;
#line 474 "version_array.m"
      }
#line 474 "version_array.m"
      break;
#line 474 "version_array.m"
    }
#line 466 "version_array.m"
}

#line 450 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_5(
#line 450 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 450 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 450 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 450 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 450 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 450 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 450 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 450 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 450 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 450 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 450 "version_array.m"
{
#line 457 "version_array.m"
  while (MR_TRUE)
#line 457 "version_array.m"
    {
#line 457 "version_array.m"
      /* tailcall optimized into a loop */
#line 457 "version_array.m"
      {
#line 457 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 457 "version_array.m"
        if (mercury__version_array__succeeded)
#line 455 "version_array.m"
          {
#line 455 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 455 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 455 "version_array.m"
            MR_Integer mercury__version_array__V_24_24;
#line 455 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 455 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 455 "version_array.m"
            if (mercury__version_array__succeeded)
#line 455 "version_array.m"
              {
#line 456 "version_array.m"
                mercury__version_array__V_24_24 = (MR_Integer) 1;
#line 456 "version_array.m"
                mercury__version_array__V_21_21 = (mercury__version_array__I_10 - mercury__version_array__V_24_24);
#line 456 "version_array.m"
                /* direct tailcall eliminated */
#line 456 "version_array.m"
                {
#line 456 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 456 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 456 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 456 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 456 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 456 "version_array.m"
                  mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 456 "version_array.m"
                }
#line 456 "version_array.m"
                continue;
#line 455 "version_array.m"
              }
#line 455 "version_array.m"
          }
#line 457 "version_array.m"
        else
#line 458 "version_array.m"
          {
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 458 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 458 "version_array.m"
          }
#line 457 "version_array.m"
        return mercury__version_array__succeeded;
#line 457 "version_array.m"
      }
#line 457 "version_array.m"
      break;
#line 457 "version_array.m"
    }
#line 450 "version_array.m"
}

#line 448 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_4(
#line 448 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 448 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 448 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 448 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 448 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 448 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 448 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 448 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 448 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 448 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 448 "version_array.m"
{
#line 457 "version_array.m"
  while (MR_TRUE)
#line 457 "version_array.m"
    {
#line 457 "version_array.m"
      /* tailcall optimized into a loop */
#line 457 "version_array.m"
      {
#line 457 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 457 "version_array.m"
        if (mercury__version_array__succeeded)
#line 455 "version_array.m"
          {
#line 455 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 455 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 455 "version_array.m"
            MR_Integer mercury__version_array__V_24_24;
#line 455 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 455 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 455 "version_array.m"
            if (mercury__version_array__succeeded)
#line 455 "version_array.m"
              {
#line 456 "version_array.m"
                mercury__version_array__V_24_24 = (MR_Integer) 1;
#line 456 "version_array.m"
                mercury__version_array__V_21_21 = (mercury__version_array__I_10 - mercury__version_array__V_24_24);
#line 456 "version_array.m"
                /* direct tailcall eliminated */
#line 456 "version_array.m"
                {
#line 456 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 456 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 456 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 456 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 456 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 456 "version_array.m"
                  mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 456 "version_array.m"
                }
#line 456 "version_array.m"
                continue;
#line 455 "version_array.m"
              }
#line 455 "version_array.m"
          }
#line 457 "version_array.m"
        else
#line 458 "version_array.m"
          {
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 458 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 458 "version_array.m"
          }
#line 457 "version_array.m"
        return mercury__version_array__succeeded;
#line 457 "version_array.m"
      }
#line 457 "version_array.m"
      break;
#line 457 "version_array.m"
    }
#line 448 "version_array.m"
}

#line 446 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_3(
#line 446 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 446 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 446 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 446 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 446 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 446 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 446 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 446 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 446 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 446 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 446 "version_array.m"
{
#line 457 "version_array.m"
  while (MR_TRUE)
#line 457 "version_array.m"
    {
#line 457 "version_array.m"
      /* tailcall optimized into a loop */
#line 457 "version_array.m"
      {
#line 457 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 457 "version_array.m"
        if (mercury__version_array__succeeded)
#line 455 "version_array.m"
          {
#line 455 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 455 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 455 "version_array.m"
            MR_Integer mercury__version_array__V_24_24;
#line 455 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 455 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 455 "version_array.m"
            if (mercury__version_array__succeeded)
#line 455 "version_array.m"
              {
#line 456 "version_array.m"
                mercury__version_array__V_24_24 = (MR_Integer) 1;
#line 456 "version_array.m"
                mercury__version_array__V_21_21 = (mercury__version_array__I_10 - mercury__version_array__V_24_24);
#line 456 "version_array.m"
                /* direct tailcall eliminated */
#line 456 "version_array.m"
                {
#line 456 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 456 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 456 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 456 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 456 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 456 "version_array.m"
                  mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 456 "version_array.m"
                }
#line 456 "version_array.m"
                continue;
#line 455 "version_array.m"
              }
#line 455 "version_array.m"
          }
#line 457 "version_array.m"
        else
#line 458 "version_array.m"
          {
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 458 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 458 "version_array.m"
          }
#line 457 "version_array.m"
        return mercury__version_array__succeeded;
#line 457 "version_array.m"
      }
#line 457 "version_array.m"
      break;
#line 457 "version_array.m"
    }
#line 446 "version_array.m"
}

#line 444 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr2_7_p_2(
#line 444 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 444 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 444 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 444 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 444 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 444 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 444 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 444 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 444 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 444 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 444 "version_array.m"
{
#line 457 "version_array.m"
  while (MR_TRUE)
#line 457 "version_array.m"
    {
#line 457 "version_array.m"
      /* tailcall optimized into a loop */
#line 457 "version_array.m"
      {
#line 457 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 457 "version_array.m"
        if (mercury__version_array__succeeded)
#line 455 "version_array.m"
          {
#line 455 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 455 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 455 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 455 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 456 "version_array.m"
            mercury__version_array__V_21_21 = (mercury__version_array__I_10 - (MR_Integer) 1);
#line 456 "version_array.m"
            /* direct tailcall eliminated */
#line 456 "version_array.m"
            {
#line 456 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 456 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 456 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 456 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 456 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 456 "version_array.m"
              mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 456 "version_array.m"
            }
#line 456 "version_array.m"
            continue;
#line 455 "version_array.m"
          }
#line 457 "version_array.m"
        else
#line 458 "version_array.m"
          {
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 458 "version_array.m"
          }
#line 457 "version_array.m"
      }
#line 457 "version_array.m"
      break;
#line 457 "version_array.m"
    }
#line 444 "version_array.m"
}

#line 442 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr2_7_p_1(
#line 442 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 442 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 442 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 442 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 442 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 442 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 442 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 442 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 442 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 442 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 442 "version_array.m"
{
#line 457 "version_array.m"
  while (MR_TRUE)
#line 457 "version_array.m"
    {
#line 457 "version_array.m"
      /* tailcall optimized into a loop */
#line 457 "version_array.m"
      {
#line 457 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 457 "version_array.m"
        if (mercury__version_array__succeeded)
#line 455 "version_array.m"
          {
#line 455 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 455 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 455 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 455 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 456 "version_array.m"
            mercury__version_array__V_21_21 = (mercury__version_array__I_10 - (MR_Integer) 1);
#line 456 "version_array.m"
            /* direct tailcall eliminated */
#line 456 "version_array.m"
            {
#line 456 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 456 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 456 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 456 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 456 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 456 "version_array.m"
              mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 456 "version_array.m"
            }
#line 456 "version_array.m"
            continue;
#line 455 "version_array.m"
          }
#line 457 "version_array.m"
        else
#line 458 "version_array.m"
          {
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 458 "version_array.m"
          }
#line 457 "version_array.m"
      }
#line 457 "version_array.m"
      break;
#line 457 "version_array.m"
    }
#line 442 "version_array.m"
}

#line 440 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr2_7_p_0(
#line 440 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 440 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 440 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 440 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 440 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 440 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 440 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 440 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 440 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 440 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 440 "version_array.m"
{
#line 457 "version_array.m"
  while (MR_TRUE)
#line 457 "version_array.m"
    {
#line 457 "version_array.m"
      /* tailcall optimized into a loop */
#line 457 "version_array.m"
      {
#line 457 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 457 "version_array.m"
        if (mercury__version_array__succeeded)
#line 455 "version_array.m"
          {
#line 455 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 455 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 455 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 455 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 455 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 455 "version_array.m"
            {
#line 455 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 456 "version_array.m"
            mercury__version_array__V_21_21 = (mercury__version_array__I_10 - (MR_Integer) 1);
#line 456 "version_array.m"
            /* direct tailcall eliminated */
#line 456 "version_array.m"
            {
#line 456 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 456 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 456 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 456 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 456 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 456 "version_array.m"
              mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 456 "version_array.m"
            }
#line 456 "version_array.m"
            continue;
#line 455 "version_array.m"
          }
#line 457 "version_array.m"
        else
#line 458 "version_array.m"
          {
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 458 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 458 "version_array.m"
          }
#line 457 "version_array.m"
      }
#line 457 "version_array.m"
      break;
#line 457 "version_array.m"
    }
#line 440 "version_array.m"
}

#line 422 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_5(
#line 422 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 422 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 422 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 422 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 422 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 422 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 422 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 422 "version_array.m"
{
#line 429 "version_array.m"
  while (MR_TRUE)
#line 429 "version_array.m"
    {
#line 429 "version_array.m"
      /* tailcall optimized into a loop */
#line 429 "version_array.m"
      {
#line 429 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 429 "version_array.m"
        if (mercury__version_array__succeeded)
#line 427 "version_array.m"
          {
#line 427 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 427 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 427 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 427 "version_array.m"
            MR_Integer mercury__version_array__V_17_17;
#line 427 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 427 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 427 "version_array.m"
            if (mercury__version_array__succeeded)
#line 427 "version_array.m"
              {
#line 428 "version_array.m"
                mercury__version_array__V_17_17 = (MR_Integer) 1;
#line 428 "version_array.m"
                mercury__version_array__V_15_15 = (mercury__version_array__I_8 - mercury__version_array__V_17_17);
#line 428 "version_array.m"
                /* direct tailcall eliminated */
#line 428 "version_array.m"
                {
#line 428 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 428 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 428 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 428 "version_array.m"
                  mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 428 "version_array.m"
                }
#line 428 "version_array.m"
                continue;
#line 427 "version_array.m"
              }
#line 427 "version_array.m"
          }
#line 429 "version_array.m"
        else
#line 428 "version_array.m"
          {
#line 428 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 428 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 428 "version_array.m"
          }
#line 429 "version_array.m"
        return mercury__version_array__succeeded;
#line 429 "version_array.m"
      }
#line 429 "version_array.m"
      break;
#line 429 "version_array.m"
    }
#line 422 "version_array.m"
}

#line 420 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_4(
#line 420 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 420 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 420 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 420 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 420 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 420 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 420 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 420 "version_array.m"
{
#line 429 "version_array.m"
  while (MR_TRUE)
#line 429 "version_array.m"
    {
#line 429 "version_array.m"
      /* tailcall optimized into a loop */
#line 429 "version_array.m"
      {
#line 429 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 429 "version_array.m"
        if (mercury__version_array__succeeded)
#line 427 "version_array.m"
          {
#line 427 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 427 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 427 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 427 "version_array.m"
            MR_Integer mercury__version_array__V_17_17;
#line 427 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 427 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 427 "version_array.m"
            if (mercury__version_array__succeeded)
#line 427 "version_array.m"
              {
#line 428 "version_array.m"
                mercury__version_array__V_17_17 = (MR_Integer) 1;
#line 428 "version_array.m"
                mercury__version_array__V_15_15 = (mercury__version_array__I_8 - mercury__version_array__V_17_17);
#line 428 "version_array.m"
                /* direct tailcall eliminated */
#line 428 "version_array.m"
                {
#line 428 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 428 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 428 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 428 "version_array.m"
                  mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 428 "version_array.m"
                }
#line 428 "version_array.m"
                continue;
#line 427 "version_array.m"
              }
#line 427 "version_array.m"
          }
#line 429 "version_array.m"
        else
#line 428 "version_array.m"
          {
#line 428 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 428 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 428 "version_array.m"
          }
#line 429 "version_array.m"
        return mercury__version_array__succeeded;
#line 429 "version_array.m"
      }
#line 429 "version_array.m"
      break;
#line 429 "version_array.m"
    }
#line 420 "version_array.m"
}

#line 418 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_3(
#line 418 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 418 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 418 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 418 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 418 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 418 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 418 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 418 "version_array.m"
{
#line 429 "version_array.m"
  while (MR_TRUE)
#line 429 "version_array.m"
    {
#line 429 "version_array.m"
      /* tailcall optimized into a loop */
#line 429 "version_array.m"
      {
#line 429 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 429 "version_array.m"
        if (mercury__version_array__succeeded)
#line 427 "version_array.m"
          {
#line 427 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 427 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 427 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 427 "version_array.m"
            MR_Integer mercury__version_array__V_17_17;
#line 427 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 427 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 427 "version_array.m"
            if (mercury__version_array__succeeded)
#line 427 "version_array.m"
              {
#line 428 "version_array.m"
                mercury__version_array__V_17_17 = (MR_Integer) 1;
#line 428 "version_array.m"
                mercury__version_array__V_15_15 = (mercury__version_array__I_8 - mercury__version_array__V_17_17);
#line 428 "version_array.m"
                /* direct tailcall eliminated */
#line 428 "version_array.m"
                {
#line 428 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 428 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 428 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 428 "version_array.m"
                  mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 428 "version_array.m"
                }
#line 428 "version_array.m"
                continue;
#line 427 "version_array.m"
              }
#line 427 "version_array.m"
          }
#line 429 "version_array.m"
        else
#line 428 "version_array.m"
          {
#line 428 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 428 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 428 "version_array.m"
          }
#line 429 "version_array.m"
        return mercury__version_array__succeeded;
#line 429 "version_array.m"
      }
#line 429 "version_array.m"
      break;
#line 429 "version_array.m"
    }
#line 418 "version_array.m"
}

#line 417 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_2(
#line 417 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 417 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 417 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 417 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 417 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 417 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 417 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 417 "version_array.m"
{
#line 429 "version_array.m"
  while (MR_TRUE)
#line 429 "version_array.m"
    {
#line 429 "version_array.m"
      /* tailcall optimized into a loop */
#line 429 "version_array.m"
      {
#line 429 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 429 "version_array.m"
        if (mercury__version_array__succeeded)
#line 427 "version_array.m"
          {
#line 427 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 427 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 427 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 427 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 427 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 428 "version_array.m"
            mercury__version_array__V_15_15 = (mercury__version_array__I_8 - (MR_Integer) 1);
#line 428 "version_array.m"
            /* direct tailcall eliminated */
#line 428 "version_array.m"
            {
#line 428 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 428 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 428 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 428 "version_array.m"
              mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 428 "version_array.m"
            }
#line 428 "version_array.m"
            continue;
#line 427 "version_array.m"
          }
#line 429 "version_array.m"
        else
#line 428 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 429 "version_array.m"
      }
#line 429 "version_array.m"
      break;
#line 429 "version_array.m"
    }
#line 417 "version_array.m"
}

#line 416 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_1(
#line 416 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 416 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 416 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 416 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 416 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 416 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 416 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 416 "version_array.m"
{
#line 429 "version_array.m"
  while (MR_TRUE)
#line 429 "version_array.m"
    {
#line 429 "version_array.m"
      /* tailcall optimized into a loop */
#line 429 "version_array.m"
      {
#line 429 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 429 "version_array.m"
        if (mercury__version_array__succeeded)
#line 427 "version_array.m"
          {
#line 427 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 427 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 427 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 427 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 427 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 428 "version_array.m"
            mercury__version_array__V_15_15 = (mercury__version_array__I_8 - (MR_Integer) 1);
#line 428 "version_array.m"
            /* direct tailcall eliminated */
#line 428 "version_array.m"
            {
#line 428 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 428 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 428 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 428 "version_array.m"
              mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 428 "version_array.m"
            }
#line 428 "version_array.m"
            continue;
#line 427 "version_array.m"
          }
#line 429 "version_array.m"
        else
#line 428 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 429 "version_array.m"
      }
#line 429 "version_array.m"
      break;
#line 429 "version_array.m"
    }
#line 416 "version_array.m"
}

#line 415 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_0(
#line 415 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 415 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 415 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 415 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 415 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 415 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 415 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 415 "version_array.m"
{
#line 429 "version_array.m"
  while (MR_TRUE)
#line 429 "version_array.m"
    {
#line 429 "version_array.m"
      /* tailcall optimized into a loop */
#line 429 "version_array.m"
      {
#line 429 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 429 "version_array.m"
        if (mercury__version_array__succeeded)
#line 427 "version_array.m"
          {
#line 427 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 427 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 427 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 427 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 427 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 427 "version_array.m"
            {
#line 427 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 428 "version_array.m"
            mercury__version_array__V_15_15 = (mercury__version_array__I_8 - (MR_Integer) 1);
#line 428 "version_array.m"
            /* direct tailcall eliminated */
#line 428 "version_array.m"
            {
#line 428 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 428 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 428 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 428 "version_array.m"
              mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 428 "version_array.m"
            }
#line 428 "version_array.m"
            continue;
#line 427 "version_array.m"
          }
#line 429 "version_array.m"
        else
#line 428 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 429 "version_array.m"
      }
#line 429 "version_array.m"
      break;
#line 429 "version_array.m"
    }
#line 415 "version_array.m"
}

#line 400 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__do_foldr_func_4_f_0(
#line 400 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_15,
#line 400 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_16,
#line 400 "version_array.m"
  MR_Word mercury__version_array__F_6,
#line 400 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 400 "version_array.m"
  MR_Box mercury__version_array__Acc_8,
#line 400 "version_array.m"
  MR_Integer mercury__version_array__Hi_9)
#line 400 "version_array.m"
{
#line 402 "version_array.m"
  while (MR_TRUE)
#line 402 "version_array.m"
    {
#line 402 "version_array.m"
      /* tailcall optimized into a loop */
#line 402 "version_array.m"
      {
#line 402 "version_array.m"
        MR_bool mercury__version_array__succeeded = ((MR_Integer) 0 <= mercury__version_array__Hi_9);
#line 402 "version_array.m"
        MR_Box mercury__version_array__HeadVar__5_5;

#line 402 "version_array.m"
        if (mercury__version_array__succeeded)
#line 404 "version_array.m"
          {
#line 404 "version_array.m"
            MR_Box mercury__version_array__V_11_11;
#line 404 "version_array.m"
            MR_Box mercury__version_array__V_12_12;
#line 404 "version_array.m"
            MR_Integer mercury__version_array__V_13_13;
#line 404 "version_array.m"
            MR_Box MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box);

#line 404 "version_array.m"
            {
#line 404 "version_array.m"
              mercury__version_array__V_12_12 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_15, mercury__version_array__VA_7, mercury__version_array__Hi_9);
            }
#line 404 "version_array.m"
            mercury__version_array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_array__F_6, (MR_Integer) 1)));
#line 404 "version_array.m"
            {
#line 404 "version_array.m"
              mercury__version_array__V_11_11 = mercury__version_array__func_0(((MR_Box) mercury__version_array__F_6), mercury__version_array__V_12_12, mercury__version_array__Acc_8);
            }
#line 404 "version_array.m"
            mercury__version_array__V_13_13 = (mercury__version_array__Hi_9 - (MR_Integer) 1);
#line 404 "version_array.m"
            /* direct tailcall eliminated */
#line 404 "version_array.m"
            {
#line 404 "version_array.m"
              MR_Box mercury__version_array__Acc__tmp_copy_8 = mercury__version_array__V_11_11;
#line 404 "version_array.m"
              MR_Integer mercury__version_array__Hi__tmp_copy_9 = mercury__version_array__V_13_13;

#line 404 "version_array.m"
              mercury__version_array__Hi_9 = mercury__version_array__Hi__tmp_copy_9;
#line 404 "version_array.m"
              mercury__version_array__Acc_8 = mercury__version_array__Acc__tmp_copy_8;
#line 404 "version_array.m"
            }
#line 404 "version_array.m"
            continue;
#line 404 "version_array.m"
          }
#line 402 "version_array.m"
        else
#line 402 "version_array.m"
          mercury__version_array__HeadVar__5_5 = mercury__version_array__Acc_8;
#line 402 "version_array.m"
        return mercury__version_array__HeadVar__5_5;
#line 402 "version_array.m"
      }
#line 402 "version_array.m"
      break;
#line 402 "version_array.m"
    }
#line 400 "version_array.m"
}

#line 385 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_5(
#line 385 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 385 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 385 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 385 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 385 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 385 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 385 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 385 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 385 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 385 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 385 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 385 "version_array.m"
{
#line 392 "version_array.m"
  while (MR_TRUE)
#line 392 "version_array.m"
    {
#line 392 "version_array.m"
      /* tailcall optimized into a loop */
#line 392 "version_array.m"
      {
#line 392 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 392 "version_array.m"
        if (mercury__version_array__succeeded)
#line 390 "version_array.m"
          {
#line 390 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 390 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 390 "version_array.m"
            MR_Integer mercury__version_array__V_25_25;
#line 390 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 390 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 390 "version_array.m"
            if (mercury__version_array__succeeded)
#line 390 "version_array.m"
              {
#line 391 "version_array.m"
                mercury__version_array__V_25_25 = (MR_Integer) 1;
#line 391 "version_array.m"
                mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + mercury__version_array__V_25_25);
#line 391 "version_array.m"
                /* direct tailcall eliminated */
#line 391 "version_array.m"
                {
#line 391 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 391 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 391 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 391 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 391 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 391 "version_array.m"
                  mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 391 "version_array.m"
                }
#line 391 "version_array.m"
                continue;
#line 390 "version_array.m"
              }
#line 390 "version_array.m"
          }
#line 392 "version_array.m"
        else
#line 393 "version_array.m"
          {
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 393 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 393 "version_array.m"
          }
#line 392 "version_array.m"
        return mercury__version_array__succeeded;
#line 392 "version_array.m"
      }
#line 392 "version_array.m"
      break;
#line 392 "version_array.m"
    }
#line 385 "version_array.m"
}

#line 383 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_4(
#line 383 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 383 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 383 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 383 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 383 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 383 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 383 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 383 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 383 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 383 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 383 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 383 "version_array.m"
{
#line 392 "version_array.m"
  while (MR_TRUE)
#line 392 "version_array.m"
    {
#line 392 "version_array.m"
      /* tailcall optimized into a loop */
#line 392 "version_array.m"
      {
#line 392 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 392 "version_array.m"
        if (mercury__version_array__succeeded)
#line 390 "version_array.m"
          {
#line 390 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 390 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 390 "version_array.m"
            MR_Integer mercury__version_array__V_25_25;
#line 390 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 390 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 390 "version_array.m"
            if (mercury__version_array__succeeded)
#line 390 "version_array.m"
              {
#line 391 "version_array.m"
                mercury__version_array__V_25_25 = (MR_Integer) 1;
#line 391 "version_array.m"
                mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + mercury__version_array__V_25_25);
#line 391 "version_array.m"
                /* direct tailcall eliminated */
#line 391 "version_array.m"
                {
#line 391 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 391 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 391 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 391 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 391 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 391 "version_array.m"
                  mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 391 "version_array.m"
                }
#line 391 "version_array.m"
                continue;
#line 390 "version_array.m"
              }
#line 390 "version_array.m"
          }
#line 392 "version_array.m"
        else
#line 393 "version_array.m"
          {
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 393 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 393 "version_array.m"
          }
#line 392 "version_array.m"
        return mercury__version_array__succeeded;
#line 392 "version_array.m"
      }
#line 392 "version_array.m"
      break;
#line 392 "version_array.m"
    }
#line 383 "version_array.m"
}

#line 381 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_3(
#line 381 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 381 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 381 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 381 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 381 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 381 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 381 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 381 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 381 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 381 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 381 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 381 "version_array.m"
{
#line 392 "version_array.m"
  while (MR_TRUE)
#line 392 "version_array.m"
    {
#line 392 "version_array.m"
      /* tailcall optimized into a loop */
#line 392 "version_array.m"
      {
#line 392 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 392 "version_array.m"
        if (mercury__version_array__succeeded)
#line 390 "version_array.m"
          {
#line 390 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 390 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 390 "version_array.m"
            MR_Integer mercury__version_array__V_25_25;
#line 390 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 390 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 390 "version_array.m"
            if (mercury__version_array__succeeded)
#line 390 "version_array.m"
              {
#line 391 "version_array.m"
                mercury__version_array__V_25_25 = (MR_Integer) 1;
#line 391 "version_array.m"
                mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + mercury__version_array__V_25_25);
#line 391 "version_array.m"
                /* direct tailcall eliminated */
#line 391 "version_array.m"
                {
#line 391 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 391 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 391 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 391 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 391 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 391 "version_array.m"
                  mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 391 "version_array.m"
                }
#line 391 "version_array.m"
                continue;
#line 390 "version_array.m"
              }
#line 390 "version_array.m"
          }
#line 392 "version_array.m"
        else
#line 393 "version_array.m"
          {
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 393 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 393 "version_array.m"
          }
#line 392 "version_array.m"
        return mercury__version_array__succeeded;
#line 392 "version_array.m"
      }
#line 392 "version_array.m"
      break;
#line 392 "version_array.m"
    }
#line 381 "version_array.m"
}

#line 379 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl2_8_p_2(
#line 379 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 379 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 379 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 379 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 379 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 379 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 379 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 379 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 379 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 379 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 379 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 379 "version_array.m"
{
#line 392 "version_array.m"
  while (MR_TRUE)
#line 392 "version_array.m"
    {
#line 392 "version_array.m"
      /* tailcall optimized into a loop */
#line 392 "version_array.m"
      {
#line 392 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 392 "version_array.m"
        if (mercury__version_array__succeeded)
#line 390 "version_array.m"
          {
#line 390 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 390 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 390 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 390 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 391 "version_array.m"
            mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + (MR_Integer) 1);
#line 391 "version_array.m"
            /* direct tailcall eliminated */
#line 391 "version_array.m"
            {
#line 391 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 391 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 391 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 391 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 391 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 391 "version_array.m"
              mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 391 "version_array.m"
            }
#line 391 "version_array.m"
            continue;
#line 390 "version_array.m"
          }
#line 392 "version_array.m"
        else
#line 393 "version_array.m"
          {
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 393 "version_array.m"
          }
#line 392 "version_array.m"
      }
#line 392 "version_array.m"
      break;
#line 392 "version_array.m"
    }
#line 379 "version_array.m"
}

#line 377 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl2_8_p_1(
#line 377 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 377 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 377 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 377 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 377 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 377 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 377 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 377 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 377 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 377 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 377 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 377 "version_array.m"
{
#line 392 "version_array.m"
  while (MR_TRUE)
#line 392 "version_array.m"
    {
#line 392 "version_array.m"
      /* tailcall optimized into a loop */
#line 392 "version_array.m"
      {
#line 392 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 392 "version_array.m"
        if (mercury__version_array__succeeded)
#line 390 "version_array.m"
          {
#line 390 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 390 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 390 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 390 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 391 "version_array.m"
            mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + (MR_Integer) 1);
#line 391 "version_array.m"
            /* direct tailcall eliminated */
#line 391 "version_array.m"
            {
#line 391 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 391 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 391 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 391 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 391 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 391 "version_array.m"
              mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 391 "version_array.m"
            }
#line 391 "version_array.m"
            continue;
#line 390 "version_array.m"
          }
#line 392 "version_array.m"
        else
#line 393 "version_array.m"
          {
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 393 "version_array.m"
          }
#line 392 "version_array.m"
      }
#line 392 "version_array.m"
      break;
#line 392 "version_array.m"
    }
#line 377 "version_array.m"
}

#line 375 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl2_8_p_0(
#line 375 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 375 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 375 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 375 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 375 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 375 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 375 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 375 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 375 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 375 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 375 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 375 "version_array.m"
{
#line 392 "version_array.m"
  while (MR_TRUE)
#line 392 "version_array.m"
    {
#line 392 "version_array.m"
      /* tailcall optimized into a loop */
#line 392 "version_array.m"
      {
#line 392 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 392 "version_array.m"
        if (mercury__version_array__succeeded)
#line 390 "version_array.m"
          {
#line 390 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 390 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 390 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 390 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 390 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 390 "version_array.m"
            {
#line 390 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 391 "version_array.m"
            mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + (MR_Integer) 1);
#line 391 "version_array.m"
            /* direct tailcall eliminated */
#line 391 "version_array.m"
            {
#line 391 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 391 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 391 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 391 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 391 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 391 "version_array.m"
              mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 391 "version_array.m"
            }
#line 391 "version_array.m"
            continue;
#line 390 "version_array.m"
          }
#line 392 "version_array.m"
        else
#line 393 "version_array.m"
          {
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 393 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 393 "version_array.m"
          }
#line 392 "version_array.m"
      }
#line 392 "version_array.m"
      break;
#line 392 "version_array.m"
    }
#line 375 "version_array.m"
}

#line 357 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_5(
#line 357 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 357 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 357 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 357 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 357 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 357 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 357 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 357 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 357 "version_array.m"
{
#line 364 "version_array.m"
  while (MR_TRUE)
#line 364 "version_array.m"
    {
#line 364 "version_array.m"
      /* tailcall optimized into a loop */
#line 364 "version_array.m"
      {
#line 364 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 364 "version_array.m"
        if (mercury__version_array__succeeded)
#line 362 "version_array.m"
          {
#line 362 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 362 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 362 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 362 "version_array.m"
            MR_Integer mercury__version_array__V_18_18;
#line 362 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 362 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 362 "version_array.m"
            if (mercury__version_array__succeeded)
#line 362 "version_array.m"
              {
#line 363 "version_array.m"
                mercury__version_array__V_18_18 = (MR_Integer) 1;
#line 363 "version_array.m"
                mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + mercury__version_array__V_18_18);
#line 363 "version_array.m"
                /* direct tailcall eliminated */
#line 363 "version_array.m"
                {
#line 363 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 363 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 363 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 363 "version_array.m"
                  mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 363 "version_array.m"
                }
#line 363 "version_array.m"
                continue;
#line 362 "version_array.m"
              }
#line 362 "version_array.m"
          }
#line 364 "version_array.m"
        else
#line 363 "version_array.m"
          {
#line 363 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 363 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 363 "version_array.m"
          }
#line 364 "version_array.m"
        return mercury__version_array__succeeded;
#line 364 "version_array.m"
      }
#line 364 "version_array.m"
      break;
#line 364 "version_array.m"
    }
#line 357 "version_array.m"
}

#line 355 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_4(
#line 355 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 355 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 355 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 355 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 355 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 355 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 355 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 355 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 355 "version_array.m"
{
#line 364 "version_array.m"
  while (MR_TRUE)
#line 364 "version_array.m"
    {
#line 364 "version_array.m"
      /* tailcall optimized into a loop */
#line 364 "version_array.m"
      {
#line 364 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 364 "version_array.m"
        if (mercury__version_array__succeeded)
#line 362 "version_array.m"
          {
#line 362 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 362 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 362 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 362 "version_array.m"
            MR_Integer mercury__version_array__V_18_18;
#line 362 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 362 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 362 "version_array.m"
            if (mercury__version_array__succeeded)
#line 362 "version_array.m"
              {
#line 363 "version_array.m"
                mercury__version_array__V_18_18 = (MR_Integer) 1;
#line 363 "version_array.m"
                mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + mercury__version_array__V_18_18);
#line 363 "version_array.m"
                /* direct tailcall eliminated */
#line 363 "version_array.m"
                {
#line 363 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 363 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 363 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 363 "version_array.m"
                  mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 363 "version_array.m"
                }
#line 363 "version_array.m"
                continue;
#line 362 "version_array.m"
              }
#line 362 "version_array.m"
          }
#line 364 "version_array.m"
        else
#line 363 "version_array.m"
          {
#line 363 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 363 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 363 "version_array.m"
          }
#line 364 "version_array.m"
        return mercury__version_array__succeeded;
#line 364 "version_array.m"
      }
#line 364 "version_array.m"
      break;
#line 364 "version_array.m"
    }
#line 355 "version_array.m"
}

#line 353 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_3(
#line 353 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 353 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 353 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 353 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 353 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 353 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 353 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 353 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 353 "version_array.m"
{
#line 364 "version_array.m"
  while (MR_TRUE)
#line 364 "version_array.m"
    {
#line 364 "version_array.m"
      /* tailcall optimized into a loop */
#line 364 "version_array.m"
      {
#line 364 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 364 "version_array.m"
        if (mercury__version_array__succeeded)
#line 362 "version_array.m"
          {
#line 362 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 362 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 362 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 362 "version_array.m"
            MR_Integer mercury__version_array__V_18_18;
#line 362 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 362 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 362 "version_array.m"
            if (mercury__version_array__succeeded)
#line 362 "version_array.m"
              {
#line 363 "version_array.m"
                mercury__version_array__V_18_18 = (MR_Integer) 1;
#line 363 "version_array.m"
                mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + mercury__version_array__V_18_18);
#line 363 "version_array.m"
                /* direct tailcall eliminated */
#line 363 "version_array.m"
                {
#line 363 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 363 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 363 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 363 "version_array.m"
                  mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 363 "version_array.m"
                }
#line 363 "version_array.m"
                continue;
#line 362 "version_array.m"
              }
#line 362 "version_array.m"
          }
#line 364 "version_array.m"
        else
#line 363 "version_array.m"
          {
#line 363 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 363 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 363 "version_array.m"
          }
#line 364 "version_array.m"
        return mercury__version_array__succeeded;
#line 364 "version_array.m"
      }
#line 364 "version_array.m"
      break;
#line 364 "version_array.m"
    }
#line 353 "version_array.m"
}

#line 352 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_2(
#line 352 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 352 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 352 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 352 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 352 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 352 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 352 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 352 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 352 "version_array.m"
{
#line 364 "version_array.m"
  while (MR_TRUE)
#line 364 "version_array.m"
    {
#line 364 "version_array.m"
      /* tailcall optimized into a loop */
#line 364 "version_array.m"
      {
#line 364 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 364 "version_array.m"
        if (mercury__version_array__succeeded)
#line 362 "version_array.m"
          {
#line 362 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 362 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 362 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 362 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 362 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 363 "version_array.m"
            mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + (MR_Integer) 1);
#line 363 "version_array.m"
            /* direct tailcall eliminated */
#line 363 "version_array.m"
            {
#line 363 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 363 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 363 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 363 "version_array.m"
              mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 363 "version_array.m"
            }
#line 363 "version_array.m"
            continue;
#line 362 "version_array.m"
          }
#line 364 "version_array.m"
        else
#line 363 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 364 "version_array.m"
      }
#line 364 "version_array.m"
      break;
#line 364 "version_array.m"
    }
#line 352 "version_array.m"
}

#line 351 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_1(
#line 351 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 351 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 351 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 351 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 351 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 351 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 351 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 351 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 351 "version_array.m"
{
#line 364 "version_array.m"
  while (MR_TRUE)
#line 364 "version_array.m"
    {
#line 364 "version_array.m"
      /* tailcall optimized into a loop */
#line 364 "version_array.m"
      {
#line 364 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 364 "version_array.m"
        if (mercury__version_array__succeeded)
#line 362 "version_array.m"
          {
#line 362 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 362 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 362 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 362 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 362 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 363 "version_array.m"
            mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + (MR_Integer) 1);
#line 363 "version_array.m"
            /* direct tailcall eliminated */
#line 363 "version_array.m"
            {
#line 363 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 363 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 363 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 363 "version_array.m"
              mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 363 "version_array.m"
            }
#line 363 "version_array.m"
            continue;
#line 362 "version_array.m"
          }
#line 364 "version_array.m"
        else
#line 363 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 364 "version_array.m"
      }
#line 364 "version_array.m"
      break;
#line 364 "version_array.m"
    }
#line 351 "version_array.m"
}

#line 350 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_0(
#line 350 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 350 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 350 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 350 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 350 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 350 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 350 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 350 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 350 "version_array.m"
{
#line 364 "version_array.m"
  while (MR_TRUE)
#line 364 "version_array.m"
    {
#line 364 "version_array.m"
      /* tailcall optimized into a loop */
#line 364 "version_array.m"
      {
#line 364 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 364 "version_array.m"
        if (mercury__version_array__succeeded)
#line 362 "version_array.m"
          {
#line 362 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 362 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 362 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 362 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 362 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 362 "version_array.m"
            {
#line 362 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 363 "version_array.m"
            mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + (MR_Integer) 1);
#line 363 "version_array.m"
            /* direct tailcall eliminated */
#line 363 "version_array.m"
            {
#line 363 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 363 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 363 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 363 "version_array.m"
              mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 363 "version_array.m"
            }
#line 363 "version_array.m"
            continue;
#line 362 "version_array.m"
          }
#line 364 "version_array.m"
        else
#line 363 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 364 "version_array.m"
      }
#line 364 "version_array.m"
      break;
#line 364 "version_array.m"
    }
#line 350 "version_array.m"
}

#line 335 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__do_foldl_func_5_f_0(
#line 335 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_16,
#line 335 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_17,
#line 335 "version_array.m"
  MR_Word mercury__version_array__F_7,
#line 335 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 335 "version_array.m"
  MR_Box mercury__version_array__Acc_9,
#line 335 "version_array.m"
  MR_Integer mercury__version_array__Lo_10,
#line 335 "version_array.m"
  MR_Integer mercury__version_array__Hi_11)
#line 335 "version_array.m"
{
#line 337 "version_array.m"
  while (MR_TRUE)
#line 337 "version_array.m"
    {
#line 337 "version_array.m"
      /* tailcall optimized into a loop */
#line 337 "version_array.m"
      {
#line 337 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_10 < mercury__version_array__Hi_11);
#line 337 "version_array.m"
        MR_Box mercury__version_array__HeadVar__6_6;

#line 337 "version_array.m"
        if (mercury__version_array__succeeded)
#line 339 "version_array.m"
          {
#line 339 "version_array.m"
            MR_Box mercury__version_array__V_12_12;
#line 339 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 339 "version_array.m"
            MR_Integer mercury__version_array__V_14_14;
#line 339 "version_array.m"
            MR_Box MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box);

#line 339 "version_array.m"
            {
#line 339 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_16, mercury__version_array__VA_8, mercury__version_array__Lo_10);
            }
#line 339 "version_array.m"
            mercury__version_array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_array__F_7, (MR_Integer) 1)));
#line 339 "version_array.m"
            {
#line 339 "version_array.m"
              mercury__version_array__V_12_12 = mercury__version_array__func_0(((MR_Box) mercury__version_array__F_7), mercury__version_array__V_13_13, mercury__version_array__Acc_9);
            }
#line 339 "version_array.m"
            mercury__version_array__V_14_14 = (mercury__version_array__Lo_10 + (MR_Integer) 1);
#line 339 "version_array.m"
            /* direct tailcall eliminated */
#line 339 "version_array.m"
            {
#line 339 "version_array.m"
              MR_Box mercury__version_array__Acc__tmp_copy_9 = mercury__version_array__V_12_12;
#line 339 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_10 = mercury__version_array__V_14_14;

#line 339 "version_array.m"
              mercury__version_array__Lo_10 = mercury__version_array__Lo__tmp_copy_10;
#line 339 "version_array.m"
              mercury__version_array__Acc_9 = mercury__version_array__Acc__tmp_copy_9;
#line 339 "version_array.m"
            }
#line 339 "version_array.m"
            continue;
#line 339 "version_array.m"
          }
#line 337 "version_array.m"
        else
#line 337 "version_array.m"
          mercury__version_array__HeadVar__6_6 = mercury__version_array__Acc_9;
#line 337 "version_array.m"
        return mercury__version_array__HeadVar__6_6;
#line 337 "version_array.m"
      }
#line 337 "version_array.m"
      break;
#line 337 "version_array.m"
    }
#line 335 "version_array.m"
}

#line 274 "version_array.m"
static void MR_CALL 
mercury__version_array__version_array_2_4_p_0(
#line 274 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_19,
#line 274 "version_array.m"
  MR_Integer mercury__version_array__I_1,
#line 274 "version_array.m"
  MR_Word mercury__version_array__HeadVar__2_2,
#line 274 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_VA_0_3,
#line 274 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_VA_4)
#line 274 "version_array.m"
{
#line 277 "version_array.m"
  while (MR_TRUE)
#line 277 "version_array.m"
    {
#line 277 "version_array.m"
      /* tailcall optimized into a loop */
#line 277 "version_array.m"
      {
#line 277 "version_array.m"
        MR_bool mercury__version_array__succeeded;

#line 277 "version_array.m"
        if ((mercury__version_array__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_VA_4 = mercury__version_array__STATE_VARIABLE_VA_0_3;
#line 277 "version_array.m"
        else
#line 278 "version_array.m"
          {
#line 278 "version_array.m"
            MR_Box mercury__version_array__X_10 = (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__2_2, (MR_Integer) 0));
#line 278 "version_array.m"
            MR_Word mercury__version_array__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__2_2, (MR_Integer) 1)));
#line 278 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_VA_15_15;
#line 278 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;

#line 279 "version_array.m"
            {
#line 279 "version_array.m"
              mercury__version_array__set_4_p_0(mercury__version_array__TypeInfo_for_T_19, mercury__version_array__I_1, mercury__version_array__X_10, mercury__version_array__STATE_VARIABLE_VA_0_3, &mercury__version_array__STATE_VARIABLE_VA_15_15);
            }
#line 280 "version_array.m"
            mercury__version_array__V_16_16 = (mercury__version_array__I_1 + (MR_Integer) 1);
#line 280 "version_array.m"
            /* direct tailcall eliminated */
#line 280 "version_array.m"
            {
#line 280 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_1 = mercury__version_array__V_16_16;
#line 280 "version_array.m"
              MR_Word mercury__version_array__HeadVar__2__tmp_copy_2 = mercury__version_array__Xs_11;
#line 280 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_VA_0__tmp_copy_3 = mercury__version_array__STATE_VARIABLE_VA_15_15;

#line 280 "version_array.m"
              mercury__version_array__STATE_VARIABLE_VA_0_3 = mercury__version_array__STATE_VARIABLE_VA_0__tmp_copy_3;
#line 280 "version_array.m"
              mercury__version_array__HeadVar__2_2 = mercury__version_array__HeadVar__2__tmp_copy_2;
#line 280 "version_array.m"
              mercury__version_array__I_1 = mercury__version_array__I__tmp_copy_1;
#line 280 "version_array.m"
            }
#line 280 "version_array.m"
            continue;
#line 278 "version_array.m"
          }
#line 277 "version_array.m"
      }
#line 277 "version_array.m"
      break;
#line 277 "version_array.m"
    }
#line 274 "version_array.m"
}

#line 2050 "version_array.m"
static MR_Box MR_CALL 
mercury__version_array__version_array_to_doc_1_f_0_1(
#line 2050 "version_array.m"
  MR_Box mercury__version_array__closure_arg)
#line 2050 "version_array.m"
{
#line 2050 "version_array.m"
  {
#line 2050 "version_array.m"
    MR_Box mercury__version_array__wrapper_arg_1;
#line 2050 "version_array.m"
    MR_Box mercury__version_array__closure = mercury__version_array__closure_arg;
#line 2050 "version_array.m"
    MR_Word mercury__version_array__conv0_HeadVar__4_24;

#line 2050 "version_array.m"
    {
#line 2050 "version_array.m"
      mercury__version_array__conv0_HeadVar__4_24 = mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__2050__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 4))), ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 5))));
    }
#line 2050 "version_array.m"
    mercury__version_array__wrapper_arg_1 = ((MR_Box) (mercury__version_array__conv0_HeadVar__4_24));
#line 2050 "version_array.m"
    return mercury__version_array__wrapper_arg_1;
#line 2050 "version_array.m"
  }
#line 2050 "version_array.m"
}

#line 250 "version_array.m"
MR_Word MR_CALL 
mercury__version_array__version_array_to_doc_1_f_0(
#line 250 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_14,
#line 250 "version_array.m"
  MR_Box mercury__version_array__A_3)
#line 250 "version_array.m"
{
#line 2034 "version_array.m"
  {
#line 2034 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__HeadVar__2_2;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_4_4;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[1]);
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_7_7;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_8_8;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_10_10;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_11_11;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_13_13;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_6_65;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_7_66;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_9_67;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_8_68;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_10_69;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_11_70;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_12_71;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_14_72;
#line 2034 "version_array.m"
    MR_Word mercury__version_array__V_13_73;
#line 2040 "version_array.m"
    MR_Integer mercury__version_array__V_17_17;
#line 2040 "version_array.m"
    MR_Integer mercury__version_array__V_41_41;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_74;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__version_array_to_doc_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__A_3 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 5603 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_41_41  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_17_17 = (mercury__version_array__V_41_41 - (MR_Integer) 1);
#line 2040 "version_array.m"
    mercury__version_array__succeeded = ((MR_Integer) 0 > mercury__version_array__V_17_17);
#line 2039 "version_array.m"
    if (mercury__version_array__succeeded)
#line 2041 "version_array.m"
      {
#line 2041 "version_array.m"
        mercury__version_array__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
#line 2041 "version_array.m"
      }
#line 2039 "version_array.m"
    else
#line 2043 "version_array.m"
      {
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_19_19;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_20_20;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_21_21;
#line 2043 "version_array.m"
        MR_Box mercury__version_array__V_22_22;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_23_23;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_24_24;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_32_32;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_33_33;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_34_34;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_38_38;
#line 2043 "version_array.m"
        MR_Word mercury__version_array__V_4_44;
#line 2045 "version_array.m"
        MR_Integer mercury__version_array__V_39_39;
#line 2045 "version_array.m"
        MR_Integer mercury__version_array__V_48_48;
#line 779 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_75;

#line 2044 "version_array.m"
        {
#line 2044 "version_array.m"
          mercury__version_array__V_22_22 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_14, mercury__version_array__A_3, (MR_Integer) 0);
        }
#line 8 "univ.opt"
        {
#line 8 "univ.opt"
          mercury__univ__type_to_univ_2_p_1(mercury__version_array__TypeInfo_for_T_14, mercury__version_array__V_22_22, &mercury__version_array__V_4_44);
        }
#line 105 "pretty_printer.opt"
        {
#line 105 "pretty_printer.opt"
          mercury__version_array__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "pretty_printer.opt"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 105 "pretty_printer.opt"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_21_21, 1) = ((MR_Box) (mercury__version_array__V_4_44));
#line 105 "pretty_printer.opt"
        }
#line 2044 "version_array.m"
        {
#line 2044 "version_array.m"
          mercury__version_array__V_20_20 = mercury__pretty_printer__format_arg_1_f_0(mercury__version_array__V_21_21);
        }
#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__version_array_to_doc_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__A_3 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 5693 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_48_48  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
        mercury__version_array__V_39_39 = (mercury__version_array__V_48_48 - (MR_Integer) 1);
#line 2045 "version_array.m"
        mercury__version_array__succeeded = ((MR_Integer) 0 == mercury__version_array__V_39_39);
#line 2049 "version_array.m"
        if (mercury__version_array__succeeded)
#line 2046 "version_array.m"
          {
#line 2046 "version_array.m"
            mercury__version_array__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
#line 2046 "version_array.m"
          }
#line 2049 "version_array.m"
        else
#line 2048 "version_array.m"
          {
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[1]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_4_51 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[6]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_5_52 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[2]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_7_53 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[5]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_6_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_8_55 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[3]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_9_56 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[4]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_10_57 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[3]);
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_12_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2048 "version_array.m"
            MR_Word mercury__version_array__V_11_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

#line 95 "pretty_printer.opt"
            mercury__version_array__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[4]);
#line 2048 "version_array.m"
          }
#line 2050 "version_array.m"
        {
#line 2050 "version_array.m"
          mercury__version_array__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 0) = ((MR_Box) (&mercury__version_array_scalar_common_7[0]));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 1) = ((MR_Box) (mercury__version_array__version_array_to_doc_1_f_0_1));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 3) = ((MR_Box) (mercury__version_array__TypeInfo_for_T_14));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 4) = ((MR_Box) ((MR_Integer) 0));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 5) = ((MR_Box) (mercury__version_array__A_3));
#line 2050 "version_array.m"
        }
#line 2050 "version_array.m"
        {
#line 2050 "version_array.m"
          mercury__version_array__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2050 "version_array.m"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_33_33, 1) = ((MR_Box) (mercury__version_array__V_34_34));
#line 2050 "version_array.m"
        }
#line 2051 "version_array.m"
        mercury__version_array__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2051 "version_array.m"
        {
#line 2051 "version_array.m"
          mercury__version_array__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_32_32, 0) = ((MR_Box) (mercury__version_array__V_33_33));
#line 2051 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_32_32, 1) = ((MR_Box) (mercury__version_array__V_38_38));
#line 2051 "version_array.m"
        }
#line 2049 "version_array.m"
        {
#line 2049 "version_array.m"
          mercury__version_array__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_23_23, 0) = ((MR_Box) (mercury__version_array__V_24_24));
#line 2049 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_23_23, 1) = ((MR_Box) (mercury__version_array__V_32_32));
#line 2049 "version_array.m"
        }
#line 2044 "version_array.m"
        {
#line 2044 "version_array.m"
          mercury__version_array__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2044 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_19_19, 0) = ((MR_Box) (mercury__version_array__V_20_20));
#line 2044 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_19_19, 1) = ((MR_Box) (mercury__version_array__V_23_23));
#line 2044 "version_array.m"
        }
#line 2043 "version_array.m"
        {
#line 2043 "version_array.m"
          mercury__version_array__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2043 "version_array.m"
          MR_hl_field(MR_mktag(2), mercury__version_array__V_8_8, 0) = ((MR_Box) (mercury__version_array__V_19_19));
#line 2043 "version_array.m"
        }
#line 2043 "version_array.m"
      }
#line 2035 "version_array.m"
    mercury__version_array__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[5]);
#line 2035 "version_array.m"
    mercury__version_array__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2035 "version_array.m"
    mercury__version_array__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[7]);
#line 2035 "version_array.m"
    {
#line 2035 "version_array.m"
      mercury__version_array__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "version_array.m"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_7_7, 0) = ((MR_Box) (mercury__version_array__V_8_8));
#line 2035 "version_array.m"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_7_7, 1) = ((MR_Box) (mercury__version_array__V_10_10));
#line 2035 "version_array.m"
    }
#line 2035 "version_array.m"
    {
#line 2035 "version_array.m"
      mercury__version_array__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "version_array.m"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_4_4, 0) = ((MR_Box) (mercury__version_array__V_5_5));
#line 2035 "version_array.m"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_4_4, 1) = ((MR_Box) (mercury__version_array__V_7_7));
#line 2035 "version_array.m"
    }
#line 85 "pretty_printer.opt"
    mercury__version_array__V_8_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[6]);
#line 84 "pretty_printer.opt"
    mercury__version_array__V_7_66 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[8]);
#line 87 "pretty_printer.opt"
    {
#line 87 "pretty_printer.opt"
      mercury__version_array__V_10_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 87 "pretty_printer.opt"
      MR_hl_field(MR_mktag(2), mercury__version_array__V_10_69, 0) = ((MR_Box) (mercury__version_array__V_4_4));
#line 87 "pretty_printer.opt"
    }
#line 90 "pretty_printer.opt"
    mercury__version_array__V_13_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 89 "pretty_printer.opt"
    mercury__version_array__V_12_71 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[9]);
#line 91 "pretty_printer.opt"
    mercury__version_array__V_14_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 88 "pretty_printer.opt"
    mercury__version_array__V_11_70 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[10]);
#line 86 "pretty_printer.opt"
    {
#line 86 "pretty_printer.opt"
      mercury__version_array__V_9_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 86 "pretty_printer.opt"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_9_67, 0) = ((MR_Box) (mercury__version_array__V_10_69));
#line 86 "pretty_printer.opt"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_9_67, 1) = ((MR_Box) (mercury__version_array__V_11_70));
#line 86 "pretty_printer.opt"
    }
#line 83 "pretty_printer.opt"
    {
#line 83 "pretty_printer.opt"
      mercury__version_array__V_6_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 83 "pretty_printer.opt"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_6_65, 0) = ((MR_Box) (mercury__version_array__V_7_66));
#line 83 "pretty_printer.opt"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_6_65, 1) = ((MR_Box) (mercury__version_array__V_9_67));
#line 83 "pretty_printer.opt"
    }
#line 82 "pretty_printer.opt"
    {
#line 82 "pretty_printer.opt"
      mercury__version_array__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 82 "pretty_printer.opt"
      MR_hl_field(MR_mktag(2), mercury__version_array__HeadVar__2_2, 0) = ((MR_Box) (mercury__version_array__V_6_65));
#line 82 "pretty_printer.opt"
    }
#line 2034 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 2034 "version_array.m"
  }
#line 250 "version_array.m"
}

#line 246 "version_array.m"
void MR_CALL 
mercury__version_array__unsafe_rewind_2_p_0(
#line 246 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 246 "version_array.m"
  MR_Box mercury__version_array__VA_3,
#line 246 "version_array.m"
  MR_Box * mercury__version_array__HeadVar__2_2)
#line 246 "version_array.m"
{
#line 883 "version_array.m"
  {
#line 883 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 883 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_5;

#line 887 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__unsafe_rewind_2_p_0

	struct ML_va * VA0;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA0);
		{
#line 887 "version_array.m"

    VA = ML_va_rewind_dolock(VA0);

#line 5923 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, *mercury__version_array__HeadVar__2_2 );
#line 887 "version_array.m"
}
#line 883 "version_array.m"
  }
#line 246 "version_array.m"
}

#line 245 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__unsafe_rewind_1_f_0(
#line 245 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_3,
#line 245 "version_array.m"
  MR_Box mercury__version_array__HeadVar__1_1)
#line 245 "version_array.m"
{
#line 883 "version_array.m"
  {
#line 883 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 883 "version_array.m"
    MR_Box mercury__version_array__HeadVar__2_2;
#line 883 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_4;

#line 887 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__unsafe_rewind_1_f_0

	struct ML_va * VA0;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__HeadVar__1_1 , VA0);
		{
#line 887 "version_array.m"

    VA = ML_va_rewind_dolock(VA0);

#line 5966 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__2_2 );
#line 887 "version_array.m"
}
#line 883 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 883 "version_array.m"
  }
#line 245 "version_array.m"
}

#line 237 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__copy_1_f_0(
#line 237 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_8,
#line 237 "version_array.m"
  MR_Box mercury__version_array__VA_3)
#line 237 "version_array.m"
{
#line 318 "version_array.m"
  {
#line 318 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 318 "version_array.m"
    MR_Box mercury__version_array__HeadVar__2_2;
#line 319 "version_array.m"
    MR_Integer mercury__version_array__V_4_4;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_9;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__copy_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6013 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_4_4  = N;
#line 783 "version_array.m"
}
#line 319 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__V_4_4 == (MR_Integer) 0);
#line 318 "version_array.m"
    if (mercury__version_array__succeeded)
#line 318 "version_array.m"
      mercury__version_array__HeadVar__2_2 = mercury__version_array__VA_3;
#line 318 "version_array.m"
    else
#line 322 "version_array.m"
      {
#line 322 "version_array.m"
        MR_Integer mercury__version_array__V_5_5;
#line 322 "version_array.m"
        MR_Box mercury__version_array__V_6_6;
#line 779 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_10;
#line 753 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_11;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__copy_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6052 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_5_5  = N;
#line 783 "version_array.m"
}
#line 322 "version_array.m"
        {
#line 322 "version_array.m"
          mercury__version_array__V_6_6 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_8, mercury__version_array__VA_3, (MR_Integer) 0);
        }
#line 757 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__copy_1_f_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA0);
	N =  mercury__version_array__V_5_5 ;
	X = (MR_Word) mercury__version_array__V_6_6 ;
		{
#line 757 "version_array.m"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);

#line 6081 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__2_2 );
#line 757 "version_array.m"
}
#line 322 "version_array.m"
      }
#line 318 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 318 "version_array.m"
  }
#line 237 "version_array.m"
}

#line 232 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__all_false_2_p_0(
#line 232 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_7,
#line 232 "version_array.m"
  MR_Word mercury__version_array__Pred_3,
#line 232 "version_array.m"
  MR_Box mercury__version_array__VA_4)
#line 232 "version_array.m"
{
#line 478 "version_array.m"
  {
#line 478 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 478 "version_array.m"
    MR_Integer mercury__version_array__V_6_6;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_8;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__all_false_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_4 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6130 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_6_6  = N;
#line 783 "version_array.m"
}
#line 479 "version_array.m"
    {
#line 479 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_all_false_4_p_0(mercury__version_array__TypeInfo_for_T_7, mercury__version_array__Pred_3, (MR_Integer) 0, mercury__version_array__V_6_6, mercury__version_array__VA_4);
    }
#line 478 "version_array.m"
    return mercury__version_array__succeeded;
#line 478 "version_array.m"
  }
#line 232 "version_array.m"
}

#line 226 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__all_true_2_p_0(
#line 226 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_7,
#line 226 "version_array.m"
  MR_Word mercury__version_array__Pred_3,
#line 226 "version_array.m"
  MR_Box mercury__version_array__VA_4)
#line 226 "version_array.m"
{
#line 463 "version_array.m"
  {
#line 463 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 463 "version_array.m"
    MR_Integer mercury__version_array__V_6_6;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_8;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__all_true_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_4 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6182 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_6_6  = N;
#line 783 "version_array.m"
}
#line 464 "version_array.m"
    {
#line 464 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_all_true_4_p_0(mercury__version_array__TypeInfo_for_T_7, mercury__version_array__Pred_3, (MR_Integer) 0, mercury__version_array__V_6_6, mercury__version_array__VA_4);
    }
#line 463 "version_array.m"
    return mercury__version_array__succeeded;
#line 463 "version_array.m"
  }
#line 226 "version_array.m"
}

#line 220 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_5(
#line 220 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 220 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 220 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 220 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 220 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 220 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 220 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 220 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 220 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 220 "version_array.m"
{
#line 435 "version_array.m"
  {
#line 435 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6248 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 436 "version_array.m"
    {
#line 436 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr2_7_p_5(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 435 "version_array.m"
    return mercury__version_array__succeeded;
#line 435 "version_array.m"
  }
#line 220 "version_array.m"
}

#line 218 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_4(
#line 218 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 218 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 218 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 218 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 218 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 218 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 218 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 218 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 218 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 218 "version_array.m"
{
#line 435 "version_array.m"
  {
#line 435 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6316 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 436 "version_array.m"
    {
#line 436 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr2_7_p_4(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 435 "version_array.m"
    return mercury__version_array__succeeded;
#line 435 "version_array.m"
  }
#line 218 "version_array.m"
}

#line 216 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_3(
#line 216 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 216 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 216 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 216 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 216 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 216 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 216 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 216 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 216 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 216 "version_array.m"
{
#line 435 "version_array.m"
  {
#line 435 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6384 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 436 "version_array.m"
    {
#line 436 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr2_7_p_3(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 435 "version_array.m"
    return mercury__version_array__succeeded;
#line 435 "version_array.m"
  }
#line 216 "version_array.m"
}

#line 214 "version_array.m"
void MR_CALL 
mercury__version_array__foldr2_6_p_2(
#line 214 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 214 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 214 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 214 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 214 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 214 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 214 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 214 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 214 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 214 "version_array.m"
{
#line 435 "version_array.m"
  {
#line 435 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6452 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 436 "version_array.m"
    {
#line 436 "version_array.m"
      mercury__version_array__do_foldr2_7_p_2(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 436 "version_array.m"
      return;
    }
#line 435 "version_array.m"
  }
#line 214 "version_array.m"
}

#line 212 "version_array.m"
void MR_CALL 
mercury__version_array__foldr2_6_p_1(
#line 212 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 212 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 212 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 212 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 212 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 212 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 212 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 212 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 212 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 212 "version_array.m"
{
#line 435 "version_array.m"
  {
#line 435 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6520 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 436 "version_array.m"
    {
#line 436 "version_array.m"
      mercury__version_array__do_foldr2_7_p_1(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 436 "version_array.m"
      return;
    }
#line 435 "version_array.m"
  }
#line 212 "version_array.m"
}

#line 210 "version_array.m"
void MR_CALL 
mercury__version_array__foldr2_6_p_0(
#line 210 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 210 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 210 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 210 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 210 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 210 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 210 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 210 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 210 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 210 "version_array.m"
{
#line 435 "version_array.m"
  {
#line 435 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 435 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6588 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 436 "version_array.m"
    {
#line 436 "version_array.m"
      mercury__version_array__do_foldr2_7_p_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 436 "version_array.m"
      return;
    }
#line 435 "version_array.m"
  }
#line 210 "version_array.m"
}

#line 207 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr_4_p_5(
#line 207 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
#line 207 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
#line 207 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 207 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 207 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 207 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 207 "version_array.m"
{
#line 411 "version_array.m"
  {
#line 411 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6650 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 412 "version_array.m"
    {
#line 412 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr_pred_5_p_5(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 411 "version_array.m"
    return mercury__version_array__succeeded;
#line 411 "version_array.m"
  }
#line 207 "version_array.m"
}

#line 206 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr_4_p_4(
#line 206 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
#line 206 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
#line 206 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 206 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 206 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 206 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 206 "version_array.m"
{
#line 411 "version_array.m"
  {
#line 411 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6712 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 412 "version_array.m"
    {
#line 412 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr_pred_5_p_4(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 411 "version_array.m"
    return mercury__version_array__succeeded;
#line 411 "version_array.m"
  }
#line 206 "version_array.m"
}

#line 205 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr_4_p_3(
#line 205 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
#line 205 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
#line 205 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 205 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 205 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 205 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 205 "version_array.m"
{
#line 411 "version_array.m"
  {
#line 411 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6774 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 412 "version_array.m"
    {
#line 412 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr_pred_5_p_3(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 411 "version_array.m"
    return mercury__version_array__succeeded;
#line 411 "version_array.m"
  }
#line 205 "version_array.m"
}

#line 204 "version_array.m"
void MR_CALL 
mercury__version_array__foldr_4_p_2(
#line 204 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
#line 204 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
#line 204 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 204 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 204 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 204 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 204 "version_array.m"
{
#line 411 "version_array.m"
  {
#line 411 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6836 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 412 "version_array.m"
    {
#line 412 "version_array.m"
      mercury__version_array__do_foldr_pred_5_p_2(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 412 "version_array.m"
      return;
    }
#line 411 "version_array.m"
  }
#line 204 "version_array.m"
}

#line 203 "version_array.m"
void MR_CALL 
mercury__version_array__foldr_4_p_1(
#line 203 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
#line 203 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
#line 203 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 203 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 203 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 203 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 203 "version_array.m"
{
#line 411 "version_array.m"
  {
#line 411 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6898 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 412 "version_array.m"
    {
#line 412 "version_array.m"
      mercury__version_array__do_foldr_pred_5_p_1(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 412 "version_array.m"
      return;
    }
#line 411 "version_array.m"
  }
#line 203 "version_array.m"
}

#line 202 "version_array.m"
void MR_CALL 
mercury__version_array__foldr_4_p_0(
#line 202 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
#line 202 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
#line 202 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 202 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 202 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 202 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 202 "version_array.m"
{
#line 411 "version_array.m"
  {
#line 411 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 411 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6960 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 412 "version_array.m"
    {
#line 412 "version_array.m"
      mercury__version_array__do_foldr_pred_5_p_0(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 412 "version_array.m"
      return;
    }
#line 411 "version_array.m"
  }
#line 202 "version_array.m"
}

#line 199 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__foldr_3_f_0(
#line 199 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_9,
#line 199 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_10,
#line 199 "version_array.m"
  MR_Word mercury__version_array__F_5,
#line 199 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 199 "version_array.m"
  MR_Box mercury__version_array__Acc_7)
#line 199 "version_array.m"
{
#line 398 "version_array.m"
  {
#line 398 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 398 "version_array.m"
    MR_Box mercury__version_array__HeadVar__4_4;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_8_8;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_12_12;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_14;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7022 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_12_12  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_8_8 = (mercury__version_array__V_12_12 - (MR_Integer) 1);
#line 398 "version_array.m"
    {
#line 398 "version_array.m"
      return mercury__version_array__HeadVar__4_4 = mercury__version_array__do_foldr_func_4_f_0(mercury__version_array__TypeInfo_for_T1_9, mercury__version_array__TypeInfo_for_T2_10, mercury__version_array__F_5, mercury__version_array__VA_6, mercury__version_array__Acc_7, mercury__version_array__V_8_8);
    }
#line 398 "version_array.m"
    return mercury__version_array__HeadVar__4_4;
#line 398 "version_array.m"
  }
#line 199 "version_array.m"
}

#line 194 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_5(
#line 194 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 194 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 194 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 194 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 194 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 194 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 194 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 194 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 194 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 194 "version_array.m"
{
#line 370 "version_array.m"
  {
#line 370 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 370 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7088 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 783 "version_array.m"
}
#line 371 "version_array.m"
    {
#line 371 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl2_8_p_5(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 370 "version_array.m"
    return mercury__version_array__succeeded;
#line 370 "version_array.m"
  }
#line 194 "version_array.m"
}

#line 192 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_4(
#line 192 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 192 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 192 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 192 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 192 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 192 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 192 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 192 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 192 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 192 "version_array.m"
{
#line 370 "version_array.m"
  {
#line 370 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 370 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7152 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 783 "version_array.m"
}
#line 371 "version_array.m"
    {
#line 371 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl2_8_p_4(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 370 "version_array.m"
    return mercury__version_array__succeeded;
#line 370 "version_array.m"
  }
#line 192 "version_array.m"
}

#line 190 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_3(
#line 190 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 190 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 190 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 190 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 190 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 190 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 190 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 190 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 190 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 190 "version_array.m"
{
#line 370 "version_array.m"
  {
#line 370 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 370 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7216 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 783 "version_array.m"
}
#line 371 "version_array.m"
    {
#line 371 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl2_8_p_3(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 370 "version_array.m"
    return mercury__version_array__succeeded;
#line 370 "version_array.m"
  }
#line 190 "version_array.m"
}

#line 188 "version_array.m"
void MR_CALL 
mercury__version_array__foldl2_6_p_2(
#line 188 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 188 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 188 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 188 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 188 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 188 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 188 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 188 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 188 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 188 "version_array.m"
{
#line 370 "version_array.m"
  {
#line 370 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 370 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7280 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 783 "version_array.m"
}
#line 371 "version_array.m"
    {
#line 371 "version_array.m"
      mercury__version_array__do_foldl2_8_p_2(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 371 "version_array.m"
      return;
    }
#line 370 "version_array.m"
  }
#line 188 "version_array.m"
}

#line 186 "version_array.m"
void MR_CALL 
mercury__version_array__foldl2_6_p_1(
#line 186 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 186 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 186 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 186 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 186 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 186 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 186 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 186 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 186 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 186 "version_array.m"
{
#line 370 "version_array.m"
  {
#line 370 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 370 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7344 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 783 "version_array.m"
}
#line 371 "version_array.m"
    {
#line 371 "version_array.m"
      mercury__version_array__do_foldl2_8_p_1(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 371 "version_array.m"
      return;
    }
#line 370 "version_array.m"
  }
#line 186 "version_array.m"
}

#line 184 "version_array.m"
void MR_CALL 
mercury__version_array__foldl2_6_p_0(
#line 184 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 184 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 184 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 184 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 184 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 184 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 184 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 184 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 184 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 184 "version_array.m"
{
#line 370 "version_array.m"
  {
#line 370 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 370 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7408 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 783 "version_array.m"
}
#line 371 "version_array.m"
    {
#line 371 "version_array.m"
      mercury__version_array__do_foldl2_8_p_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 371 "version_array.m"
      return;
    }
#line 370 "version_array.m"
  }
#line 184 "version_array.m"
}

#line 178 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl_4_p_5(
#line 178 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
#line 178 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
#line 178 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 178 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 178 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 178 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 178 "version_array.m"
{
#line 346 "version_array.m"
  {
#line 346 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 346 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7466 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 783 "version_array.m"
}
#line 347 "version_array.m"
    {
#line 347 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl_pred_6_p_5(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 346 "version_array.m"
    return mercury__version_array__succeeded;
#line 346 "version_array.m"
  }
#line 178 "version_array.m"
}

#line 177 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl_4_p_4(
#line 177 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
#line 177 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
#line 177 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 177 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 177 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 177 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 177 "version_array.m"
{
#line 346 "version_array.m"
  {
#line 346 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 346 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7524 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 783 "version_array.m"
}
#line 347 "version_array.m"
    {
#line 347 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl_pred_6_p_4(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 346 "version_array.m"
    return mercury__version_array__succeeded;
#line 346 "version_array.m"
  }
#line 177 "version_array.m"
}

#line 176 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl_4_p_3(
#line 176 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
#line 176 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
#line 176 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 176 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 176 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 176 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 176 "version_array.m"
{
#line 346 "version_array.m"
  {
#line 346 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 346 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7582 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 783 "version_array.m"
}
#line 347 "version_array.m"
    {
#line 347 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl_pred_6_p_3(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 346 "version_array.m"
    return mercury__version_array__succeeded;
#line 346 "version_array.m"
  }
#line 176 "version_array.m"
}

#line 175 "version_array.m"
void MR_CALL 
mercury__version_array__foldl_4_p_2(
#line 175 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
#line 175 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
#line 175 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 175 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 175 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 175 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 175 "version_array.m"
{
#line 346 "version_array.m"
  {
#line 346 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 346 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7640 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 783 "version_array.m"
}
#line 347 "version_array.m"
    {
#line 347 "version_array.m"
      mercury__version_array__do_foldl_pred_6_p_2(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 347 "version_array.m"
      return;
    }
#line 346 "version_array.m"
  }
#line 175 "version_array.m"
}

#line 174 "version_array.m"
void MR_CALL 
mercury__version_array__foldl_4_p_1(
#line 174 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
#line 174 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
#line 174 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 174 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 174 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 174 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 174 "version_array.m"
{
#line 346 "version_array.m"
  {
#line 346 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 346 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7698 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 783 "version_array.m"
}
#line 347 "version_array.m"
    {
#line 347 "version_array.m"
      mercury__version_array__do_foldl_pred_6_p_1(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 347 "version_array.m"
      return;
    }
#line 346 "version_array.m"
  }
#line 174 "version_array.m"
}

#line 173 "version_array.m"
void MR_CALL 
mercury__version_array__foldl_4_p_0(
#line 173 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
#line 173 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
#line 173 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 173 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 173 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 173 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 173 "version_array.m"
{
#line 346 "version_array.m"
  {
#line 346 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 346 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7756 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 783 "version_array.m"
}
#line 347 "version_array.m"
    {
#line 347 "version_array.m"
      mercury__version_array__do_foldl_pred_6_p_0(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 347 "version_array.m"
      return;
    }
#line 346 "version_array.m"
  }
#line 173 "version_array.m"
}

#line 168 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__foldl_3_f_0(
#line 168 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_10,
#line 168 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_11,
#line 168 "version_array.m"
  MR_Word mercury__version_array__F_5,
#line 168 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 168 "version_array.m"
  MR_Box mercury__version_array__Acc_7)
#line 168 "version_array.m"
{
#line 333 "version_array.m"
  {
#line 333 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 333 "version_array.m"
    MR_Box mercury__version_array__HeadVar__4_4;
#line 333 "version_array.m"
    MR_Integer mercury__version_array__V_9_9;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_12;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7814 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_9_9  = N;
#line 783 "version_array.m"
}
#line 333 "version_array.m"
    {
#line 333 "version_array.m"
      return mercury__version_array__HeadVar__4_4 = mercury__version_array__do_foldl_func_5_f_0(mercury__version_array__TypeInfo_for_T1_10, mercury__version_array__TypeInfo_for_T2_11, mercury__version_array__F_5, mercury__version_array__VA_6, mercury__version_array__Acc_7, (MR_Integer) 0, mercury__version_array__V_9_9);
    }
#line 333 "version_array.m"
    return mercury__version_array__HeadVar__4_4;
#line 333 "version_array.m"
  }
#line 168 "version_array.m"
}

#line 164 "version_array.m"
MR_Word MR_CALL 
mercury__version_array__to_list_1_f_0(
#line 164 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 164 "version_array.m"
  MR_Box mercury__version_array__VA_3)
#line 164 "version_array.m"
{
#line 329 "version_array.m"
  {
#line 329 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 329 "version_array.m"
    MR_Word mercury__version_array__HeadVar__2_2;

#line 329 "version_array.m"
    {
#line 329 "version_array.m"
      return mercury__version_array__HeadVar__2_2 = mercury__version_array__list_1_f_0(mercury__version_array__TypeInfo_for_T_4, mercury__version_array__VA_3);
    }
#line 329 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 329 "version_array.m"
  }
#line 164 "version_array.m"
}

#line 160 "version_array.m"
MR_Word MR_CALL 
mercury__version_array__list_1_f_0(
#line 160 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 160 "version_array.m"
  MR_Box mercury__version_array__VA_3)
#line 160 "version_array.m"
{
#line 327 "version_array.m"
  {
#line 327 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 327 "version_array.m"
    MR_Word mercury__version_array__HeadVar__2_2;
#line 327 "version_array.m"
    MR_Word mercury__version_array__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 327 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 327 "version_array.m"
    MR_Integer mercury__version_array__V_18_18;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_20;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__list_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7898 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_18_18  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_18_18 - (MR_Integer) 1);
#line 398 "version_array.m"
    {
#line 398 "version_array.m"
      return mercury__version_array__HeadVar__2_2 = mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__VA_3, mercury__version_array__V_5_5, mercury__version_array__V_15_15);
    }
#line 327 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 327 "version_array.m"
  }
#line 160 "version_array.m"
}

#line 154 "version_array.m"
void MR_CALL 
mercury__version_array__resize_4_p_0(
#line 154 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_8,
#line 154 "version_array.m"
  MR_Integer mercury__version_array__N_5,
#line 154 "version_array.m"
  MR_Box mercury__version_array__X_6,
#line 154 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 154 "version_array.m"
  MR_Box * mercury__version_array__HeadVar__4_4)
#line 154 "version_array.m"
{
#line 753 "version_array.m"
  {
#line 753 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 753 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_9;

#line 757 "version_array.m"
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
#line 757 "version_array.m"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);

#line 7958 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, *mercury__version_array__HeadVar__4_4 );
#line 757 "version_array.m"
}
#line 753 "version_array.m"
  }
#line 154 "version_array.m"
}

#line 153 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__resize_3_f_0(
#line 153 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_5,
#line 153 "version_array.m"
  MR_Box mercury__version_array__HeadVar__1_1,
#line 153 "version_array.m"
  MR_Integer mercury__version_array__HeadVar__2_2,
#line 153 "version_array.m"
  MR_Box mercury__version_array__HeadVar__3_3)
#line 153 "version_array.m"
{
#line 753 "version_array.m"
  {
#line 753 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 753 "version_array.m"
    MR_Box mercury__version_array__HeadVar__4_4;
#line 753 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_6;

#line 757 "version_array.m"
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
#line 757 "version_array.m"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);

#line 8009 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__4_4 );
#line 757 "version_array.m"
}
#line 753 "version_array.m"
    return mercury__version_array__HeadVar__4_4;
#line 753 "version_array.m"
  }
#line 153 "version_array.m"
}

#line 146 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__is_empty_1_p_0(
#line 146 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 146 "version_array.m"
  MR_Box mercury__version_array__VA_2)
#line 146 "version_array.m"
{
#line 803 "version_array.m"
  {
#line 803 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 803 "version_array.m"
    MR_Integer mercury__version_array__V_3_3;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_5;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__is_empty_1_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_2 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 8054 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_3_3  = N;
#line 783 "version_array.m"
}
#line 804 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__V_3_3 == (MR_Integer) 0);
#line 803 "version_array.m"
    return mercury__version_array__succeeded;
#line 803 "version_array.m"
  }
#line 146 "version_array.m"
}

#line 142 "version_array.m"
MR_Integer MR_CALL 
mercury__version_array__max_1_f_0(
#line 142 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 142 "version_array.m"
  MR_Box mercury__version_array__VA_3)
#line 142 "version_array.m"
{
#line 314 "version_array.m"
  {
#line 314 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 314 "version_array.m"
    MR_Integer mercury__version_array__HeadVar__2_2;
#line 314 "version_array.m"
    MR_Integer mercury__version_array__V_4_4;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_7;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__max_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 8103 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_4_4  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
    mercury__version_array__HeadVar__2_2 = (mercury__version_array__V_4_4 - (MR_Integer) 1);
#line 314 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 314 "version_array.m"
  }
#line 142 "version_array.m"
}

#line 138 "version_array.m"
MR_Integer MR_CALL 
mercury__version_array__size_1_f_0(
#line 138 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_3,
#line 138 "version_array.m"
  MR_Box mercury__version_array__HeadVar__1_1)
#line 138 "version_array.m"
{
#line 779 "version_array.m"
  {
#line 779 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 779 "version_array.m"
    MR_Integer mercury__version_array__HeadVar__2_2;
#line 779 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_4;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__size_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__HeadVar__1_1 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 8150 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__HeadVar__2_2  = N;
#line 783 "version_array.m"
}
#line 779 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 779 "version_array.m"
  }
#line 138 "version_array.m"
}

#line 132 "version_array.m"
void MR_CALL 
mercury__version_array__set_4_p_0(
#line 132 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_14,
#line 132 "version_array.m"
  MR_Integer mercury__version_array__I_5,
#line 132 "version_array.m"
  MR_Box mercury__version_array__X_6,
#line 132 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_VA_0_8,
#line 132 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_VA_9)
#line 132 "version_array.m"
{
#line 305 "version_array.m"
  {
#line 305 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 305 "version_array.m"
    MR_Box mercury__version_array__STATE_VARIABLE_VA_10_10;
#line 847 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_18;

#line 851 "version_array.m"
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
#line 851 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);

#line 8206 "version_array.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__STATE_VARIABLE_VA_10_10 );
#line 851 "version_array.m"
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
#line 305 "version_array.m"
    if (mercury__version_array__succeeded)
#line 303 "version_array.m"
      *mercury__version_array__STATE_VARIABLE_VA_9 = mercury__version_array__STATE_VARIABLE_VA_10_10;
#line 305 "version_array.m"
    else
#line 306 "version_array.m"
      {
#line 306 "version_array.m"
        MR_Integer mercury__version_array__V_11_11;
#line 306 "version_array.m"
        MR_Integer mercury__version_array__V_16_16;
#line 779 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_19;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__set_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__STATE_VARIABLE_VA_0_8 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 8244 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
        mercury__version_array__V_11_11 = (mercury__version_array__V_16_16 - (MR_Integer) 1);
#line 306 "version_array.m"
        {
#line 306 "version_array.m"
          mercury__version_array__out_of_bounds_error_3_p_0(mercury__version_array__I_5, mercury__version_array__V_11_11, (MR_String) "version_array.set");
#line 306 "version_array.m"
          return;
        }
#line 306 "version_array.m"
      }
#line 305 "version_array.m"
  }
#line 132 "version_array.m"
}

#line 130 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__f_101_108_101_109_32_58_61_3_f_0(
#line 130 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_9,
#line 130 "version_array.m"
  MR_Integer mercury__version_array__I_6,
#line 130 "version_array.m"
  MR_Box mercury__version_array__VA0_5,
#line 130 "version_array.m"
  MR_Box mercury__version_array__X_7)
#line 130 "version_array.m"
{
#line 310 "version_array.m"
  {
#line 310 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 310 "version_array.m"
    MR_Box mercury__version_array__VA_8;

#line 310 "version_array.m"
    {
#line 310 "version_array.m"
      mercury__version_array__set_4_p_0(mercury__version_array__TypeInfo_for_T_9, mercury__version_array__I_6, mercury__version_array__X_7, mercury__version_array__VA0_5, &mercury__version_array__VA_8);
    }
#line 310 "version_array.m"
    return mercury__version_array__VA_8;
#line 310 "version_array.m"
  }
#line 130 "version_array.m"
}

#line 124 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__lookup_2_f_0(
#line 124 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_10,
#line 124 "version_array.m"
  MR_Box mercury__version_array__VA_4,
#line 124 "version_array.m"
  MR_Integer mercury__version_array__I_5)
#line 124 "version_array.m"
{
#line 291 "version_array.m"
  {
#line 291 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 291 "version_array.m"
    MR_Box mercury__version_array__X_6;
#line 291 "version_array.m"
    MR_Box mercury__version_array__X0_7;
#line 808 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_14;

#line 812 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__lookup_2_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_4 , VA);
	I =  mercury__version_array__I_5 ;
		{
#line 812 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);

#line 8337 "version_array.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__version_array__X0_7  = (MR_Box) X;
#line 812 "version_array.m"
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
#line 291 "version_array.m"
    if (mercury__version_array__succeeded)
#line 290 "version_array.m"
      mercury__version_array__X_6 = mercury__version_array__X0_7;
#line 291 "version_array.m"
    else
#line 292 "version_array.m"
      {
#line 292 "version_array.m"
        MR_Integer mercury__version_array__V_8_8;
#line 292 "version_array.m"
        MR_Integer mercury__version_array__V_12_12;
#line 779 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_15;

#line 783 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__lookup_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_4 , VA);
		{
#line 783 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 8375 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_12_12  = N;
#line 783 "version_array.m"
}
#line 314 "version_array.m"
        mercury__version_array__V_8_8 = (mercury__version_array__V_12_12 - (MR_Integer) 1);
#line 292 "version_array.m"
        {
#line 292 "version_array.m"
          mercury__version_array__out_of_bounds_error_3_p_0(mercury__version_array__I_5, mercury__version_array__V_8_8, (MR_String) "version_array.lookup");
        }
#line 292 "version_array.m"
      }
#line 291 "version_array.m"
    return mercury__version_array__X_6;
#line 291 "version_array.m"
  }
#line 124 "version_array.m"
}

#line 120 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__elem_2_f_0(
#line 120 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 120 "version_array.m"
  MR_Integer mercury__version_array__I_5,
#line 120 "version_array.m"
  MR_Box mercury__version_array__VA_4)
#line 120 "version_array.m"
{
#line 296 "version_array.m"
  {
#line 296 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 296 "version_array.m"
    MR_Box mercury__version_array__HeadVar__3_3;

#line 296 "version_array.m"
    {
#line 296 "version_array.m"
      return mercury__version_array__HeadVar__3_3 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__VA_4, mercury__version_array__I_5);
    }
#line 296 "version_array.m"
    return mercury__version_array__HeadVar__3_3;
#line 296 "version_array.m"
  }
#line 120 "version_array.m"
}

#line 115 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__from_list_1_f_0(
#line 115 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 115 "version_array.m"
  MR_Word mercury__version_array__Xs_3)
#line 115 "version_array.m"
{
#line 282 "version_array.m"
  {
#line 282 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 282 "version_array.m"
    MR_Box mercury__version_array__HeadVar__2_2;

#line 282 "version_array.m"
    {
#line 282 "version_array.m"
      return mercury__version_array__HeadVar__2_2 = mercury__version_array__version_array_1_f_0(mercury__version_array__TypeInfo_for_T_4, mercury__version_array__Xs_3);
    }
#line 282 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 282 "version_array.m"
  }
#line 115 "version_array.m"
}

#line 111 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__version_array_1_f_0(
#line 111 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_11,
#line 111 "version_array.m"
  MR_Word mercury__version_array__HeadVar__1_1)
#line 111 "version_array.m"
{
#line 269 "version_array.m"
  {
#line 269 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 269 "version_array.m"
    MR_Box mercury__version_array__HeadVar__2_2;

#line 269 "version_array.m"
    if ((mercury__version_array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "version_array.m"
      {
#line 587 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_17;

#line 591 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__version_array_1_f_0

	struct ML_va * VA;

		{
#line 591 "version_array.m"

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

#line 8505 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__2_2 );
#line 591 "version_array.m"
}
#line 587 "version_array.m"
      }
#line 269 "version_array.m"
    else
#line 270 "version_array.m"
      {
#line 270 "version_array.m"
        MR_Box mercury__version_array__X_3 = (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__1_1, (MR_Integer) 0));
#line 270 "version_array.m"
        MR_Word mercury__version_array__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__1_1, (MR_Integer) 1)));
#line 270 "version_array.m"
        MR_Box mercury__version_array__VA0_6;
#line 270 "version_array.m"
        MR_Integer mercury__version_array__V_7_7;
#line 270 "version_array.m"
        MR_Integer mercury__version_array__V_9_9;

#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__Xs_4, (MR_Integer) 0, &mercury__version_array__V_9_9);
        }
#line 271 "version_array.m"
        mercury__version_array__V_7_7 = ((MR_Integer) 1 + mercury__version_array__V_9_9);
#line 271 "version_array.m"
        {
#line 271 "version_array.m"
          mercury__version_array__VA0_6 = mercury__version_array__init_2_f_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__V_7_7, mercury__version_array__X_3);
        }
#line 272 "version_array.m"
        {
#line 272 "version_array.m"
          mercury__version_array__version_array_2_4_p_0(mercury__version_array__TypeInfo_for_T_11, (MR_Integer) 1, mercury__version_array__Xs_4, mercury__version_array__VA0_6, &mercury__version_array__HeadVar__2_2);
        }
#line 270 "version_array.m"
      }
#line 269 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 269 "version_array.m"
  }
#line 111 "version_array.m"
}

#line 106 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__unsafe_new_2_f_0(
#line 106 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 106 "version_array.m"
  MR_Integer mercury__version_array__N_4,
#line 106 "version_array.m"
  MR_Box mercury__version_array__X_5)
#line 106 "version_array.m"
{
#line 708 "version_array.m"
  {
#line 708 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 708 "version_array.m"
    MR_Box mercury__version_array__HeadVar__3_3;

#line 708 "version_array.m"
    {
#line 708 "version_array.m"
      return mercury__version_array__HeadVar__3_3 = mercury__version_array__unsafe_init_2_f_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__N_4, mercury__version_array__X_5);
    }
#line 708 "version_array.m"
    return mercury__version_array__HeadVar__3_3;
#line 708 "version_array.m"
  }
#line 106 "version_array.m"
}

#line 101 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__unsafe_init_2_f_0(
#line 101 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 101 "version_array.m"
  MR_Integer mercury__version_array__HeadVar__1_1,
#line 101 "version_array.m"
  MR_Box mercury__version_array__HeadVar__2_2)
#line 101 "version_array.m"
{
#line 710 "version_array.m"
  {
#line 710 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 710 "version_array.m"
    MR_Box mercury__version_array__HeadVar__3_3;
#line 710 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_5;

#line 714 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__unsafe_init_2_f_0

	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	N =  mercury__version_array__HeadVar__1_1 ;
	X = (MR_Word) mercury__version_array__HeadVar__2_2 ;
		{
#line 714 "version_array.m"

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

#line 8639 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__3_3 );
#line 714 "version_array.m"
}
#line 710 "version_array.m"
    return mercury__version_array__HeadVar__3_3;
#line 710 "version_array.m"
  }
#line 101 "version_array.m"
}

#line 91 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__unsafe_empty_0_f_0(
#line 91 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_2)
#line 91 "version_array.m"
{
#line 626 "version_array.m"
  {
#line 626 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 626 "version_array.m"
    MR_Box mercury__version_array__HeadVar__1_1;
#line 626 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_3;

#line 630 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__unsafe_empty_0_f_0

	struct ML_va * VA;

		{
#line 630 "version_array.m"

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

#line 8694 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__1_1 );
#line 630 "version_array.m"
}
#line 626 "version_array.m"
    return mercury__version_array__HeadVar__1_1;
#line 626 "version_array.m"
  }
#line 91 "version_array.m"
}

#line 81 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__init_2_f_0(
#line 81 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 81 "version_array.m"
  MR_Integer mercury__version_array__HeadVar__1_1,
#line 81 "version_array.m"
  MR_Box mercury__version_array__HeadVar__2_2)
#line 81 "version_array.m"
{
#line 664 "version_array.m"
  {
#line 664 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 664 "version_array.m"
    MR_Box mercury__version_array__HeadVar__3_3;
#line 664 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_5;

#line 668 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__init_2_f_0

	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	N =  mercury__version_array__HeadVar__1_1 ;
	X = (MR_Word) mercury__version_array__HeadVar__2_2 ;
		{
#line 668 "version_array.m"

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

#line 8763 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__3_3 );
#line 668 "version_array.m"
}
#line 664 "version_array.m"
    return mercury__version_array__HeadVar__3_3;
#line 664 "version_array.m"
  }
#line 81 "version_array.m"
}

#line 77 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__empty_0_f_0(
#line 77 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_2)
#line 77 "version_array.m"
{
#line 587 "version_array.m"
  {
#line 587 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 587 "version_array.m"
    MR_Box mercury__version_array__HeadVar__1_1;
#line 587 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_3;

#line 591 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__empty_0_f_0

	struct ML_va * VA;

		{
#line 591 "version_array.m"

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

#line 8819 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__1_1 );
#line 591 "version_array.m"
}
#line 587 "version_array.m"
    return mercury__version_array__HeadVar__1_1;
#line 587 "version_array.m"
  }
#line 77 "version_array.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module version_array. */
