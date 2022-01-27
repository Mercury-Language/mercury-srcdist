/*
** Automatically generated from `private_builtin.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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





#line 86 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_float_box_0[1];

#line 89 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0;

#line 92 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_mutvar_1[1];

#line 95 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1;

#line 98 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0[1];

#line 101 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0;

#line 104 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0[1];

#line 107 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0;

#line 110 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1[1];

#line 113 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1;

#line 116 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0_10001(
#line 119 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 121 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 124 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
#line 127 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 129 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 131 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 134 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
#line 137 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 139 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 141 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 144 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
#line 147 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 149 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 151 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 153 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4);

#line 156 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
#line 159 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 161 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 164 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
#line 167 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 169 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 171 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 174 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
#line 177 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 179 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 182 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
#line 185 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 187 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 189 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 192 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
#line 195 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 197 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 199 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 202 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
#line 205 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 207 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 209 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 211 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4);

#line 214 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
#line 217 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 219 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 222 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
#line 225 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 227 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 229 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 232 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
#line 235 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 237 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 240 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
#line 243 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 245 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 247 "private_builtin.c"
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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
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
#line 1455 "private_builtin.m"


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




#line 698 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_float_box_0[1] = {
  (MR_Integer) 0
};

#line 703 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 = {
  (MR_String) "float_box",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  NULL
};

#line 710 "private_builtin.c"
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

#line 731 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_mutvar_1[1] = {
  (MR_Integer) 0
};

#line 736 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 743 "private_builtin.c"
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

#line 764 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0[1] = {
  (MR_Integer) 0
};

#line 769 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 = {
  (MR_String) "sample_type_info",
  (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0,
  NULL
};

#line 776 "private_builtin.c"
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

#line 797 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0[1] = {
  (MR_Integer) 0
};

#line 802 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 = {
  (MR_String) "sample_typeclass_info",
  (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0,
  NULL
};

#line 809 "private_builtin.c"
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

#line 830 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1[1] = {
  (MR_Integer) 0
};

#line 835 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 = {
  (MR_String) "store_at_ref_type",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 842 "private_builtin.c"
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

#line 863 "private_builtin.c"
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

#line 884 "private_builtin.c"
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

#line 905 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0_10001(
#line 908 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 910 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 912 "private_builtin.c"
{
#line 914 "private_builtin.c"
  {
#line 916 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 919 "private_builtin.c"
    {
#line 921 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____float_box_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 924 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 926 "private_builtin.c"
  }
#line 928 "private_builtin.c"
}

#line 931 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
#line 934 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 936 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 938 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 940 "private_builtin.c"
{
#line 942 "private_builtin.c"
  {
#line 944 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 947 "private_builtin.c"
    {
#line 949 "private_builtin.c"
      mercury__private_builtin____Compare____float_box_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 952 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 954 "private_builtin.c"
  }
#line 956 "private_builtin.c"
}

#line 959 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
#line 962 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 964 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 966 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 968 "private_builtin.c"
{
#line 970 "private_builtin.c"
  {
#line 972 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 975 "private_builtin.c"
    {
#line 977 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____mutvar_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 980 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 982 "private_builtin.c"
  }
#line 984 "private_builtin.c"
}

#line 987 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
#line 990 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 992 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 994 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 996 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4)
#line 998 "private_builtin.c"
{
#line 1000 "private_builtin.c"
  {
#line 1002 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1005 "private_builtin.c"
    {
#line 1007 "private_builtin.c"
      mercury__private_builtin____Compare____mutvar_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), &mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_3), ((MR_Word) mercury__private_builtin__wrapper_arg_4));
    }
#line 1010 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_2 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1012 "private_builtin.c"
  }
#line 1014 "private_builtin.c"
}

#line 1017 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
#line 1020 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1022 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 1024 "private_builtin.c"
{
#line 1026 "private_builtin.c"
  {
#line 1028 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1031 "private_builtin.c"
    {
#line 1033 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____sample_type_info_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1036 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1038 "private_builtin.c"
  }
#line 1040 "private_builtin.c"
}

#line 1043 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
#line 1046 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1048 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1050 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1052 "private_builtin.c"
{
#line 1054 "private_builtin.c"
  {
#line 1056 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1059 "private_builtin.c"
    {
#line 1061 "private_builtin.c"
      mercury__private_builtin____Compare____sample_type_info_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1064 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1066 "private_builtin.c"
  }
#line 1068 "private_builtin.c"
}

#line 1071 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
#line 1074 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1076 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 1078 "private_builtin.c"
{
#line 1080 "private_builtin.c"
  {
#line 1082 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1085 "private_builtin.c"
    {
#line 1087 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____sample_typeclass_info_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1090 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1092 "private_builtin.c"
  }
#line 1094 "private_builtin.c"
}

#line 1097 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
#line 1100 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1102 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1104 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1106 "private_builtin.c"
{
#line 1108 "private_builtin.c"
  {
#line 1110 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1113 "private_builtin.c"
    {
#line 1115 "private_builtin.c"
      mercury__private_builtin____Compare____sample_typeclass_info_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1118 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1120 "private_builtin.c"
  }
#line 1122 "private_builtin.c"
}

#line 1125 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
#line 1128 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1130 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1132 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1134 "private_builtin.c"
{
#line 1136 "private_builtin.c"
  {
#line 1138 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1141 "private_builtin.c"
    {
#line 1143 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____store_at_ref_type_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Box *) mercury__private_builtin__wrapper_arg_2), ((MR_Box *) mercury__private_builtin__wrapper_arg_3));
    }
#line 1146 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1148 "private_builtin.c"
  }
#line 1150 "private_builtin.c"
}

#line 1153 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
#line 1156 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1158 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 1160 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 1162 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4)
#line 1164 "private_builtin.c"
{
#line 1166 "private_builtin.c"
  {
#line 1168 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1171 "private_builtin.c"
    {
#line 1173 "private_builtin.c"
      mercury__private_builtin____Compare____store_at_ref_type_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), &mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Box *) mercury__private_builtin__wrapper_arg_3), ((MR_Box *) mercury__private_builtin__wrapper_arg_4));
    }
#line 1176 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_2 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1178 "private_builtin.c"
  }
#line 1180 "private_builtin.c"
}

#line 1183 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
#line 1186 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1188 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 1190 "private_builtin.c"
{
#line 1192 "private_builtin.c"
  {
#line 1194 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1197 "private_builtin.c"
    {
#line 1199 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____ticket_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1202 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1204 "private_builtin.c"
  }
#line 1206 "private_builtin.c"
}

#line 1209 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
#line 1212 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1214 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1216 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1218 "private_builtin.c"
{
#line 1220 "private_builtin.c"
  {
#line 1222 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1225 "private_builtin.c"
    {
#line 1227 "private_builtin.c"
      mercury__private_builtin____Compare____ticket_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1230 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1232 "private_builtin.c"
  }
#line 1234 "private_builtin.c"
}

#line 1237 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
#line 1240 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1242 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 1244 "private_builtin.c"
{
#line 1246 "private_builtin.c"
  {
#line 1248 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1251 "private_builtin.c"
    {
#line 1253 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____ticket_counter_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1256 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1258 "private_builtin.c"
  }
#line 1260 "private_builtin.c"
}

#line 1263 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
#line 1266 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1268 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1270 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1272 "private_builtin.c"
{
#line 1274 "private_builtin.c"
  {
#line 1276 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1279 "private_builtin.c"
    {
#line 1281 "private_builtin.c"
      mercury__private_builtin____Compare____ticket_counter_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1284 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1286 "private_builtin.c"
  }
#line 1288 "private_builtin.c"
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

#line 1588 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2(void)
#line 1588 "private_builtin.m"
{
#line 1622 "private_builtin.m"
  {
#line 1622 "private_builtin.m"
    return MR_FALSE;
#line 1622 "private_builtin.m"
  }
#line 1588 "private_builtin.m"
}

#line 1587 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1(void)
#line 1587 "private_builtin.m"
{
#line 1621 "private_builtin.m"
  {
#line 1621 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1621 "private_builtin.m"
  }
#line 1587 "private_builtin.m"
}

#line 1586 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
#line 1586 "private_builtin.m"
{
#line 1620 "private_builtin.m"
  {
#line 1620 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1620 "private_builtin.m"
  }
#line 1586 "private_builtin.m"
}

#line 1583 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2(void)
#line 1583 "private_builtin.m"
{
#line 1618 "private_builtin.m"
  {
#line 1618 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1618 "private_builtin.m"
  }
#line 1583 "private_builtin.m"
}

#line 1582 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1(void)
#line 1582 "private_builtin.m"
{
#line 1617 "private_builtin.m"
  {
#line 1617 "private_builtin.m"
    return MR_FALSE;
#line 1617 "private_builtin.m"
  }
#line 1582 "private_builtin.m"
}

#line 1581 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
#line 1581 "private_builtin.m"
{
#line 1616 "private_builtin.m"
  {
#line 1616 "private_builtin.m"
    return MR_FALSE;
#line 1616 "private_builtin.m"
  }
#line 1581 "private_builtin.m"
}

#line 1544 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 1544 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4)
#line 1544 "private_builtin.m"
{
#line 1568 "private_builtin.m"
  {
#line 1568 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1418 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1568 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1567 "private_builtin.m"
      {
#line 1567 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;
#line 1567 "private_builtin.m"
        MR_String mercury__private_builtin__V_12_12;

#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) "compare for foreign types", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_12_12);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_12_12, &mercury__private_builtin__V_10_10);
        }
#line 1625 "private_builtin.m"
        {
#line 1625 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__V_10_10);
#line 1625 "private_builtin.m"
          return;
        }
#line 1567 "private_builtin.m"
      }
#line 1568 "private_builtin.m"
    else
#line 1569 "private_builtin.m"
      *mercury__private_builtin__Result_4 = (MR_Integer) 0;
#line 1568 "private_builtin.m"
  }
#line 1544 "private_builtin.m"
}

#line 1543 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 1543 "private_builtin.m"
{
#line 1561 "private_builtin.m"
  {
#line 1561 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1485 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1561 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1560 "private_builtin.m"
      {
#line 1560 "private_builtin.m"
        MR_String mercury__private_builtin__V_8_8;
#line 1560 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;

#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) "unify for foreign types", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_10_10);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_10_10, &mercury__private_builtin__V_8_8);
        }
#line 1625 "private_builtin.m"
        {
#line 1625 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__V_8_8);
        }
#line 1560 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 1560 "private_builtin.m"
      }
#line 1561 "private_builtin.m"
    else
#line 89 "builtin.opt"
      {
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1537 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 89 "builtin.opt"
      }
#line 1561 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1561 "private_builtin.m"
  }
#line 1543 "private_builtin.m"
}

#line 83 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 83 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4)
#line 83 "private_builtin.m"
{
#line 312 "private_builtin.m"
  {
#line 312 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1578 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 312 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 310 "private_builtin.m"
      {
#line 311 "private_builtin.m"
        {
#line 311 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "call to generated compare/3 for solver type");
#line 311 "private_builtin.m"
          return;
        }
#line 310 "private_builtin.m"
      }
#line 312 "private_builtin.m"
    else
#line 314 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 312 "private_builtin.m"
  }
#line 83 "private_builtin.m"
}

#line 82 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 82 "private_builtin.m"
{
#line 298 "private_builtin.m"
  {
#line 298 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1630 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 298 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 296 "private_builtin.m"
      {
#line 297 "private_builtin.m"
        {
#line 297 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "call to generated unify/2 for solver type");
        }
#line 296 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 296 "private_builtin.m"
      }
#line 298 "private_builtin.m"
    else
#line 92 "builtin.opt"
      {
#line 92 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;

#line 1667 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 92 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 92 "builtin.opt"
      }
#line 298 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 298 "private_builtin.m"
  }
#line 82 "private_builtin.m"
}

#line 75 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0(
#line 75 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_13,
#line 75 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4)
#line 75 "private_builtin.m"
{
#line 280 "private_builtin.m"
  {
#line 280 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1710 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 280 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 278 "private_builtin.m"
      {
#line 278 "private_builtin.m"
        MR_String mercury__private_builtin__Message_7;
#line 278 "private_builtin.m"
        MR_String mercury__private_builtin__V_9_9;
#line 278 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;
#line 278 "private_builtin.m"
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
#line 1760 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_11_11  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 278 "private_builtin.m"
        {
#line 278 "private_builtin.m"
          mercury__private_builtin__V_10_10 = mercury__type_desc__type_name_1_f_0(mercury__private_builtin__V_11_11);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2(mercury__private_builtin__V_10_10, (MR_String) "\'", &mercury__private_builtin__V_9_9);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) "call to compare/3 for non-canonical type \140", mercury__private_builtin__V_9_9, &mercury__private_builtin__Message_7);
        }
#line 279 "private_builtin.m"
        {
#line 279 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__Message_7);
#line 279 "private_builtin.m"
          return;
        }
#line 278 "private_builtin.m"
      }
#line 280 "private_builtin.m"
    else
#line 282 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 280 "private_builtin.m"
  }
#line 75 "private_builtin.m"
}

#line 70 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 70 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4)
#line 70 "private_builtin.m"
{
#line 250 "private_builtin.m"
  {
#line 250 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1823 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 250 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 249 "private_builtin.m"
      {
#line 249 "private_builtin.m"
        {
#line 249 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "builtin_compare_tuple called");
#line 249 "private_builtin.m"
          return;
        }
#line 249 "private_builtin.m"
      }
#line 250 "private_builtin.m"
    else
#line 252 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 250 "private_builtin.m"
  }
#line 70 "private_builtin.m"
}

#line 69 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 69 "private_builtin.m"
{
#line 240 "private_builtin.m"
  {
#line 240 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1875 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 240 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 239 "private_builtin.m"
      {
#line 239 "private_builtin.m"
        {
#line 239 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "builtin_unify_tuple called");
        }
#line 239 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 239 "private_builtin.m"
      }
#line 240 "private_builtin.m"
    else
#line 89 "builtin.opt"
      {
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1912 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 89 "builtin.opt"
      }
#line 240 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 240 "private_builtin.m"
  }
#line 69 "private_builtin.m"
}

#line 62 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 62 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4)
#line 62 "private_builtin.m"
{
#line 268 "private_builtin.m"
  {
#line 268 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1953 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 268 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 267 "private_builtin.m"
      {
#line 267 "private_builtin.m"
        {
#line 267 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted higher-order comparison");
#line 267 "private_builtin.m"
          return;
        }
#line 267 "private_builtin.m"
      }
#line 268 "private_builtin.m"
    else
#line 270 "private_builtin.m"
      *mercury__private_builtin__Result_4 = (MR_Integer) 1;
#line 268 "private_builtin.m"
  }
#line 62 "private_builtin.m"
}

#line 61 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 61 "private_builtin.m"
{
#line 259 "private_builtin.m"
  {
#line 259 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 2005 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 259 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 258 "private_builtin.m"
      {
#line 258 "private_builtin.m"
        {
#line 258 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted higher-order unification");
        }
#line 258 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 258 "private_builtin.m"
      }
#line 259 "private_builtin.m"
    else
#line 89 "builtin.opt"
      {
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 2042 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 89 "builtin.opt"
      }
#line 259 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 259 "private_builtin.m"
  }
#line 61 "private_builtin.m"
}

#line 350 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____typeclass_info_0_0(
#line 350 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 350 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 350 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 350 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____typeclass_info_0_0(
#line 350 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 350 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 347 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____type_info_0_0(
#line 347 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 347 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 347 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 347 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____type_info_0_0(
#line 347 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 347 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 348 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____type_ctor_info_0_0(
#line 348 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 348 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 348 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 348 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____type_ctor_info_0_0(
#line 348 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 348 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 878 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0(
#line 878 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 878 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 878 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 878 "private_builtin.m"
{
#line 878 "private_builtin.m"
  {
#line 878 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 878 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_4 = mercury__private_builtin__HeadVar__2_2;
#line 878 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_5 = mercury__private_builtin__HeadVar__3_3;

#line 878 "private_builtin.m"
    {
#line 878 "private_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__Cast_HeadVar1_4, mercury__private_builtin__Cast_HeadVar2_5);
#line 878 "private_builtin.m"
      return;
    }
#line 878 "private_builtin.m"
  }
#line 878 "private_builtin.m"
}

#line 878 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0(
#line 878 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 878 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 878 "private_builtin.m"
{
#line 878 "private_builtin.m"
  {
#line 878 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 878 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_3 = mercury__private_builtin__HeadVar__1_1;
#line 878 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_4 = mercury__private_builtin__HeadVar__2_2;

#line 878 "private_builtin.m"
    {
#line 878 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__Cast_HeadVar1_3, mercury__private_builtin__Cast_HeadVar2_4);
    }
#line 878 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 878 "private_builtin.m"
  }
#line 878 "private_builtin.m"
}

#line 877 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0(
#line 877 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 877 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 877 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 877 "private_builtin.m"
{
#line 877 "private_builtin.m"
  {
#line 877 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 877 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_4 = mercury__private_builtin__HeadVar__2_2;
#line 877 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_5 = mercury__private_builtin__HeadVar__3_3;

#line 877 "private_builtin.m"
    {
#line 877 "private_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__Cast_HeadVar1_4, mercury__private_builtin__Cast_HeadVar2_5);
#line 877 "private_builtin.m"
      return;
    }
#line 877 "private_builtin.m"
  }
#line 877 "private_builtin.m"
}

#line 877 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0(
#line 877 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 877 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 877 "private_builtin.m"
{
#line 877 "private_builtin.m"
  {
#line 877 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 877 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_3 = mercury__private_builtin__HeadVar__1_1;
#line 877 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_4 = mercury__private_builtin__HeadVar__2_2;

#line 877 "private_builtin.m"
    {
#line 877 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__Cast_HeadVar1_3, mercury__private_builtin__Cast_HeadVar2_4);
    }
#line 877 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 877 "private_builtin.m"
  }
#line 877 "private_builtin.m"
}

#line 1535 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0(
#line 1535 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1535 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1535 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2,
#line 1535 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__3_3)
#line 1535 "private_builtin.m"
{
#line 1535 "private_builtin.m"
  {
#line 1535 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1535 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1535 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 1535 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 1535 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2264 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 1535 "private_builtin.m"
    else
#line 1535 "private_builtin.m"
      {
#line 1535 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_4_4 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1535 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_5_5 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 154 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 < mercury__private_builtin__V_5_5);
#line 156 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 155 "private_builtin.m"
          *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 156 "private_builtin.m"
        else
#line 158 "private_builtin.m"
          {
#line 156 "private_builtin.m"
            mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 == mercury__private_builtin__V_5_5);
#line 158 "private_builtin.m"
            if (mercury__private_builtin__succeeded)
#line 157 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 158 "private_builtin.m"
            else
#line 159 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 158 "private_builtin.m"
          }
#line 1535 "private_builtin.m"
      }
#line 1535 "private_builtin.m"
  }
#line 1535 "private_builtin.m"
}

#line 1535 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0(
#line 1535 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_7,
#line 1535 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1535 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2)
#line 1535 "private_builtin.m"
{
#line 1535 "private_builtin.m"
  {
#line 1535 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1535 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1535 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 1535 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 1535 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1535 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 1535 "private_builtin.m"
    else
#line 1535 "private_builtin.m"
      {
#line 1535 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_3_3 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1535 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_4_4 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 2339 "private_builtin.c"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_3_3 == mercury__private_builtin__V_4_4);
#line 1535 "private_builtin.m"
      }
#line 1535 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1535 "private_builtin.m"
  }
#line 1535 "private_builtin.m"
}

#line 359 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0(
#line 359 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 359 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 359 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 359 "private_builtin.m"
{
#line 359 "private_builtin.m"
  {
#line 359 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 359 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 359 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 359 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 359 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2374 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 359 "private_builtin.m"
    else
#line 359 "private_builtin.m"
      {
#line 359 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 359 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 359 "private_builtin.m"
        {
#line 359 "private_builtin.m"
          mercury__private_builtin____Compare____typeclass_info_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 359 "private_builtin.m"
          return;
        }
#line 359 "private_builtin.m"
      }
#line 359 "private_builtin.m"
  }
#line 359 "private_builtin.m"
}

#line 359 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0(
#line 359 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 359 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 359 "private_builtin.m"
{
#line 359 "private_builtin.m"
  {
#line 359 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 359 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 359 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 359 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 359 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 359 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 359 "private_builtin.m"
    else
#line 359 "private_builtin.m"
      {
#line 359 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 359 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2432 "private_builtin.c"
        {
#line 2434 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__private_builtin____Unify____typeclass_info_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 359 "private_builtin.m"
      }
#line 359 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 359 "private_builtin.m"
  }
#line 359 "private_builtin.m"
}

#line 357 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0(
#line 357 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 357 "private_builtin.m"
{
#line 357 "private_builtin.m"
  {
#line 357 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 357 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 357 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 357 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 357 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2470 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 357 "private_builtin.m"
    else
#line 357 "private_builtin.m"
      {
#line 357 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 357 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 357 "private_builtin.m"
        {
#line 357 "private_builtin.m"
          mercury__private_builtin____Compare____type_info_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 357 "private_builtin.m"
          return;
        }
#line 357 "private_builtin.m"
      }
#line 357 "private_builtin.m"
  }
#line 357 "private_builtin.m"
}

#line 357 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0(
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 357 "private_builtin.m"
{
#line 357 "private_builtin.m"
  {
#line 357 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 357 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 357 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 357 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 357 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 357 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 357 "private_builtin.m"
    else
#line 357 "private_builtin.m"
      {
#line 357 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 357 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2528 "private_builtin.c"
        {
#line 2530 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__private_builtin____Unify____type_info_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 357 "private_builtin.m"
      }
#line 357 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 357 "private_builtin.m"
  }
#line 357 "private_builtin.m"
}

#line 1247 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ref_1_0(
#line 1247 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_4,
#line 1247 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1247 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1247 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 1247 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____ref_1_0(
#line 1247 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_3,
#line 1247 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1247 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 1214 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0(
#line 1214 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1214 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1214 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1214 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 1214 "private_builtin.m"
{
#line 1214 "private_builtin.m"
  {
#line 1214 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1214 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1214 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 1214 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 1214 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2590 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 1214 "private_builtin.m"
    else
#line 1214 "private_builtin.m"
      {
#line 1214 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 1214 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 1214 "private_builtin.m"
        {
#line 1214 "private_builtin.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 1214 "private_builtin.m"
          return;
        }
#line 1214 "private_builtin.m"
      }
#line 1214 "private_builtin.m"
  }
#line 1214 "private_builtin.m"
}

#line 1214 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0(
#line 1214 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_7,
#line 1214 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1214 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 1214 "private_builtin.m"
{
#line 1214 "private_builtin.m"
  {
#line 1214 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1214 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1214 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 1214 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 1214 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1214 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 1214 "private_builtin.m"
    else
#line 1214 "private_builtin.m"
      {
#line 1214 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 1214 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2650 "private_builtin.c"
        {
#line 2652 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 1214 "private_builtin.m"
      }
#line 1214 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1214 "private_builtin.m"
  }
#line 1214 "private_builtin.m"
}

#line 1233 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____heap_pointer_0_0(
#line 1233 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1233 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1233 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 1233 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____heap_pointer_0_0(
#line 1233 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1233 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 863 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0(
#line 863 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 863 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 863 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 863 "private_builtin.m"
{
#line 863 "private_builtin.m"
  {
#line 863 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 863 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 863 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 863 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 863 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2706 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 863 "private_builtin.m"
    else
#line 863 "private_builtin.m"
      {
#line 863 "private_builtin.m"
        MR_Float mercury__private_builtin__V_4_4 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__2_2);
#line 863 "private_builtin.m"
        MR_Float mercury__private_builtin__V_5_5 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__3_3);

#line 227 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 < mercury__private_builtin__V_5_5);
#line 229 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 228 "private_builtin.m"
          *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 229 "private_builtin.m"
        else
#line 231 "private_builtin.m"
          {
#line 229 "private_builtin.m"
            mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 > mercury__private_builtin__V_5_5);
#line 231 "private_builtin.m"
            if (mercury__private_builtin__succeeded)
#line 230 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 231 "private_builtin.m"
            else
#line 232 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 231 "private_builtin.m"
          }
#line 863 "private_builtin.m"
      }
#line 863 "private_builtin.m"
  }
#line 863 "private_builtin.m"
}

#line 863 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0(
#line 863 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 863 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 863 "private_builtin.m"
{
#line 863 "private_builtin.m"
  {
#line 863 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 863 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 863 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 863 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 863 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 863 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 863 "private_builtin.m"
    else
#line 863 "private_builtin.m"
      {
#line 863 "private_builtin.m"
        MR_Float mercury__private_builtin__V_3_3 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__1_1);
#line 863 "private_builtin.m"
        MR_Float mercury__private_builtin__V_4_4 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__2_2);

#line 2779 "private_builtin.c"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_3_3 == mercury__private_builtin__V_4_4);
#line 863 "private_builtin.m"
      }
#line 863 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 863 "private_builtin.m"
  }
#line 863 "private_builtin.m"
}

#line 351 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____base_typeclass_info_0_0(
#line 351 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 351 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 351 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 351 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____base_typeclass_info_0_0(
#line 351 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 351 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 1968 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__trace_set_io_state_1_p_0(void)
#line 1968 "private_builtin.m"
{
#line 1968 "private_builtin.m"
  {
#line 1968 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1968 "private_builtin.m"
  }
#line 1968 "private_builtin.m"
}

#line 1966 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__trace_get_io_state_1_p_0(void)
#line 1966 "private_builtin.m"
{
#line 1966 "private_builtin.m"
  {
#line 1966 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1966 "private_builtin.m"
  }
#line 1966 "private_builtin.m"
}

#line 1964 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0(void)
#line 1964 "private_builtin.m"
{
#line 1972 "private_builtin.m"
  {
#line 1972 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1976 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1976 "private_builtin.m"

    /* All uses of this predicate should override the body. */
    MR_fatal_error("trace_evaluate_runtime_condition called");

#line 2860 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1976 "private_builtin.m"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1972 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1972 "private_builtin.m"
  }
#line 1964 "private_builtin.m"
}

#line 1610 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__semip_0_p_0(void)
#line 1610 "private_builtin.m"
{
#line 1652 "private_builtin.m"
  {
#line 1652 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1652 "private_builtin.m"
  }
#line 1610 "private_builtin.m"
}

#line 1606 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__imp_0_p_0(void)
#line 1606 "private_builtin.m"
{
#line 1631 "private_builtin.m"
  {
#line 1631 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1634 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__imp_0_p_0


		{
#line 1634 "private_builtin.m"

#line 2909 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1634 "private_builtin.m"
}
#line 1631 "private_builtin.m"
  }
#line 1606 "private_builtin.m"
}

#line 1602 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__sorry_1_p_0(
#line 1602 "private_builtin.m"
  MR_String mercury__private_builtin__PredName_2)
#line 1602 "private_builtin.m"
{
#line 1624 "private_builtin.m"
  {
#line 1624 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1624 "private_builtin.m"
    MR_String mercury__private_builtin__V_3_3;
#line 1624 "private_builtin.m"
    MR_String mercury__private_builtin__V_5_5;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__private_builtin__PredName_2, (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_5_5);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_5_5, &mercury__private_builtin__V_3_3);
    }
#line 1625 "private_builtin.m"
    {
#line 1625 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_3_3);
#line 1625 "private_builtin.m"
      return;
    }
#line 1624 "private_builtin.m"
  }
#line 1602 "private_builtin.m"
}

#line 1596 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__no_clauses_1_p_0(
#line 1596 "private_builtin.m"
  MR_String mercury__private_builtin__PredName_2)
#line 1596 "private_builtin.m"
{
#line 1628 "private_builtin.m"
  {
#line 1628 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1628 "private_builtin.m"
    MR_String mercury__private_builtin__V_3_3;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) "no clauses for ", mercury__private_builtin__PredName_2, &mercury__private_builtin__V_3_3);
    }
#line 1629 "private_builtin.m"
    {
#line 1629 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_3_3);
#line 1629 "private_builtin.m"
      return;
    }
#line 1628 "private_builtin.m"
  }
#line 1596 "private_builtin.m"
}

#line 1588 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__nonvar_1_p_2(
#line 1588 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5)
#line 1588 "private_builtin.m"
{
#line 1622 "private_builtin.m"
  {
#line 1622 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1622 "private_builtin.m"
    {
#line 1622 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2();
    }
#line 1622 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1622 "private_builtin.m"
  }
#line 1588 "private_builtin.m"
}

#line 1587 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nonvar_1_p_1(
#line 1587 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1587 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1587 "private_builtin.m"
{
#line 1621 "private_builtin.m"
  {
#line 1621 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1621 "private_builtin.m"
    {
#line 1621 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1();
#line 1621 "private_builtin.m"
      return;
    }
#line 1621 "private_builtin.m"
  }
#line 1587 "private_builtin.m"
}

#line 1586 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nonvar_1_p_0(
#line 1586 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1586 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1586 "private_builtin.m"
{
#line 1620 "private_builtin.m"
  {
#line 1620 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1620 "private_builtin.m"
    {
#line 1620 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0();
#line 1620 "private_builtin.m"
      return;
    }
#line 1620 "private_builtin.m"
  }
#line 1586 "private_builtin.m"
}

#line 1583 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__var_1_p_2(
#line 1583 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5)
#line 1583 "private_builtin.m"
{
#line 1618 "private_builtin.m"
  {
#line 1618 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1618 "private_builtin.m"
    {
#line 1618 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2();
#line 1618 "private_builtin.m"
      return;
    }
#line 1618 "private_builtin.m"
  }
#line 1583 "private_builtin.m"
}

#line 1582 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__var_1_p_1(
#line 1582 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1582 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1582 "private_builtin.m"
{
#line 1617 "private_builtin.m"
  {
#line 1617 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1617 "private_builtin.m"
    {
#line 1617 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1();
    }
#line 1617 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1617 "private_builtin.m"
  }
#line 1582 "private_builtin.m"
}

#line 1581 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__var_1_p_0(
#line 1581 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1581 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1581 "private_builtin.m"
{
#line 1616 "private_builtin.m"
  {
#line 1616 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1616 "private_builtin.m"
    {
#line 1616 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0();
    }
#line 1616 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1616 "private_builtin.m"
  }
#line 1581 "private_builtin.m"
}

#line 1544 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nyi_foreign_type_compare_3_p_0(
#line 1544 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1544 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4,
#line 1544 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_5,
#line 1544 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__3_6)
#line 1544 "private_builtin.m"
{
#line 1568 "private_builtin.m"
  {
#line 1568 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1568 "private_builtin.m"
    {
#line 1568 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Result_4);
#line 1568 "private_builtin.m"
      return;
    }
#line 1568 "private_builtin.m"
  }
#line 1544 "private_builtin.m"
}

#line 1543 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__nyi_foreign_type_unify_2_p_0(
#line 1543 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
#line 1543 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_3,
#line 1543 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_4)
#line 1543 "private_builtin.m"
{
#line 1561 "private_builtin.m"
  {
#line 1561 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1561 "private_builtin.m"
    {
#line 1561 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 1561 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1561 "private_builtin.m"
  }
#line 1543 "private_builtin.m"
}

#line 1541 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unused_0_p_0(void)
#line 1541 "private_builtin.m"
{
#line 1553 "private_builtin.m"
  {
#line 1553 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__unused_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 3220 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1553 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1552 "private_builtin.m"
      {
#line 1552 "private_builtin.m"
        {
#line 1552 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted use of dead predicate");
#line 1552 "private_builtin.m"
          return;
        }
#line 1552 "private_builtin.m"
      }
#line 1553 "private_builtin.m"
    else
#line 1555 "private_builtin.m"
      {
#line 1555 "private_builtin.m"
      }
#line 1553 "private_builtin.m"
  }
#line 1541 "private_builtin.m"
}

#line 1530 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_at_ref_2_p_0(
#line 1530 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1530 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 1530 "private_builtin.m"
{
#line 1530 "private_builtin.m"
  {
#line 1530 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1530 "private_builtin.m"
  }
#line 1530 "private_builtin.m"
}

#line 1525 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_at_ref_impure_2_p_0(
#line 1525 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1525 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 1525 "private_builtin.m"
{
#line 1525 "private_builtin.m"
  {
#line 1525 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1525 "private_builtin.m"
    *mercury__private_builtin__HeadVar__1_1 = mercury__private_builtin__HeadVar__2_2;
#line 1525 "private_builtin.m"
  }
#line 1525 "private_builtin.m"
}

#line 1520 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unsafe_type_cast_2_p_0(
#line 1520 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1,
#line 1520 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2)
#line 1520 "private_builtin.m"
{
#line 1520 "private_builtin.m"
  {
#line 1520 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1520 "private_builtin.m"
    *mercury__private_builtin__HeadVar__2_2 = mercury__private_builtin__HeadVar__1_1;
#line 1520 "private_builtin.m"
  }
#line 1520 "private_builtin.m"
}

#line 1242 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reclaim_heap_nondet_pragma_foreign_code_0_p_0(void)
#line 1242 "private_builtin.m"
{
#line 1395 "private_builtin.m"
  {
#line 1395 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1395 "private_builtin.m"
    MR_String mercury__private_builtin__Msg_1;
#line 1395 "private_builtin.m"
    MR_Word mercury__private_builtin__V_2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__private_builtin_scalar_common_4[7]);

#line 1396 "private_builtin.m"
    {
#line 1396 "private_builtin.m"
      mercury__private_builtin__Msg_1 = mercury__string__append_list_1_f_0(mercury__private_builtin__V_2_2);
    }
#line 1402 "private_builtin.m"
    {
#line 1402 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__Msg_1);
#line 1402 "private_builtin.m"
      return;
    }
#line 1395 "private_builtin.m"
  }
#line 1242 "private_builtin.m"
}

#line 1236 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__restore_hp_1_p_0(
#line 1236 "private_builtin.m"
  MR_Word mercury__private_builtin__SavedHeapPointer_1)
#line 1236 "private_builtin.m"
{
#line 1301 "private_builtin.m"
  {
#line 1301 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1305 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__restore_hp_1_p_0

	MR_Word SavedHeapPointer;

	SavedHeapPointer =  mercury__private_builtin__SavedHeapPointer_1 ;
		{
#line 1305 "private_builtin.m"

#ifndef MR_CONSERVATIVE_GC
    MR_restore_hp(SavedHeapPointer);
#endif

#line 3371 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1305 "private_builtin.m"
}
#line 1301 "private_builtin.m"
  }
#line 1236 "private_builtin.m"
}

#line 1235 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__mark_hp_1_p_0(
#line 1235 "private_builtin.m"
  MR_Word * mercury__private_builtin__SavedHeapPointer_1)
#line 1235 "private_builtin.m"
{
#line 1288 "private_builtin.m"
  {
#line 1288 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1292 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__mark_hp_1_p_0

	MR_Word SavedHeapPointer;

		{
#line 1292 "private_builtin.m"

#ifndef MR_CONSERVATIVE_GC
    MR_mark_hp(SavedHeapPointer);
#else
    /* We can't do heap reclamation with conservative GC. */
    SavedHeapPointer = 0;
#endif

#line 3410 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__SavedHeapPointer_1  = SavedHeapPointer;
#line 1292 "private_builtin.m"
}
#line 1288 "private_builtin.m"
  }
#line 1235 "private_builtin.m"
}

#line 1225 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__gc_trace_1_p_0(
#line 1225 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_2,
#line 1225 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1)
#line 1225 "private_builtin.m"
{
#line 1266 "private_builtin.m"
  {
#line 1266 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1269 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__gc_trace_1_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Pointer;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T_2 ;
	Pointer =  mercury__private_builtin__HeadVar__1_1 ;
		{
#line 1269 "private_builtin.m"

#ifdef MR_NATIVE_GC
    * (MR_Word *) Pointer =
        MR_agc_deep_copy(* (MR_Word *) Pointer, (MR_TypeInfo) TypeInfo_for_T,
            MR_ENGINE(MR_eng_heap_zone2->MR_zone_min),
            MR_ENGINE(MR_eng_heap_zone2->MR_zone_hardmax));
#else
    MR_fatal_error("private_builtin.gc_trace/2: "
        "called when accurate GC not enabled");
#endif

#line 3458 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1269 "private_builtin.m"
}
#line 1266 "private_builtin.m"
  }
#line 1225 "private_builtin.m"
}

#line 1212 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__free_heap_1_p_0(
#line 1212 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_2,
#line 1212 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1212 "private_builtin.m"
{
#line 1281 "private_builtin.m"
  {
#line 1281 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1281 "private_builtin.m"
    MR_Word mercury__private_builtin__TypeInfo_for_T_3;

#line 1284 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__free_heap_1_p_0

	MR_Word Val;

	Val = (MR_Word) mercury__private_builtin__HeadVar__1_1 ;
		{
#line 1284 "private_builtin.m"

    MR_free_heap((void *) Val);

#line 3497 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1284 "private_builtin.m"
}
#line 1281 "private_builtin.m"
  }
#line 1212 "private_builtin.m"
}

#line 896 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__trailed_nondet_pragma_foreign_code_0_p_0(void)
#line 896 "private_builtin.m"
{
#line 1184 "private_builtin.m"
  {
#line 1184 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1184 "private_builtin.m"
    MR_String mercury__private_builtin__Msg_1;
#line 1184 "private_builtin.m"
    MR_Word mercury__private_builtin__V_2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__private_builtin_scalar_common_4[3]);

#line 1185 "private_builtin.m"
    {
#line 1185 "private_builtin.m"
      mercury__private_builtin__Msg_1 = mercury__string__append_list_1_f_0(mercury__private_builtin__V_2_2);
    }
#line 1191 "private_builtin.m"
    {
#line 1191 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__Msg_1);
#line 1191 "private_builtin.m"
      return;
    }
#line 1184 "private_builtin.m"
  }
#line 896 "private_builtin.m"
}

#line 890 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__prune_tickets_to_1_p_0(
#line 890 "private_builtin.m"
  MR_Word mercury__private_builtin__TicketCounter_1)
#line 890 "private_builtin.m"
{
#line 969 "private_builtin.m"
  {
#line 969 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 972 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__prune_tickets_to_1_p_0

	MR_Word TicketCounter;

	TicketCounter =  mercury__private_builtin__TicketCounter_1 ;
		{
#line 972 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_prune_tickets_to(TicketCounter);
#endif

#line 3565 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 972 "private_builtin.m"
}
#line 969 "private_builtin.m"
  }
#line 890 "private_builtin.m"
}

#line 889 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__mark_ticket_stack_1_p_0(
#line 889 "private_builtin.m"
  MR_Word * mercury__private_builtin__TicketCounter_1)
#line 889 "private_builtin.m"
{
#line 958 "private_builtin.m"
  {
#line 958 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 961 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__mark_ticket_stack_1_p_0

	MR_Word TicketCounter;

		{
#line 961 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_mark_ticket_stack(TicketCounter);
#else
    TicketCounter = 0;
#endif

#line 3603 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TicketCounter_1  = TicketCounter;
#line 961 "private_builtin.m"
}
#line 958 "private_builtin.m"
  }
#line 889 "private_builtin.m"
}

#line 888 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__prune_ticket_0_p_0(void)
#line 888 "private_builtin.m"
{
#line 949 "private_builtin.m"
  {
#line 949 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 952 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__prune_ticket_0_p_0


		{
#line 952 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_prune_ticket();
#endif

#line 3637 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 952 "private_builtin.m"
}
#line 949 "private_builtin.m"
  }
#line 888 "private_builtin.m"
}

#line 887 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__discard_ticket_0_p_0(void)
#line 887 "private_builtin.m"
{
#line 940 "private_builtin.m"
  {
#line 940 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 943 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__discard_ticket_0_p_0


		{
#line 943 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 3670 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 943 "private_builtin.m"
}
#line 940 "private_builtin.m"
  }
#line 887 "private_builtin.m"
}

#line 886 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_solve_1_p_0(
#line 886 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 886 "private_builtin.m"
{
#line 931 "private_builtin.m"
  {
#line 931 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 934 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_solve_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 934 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_solve);
#endif

#line 3707 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 934 "private_builtin.m"
}
#line 931 "private_builtin.m"
  }
#line 886 "private_builtin.m"
}

#line 885 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_commit_1_p_0(
#line 885 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 885 "private_builtin.m"
{
#line 922 "private_builtin.m"
  {
#line 922 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 925 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_commit_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 925 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_commit);
#endif

#line 3744 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 925 "private_builtin.m"
}
#line 922 "private_builtin.m"
  }
#line 885 "private_builtin.m"
}

#line 884 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_undo_1_p_0(
#line 884 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 884 "private_builtin.m"
{
#line 913 "private_builtin.m"
  {
#line 913 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 916 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_undo_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 916 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_undo);
#endif

#line 3781 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 916 "private_builtin.m"
}
#line 913 "private_builtin.m"
  }
#line 884 "private_builtin.m"
}

#line 883 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_ticket_1_p_0(
#line 883 "private_builtin.m"
  MR_Word * mercury__private_builtin__Ticket_1)
#line 883 "private_builtin.m"
{
#line 902 "private_builtin.m"
  {
#line 902 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 905 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__store_ticket_1_p_0

	MR_Word Ticket;

		{
#line 905 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_store_ticket(Ticket);
#else
    Ticket = 0;
#endif

#line 3819 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__Ticket_1  = Ticket;
#line 905 "private_builtin.m"
}
#line 902 "private_builtin.m"
  }
#line 883 "private_builtin.m"
}

#line 399 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0(
#line 399 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo0_1,
#line 399 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 399 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeClassInfo_3)
#line 399 "private_builtin.m"
{
#line 728 "private_builtin.m"
  {
#line 728 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 733 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__private_builtin__TypeClassInfo0_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 733 "private_builtin.m"

    TypeClassInfo =
        MR_typeclass_info_arg_typeclass_info(TypeClassInfo0, Index);

#line 3863 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeClassInfo_3  = TypeClassInfo;
#line 733 "private_builtin.m"
}
#line 728 "private_builtin.m"
  }
#line 399 "private_builtin.m"
}

#line 387 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__superclass_from_typeclass_info_3_p_0(
#line 387 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo0_1,
#line 387 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 387 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeClassInfo_3)
#line 387 "private_builtin.m"
{
#line 718 "private_builtin.m"
  {
#line 718 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 723 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__superclass_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__private_builtin__TypeClassInfo0_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 723 "private_builtin.m"

    TypeClassInfo =
        MR_typeclass_info_superclass_info(TypeClassInfo0, Index);

#line 3907 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeClassInfo_3  = TypeClassInfo;
#line 723 "private_builtin.m"
}
#line 718 "private_builtin.m"
  }
#line 387 "private_builtin.m"
}

#line 379 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0(
#line 379 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo_1,
#line 379 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 379 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeInfo_3)
#line 379 "private_builtin.m"
{
#line 709 "private_builtin.m"
  {
#line 709 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 714 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__private_builtin__TypeClassInfo_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 714 "private_builtin.m"

    TypeInfo = MR_typeclass_info_instance_tvar_type_info(TypeClassInfo, Index);

#line 3950 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeInfo_3  = TypeInfo;
#line 714 "private_builtin.m"
}
#line 709 "private_builtin.m"
  }
#line 379 "private_builtin.m"
}

#line 370 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__type_info_from_typeclass_info_3_p_0(
#line 370 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo_1,
#line 370 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 370 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeInfo_3)
#line 370 "private_builtin.m"
{
#line 700 "private_builtin.m"
  {
#line 700 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 705 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__private_builtin__TypeClassInfo_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 705 "private_builtin.m"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3993 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeInfo_3  = TypeInfo;
#line 705 "private_builtin.m"
}
#line 700 "private_builtin.m"
  }
#line 370 "private_builtin.m"
}

#line 187 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_strcmp_3_p_0(
#line 187 "private_builtin.m"
  MR_Integer * mercury__private_builtin__Res_1,
#line 187 "private_builtin.m"
  MR_String mercury__private_builtin__S1_2,
#line 187 "private_builtin.m"
  MR_String mercury__private_builtin__S2_3)
#line 187 "private_builtin.m"
{
#line 189 "private_builtin.m"
  {
#line 189 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 193 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_strcmp_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__private_builtin__S1_2 ;
	S2 =  mercury__private_builtin__S2_3 ;
		{
#line 193 "private_builtin.m"

    Res = strcmp(S1, S2);

#line 4036 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__Res_1  = Res;
#line 193 "private_builtin.m"
}
#line 189 "private_builtin.m"
  }
#line 187 "private_builtin.m"
}

#line 119 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__typed_compare_3_p_0(
#line 119 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T1_11,
#line 119 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T2_12,
#line 119 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 119 "private_builtin.m"
  MR_Box mercury__private_builtin__X_5,
#line 119 "private_builtin.m"
  MR_Box mercury__private_builtin__Y_6)
#line 119 "private_builtin.m"
{
#line 330 "private_builtin.m"
  {
#line 330 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 330 "private_builtin.m"
    MR_Word mercury__private_builtin__R0_7;
#line 330 "private_builtin.m"
    MR_Word mercury__private_builtin__V_9_9;
#line 330 "private_builtin.m"
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
#line 4104 "private_builtin.c"

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
#line 4137 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_10_10  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 331 "private_builtin.m"
    {
#line 331 "private_builtin.m"
      mercury__type_desc____Compare____type_desc_0_0(&mercury__private_builtin__R0_7, mercury__private_builtin__V_9_9, mercury__private_builtin__V_10_10);
    }
#line 332 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__R0_7 == (MR_Integer) 0);
#line 335 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 333 "private_builtin.m"
      {
#line 333 "private_builtin.m"
        MR_Box mercury__private_builtin__Z_8 = mercury__private_builtin__X_5;

#line 334 "private_builtin.m"
        {
#line 334 "private_builtin.m"
          mercury__builtin__compare_3_p_0(mercury__private_builtin__TypeInfo_for_T2_12, mercury__private_builtin__R_4, mercury__private_builtin__Z_8, mercury__private_builtin__Y_6);
#line 334 "private_builtin.m"
          return;
        }
#line 333 "private_builtin.m"
      }
#line 335 "private_builtin.m"
    else
#line 336 "private_builtin.m"
      *mercury__private_builtin__R_4 = mercury__private_builtin__R0_7;
#line 330 "private_builtin.m"
  }
#line 119 "private_builtin.m"
}

#line 113 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__typed_unify_2_p_1(
#line 113 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T1_6,
#line 113 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T2_7,
#line 113 "private_builtin.m"
  MR_Box mercury__private_builtin__X_3,
#line 113 "private_builtin.m"
  MR_Box * mercury__private_builtin__Y_4)
#line 113 "private_builtin.m"
{
#line 326 "private_builtin.m"
  {
#line 326 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 326 "private_builtin.m"
    MR_Word mercury__private_builtin__V_5_5;
#line 326 "private_builtin.m"
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
#line 4226 "private_builtin.c"

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
#line 4259 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_9_9  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 324 "private_builtin.m"
    {
#line 324 "private_builtin.m"
      mercury__private_builtin__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__private_builtin__V_5_5, mercury__private_builtin__V_9_9);
    }
#line 326 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 326 "private_builtin.m"
      {
#line 325 "private_builtin.m"
        *mercury__private_builtin__Y_4 = mercury__private_builtin__X_3;
#line 325 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 326 "private_builtin.m"
      }
#line 326 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 326 "private_builtin.m"
  }
#line 113 "private_builtin.m"
}

#line 112 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__typed_unify_2_p_0(
#line 112 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T1_6,
#line 112 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T2_7,
#line 112 "private_builtin.m"
  MR_Box mercury__private_builtin__X_3,
#line 112 "private_builtin.m"
  MR_Box mercury__private_builtin__Y_4)
#line 112 "private_builtin.m"
{
#line 326 "private_builtin.m"
  {
#line 326 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 326 "private_builtin.m"
    MR_Word mercury__private_builtin__V_5_5;
#line 326 "private_builtin.m"
    MR_Word mercury__private_builtin__V_10_10;
#line 326 "private_builtin.m"
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
#line 4342 "private_builtin.c"

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
#line 4375 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_10_10  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 324 "private_builtin.m"
    {
#line 324 "private_builtin.m"
      mercury__private_builtin__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__private_builtin__V_5_5, mercury__private_builtin__V_10_10);
    }
#line 326 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 326 "private_builtin.m"
      {
#line 325 "private_builtin.m"
        mercury__private_builtin__V_11_11 = mercury__private_builtin__X_3;
#line 325 "private_builtin.m"
        {
#line 325 "private_builtin.m"
          return mercury__private_builtin__succeeded = mercury__builtin__unify_2_p_0(mercury__private_builtin__TypeInfo_for_T2_7, mercury__private_builtin__Y_4, mercury__private_builtin__V_11_11);
        }
#line 326 "private_builtin.m"
      }
#line 326 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 326 "private_builtin.m"
  }
#line 112 "private_builtin.m"
}

#line 105 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_compound_lt_2_p_0(
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

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_lt\'/2", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_7_7);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_7_7, &mercury__private_builtin__V_5_5);
    }
#line 1625 "private_builtin.m"
    {
#line 1625 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_5_5);
    }
#line 105 "private_builtin.m"
    return MR_TRUE;
#line 105 "private_builtin.m"
  }
#line 105 "private_builtin.m"
}

#line 104 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_compound_eq_2_p_0(
#line 104 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1,
#line 104 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 104 "private_builtin.m"
{
#line 104 "private_builtin.m"
  {
#line 104 "private_builtin.m"
    MR_String mercury__private_builtin__V_5_5;
#line 104 "private_builtin.m"
    MR_String mercury__private_builtin__V_7_7;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_eq\'/2", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_7_7);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_7_7, &mercury__private_builtin__V_5_5);
    }
#line 1625 "private_builtin.m"
    {
#line 1625 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_5_5);
    }
#line 104 "private_builtin.m"
    return MR_TRUE;
#line 104 "private_builtin.m"
  }
#line 104 "private_builtin.m"
}

#line 98 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_int_gt_2_p_0(
#line 98 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__1_1,
#line 98 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__2_2)
#line 98 "private_builtin.m"
{
#line 98 "private_builtin.m"
  {
#line 98 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__HeadVar__1_1 > mercury__private_builtin__HeadVar__2_2);

#line 98 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 98 "private_builtin.m"
  }
#line 98 "private_builtin.m"
}

#line 93 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_int_lt_2_p_0(
#line 93 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__1_1,
#line 93 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__2_2)
#line 93 "private_builtin.m"
{
#line 93 "private_builtin.m"
  {
#line 93 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__HeadVar__1_1 < mercury__private_builtin__HeadVar__2_2);

#line 93 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 93 "private_builtin.m"
  }
#line 93 "private_builtin.m"
}

#line 88 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__compare_error_0_p_0(void)
#line 88 "private_builtin.m"
{
#line 318 "private_builtin.m"
  {
#line 318 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 319 "private_builtin.m"
    {
#line 319 "private_builtin.m"
      mercury__require__error_1_p_0((MR_String) "internal error in compare/3");
#line 319 "private_builtin.m"
      return;
    }
#line 318 "private_builtin.m"
  }
#line 88 "private_builtin.m"
}

#line 83 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_solver_type_3_p_0(
#line 83 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 83 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4,
#line 83 "private_builtin.m"
  MR_Box mercury__private_builtin___X_5,
#line 83 "private_builtin.m"
  MR_Box mercury__private_builtin___Y_6)
#line 83 "private_builtin.m"
{
#line 312 "private_builtin.m"
  {
#line 312 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 312 "private_builtin.m"
    {
#line 312 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Res_4);
#line 312 "private_builtin.m"
      return;
    }
#line 312 "private_builtin.m"
  }
#line 83 "private_builtin.m"
}

#line 82 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_solver_type_2_p_0(
#line 82 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
#line 82 "private_builtin.m"
  MR_Box mercury__private_builtin___X_3,
#line 82 "private_builtin.m"
  MR_Box mercury__private_builtin___Y_4)
#line 82 "private_builtin.m"
{
#line 298 "private_builtin.m"
  {
#line 298 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 298 "private_builtin.m"
    {
#line 298 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 298 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 298 "private_builtin.m"
  }
#line 82 "private_builtin.m"
}

#line 75 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_non_canonical_type_3_p_0(
#line 75 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_13,
#line 75 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4,
#line 75 "private_builtin.m"
  MR_Box mercury__private_builtin__X_5,
#line 75 "private_builtin.m"
  MR_Box mercury__private_builtin___Y_6)
#line 75 "private_builtin.m"
{
#line 280 "private_builtin.m"
  {
#line 280 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 280 "private_builtin.m"
    {
#line 280 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__TypeInfo_for_T_13, mercury__private_builtin__Res_4);
#line 280 "private_builtin.m"
      return;
    }
#line 280 "private_builtin.m"
  }
#line 75 "private_builtin.m"
}

#line 70 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_tuple_3_p_0(
#line 70 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 70 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4,
#line 70 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_5,
#line 70 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__3_6)
#line 70 "private_builtin.m"
{
#line 250 "private_builtin.m"
  {
#line 250 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 250 "private_builtin.m"
    {
#line 250 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Res_4);
#line 250 "private_builtin.m"
      return;
    }
#line 250 "private_builtin.m"
  }
#line 70 "private_builtin.m"
}

#line 69 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_tuple_2_p_0(
#line 69 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
#line 69 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_3,
#line 69 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_4)
#line 69 "private_builtin.m"
{
#line 240 "private_builtin.m"
  {
#line 240 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 240 "private_builtin.m"
    {
#line 240 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 240 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 240 "private_builtin.m"
  }
#line 69 "private_builtin.m"
}

#line 62 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_pred_3_p_0(
#line 62 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4,
#line 62 "private_builtin.m"
  MR_Word mercury__private_builtin___X_5,
#line 62 "private_builtin.m"
  MR_Word mercury__private_builtin___Y_6)
#line 62 "private_builtin.m"
{
#line 268 "private_builtin.m"
  {
#line 268 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 268 "private_builtin.m"
    {
#line 268 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__private_builtin__Result_4);
#line 268 "private_builtin.m"
      return;
    }
#line 268 "private_builtin.m"
  }
#line 62 "private_builtin.m"
}

#line 61 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_pred_2_p_0(
#line 61 "private_builtin.m"
  MR_Word mercury__private_builtin___X_3,
#line 61 "private_builtin.m"
  MR_Word mercury__private_builtin___Y_4)
#line 61 "private_builtin.m"
{
#line 259 "private_builtin.m"
  {
#line 259 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 259 "private_builtin.m"
    {
#line 259 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 259 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 259 "private_builtin.m"
  }
#line 61 "private_builtin.m"
}

#line 58 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_float_3_p_0(
#line 58 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 58 "private_builtin.m"
  MR_Float mercury__private_builtin__F1_5,
#line 58 "private_builtin.m"
  MR_Float mercury__private_builtin__F2_6)
#line 58 "private_builtin.m"
{
#line 229 "private_builtin.m"
  {
#line 229 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__F1_5 < mercury__private_builtin__F2_6);

#line 229 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 228 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 229 "private_builtin.m"
    else
#line 231 "private_builtin.m"
      {
#line 229 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__F1_5 > mercury__private_builtin__F2_6);
#line 231 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 230 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 231 "private_builtin.m"
        else
#line 232 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 231 "private_builtin.m"
      }
#line 229 "private_builtin.m"
  }
#line 58 "private_builtin.m"
}

#line 57 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_float_2_p_0(
#line 57 "private_builtin.m"
  MR_Float mercury__private_builtin__F_3,
#line 57 "private_builtin.m"
  MR_Float mercury__private_builtin__F_2)
#line 57 "private_builtin.m"
{
#line 224 "private_builtin.m"
  {
#line 224 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__F_2 == mercury__private_builtin__F_3);

#line 224 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 224 "private_builtin.m"
  }
#line 57 "private_builtin.m"
}

#line 54 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_string_3_p_0(
#line 54 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 54 "private_builtin.m"
  MR_String mercury__private_builtin__S1_5,
#line 54 "private_builtin.m"
  MR_String mercury__private_builtin__S2_6)
#line 54 "private_builtin.m"
{
#line 177 "private_builtin.m"
  {
#line 177 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 177 "private_builtin.m"
    MR_Integer mercury__private_builtin__Res_7;

#line 193 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_string_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__private_builtin__S1_5 ;
	S2 =  mercury__private_builtin__S2_6 ;
		{
#line 193 "private_builtin.m"

    Res = strcmp(S1, S2);

#line 4842 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__Res_7  = Res;
#line 193 "private_builtin.m"
}
#line 179 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__Res_7 < (MR_Integer) 0);
#line 181 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 180 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 181 "private_builtin.m"
    else
#line 183 "private_builtin.m"
      {
#line 181 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__Res_7 == (MR_Integer) 0);
#line 183 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 182 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 183 "private_builtin.m"
        else
#line 184 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 183 "private_builtin.m"
      }
#line 177 "private_builtin.m"
  }
#line 54 "private_builtin.m"
}

#line 53 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_string_2_p_0(
#line 53 "private_builtin.m"
  MR_String mercury__private_builtin__S_3,
#line 53 "private_builtin.m"
  MR_String mercury__private_builtin__S_2)
#line 53 "private_builtin.m"
{
#line 175 "private_builtin.m"
  {
#line 175 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (strcmp(mercury__private_builtin__S_2, mercury__private_builtin__S_3) == 0);

#line 175 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 175 "private_builtin.m"
  }
#line 53 "private_builtin.m"
}

#line 50 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_character_3_p_0(
#line 50 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 50 "private_builtin.m"
  MR_Char mercury__private_builtin__X_5,
#line 50 "private_builtin.m"
  MR_Char mercury__private_builtin__Y_6)
#line 50 "private_builtin.m"
{
#line 164 "private_builtin.m"
  {
#line 164 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 164 "private_builtin.m"
    MR_Integer mercury__private_builtin__XI_7;
#line 164 "private_builtin.m"
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

#line 4930 "private_builtin.c"

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

#line 4950 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__YI_8  = Int;
#line 63 "char.opt"
}
#line 167 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__XI_7 < mercury__private_builtin__YI_8);
#line 169 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 168 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 169 "private_builtin.m"
    else
#line 171 "private_builtin.m"
      {
#line 169 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__XI_7 == mercury__private_builtin__YI_8);
#line 171 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 170 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 171 "private_builtin.m"
        else
#line 172 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 171 "private_builtin.m"
      }
#line 164 "private_builtin.m"
  }
#line 50 "private_builtin.m"
}

#line 49 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_character_2_p_0(
#line 49 "private_builtin.m"
  MR_Char mercury__private_builtin__C_3,
#line 49 "private_builtin.m"
  MR_Char mercury__private_builtin__C_2)
#line 49 "private_builtin.m"
{
#line 162 "private_builtin.m"
  {
#line 162 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__C_2 == mercury__private_builtin__C_3);

#line 162 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 162 "private_builtin.m"
  }
#line 49 "private_builtin.m"
}

#line 47 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_int_3_p_0(
#line 47 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 47 "private_builtin.m"
  MR_Integer mercury__private_builtin__X_5,
#line 47 "private_builtin.m"
  MR_Integer mercury__private_builtin__Y_6)
#line 47 "private_builtin.m"
{
#line 156 "private_builtin.m"
  {
#line 156 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__X_5 < mercury__private_builtin__Y_6);

#line 156 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 155 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 156 "private_builtin.m"
    else
#line 158 "private_builtin.m"
      {
#line 156 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__X_5 == mercury__private_builtin__Y_6);
#line 158 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 157 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 158 "private_builtin.m"
        else
#line 159 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 158 "private_builtin.m"
      }
#line 156 "private_builtin.m"
  }
#line 47 "private_builtin.m"
}

#line 46 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_int_2_p_0(
#line 46 "private_builtin.m"
  MR_Integer mercury__private_builtin__X_3,
#line 46 "private_builtin.m"
  MR_Integer mercury__private_builtin__X_2)
#line 46 "private_builtin.m"
{
#line 151 "private_builtin.m"
  {
#line 151 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__X_2 == mercury__private_builtin__X_3);

#line 151 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 151 "private_builtin.m"
  }
#line 46 "private_builtin.m"
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
