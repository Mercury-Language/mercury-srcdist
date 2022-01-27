/*
** Automatically generated from `private_builtin.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module private_builtin. */
/* :- implementation. */

/*
INIT mercury__private_builtin__init
ENDINIT
*/

#include "private_builtin.mih"


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
#include "version_array.mih"
#include "stream.string_writer.mih"





#line 87 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_float_box_0[1];

#line 90 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0;

#line 93 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_mutvar_1[1];

#line 96 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1;

#line 99 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0[1];

#line 102 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0;

#line 105 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0[1];

#line 108 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0;

#line 111 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1[1];

#line 114 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1;

#line 117 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0_10001(
#line 120 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 122 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 125 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
#line 128 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 130 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 132 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 135 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
#line 138 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 140 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 142 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 145 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
#line 148 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 150 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 152 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 154 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4);

#line 157 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
#line 160 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 162 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 165 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
#line 168 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 170 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 172 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 175 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
#line 178 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 180 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 183 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
#line 186 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 188 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 190 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 193 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
#line 196 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 198 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 200 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 203 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
#line 206 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 208 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 210 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 212 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4);

#line 215 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
#line 218 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 220 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 223 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
#line 226 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 228 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 230 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 233 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
#line 236 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 238 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 241 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
#line 244 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 246 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 248 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__private_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__private_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__private_builtin_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__private_builtin_scalar_common_4[8][2];




static /* final */ const MR_Box mercury__private_builtin_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__private_builtin_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__private_builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__private_builtin_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__private_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__private_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__private_builtin_scalar_common_4[8][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "is not supported when trailing (\140--use-trail\') is enabled.")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "nondet \140pragma c_code\' or \140pragma foreign_code\'\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__private_builtin_scalar_common_4[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "for the MLDS back-end (\140--high-level-code\')\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__private_builtin_scalar_common_4[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "Sorry, not implemented:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__private_builtin_scalar_common_4[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "is not supported when \140--reclaim-heap-on-failure\' is enabled.")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "nondet \140pragma c_code\' or \140pragma foreign_code\'\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__private_builtin_scalar_common_4[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "for the MLDS back-end (\140--high-level-code\')\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__private_builtin_scalar_common_4[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "Sorry, not implemented:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__private_builtin_scalar_common_4[6])))
  },
};



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
#include "type_desc.mh"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"
#line 1492 "private_builtin.m"


const MR_TypeCtorInfo ML_type_ctor_info_for_univ =
    &MR_TYPE_CTOR_INFO_NAME(univ, univ, 0);

const MR_TypeCtorInfo ML_type_info_for_type_info =
    &MR_TYPE_CTOR_INFO_NAME(private_builtin, type_info, 0);

const MR_TypeCtorInfo ML_type_info_for_pseudo_type_info =
    /*
    ** For the time being, we handle pseudo_type_infos the same way
    ** as we handle type_infos.
    */
    &MR_TYPE_CTOR_INFO_NAME(private_builtin, type_info, 0);

const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_univ = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    { (MR_TypeInfo) &MR_TYPE_CTOR_INFO_NAME(univ, univ, 0) }
};

const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_int = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    { (MR_TypeInfo) &MR_TYPE_CTOR_INFO_NAME(builtin, int, 0) }
};

const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_char = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    { (MR_TypeInfo) &MR_TYPE_CTOR_INFO_NAME(builtin, character, 0) }
};

const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_string = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    { (MR_TypeInfo) &MR_TYPE_CTOR_INFO_NAME(builtin, string, 0) }
};

const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_type_info = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    { (MR_TypeInfo) &ML_type_info_for_type_info }
};


const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_pseudo_type_info = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    /*
    ** For the time being, we handle pseudo_type_infos the same way
    ** as we handle type_infos.
    */
    { (MR_TypeInfo) &ML_type_info_for_type_info }
};




#line 701 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_float_box_0[1] = {
  (MR_Integer) 0
};

#line 706 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 = {
  (MR_String) "float_box",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  NULL
};

#line 713 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_float_box_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____float_box_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____float_box_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "float_box",
  {
    &mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0
  },
  {
    &mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_float_box_0
};

#line 734 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_mutvar_1[1] = {
  (MR_Integer) 0
};

#line 739 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 746 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_mutvar_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____mutvar_1_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____mutvar_1_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "mutvar",
  {
    &mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1
  },
  {
    &mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_mutvar_1
};

#line 767 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0[1] = {
  (MR_Integer) 0
};

#line 772 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 = {
  (MR_String) "sample_type_info",
  (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0,
  NULL
};

#line 779 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_sample_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____sample_type_info_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____sample_type_info_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "sample_type_info",
  {
    &mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0
  },
  {
    &mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0
};

#line 800 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0[1] = {
  (MR_Integer) 0
};

#line 805 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 = {
  (MR_String) "sample_typeclass_info",
  (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0,
  NULL
};

#line 812 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_sample_typeclass_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "sample_typeclass_info",
  {
    &mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0
  },
  {
    &mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0
};

#line 833 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1[1] = {
  (MR_Integer) 0
};

#line 838 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 = {
  (MR_String) "store_at_ref_type",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 845 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_store_at_ref_type_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____store_at_ref_type_1_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____store_at_ref_type_1_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "store_at_ref_type",
  {
    &mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1
  },
  {
    &mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1
};

#line 866 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_ticket_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_TICKET,
  ((MR_Box) (mercury__private_builtin____Unify____ticket_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____ticket_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "ticket",
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

#line 887 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_ticket_counter_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____ticket_counter_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____ticket_counter_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "ticket_counter",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 908 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0_10001(
#line 911 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 913 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 915 "private_builtin.c"
{
#line 917 "private_builtin.c"
  {
#line 919 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 922 "private_builtin.c"
    {
#line 924 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____float_box_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 927 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 929 "private_builtin.c"
  }
#line 931 "private_builtin.c"
}

#line 934 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
#line 937 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 939 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 941 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 943 "private_builtin.c"
{
#line 945 "private_builtin.c"
  {
#line 947 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 950 "private_builtin.c"
    {
#line 952 "private_builtin.c"
      mercury__private_builtin____Compare____float_box_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 955 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 957 "private_builtin.c"
  }
#line 959 "private_builtin.c"
}

#line 962 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
#line 965 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 967 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 969 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 971 "private_builtin.c"
{
#line 973 "private_builtin.c"
  {
#line 975 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 978 "private_builtin.c"
    {
#line 980 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____mutvar_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 983 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 985 "private_builtin.c"
  }
#line 987 "private_builtin.c"
}

#line 990 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
#line 993 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 995 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 997 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 999 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4)
#line 1001 "private_builtin.c"
{
#line 1003 "private_builtin.c"
  {
#line 1005 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1008 "private_builtin.c"
    {
#line 1010 "private_builtin.c"
      mercury__private_builtin____Compare____mutvar_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), &mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_3), ((MR_Word) mercury__private_builtin__wrapper_arg_4));
    }
#line 1013 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_2 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1015 "private_builtin.c"
  }
#line 1017 "private_builtin.c"
}

#line 1020 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
#line 1023 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1025 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 1027 "private_builtin.c"
{
#line 1029 "private_builtin.c"
  {
#line 1031 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1034 "private_builtin.c"
    {
#line 1036 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____sample_type_info_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1039 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1041 "private_builtin.c"
  }
#line 1043 "private_builtin.c"
}

#line 1046 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
#line 1049 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1051 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1053 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1055 "private_builtin.c"
{
#line 1057 "private_builtin.c"
  {
#line 1059 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1062 "private_builtin.c"
    {
#line 1064 "private_builtin.c"
      mercury__private_builtin____Compare____sample_type_info_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1067 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1069 "private_builtin.c"
  }
#line 1071 "private_builtin.c"
}

#line 1074 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
#line 1077 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1079 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 1081 "private_builtin.c"
{
#line 1083 "private_builtin.c"
  {
#line 1085 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1088 "private_builtin.c"
    {
#line 1090 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____sample_typeclass_info_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1093 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1095 "private_builtin.c"
  }
#line 1097 "private_builtin.c"
}

#line 1100 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
#line 1103 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1105 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1107 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1109 "private_builtin.c"
{
#line 1111 "private_builtin.c"
  {
#line 1113 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1116 "private_builtin.c"
    {
#line 1118 "private_builtin.c"
      mercury__private_builtin____Compare____sample_typeclass_info_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1121 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1123 "private_builtin.c"
  }
#line 1125 "private_builtin.c"
}

#line 1128 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
#line 1131 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1133 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1135 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1137 "private_builtin.c"
{
#line 1139 "private_builtin.c"
  {
#line 1141 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1144 "private_builtin.c"
    {
#line 1146 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____store_at_ref_type_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Box *) mercury__private_builtin__wrapper_arg_2), ((MR_Box *) mercury__private_builtin__wrapper_arg_3));
    }
#line 1149 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1151 "private_builtin.c"
  }
#line 1153 "private_builtin.c"
}

#line 1156 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
#line 1159 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1161 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 1163 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 1165 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4)
#line 1167 "private_builtin.c"
{
#line 1169 "private_builtin.c"
  {
#line 1171 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1174 "private_builtin.c"
    {
#line 1176 "private_builtin.c"
      mercury__private_builtin____Compare____store_at_ref_type_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), &mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Box *) mercury__private_builtin__wrapper_arg_3), ((MR_Box *) mercury__private_builtin__wrapper_arg_4));
    }
#line 1179 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_2 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1181 "private_builtin.c"
  }
#line 1183 "private_builtin.c"
}

#line 1186 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
#line 1189 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1191 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 1193 "private_builtin.c"
{
#line 1195 "private_builtin.c"
  {
#line 1197 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1200 "private_builtin.c"
    {
#line 1202 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____ticket_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1205 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1207 "private_builtin.c"
  }
#line 1209 "private_builtin.c"
}

#line 1212 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
#line 1215 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1217 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1219 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1221 "private_builtin.c"
{
#line 1223 "private_builtin.c"
  {
#line 1225 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1228 "private_builtin.c"
    {
#line 1230 "private_builtin.c"
      mercury__private_builtin____Compare____ticket_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1233 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1235 "private_builtin.c"
  }
#line 1237 "private_builtin.c"
}

#line 1240 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
#line 1243 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1245 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 1247 "private_builtin.c"
{
#line 1249 "private_builtin.c"
  {
#line 1251 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1254 "private_builtin.c"
    {
#line 1256 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____ticket_counter_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1259 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1261 "private_builtin.c"
  }
#line 1263 "private_builtin.c"
}

#line 1266 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
#line 1269 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1271 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1273 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1275 "private_builtin.c"
{
#line 1277 "private_builtin.c"
  {
#line 1279 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1282 "private_builtin.c"
    {
#line 1284 "private_builtin.c"
      mercury__private_builtin____Compare____ticket_counter_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1287 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1289 "private_builtin.c"
  }
#line 1291 "private_builtin.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__private_builtin__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 1625 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2(void)
#line 1625 "private_builtin.m"
{
#line 1659 "private_builtin.m"
  {
#line 1659 "private_builtin.m"
    return MR_FALSE;
#line 1659 "private_builtin.m"
  }
#line 1625 "private_builtin.m"
}

#line 1624 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1(void)
#line 1624 "private_builtin.m"
{
#line 1658 "private_builtin.m"
  {
#line 1658 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1658 "private_builtin.m"
  }
#line 1624 "private_builtin.m"
}

#line 1623 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
#line 1623 "private_builtin.m"
{
#line 1657 "private_builtin.m"
  {
#line 1657 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1657 "private_builtin.m"
  }
#line 1623 "private_builtin.m"
}

#line 1620 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2(void)
#line 1620 "private_builtin.m"
{
#line 1655 "private_builtin.m"
  {
#line 1655 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1655 "private_builtin.m"
  }
#line 1620 "private_builtin.m"
}

#line 1619 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1(void)
#line 1619 "private_builtin.m"
{
#line 1654 "private_builtin.m"
  {
#line 1654 "private_builtin.m"
    return MR_FALSE;
#line 1654 "private_builtin.m"
  }
#line 1619 "private_builtin.m"
}

#line 1618 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
#line 1618 "private_builtin.m"
{
#line 1653 "private_builtin.m"
  {
#line 1653 "private_builtin.m"
    return MR_FALSE;
#line 1653 "private_builtin.m"
  }
#line 1618 "private_builtin.m"
}

#line 1581 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 1581 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4)
#line 1581 "private_builtin.m"
{
#line 1605 "private_builtin.m"
  {
#line 1605 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1421 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1605 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1604 "private_builtin.m"
      {
#line 1604 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;
#line 1604 "private_builtin.m"
        MR_String mercury__private_builtin__V_12_12;

#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2((MR_String) "compare for foreign types", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_12_12);
        }
#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_12_12, &mercury__private_builtin__V_10_10);
        }
#line 1662 "private_builtin.m"
        {
#line 1662 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__V_10_10);
#line 1662 "private_builtin.m"
          return;
        }
#line 1604 "private_builtin.m"
      }
#line 1605 "private_builtin.m"
    else
#line 1606 "private_builtin.m"
      *mercury__private_builtin__Result_4 = (MR_Integer) 0;
#line 1605 "private_builtin.m"
  }
#line 1581 "private_builtin.m"
}

#line 1580 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 1580 "private_builtin.m"
{
#line 1598 "private_builtin.m"
  {
#line 1598 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1488 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1598 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1597 "private_builtin.m"
      {
#line 1597 "private_builtin.m"
        MR_String mercury__private_builtin__V_8_8;
#line 1597 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;

#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2((MR_String) "unify for foreign types", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_10_10);
        }
#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_10_10, &mercury__private_builtin__V_8_8);
        }
#line 1662 "private_builtin.m"
        {
#line 1662 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__V_8_8);
        }
#line 1597 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 1597 "private_builtin.m"
      }
#line 1598 "private_builtin.m"
    else
#line 87 "builtin.opt"
      {
#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1540 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 87 "builtin.opt"
      }
#line 1598 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1598 "private_builtin.m"
  }
#line 1580 "private_builtin.m"
}

#line 84 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 84 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4)
#line 84 "private_builtin.m"
{
#line 319 "private_builtin.m"
  {
#line 319 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1581 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 319 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 317 "private_builtin.m"
      {
#line 318 "private_builtin.m"
        {
#line 318 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "call to generated compare/3 for solver type");
#line 318 "private_builtin.m"
          return;
        }
#line 317 "private_builtin.m"
      }
#line 319 "private_builtin.m"
    else
#line 321 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 319 "private_builtin.m"
  }
#line 84 "private_builtin.m"
}

#line 83 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 83 "private_builtin.m"
{
#line 305 "private_builtin.m"
  {
#line 305 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1633 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 305 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 303 "private_builtin.m"
      {
#line 304 "private_builtin.m"
        {
#line 304 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "call to generated unify/2 for solver type");
        }
#line 303 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 303 "private_builtin.m"
      }
#line 305 "private_builtin.m"
    else
#line 90 "builtin.opt"
      {
#line 90 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 90 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;

#line 1670 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 90 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 90 "builtin.opt"
      }
#line 305 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 305 "private_builtin.m"
  }
#line 83 "private_builtin.m"
}

#line 76 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0(
#line 76 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_13,
#line 76 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4)
#line 76 "private_builtin.m"
{
#line 287 "private_builtin.m"
  {
#line 287 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1713 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 287 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 285 "private_builtin.m"
      {
#line 285 "private_builtin.m"
        MR_String mercury__private_builtin__Message_7;
#line 285 "private_builtin.m"
        MR_String mercury__private_builtin__V_9_9;
#line 285 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;
#line 285 "private_builtin.m"
        MR_Word mercury__private_builtin__V_11_11;
#line 56 "type_desc.opt"
        MR_Box mercury__private_builtin__V_14_14;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T_13 ;
		{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 1763 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_11_11  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 285 "private_builtin.m"
        {
#line 285 "private_builtin.m"
          mercury__private_builtin__V_10_10 = mercury__type_desc__type_name_1_f_0(mercury__private_builtin__V_11_11);
        }
#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2(mercury__private_builtin__V_10_10, (MR_String) "\'", &mercury__private_builtin__V_9_9);
        }
#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2((MR_String) "call to compare/3 for non-canonical type \140", mercury__private_builtin__V_9_9, &mercury__private_builtin__Message_7);
        }
#line 286 "private_builtin.m"
        {
#line 286 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__Message_7);
#line 286 "private_builtin.m"
          return;
        }
#line 285 "private_builtin.m"
      }
#line 287 "private_builtin.m"
    else
#line 289 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 287 "private_builtin.m"
  }
#line 76 "private_builtin.m"
}

#line 71 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 71 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4)
#line 71 "private_builtin.m"
{
#line 257 "private_builtin.m"
  {
#line 257 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1826 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 257 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 256 "private_builtin.m"
      {
#line 256 "private_builtin.m"
        {
#line 256 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "builtin_compare_tuple called");
#line 256 "private_builtin.m"
          return;
        }
#line 256 "private_builtin.m"
      }
#line 257 "private_builtin.m"
    else
#line 259 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 257 "private_builtin.m"
  }
#line 71 "private_builtin.m"
}

#line 70 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 70 "private_builtin.m"
{
#line 247 "private_builtin.m"
  {
#line 247 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1878 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 247 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 246 "private_builtin.m"
      {
#line 246 "private_builtin.m"
        {
#line 246 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "builtin_unify_tuple called");
        }
#line 246 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 246 "private_builtin.m"
      }
#line 247 "private_builtin.m"
    else
#line 87 "builtin.opt"
      {
#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1915 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 87 "builtin.opt"
      }
#line 247 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 247 "private_builtin.m"
  }
#line 70 "private_builtin.m"
}

#line 63 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 63 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4)
#line 63 "private_builtin.m"
{
#line 275 "private_builtin.m"
  {
#line 275 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1956 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 275 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 274 "private_builtin.m"
      {
#line 274 "private_builtin.m"
        {
#line 274 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted higher-order comparison");
#line 274 "private_builtin.m"
          return;
        }
#line 274 "private_builtin.m"
      }
#line 275 "private_builtin.m"
    else
#line 277 "private_builtin.m"
      *mercury__private_builtin__Result_4 = (MR_Integer) 1;
#line 275 "private_builtin.m"
  }
#line 63 "private_builtin.m"
}

#line 62 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 62 "private_builtin.m"
{
#line 266 "private_builtin.m"
  {
#line 266 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 2008 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 266 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 265 "private_builtin.m"
      {
#line 265 "private_builtin.m"
        {
#line 265 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted higher-order unification");
        }
#line 265 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 265 "private_builtin.m"
      }
#line 266 "private_builtin.m"
    else
#line 87 "builtin.opt"
      {
#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 2045 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 87 "builtin.opt"
      }
#line 266 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 266 "private_builtin.m"
  }
#line 62 "private_builtin.m"
}

#line 387 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____typeclass_info_0_0(
#line 387 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 387 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 387 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 387 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____typeclass_info_0_0(
#line 387 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 387 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 384 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____type_info_0_0(
#line 384 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 384 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 384 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 384 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____type_info_0_0(
#line 384 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 384 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 385 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____type_ctor_info_0_0(
#line 385 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 385 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 385 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 385 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____type_ctor_info_0_0(
#line 385 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 385 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 915 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0(
#line 915 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 915 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 915 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 915 "private_builtin.m"
{
#line 915 "private_builtin.m"
  {
#line 915 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 915 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_4 = mercury__private_builtin__HeadVar__2_2;
#line 915 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_5 = mercury__private_builtin__HeadVar__3_3;

#line 915 "private_builtin.m"
    {
#line 915 "private_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__Cast_HeadVar1_4, mercury__private_builtin__Cast_HeadVar2_5);
#line 915 "private_builtin.m"
      return;
    }
#line 915 "private_builtin.m"
  }
#line 915 "private_builtin.m"
}

#line 915 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0(
#line 915 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 915 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 915 "private_builtin.m"
{
#line 915 "private_builtin.m"
  {
#line 915 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 915 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_3 = mercury__private_builtin__HeadVar__1_1;
#line 915 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_4 = mercury__private_builtin__HeadVar__2_2;

#line 915 "private_builtin.m"
    {
#line 915 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__Cast_HeadVar1_3, mercury__private_builtin__Cast_HeadVar2_4);
    }
#line 915 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 915 "private_builtin.m"
  }
#line 915 "private_builtin.m"
}

#line 914 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0(
#line 914 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 914 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 914 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 914 "private_builtin.m"
{
#line 914 "private_builtin.m"
  {
#line 914 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 914 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_4 = mercury__private_builtin__HeadVar__2_2;
#line 914 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_5 = mercury__private_builtin__HeadVar__3_3;

#line 914 "private_builtin.m"
    {
#line 914 "private_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__Cast_HeadVar1_4, mercury__private_builtin__Cast_HeadVar2_5);
#line 914 "private_builtin.m"
      return;
    }
#line 914 "private_builtin.m"
  }
#line 914 "private_builtin.m"
}

#line 914 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0(
#line 914 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 914 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 914 "private_builtin.m"
{
#line 914 "private_builtin.m"
  {
#line 914 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 914 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_3 = mercury__private_builtin__HeadVar__1_1;
#line 914 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_4 = mercury__private_builtin__HeadVar__2_2;

#line 914 "private_builtin.m"
    {
#line 914 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__Cast_HeadVar1_3, mercury__private_builtin__Cast_HeadVar2_4);
    }
#line 914 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 914 "private_builtin.m"
  }
#line 914 "private_builtin.m"
}

#line 1572 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0(
#line 1572 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1572 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1572 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2,
#line 1572 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__3_3)
#line 1572 "private_builtin.m"
{
#line 1572 "private_builtin.m"
  {
#line 1572 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1572 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1572 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 1572 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 1572 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2267 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 1572 "private_builtin.m"
    else
#line 1572 "private_builtin.m"
      {
#line 1572 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_4_4 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1572 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_5_5 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 161 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 < mercury__private_builtin__V_5_5);
#line 163 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 162 "private_builtin.m"
          *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "private_builtin.m"
        else
#line 165 "private_builtin.m"
          {
#line 163 "private_builtin.m"
            mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 == mercury__private_builtin__V_5_5);
#line 165 "private_builtin.m"
            if (mercury__private_builtin__succeeded)
#line 164 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 165 "private_builtin.m"
            else
#line 166 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 165 "private_builtin.m"
          }
#line 1572 "private_builtin.m"
      }
#line 1572 "private_builtin.m"
  }
#line 1572 "private_builtin.m"
}

#line 1572 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0(
#line 1572 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_7,
#line 1572 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1572 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2)
#line 1572 "private_builtin.m"
{
#line 1572 "private_builtin.m"
  {
#line 1572 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1572 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1572 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 1572 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 1572 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1572 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 1572 "private_builtin.m"
    else
#line 1572 "private_builtin.m"
      {
#line 1572 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_3_3 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1572 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_4_4 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 2342 "private_builtin.c"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_3_3 == mercury__private_builtin__V_4_4);
#line 1572 "private_builtin.m"
      }
#line 1572 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1572 "private_builtin.m"
  }
#line 1572 "private_builtin.m"
}

#line 396 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0(
#line 396 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 396 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 396 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 396 "private_builtin.m"
{
#line 396 "private_builtin.m"
  {
#line 396 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 396 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 396 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 396 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 396 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2377 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 396 "private_builtin.m"
    else
#line 396 "private_builtin.m"
      {
#line 396 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 396 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 396 "private_builtin.m"
        {
#line 396 "private_builtin.m"
          mercury__private_builtin____Compare____typeclass_info_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 396 "private_builtin.m"
          return;
        }
#line 396 "private_builtin.m"
      }
#line 396 "private_builtin.m"
  }
#line 396 "private_builtin.m"
}

#line 396 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0(
#line 396 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 396 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 396 "private_builtin.m"
{
#line 396 "private_builtin.m"
  {
#line 396 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 396 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 396 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 396 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 396 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 396 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 396 "private_builtin.m"
    else
#line 396 "private_builtin.m"
      {
#line 396 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 396 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2435 "private_builtin.c"
        {
#line 2437 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__private_builtin____Unify____typeclass_info_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 396 "private_builtin.m"
      }
#line 396 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 396 "private_builtin.m"
  }
#line 396 "private_builtin.m"
}

#line 394 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0(
#line 394 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 394 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 394 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 394 "private_builtin.m"
{
#line 394 "private_builtin.m"
  {
#line 394 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 394 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 394 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 394 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 394 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2473 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 394 "private_builtin.m"
    else
#line 394 "private_builtin.m"
      {
#line 394 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 394 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 394 "private_builtin.m"
        {
#line 394 "private_builtin.m"
          mercury__private_builtin____Compare____type_info_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 394 "private_builtin.m"
          return;
        }
#line 394 "private_builtin.m"
      }
#line 394 "private_builtin.m"
  }
#line 394 "private_builtin.m"
}

#line 394 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0(
#line 394 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 394 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 394 "private_builtin.m"
{
#line 394 "private_builtin.m"
  {
#line 394 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 394 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 394 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 394 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 394 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 394 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 394 "private_builtin.m"
    else
#line 394 "private_builtin.m"
      {
#line 394 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 394 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2531 "private_builtin.c"
        {
#line 2533 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__private_builtin____Unify____type_info_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 394 "private_builtin.m"
      }
#line 394 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 394 "private_builtin.m"
  }
#line 394 "private_builtin.m"
}

#line 1284 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ref_1_0(
#line 1284 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_4,
#line 1284 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1284 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1284 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 1284 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____ref_1_0(
#line 1284 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_3,
#line 1284 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1284 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 1251 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0(
#line 1251 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1251 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1251 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1251 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 1251 "private_builtin.m"
{
#line 1251 "private_builtin.m"
  {
#line 1251 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1251 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1251 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 1251 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 1251 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2593 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 1251 "private_builtin.m"
    else
#line 1251 "private_builtin.m"
      {
#line 1251 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 1251 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 1251 "private_builtin.m"
        {
#line 1251 "private_builtin.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 1251 "private_builtin.m"
          return;
        }
#line 1251 "private_builtin.m"
      }
#line 1251 "private_builtin.m"
  }
#line 1251 "private_builtin.m"
}

#line 1251 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0(
#line 1251 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_7,
#line 1251 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1251 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 1251 "private_builtin.m"
{
#line 1251 "private_builtin.m"
  {
#line 1251 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1251 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1251 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 1251 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 1251 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1251 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 1251 "private_builtin.m"
    else
#line 1251 "private_builtin.m"
      {
#line 1251 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 1251 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2653 "private_builtin.c"
        {
#line 2655 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 1251 "private_builtin.m"
      }
#line 1251 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1251 "private_builtin.m"
  }
#line 1251 "private_builtin.m"
}

#line 1270 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____heap_pointer_0_0(
#line 1270 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1270 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1270 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 1270 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____heap_pointer_0_0(
#line 1270 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1270 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 900 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0(
#line 900 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 900 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 900 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 900 "private_builtin.m"
{
#line 900 "private_builtin.m"
  {
#line 900 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 900 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 900 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 900 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 900 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2709 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 900 "private_builtin.m"
    else
#line 900 "private_builtin.m"
      {
#line 900 "private_builtin.m"
        MR_Float mercury__private_builtin__V_4_4 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__2_2);
#line 900 "private_builtin.m"
        MR_Float mercury__private_builtin__V_5_5 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__3_3);

#line 234 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 < mercury__private_builtin__V_5_5);
#line 236 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 235 "private_builtin.m"
          *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 236 "private_builtin.m"
        else
#line 238 "private_builtin.m"
          {
#line 236 "private_builtin.m"
            mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 > mercury__private_builtin__V_5_5);
#line 238 "private_builtin.m"
            if (mercury__private_builtin__succeeded)
#line 237 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 238 "private_builtin.m"
            else
#line 239 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 238 "private_builtin.m"
          }
#line 900 "private_builtin.m"
      }
#line 900 "private_builtin.m"
  }
#line 900 "private_builtin.m"
}

#line 900 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0(
#line 900 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 900 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 900 "private_builtin.m"
{
#line 900 "private_builtin.m"
  {
#line 900 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 900 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 900 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 900 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 900 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 900 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 900 "private_builtin.m"
    else
#line 900 "private_builtin.m"
      {
#line 900 "private_builtin.m"
        MR_Float mercury__private_builtin__V_3_3 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__1_1);
#line 900 "private_builtin.m"
        MR_Float mercury__private_builtin__V_4_4 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__2_2);

#line 2782 "private_builtin.c"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_3_3 == mercury__private_builtin__V_4_4);
#line 900 "private_builtin.m"
      }
#line 900 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 900 "private_builtin.m"
  }
#line 900 "private_builtin.m"
}

#line 388 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____base_typeclass_info_0_0(
#line 388 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 388 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 388 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 388 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____base_typeclass_info_0_0(
#line 388 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 388 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 2005 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__trace_set_io_state_1_p_0(void)
#line 2005 "private_builtin.m"
{
#line 2005 "private_builtin.m"
  {
#line 2005 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 2005 "private_builtin.m"
  }
#line 2005 "private_builtin.m"
}

#line 2003 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__trace_get_io_state_1_p_0(void)
#line 2003 "private_builtin.m"
{
#line 2003 "private_builtin.m"
  {
#line 2003 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 2003 "private_builtin.m"
  }
#line 2003 "private_builtin.m"
}

#line 2001 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0(void)
#line 2001 "private_builtin.m"
{
#line 2009 "private_builtin.m"
  {
#line 2009 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 2013 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 2013 "private_builtin.m"

    /* All uses of this predicate should override the body. */
    MR_fatal_error("trace_evaluate_runtime_condition called");

#line 2863 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2013 "private_builtin.m"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 2009 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 2009 "private_builtin.m"
  }
#line 2001 "private_builtin.m"
}

#line 1647 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__semip_0_p_0(void)
#line 1647 "private_builtin.m"
{
#line 1689 "private_builtin.m"
  {
#line 1689 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1689 "private_builtin.m"
  }
#line 1647 "private_builtin.m"
}

#line 1643 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__imp_0_p_0(void)
#line 1643 "private_builtin.m"
{
#line 1668 "private_builtin.m"
  {
#line 1668 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1671 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__imp_0_p_0


		{
#line 1671 "private_builtin.m"

#line 2912 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1671 "private_builtin.m"
}
#line 1668 "private_builtin.m"
  }
#line 1643 "private_builtin.m"
}

#line 1639 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__sorry_1_p_0(
#line 1639 "private_builtin.m"
  MR_String mercury__private_builtin__PredName_2)
#line 1639 "private_builtin.m"
{
#line 1661 "private_builtin.m"
  {
#line 1661 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1661 "private_builtin.m"
    MR_String mercury__private_builtin__V_3_3;
#line 1661 "private_builtin.m"
    MR_String mercury__private_builtin__V_5_5;

#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2(mercury__private_builtin__PredName_2, (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_5_5);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_5_5, &mercury__private_builtin__V_3_3);
    }
#line 1662 "private_builtin.m"
    {
#line 1662 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_3_3);
#line 1662 "private_builtin.m"
      return;
    }
#line 1661 "private_builtin.m"
  }
#line 1639 "private_builtin.m"
}

#line 1633 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__no_clauses_1_p_0(
#line 1633 "private_builtin.m"
  MR_String mercury__private_builtin__PredName_2)
#line 1633 "private_builtin.m"
{
#line 1665 "private_builtin.m"
  {
#line 1665 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1665 "private_builtin.m"
    MR_String mercury__private_builtin__V_3_3;

#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2((MR_String) "no clauses for ", mercury__private_builtin__PredName_2, &mercury__private_builtin__V_3_3);
    }
#line 1666 "private_builtin.m"
    {
#line 1666 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_3_3);
#line 1666 "private_builtin.m"
      return;
    }
#line 1665 "private_builtin.m"
  }
#line 1633 "private_builtin.m"
}

#line 1625 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__nonvar_1_p_2(
#line 1625 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5)
#line 1625 "private_builtin.m"
{
#line 1659 "private_builtin.m"
  {
#line 1659 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1659 "private_builtin.m"
    {
#line 1659 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2();
    }
#line 1659 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1659 "private_builtin.m"
  }
#line 1625 "private_builtin.m"
}

#line 1624 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nonvar_1_p_1(
#line 1624 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1624 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1624 "private_builtin.m"
{
#line 1658 "private_builtin.m"
  {
#line 1658 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1658 "private_builtin.m"
    {
#line 1658 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1();
#line 1658 "private_builtin.m"
      return;
    }
#line 1658 "private_builtin.m"
  }
#line 1624 "private_builtin.m"
}

#line 1623 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nonvar_1_p_0(
#line 1623 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1623 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1623 "private_builtin.m"
{
#line 1657 "private_builtin.m"
  {
#line 1657 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1657 "private_builtin.m"
    {
#line 1657 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0();
#line 1657 "private_builtin.m"
      return;
    }
#line 1657 "private_builtin.m"
  }
#line 1623 "private_builtin.m"
}

#line 1620 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__var_1_p_2(
#line 1620 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5)
#line 1620 "private_builtin.m"
{
#line 1655 "private_builtin.m"
  {
#line 1655 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1655 "private_builtin.m"
    {
#line 1655 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2();
#line 1655 "private_builtin.m"
      return;
    }
#line 1655 "private_builtin.m"
  }
#line 1620 "private_builtin.m"
}

#line 1619 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__var_1_p_1(
#line 1619 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1619 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1619 "private_builtin.m"
{
#line 1654 "private_builtin.m"
  {
#line 1654 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1654 "private_builtin.m"
    {
#line 1654 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1();
    }
#line 1654 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1654 "private_builtin.m"
  }
#line 1619 "private_builtin.m"
}

#line 1618 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__var_1_p_0(
#line 1618 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1618 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1618 "private_builtin.m"
{
#line 1653 "private_builtin.m"
  {
#line 1653 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1653 "private_builtin.m"
    {
#line 1653 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0();
    }
#line 1653 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1653 "private_builtin.m"
  }
#line 1618 "private_builtin.m"
}

#line 1581 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nyi_foreign_type_compare_3_p_0(
#line 1581 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1581 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4,
#line 1581 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_5,
#line 1581 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__3_6)
#line 1581 "private_builtin.m"
{
#line 1605 "private_builtin.m"
  {
#line 1605 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1605 "private_builtin.m"
    {
#line 1605 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Result_4);
#line 1605 "private_builtin.m"
      return;
    }
#line 1605 "private_builtin.m"
  }
#line 1581 "private_builtin.m"
}

#line 1580 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__nyi_foreign_type_unify_2_p_0(
#line 1580 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
#line 1580 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_3,
#line 1580 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_4)
#line 1580 "private_builtin.m"
{
#line 1598 "private_builtin.m"
  {
#line 1598 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1598 "private_builtin.m"
    {
#line 1598 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 1598 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1598 "private_builtin.m"
  }
#line 1580 "private_builtin.m"
}

#line 1578 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unused_0_p_0(void)
#line 1578 "private_builtin.m"
{
#line 1590 "private_builtin.m"
  {
#line 1590 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__unused_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 3223 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1590 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1589 "private_builtin.m"
      {
#line 1589 "private_builtin.m"
        {
#line 1589 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted use of dead predicate");
#line 1589 "private_builtin.m"
          return;
        }
#line 1589 "private_builtin.m"
      }
#line 1590 "private_builtin.m"
    else
#line 1592 "private_builtin.m"
      {
#line 1592 "private_builtin.m"
      }
#line 1590 "private_builtin.m"
  }
#line 1578 "private_builtin.m"
}

#line 1567 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_at_ref_2_p_0(
#line 1567 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1567 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 1567 "private_builtin.m"
{
#line 1567 "private_builtin.m"
  {
#line 1567 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1567 "private_builtin.m"
  }
#line 1567 "private_builtin.m"
}

#line 1562 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_at_ref_impure_2_p_0(
#line 1562 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1562 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 1562 "private_builtin.m"
{
#line 1562 "private_builtin.m"
  {
#line 1562 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1562 "private_builtin.m"
    *mercury__private_builtin__HeadVar__1_1 = mercury__private_builtin__HeadVar__2_2;
#line 1562 "private_builtin.m"
  }
#line 1562 "private_builtin.m"
}

#line 1557 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unsafe_type_cast_2_p_0(
#line 1557 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1,
#line 1557 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2)
#line 1557 "private_builtin.m"
{
#line 1557 "private_builtin.m"
  {
#line 1557 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1557 "private_builtin.m"
    *mercury__private_builtin__HeadVar__2_2 = mercury__private_builtin__HeadVar__1_1;
#line 1557 "private_builtin.m"
  }
#line 1557 "private_builtin.m"
}

#line 1279 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reclaim_heap_nondet_pragma_foreign_code_0_p_0(void)
#line 1279 "private_builtin.m"
{
#line 1432 "private_builtin.m"
  {
#line 1432 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1432 "private_builtin.m"
    MR_String mercury__private_builtin__Msg_1;
#line 1432 "private_builtin.m"
    MR_Word mercury__private_builtin__V_2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__private_builtin_scalar_common_4[7]);

#line 1433 "private_builtin.m"
    {
#line 1433 "private_builtin.m"
      mercury__private_builtin__Msg_1 = mercury__string__append_list_1_f_0(mercury__private_builtin__V_2_2);
    }
#line 1439 "private_builtin.m"
    {
#line 1439 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__Msg_1);
#line 1439 "private_builtin.m"
      return;
    }
#line 1432 "private_builtin.m"
  }
#line 1279 "private_builtin.m"
}

#line 1273 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__restore_hp_1_p_0(
#line 1273 "private_builtin.m"
  MR_Word mercury__private_builtin__SavedHeapPointer_1)
#line 1273 "private_builtin.m"
{
#line 1338 "private_builtin.m"
  {
#line 1338 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1342 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__restore_hp_1_p_0

	MR_Word SavedHeapPointer;

	SavedHeapPointer =  mercury__private_builtin__SavedHeapPointer_1 ;
		{
#line 1342 "private_builtin.m"

#ifndef MR_CONSERVATIVE_GC
    MR_restore_hp(SavedHeapPointer);
#endif

#line 3374 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1342 "private_builtin.m"
}
#line 1338 "private_builtin.m"
  }
#line 1273 "private_builtin.m"
}

#line 1272 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__mark_hp_1_p_0(
#line 1272 "private_builtin.m"
  MR_Word * mercury__private_builtin__SavedHeapPointer_1)
#line 1272 "private_builtin.m"
{
#line 1325 "private_builtin.m"
  {
#line 1325 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1329 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__mark_hp_1_p_0

	MR_Word SavedHeapPointer;

		{
#line 1329 "private_builtin.m"

#ifndef MR_CONSERVATIVE_GC
    MR_mark_hp(SavedHeapPointer);
#else
    /* We can't do heap reclamation with conservative GC. */
    SavedHeapPointer = 0;
#endif

#line 3413 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__SavedHeapPointer_1  = SavedHeapPointer;
#line 1329 "private_builtin.m"
}
#line 1325 "private_builtin.m"
  }
#line 1272 "private_builtin.m"
}

#line 1262 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__gc_trace_1_p_0(
#line 1262 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_2,
#line 1262 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1)
#line 1262 "private_builtin.m"
{
#line 1303 "private_builtin.m"
  {
#line 1303 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1306 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__gc_trace_1_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Pointer;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T_2 ;
	Pointer =  mercury__private_builtin__HeadVar__1_1 ;
		{
#line 1306 "private_builtin.m"

#ifdef MR_NATIVE_GC
    * (MR_Word *) Pointer =
        MR_agc_deep_copy(* (MR_Word *) Pointer, (MR_TypeInfo) TypeInfo_for_T,
            MR_ENGINE(MR_eng_heap_zone2->MR_zone_min),
            MR_ENGINE(MR_eng_heap_zone2->MR_zone_hardmax));
#else
    MR_fatal_error("private_builtin.gc_trace/2: "
        "called when accurate GC not enabled");
#endif

#line 3461 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1306 "private_builtin.m"
}
#line 1303 "private_builtin.m"
  }
#line 1262 "private_builtin.m"
}

#line 1249 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__free_heap_1_p_0(
#line 1249 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_2,
#line 1249 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1249 "private_builtin.m"
{
#line 1318 "private_builtin.m"
  {
#line 1318 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1318 "private_builtin.m"
    MR_Word mercury__private_builtin__TypeInfo_for_T_3;

#line 1321 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__free_heap_1_p_0

	MR_Word Val;

	Val = (MR_Word) mercury__private_builtin__HeadVar__1_1 ;
		{
#line 1321 "private_builtin.m"

    MR_free_heap((void *) Val);

#line 3500 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1321 "private_builtin.m"
}
#line 1318 "private_builtin.m"
  }
#line 1249 "private_builtin.m"
}

#line 933 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__trailed_nondet_pragma_foreign_code_0_p_0(void)
#line 933 "private_builtin.m"
{
#line 1221 "private_builtin.m"
  {
#line 1221 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1221 "private_builtin.m"
    MR_String mercury__private_builtin__Msg_1;
#line 1221 "private_builtin.m"
    MR_Word mercury__private_builtin__V_2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__private_builtin_scalar_common_4[3]);

#line 1222 "private_builtin.m"
    {
#line 1222 "private_builtin.m"
      mercury__private_builtin__Msg_1 = mercury__string__append_list_1_f_0(mercury__private_builtin__V_2_2);
    }
#line 1228 "private_builtin.m"
    {
#line 1228 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__Msg_1);
#line 1228 "private_builtin.m"
      return;
    }
#line 1221 "private_builtin.m"
  }
#line 933 "private_builtin.m"
}

#line 927 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__prune_tickets_to_1_p_0(
#line 927 "private_builtin.m"
  MR_Word mercury__private_builtin__TicketCounter_1)
#line 927 "private_builtin.m"
{
#line 1006 "private_builtin.m"
  {
#line 1006 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1009 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__prune_tickets_to_1_p_0

	MR_Word TicketCounter;

	TicketCounter =  mercury__private_builtin__TicketCounter_1 ;
		{
#line 1009 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_prune_tickets_to(TicketCounter);
#endif

#line 3568 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1009 "private_builtin.m"
}
#line 1006 "private_builtin.m"
  }
#line 927 "private_builtin.m"
}

#line 926 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__mark_ticket_stack_1_p_0(
#line 926 "private_builtin.m"
  MR_Word * mercury__private_builtin__TicketCounter_1)
#line 926 "private_builtin.m"
{
#line 995 "private_builtin.m"
  {
#line 995 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 998 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__mark_ticket_stack_1_p_0

	MR_Word TicketCounter;

		{
#line 998 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_mark_ticket_stack(TicketCounter);
#else
    TicketCounter = 0;
#endif

#line 3606 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TicketCounter_1  = TicketCounter;
#line 998 "private_builtin.m"
}
#line 995 "private_builtin.m"
  }
#line 926 "private_builtin.m"
}

#line 925 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__prune_ticket_0_p_0(void)
#line 925 "private_builtin.m"
{
#line 986 "private_builtin.m"
  {
#line 986 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 989 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__prune_ticket_0_p_0


		{
#line 989 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_prune_ticket();
#endif

#line 3640 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 989 "private_builtin.m"
}
#line 986 "private_builtin.m"
  }
#line 925 "private_builtin.m"
}

#line 924 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__discard_ticket_0_p_0(void)
#line 924 "private_builtin.m"
{
#line 977 "private_builtin.m"
  {
#line 977 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 980 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__discard_ticket_0_p_0


		{
#line 980 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 3673 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 980 "private_builtin.m"
}
#line 977 "private_builtin.m"
  }
#line 924 "private_builtin.m"
}

#line 923 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_solve_1_p_0(
#line 923 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 923 "private_builtin.m"
{
#line 968 "private_builtin.m"
  {
#line 968 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 971 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_solve_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 971 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_solve);
#endif

#line 3710 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 971 "private_builtin.m"
}
#line 968 "private_builtin.m"
  }
#line 923 "private_builtin.m"
}

#line 922 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_commit_1_p_0(
#line 922 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 922 "private_builtin.m"
{
#line 959 "private_builtin.m"
  {
#line 959 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 962 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_commit_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 962 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_commit);
#endif

#line 3747 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 962 "private_builtin.m"
}
#line 959 "private_builtin.m"
  }
#line 922 "private_builtin.m"
}

#line 921 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_undo_1_p_0(
#line 921 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 921 "private_builtin.m"
{
#line 950 "private_builtin.m"
  {
#line 950 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 953 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_undo_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 953 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_undo);
#endif

#line 3784 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 953 "private_builtin.m"
}
#line 950 "private_builtin.m"
  }
#line 921 "private_builtin.m"
}

#line 920 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_ticket_1_p_0(
#line 920 "private_builtin.m"
  MR_Word * mercury__private_builtin__Ticket_1)
#line 920 "private_builtin.m"
{
#line 939 "private_builtin.m"
  {
#line 939 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 942 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__store_ticket_1_p_0

	MR_Word Ticket;

		{
#line 942 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_store_ticket(Ticket);
#else
    Ticket = 0;
#endif

#line 3822 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__Ticket_1  = Ticket;
#line 942 "private_builtin.m"
}
#line 939 "private_builtin.m"
  }
#line 920 "private_builtin.m"
}

#line 436 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0(
#line 436 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo0_1,
#line 436 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 436 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeClassInfo_3)
#line 436 "private_builtin.m"
{
#line 765 "private_builtin.m"
  {
#line 765 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 770 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__private_builtin__TypeClassInfo0_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 770 "private_builtin.m"

    TypeClassInfo =
        MR_typeclass_info_arg_typeclass_info(TypeClassInfo0, Index);

#line 3866 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeClassInfo_3  = TypeClassInfo;
#line 770 "private_builtin.m"
}
#line 765 "private_builtin.m"
  }
#line 436 "private_builtin.m"
}

#line 424 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__superclass_from_typeclass_info_3_p_0(
#line 424 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo0_1,
#line 424 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 424 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeClassInfo_3)
#line 424 "private_builtin.m"
{
#line 755 "private_builtin.m"
  {
#line 755 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 760 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__superclass_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__private_builtin__TypeClassInfo0_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 760 "private_builtin.m"

    TypeClassInfo =
        MR_typeclass_info_superclass_info(TypeClassInfo0, Index);

#line 3910 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeClassInfo_3  = TypeClassInfo;
#line 760 "private_builtin.m"
}
#line 755 "private_builtin.m"
  }
#line 424 "private_builtin.m"
}

#line 416 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0(
#line 416 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo_1,
#line 416 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 416 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeInfo_3)
#line 416 "private_builtin.m"
{
#line 746 "private_builtin.m"
  {
#line 746 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 751 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__private_builtin__TypeClassInfo_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 751 "private_builtin.m"

    TypeInfo = MR_typeclass_info_instance_tvar_type_info(TypeClassInfo, Index);

#line 3953 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeInfo_3  = TypeInfo;
#line 751 "private_builtin.m"
}
#line 746 "private_builtin.m"
  }
#line 416 "private_builtin.m"
}

#line 407 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__type_info_from_typeclass_info_3_p_0(
#line 407 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo_1,
#line 407 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 407 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeInfo_3)
#line 407 "private_builtin.m"
{
#line 737 "private_builtin.m"
  {
#line 737 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 742 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__private_builtin__TypeClassInfo_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 742 "private_builtin.m"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3996 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeInfo_3  = TypeInfo;
#line 742 "private_builtin.m"
}
#line 737 "private_builtin.m"
  }
#line 407 "private_builtin.m"
}

#line 194 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_strcmp_3_p_0(
#line 194 "private_builtin.m"
  MR_Integer * mercury__private_builtin__Res_1,
#line 194 "private_builtin.m"
  MR_String mercury__private_builtin__S1_2,
#line 194 "private_builtin.m"
  MR_String mercury__private_builtin__S2_3)
#line 194 "private_builtin.m"
{
#line 196 "private_builtin.m"
  {
#line 196 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 200 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_strcmp_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__private_builtin__S1_2 ;
	S2 =  mercury__private_builtin__S2_3 ;
		{
#line 200 "private_builtin.m"

    Res = strcmp(S1, S2);

#line 4039 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__Res_1  = Res;
#line 200 "private_builtin.m"
}
#line 196 "private_builtin.m"
  }
#line 194 "private_builtin.m"
}

#line 126 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__pointer_equal_2_p_0(
#line 126 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 126 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1,
#line 126 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 126 "private_builtin.m"
{
#line 350 "private_builtin.m"
  {
#line 350 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 350 "private_builtin.m"
    MR_Word mercury__private_builtin__TypeInfo_for_T_6;

#line 353 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__pointer_equal_2_p_0

	MR_Word A;
	MR_Word B;
	MR_bool SUCCESS_INDICATOR;

	A = (MR_Word) mercury__private_builtin__HeadVar__1_1 ;
	B = (MR_Word) mercury__private_builtin__HeadVar__2_2 ;
		{
#line 353 "private_builtin.m"

    SUCCESS_INDICATOR = (A == B);

#line 4084 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 353 "private_builtin.m"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 350 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 350 "private_builtin.m"
  }
#line 126 "private_builtin.m"
}

#line 120 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__typed_compare_3_p_0(
#line 120 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T1_11,
#line 120 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T2_12,
#line 120 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 120 "private_builtin.m"
  MR_Box mercury__private_builtin__X_5,
#line 120 "private_builtin.m"
  MR_Box mercury__private_builtin__Y_6)
#line 120 "private_builtin.m"
{
#line 337 "private_builtin.m"
  {
#line 337 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 337 "private_builtin.m"
    MR_Word mercury__private_builtin__R0_7;
#line 337 "private_builtin.m"
    MR_Word mercury__private_builtin__V_9_9;
#line 337 "private_builtin.m"
    MR_Word mercury__private_builtin__V_10_10;
#line 56 "type_desc.opt"
    MR_Box mercury__private_builtin__V_14_14;
#line 56 "type_desc.opt"
    MR_Box mercury__private_builtin__V_15_15;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_compare_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_11 ;
		{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 4156 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_9_9  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_compare_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_12 ;
		{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 4189 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_10_10  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 338 "private_builtin.m"
    {
#line 338 "private_builtin.m"
      mercury__type_desc____Compare____type_desc_0_0(&mercury__private_builtin__R0_7, mercury__private_builtin__V_9_9, mercury__private_builtin__V_10_10);
    }
#line 339 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__R0_7 == (MR_Integer) 0);
#line 342 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 340 "private_builtin.m"
      {
#line 340 "private_builtin.m"
        MR_Box mercury__private_builtin__Z_8 = mercury__private_builtin__X_5;

#line 341 "private_builtin.m"
        {
#line 341 "private_builtin.m"
          mercury__builtin__compare_3_p_0(mercury__private_builtin__TypeInfo_for_T2_12, mercury__private_builtin__R_4, mercury__private_builtin__Z_8, mercury__private_builtin__Y_6);
#line 341 "private_builtin.m"
          return;
        }
#line 340 "private_builtin.m"
      }
#line 342 "private_builtin.m"
    else
#line 343 "private_builtin.m"
      *mercury__private_builtin__R_4 = mercury__private_builtin__R0_7;
#line 337 "private_builtin.m"
  }
#line 120 "private_builtin.m"
}

#line 114 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__typed_unify_2_p_1(
#line 114 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T1_6,
#line 114 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T2_7,
#line 114 "private_builtin.m"
  MR_Box mercury__private_builtin__X_3,
#line 114 "private_builtin.m"
  MR_Box * mercury__private_builtin__Y_4)
#line 114 "private_builtin.m"
{
#line 333 "private_builtin.m"
  {
#line 333 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 333 "private_builtin.m"
    MR_Word mercury__private_builtin__V_5_5;
#line 333 "private_builtin.m"
    MR_Word mercury__private_builtin__V_9_9;
#line 56 "type_desc.opt"
    MR_Box mercury__private_builtin__V_8_8;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_6 ;
		{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 4278 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_5_5  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_7 ;
		{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 4311 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_9_9  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 331 "private_builtin.m"
    {
#line 331 "private_builtin.m"
      mercury__private_builtin__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__private_builtin__V_5_5, mercury__private_builtin__V_9_9);
    }
#line 333 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 333 "private_builtin.m"
      {
#line 332 "private_builtin.m"
        *mercury__private_builtin__Y_4 = mercury__private_builtin__X_3;
#line 332 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 333 "private_builtin.m"
      }
#line 333 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 333 "private_builtin.m"
  }
#line 114 "private_builtin.m"
}

#line 113 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__typed_unify_2_p_0(
#line 113 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T1_6,
#line 113 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T2_7,
#line 113 "private_builtin.m"
  MR_Box mercury__private_builtin__X_3,
#line 113 "private_builtin.m"
  MR_Box mercury__private_builtin__Y_4)
#line 113 "private_builtin.m"
{
#line 333 "private_builtin.m"
  {
#line 333 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 333 "private_builtin.m"
    MR_Word mercury__private_builtin__V_5_5;
#line 333 "private_builtin.m"
    MR_Word mercury__private_builtin__V_10_10;
#line 333 "private_builtin.m"
    MR_Box mercury__private_builtin__V_11_11;
#line 56 "type_desc.opt"
    MR_Box mercury__private_builtin__V_8_8;
#line 56 "type_desc.opt"
    MR_Box mercury__private_builtin__V_9_9;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_6 ;
		{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 4394 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_5_5  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_7 ;
		{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 4427 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_10_10  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 331 "private_builtin.m"
    {
#line 331 "private_builtin.m"
      mercury__private_builtin__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__private_builtin__V_5_5, mercury__private_builtin__V_10_10);
    }
#line 333 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 333 "private_builtin.m"
      {
#line 332 "private_builtin.m"
        mercury__private_builtin__V_11_11 = mercury__private_builtin__X_3;
#line 332 "private_builtin.m"
        {
#line 332 "private_builtin.m"
          return mercury__private_builtin__succeeded = mercury__builtin__unify_2_p_0(mercury__private_builtin__TypeInfo_for_T2_7, mercury__private_builtin__Y_4, mercury__private_builtin__V_11_11);
        }
#line 333 "private_builtin.m"
      }
#line 333 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 333 "private_builtin.m"
  }
#line 113 "private_builtin.m"
}

#line 106 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_compound_lt_2_p_0(
#line 106 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1,
#line 106 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 106 "private_builtin.m"
{
#line 106 "private_builtin.m"
  {
#line 106 "private_builtin.m"
    MR_String mercury__private_builtin__V_5_5;
#line 106 "private_builtin.m"
    MR_String mercury__private_builtin__V_7_7;

#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_lt\'/2", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_7_7);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_7_7, &mercury__private_builtin__V_5_5);
    }
#line 1662 "private_builtin.m"
    {
#line 1662 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_5_5);
    }
#line 106 "private_builtin.m"
    return MR_TRUE;
#line 106 "private_builtin.m"
  }
#line 106 "private_builtin.m"
}

#line 105 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_compound_eq_2_p_0(
#line 105 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1,
#line 105 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 105 "private_builtin.m"
{
#line 105 "private_builtin.m"
  {
#line 105 "private_builtin.m"
    MR_String mercury__private_builtin__V_5_5;
#line 105 "private_builtin.m"
    MR_String mercury__private_builtin__V_7_7;

#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_eq\'/2", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_7_7);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_7_7, &mercury__private_builtin__V_5_5);
    }
#line 1662 "private_builtin.m"
    {
#line 1662 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_5_5);
    }
#line 105 "private_builtin.m"
    return MR_TRUE;
#line 105 "private_builtin.m"
  }
#line 105 "private_builtin.m"
}

#line 99 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_int_gt_2_p_0(
#line 99 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__1_1,
#line 99 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__2_2)
#line 99 "private_builtin.m"
{
#line 99 "private_builtin.m"
  {
#line 99 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__HeadVar__1_1 > mercury__private_builtin__HeadVar__2_2);

#line 99 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 99 "private_builtin.m"
  }
#line 99 "private_builtin.m"
}

#line 94 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_int_lt_2_p_0(
#line 94 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__1_1,
#line 94 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__2_2)
#line 94 "private_builtin.m"
{
#line 94 "private_builtin.m"
  {
#line 94 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__HeadVar__1_1 < mercury__private_builtin__HeadVar__2_2);

#line 94 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 94 "private_builtin.m"
  }
#line 94 "private_builtin.m"
}

#line 89 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__compare_error_0_p_0(void)
#line 89 "private_builtin.m"
{
#line 325 "private_builtin.m"
  {
#line 325 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 326 "private_builtin.m"
    {
#line 326 "private_builtin.m"
      mercury__require__error_1_p_0((MR_String) "internal error in compare/3");
#line 326 "private_builtin.m"
      return;
    }
#line 325 "private_builtin.m"
  }
#line 89 "private_builtin.m"
}

#line 84 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_solver_type_3_p_0(
#line 84 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 84 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4,
#line 84 "private_builtin.m"
  MR_Box mercury__private_builtin___X_5,
#line 84 "private_builtin.m"
  MR_Box mercury__private_builtin___Y_6)
#line 84 "private_builtin.m"
{
#line 319 "private_builtin.m"
  {
#line 319 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 319 "private_builtin.m"
    {
#line 319 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Res_4);
#line 319 "private_builtin.m"
      return;
    }
#line 319 "private_builtin.m"
  }
#line 84 "private_builtin.m"
}

#line 83 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_solver_type_2_p_0(
#line 83 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
#line 83 "private_builtin.m"
  MR_Box mercury__private_builtin___X_3,
#line 83 "private_builtin.m"
  MR_Box mercury__private_builtin___Y_4)
#line 83 "private_builtin.m"
{
#line 305 "private_builtin.m"
  {
#line 305 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 305 "private_builtin.m"
    {
#line 305 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 305 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 305 "private_builtin.m"
  }
#line 83 "private_builtin.m"
}

#line 76 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_non_canonical_type_3_p_0(
#line 76 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_13,
#line 76 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4,
#line 76 "private_builtin.m"
  MR_Box mercury__private_builtin__X_5,
#line 76 "private_builtin.m"
  MR_Box mercury__private_builtin___Y_6)
#line 76 "private_builtin.m"
{
#line 287 "private_builtin.m"
  {
#line 287 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 287 "private_builtin.m"
    {
#line 287 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__TypeInfo_for_T_13, mercury__private_builtin__Res_4);
#line 287 "private_builtin.m"
      return;
    }
#line 287 "private_builtin.m"
  }
#line 76 "private_builtin.m"
}

#line 71 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_tuple_3_p_0(
#line 71 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 71 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4,
#line 71 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_5,
#line 71 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__3_6)
#line 71 "private_builtin.m"
{
#line 257 "private_builtin.m"
  {
#line 257 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 257 "private_builtin.m"
    {
#line 257 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Res_4);
#line 257 "private_builtin.m"
      return;
    }
#line 257 "private_builtin.m"
  }
#line 71 "private_builtin.m"
}

#line 70 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_tuple_2_p_0(
#line 70 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
#line 70 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_3,
#line 70 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_4)
#line 70 "private_builtin.m"
{
#line 247 "private_builtin.m"
  {
#line 247 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 247 "private_builtin.m"
    {
#line 247 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 247 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 247 "private_builtin.m"
  }
#line 70 "private_builtin.m"
}

#line 63 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_pred_3_p_0(
#line 63 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4,
#line 63 "private_builtin.m"
  MR_Word mercury__private_builtin___X_5,
#line 63 "private_builtin.m"
  MR_Word mercury__private_builtin___Y_6)
#line 63 "private_builtin.m"
{
#line 275 "private_builtin.m"
  {
#line 275 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 275 "private_builtin.m"
    {
#line 275 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__private_builtin__Result_4);
#line 275 "private_builtin.m"
      return;
    }
#line 275 "private_builtin.m"
  }
#line 63 "private_builtin.m"
}

#line 62 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_pred_2_p_0(
#line 62 "private_builtin.m"
  MR_Word mercury__private_builtin___X_3,
#line 62 "private_builtin.m"
  MR_Word mercury__private_builtin___Y_4)
#line 62 "private_builtin.m"
{
#line 266 "private_builtin.m"
  {
#line 266 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 266 "private_builtin.m"
    {
#line 266 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 266 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 266 "private_builtin.m"
  }
#line 62 "private_builtin.m"
}

#line 59 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_float_3_p_0(
#line 59 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 59 "private_builtin.m"
  MR_Float mercury__private_builtin__F1_5,
#line 59 "private_builtin.m"
  MR_Float mercury__private_builtin__F2_6)
#line 59 "private_builtin.m"
{
#line 236 "private_builtin.m"
  {
#line 236 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__F1_5 < mercury__private_builtin__F2_6);

#line 236 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 235 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 236 "private_builtin.m"
    else
#line 238 "private_builtin.m"
      {
#line 236 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__F1_5 > mercury__private_builtin__F2_6);
#line 238 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 237 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 238 "private_builtin.m"
        else
#line 239 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 238 "private_builtin.m"
      }
#line 236 "private_builtin.m"
  }
#line 59 "private_builtin.m"
}

#line 58 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_float_2_p_0(
#line 58 "private_builtin.m"
  MR_Float mercury__private_builtin__F_3,
#line 58 "private_builtin.m"
  MR_Float mercury__private_builtin__F_2)
#line 58 "private_builtin.m"
{
#line 231 "private_builtin.m"
  {
#line 231 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__F_2 == mercury__private_builtin__F_3);

#line 231 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 231 "private_builtin.m"
  }
#line 58 "private_builtin.m"
}

#line 55 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_string_3_p_0(
#line 55 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 55 "private_builtin.m"
  MR_String mercury__private_builtin__S1_5,
#line 55 "private_builtin.m"
  MR_String mercury__private_builtin__S2_6)
#line 55 "private_builtin.m"
{
#line 184 "private_builtin.m"
  {
#line 184 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 184 "private_builtin.m"
    MR_Integer mercury__private_builtin__Res_7;

#line 200 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_string_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__private_builtin__S1_5 ;
	S2 =  mercury__private_builtin__S2_6 ;
		{
#line 200 "private_builtin.m"

    Res = strcmp(S1, S2);

#line 4894 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__Res_7  = Res;
#line 200 "private_builtin.m"
}
#line 186 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__Res_7 < (MR_Integer) 0);
#line 188 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 187 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 188 "private_builtin.m"
    else
#line 190 "private_builtin.m"
      {
#line 188 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__Res_7 == (MR_Integer) 0);
#line 190 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 189 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 190 "private_builtin.m"
        else
#line 191 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 190 "private_builtin.m"
      }
#line 184 "private_builtin.m"
  }
#line 55 "private_builtin.m"
}

#line 54 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_string_2_p_0(
#line 54 "private_builtin.m"
  MR_String mercury__private_builtin__S_3,
#line 54 "private_builtin.m"
  MR_String mercury__private_builtin__S_2)
#line 54 "private_builtin.m"
{
#line 182 "private_builtin.m"
  {
#line 182 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (strcmp(mercury__private_builtin__S_2, mercury__private_builtin__S_3) == 0);

#line 182 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 182 "private_builtin.m"
  }
#line 54 "private_builtin.m"
}

#line 51 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_character_3_p_0(
#line 51 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 51 "private_builtin.m"
  MR_Char mercury__private_builtin__X_5,
#line 51 "private_builtin.m"
  MR_Char mercury__private_builtin__Y_6)
#line 51 "private_builtin.m"
{
#line 171 "private_builtin.m"
  {
#line 171 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 171 "private_builtin.m"
    MR_Integer mercury__private_builtin__XI_7;
#line 171 "private_builtin.m"
    MR_Integer mercury__private_builtin__YI_8;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_character_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__private_builtin__X_5 ;
		{
#line 63 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4982 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__XI_7  = Int;
#line 63 "char.opt"
}
#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_character_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__private_builtin__Y_6 ;
		{
#line 63 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5002 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__YI_8  = Int;
#line 63 "char.opt"
}
#line 174 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__XI_7 < mercury__private_builtin__YI_8);
#line 176 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 175 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 176 "private_builtin.m"
    else
#line 178 "private_builtin.m"
      {
#line 176 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__XI_7 == mercury__private_builtin__YI_8);
#line 178 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 177 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 178 "private_builtin.m"
        else
#line 179 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 178 "private_builtin.m"
      }
#line 171 "private_builtin.m"
  }
#line 51 "private_builtin.m"
}

#line 50 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_character_2_p_0(
#line 50 "private_builtin.m"
  MR_Char mercury__private_builtin__C_3,
#line 50 "private_builtin.m"
  MR_Char mercury__private_builtin__C_2)
#line 50 "private_builtin.m"
{
#line 169 "private_builtin.m"
  {
#line 169 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__C_2 == mercury__private_builtin__C_3);

#line 169 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 169 "private_builtin.m"
  }
#line 50 "private_builtin.m"
}

#line 48 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_int_3_p_0(
#line 48 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 48 "private_builtin.m"
  MR_Integer mercury__private_builtin__X_5,
#line 48 "private_builtin.m"
  MR_Integer mercury__private_builtin__Y_6)
#line 48 "private_builtin.m"
{
#line 163 "private_builtin.m"
  {
#line 163 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__X_5 < mercury__private_builtin__Y_6);

#line 163 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 162 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 163 "private_builtin.m"
    else
#line 165 "private_builtin.m"
      {
#line 163 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__X_5 == mercury__private_builtin__Y_6);
#line 165 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 164 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 165 "private_builtin.m"
        else
#line 166 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 165 "private_builtin.m"
      }
#line 163 "private_builtin.m"
  }
#line 48 "private_builtin.m"
}

#line 47 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_int_2_p_0(
#line 47 "private_builtin.m"
  MR_Integer mercury__private_builtin__X_3,
#line 47 "private_builtin.m"
  MR_Integer mercury__private_builtin__X_2)
#line 47 "private_builtin.m"
{
#line 158 "private_builtin.m"
  {
#line 158 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__X_2 == mercury__private_builtin__X_3);

#line 158 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 158 "private_builtin.m"
  }
#line 47 "private_builtin.m"
}

void mercury__private_builtin__init(void)
{
}

void mercury__private_builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_float_box_0);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_mutvar_1);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_sample_type_info_0);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_sample_typeclass_info_0);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_store_at_ref_type_1);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_ticket_0);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_ticket_counter_0);
}

void mercury__private_builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module private_builtin. */
