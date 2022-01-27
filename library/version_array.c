/*
** Automatically generated from `version_array.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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


#line 924 "version_array.m"


/*
** Returns the number of items in a version array.
*/
static MR_Integer
ML_va_size(ML_va_ptr);

/*
** If I is in range then ML_va_get(VA, I, &X) sets X to the Ith item
** in VA (counting from zero) and returns MR_TRUE. Otherwise it
** returns MR_FALSE.
*/
static MR_bool
ML_va_get(ML_va_ptr VA, MR_Integer I, MR_Word *Xptr);

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
ML_va_flat_copy(const ML_va_ptr VA0, MR_AllocSiteInfoPtr alloc_id);

/*
** Update the array VA using the override values in VA0
** i.e. recreate the state of the version array as captured in VA0.
*/
static void
ML_va_rewind_into(ML_va_ptr VA, const ML_va_ptr VA0);

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




#line 138 "version_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_array__version_array__pti_version_array_1__pseudo_1;

#line 141 "version_array.c"
static const MR_Integer mercury__version_array__version_array__functor_number_map_index_out_of_bounds_0[1];

#line 144 "version_array.c"
static const MR_NotagFunctorDesc mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0;

#line 147 "version_array.c"
static MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0_10001(
#line 150 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 152 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2);

#line 155 "version_array.c"
static void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0_10001(
#line 158 "version_array.c"
  MR_Box * mercury__version_array__wrapper_arg_1,
#line 160 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2,
#line 162 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3);

#line 165 "version_array.c"
static MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0_10001(
#line 168 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 170 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2,
#line 172 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3);

#line 175 "version_array.c"
static void MR_CALL 
mercury__version_array____Compare____version_array_1_0_10001(
#line 178 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 180 "version_array.c"
  MR_Box * mercury__version_array__wrapper_arg_2,
#line 182 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3,
#line 184 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_4);

#line 387 "version_array.m"
static MR_Word MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_0(
#line 387 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_15,
#line 387 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 387 "version_array.m"
  MR_Word mercury__version_array__Acc_8,
#line 387 "version_array.m"
  MR_Integer mercury__version_array__Hi_9);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1876 "version_array.m"
static MR_Box MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__1876__1_3_f_0_1(
#line 1876 "version_array.m"
  MR_Box mercury__version_array__closure_arg);

#line 1876 "version_array.m"
static MR_Word MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__1876__1_3_f_0(
#line 1876 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_28,
#line 1876 "version_array.m"
  MR_Integer mercury__version_array__I_4,
#line 1876 "version_array.m"
  MR_Box mercury__version_array__VA_5);

#line 523 "version_array.m"
static void MR_CALL 
mercury__version_array__cmp_version_array_2_5_p_0(
#line 523 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_16,
#line 523 "version_array.m"
  MR_Integer mercury__version_array__I_6,
#line 523 "version_array.m"
  MR_Integer mercury__version_array__Size_7,
#line 523 "version_array.m"
  MR_Box mercury__version_array__VAa_8,
#line 523 "version_array.m"
  MR_Box mercury__version_array__VAb_9,
#line 523 "version_array.m"
  MR_Word * mercury__version_array__R_10);

#line 494 "version_array.m"
static MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_3_p_0(
#line 494 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_11,
#line 494 "version_array.m"
  MR_Integer mercury__version_array__I_4,
#line 494 "version_array.m"
  MR_Box mercury__version_array__VAa_5,
#line 494 "version_array.m"
  MR_Box mercury__version_array__VAb_6);

#line 261 "version_array.m"
static void MR_CALL 
mercury__version_array__version_array_2_4_p_0(
#line 261 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_19,
#line 261 "version_array.m"
  MR_Integer mercury__version_array__I_1,
#line 261 "version_array.m"
  MR_Word mercury__version_array__HeadVar__2_2,
#line 261 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_VA_0_3,
#line 261 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_VA_4);

#line 1876 "version_array.m"
static MR_Box MR_CALL 
mercury__version_array__version_array_to_doc_1_f_0_1(
#line 1876 "version_array.m"
  MR_Box mercury__version_array__closure_arg);


static /* final */ const MR_Box mercury__version_array_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__version_array_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__version_array_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__version_array_scalar_common_4[11][2];

static /* final */ const MR_Box mercury__version_array_scalar_common_5[7][1];

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

static /* final */ const MR_Box mercury__version_array_scalar_common_5[7][1] = {
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#line 977 "version_array.m"


#define ML_va_latest_version(VA)   ((VA)->index == -1)

#ifdef MR_THREAD_SAFE
    #define ML_maybe_lock(lock)                                 do {                                                        if (lock) {                                                 MR_LOCK(lock, "ML_maybe_lock");                   }                                                   } while (0)

    #define ML_maybe_unlock(lock)                               do {                                                        if (lock) {                                                 MR_UNLOCK(lock, "ML_maybe_unlock");               }                                                   } while (0)
#else
    #define ML_maybe_lock(lock)     ((void) 0)
    #define ML_maybe_unlock(lock)   ((void) 0)
#endif

ML_va_ptr
ML_va_get_latest(ML_va_ptr VA)
{
    while (!ML_va_latest_version(VA)) {
        VA = VA->rest.next;
    }

    return VA;
}

MR_Integer
ML_va_size_dolock(ML_va_ptr VA)
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
ML_va_size(ML_va_ptr VA)
{
    VA = ML_va_get_latest(VA);

    return VA->rest.array->size;
}

int
ML_va_get_dolock(ML_va_ptr VA, MR_Integer I, MR_Word *Xptr)
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
ML_va_flat_copy(const ML_va_ptr VA0, MR_AllocSiteInfoPtr alloc_id)
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

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = N;

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

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = N;

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




#line 1035 "version_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_array__version_array__pti_version_array_1__pseudo_1 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1043 "version_array.c"
static const MR_Integer mercury__version_array__version_array__functor_number_map_index_out_of_bounds_0[1] = {
  (MR_Integer) 0
};

#line 1048 "version_array.c"
static const MR_NotagFunctorDesc mercury__version_array__version_array__notag_functor_desc_index_out_of_bounds_0 = {
  (MR_String) "index_out_of_bounds",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1055 "version_array.c"
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

#line 1076 "version_array.c"
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

#line 1097 "version_array.c"
static MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0_10001(
#line 1100 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 1102 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2)
#line 1104 "version_array.c"
{
#line 1106 "version_array.c"
  {
#line 1108 "version_array.c"
    MR_bool mercury__version_array__succeeded;

#line 1111 "version_array.c"
    {
#line 1113 "version_array.c"
      mercury__version_array__succeeded = mercury__version_array____Unify____index_out_of_bounds_0_0(((MR_Word) mercury__version_array__wrapper_arg_1), ((MR_Word) mercury__version_array__wrapper_arg_2));
    }
#line 1116 "version_array.c"
    return mercury__version_array__succeeded;
#line 1118 "version_array.c"
  }
#line 1120 "version_array.c"
}

#line 1123 "version_array.c"
static void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0_10001(
#line 1126 "version_array.c"
  MR_Box * mercury__version_array__wrapper_arg_1,
#line 1128 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2,
#line 1130 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3)
#line 1132 "version_array.c"
{
#line 1134 "version_array.c"
  {
#line 1136 "version_array.c"
    MR_Word mercury__version_array__conv0_HeadVar__1_1;

#line 1139 "version_array.c"
    {
#line 1141 "version_array.c"
      mercury__version_array____Compare____index_out_of_bounds_0_0(&mercury__version_array__conv0_HeadVar__1_1, ((MR_Word) mercury__version_array__wrapper_arg_2), ((MR_Word) mercury__version_array__wrapper_arg_3));
    }
#line 1144 "version_array.c"
    *mercury__version_array__wrapper_arg_1 = ((MR_Box) (mercury__version_array__conv0_HeadVar__1_1));
#line 1146 "version_array.c"
  }
#line 1148 "version_array.c"
}

#line 1151 "version_array.c"
static MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0_10001(
#line 1154 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 1156 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_2,
#line 1158 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3)
#line 1160 "version_array.c"
{
#line 1162 "version_array.c"
  {
#line 1164 "version_array.c"
    MR_bool mercury__version_array__succeeded;

#line 1167 "version_array.c"
    {
#line 1169 "version_array.c"
      mercury__version_array__succeeded = mercury__version_array____Unify____version_array_1_0(((MR_Word) mercury__version_array__wrapper_arg_1), ((MR_Box) mercury__version_array__wrapper_arg_2), ((MR_Box) mercury__version_array__wrapper_arg_3));
    }
#line 1172 "version_array.c"
    return mercury__version_array__succeeded;
#line 1174 "version_array.c"
  }
#line 1176 "version_array.c"
}

#line 1179 "version_array.c"
static void MR_CALL 
mercury__version_array____Compare____version_array_1_0_10001(
#line 1182 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_1,
#line 1184 "version_array.c"
  MR_Box * mercury__version_array__wrapper_arg_2,
#line 1186 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_3,
#line 1188 "version_array.c"
  MR_Box mercury__version_array__wrapper_arg_4)
#line 1190 "version_array.c"
{
#line 1192 "version_array.c"
  {
#line 1194 "version_array.c"
    MR_Word mercury__version_array__conv0_HeadVar__1_1;

#line 1197 "version_array.c"
    {
#line 1199 "version_array.c"
      mercury__version_array____Compare____version_array_1_0(((MR_Word) mercury__version_array__wrapper_arg_1), &mercury__version_array__conv0_HeadVar__1_1, ((MR_Box) mercury__version_array__wrapper_arg_3), ((MR_Box) mercury__version_array__wrapper_arg_4));
    }
#line 1202 "version_array.c"
    *mercury__version_array__wrapper_arg_2 = ((MR_Box) (mercury__version_array__conv0_HeadVar__1_1));
#line 1204 "version_array.c"
  }
#line 1206 "version_array.c"
}

#line 387 "version_array.m"
static MR_Word MR_CALL 
mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_0(
#line 387 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_15,
#line 387 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 387 "version_array.m"
  MR_Word mercury__version_array__Acc_8,
#line 387 "version_array.m"
  MR_Integer mercury__version_array__Hi_9)
#line 387 "version_array.m"
{
#line 389 "version_array.m"
  while (MR_TRUE)
#line 389 "version_array.m"
    {
#line 389 "version_array.m"
      /* tailcall optimized into a loop */
#line 389 "version_array.m"
      {
#line 389 "version_array.m"
        MR_bool mercury__version_array__succeeded = ((MR_Integer) 0 <= mercury__version_array__Hi_9);
#line 389 "version_array.m"
        MR_Word mercury__version_array__HeadVar__5_5;

#line 389 "version_array.m"
        if (mercury__version_array__succeeded)
#line 391 "version_array.m"
          {
#line 391 "version_array.m"
            MR_Word mercury__version_array__V_11_11;
#line 391 "version_array.m"
            MR_Box mercury__version_array__V_12_12;
#line 391 "version_array.m"
            MR_Integer mercury__version_array__V_13_13;

#line 391 "version_array.m"
            {
#line 391 "version_array.m"
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
#line 391 "version_array.m"
            mercury__version_array__V_13_13 = (mercury__version_array__Hi_9 - (MR_Integer) 1);
#line 389 "version_array.m"
            /* direct tailcall eliminated */
#line 389 "version_array.m"
            {
#line 389 "version_array.m"
              MR_Word mercury__version_array__Acc__tmp_copy_8 = mercury__version_array__V_11_11;
#line 389 "version_array.m"
              MR_Integer mercury__version_array__Hi__tmp_copy_9 = mercury__version_array__V_13_13;

#line 389 "version_array.m"
              mercury__version_array__Hi_9 = mercury__version_array__Hi__tmp_copy_9;
#line 389 "version_array.m"
              mercury__version_array__Acc_8 = mercury__version_array__Acc__tmp_copy_8;
#line 389 "version_array.m"
            }
#line 389 "version_array.m"
            continue;
#line 391 "version_array.m"
          }
#line 389 "version_array.m"
        else
#line 389 "version_array.m"
          mercury__version_array__HeadVar__5_5 = mercury__version_array__Acc_8;
#line 389 "version_array.m"
        return mercury__version_array__HeadVar__5_5;
#line 389 "version_array.m"
      }
#line 389 "version_array.m"
      break;
#line 389 "version_array.m"
    }
#line 387 "version_array.m"
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

#line 1876 "version_array.m"
static MR_Box MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__1876__1_3_f_0_1(
#line 1876 "version_array.m"
  MR_Box mercury__version_array__closure_arg)
#line 1876 "version_array.m"
{
#line 1876 "version_array.m"
  {
#line 1876 "version_array.m"
    MR_Box mercury__version_array__wrapper_arg_1;
#line 1876 "version_array.m"
    MR_Box mercury__version_array__closure = mercury__version_array__closure_arg;
#line 1876 "version_array.m"
    MR_Word mercury__version_array__conv0_HeadVar__4_24;

#line 1876 "version_array.m"
    {
#line 1876 "version_array.m"
      mercury__version_array__conv0_HeadVar__4_24 = mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__1876__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 4))), ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 5))));
    }
#line 1876 "version_array.m"
    mercury__version_array__wrapper_arg_1 = ((MR_Box) (mercury__version_array__conv0_HeadVar__4_24));
#line 1876 "version_array.m"
    return mercury__version_array__wrapper_arg_1;
#line 1876 "version_array.m"
  }
#line 1876 "version_array.m"
}

#line 1876 "version_array.m"
static MR_Word MR_CALL 
mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__1876__1_3_f_0(
#line 1876 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_28,
#line 1876 "version_array.m"
  MR_Integer mercury__version_array__I_4,
#line 1876 "version_array.m"
  MR_Box mercury__version_array__VA_5)
#line 1876 "version_array.m"
{
#line 1876 "version_array.m"
  {
#line 1876 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 1876 "version_array.m"
    MR_Word mercury__version_array__HeadVar__4_24;
#line 1876 "version_array.m"
    MR_Integer mercury__version_array__V_25_25 = (mercury__version_array__I_4 + (MR_Integer) 1);
#line 1866 "version_array.m"
    MR_Integer mercury__version_array__V_32_32;
#line 1866 "version_array.m"
    MR_Integer mercury__version_array__V_56_56;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_75;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__1876__1_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_5 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 1383 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_56_56  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_32_32 = (mercury__version_array__V_56_56 - (MR_Integer) 1);
#line 1866 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__V_25_25 > mercury__version_array__V_32_32);
#line 1865 "version_array.m"
    if (mercury__version_array__succeeded)
#line 1867 "version_array.m"
      {
#line 1865 "version_array.m"
        mercury__version_array__HeadVar__4_24 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
#line 1867 "version_array.m"
      }
#line 1865 "version_array.m"
    else
#line 1869 "version_array.m"
      {
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_34_34;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_35_35;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_36_36;
#line 1869 "version_array.m"
        MR_Box mercury__version_array__V_37_37;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_38_38;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_39_39;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_47_47;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_48_48;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_49_49;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_53_53;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_4_59;
#line 1871 "version_array.m"
        MR_Integer mercury__version_array__V_54_54;
#line 1871 "version_array.m"
        MR_Integer mercury__version_array__V_63_63;
#line 732 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_76;

#line 1870 "version_array.m"
        {
#line 1870 "version_array.m"
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
#line 1870 "version_array.m"
        {
#line 1870 "version_array.m"
          mercury__version_array__V_35_35 = mercury__pretty_printer__format_arg_1_f_0(mercury__version_array__V_36_36);
        }
#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__1876__1_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_5 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 1473 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_63_63  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
        mercury__version_array__V_54_54 = (mercury__version_array__V_63_63 - (MR_Integer) 1);
#line 1871 "version_array.m"
        mercury__version_array__succeeded = (mercury__version_array__V_25_25 == mercury__version_array__V_54_54);
#line 1875 "version_array.m"
        if (mercury__version_array__succeeded)
#line 1872 "version_array.m"
          {
#line 1875 "version_array.m"
            mercury__version_array__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
#line 1872 "version_array.m"
          }
#line 1875 "version_array.m"
        else
#line 1874 "version_array.m"
          {
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[1]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_4_66 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[6]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_5_67 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[2]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_7_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[5]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_6_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_8_70 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[3]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_9_71 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[4]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_10_72 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[3]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_12_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_11_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

#line 95 "pretty_printer.opt"
            mercury__version_array__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[4]);
#line 1874 "version_array.m"
          }
#line 1876 "version_array.m"
        {
#line 1876 "version_array.m"
          mercury__version_array__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 0) = ((MR_Box) (&mercury__version_array_scalar_common_7[0]));
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 1) = ((MR_Box) (mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__1876__1_3_f_0_1));
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 3) = ((MR_Box) (mercury__version_array__TypeInfo_for_T_28));
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 4) = ((MR_Box) (mercury__version_array__V_25_25));
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_49_49, 5) = ((MR_Box) (mercury__version_array__VA_5));
#line 1876 "version_array.m"
        }
#line 1877 "version_array.m"
        {
#line 1877 "version_array.m"
          mercury__version_array__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1877 "version_array.m"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1877 "version_array.m"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_48_48, 1) = ((MR_Box) (mercury__version_array__V_49_49));
#line 1877 "version_array.m"
        }
#line 1877 "version_array.m"
        mercury__version_array__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1875 "version_array.m"
        {
#line 1875 "version_array.m"
          mercury__version_array__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_47_47, 0) = ((MR_Box) (mercury__version_array__V_48_48));
#line 1875 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_47_47, 1) = ((MR_Box) (mercury__version_array__V_53_53));
#line 1875 "version_array.m"
        }
#line 1870 "version_array.m"
        {
#line 1870 "version_array.m"
          mercury__version_array__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1870 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_38_38, 0) = ((MR_Box) (mercury__version_array__V_39_39));
#line 1870 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_38_38, 1) = ((MR_Box) (mercury__version_array__V_47_47));
#line 1870 "version_array.m"
        }
#line 1869 "version_array.m"
        {
#line 1869 "version_array.m"
          mercury__version_array__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1869 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_34_34, 0) = ((MR_Box) (mercury__version_array__V_35_35));
#line 1869 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_34_34, 1) = ((MR_Box) (mercury__version_array__V_38_38));
#line 1869 "version_array.m"
        }
#line 1865 "version_array.m"
        {
#line 1865 "version_array.m"
          mercury__version_array__HeadVar__4_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "version_array.m"
          MR_hl_field(MR_mktag(2), mercury__version_array__HeadVar__4_24, 0) = ((MR_Box) (mercury__version_array__V_34_34));
#line 1865 "version_array.m"
        }
#line 1869 "version_array.m"
      }
#line 1876 "version_array.m"
    return mercury__version_array__HeadVar__4_24;
#line 1876 "version_array.m"
  }
#line 1876 "version_array.m"
}

#line 482 "version_array.m"
void MR_CALL 
mercury__version_array____Compare____version_array_1_0(
#line 482 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 482 "version_array.m"
  MR_Word * mercury__version_array__HeadVar__1_1,
#line 482 "version_array.m"
  MR_Box mercury__version_array__HeadVar__2_2,
#line 482 "version_array.m"
  MR_Box mercury__version_array__HeadVar__3_3)
#line 482 "version_array.m"
{
#line 482 "version_array.m"
  {
#line 482 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 482 "version_array.m"
    MR_Integer mercury__version_array__CastX_4 = (MR_Integer) mercury__version_array__HeadVar__2_2;
#line 482 "version_array.m"
    MR_Integer mercury__version_array__CastY_5 = (MR_Integer) mercury__version_array__HeadVar__3_3;

#line 482 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__CastX_4 == mercury__version_array__CastY_5);
#line 482 "version_array.m"
    if (mercury__version_array__succeeded)
#line 482 "version_array.m"
      *mercury__version_array__HeadVar__1_1 = (MR_Integer) 0;
#line 482 "version_array.m"
    else
#line 482 "version_array.m"
      {
#line 482 "version_array.m"
        mercury__version_array__cmp_version_array_3_p_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__HeadVar__1_1, mercury__version_array__HeadVar__2_2, mercury__version_array__HeadVar__3_3);
#line 482 "version_array.m"
        return;
      }
#line 482 "version_array.m"
  }
#line 482 "version_array.m"
}

#line 482 "version_array.m"
MR_bool MR_CALL 
mercury__version_array____Unify____version_array_1_0(
#line 482 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_5,
#line 482 "version_array.m"
  MR_Box mercury__version_array__HeadVar__1_1,
#line 482 "version_array.m"
  MR_Box mercury__version_array__HeadVar__2_2)
#line 482 "version_array.m"
{
#line 482 "version_array.m"
  {
#line 482 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 482 "version_array.m"
    MR_Integer mercury__version_array__CastX_3 = (MR_Integer) mercury__version_array__HeadVar__1_1;
#line 482 "version_array.m"
    MR_Integer mercury__version_array__CastY_4 = (MR_Integer) mercury__version_array__HeadVar__2_2;

#line 482 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__CastX_3 == mercury__version_array__CastY_4);
#line 482 "version_array.m"
    if (mercury__version_array__succeeded)
#line 482 "version_array.m"
      mercury__version_array__succeeded = MR_TRUE;
#line 482 "version_array.m"
    else
#line 482 "version_array.m"
      {
#line 482 "version_array.m"
        return mercury__version_array__succeeded = mercury__version_array__eq_version_array_2_p_0(mercury__version_array__TypeInfo_for_T_5, mercury__version_array__HeadVar__1_1, mercury__version_array__HeadVar__2_2);
      }
#line 482 "version_array.m"
    return mercury__version_array__succeeded;
#line 482 "version_array.m"
  }
#line 482 "version_array.m"
}

#line 69 "version_array.m"
void MR_CALL 
mercury__version_array____Compare____index_out_of_bounds_0_0(
#line 69 "version_array.m"
  MR_Word * mercury__version_array__HeadVar__1_1,
#line 69 "version_array.m"
  MR_Word mercury__version_array__HeadVar__2_2,
#line 69 "version_array.m"
  MR_Word mercury__version_array__HeadVar__3_3)
#line 69 "version_array.m"
{
#line 69 "version_array.m"
  {
#line 69 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 69 "version_array.m"
    MR_Integer mercury__version_array__CastX_6 = (MR_Integer) mercury__version_array__HeadVar__2_2;
#line 69 "version_array.m"
    MR_Integer mercury__version_array__CastY_7 = (MR_Integer) mercury__version_array__HeadVar__3_3;

#line 69 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__CastX_6 == mercury__version_array__CastY_7);
#line 69 "version_array.m"
    if (mercury__version_array__succeeded)
#line 1704 "version_array.c"
      *mercury__version_array__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "version_array.m"
    else
#line 69 "version_array.m"
      {
#line 69 "version_array.m"
        MR_String mercury__version_array__V_4_4 = (MR_String) mercury__version_array__HeadVar__2_2;
#line 69 "version_array.m"
        MR_String mercury__version_array__V_5_5 = (MR_String) mercury__version_array__HeadVar__3_3;
#line 69 "version_array.m"
        MR_Integer mercury__version_array__Res_7_12;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__version_array____Compare____index_out_of_bounds_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__version_array__V_4_4 ;
	S2 =  mercury__version_array__V_5_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 1732 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__Res_7_12  = Res;
#line 134 "private_builtin.opt"
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
#line 69 "version_array.m"
      }
#line 69 "version_array.m"
  }
#line 69 "version_array.m"
}

#line 69 "version_array.m"
MR_bool MR_CALL 
mercury__version_array____Unify____index_out_of_bounds_0_0(
#line 69 "version_array.m"
  MR_Word mercury__version_array__HeadVar__1_1,
#line 69 "version_array.m"
  MR_Word mercury__version_array__HeadVar__2_2)
#line 69 "version_array.m"
{
#line 69 "version_array.m"
  {
#line 69 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 69 "version_array.m"
    MR_Integer mercury__version_array__CastX_5 = (MR_Integer) mercury__version_array__HeadVar__1_1;
#line 69 "version_array.m"
    MR_Integer mercury__version_array__CastY_6 = (MR_Integer) mercury__version_array__HeadVar__2_2;

#line 69 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__CastX_5 == mercury__version_array__CastY_6);
#line 69 "version_array.m"
    if (mercury__version_array__succeeded)
#line 69 "version_array.m"
      mercury__version_array__succeeded = MR_TRUE;
#line 69 "version_array.m"
    else
#line 69 "version_array.m"
      {
#line 69 "version_array.m"
        MR_String mercury__version_array__V_3_3 = (MR_String) mercury__version_array__HeadVar__1_1;
#line 69 "version_array.m"
        MR_String mercury__version_array__V_4_4 = (MR_String) mercury__version_array__HeadVar__2_2;

#line 1801 "version_array.c"
        mercury__version_array__succeeded = (strcmp(mercury__version_array__V_3_3, mercury__version_array__V_4_4) == 0);
#line 69 "version_array.m"
      }
#line 69 "version_array.m"
    return mercury__version_array__succeeded;
#line 69 "version_array.m"
  }
#line 69 "version_array.m"
}

#line 1846 "version_array.m"
void MR_CALL 
mercury__version_array__out_of_bounds_error_3_p_0(
#line 1846 "version_array.m"
  MR_Integer mercury__version_array__Index_4,
#line 1846 "version_array.m"
  MR_Integer mercury__version_array__Max_5,
#line 1846 "version_array.m"
  MR_String mercury__version_array__PredName_6)
#line 1846 "version_array.m"
{
#line 1848 "version_array.m"
  {
#line 1848 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 1848 "version_array.m"
    MR_Word mercury__version_array__TypeCtorInfo_17_17;
#line 1848 "version_array.m"
    MR_String mercury__version_array__Msg_7;
#line 1848 "version_array.m"
    MR_Word mercury__version_array__V_16_16;
#line 1848 "version_array.m"
    MR_String mercury__version_array__V_19_19;
#line 1848 "version_array.m"
    MR_String mercury__version_array__V_20_20;
#line 1848 "version_array.m"
    MR_String mercury__version_array__V_22_22;
#line 1848 "version_array.m"
    MR_String mercury__version_array__V_23_23;
#line 1848 "version_array.m"
    MR_String mercury__version_array__V_24_24;
#line 1848 "version_array.m"
    MR_String mercury__version_array__V_26_26;

#line 284 "string.opt"
    {
#line 284 "string.opt"
      mercury__string__int_to_base_string_3_p_0(mercury__version_array__Max_5, (MR_Integer) 10, &mercury__version_array__V_19_19);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__version_array__V_19_19, (MR_String) "]", &mercury__version_array__V_20_20);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) " not in range [0, ", mercury__version_array__V_20_20, &mercury__version_array__V_22_22);
    }
#line 284 "string.opt"
    {
#line 284 "string.opt"
      mercury__string__int_to_base_string_3_p_0(mercury__version_array__Index_4, (MR_Integer) 10, &mercury__version_array__V_23_23);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__version_array__V_23_23, mercury__version_array__V_22_22, &mercury__version_array__V_24_24);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) ": index ", mercury__version_array__V_24_24, &mercury__version_array__V_26_26);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__version_array__PredName_6, mercury__version_array__V_26_26, &mercury__version_array__Msg_7);
    }
#line 1856 "version_array.m"
    mercury__version_array__V_16_16 = (MR_Word) mercury__version_array__Msg_7;
#line 1883 "version_array.c"
    mercury__version_array__TypeCtorInfo_17_17 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_index_out_of_bounds_0;
#line 1856 "version_array.m"
    {
#line 1856 "version_array.m"
      mercury__exception__throw_1_p_0(mercury__version_array__TypeCtorInfo_17_17, ((MR_Box) (mercury__version_array__V_16_16)));
#line 1856 "version_array.m"
      return;
    }
#line 1848 "version_array.m"
  }
#line 1846 "version_array.m"
}

#line 794 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__set_if_in_range_4_p_0(
#line 794 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_5,
#line 794 "version_array.m"
  MR_Integer mercury__version_array__HeadVar__1_1,
#line 794 "version_array.m"
  MR_Box mercury__version_array__HeadVar__2_2,
#line 794 "version_array.m"
  MR_Box mercury__version_array__HeadVar__3_3,
#line 794 "version_array.m"
  MR_Box * mercury__version_array__HeadVar__4_4)
#line 794 "version_array.m"
{
#line 797 "version_array.m"
  {
#line 797 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 797 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_6;

#line 801 "version_array.m"
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
#line 801 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);

#line 1937 "version_array.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, *mercury__version_array__HeadVar__4_4 );
#line 801 "version_array.m"
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
#line 797 "version_array.m"
    return mercury__version_array__succeeded;
#line 797 "version_array.m"
  }
#line 794 "version_array.m"
}

#line 756 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__get_if_in_range_3_p_0(
#line 756 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 756 "version_array.m"
  MR_Box mercury__version_array__HeadVar__1_1,
#line 756 "version_array.m"
  MR_Integer mercury__version_array__HeadVar__2_2,
#line 756 "version_array.m"
  MR_Box * mercury__version_array__HeadVar__3_3)
#line 756 "version_array.m"
{
#line 758 "version_array.m"
  {
#line 758 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 758 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_5;

#line 762 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__get_if_in_range_3_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__HeadVar__1_1 , VA);
	I =  mercury__version_array__HeadVar__2_2 ;
		{
#line 762 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);

#line 1990 "version_array.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__version_array__HeadVar__3_3  = (MR_Box) X;
#line 762 "version_array.m"
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
#line 758 "version_array.m"
    return mercury__version_array__succeeded;
#line 758 "version_array.m"
  }
#line 756 "version_array.m"
}

#line 523 "version_array.m"
static void MR_CALL 
mercury__version_array__cmp_version_array_2_5_p_0(
#line 523 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_16,
#line 523 "version_array.m"
  MR_Integer mercury__version_array__I_6,
#line 523 "version_array.m"
  MR_Integer mercury__version_array__Size_7,
#line 523 "version_array.m"
  MR_Box mercury__version_array__VAa_8,
#line 523 "version_array.m"
  MR_Box mercury__version_array__VAb_9,
#line 523 "version_array.m"
  MR_Word * mercury__version_array__R_10)
#line 523 "version_array.m"
{
#line 529 "version_array.m"
  while (MR_TRUE)
#line 529 "version_array.m"
    {
#line 529 "version_array.m"
      /* tailcall optimized into a loop */
#line 529 "version_array.m"
      {
#line 529 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_6 >= mercury__version_array__Size_7);

#line 529 "version_array.m"
        if (mercury__version_array__succeeded)
#line 528 "version_array.m"
          *mercury__version_array__R_10 = (MR_Integer) 0;
#line 529 "version_array.m"
        else
#line 530 "version_array.m"
          {
#line 530 "version_array.m"
            MR_Word mercury__version_array__R0_11;
#line 530 "version_array.m"
            MR_Box mercury__version_array__V_12_12;
#line 530 "version_array.m"
            MR_Box mercury__version_array__V_13_13;

#line 530 "version_array.m"
            {
#line 530 "version_array.m"
              mercury__version_array__V_12_12 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_16, mercury__version_array__VAa_8, mercury__version_array__I_6);
            }
#line 530 "version_array.m"
            {
#line 530 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_16, mercury__version_array__VAb_9, mercury__version_array__I_6);
            }
#line 530 "version_array.m"
            {
#line 530 "version_array.m"
              mercury__builtin__compare_3_p_0(mercury__version_array__TypeInfo_for_T_16, &mercury__version_array__R0_11, mercury__version_array__V_12_12, mercury__version_array__V_13_13);
            }
#line 534 "version_array.m"
            if ((mercury__version_array__R0_11 == (MR_Integer) 0))
#line 532 "version_array.m"
              {
#line 532 "version_array.m"
                MR_Integer mercury__version_array__V_14_14 = (mercury__version_array__I_6 + (MR_Integer) 1);

#line 533 "version_array.m"
                /* direct tailcall eliminated */
#line 533 "version_array.m"
                {
#line 533 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_6 = mercury__version_array__V_14_14;

#line 533 "version_array.m"
                  mercury__version_array__I_6 = mercury__version_array__I__tmp_copy_6;
#line 533 "version_array.m"
                }
#line 533 "version_array.m"
                continue;
#line 532 "version_array.m"
              }
#line 534 "version_array.m"
            else
#line 538 "version_array.m"
              *mercury__version_array__R_10 = mercury__version_array__R0_11;
#line 530 "version_array.m"
          }
#line 529 "version_array.m"
      }
#line 529 "version_array.m"
      break;
#line 529 "version_array.m"
    }
#line 523 "version_array.m"
}

#line 506 "version_array.m"
void MR_CALL 
mercury__version_array__cmp_version_array_3_p_0(
#line 506 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_11,
#line 506 "version_array.m"
  MR_Word * mercury__version_array__R_4,
#line 506 "version_array.m"
  MR_Box mercury__version_array__VAa_5,
#line 506 "version_array.m"
  MR_Box mercury__version_array__VAb_6)
#line 506 "version_array.m"
{
#line 509 "version_array.m"
  {
#line 509 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 509 "version_array.m"
    MR_Integer mercury__version_array__SizeA_7;
#line 509 "version_array.m"
    MR_Integer mercury__version_array__SizeB_8;
#line 509 "version_array.m"
    MR_Word mercury__version_array__SizeResult_9;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_16;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_17;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAa_5 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 2143 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__SizeA_7  = N;
#line 736 "version_array.m"
}
#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__cmp_version_array_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAb_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 2163 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__SizeB_8  = N;
#line 736 "version_array.m"
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
#line 516 "version_array.m"
    if ((mercury__version_array__SizeResult_9 == (MR_Integer) 0))
#line 514 "version_array.m"
      {
#line 515 "version_array.m"
        {
#line 515 "version_array.m"
          mercury__version_array__cmp_version_array_2_5_p_0(mercury__version_array__TypeInfo_for_T_11, (MR_Integer) 0, mercury__version_array__SizeA_7, mercury__version_array__VAa_5, mercury__version_array__VAb_6, mercury__version_array__R_4);
#line 515 "version_array.m"
          return;
        }
#line 514 "version_array.m"
      }
#line 516 "version_array.m"
    else
#line 520 "version_array.m"
      *mercury__version_array__R_4 = mercury__version_array__SizeResult_9;
#line 509 "version_array.m"
  }
#line 506 "version_array.m"
}

#line 494 "version_array.m"
static MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_3_p_0(
#line 494 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_11,
#line 494 "version_array.m"
  MR_Integer mercury__version_array__I_4,
#line 494 "version_array.m"
  MR_Box mercury__version_array__VAa_5,
#line 494 "version_array.m"
  MR_Box mercury__version_array__VAb_6)
#line 494 "version_array.m"
{
#line 501 "version_array.m"
  while (MR_TRUE)
#line 501 "version_array.m"
    {
#line 501 "version_array.m"
      /* tailcall optimized into a loop */
#line 501 "version_array.m"
      {
#line 501 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_4 >= (MR_Integer) 0);

#line 501 "version_array.m"
        if (mercury__version_array__succeeded)
#line 499 "version_array.m"
          {
#line 499 "version_array.m"
            MR_Box mercury__version_array__V_8_8;
#line 499 "version_array.m"
            MR_Integer mercury__version_array__V_9_9;
#line 499 "version_array.m"
            MR_Integer mercury__version_array__V_10_10;
#line 499 "version_array.m"
            MR_Box mercury__version_array__V_12_12;

#line 499 "version_array.m"
            {
#line 499 "version_array.m"
              mercury__version_array__V_8_8 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__VAa_5, mercury__version_array__I_4);
            }
#line 499 "version_array.m"
            {
#line 499 "version_array.m"
              mercury__version_array__V_12_12 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__VAb_6, mercury__version_array__I_4);
            }
#line 499 "version_array.m"
            {
#line 499 "version_array.m"
              mercury__version_array__succeeded = mercury__builtin__unify_2_p_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__V_8_8, mercury__version_array__V_12_12);
            }
#line 499 "version_array.m"
            if (mercury__version_array__succeeded)
#line 499 "version_array.m"
              {
#line 500 "version_array.m"
                mercury__version_array__V_10_10 = (MR_Integer) 1;
#line 500 "version_array.m"
                mercury__version_array__V_9_9 = (mercury__version_array__I_4 - mercury__version_array__V_10_10);
#line 500 "version_array.m"
                /* direct tailcall eliminated */
#line 500 "version_array.m"
                {
#line 500 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_4 = mercury__version_array__V_9_9;

#line 500 "version_array.m"
                  mercury__version_array__I_4 = mercury__version_array__I__tmp_copy_4;
#line 500 "version_array.m"
                }
#line 500 "version_array.m"
                continue;
#line 499 "version_array.m"
              }
#line 499 "version_array.m"
          }
#line 501 "version_array.m"
        else
#line 502 "version_array.m"
          mercury__version_array__succeeded = MR_TRUE;
#line 501 "version_array.m"
        return mercury__version_array__succeeded;
#line 501 "version_array.m"
      }
#line 501 "version_array.m"
      break;
#line 501 "version_array.m"
    }
#line 494 "version_array.m"
}

#line 486 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__eq_version_array_2_p_0(
#line 486 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 486 "version_array.m"
  MR_Box mercury__version_array__VAa_3,
#line 486 "version_array.m"
  MR_Box mercury__version_array__VAb_4)
#line 486 "version_array.m"
{
#line 489 "version_array.m"
  {
#line 489 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 489 "version_array.m"
    MR_Integer mercury__version_array__N_5;
#line 489 "version_array.m"
    MR_Integer mercury__version_array__V_7_7;
#line 489 "version_array.m"
    MR_Integer mercury__version_array__V_9_9;
#line 489 "version_array.m"
    MR_Integer mercury__version_array__V_12_12;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_14;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_15;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAa_3 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 2347 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_9_9  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__N_5 = (mercury__version_array__V_9_9 - (MR_Integer) 1);
#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__eq_version_array_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VAb_4 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 2369 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_12_12  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_7_7 = (mercury__version_array__V_12_12 - (MR_Integer) 1);
#line 491 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__N_5 == mercury__version_array__V_7_7);
#line 489 "version_array.m"
    if (mercury__version_array__succeeded)
#line 492 "version_array.m"
      {
#line 492 "version_array.m"
        return mercury__version_array__succeeded = mercury__version_array__eq_version_array_2_3_p_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__N_5, mercury__version_array__VAa_3, mercury__version_array__VAb_4);
      }
#line 489 "version_array.m"
    return mercury__version_array__succeeded;
#line 489 "version_array.m"
  }
#line 486 "version_array.m"
}

#line 437 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_5(
#line 437 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 437 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 437 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 437 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 437 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 437 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 437 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 437 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 437 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 437 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 437 "version_array.m"
{
#line 444 "version_array.m"
  while (MR_TRUE)
#line 444 "version_array.m"
    {
#line 444 "version_array.m"
      /* tailcall optimized into a loop */
#line 444 "version_array.m"
      {
#line 444 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 444 "version_array.m"
        if (mercury__version_array__succeeded)
#line 442 "version_array.m"
          {
#line 442 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 442 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 442 "version_array.m"
            MR_Integer mercury__version_array__V_24_24;
#line 442 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 442 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 442 "version_array.m"
            if (mercury__version_array__succeeded)
#line 442 "version_array.m"
              {
#line 443 "version_array.m"
                mercury__version_array__V_24_24 = (MR_Integer) 1;
#line 443 "version_array.m"
                mercury__version_array__V_21_21 = (mercury__version_array__I_10 - mercury__version_array__V_24_24);
#line 443 "version_array.m"
                /* direct tailcall eliminated */
#line 443 "version_array.m"
                {
#line 443 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 443 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 443 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 443 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 443 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 443 "version_array.m"
                  mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 443 "version_array.m"
                }
#line 443 "version_array.m"
                continue;
#line 442 "version_array.m"
              }
#line 442 "version_array.m"
          }
#line 444 "version_array.m"
        else
#line 445 "version_array.m"
          {
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 445 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 445 "version_array.m"
          }
#line 444 "version_array.m"
        return mercury__version_array__succeeded;
#line 444 "version_array.m"
      }
#line 444 "version_array.m"
      break;
#line 444 "version_array.m"
    }
#line 437 "version_array.m"
}

#line 435 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_4(
#line 435 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 435 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 435 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 435 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 435 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 435 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 435 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 435 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 435 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 435 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 435 "version_array.m"
{
#line 444 "version_array.m"
  while (MR_TRUE)
#line 444 "version_array.m"
    {
#line 444 "version_array.m"
      /* tailcall optimized into a loop */
#line 444 "version_array.m"
      {
#line 444 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 444 "version_array.m"
        if (mercury__version_array__succeeded)
#line 442 "version_array.m"
          {
#line 442 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 442 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 442 "version_array.m"
            MR_Integer mercury__version_array__V_24_24;
#line 442 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 442 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 442 "version_array.m"
            if (mercury__version_array__succeeded)
#line 442 "version_array.m"
              {
#line 443 "version_array.m"
                mercury__version_array__V_24_24 = (MR_Integer) 1;
#line 443 "version_array.m"
                mercury__version_array__V_21_21 = (mercury__version_array__I_10 - mercury__version_array__V_24_24);
#line 443 "version_array.m"
                /* direct tailcall eliminated */
#line 443 "version_array.m"
                {
#line 443 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 443 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 443 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 443 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 443 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 443 "version_array.m"
                  mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 443 "version_array.m"
                }
#line 443 "version_array.m"
                continue;
#line 442 "version_array.m"
              }
#line 442 "version_array.m"
          }
#line 444 "version_array.m"
        else
#line 445 "version_array.m"
          {
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 445 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 445 "version_array.m"
          }
#line 444 "version_array.m"
        return mercury__version_array__succeeded;
#line 444 "version_array.m"
      }
#line 444 "version_array.m"
      break;
#line 444 "version_array.m"
    }
#line 435 "version_array.m"
}

#line 433 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr2_7_p_3(
#line 433 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 433 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 433 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 433 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 433 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 433 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 433 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 433 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 433 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 433 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 433 "version_array.m"
{
#line 444 "version_array.m"
  while (MR_TRUE)
#line 444 "version_array.m"
    {
#line 444 "version_array.m"
      /* tailcall optimized into a loop */
#line 444 "version_array.m"
      {
#line 444 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 444 "version_array.m"
        if (mercury__version_array__succeeded)
#line 442 "version_array.m"
          {
#line 442 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 442 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 442 "version_array.m"
            MR_Integer mercury__version_array__V_24_24;
#line 442 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 442 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 442 "version_array.m"
            if (mercury__version_array__succeeded)
#line 442 "version_array.m"
              {
#line 443 "version_array.m"
                mercury__version_array__V_24_24 = (MR_Integer) 1;
#line 443 "version_array.m"
                mercury__version_array__V_21_21 = (mercury__version_array__I_10 - mercury__version_array__V_24_24);
#line 443 "version_array.m"
                /* direct tailcall eliminated */
#line 443 "version_array.m"
                {
#line 443 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 443 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 443 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 443 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 443 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 443 "version_array.m"
                  mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 443 "version_array.m"
                }
#line 443 "version_array.m"
                continue;
#line 442 "version_array.m"
              }
#line 442 "version_array.m"
          }
#line 444 "version_array.m"
        else
#line 445 "version_array.m"
          {
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 445 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 445 "version_array.m"
          }
#line 444 "version_array.m"
        return mercury__version_array__succeeded;
#line 444 "version_array.m"
      }
#line 444 "version_array.m"
      break;
#line 444 "version_array.m"
    }
#line 433 "version_array.m"
}

#line 431 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr2_7_p_2(
#line 431 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 431 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 431 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 431 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 431 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 431 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 431 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 431 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 431 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 431 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 431 "version_array.m"
{
#line 444 "version_array.m"
  while (MR_TRUE)
#line 444 "version_array.m"
    {
#line 444 "version_array.m"
      /* tailcall optimized into a loop */
#line 444 "version_array.m"
      {
#line 444 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 444 "version_array.m"
        if (mercury__version_array__succeeded)
#line 442 "version_array.m"
          {
#line 442 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 442 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 442 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 442 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 443 "version_array.m"
            mercury__version_array__V_21_21 = (mercury__version_array__I_10 - (MR_Integer) 1);
#line 443 "version_array.m"
            /* direct tailcall eliminated */
#line 443 "version_array.m"
            {
#line 443 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 443 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 443 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 443 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 443 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 443 "version_array.m"
              mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 443 "version_array.m"
            }
#line 443 "version_array.m"
            continue;
#line 442 "version_array.m"
          }
#line 444 "version_array.m"
        else
#line 445 "version_array.m"
          {
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 445 "version_array.m"
          }
#line 444 "version_array.m"
      }
#line 444 "version_array.m"
      break;
#line 444 "version_array.m"
    }
#line 431 "version_array.m"
}

#line 429 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr2_7_p_1(
#line 429 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 429 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 429 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 429 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 429 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 429 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 429 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 429 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 429 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 429 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 429 "version_array.m"
{
#line 444 "version_array.m"
  while (MR_TRUE)
#line 444 "version_array.m"
    {
#line 444 "version_array.m"
      /* tailcall optimized into a loop */
#line 444 "version_array.m"
      {
#line 444 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 444 "version_array.m"
        if (mercury__version_array__succeeded)
#line 442 "version_array.m"
          {
#line 442 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 442 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 442 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 442 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 443 "version_array.m"
            mercury__version_array__V_21_21 = (mercury__version_array__I_10 - (MR_Integer) 1);
#line 443 "version_array.m"
            /* direct tailcall eliminated */
#line 443 "version_array.m"
            {
#line 443 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 443 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 443 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 443 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 443 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 443 "version_array.m"
              mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 443 "version_array.m"
            }
#line 443 "version_array.m"
            continue;
#line 442 "version_array.m"
          }
#line 444 "version_array.m"
        else
#line 445 "version_array.m"
          {
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 445 "version_array.m"
          }
#line 444 "version_array.m"
      }
#line 444 "version_array.m"
      break;
#line 444 "version_array.m"
    }
#line 429 "version_array.m"
}

#line 427 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr2_7_p_0(
#line 427 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_25,
#line 427 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_26,
#line 427 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_27,
#line 427 "version_array.m"
  MR_Word mercury__version_array__P_8,
#line 427 "version_array.m"
  MR_Box mercury__version_array__VA_9,
#line 427 "version_array.m"
  MR_Integer mercury__version_array__I_10,
#line 427 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_13,
#line 427 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_14,
#line 427 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_15,
#line 427 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_16)
#line 427 "version_array.m"
{
#line 444 "version_array.m"
  while (MR_TRUE)
#line 444 "version_array.m"
    {
#line 444 "version_array.m"
      /* tailcall optimized into a loop */
#line 444 "version_array.m"
      {
#line 444 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_10 >= (MR_Integer) 0);

#line 444 "version_array.m"
        if (mercury__version_array__succeeded)
#line 442 "version_array.m"
          {
#line 442 "version_array.m"
            MR_Box mercury__version_array__V_18_18;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 442 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_20_20;
#line 442 "version_array.m"
            MR_Integer mercury__version_array__V_21_21;
#line 442 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__V_18_18 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_25, mercury__version_array__VA_9, mercury__version_array__I_10);
            }
#line 442 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_8, (MR_Integer) 1)));
#line 442 "version_array.m"
            {
#line 442 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_8), mercury__version_array__V_18_18, mercury__version_array__STATE_VARIABLE_Acc1_0_13, &mercury__version_array__STATE_VARIABLE_Acc1_19_19, mercury__version_array__STATE_VARIABLE_Acc2_0_15, &mercury__version_array__STATE_VARIABLE_Acc2_20_20);
            }
#line 443 "version_array.m"
            mercury__version_array__V_21_21 = (mercury__version_array__I_10 - (MR_Integer) 1);
#line 443 "version_array.m"
            /* direct tailcall eliminated */
#line 443 "version_array.m"
            {
#line 443 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_10 = mercury__version_array__V_21_21;
#line 443 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13 = mercury__version_array__STATE_VARIABLE_Acc1_19_19;
#line 443 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc2_20_20;

#line 443 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_15 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_15;
#line 443 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_13 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_13;
#line 443 "version_array.m"
              mercury__version_array__I_10 = mercury__version_array__I__tmp_copy_10;
#line 443 "version_array.m"
            }
#line 443 "version_array.m"
            continue;
#line 442 "version_array.m"
          }
#line 444 "version_array.m"
        else
#line 445 "version_array.m"
          {
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_16 = mercury__version_array__STATE_VARIABLE_Acc2_0_15;
#line 445 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_14 = mercury__version_array__STATE_VARIABLE_Acc1_0_13;
#line 445 "version_array.m"
          }
#line 444 "version_array.m"
      }
#line 444 "version_array.m"
      break;
#line 444 "version_array.m"
    }
#line 427 "version_array.m"
}

#line 409 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_5(
#line 409 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 409 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 409 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 409 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 409 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 409 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 409 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 409 "version_array.m"
{
#line 416 "version_array.m"
  while (MR_TRUE)
#line 416 "version_array.m"
    {
#line 416 "version_array.m"
      /* tailcall optimized into a loop */
#line 416 "version_array.m"
      {
#line 416 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 416 "version_array.m"
        if (mercury__version_array__succeeded)
#line 414 "version_array.m"
          {
#line 414 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 414 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 414 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 414 "version_array.m"
            MR_Integer mercury__version_array__V_17_17;
#line 414 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 414 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 414 "version_array.m"
            if (mercury__version_array__succeeded)
#line 414 "version_array.m"
              {
#line 415 "version_array.m"
                mercury__version_array__V_17_17 = (MR_Integer) 1;
#line 415 "version_array.m"
                mercury__version_array__V_15_15 = (mercury__version_array__I_8 - mercury__version_array__V_17_17);
#line 415 "version_array.m"
                /* direct tailcall eliminated */
#line 415 "version_array.m"
                {
#line 415 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 415 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 415 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 415 "version_array.m"
                  mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 415 "version_array.m"
                }
#line 415 "version_array.m"
                continue;
#line 414 "version_array.m"
              }
#line 414 "version_array.m"
          }
#line 416 "version_array.m"
        else
#line 415 "version_array.m"
          {
#line 415 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 415 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 415 "version_array.m"
          }
#line 416 "version_array.m"
        return mercury__version_array__succeeded;
#line 416 "version_array.m"
      }
#line 416 "version_array.m"
      break;
#line 416 "version_array.m"
    }
#line 409 "version_array.m"
}

#line 407 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_4(
#line 407 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 407 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 407 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 407 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 407 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 407 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 407 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 407 "version_array.m"
{
#line 416 "version_array.m"
  while (MR_TRUE)
#line 416 "version_array.m"
    {
#line 416 "version_array.m"
      /* tailcall optimized into a loop */
#line 416 "version_array.m"
      {
#line 416 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 416 "version_array.m"
        if (mercury__version_array__succeeded)
#line 414 "version_array.m"
          {
#line 414 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 414 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 414 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 414 "version_array.m"
            MR_Integer mercury__version_array__V_17_17;
#line 414 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 414 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 414 "version_array.m"
            if (mercury__version_array__succeeded)
#line 414 "version_array.m"
              {
#line 415 "version_array.m"
                mercury__version_array__V_17_17 = (MR_Integer) 1;
#line 415 "version_array.m"
                mercury__version_array__V_15_15 = (mercury__version_array__I_8 - mercury__version_array__V_17_17);
#line 415 "version_array.m"
                /* direct tailcall eliminated */
#line 415 "version_array.m"
                {
#line 415 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 415 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 415 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 415 "version_array.m"
                  mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 415 "version_array.m"
                }
#line 415 "version_array.m"
                continue;
#line 414 "version_array.m"
              }
#line 414 "version_array.m"
          }
#line 416 "version_array.m"
        else
#line 415 "version_array.m"
          {
#line 415 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 415 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 415 "version_array.m"
          }
#line 416 "version_array.m"
        return mercury__version_array__succeeded;
#line 416 "version_array.m"
      }
#line 416 "version_array.m"
      break;
#line 416 "version_array.m"
    }
#line 407 "version_array.m"
}

#line 405 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldr_pred_5_p_3(
#line 405 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 405 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 405 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 405 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 405 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 405 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 405 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 405 "version_array.m"
{
#line 416 "version_array.m"
  while (MR_TRUE)
#line 416 "version_array.m"
    {
#line 416 "version_array.m"
      /* tailcall optimized into a loop */
#line 416 "version_array.m"
      {
#line 416 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 416 "version_array.m"
        if (mercury__version_array__succeeded)
#line 414 "version_array.m"
          {
#line 414 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 414 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 414 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 414 "version_array.m"
            MR_Integer mercury__version_array__V_17_17;
#line 414 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 414 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 414 "version_array.m"
            if (mercury__version_array__succeeded)
#line 414 "version_array.m"
              {
#line 415 "version_array.m"
                mercury__version_array__V_17_17 = (MR_Integer) 1;
#line 415 "version_array.m"
                mercury__version_array__V_15_15 = (mercury__version_array__I_8 - mercury__version_array__V_17_17);
#line 415 "version_array.m"
                /* direct tailcall eliminated */
#line 415 "version_array.m"
                {
#line 415 "version_array.m"
                  MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 415 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 415 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 415 "version_array.m"
                  mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 415 "version_array.m"
                }
#line 415 "version_array.m"
                continue;
#line 414 "version_array.m"
              }
#line 414 "version_array.m"
          }
#line 416 "version_array.m"
        else
#line 415 "version_array.m"
          {
#line 415 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 415 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 415 "version_array.m"
          }
#line 416 "version_array.m"
        return mercury__version_array__succeeded;
#line 416 "version_array.m"
      }
#line 416 "version_array.m"
      break;
#line 416 "version_array.m"
    }
#line 405 "version_array.m"
}

#line 404 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_2(
#line 404 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 404 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 404 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 404 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 404 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 404 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 404 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 404 "version_array.m"
{
#line 416 "version_array.m"
  while (MR_TRUE)
#line 416 "version_array.m"
    {
#line 416 "version_array.m"
      /* tailcall optimized into a loop */
#line 416 "version_array.m"
      {
#line 416 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 416 "version_array.m"
        if (mercury__version_array__succeeded)
#line 414 "version_array.m"
          {
#line 414 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 414 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 414 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 414 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 414 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 415 "version_array.m"
            mercury__version_array__V_15_15 = (mercury__version_array__I_8 - (MR_Integer) 1);
#line 415 "version_array.m"
            /* direct tailcall eliminated */
#line 415 "version_array.m"
            {
#line 415 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 415 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 415 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 415 "version_array.m"
              mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 415 "version_array.m"
            }
#line 415 "version_array.m"
            continue;
#line 414 "version_array.m"
          }
#line 416 "version_array.m"
        else
#line 415 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 416 "version_array.m"
      }
#line 416 "version_array.m"
      break;
#line 416 "version_array.m"
    }
#line 404 "version_array.m"
}

#line 403 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_1(
#line 403 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 403 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 403 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 403 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 403 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 403 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 403 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 403 "version_array.m"
{
#line 416 "version_array.m"
  while (MR_TRUE)
#line 416 "version_array.m"
    {
#line 416 "version_array.m"
      /* tailcall optimized into a loop */
#line 416 "version_array.m"
      {
#line 416 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 416 "version_array.m"
        if (mercury__version_array__succeeded)
#line 414 "version_array.m"
          {
#line 414 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 414 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 414 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 414 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 414 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 415 "version_array.m"
            mercury__version_array__V_15_15 = (mercury__version_array__I_8 - (MR_Integer) 1);
#line 415 "version_array.m"
            /* direct tailcall eliminated */
#line 415 "version_array.m"
            {
#line 415 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 415 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 415 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 415 "version_array.m"
              mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 415 "version_array.m"
            }
#line 415 "version_array.m"
            continue;
#line 414 "version_array.m"
          }
#line 416 "version_array.m"
        else
#line 415 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 416 "version_array.m"
      }
#line 416 "version_array.m"
      break;
#line 416 "version_array.m"
    }
#line 403 "version_array.m"
}

#line 402 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldr_pred_5_p_0(
#line 402 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 402 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 402 "version_array.m"
  MR_Word mercury__version_array__P_6,
#line 402 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 402 "version_array.m"
  MR_Integer mercury__version_array__I_8,
#line 402 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_10,
#line 402 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_11)
#line 402 "version_array.m"
{
#line 416 "version_array.m"
  while (MR_TRUE)
#line 416 "version_array.m"
    {
#line 416 "version_array.m"
      /* tailcall optimized into a loop */
#line 416 "version_array.m"
      {
#line 416 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__I_8 >= (MR_Integer) 0);

#line 416 "version_array.m"
        if (mercury__version_array__succeeded)
#line 414 "version_array.m"
          {
#line 414 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 414 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_14_14;
#line 414 "version_array.m"
            MR_Integer mercury__version_array__V_15_15;
#line 414 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__VA_7, mercury__version_array__I_8);
            }
#line 414 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_6, (MR_Integer) 1)));
#line 414 "version_array.m"
            {
#line 414 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_6), mercury__version_array__V_13_13, mercury__version_array__STATE_VARIABLE_Acc_0_10, &mercury__version_array__STATE_VARIABLE_Acc_14_14);
            }
#line 415 "version_array.m"
            mercury__version_array__V_15_15 = (mercury__version_array__I_8 - (MR_Integer) 1);
#line 415 "version_array.m"
            /* direct tailcall eliminated */
#line 415 "version_array.m"
            {
#line 415 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_8 = mercury__version_array__V_15_15;
#line 415 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__version_array__STATE_VARIABLE_Acc_14_14;

#line 415 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_10 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 415 "version_array.m"
              mercury__version_array__I_8 = mercury__version_array__I__tmp_copy_8;
#line 415 "version_array.m"
            }
#line 415 "version_array.m"
            continue;
#line 414 "version_array.m"
          }
#line 416 "version_array.m"
        else
#line 415 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_11 = mercury__version_array__STATE_VARIABLE_Acc_0_10;
#line 416 "version_array.m"
      }
#line 416 "version_array.m"
      break;
#line 416 "version_array.m"
    }
#line 402 "version_array.m"
}

#line 387 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__do_foldr_func_4_f_0(
#line 387 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_15,
#line 387 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_16,
#line 387 "version_array.m"
  MR_Word mercury__version_array__F_6,
#line 387 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 387 "version_array.m"
  MR_Box mercury__version_array__Acc_8,
#line 387 "version_array.m"
  MR_Integer mercury__version_array__Hi_9)
#line 387 "version_array.m"
{
#line 389 "version_array.m"
  while (MR_TRUE)
#line 389 "version_array.m"
    {
#line 389 "version_array.m"
      /* tailcall optimized into a loop */
#line 389 "version_array.m"
      {
#line 389 "version_array.m"
        MR_bool mercury__version_array__succeeded = ((MR_Integer) 0 <= mercury__version_array__Hi_9);
#line 389 "version_array.m"
        MR_Box mercury__version_array__HeadVar__5_5;

#line 389 "version_array.m"
        if (mercury__version_array__succeeded)
#line 391 "version_array.m"
          {
#line 391 "version_array.m"
            MR_Box mercury__version_array__V_11_11;
#line 391 "version_array.m"
            MR_Box mercury__version_array__V_12_12;
#line 391 "version_array.m"
            MR_Integer mercury__version_array__V_13_13;
#line 391 "version_array.m"
            MR_Box MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box);

#line 391 "version_array.m"
            {
#line 391 "version_array.m"
              mercury__version_array__V_12_12 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_15, mercury__version_array__VA_7, mercury__version_array__Hi_9);
            }
#line 391 "version_array.m"
            mercury__version_array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_array__F_6, (MR_Integer) 1)));
#line 391 "version_array.m"
            {
#line 391 "version_array.m"
              mercury__version_array__V_11_11 = mercury__version_array__func_0(((MR_Box) mercury__version_array__F_6), mercury__version_array__V_12_12, mercury__version_array__Acc_8);
            }
#line 391 "version_array.m"
            mercury__version_array__V_13_13 = (mercury__version_array__Hi_9 - (MR_Integer) 1);
#line 389 "version_array.m"
            /* direct tailcall eliminated */
#line 389 "version_array.m"
            {
#line 389 "version_array.m"
              MR_Box mercury__version_array__Acc__tmp_copy_8 = mercury__version_array__V_11_11;
#line 389 "version_array.m"
              MR_Integer mercury__version_array__Hi__tmp_copy_9 = mercury__version_array__V_13_13;

#line 389 "version_array.m"
              mercury__version_array__Hi_9 = mercury__version_array__Hi__tmp_copy_9;
#line 389 "version_array.m"
              mercury__version_array__Acc_8 = mercury__version_array__Acc__tmp_copy_8;
#line 389 "version_array.m"
            }
#line 389 "version_array.m"
            continue;
#line 391 "version_array.m"
          }
#line 389 "version_array.m"
        else
#line 389 "version_array.m"
          mercury__version_array__HeadVar__5_5 = mercury__version_array__Acc_8;
#line 389 "version_array.m"
        return mercury__version_array__HeadVar__5_5;
#line 389 "version_array.m"
      }
#line 389 "version_array.m"
      break;
#line 389 "version_array.m"
    }
#line 387 "version_array.m"
}

#line 372 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_5(
#line 372 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 372 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 372 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 372 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 372 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 372 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 372 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 372 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 372 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 372 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 372 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 372 "version_array.m"
{
#line 379 "version_array.m"
  while (MR_TRUE)
#line 379 "version_array.m"
    {
#line 379 "version_array.m"
      /* tailcall optimized into a loop */
#line 379 "version_array.m"
      {
#line 379 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 379 "version_array.m"
        if (mercury__version_array__succeeded)
#line 377 "version_array.m"
          {
#line 377 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 377 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 377 "version_array.m"
            MR_Integer mercury__version_array__V_25_25;
#line 377 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 377 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 377 "version_array.m"
            if (mercury__version_array__succeeded)
#line 377 "version_array.m"
              {
#line 378 "version_array.m"
                mercury__version_array__V_25_25 = (MR_Integer) 1;
#line 378 "version_array.m"
                mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + mercury__version_array__V_25_25);
#line 378 "version_array.m"
                /* direct tailcall eliminated */
#line 378 "version_array.m"
                {
#line 378 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 378 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 378 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 378 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 378 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 378 "version_array.m"
                  mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 378 "version_array.m"
                }
#line 378 "version_array.m"
                continue;
#line 377 "version_array.m"
              }
#line 377 "version_array.m"
          }
#line 379 "version_array.m"
        else
#line 380 "version_array.m"
          {
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 380 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 380 "version_array.m"
          }
#line 379 "version_array.m"
        return mercury__version_array__succeeded;
#line 379 "version_array.m"
      }
#line 379 "version_array.m"
      break;
#line 379 "version_array.m"
    }
#line 372 "version_array.m"
}

#line 370 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_4(
#line 370 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 370 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 370 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 370 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 370 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 370 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 370 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 370 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 370 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 370 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 370 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 370 "version_array.m"
{
#line 379 "version_array.m"
  while (MR_TRUE)
#line 379 "version_array.m"
    {
#line 379 "version_array.m"
      /* tailcall optimized into a loop */
#line 379 "version_array.m"
      {
#line 379 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 379 "version_array.m"
        if (mercury__version_array__succeeded)
#line 377 "version_array.m"
          {
#line 377 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 377 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 377 "version_array.m"
            MR_Integer mercury__version_array__V_25_25;
#line 377 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 377 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 377 "version_array.m"
            if (mercury__version_array__succeeded)
#line 377 "version_array.m"
              {
#line 378 "version_array.m"
                mercury__version_array__V_25_25 = (MR_Integer) 1;
#line 378 "version_array.m"
                mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + mercury__version_array__V_25_25);
#line 378 "version_array.m"
                /* direct tailcall eliminated */
#line 378 "version_array.m"
                {
#line 378 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 378 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 378 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 378 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 378 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 378 "version_array.m"
                  mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 378 "version_array.m"
                }
#line 378 "version_array.m"
                continue;
#line 377 "version_array.m"
              }
#line 377 "version_array.m"
          }
#line 379 "version_array.m"
        else
#line 380 "version_array.m"
          {
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 380 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 380 "version_array.m"
          }
#line 379 "version_array.m"
        return mercury__version_array__succeeded;
#line 379 "version_array.m"
      }
#line 379 "version_array.m"
      break;
#line 379 "version_array.m"
    }
#line 370 "version_array.m"
}

#line 368 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl2_8_p_3(
#line 368 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 368 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 368 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 368 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 368 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 368 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 368 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 368 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 368 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 368 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 368 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 368 "version_array.m"
{
#line 379 "version_array.m"
  while (MR_TRUE)
#line 379 "version_array.m"
    {
#line 379 "version_array.m"
      /* tailcall optimized into a loop */
#line 379 "version_array.m"
      {
#line 379 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 379 "version_array.m"
        if (mercury__version_array__succeeded)
#line 377 "version_array.m"
          {
#line 377 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 377 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 377 "version_array.m"
            MR_Integer mercury__version_array__V_25_25;
#line 377 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 377 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 377 "version_array.m"
            if (mercury__version_array__succeeded)
#line 377 "version_array.m"
              {
#line 378 "version_array.m"
                mercury__version_array__V_25_25 = (MR_Integer) 1;
#line 378 "version_array.m"
                mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + mercury__version_array__V_25_25);
#line 378 "version_array.m"
                /* direct tailcall eliminated */
#line 378 "version_array.m"
                {
#line 378 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 378 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 378 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 378 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 378 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 378 "version_array.m"
                  mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 378 "version_array.m"
                }
#line 378 "version_array.m"
                continue;
#line 377 "version_array.m"
              }
#line 377 "version_array.m"
          }
#line 379 "version_array.m"
        else
#line 380 "version_array.m"
          {
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 380 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 380 "version_array.m"
          }
#line 379 "version_array.m"
        return mercury__version_array__succeeded;
#line 379 "version_array.m"
      }
#line 379 "version_array.m"
      break;
#line 379 "version_array.m"
    }
#line 368 "version_array.m"
}

#line 366 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl2_8_p_2(
#line 366 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 366 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 366 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 366 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 366 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 366 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 366 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 366 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 366 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 366 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 366 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 366 "version_array.m"
{
#line 379 "version_array.m"
  while (MR_TRUE)
#line 379 "version_array.m"
    {
#line 379 "version_array.m"
      /* tailcall optimized into a loop */
#line 379 "version_array.m"
      {
#line 379 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 379 "version_array.m"
        if (mercury__version_array__succeeded)
#line 377 "version_array.m"
          {
#line 377 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 377 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 377 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 377 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 378 "version_array.m"
            mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + (MR_Integer) 1);
#line 378 "version_array.m"
            /* direct tailcall eliminated */
#line 378 "version_array.m"
            {
#line 378 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 378 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 378 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 378 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 378 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 378 "version_array.m"
              mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 378 "version_array.m"
            }
#line 378 "version_array.m"
            continue;
#line 377 "version_array.m"
          }
#line 379 "version_array.m"
        else
#line 380 "version_array.m"
          {
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 380 "version_array.m"
          }
#line 379 "version_array.m"
      }
#line 379 "version_array.m"
      break;
#line 379 "version_array.m"
    }
#line 366 "version_array.m"
}

#line 364 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl2_8_p_1(
#line 364 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 364 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 364 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 364 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 364 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 364 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 364 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 364 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 364 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 364 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 364 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 364 "version_array.m"
{
#line 379 "version_array.m"
  while (MR_TRUE)
#line 379 "version_array.m"
    {
#line 379 "version_array.m"
      /* tailcall optimized into a loop */
#line 379 "version_array.m"
      {
#line 379 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 379 "version_array.m"
        if (mercury__version_array__succeeded)
#line 377 "version_array.m"
          {
#line 377 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 377 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 377 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 377 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 378 "version_array.m"
            mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + (MR_Integer) 1);
#line 378 "version_array.m"
            /* direct tailcall eliminated */
#line 378 "version_array.m"
            {
#line 378 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 378 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 378 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 378 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 378 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 378 "version_array.m"
              mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 378 "version_array.m"
            }
#line 378 "version_array.m"
            continue;
#line 377 "version_array.m"
          }
#line 379 "version_array.m"
        else
#line 380 "version_array.m"
          {
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 380 "version_array.m"
          }
#line 379 "version_array.m"
      }
#line 379 "version_array.m"
      break;
#line 379 "version_array.m"
    }
#line 364 "version_array.m"
}

#line 362 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl2_8_p_0(
#line 362 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_26,
#line 362 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_27,
#line 362 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_28,
#line 362 "version_array.m"
  MR_Word mercury__version_array__P_9,
#line 362 "version_array.m"
  MR_Box mercury__version_array__VA_10,
#line 362 "version_array.m"
  MR_Integer mercury__version_array__Lo_11,
#line 362 "version_array.m"
  MR_Integer mercury__version_array__Hi_12,
#line 362 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_15,
#line 362 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_16,
#line 362 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_17,
#line 362 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_18)
#line 362 "version_array.m"
{
#line 379 "version_array.m"
  while (MR_TRUE)
#line 379 "version_array.m"
    {
#line 379 "version_array.m"
      /* tailcall optimized into a loop */
#line 379 "version_array.m"
      {
#line 379 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_11 < mercury__version_array__Hi_12);

#line 379 "version_array.m"
        if (mercury__version_array__succeeded)
#line 377 "version_array.m"
          {
#line 377 "version_array.m"
            MR_Box mercury__version_array__V_19_19;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 377 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc2_21_21;
#line 377 "version_array.m"
            MR_Integer mercury__version_array__V_22_22;
#line 377 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__V_19_19 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_26, mercury__version_array__VA_10, mercury__version_array__Lo_11);
            }
#line 377 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_9, (MR_Integer) 1)));
#line 377 "version_array.m"
            {
#line 377 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_9), mercury__version_array__V_19_19, mercury__version_array__STATE_VARIABLE_Acc1_0_15, &mercury__version_array__STATE_VARIABLE_Acc1_20_20, mercury__version_array__STATE_VARIABLE_Acc2_0_17, &mercury__version_array__STATE_VARIABLE_Acc2_21_21);
            }
#line 378 "version_array.m"
            mercury__version_array__V_22_22 = (mercury__version_array__Lo_11 + (MR_Integer) 1);
#line 378 "version_array.m"
            /* direct tailcall eliminated */
#line 378 "version_array.m"
            {
#line 378 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_11 = mercury__version_array__V_22_22;
#line 378 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15 = mercury__version_array__STATE_VARIABLE_Acc1_20_20;
#line 378 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17 = mercury__version_array__STATE_VARIABLE_Acc2_21_21;

#line 378 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc2_0_17 = mercury__version_array__STATE_VARIABLE_Acc2_0__tmp_copy_17;
#line 378 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc1_0_15 = mercury__version_array__STATE_VARIABLE_Acc1_0__tmp_copy_15;
#line 378 "version_array.m"
              mercury__version_array__Lo_11 = mercury__version_array__Lo__tmp_copy_11;
#line 378 "version_array.m"
            }
#line 378 "version_array.m"
            continue;
#line 377 "version_array.m"
          }
#line 379 "version_array.m"
        else
#line 380 "version_array.m"
          {
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc2_18 = mercury__version_array__STATE_VARIABLE_Acc2_0_17;
#line 380 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc1_16 = mercury__version_array__STATE_VARIABLE_Acc1_0_15;
#line 380 "version_array.m"
          }
#line 379 "version_array.m"
      }
#line 379 "version_array.m"
      break;
#line 379 "version_array.m"
    }
#line 362 "version_array.m"
}

#line 344 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_5(
#line 344 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 344 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 344 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 344 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 344 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 344 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 344 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 344 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 344 "version_array.m"
{
#line 351 "version_array.m"
  while (MR_TRUE)
#line 351 "version_array.m"
    {
#line 351 "version_array.m"
      /* tailcall optimized into a loop */
#line 351 "version_array.m"
      {
#line 351 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 351 "version_array.m"
        if (mercury__version_array__succeeded)
#line 349 "version_array.m"
          {
#line 349 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 349 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 349 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 349 "version_array.m"
            MR_Integer mercury__version_array__V_18_18;
#line 349 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 349 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 349 "version_array.m"
            if (mercury__version_array__succeeded)
#line 349 "version_array.m"
              {
#line 350 "version_array.m"
                mercury__version_array__V_18_18 = (MR_Integer) 1;
#line 350 "version_array.m"
                mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + mercury__version_array__V_18_18);
#line 350 "version_array.m"
                /* direct tailcall eliminated */
#line 350 "version_array.m"
                {
#line 350 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 350 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 350 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 350 "version_array.m"
                  mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 350 "version_array.m"
                }
#line 350 "version_array.m"
                continue;
#line 349 "version_array.m"
              }
#line 349 "version_array.m"
          }
#line 351 "version_array.m"
        else
#line 350 "version_array.m"
          {
#line 350 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 350 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 350 "version_array.m"
          }
#line 351 "version_array.m"
        return mercury__version_array__succeeded;
#line 351 "version_array.m"
      }
#line 351 "version_array.m"
      break;
#line 351 "version_array.m"
    }
#line 344 "version_array.m"
}

#line 342 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_4(
#line 342 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 342 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 342 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 342 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 342 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 342 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 342 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 342 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 342 "version_array.m"
{
#line 351 "version_array.m"
  while (MR_TRUE)
#line 351 "version_array.m"
    {
#line 351 "version_array.m"
      /* tailcall optimized into a loop */
#line 351 "version_array.m"
      {
#line 351 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 351 "version_array.m"
        if (mercury__version_array__succeeded)
#line 349 "version_array.m"
          {
#line 349 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 349 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 349 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 349 "version_array.m"
            MR_Integer mercury__version_array__V_18_18;
#line 349 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 349 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 349 "version_array.m"
            if (mercury__version_array__succeeded)
#line 349 "version_array.m"
              {
#line 350 "version_array.m"
                mercury__version_array__V_18_18 = (MR_Integer) 1;
#line 350 "version_array.m"
                mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + mercury__version_array__V_18_18);
#line 350 "version_array.m"
                /* direct tailcall eliminated */
#line 350 "version_array.m"
                {
#line 350 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 350 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 350 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 350 "version_array.m"
                  mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 350 "version_array.m"
                }
#line 350 "version_array.m"
                continue;
#line 349 "version_array.m"
              }
#line 349 "version_array.m"
          }
#line 351 "version_array.m"
        else
#line 350 "version_array.m"
          {
#line 350 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 350 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 350 "version_array.m"
          }
#line 351 "version_array.m"
        return mercury__version_array__succeeded;
#line 351 "version_array.m"
      }
#line 351 "version_array.m"
      break;
#line 351 "version_array.m"
    }
#line 342 "version_array.m"
}

#line 340 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__do_foldl_pred_6_p_3(
#line 340 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 340 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 340 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 340 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 340 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 340 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 340 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 340 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 340 "version_array.m"
{
#line 351 "version_array.m"
  while (MR_TRUE)
#line 351 "version_array.m"
    {
#line 351 "version_array.m"
      /* tailcall optimized into a loop */
#line 351 "version_array.m"
      {
#line 351 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 351 "version_array.m"
        if (mercury__version_array__succeeded)
#line 349 "version_array.m"
          {
#line 349 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 349 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 349 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 349 "version_array.m"
            MR_Integer mercury__version_array__V_18_18;
#line 349 "version_array.m"
            MR_bool MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 349 "version_array.m"
            mercury__version_array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__succeeded = mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 349 "version_array.m"
            if (mercury__version_array__succeeded)
#line 349 "version_array.m"
              {
#line 350 "version_array.m"
                mercury__version_array__V_18_18 = (MR_Integer) 1;
#line 350 "version_array.m"
                mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + mercury__version_array__V_18_18);
#line 350 "version_array.m"
                /* direct tailcall eliminated */
#line 350 "version_array.m"
                {
#line 350 "version_array.m"
                  MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 350 "version_array.m"
                  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 350 "version_array.m"
                  mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 350 "version_array.m"
                  mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 350 "version_array.m"
                }
#line 350 "version_array.m"
                continue;
#line 349 "version_array.m"
              }
#line 349 "version_array.m"
          }
#line 351 "version_array.m"
        else
#line 350 "version_array.m"
          {
#line 350 "version_array.m"
            *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 350 "version_array.m"
            mercury__version_array__succeeded = MR_TRUE;
#line 350 "version_array.m"
          }
#line 351 "version_array.m"
        return mercury__version_array__succeeded;
#line 351 "version_array.m"
      }
#line 351 "version_array.m"
      break;
#line 351 "version_array.m"
    }
#line 340 "version_array.m"
}

#line 339 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_2(
#line 339 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 339 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 339 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 339 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 339 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 339 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 339 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 339 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 339 "version_array.m"
{
#line 351 "version_array.m"
  while (MR_TRUE)
#line 351 "version_array.m"
    {
#line 351 "version_array.m"
      /* tailcall optimized into a loop */
#line 351 "version_array.m"
      {
#line 351 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 351 "version_array.m"
        if (mercury__version_array__succeeded)
#line 349 "version_array.m"
          {
#line 349 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 349 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 349 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 349 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 349 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 350 "version_array.m"
            mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + (MR_Integer) 1);
#line 350 "version_array.m"
            /* direct tailcall eliminated */
#line 350 "version_array.m"
            {
#line 350 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 350 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 350 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 350 "version_array.m"
              mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 350 "version_array.m"
            }
#line 350 "version_array.m"
            continue;
#line 349 "version_array.m"
          }
#line 351 "version_array.m"
        else
#line 350 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 351 "version_array.m"
      }
#line 351 "version_array.m"
      break;
#line 351 "version_array.m"
    }
#line 339 "version_array.m"
}

#line 338 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_1(
#line 338 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 338 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 338 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 338 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 338 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 338 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 338 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 338 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 338 "version_array.m"
{
#line 351 "version_array.m"
  while (MR_TRUE)
#line 351 "version_array.m"
    {
#line 351 "version_array.m"
      /* tailcall optimized into a loop */
#line 351 "version_array.m"
      {
#line 351 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 351 "version_array.m"
        if (mercury__version_array__succeeded)
#line 349 "version_array.m"
          {
#line 349 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 349 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 349 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 349 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 349 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 350 "version_array.m"
            mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + (MR_Integer) 1);
#line 350 "version_array.m"
            /* direct tailcall eliminated */
#line 350 "version_array.m"
            {
#line 350 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 350 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 350 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 350 "version_array.m"
              mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 350 "version_array.m"
            }
#line 350 "version_array.m"
            continue;
#line 349 "version_array.m"
          }
#line 351 "version_array.m"
        else
#line 350 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 351 "version_array.m"
      }
#line 351 "version_array.m"
      break;
#line 351 "version_array.m"
    }
#line 338 "version_array.m"
}

#line 337 "version_array.m"
void MR_CALL 
mercury__version_array__do_foldl_pred_6_p_0(
#line 337 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 337 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 337 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 337 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 337 "version_array.m"
  MR_Integer mercury__version_array__Lo_9,
#line 337 "version_array.m"
  MR_Integer mercury__version_array__Hi_10,
#line 337 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_12,
#line 337 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_13)
#line 337 "version_array.m"
{
#line 351 "version_array.m"
  while (MR_TRUE)
#line 351 "version_array.m"
    {
#line 351 "version_array.m"
      /* tailcall optimized into a loop */
#line 351 "version_array.m"
      {
#line 351 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_9 < mercury__version_array__Hi_10);

#line 351 "version_array.m"
        if (mercury__version_array__succeeded)
#line 349 "version_array.m"
          {
#line 349 "version_array.m"
            MR_Box mercury__version_array__V_14_14;
#line 349 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_Acc_15_15;
#line 349 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;
#line 349 "version_array.m"
            void MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__V_14_14 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__VA_8, mercury__version_array__Lo_9);
            }
#line 349 "version_array.m"
            mercury__version_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_array__P_7, (MR_Integer) 1)));
#line 349 "version_array.m"
            {
#line 349 "version_array.m"
              mercury__version_array__func_0(((MR_Box) mercury__version_array__P_7), mercury__version_array__V_14_14, mercury__version_array__STATE_VARIABLE_Acc_0_12, &mercury__version_array__STATE_VARIABLE_Acc_15_15);
            }
#line 350 "version_array.m"
            mercury__version_array__V_16_16 = (mercury__version_array__Lo_9 + (MR_Integer) 1);
#line 350 "version_array.m"
            /* direct tailcall eliminated */
#line 350 "version_array.m"
            {
#line 350 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_9 = mercury__version_array__V_16_16;
#line 350 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12 = mercury__version_array__STATE_VARIABLE_Acc_15_15;

#line 350 "version_array.m"
              mercury__version_array__STATE_VARIABLE_Acc_0_12 = mercury__version_array__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 350 "version_array.m"
              mercury__version_array__Lo_9 = mercury__version_array__Lo__tmp_copy_9;
#line 350 "version_array.m"
            }
#line 350 "version_array.m"
            continue;
#line 349 "version_array.m"
          }
#line 351 "version_array.m"
        else
#line 350 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_Acc_13 = mercury__version_array__STATE_VARIABLE_Acc_0_12;
#line 351 "version_array.m"
      }
#line 351 "version_array.m"
      break;
#line 351 "version_array.m"
    }
#line 337 "version_array.m"
}

#line 322 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__do_foldl_func_5_f_0(
#line 322 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_16,
#line 322 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_17,
#line 322 "version_array.m"
  MR_Word mercury__version_array__F_7,
#line 322 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 322 "version_array.m"
  MR_Box mercury__version_array__Acc_9,
#line 322 "version_array.m"
  MR_Integer mercury__version_array__Lo_10,
#line 322 "version_array.m"
  MR_Integer mercury__version_array__Hi_11)
#line 322 "version_array.m"
{
#line 324 "version_array.m"
  while (MR_TRUE)
#line 324 "version_array.m"
    {
#line 324 "version_array.m"
      /* tailcall optimized into a loop */
#line 324 "version_array.m"
      {
#line 324 "version_array.m"
        MR_bool mercury__version_array__succeeded = (mercury__version_array__Lo_10 < mercury__version_array__Hi_11);
#line 324 "version_array.m"
        MR_Box mercury__version_array__HeadVar__6_6;

#line 324 "version_array.m"
        if (mercury__version_array__succeeded)
#line 326 "version_array.m"
          {
#line 326 "version_array.m"
            MR_Box mercury__version_array__V_12_12;
#line 326 "version_array.m"
            MR_Box mercury__version_array__V_13_13;
#line 326 "version_array.m"
            MR_Integer mercury__version_array__V_14_14;
#line 326 "version_array.m"
            MR_Box MR_CALL (* mercury__version_array__func_0)(MR_Box, MR_Box, MR_Box);

#line 326 "version_array.m"
            {
#line 326 "version_array.m"
              mercury__version_array__V_13_13 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T1_16, mercury__version_array__VA_8, mercury__version_array__Lo_10);
            }
#line 326 "version_array.m"
            mercury__version_array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_array__F_7, (MR_Integer) 1)));
#line 326 "version_array.m"
            {
#line 326 "version_array.m"
              mercury__version_array__V_12_12 = mercury__version_array__func_0(((MR_Box) mercury__version_array__F_7), mercury__version_array__V_13_13, mercury__version_array__Acc_9);
            }
#line 326 "version_array.m"
            mercury__version_array__V_14_14 = (mercury__version_array__Lo_10 + (MR_Integer) 1);
#line 324 "version_array.m"
            /* direct tailcall eliminated */
#line 324 "version_array.m"
            {
#line 324 "version_array.m"
              MR_Box mercury__version_array__Acc__tmp_copy_9 = mercury__version_array__V_12_12;
#line 324 "version_array.m"
              MR_Integer mercury__version_array__Lo__tmp_copy_10 = mercury__version_array__V_14_14;

#line 324 "version_array.m"
              mercury__version_array__Lo_10 = mercury__version_array__Lo__tmp_copy_10;
#line 324 "version_array.m"
              mercury__version_array__Acc_9 = mercury__version_array__Acc__tmp_copy_9;
#line 324 "version_array.m"
            }
#line 324 "version_array.m"
            continue;
#line 326 "version_array.m"
          }
#line 324 "version_array.m"
        else
#line 324 "version_array.m"
          mercury__version_array__HeadVar__6_6 = mercury__version_array__Acc_9;
#line 324 "version_array.m"
        return mercury__version_array__HeadVar__6_6;
#line 324 "version_array.m"
      }
#line 324 "version_array.m"
      break;
#line 324 "version_array.m"
    }
#line 322 "version_array.m"
}

#line 261 "version_array.m"
static void MR_CALL 
mercury__version_array__version_array_2_4_p_0(
#line 261 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_19,
#line 261 "version_array.m"
  MR_Integer mercury__version_array__I_1,
#line 261 "version_array.m"
  MR_Word mercury__version_array__HeadVar__2_2,
#line 261 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_VA_0_3,
#line 261 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_VA_4)
#line 261 "version_array.m"
{
#line 264 "version_array.m"
  while (MR_TRUE)
#line 264 "version_array.m"
    {
#line 264 "version_array.m"
      /* tailcall optimized into a loop */
#line 264 "version_array.m"
      {
#line 264 "version_array.m"
        MR_bool mercury__version_array__succeeded;

#line 264 "version_array.m"
        if ((mercury__version_array__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "version_array.m"
          *mercury__version_array__STATE_VARIABLE_VA_4 = mercury__version_array__STATE_VARIABLE_VA_0_3;
#line 264 "version_array.m"
        else
#line 265 "version_array.m"
          {
#line 265 "version_array.m"
            MR_Box mercury__version_array__X_10 = (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__2_2, (MR_Integer) 0));
#line 265 "version_array.m"
            MR_Word mercury__version_array__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__2_2, (MR_Integer) 1)));
#line 265 "version_array.m"
            MR_Box mercury__version_array__STATE_VARIABLE_VA_15_15;
#line 265 "version_array.m"
            MR_Integer mercury__version_array__V_16_16;

#line 266 "version_array.m"
            {
#line 266 "version_array.m"
              mercury__version_array__set_4_p_0(mercury__version_array__TypeInfo_for_T_19, mercury__version_array__I_1, mercury__version_array__X_10, mercury__version_array__STATE_VARIABLE_VA_0_3, &mercury__version_array__STATE_VARIABLE_VA_15_15);
            }
#line 267 "version_array.m"
            mercury__version_array__V_16_16 = (mercury__version_array__I_1 + (MR_Integer) 1);
#line 267 "version_array.m"
            /* direct tailcall eliminated */
#line 267 "version_array.m"
            {
#line 267 "version_array.m"
              MR_Integer mercury__version_array__I__tmp_copy_1 = mercury__version_array__V_16_16;
#line 267 "version_array.m"
              MR_Word mercury__version_array__HeadVar__2__tmp_copy_2 = mercury__version_array__Xs_11;
#line 267 "version_array.m"
              MR_Box mercury__version_array__STATE_VARIABLE_VA_0__tmp_copy_3 = mercury__version_array__STATE_VARIABLE_VA_15_15;

#line 267 "version_array.m"
              mercury__version_array__STATE_VARIABLE_VA_0_3 = mercury__version_array__STATE_VARIABLE_VA_0__tmp_copy_3;
#line 267 "version_array.m"
              mercury__version_array__HeadVar__2_2 = mercury__version_array__HeadVar__2__tmp_copy_2;
#line 267 "version_array.m"
              mercury__version_array__I_1 = mercury__version_array__I__tmp_copy_1;
#line 267 "version_array.m"
            }
#line 267 "version_array.m"
            continue;
#line 265 "version_array.m"
          }
#line 264 "version_array.m"
      }
#line 264 "version_array.m"
      break;
#line 264 "version_array.m"
    }
#line 261 "version_array.m"
}

#line 1876 "version_array.m"
static MR_Box MR_CALL 
mercury__version_array__version_array_to_doc_1_f_0_1(
#line 1876 "version_array.m"
  MR_Box mercury__version_array__closure_arg)
#line 1876 "version_array.m"
{
#line 1876 "version_array.m"
  {
#line 1876 "version_array.m"
    MR_Box mercury__version_array__wrapper_arg_1;
#line 1876 "version_array.m"
    MR_Box mercury__version_array__closure = mercury__version_array__closure_arg;
#line 1876 "version_array.m"
    MR_Word mercury__version_array__conv0_HeadVar__4_24;

#line 1876 "version_array.m"
    {
#line 1876 "version_array.m"
      mercury__version_array__conv0_HeadVar__4_24 = mercury__version_array__IntroducedFrom__func__version_array_to_doc_2__1876__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 4))), ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_array__closure, (MR_Integer) 5))));
    }
#line 1876 "version_array.m"
    mercury__version_array__wrapper_arg_1 = ((MR_Box) (mercury__version_array__conv0_HeadVar__4_24));
#line 1876 "version_array.m"
    return mercury__version_array__wrapper_arg_1;
#line 1876 "version_array.m"
  }
#line 1876 "version_array.m"
}

#line 233 "version_array.m"
MR_Word MR_CALL 
mercury__version_array__version_array_to_doc_1_f_0(
#line 233 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_14,
#line 233 "version_array.m"
  MR_Box mercury__version_array__A_3)
#line 233 "version_array.m"
{
#line 1860 "version_array.m"
  {
#line 1860 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__HeadVar__2_2;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_4_4;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[1]);
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_7_7;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_8_8;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_10_10;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_11_11;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_13_13;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_6_65;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_7_66;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_9_67;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_8_68;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_10_69;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_11_70;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_12_71;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_14_72;
#line 1860 "version_array.m"
    MR_Word mercury__version_array__V_13_73;
#line 1866 "version_array.m"
    MR_Integer mercury__version_array__V_17_17;
#line 1866 "version_array.m"
    MR_Integer mercury__version_array__V_41_41;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_74;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__version_array_to_doc_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__A_3 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 5325 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_41_41  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_17_17 = (mercury__version_array__V_41_41 - (MR_Integer) 1);
#line 1866 "version_array.m"
    mercury__version_array__succeeded = ((MR_Integer) 0 > mercury__version_array__V_17_17);
#line 1865 "version_array.m"
    if (mercury__version_array__succeeded)
#line 1867 "version_array.m"
      {
#line 1865 "version_array.m"
        mercury__version_array__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
#line 1867 "version_array.m"
      }
#line 1865 "version_array.m"
    else
#line 1869 "version_array.m"
      {
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_19_19;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_20_20;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_21_21;
#line 1869 "version_array.m"
        MR_Box mercury__version_array__V_22_22;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_23_23;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_24_24;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_32_32;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_33_33;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_34_34;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_38_38;
#line 1869 "version_array.m"
        MR_Word mercury__version_array__V_4_44;
#line 1871 "version_array.m"
        MR_Integer mercury__version_array__V_39_39;
#line 1871 "version_array.m"
        MR_Integer mercury__version_array__V_48_48;
#line 732 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_75;

#line 1870 "version_array.m"
        {
#line 1870 "version_array.m"
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
#line 1870 "version_array.m"
        {
#line 1870 "version_array.m"
          mercury__version_array__V_20_20 = mercury__pretty_printer__format_arg_1_f_0(mercury__version_array__V_21_21);
        }
#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__version_array_to_doc_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__A_3 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 5415 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_48_48  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
        mercury__version_array__V_39_39 = (mercury__version_array__V_48_48 - (MR_Integer) 1);
#line 1871 "version_array.m"
        mercury__version_array__succeeded = ((MR_Integer) 0 == mercury__version_array__V_39_39);
#line 1875 "version_array.m"
        if (mercury__version_array__succeeded)
#line 1872 "version_array.m"
          {
#line 1875 "version_array.m"
            mercury__version_array__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[2]);
#line 1872 "version_array.m"
          }
#line 1875 "version_array.m"
        else
#line 1874 "version_array.m"
          {
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[1]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_4_51 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[6]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_5_52 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[2]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_7_53 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[5]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_6_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_8_55 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[3]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_9_56 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[4]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_10_57 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__version_array_scalar_common_4[3]);
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_12_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1874 "version_array.m"
            MR_Word mercury__version_array__V_11_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

#line 95 "pretty_printer.opt"
            mercury__version_array__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__version_array_scalar_common_5[4]);
#line 1874 "version_array.m"
          }
#line 1876 "version_array.m"
        {
#line 1876 "version_array.m"
          mercury__version_array__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 0) = ((MR_Box) (&mercury__version_array_scalar_common_7[0]));
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 1) = ((MR_Box) (mercury__version_array__version_array_to_doc_1_f_0_1));
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 3) = ((MR_Box) (mercury__version_array__TypeInfo_for_T_14));
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1876 "version_array.m"
          MR_hl_field(MR_mktag(0), mercury__version_array__V_34_34, 5) = ((MR_Box) (mercury__version_array__A_3));
#line 1876 "version_array.m"
        }
#line 1877 "version_array.m"
        {
#line 1877 "version_array.m"
          mercury__version_array__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1877 "version_array.m"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1877 "version_array.m"
          MR_hl_field(MR_mktag(3), mercury__version_array__V_33_33, 1) = ((MR_Box) (mercury__version_array__V_34_34));
#line 1877 "version_array.m"
        }
#line 1877 "version_array.m"
        mercury__version_array__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1875 "version_array.m"
        {
#line 1875 "version_array.m"
          mercury__version_array__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_32_32, 0) = ((MR_Box) (mercury__version_array__V_33_33));
#line 1875 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_32_32, 1) = ((MR_Box) (mercury__version_array__V_38_38));
#line 1875 "version_array.m"
        }
#line 1870 "version_array.m"
        {
#line 1870 "version_array.m"
          mercury__version_array__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1870 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_23_23, 0) = ((MR_Box) (mercury__version_array__V_24_24));
#line 1870 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_23_23, 1) = ((MR_Box) (mercury__version_array__V_32_32));
#line 1870 "version_array.m"
        }
#line 1869 "version_array.m"
        {
#line 1869 "version_array.m"
          mercury__version_array__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1869 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_19_19, 0) = ((MR_Box) (mercury__version_array__V_20_20));
#line 1869 "version_array.m"
          MR_hl_field(MR_mktag(1), mercury__version_array__V_19_19, 1) = ((MR_Box) (mercury__version_array__V_23_23));
#line 1869 "version_array.m"
        }
#line 1865 "version_array.m"
        {
#line 1865 "version_array.m"
          mercury__version_array__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "version_array.m"
          MR_hl_field(MR_mktag(2), mercury__version_array__V_8_8, 0) = ((MR_Box) (mercury__version_array__V_19_19));
#line 1865 "version_array.m"
        }
#line 1869 "version_array.m"
      }
#line 1861 "version_array.m"
    mercury__version_array__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_5[5]);
#line 1861 "version_array.m"
    mercury__version_array__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1861 "version_array.m"
    mercury__version_array__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__version_array_scalar_common_4[7]);
#line 1861 "version_array.m"
    {
#line 1861 "version_array.m"
      mercury__version_array__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1861 "version_array.m"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_7_7, 0) = ((MR_Box) (mercury__version_array__V_8_8));
#line 1861 "version_array.m"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_7_7, 1) = ((MR_Box) (mercury__version_array__V_10_10));
#line 1861 "version_array.m"
    }
#line 1861 "version_array.m"
    {
#line 1861 "version_array.m"
      mercury__version_array__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1861 "version_array.m"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_4_4, 0) = ((MR_Box) (mercury__version_array__V_5_5));
#line 1861 "version_array.m"
      MR_hl_field(MR_mktag(1), mercury__version_array__V_4_4, 1) = ((MR_Box) (mercury__version_array__V_7_7));
#line 1861 "version_array.m"
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
#line 1860 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 1860 "version_array.m"
  }
#line 233 "version_array.m"
}

#line 229 "version_array.m"
void MR_CALL 
mercury__version_array__unsafe_rewind_2_p_0(
#line 229 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 229 "version_array.m"
  MR_Box mercury__version_array__VA_3,
#line 229 "version_array.m"
  MR_Box * mercury__version_array__HeadVar__2_2)
#line 229 "version_array.m"
{
#line 833 "version_array.m"
  {
#line 833 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 833 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_5;

#line 837 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__unsafe_rewind_2_p_0

	struct ML_va * VA0;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA0);
		{
#line 837 "version_array.m"

    VA = ML_va_rewind_dolock(VA0);

#line 5645 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, *mercury__version_array__HeadVar__2_2 );
#line 837 "version_array.m"
}
#line 833 "version_array.m"
  }
#line 229 "version_array.m"
}

#line 228 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__unsafe_rewind_1_f_0(
#line 228 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_3,
#line 228 "version_array.m"
  MR_Box mercury__version_array__HeadVar__1_1)
#line 228 "version_array.m"
{
#line 833 "version_array.m"
  {
#line 833 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 833 "version_array.m"
    MR_Box mercury__version_array__HeadVar__2_2;
#line 833 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_4;

#line 837 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__unsafe_rewind_1_f_0

	struct ML_va * VA0;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__HeadVar__1_1 , VA0);
		{
#line 837 "version_array.m"

    VA = ML_va_rewind_dolock(VA0);

#line 5688 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__2_2 );
#line 837 "version_array.m"
}
#line 833 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 833 "version_array.m"
  }
#line 228 "version_array.m"
}

#line 220 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__copy_1_f_0(
#line 220 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_8,
#line 220 "version_array.m"
  MR_Box mercury__version_array__VA_3)
#line 220 "version_array.m"
{
#line 305 "version_array.m"
  {
#line 305 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 305 "version_array.m"
    MR_Box mercury__version_array__HeadVar__2_2;
#line 306 "version_array.m"
    MR_Integer mercury__version_array__V_4_4;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_9;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__copy_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 5735 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_4_4  = N;
#line 736 "version_array.m"
}
#line 306 "version_array.m"
    mercury__version_array__succeeded = (mercury__version_array__V_4_4 == (MR_Integer) 0);
#line 305 "version_array.m"
    if (mercury__version_array__succeeded)
#line 305 "version_array.m"
      mercury__version_array__HeadVar__2_2 = mercury__version_array__VA_3;
#line 305 "version_array.m"
    else
#line 309 "version_array.m"
      {
#line 309 "version_array.m"
        MR_Integer mercury__version_array__V_5_5;
#line 309 "version_array.m"
        MR_Box mercury__version_array__V_6_6;
#line 732 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_10;
#line 706 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_11;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__copy_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 5774 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_5_5  = N;
#line 736 "version_array.m"
}
#line 309 "version_array.m"
        {
#line 309 "version_array.m"
          mercury__version_array__V_6_6 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_8, mercury__version_array__VA_3, (MR_Integer) 0);
        }
#line 710 "version_array.m"
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
#line 710 "version_array.m"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);

#line 5803 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__2_2 );
#line 710 "version_array.m"
}
#line 309 "version_array.m"
      }
#line 305 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 305 "version_array.m"
  }
#line 220 "version_array.m"
}

#line 215 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_5(
#line 215 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 215 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 215 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 215 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 215 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 215 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 215 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 215 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 215 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 215 "version_array.m"
{
#line 422 "version_array.m"
  {
#line 422 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 5866 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 423 "version_array.m"
    {
#line 423 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr2_7_p_5(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 422 "version_array.m"
    return mercury__version_array__succeeded;
#line 422 "version_array.m"
  }
#line 215 "version_array.m"
}

#line 213 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_4(
#line 213 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 213 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 213 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 213 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 213 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 213 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 213 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 213 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 213 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 213 "version_array.m"
{
#line 422 "version_array.m"
  {
#line 422 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 5934 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 423 "version_array.m"
    {
#line 423 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr2_7_p_4(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 422 "version_array.m"
    return mercury__version_array__succeeded;
#line 422 "version_array.m"
  }
#line 213 "version_array.m"
}

#line 211 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr2_6_p_3(
#line 211 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 211 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 211 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 211 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 211 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 211 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 211 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 211 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 211 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 211 "version_array.m"
{
#line 422 "version_array.m"
  {
#line 422 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6002 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 423 "version_array.m"
    {
#line 423 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr2_7_p_3(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 422 "version_array.m"
    return mercury__version_array__succeeded;
#line 422 "version_array.m"
  }
#line 211 "version_array.m"
}

#line 209 "version_array.m"
void MR_CALL 
mercury__version_array__foldr2_6_p_2(
#line 209 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 209 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 209 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 209 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 209 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 209 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 209 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 209 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 209 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 209 "version_array.m"
{
#line 422 "version_array.m"
  {
#line 422 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6070 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 423 "version_array.m"
    {
#line 423 "version_array.m"
      mercury__version_array__do_foldr2_7_p_2(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 423 "version_array.m"
      return;
    }
#line 422 "version_array.m"
  }
#line 209 "version_array.m"
}

#line 207 "version_array.m"
void MR_CALL 
mercury__version_array__foldr2_6_p_1(
#line 207 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 207 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 207 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 207 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 207 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 207 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 207 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 207 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 207 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 207 "version_array.m"
{
#line 422 "version_array.m"
  {
#line 422 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6138 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 423 "version_array.m"
    {
#line 423 "version_array.m"
      mercury__version_array__do_foldr2_7_p_1(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 423 "version_array.m"
      return;
    }
#line 422 "version_array.m"
  }
#line 207 "version_array.m"
}

#line 205 "version_array.m"
void MR_CALL 
mercury__version_array__foldr2_6_p_0(
#line 205 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_18,
#line 205 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_19,
#line 205 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_20,
#line 205 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 205 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 205 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 205 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 205 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 205 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 205 "version_array.m"
{
#line 422 "version_array.m"
  {
#line 422 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 422 "version_array.m"
    MR_Integer mercury__version_array__V_22_22;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_24;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr2_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6206 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_22_22  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_22_22 - (MR_Integer) 1);
#line 423 "version_array.m"
    {
#line 423 "version_array.m"
      mercury__version_array__do_foldr2_7_p_0(mercury__version_array__TypeInfo_for_T1_18, mercury__version_array__TypeInfo_for_T2_19, mercury__version_array__TypeInfo_for_T3_20, mercury__version_array__P_7, mercury__version_array__VA_8, mercury__version_array__V_15_15, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 423 "version_array.m"
      return;
    }
#line 422 "version_array.m"
  }
#line 205 "version_array.m"
}

#line 202 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr_4_p_5(
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
#line 398 "version_array.m"
  {
#line 398 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6268 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 399 "version_array.m"
    {
#line 399 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr_pred_5_p_5(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 398 "version_array.m"
    return mercury__version_array__succeeded;
#line 398 "version_array.m"
  }
#line 202 "version_array.m"
}

#line 201 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr_4_p_4(
#line 201 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
#line 201 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
#line 201 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 201 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 201 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 201 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 201 "version_array.m"
{
#line 398 "version_array.m"
  {
#line 398 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6330 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 399 "version_array.m"
    {
#line 399 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr_pred_5_p_4(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 398 "version_array.m"
    return mercury__version_array__succeeded;
#line 398 "version_array.m"
  }
#line 201 "version_array.m"
}

#line 200 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldr_4_p_3(
#line 200 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
#line 200 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
#line 200 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 200 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 200 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 200 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 200 "version_array.m"
{
#line 398 "version_array.m"
  {
#line 398 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6392 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 399 "version_array.m"
    {
#line 399 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldr_pred_5_p_3(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 398 "version_array.m"
    return mercury__version_array__succeeded;
#line 398 "version_array.m"
  }
#line 200 "version_array.m"
}

#line 199 "version_array.m"
void MR_CALL 
mercury__version_array__foldr_4_p_2(
#line 199 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
#line 199 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
#line 199 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 199 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 199 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 199 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 199 "version_array.m"
{
#line 398 "version_array.m"
  {
#line 398 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6454 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 399 "version_array.m"
    {
#line 399 "version_array.m"
      mercury__version_array__do_foldr_pred_5_p_2(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 399 "version_array.m"
      return;
    }
#line 398 "version_array.m"
  }
#line 199 "version_array.m"
}

#line 198 "version_array.m"
void MR_CALL 
mercury__version_array__foldr_4_p_1(
#line 198 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
#line 198 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
#line 198 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 198 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 198 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 198 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 198 "version_array.m"
{
#line 398 "version_array.m"
  {
#line 398 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6516 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 399 "version_array.m"
    {
#line 399 "version_array.m"
      mercury__version_array__do_foldr_pred_5_p_1(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 399 "version_array.m"
      return;
    }
#line 398 "version_array.m"
  }
#line 198 "version_array.m"
}

#line 197 "version_array.m"
void MR_CALL 
mercury__version_array__foldr_4_p_0(
#line 197 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_12,
#line 197 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_13,
#line 197 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 197 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 197 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 197 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 197 "version_array.m"
{
#line 398 "version_array.m"
  {
#line 398 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_10_10;
#line 398 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_17;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6578 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_15_15  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_10_10 = (mercury__version_array__V_15_15 - (MR_Integer) 1);
#line 399 "version_array.m"
    {
#line 399 "version_array.m"
      mercury__version_array__do_foldr_pred_5_p_0(mercury__version_array__TypeInfo_for_T1_12, mercury__version_array__TypeInfo_for_T2_13, mercury__version_array__P_5, mercury__version_array__VA_6, mercury__version_array__V_10_10, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 399 "version_array.m"
      return;
    }
#line 398 "version_array.m"
  }
#line 197 "version_array.m"
}

#line 194 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__foldr_3_f_0(
#line 194 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_9,
#line 194 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_10,
#line 194 "version_array.m"
  MR_Word mercury__version_array__F_5,
#line 194 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 194 "version_array.m"
  MR_Box mercury__version_array__Acc_7)
#line 194 "version_array.m"
{
#line 385 "version_array.m"
  {
#line 385 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 385 "version_array.m"
    MR_Box mercury__version_array__HeadVar__4_4;
#line 385 "version_array.m"
    MR_Integer mercury__version_array__V_8_8;
#line 385 "version_array.m"
    MR_Integer mercury__version_array__V_12_12;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_14;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldr_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6640 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_12_12  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_8_8 = (mercury__version_array__V_12_12 - (MR_Integer) 1);
#line 385 "version_array.m"
    {
#line 385 "version_array.m"
      return mercury__version_array__HeadVar__4_4 = mercury__version_array__do_foldr_func_4_f_0(mercury__version_array__TypeInfo_for_T1_9, mercury__version_array__TypeInfo_for_T2_10, mercury__version_array__F_5, mercury__version_array__VA_6, mercury__version_array__Acc_7, mercury__version_array__V_8_8);
    }
#line 385 "version_array.m"
    return mercury__version_array__HeadVar__4_4;
#line 385 "version_array.m"
  }
#line 194 "version_array.m"
}

#line 189 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_5(
#line 189 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 189 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 189 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 189 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 189 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 189 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 189 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 189 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 189 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 189 "version_array.m"
{
#line 357 "version_array.m"
  {
#line 357 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 357 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6706 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 736 "version_array.m"
}
#line 358 "version_array.m"
    {
#line 358 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl2_8_p_5(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 357 "version_array.m"
    return mercury__version_array__succeeded;
#line 357 "version_array.m"
  }
#line 189 "version_array.m"
}

#line 187 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_4(
#line 187 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 187 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 187 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 187 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 187 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 187 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 187 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 187 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 187 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 187 "version_array.m"
{
#line 357 "version_array.m"
  {
#line 357 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 357 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6770 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 736 "version_array.m"
}
#line 358 "version_array.m"
    {
#line 358 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl2_8_p_4(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 357 "version_array.m"
    return mercury__version_array__succeeded;
#line 357 "version_array.m"
  }
#line 187 "version_array.m"
}

#line 185 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl2_6_p_3(
#line 185 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 185 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 185 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 185 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 185 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 185 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 185 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 185 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 185 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 185 "version_array.m"
{
#line 357 "version_array.m"
  {
#line 357 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 357 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6834 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 736 "version_array.m"
}
#line 358 "version_array.m"
    {
#line 358 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl2_8_p_3(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
    }
#line 357 "version_array.m"
    return mercury__version_array__succeeded;
#line 357 "version_array.m"
  }
#line 185 "version_array.m"
}

#line 183 "version_array.m"
void MR_CALL 
mercury__version_array__foldl2_6_p_2(
#line 183 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 183 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 183 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 183 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 183 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 183 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 183 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 183 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 183 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 183 "version_array.m"
{
#line 357 "version_array.m"
  {
#line 357 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 357 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6898 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 736 "version_array.m"
}
#line 358 "version_array.m"
    {
#line 358 "version_array.m"
      mercury__version_array__do_foldl2_8_p_2(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 358 "version_array.m"
      return;
    }
#line 357 "version_array.m"
  }
#line 183 "version_array.m"
}

#line 181 "version_array.m"
void MR_CALL 
mercury__version_array__foldl2_6_p_1(
#line 181 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 181 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 181 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 181 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 181 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 181 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 181 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 181 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 181 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 181 "version_array.m"
{
#line 357 "version_array.m"
  {
#line 357 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 357 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 6962 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 736 "version_array.m"
}
#line 358 "version_array.m"
    {
#line 358 "version_array.m"
      mercury__version_array__do_foldl2_8_p_1(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 358 "version_array.m"
      return;
    }
#line 357 "version_array.m"
  }
#line 181 "version_array.m"
}

#line 179 "version_array.m"
void MR_CALL 
mercury__version_array__foldl2_6_p_0(
#line 179 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_19,
#line 179 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_20,
#line 179 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T3_21,
#line 179 "version_array.m"
  MR_Word mercury__version_array__P_7,
#line 179 "version_array.m"
  MR_Box mercury__version_array__VA_8,
#line 179 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc1_0_11,
#line 179 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc1_12,
#line 179 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc2_0_13,
#line 179 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc2_14)
#line 179 "version_array.m"
{
#line 357 "version_array.m"
  {
#line 357 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 357 "version_array.m"
    MR_Integer mercury__version_array__V_16_16;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_22;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl2_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7026 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 736 "version_array.m"
}
#line 358 "version_array.m"
    {
#line 358 "version_array.m"
      mercury__version_array__do_foldl2_8_p_0(mercury__version_array__TypeInfo_for_T1_19, mercury__version_array__TypeInfo_for_T2_20, mercury__version_array__TypeInfo_for_T3_21, mercury__version_array__P_7, mercury__version_array__VA_8, (MR_Integer) 0, mercury__version_array__V_16_16, mercury__version_array__STATE_VARIABLE_Acc1_0_11, mercury__version_array__STATE_VARIABLE_Acc1_12, mercury__version_array__STATE_VARIABLE_Acc2_0_13, mercury__version_array__STATE_VARIABLE_Acc2_14);
#line 358 "version_array.m"
      return;
    }
#line 357 "version_array.m"
  }
#line 179 "version_array.m"
}

#line 173 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl_4_p_5(
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
#line 333 "version_array.m"
  {
#line 333 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 333 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7084 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 736 "version_array.m"
}
#line 334 "version_array.m"
    {
#line 334 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl_pred_6_p_5(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 333 "version_array.m"
    return mercury__version_array__succeeded;
#line 333 "version_array.m"
  }
#line 173 "version_array.m"
}

#line 172 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl_4_p_4(
#line 172 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
#line 172 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
#line 172 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 172 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 172 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 172 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 172 "version_array.m"
{
#line 333 "version_array.m"
  {
#line 333 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 333 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7142 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 736 "version_array.m"
}
#line 334 "version_array.m"
    {
#line 334 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl_pred_6_p_4(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 333 "version_array.m"
    return mercury__version_array__succeeded;
#line 333 "version_array.m"
  }
#line 172 "version_array.m"
}

#line 171 "version_array.m"
MR_bool MR_CALL 
mercury__version_array__foldl_4_p_3(
#line 171 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
#line 171 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
#line 171 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 171 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 171 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 171 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 171 "version_array.m"
{
#line 333 "version_array.m"
  {
#line 333 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 333 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7200 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 736 "version_array.m"
}
#line 334 "version_array.m"
    {
#line 334 "version_array.m"
      return mercury__version_array__succeeded = mercury__version_array__do_foldl_pred_6_p_3(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
    }
#line 333 "version_array.m"
    return mercury__version_array__succeeded;
#line 333 "version_array.m"
  }
#line 171 "version_array.m"
}

#line 170 "version_array.m"
void MR_CALL 
mercury__version_array__foldl_4_p_2(
#line 170 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
#line 170 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
#line 170 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 170 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 170 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 170 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 170 "version_array.m"
{
#line 333 "version_array.m"
  {
#line 333 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 333 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7258 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 736 "version_array.m"
}
#line 334 "version_array.m"
    {
#line 334 "version_array.m"
      mercury__version_array__do_foldl_pred_6_p_2(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 334 "version_array.m"
      return;
    }
#line 333 "version_array.m"
  }
#line 170 "version_array.m"
}

#line 169 "version_array.m"
void MR_CALL 
mercury__version_array__foldl_4_p_1(
#line 169 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
#line 169 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
#line 169 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 169 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 169 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 169 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 169 "version_array.m"
{
#line 333 "version_array.m"
  {
#line 333 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 333 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7316 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 736 "version_array.m"
}
#line 334 "version_array.m"
    {
#line 334 "version_array.m"
      mercury__version_array__do_foldl_pred_6_p_1(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 334 "version_array.m"
      return;
    }
#line 333 "version_array.m"
  }
#line 169 "version_array.m"
}

#line 168 "version_array.m"
void MR_CALL 
mercury__version_array__foldl_4_p_0(
#line 168 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_13,
#line 168 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_14,
#line 168 "version_array.m"
  MR_Word mercury__version_array__P_5,
#line 168 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 168 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_Acc_0_8,
#line 168 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_Acc_9)
#line 168 "version_array.m"
{
#line 333 "version_array.m"
  {
#line 333 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 333 "version_array.m"
    MR_Integer mercury__version_array__V_11_11;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_15;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7374 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_11_11  = N;
#line 736 "version_array.m"
}
#line 334 "version_array.m"
    {
#line 334 "version_array.m"
      mercury__version_array__do_foldl_pred_6_p_0(mercury__version_array__TypeInfo_for_T1_13, mercury__version_array__TypeInfo_for_T2_14, mercury__version_array__P_5, mercury__version_array__VA_6, (MR_Integer) 0, mercury__version_array__V_11_11, mercury__version_array__STATE_VARIABLE_Acc_0_8, mercury__version_array__STATE_VARIABLE_Acc_9);
#line 334 "version_array.m"
      return;
    }
#line 333 "version_array.m"
  }
#line 168 "version_array.m"
}

#line 163 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__foldl_3_f_0(
#line 163 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T1_10,
#line 163 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T2_11,
#line 163 "version_array.m"
  MR_Word mercury__version_array__F_5,
#line 163 "version_array.m"
  MR_Box mercury__version_array__VA_6,
#line 163 "version_array.m"
  MR_Box mercury__version_array__Acc_7)
#line 163 "version_array.m"
{
#line 320 "version_array.m"
  {
#line 320 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 320 "version_array.m"
    MR_Box mercury__version_array__HeadVar__4_4;
#line 320 "version_array.m"
    MR_Integer mercury__version_array__V_9_9;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T1_12;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__foldl_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_6 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7432 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_9_9  = N;
#line 736 "version_array.m"
}
#line 320 "version_array.m"
    {
#line 320 "version_array.m"
      return mercury__version_array__HeadVar__4_4 = mercury__version_array__do_foldl_func_5_f_0(mercury__version_array__TypeInfo_for_T1_10, mercury__version_array__TypeInfo_for_T2_11, mercury__version_array__F_5, mercury__version_array__VA_6, mercury__version_array__Acc_7, (MR_Integer) 0, mercury__version_array__V_9_9);
    }
#line 320 "version_array.m"
    return mercury__version_array__HeadVar__4_4;
#line 320 "version_array.m"
  }
#line 163 "version_array.m"
}

#line 159 "version_array.m"
MR_Word MR_CALL 
mercury__version_array__to_list_1_f_0(
#line 159 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 159 "version_array.m"
  MR_Box mercury__version_array__VA_3)
#line 159 "version_array.m"
{
#line 316 "version_array.m"
  {
#line 316 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 316 "version_array.m"
    MR_Word mercury__version_array__HeadVar__2_2;

#line 316 "version_array.m"
    {
#line 316 "version_array.m"
      return mercury__version_array__HeadVar__2_2 = mercury__version_array__list_1_f_0(mercury__version_array__TypeInfo_for_T_4, mercury__version_array__VA_3);
    }
#line 316 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 316 "version_array.m"
  }
#line 159 "version_array.m"
}

#line 155 "version_array.m"
MR_Word MR_CALL 
mercury__version_array__list_1_f_0(
#line 155 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 155 "version_array.m"
  MR_Box mercury__version_array__VA_3)
#line 155 "version_array.m"
{
#line 314 "version_array.m"
  {
#line 314 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 314 "version_array.m"
    MR_Word mercury__version_array__HeadVar__2_2;
#line 314 "version_array.m"
    MR_Word mercury__version_array__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 314 "version_array.m"
    MR_Integer mercury__version_array__V_15_15;
#line 314 "version_array.m"
    MR_Integer mercury__version_array__V_18_18;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_20;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__list_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7516 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_18_18  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__V_15_15 = (mercury__version_array__V_18_18 - (MR_Integer) 1);
#line 385 "version_array.m"
    {
#line 385 "version_array.m"
      return mercury__version_array__HeadVar__2_2 = mercury__version_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__VA_3, mercury__version_array__V_5_5, mercury__version_array__V_15_15);
    }
#line 314 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 314 "version_array.m"
  }
#line 155 "version_array.m"
}

#line 149 "version_array.m"
void MR_CALL 
mercury__version_array__resize_4_p_0(
#line 149 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_8,
#line 149 "version_array.m"
  MR_Integer mercury__version_array__N_5,
#line 149 "version_array.m"
  MR_Box mercury__version_array__X_6,
#line 149 "version_array.m"
  MR_Box mercury__version_array__VA_7,
#line 149 "version_array.m"
  MR_Box * mercury__version_array__HeadVar__4_4)
#line 149 "version_array.m"
{
#line 706 "version_array.m"
  {
#line 706 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 706 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_9;

#line 710 "version_array.m"
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
#line 710 "version_array.m"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);

#line 7576 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, *mercury__version_array__HeadVar__4_4 );
#line 710 "version_array.m"
}
#line 706 "version_array.m"
  }
#line 149 "version_array.m"
}

#line 148 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__resize_3_f_0(
#line 148 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_5,
#line 148 "version_array.m"
  MR_Box mercury__version_array__HeadVar__1_1,
#line 148 "version_array.m"
  MR_Integer mercury__version_array__HeadVar__2_2,
#line 148 "version_array.m"
  MR_Box mercury__version_array__HeadVar__3_3)
#line 148 "version_array.m"
{
#line 706 "version_array.m"
  {
#line 706 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 706 "version_array.m"
    MR_Box mercury__version_array__HeadVar__4_4;
#line 706 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_6;

#line 710 "version_array.m"
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
#line 710 "version_array.m"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);

#line 7627 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__4_4 );
#line 710 "version_array.m"
}
#line 706 "version_array.m"
    return mercury__version_array__HeadVar__4_4;
#line 706 "version_array.m"
  }
#line 148 "version_array.m"
}

#line 141 "version_array.m"
MR_Integer MR_CALL 
mercury__version_array__max_1_f_0(
#line 141 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 141 "version_array.m"
  MR_Box mercury__version_array__VA_3)
#line 141 "version_array.m"
{
#line 301 "version_array.m"
  {
#line 301 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 301 "version_array.m"
    MR_Integer mercury__version_array__HeadVar__2_2;
#line 301 "version_array.m"
    MR_Integer mercury__version_array__V_4_4;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_7;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__max_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_3 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7674 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_4_4  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
    mercury__version_array__HeadVar__2_2 = (mercury__version_array__V_4_4 - (MR_Integer) 1);
#line 301 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 301 "version_array.m"
  }
#line 141 "version_array.m"
}

#line 137 "version_array.m"
MR_Integer MR_CALL 
mercury__version_array__size_1_f_0(
#line 137 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_3,
#line 137 "version_array.m"
  MR_Box mercury__version_array__HeadVar__1_1)
#line 137 "version_array.m"
{
#line 732 "version_array.m"
  {
#line 732 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 732 "version_array.m"
    MR_Integer mercury__version_array__HeadVar__2_2;
#line 732 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_4;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__size_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__HeadVar__1_1 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7721 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__HeadVar__2_2  = N;
#line 736 "version_array.m"
}
#line 732 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 732 "version_array.m"
  }
#line 137 "version_array.m"
}

#line 131 "version_array.m"
void MR_CALL 
mercury__version_array__set_4_p_0(
#line 131 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_14,
#line 131 "version_array.m"
  MR_Integer mercury__version_array__I_5,
#line 131 "version_array.m"
  MR_Box mercury__version_array__X_6,
#line 131 "version_array.m"
  MR_Box mercury__version_array__STATE_VARIABLE_VA_0_8,
#line 131 "version_array.m"
  MR_Box * mercury__version_array__STATE_VARIABLE_VA_9)
#line 131 "version_array.m"
{
#line 292 "version_array.m"
  {
#line 292 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 292 "version_array.m"
    MR_Box mercury__version_array__STATE_VARIABLE_VA_10_10;
#line 797 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_18;

#line 801 "version_array.m"
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
#line 801 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);

#line 7777 "version_array.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__STATE_VARIABLE_VA_10_10 );
#line 801 "version_array.m"
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
#line 292 "version_array.m"
    if (mercury__version_array__succeeded)
#line 290 "version_array.m"
      *mercury__version_array__STATE_VARIABLE_VA_9 = mercury__version_array__STATE_VARIABLE_VA_10_10;
#line 292 "version_array.m"
    else
#line 293 "version_array.m"
      {
#line 293 "version_array.m"
        MR_Integer mercury__version_array__V_11_11;
#line 293 "version_array.m"
        MR_Integer mercury__version_array__V_16_16;
#line 732 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_19;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__set_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__STATE_VARIABLE_VA_0_8 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7815 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_16_16  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
        mercury__version_array__V_11_11 = (mercury__version_array__V_16_16 - (MR_Integer) 1);
#line 293 "version_array.m"
        {
#line 293 "version_array.m"
          mercury__version_array__out_of_bounds_error_3_p_0(mercury__version_array__I_5, mercury__version_array__V_11_11, (MR_String) "version_array.set");
#line 293 "version_array.m"
          return;
        }
#line 293 "version_array.m"
      }
#line 292 "version_array.m"
  }
#line 131 "version_array.m"
}

#line 129 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__f_101_108_101_109_32_58_61_3_f_0(
#line 129 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_9,
#line 129 "version_array.m"
  MR_Integer mercury__version_array__I_6,
#line 129 "version_array.m"
  MR_Box mercury__version_array__VA0_5,
#line 129 "version_array.m"
  MR_Box mercury__version_array__X_7)
#line 129 "version_array.m"
{
#line 297 "version_array.m"
  {
#line 297 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 297 "version_array.m"
    MR_Box mercury__version_array__VA_8;

#line 297 "version_array.m"
    {
#line 297 "version_array.m"
      mercury__version_array__set_4_p_0(mercury__version_array__TypeInfo_for_T_9, mercury__version_array__I_6, mercury__version_array__X_7, mercury__version_array__VA0_5, &mercury__version_array__VA_8);
    }
#line 297 "version_array.m"
    return mercury__version_array__VA_8;
#line 297 "version_array.m"
  }
#line 129 "version_array.m"
}

#line 123 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__lookup_2_f_0(
#line 123 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_10,
#line 123 "version_array.m"
  MR_Box mercury__version_array__VA_4,
#line 123 "version_array.m"
  MR_Integer mercury__version_array__I_5)
#line 123 "version_array.m"
{
#line 278 "version_array.m"
  {
#line 278 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 278 "version_array.m"
    MR_Box mercury__version_array__X_6;
#line 278 "version_array.m"
    MR_Box mercury__version_array__X0_7;
#line 758 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_14;

#line 762 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__lookup_2_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_4 , VA);
	I =  mercury__version_array__I_5 ;
		{
#line 762 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);

#line 7908 "version_array.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__version_array__X0_7  = (MR_Box) X;
#line 762 "version_array.m"
	}
mercury__version_array__succeeded  = SUCCESS_INDICATOR;
}
#line 278 "version_array.m"
    if (mercury__version_array__succeeded)
#line 277 "version_array.m"
      mercury__version_array__X_6 = mercury__version_array__X0_7;
#line 278 "version_array.m"
    else
#line 279 "version_array.m"
      {
#line 279 "version_array.m"
        MR_Integer mercury__version_array__V_8_8;
#line 279 "version_array.m"
        MR_Integer mercury__version_array__V_12_12;
#line 732 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_15;

#line 736 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__lookup_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_array__VA_4 , VA);
		{
#line 736 "version_array.m"

    N = ML_va_size_dolock(VA);

#line 7946 "version_array.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_array__V_12_12  = N;
#line 736 "version_array.m"
}
#line 301 "version_array.m"
        mercury__version_array__V_8_8 = (mercury__version_array__V_12_12 - (MR_Integer) 1);
#line 279 "version_array.m"
        {
#line 279 "version_array.m"
          mercury__version_array__out_of_bounds_error_3_p_0(mercury__version_array__I_5, mercury__version_array__V_8_8, (MR_String) "version_array.lookup");
        }
#line 279 "version_array.m"
      }
#line 278 "version_array.m"
    return mercury__version_array__X_6;
#line 278 "version_array.m"
  }
#line 123 "version_array.m"
}

#line 119 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__elem_2_f_0(
#line 119 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 119 "version_array.m"
  MR_Integer mercury__version_array__I_5,
#line 119 "version_array.m"
  MR_Box mercury__version_array__VA_4)
#line 119 "version_array.m"
{
#line 282 "version_array.m"
  {
#line 282 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 282 "version_array.m"
    MR_Box mercury__version_array__HeadVar__3_3;

#line 282 "version_array.m"
    {
#line 282 "version_array.m"
      return mercury__version_array__HeadVar__3_3 = mercury__version_array__lookup_2_f_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__VA_4, mercury__version_array__I_5);
    }
#line 282 "version_array.m"
    return mercury__version_array__HeadVar__3_3;
#line 282 "version_array.m"
  }
#line 119 "version_array.m"
}

#line 114 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__from_list_1_f_0(
#line 114 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 114 "version_array.m"
  MR_Word mercury__version_array__Xs_3)
#line 114 "version_array.m"
{
#line 269 "version_array.m"
  {
#line 269 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 269 "version_array.m"
    MR_Box mercury__version_array__HeadVar__2_2;

#line 269 "version_array.m"
    {
#line 269 "version_array.m"
      return mercury__version_array__HeadVar__2_2 = mercury__version_array__version_array_1_f_0(mercury__version_array__TypeInfo_for_T_4, mercury__version_array__Xs_3);
    }
#line 269 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 269 "version_array.m"
  }
#line 114 "version_array.m"
}

#line 110 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__version_array_1_f_0(
#line 110 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_11,
#line 110 "version_array.m"
  MR_Word mercury__version_array__HeadVar__1_1)
#line 110 "version_array.m"
{
#line 256 "version_array.m"
  {
#line 256 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 256 "version_array.m"
    MR_Box mercury__version_array__HeadVar__2_2;

#line 256 "version_array.m"
    if ((mercury__version_array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "version_array.m"
      {
#line 542 "version_array.m"
        MR_Word mercury__version_array__TypeInfo_for_T_17;

#line 546 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__version_array_1_f_0

	struct ML_va * VA;

		{
#line 546 "version_array.m"

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

#line 8076 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__2_2 );
#line 546 "version_array.m"
}
#line 542 "version_array.m"
      }
#line 256 "version_array.m"
    else
#line 257 "version_array.m"
      {
#line 257 "version_array.m"
        MR_Box mercury__version_array__X_3 = (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__1_1, (MR_Integer) 0));
#line 257 "version_array.m"
        MR_Word mercury__version_array__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_array__HeadVar__1_1, (MR_Integer) 1)));
#line 257 "version_array.m"
        MR_Box mercury__version_array__VA0_6;
#line 257 "version_array.m"
        MR_Integer mercury__version_array__V_7_7;
#line 257 "version_array.m"
        MR_Integer mercury__version_array__V_9_9;

#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__Xs_4, (MR_Integer) 0, &mercury__version_array__V_9_9);
        }
#line 258 "version_array.m"
        mercury__version_array__V_7_7 = ((MR_Integer) 1 + mercury__version_array__V_9_9);
#line 258 "version_array.m"
        {
#line 258 "version_array.m"
          mercury__version_array__VA0_6 = mercury__version_array__init_2_f_0(mercury__version_array__TypeInfo_for_T_11, mercury__version_array__V_7_7, mercury__version_array__X_3);
        }
#line 259 "version_array.m"
        {
#line 259 "version_array.m"
          mercury__version_array__version_array_2_4_p_0(mercury__version_array__TypeInfo_for_T_11, (MR_Integer) 1, mercury__version_array__Xs_4, mercury__version_array__VA0_6, &mercury__version_array__HeadVar__2_2);
        }
#line 257 "version_array.m"
      }
#line 256 "version_array.m"
    return mercury__version_array__HeadVar__2_2;
#line 256 "version_array.m"
  }
#line 110 "version_array.m"
}

#line 105 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__unsafe_new_2_f_0(
#line 105 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 105 "version_array.m"
  MR_Integer mercury__version_array__HeadVar__1_1,
#line 105 "version_array.m"
  MR_Box mercury__version_array__HeadVar__2_2)
#line 105 "version_array.m"
{
#line 663 "version_array.m"
  {
#line 663 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 663 "version_array.m"
    MR_Box mercury__version_array__HeadVar__3_3;
#line 663 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_5;

#line 667 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__unsafe_new_2_f_0

	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	N =  mercury__version_array__HeadVar__1_1 ;
	X = (MR_Word) mercury__version_array__HeadVar__2_2 ;
		{
#line 667 "version_array.m"

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

#line 8180 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__3_3 );
#line 667 "version_array.m"
}
#line 663 "version_array.m"
    return mercury__version_array__HeadVar__3_3;
#line 663 "version_array.m"
  }
#line 105 "version_array.m"
}

#line 95 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__unsafe_empty_0_f_0(
#line 95 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_2)
#line 95 "version_array.m"
{
#line 581 "version_array.m"
  {
#line 581 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 581 "version_array.m"
    MR_Box mercury__version_array__HeadVar__1_1;
#line 581 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_3;

#line 585 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__unsafe_empty_0_f_0

	struct ML_va * VA;

		{
#line 585 "version_array.m"

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

#line 8235 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__1_1 );
#line 585 "version_array.m"
}
#line 581 "version_array.m"
    return mercury__version_array__HeadVar__1_1;
#line 581 "version_array.m"
  }
#line 95 "version_array.m"
}

#line 85 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__new_2_f_0(
#line 85 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_6,
#line 85 "version_array.m"
  MR_Integer mercury__version_array__N_4,
#line 85 "version_array.m"
  MR_Box mercury__version_array__X_5)
#line 85 "version_array.m"
{
#line 252 "version_array.m"
  {
#line 252 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 252 "version_array.m"
    MR_Box mercury__version_array__HeadVar__3_3;

#line 252 "version_array.m"
    {
#line 252 "version_array.m"
      return mercury__version_array__HeadVar__3_3 = mercury__version_array__init_2_f_0(mercury__version_array__TypeInfo_for_T_6, mercury__version_array__N_4, mercury__version_array__X_5);
    }
#line 252 "version_array.m"
    return mercury__version_array__HeadVar__3_3;
#line 252 "version_array.m"
  }
#line 85 "version_array.m"
}

#line 80 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__init_2_f_0(
#line 80 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_4,
#line 80 "version_array.m"
  MR_Integer mercury__version_array__HeadVar__1_1,
#line 80 "version_array.m"
  MR_Box mercury__version_array__HeadVar__2_2)
#line 80 "version_array.m"
{
#line 619 "version_array.m"
  {
#line 619 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 619 "version_array.m"
    MR_Box mercury__version_array__HeadVar__3_3;
#line 619 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_5;

#line 623 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__init_2_f_0

	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	N =  mercury__version_array__HeadVar__1_1 ;
	X = (MR_Word) mercury__version_array__HeadVar__2_2 ;
		{
#line 623 "version_array.m"

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

#line 8334 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__3_3 );
#line 623 "version_array.m"
}
#line 619 "version_array.m"
    return mercury__version_array__HeadVar__3_3;
#line 619 "version_array.m"
  }
#line 80 "version_array.m"
}

#line 76 "version_array.m"
MR_Box MR_CALL 
mercury__version_array__empty_0_f_0(
#line 76 "version_array.m"
  MR_Word mercury__version_array__TypeInfo_for_T_2)
#line 76 "version_array.m"
{
#line 542 "version_array.m"
  {
#line 542 "version_array.m"
    MR_bool mercury__version_array__succeeded;
#line 542 "version_array.m"
    MR_Box mercury__version_array__HeadVar__1_1;
#line 542 "version_array.m"
    MR_Word mercury__version_array__TypeInfo_for_T_3;

#line 546 "version_array.m"
{
#define MR_PROC_LABEL mercury__version_array__empty_0_f_0

	struct ML_va * VA;

		{
#line 546 "version_array.m"

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

#line 8390 "version_array.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_array__HeadVar__1_1 );
#line 546 "version_array.m"
}
#line 542 "version_array.m"
    return mercury__version_array__HeadVar__1_1;
#line 542 "version_array.m"
  }
#line 76 "version_array.m"
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
