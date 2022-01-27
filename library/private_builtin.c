/*
** Automatically generated from `private_builtin.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





#line 94 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_float_box_0[1];

#line 97 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0;

#line 100 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_mutvar_1[1];

#line 103 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1;

#line 106 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0[1];

#line 109 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0;

#line 112 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0[1];

#line 115 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0;

#line 118 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1[1];

#line 121 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1;

#line 124 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0_10001(
#line 127 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 129 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 132 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
#line 135 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 137 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 139 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 142 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
#line 145 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 147 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 149 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 152 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
#line 155 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 157 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 159 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 161 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4);

#line 164 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
#line 167 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 169 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 172 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
#line 175 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 177 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 179 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 182 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
#line 185 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 187 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 190 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
#line 193 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 195 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 197 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 200 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
#line 203 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 205 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 207 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 210 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
#line 213 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 215 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 217 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 219 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4);

#line 222 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
#line 225 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 227 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 230 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
#line 233 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 235 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 237 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 240 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
#line 243 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 245 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 248 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
#line 251 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 253 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 255 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__private_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__private_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__private_builtin_scalar_common_3[2][5];




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
#include "version_array.mh"
#line 1637 "private_builtin.m"


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




#line 388 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_float_box_0[1] = {
  (MR_Integer) 0
};

#line 393 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 = {
  (MR_String) "float_box",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  NULL
};

#line 400 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_float_box_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____float_box_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____float_box_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "float_box",
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 },
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_float_box_0
};

#line 417 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_mutvar_1[1] = {
  (MR_Integer) 0
};

#line 422 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 429 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_mutvar_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____mutvar_1_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____mutvar_1_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "mutvar",
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 },
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_mutvar_1
};

#line 446 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0[1] = {
  (MR_Integer) 0
};

#line 451 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 = {
  (MR_String) "sample_type_info",
  (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0,
  NULL
};

#line 458 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_sample_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____sample_type_info_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____sample_type_info_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "sample_type_info",
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 },
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0
};

#line 475 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0[1] = {
  (MR_Integer) 0
};

#line 480 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 = {
  (MR_String) "sample_typeclass_info",
  (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0,
  NULL
};

#line 487 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_sample_typeclass_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "sample_typeclass_info",
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 },
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0
};

#line 504 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1[1] = {
  (MR_Integer) 0
};

#line 509 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 = {
  (MR_String) "store_at_ref_type",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 516 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_store_at_ref_type_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____store_at_ref_type_1_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____store_at_ref_type_1_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "store_at_ref_type",
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 },
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1
};

#line 533 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_ticket_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_TICKET,
  ((MR_Box) (mercury__private_builtin____Unify____ticket_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____ticket_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "ticket",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 550 "private_builtin.c"
const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_ticket_counter_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____ticket_counter_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____ticket_counter_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "ticket_counter",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 567 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0_10001(
#line 570 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 572 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 574 "private_builtin.c"
{
#line 576 "private_builtin.c"
  {
#line 578 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 581 "private_builtin.c"
    {
#line 583 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____float_box_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 586 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 588 "private_builtin.c"
  }
#line 590 "private_builtin.c"
}

#line 593 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
#line 596 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 598 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 600 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 602 "private_builtin.c"
{
#line 604 "private_builtin.c"
  {
#line 606 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 609 "private_builtin.c"
    {
#line 611 "private_builtin.c"
      mercury__private_builtin____Compare____float_box_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 614 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 616 "private_builtin.c"
  }
#line 618 "private_builtin.c"
}

#line 621 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
#line 624 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 626 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 628 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 630 "private_builtin.c"
{
#line 632 "private_builtin.c"
  {
#line 634 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 637 "private_builtin.c"
    {
#line 639 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____mutvar_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 642 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 644 "private_builtin.c"
  }
#line 646 "private_builtin.c"
}

#line 649 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
#line 652 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 654 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 656 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 658 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4)
#line 660 "private_builtin.c"
{
#line 662 "private_builtin.c"
  {
#line 664 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 667 "private_builtin.c"
    {
#line 669 "private_builtin.c"
      mercury__private_builtin____Compare____mutvar_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), &mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_3), ((MR_Word) mercury__private_builtin__wrapper_arg_4));
    }
#line 672 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_2 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 674 "private_builtin.c"
  }
#line 676 "private_builtin.c"
}

#line 679 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
#line 682 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 684 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 686 "private_builtin.c"
{
#line 688 "private_builtin.c"
  {
#line 690 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 693 "private_builtin.c"
    {
#line 695 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____sample_type_info_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 698 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 700 "private_builtin.c"
  }
#line 702 "private_builtin.c"
}

#line 705 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
#line 708 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 710 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 712 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 714 "private_builtin.c"
{
#line 716 "private_builtin.c"
  {
#line 718 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 721 "private_builtin.c"
    {
#line 723 "private_builtin.c"
      mercury__private_builtin____Compare____sample_type_info_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 726 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 728 "private_builtin.c"
  }
#line 730 "private_builtin.c"
}

#line 733 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
#line 736 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 738 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 740 "private_builtin.c"
{
#line 742 "private_builtin.c"
  {
#line 744 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 747 "private_builtin.c"
    {
#line 749 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____sample_typeclass_info_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 752 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 754 "private_builtin.c"
  }
#line 756 "private_builtin.c"
}

#line 759 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
#line 762 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 764 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 766 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 768 "private_builtin.c"
{
#line 770 "private_builtin.c"
  {
#line 772 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 775 "private_builtin.c"
    {
#line 777 "private_builtin.c"
      mercury__private_builtin____Compare____sample_typeclass_info_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 780 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 782 "private_builtin.c"
  }
#line 784 "private_builtin.c"
}

#line 787 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
#line 790 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 792 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 794 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 796 "private_builtin.c"
{
#line 798 "private_builtin.c"
  {
#line 800 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 803 "private_builtin.c"
    {
#line 805 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____store_at_ref_type_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Box *) mercury__private_builtin__wrapper_arg_2), ((MR_Box *) mercury__private_builtin__wrapper_arg_3));
    }
#line 808 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 810 "private_builtin.c"
  }
#line 812 "private_builtin.c"
}

#line 815 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
#line 818 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 820 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 822 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 824 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4)
#line 826 "private_builtin.c"
{
#line 828 "private_builtin.c"
  {
#line 830 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 833 "private_builtin.c"
    {
#line 835 "private_builtin.c"
      mercury__private_builtin____Compare____store_at_ref_type_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), &mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Box *) mercury__private_builtin__wrapper_arg_3), ((MR_Box *) mercury__private_builtin__wrapper_arg_4));
    }
#line 838 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_2 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 840 "private_builtin.c"
  }
#line 842 "private_builtin.c"
}

#line 845 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
#line 848 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 850 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 852 "private_builtin.c"
{
#line 854 "private_builtin.c"
  {
#line 856 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 859 "private_builtin.c"
    {
#line 861 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____ticket_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 864 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 866 "private_builtin.c"
  }
#line 868 "private_builtin.c"
}

#line 871 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
#line 874 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 876 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 878 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 880 "private_builtin.c"
{
#line 882 "private_builtin.c"
  {
#line 884 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 887 "private_builtin.c"
    {
#line 889 "private_builtin.c"
      mercury__private_builtin____Compare____ticket_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 892 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 894 "private_builtin.c"
  }
#line 896 "private_builtin.c"
}

#line 899 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
#line 902 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 904 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 906 "private_builtin.c"
{
#line 908 "private_builtin.c"
  {
#line 910 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 913 "private_builtin.c"
    {
#line 915 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____ticket_counter_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 918 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 920 "private_builtin.c"
  }
#line 922 "private_builtin.c"
}

#line 925 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
#line 928 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 930 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 932 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 934 "private_builtin.c"
{
#line 936 "private_builtin.c"
  {
#line 938 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 941 "private_builtin.c"
    {
#line 943 "private_builtin.c"
      mercury__private_builtin____Compare____ticket_counter_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 946 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 948 "private_builtin.c"
  }
#line 950 "private_builtin.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__private_builtin__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 1543 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2(void)
#line 1543 "private_builtin.m"
{
#line 1577 "private_builtin.m"
  {
#line 1577 "private_builtin.m"
    return MR_FALSE;
#line 1577 "private_builtin.m"
  }
#line 1543 "private_builtin.m"
}

#line 1542 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1(void)
#line 1542 "private_builtin.m"
{
#line 1576 "private_builtin.m"
  {
#line 1576 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1576 "private_builtin.m"
  }
#line 1542 "private_builtin.m"
}

#line 1541 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
#line 1541 "private_builtin.m"
{
#line 1575 "private_builtin.m"
  {
#line 1575 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1575 "private_builtin.m"
  }
#line 1541 "private_builtin.m"
}

#line 1538 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2(void)
#line 1538 "private_builtin.m"
{
#line 1573 "private_builtin.m"
  {
#line 1573 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1573 "private_builtin.m"
  }
#line 1538 "private_builtin.m"
}

#line 1537 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1(void)
#line 1537 "private_builtin.m"
{
#line 1572 "private_builtin.m"
  {
#line 1572 "private_builtin.m"
    return MR_FALSE;
#line 1572 "private_builtin.m"
  }
#line 1537 "private_builtin.m"
}

#line 1536 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
#line 1536 "private_builtin.m"
{
#line 1571 "private_builtin.m"
  {
#line 1571 "private_builtin.m"
    return MR_FALSE;
#line 1571 "private_builtin.m"
  }
#line 1536 "private_builtin.m"
}

#line 1457 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 1457 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4)
#line 1457 "private_builtin.m"
{
#line 1481 "private_builtin.m"
  {
#line 1481 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1080 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1481 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1480 "private_builtin.m"
      {
#line 1480 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;
#line 1480 "private_builtin.m"
        MR_String mercury__private_builtin__V_12_12;

#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2((MR_String) "compare for foreign types", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_12_12);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_12_12, &mercury__private_builtin__V_10_10);
        }
#line 1580 "private_builtin.m"
        {
#line 1580 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__V_10_10);
#line 1580 "private_builtin.m"
          return;
        }
#line 1480 "private_builtin.m"
      }
#line 1481 "private_builtin.m"
    else
#line 1482 "private_builtin.m"
      *mercury__private_builtin__Result_4 = (MR_Integer) 0;
#line 1481 "private_builtin.m"
  }
#line 1457 "private_builtin.m"
}

#line 1456 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 1456 "private_builtin.m"
{
#line 1474 "private_builtin.m"
  {
#line 1474 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1147 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1474 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1473 "private_builtin.m"
      {
#line 1473 "private_builtin.m"
        MR_String mercury__private_builtin__V_8_8;
#line 1473 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;

#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2((MR_String) "unify for foreign types", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_10_10);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_10_10, &mercury__private_builtin__V_8_8);
        }
#line 1580 "private_builtin.m"
        {
#line 1580 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__V_8_8);
        }
#line 1473 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 1473 "private_builtin.m"
      }
#line 1474 "private_builtin.m"
    else
#line 74 "builtin.opt"
      {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1199 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 74 "builtin.opt"
      }
#line 1474 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1474 "private_builtin.m"
  }
#line 1456 "private_builtin.m"
}

#line 85 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 85 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4)
#line 85 "private_builtin.m"
{
#line 317 "private_builtin.m"
  {
#line 317 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1240 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 317 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 315 "private_builtin.m"
      {
#line 316 "private_builtin.m"
        {
#line 316 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "call to generated compare/3 for solver type");
#line 316 "private_builtin.m"
          return;
        }
#line 315 "private_builtin.m"
      }
#line 317 "private_builtin.m"
    else
#line 319 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 317 "private_builtin.m"
  }
#line 85 "private_builtin.m"
}

#line 84 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 84 "private_builtin.m"
{
#line 303 "private_builtin.m"
  {
#line 303 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1292 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 303 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 301 "private_builtin.m"
      {
#line 302 "private_builtin.m"
        {
#line 302 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "call to generated unify/2 for solver type");
        }
#line 301 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 301 "private_builtin.m"
      }
#line 303 "private_builtin.m"
    else
#line 67 "builtin.opt"
      {
#line 67 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 67 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;

#line 1329 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 67 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 67 "builtin.opt"
      }
#line 303 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 303 "private_builtin.m"
  }
#line 84 "private_builtin.m"
}

#line 77 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0(
#line 77 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_13,
#line 77 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4)
#line 77 "private_builtin.m"
{
#line 285 "private_builtin.m"
  {
#line 285 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1372 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 285 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 283 "private_builtin.m"
      {
#line 283 "private_builtin.m"
        MR_String mercury__private_builtin__Message_7;
#line 283 "private_builtin.m"
        MR_String mercury__private_builtin__V_9_9;
#line 283 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;
#line 283 "private_builtin.m"
        MR_Word mercury__private_builtin__V_11_11;
#line 197 "type_desc.opt"
        MR_Box mercury__private_builtin__V_14_14;

#line 197 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T_13 ;
		{
#line 197 "type_desc.opt"
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
#line 1422 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_11_11  = TypeInfo;
#line 197 "type_desc.opt"
}
#line 283 "private_builtin.m"
        {
#line 283 "private_builtin.m"
          mercury__private_builtin__V_10_10 = mercury__type_desc__type_name_1_f_0(mercury__private_builtin__V_11_11);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2(mercury__private_builtin__V_10_10, (MR_String) "\'", &mercury__private_builtin__V_9_9);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2((MR_String) "call to compare/3 for non-canonical type \140", mercury__private_builtin__V_9_9, &mercury__private_builtin__Message_7);
        }
#line 284 "private_builtin.m"
        {
#line 284 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__Message_7);
#line 284 "private_builtin.m"
          return;
        }
#line 283 "private_builtin.m"
      }
#line 285 "private_builtin.m"
    else
#line 287 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 285 "private_builtin.m"
  }
#line 77 "private_builtin.m"
}

#line 72 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 72 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4)
#line 72 "private_builtin.m"
{
#line 255 "private_builtin.m"
  {
#line 255 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1485 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 255 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 254 "private_builtin.m"
      {
#line 254 "private_builtin.m"
        {
#line 254 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "builtin_compare_tuple called");
#line 254 "private_builtin.m"
          return;
        }
#line 254 "private_builtin.m"
      }
#line 255 "private_builtin.m"
    else
#line 257 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 255 "private_builtin.m"
  }
#line 72 "private_builtin.m"
}

#line 71 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 71 "private_builtin.m"
{
#line 245 "private_builtin.m"
  {
#line 245 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1537 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 245 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 244 "private_builtin.m"
      {
#line 244 "private_builtin.m"
        {
#line 244 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "builtin_unify_tuple called");
        }
#line 244 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 244 "private_builtin.m"
      }
#line 245 "private_builtin.m"
    else
#line 74 "builtin.opt"
      {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1574 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 74 "builtin.opt"
      }
#line 245 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 245 "private_builtin.m"
  }
#line 71 "private_builtin.m"
}

#line 64 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 64 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4)
#line 64 "private_builtin.m"
{
#line 273 "private_builtin.m"
  {
#line 273 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1615 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 273 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 272 "private_builtin.m"
      {
#line 272 "private_builtin.m"
        {
#line 272 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted higher-order comparison");
#line 272 "private_builtin.m"
          return;
        }
#line 272 "private_builtin.m"
      }
#line 273 "private_builtin.m"
    else
#line 275 "private_builtin.m"
      *mercury__private_builtin__Result_4 = (MR_Integer) 1;
#line 273 "private_builtin.m"
  }
#line 64 "private_builtin.m"
}

#line 63 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 63 "private_builtin.m"
{
#line 264 "private_builtin.m"
  {
#line 264 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1667 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 264 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 263 "private_builtin.m"
      {
#line 263 "private_builtin.m"
        {
#line 263 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted higher-order unification");
        }
#line 263 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 263 "private_builtin.m"
      }
#line 264 "private_builtin.m"
    else
#line 74 "builtin.opt"
      {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1704 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 74 "builtin.opt"
      }
#line 264 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 264 "private_builtin.m"
  }
#line 63 "private_builtin.m"
}

#line 356 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____typeclass_info_0_0(
#line 356 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 356 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 356 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 356 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____typeclass_info_0_0(
#line 356 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 356 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 353 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____type_info_0_0(
#line 353 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 353 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 353 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 353 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____type_info_0_0(
#line 353 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 353 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 354 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____type_ctor_info_0_0(
#line 354 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 354 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 354 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 354 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____type_ctor_info_0_0(
#line 354 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 354 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 883 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0(
#line 883 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 883 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 883 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 883 "private_builtin.m"
{
#line 883 "private_builtin.m"
  {
#line 883 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 883 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_4 = mercury__private_builtin__HeadVar__2_2;
#line 883 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_5 = mercury__private_builtin__HeadVar__3_3;

#line 883 "private_builtin.m"
    {
#line 883 "private_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__Cast_HeadVar1_4, mercury__private_builtin__Cast_HeadVar2_5);
#line 883 "private_builtin.m"
      return;
    }
#line 883 "private_builtin.m"
  }
#line 883 "private_builtin.m"
}

#line 883 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0(
#line 883 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 883 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 883 "private_builtin.m"
{
#line 883 "private_builtin.m"
  {
#line 883 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 883 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_3 = mercury__private_builtin__HeadVar__1_1;
#line 883 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_4 = mercury__private_builtin__HeadVar__2_2;

#line 883 "private_builtin.m"
    {
#line 883 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__Cast_HeadVar1_3, mercury__private_builtin__Cast_HeadVar2_4);
    }
#line 883 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 883 "private_builtin.m"
  }
#line 883 "private_builtin.m"
}

#line 882 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0(
#line 882 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 882 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 882 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 882 "private_builtin.m"
{
#line 882 "private_builtin.m"
  {
#line 882 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 882 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_4 = mercury__private_builtin__HeadVar__2_2;
#line 882 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_5 = mercury__private_builtin__HeadVar__3_3;

#line 882 "private_builtin.m"
    {
#line 882 "private_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__Cast_HeadVar1_4, mercury__private_builtin__Cast_HeadVar2_5);
#line 882 "private_builtin.m"
      return;
    }
#line 882 "private_builtin.m"
  }
#line 882 "private_builtin.m"
}

#line 882 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0(
#line 882 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 882 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 882 "private_builtin.m"
{
#line 882 "private_builtin.m"
  {
#line 882 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 882 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_3 = mercury__private_builtin__HeadVar__1_1;
#line 882 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_4 = mercury__private_builtin__HeadVar__2_2;

#line 882 "private_builtin.m"
    {
#line 882 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__Cast_HeadVar1_3, mercury__private_builtin__Cast_HeadVar2_4);
    }
#line 882 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 882 "private_builtin.m"
  }
#line 882 "private_builtin.m"
}

#line 1448 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0(
#line 1448 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1448 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1448 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2,
#line 1448 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__3_3)
#line 1448 "private_builtin.m"
{
#line 1448 "private_builtin.m"
  {
#line 1448 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1448 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1448 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 1448 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 1448 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1926 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 1448 "private_builtin.m"
    else
#line 1448 "private_builtin.m"
      {
#line 1448 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_4_4 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1448 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_5_5 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 159 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 < mercury__private_builtin__V_5_5);
#line 161 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 160 "private_builtin.m"
          *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "private_builtin.m"
        else
#line 163 "private_builtin.m"
          {
#line 161 "private_builtin.m"
            mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 == mercury__private_builtin__V_5_5);
#line 163 "private_builtin.m"
            if (mercury__private_builtin__succeeded)
#line 162 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 163 "private_builtin.m"
            else
#line 164 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "private_builtin.m"
          }
#line 1448 "private_builtin.m"
      }
#line 1448 "private_builtin.m"
  }
#line 1448 "private_builtin.m"
}

#line 1448 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0(
#line 1448 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_7,
#line 1448 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1448 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2)
#line 1448 "private_builtin.m"
{
#line 1448 "private_builtin.m"
  {
#line 1448 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1448 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1448 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 1448 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 1448 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1448 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 1448 "private_builtin.m"
    else
#line 1448 "private_builtin.m"
      {
#line 1448 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_3_3 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1448 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_4_4 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 2001 "private_builtin.c"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_3_3 == mercury__private_builtin__V_4_4);
#line 1448 "private_builtin.m"
      }
#line 1448 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1448 "private_builtin.m"
  }
#line 1448 "private_builtin.m"
}

#line 365 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0(
#line 365 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 365 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 365 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 365 "private_builtin.m"
{
#line 365 "private_builtin.m"
  {
#line 365 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 365 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 365 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 365 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 365 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2036 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 365 "private_builtin.m"
    else
#line 365 "private_builtin.m"
      {
#line 365 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 365 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 365 "private_builtin.m"
        {
#line 365 "private_builtin.m"
          mercury__private_builtin____Compare____typeclass_info_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 365 "private_builtin.m"
          return;
        }
#line 365 "private_builtin.m"
      }
#line 365 "private_builtin.m"
  }
#line 365 "private_builtin.m"
}

#line 365 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0(
#line 365 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 365 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 365 "private_builtin.m"
{
#line 365 "private_builtin.m"
  {
#line 365 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 365 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 365 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 365 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 365 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 365 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 365 "private_builtin.m"
    else
#line 365 "private_builtin.m"
      {
#line 365 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 365 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2094 "private_builtin.c"
        {
#line 2096 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__private_builtin____Unify____typeclass_info_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 365 "private_builtin.m"
      }
#line 365 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 365 "private_builtin.m"
  }
#line 365 "private_builtin.m"
}

#line 363 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0(
#line 363 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 363 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 363 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 363 "private_builtin.m"
{
#line 363 "private_builtin.m"
  {
#line 363 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 363 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 363 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 363 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 363 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2132 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 363 "private_builtin.m"
    else
#line 363 "private_builtin.m"
      {
#line 363 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 363 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 363 "private_builtin.m"
        {
#line 363 "private_builtin.m"
          mercury__private_builtin____Compare____type_info_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 363 "private_builtin.m"
          return;
        }
#line 363 "private_builtin.m"
      }
#line 363 "private_builtin.m"
  }
#line 363 "private_builtin.m"
}

#line 363 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0(
#line 363 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 363 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 363 "private_builtin.m"
{
#line 363 "private_builtin.m"
  {
#line 363 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 363 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 363 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 363 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 363 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 363 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 363 "private_builtin.m"
    else
#line 363 "private_builtin.m"
      {
#line 363 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 363 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2190 "private_builtin.c"
        {
#line 2192 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__private_builtin____Unify____type_info_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 363 "private_builtin.m"
      }
#line 363 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 363 "private_builtin.m"
  }
#line 363 "private_builtin.m"
}

#line 1233 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ref_1_0(
#line 1233 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_4,
#line 1233 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1233 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1233 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 1233 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____ref_1_0(
#line 1233 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_3,
#line 1233 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1233 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 1205 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0(
#line 1205 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1205 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1205 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1205 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 1205 "private_builtin.m"
{
#line 1205 "private_builtin.m"
  {
#line 1205 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1205 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1205 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 1205 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 1205 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2252 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 1205 "private_builtin.m"
    else
#line 1205 "private_builtin.m"
      {
#line 1205 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 1205 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 1205 "private_builtin.m"
        {
#line 1205 "private_builtin.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 1205 "private_builtin.m"
          return;
        }
#line 1205 "private_builtin.m"
      }
#line 1205 "private_builtin.m"
  }
#line 1205 "private_builtin.m"
}

#line 1205 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0(
#line 1205 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_7,
#line 1205 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1205 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 1205 "private_builtin.m"
{
#line 1205 "private_builtin.m"
  {
#line 1205 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1205 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1205 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 1205 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 1205 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1205 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 1205 "private_builtin.m"
    else
#line 1205 "private_builtin.m"
      {
#line 1205 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 1205 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2312 "private_builtin.c"
        {
#line 2314 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 1205 "private_builtin.m"
      }
#line 1205 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1205 "private_builtin.m"
  }
#line 1205 "private_builtin.m"
}

#line 1225 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____heap_pointer_0_0(
#line 1225 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1225 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1225 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 1225 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____heap_pointer_0_0(
#line 1225 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1225 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 868 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0(
#line 868 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 868 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 868 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 868 "private_builtin.m"
{
#line 868 "private_builtin.m"
  {
#line 868 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 868 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 868 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 868 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 868 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2368 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 868 "private_builtin.m"
    else
#line 868 "private_builtin.m"
      {
#line 868 "private_builtin.m"
        MR_Float mercury__private_builtin__V_4_4 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__2_2);
#line 868 "private_builtin.m"
        MR_Float mercury__private_builtin__V_5_5 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__3_3);

#line 232 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 < mercury__private_builtin__V_5_5);
#line 234 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 233 "private_builtin.m"
          *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 234 "private_builtin.m"
        else
#line 236 "private_builtin.m"
          {
#line 234 "private_builtin.m"
            mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 > mercury__private_builtin__V_5_5);
#line 236 "private_builtin.m"
            if (mercury__private_builtin__succeeded)
#line 235 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 236 "private_builtin.m"
            else
#line 237 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 236 "private_builtin.m"
          }
#line 868 "private_builtin.m"
      }
#line 868 "private_builtin.m"
  }
#line 868 "private_builtin.m"
}

#line 868 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0(
#line 868 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 868 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 868 "private_builtin.m"
{
#line 868 "private_builtin.m"
  {
#line 868 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 868 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 868 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 868 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 868 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 868 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 868 "private_builtin.m"
    else
#line 868 "private_builtin.m"
      {
#line 868 "private_builtin.m"
        MR_Float mercury__private_builtin__V_3_3 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__1_1);
#line 868 "private_builtin.m"
        MR_Float mercury__private_builtin__V_4_4 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__2_2);

#line 2441 "private_builtin.c"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_3_3 == mercury__private_builtin__V_4_4);
#line 868 "private_builtin.m"
      }
#line 868 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 868 "private_builtin.m"
  }
#line 868 "private_builtin.m"
}

#line 357 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____base_typeclass_info_0_0(
#line 357 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 357 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____base_typeclass_info_0_0(
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 1565 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__semip_0_p_0(void)
#line 1565 "private_builtin.m"
{
#line 1603 "private_builtin.m"
  {
#line 1603 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1603 "private_builtin.m"
  }
#line 1565 "private_builtin.m"
}

#line 1561 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__imp_0_p_0(void)
#line 1561 "private_builtin.m"
{
#line 1586 "private_builtin.m"
  {
#line 1586 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1589 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__imp_0_p_0


		{
#line 1589 "private_builtin.m"

#line 2503 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1589 "private_builtin.m"
}
#line 1586 "private_builtin.m"
  }
#line 1561 "private_builtin.m"
}

#line 1557 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__sorry_1_p_0(
#line 1557 "private_builtin.m"
  MR_String mercury__private_builtin__PredName_2)
#line 1557 "private_builtin.m"
{
#line 1579 "private_builtin.m"
  {
#line 1579 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1579 "private_builtin.m"
    MR_String mercury__private_builtin__V_3_3;
#line 1579 "private_builtin.m"
    MR_String mercury__private_builtin__V_5_5;

#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2(mercury__private_builtin__PredName_2, (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_5_5);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_5_5, &mercury__private_builtin__V_3_3);
    }
#line 1580 "private_builtin.m"
    {
#line 1580 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_3_3);
#line 1580 "private_builtin.m"
      return;
    }
#line 1579 "private_builtin.m"
  }
#line 1557 "private_builtin.m"
}

#line 1551 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__no_clauses_1_p_0(
#line 1551 "private_builtin.m"
  MR_String mercury__private_builtin__PredName_2)
#line 1551 "private_builtin.m"
{
#line 1583 "private_builtin.m"
  {
#line 1583 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1583 "private_builtin.m"
    MR_String mercury__private_builtin__V_3_3;

#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2((MR_String) "no clauses for ", mercury__private_builtin__PredName_2, &mercury__private_builtin__V_3_3);
    }
#line 1584 "private_builtin.m"
    {
#line 1584 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_3_3);
#line 1584 "private_builtin.m"
      return;
    }
#line 1583 "private_builtin.m"
  }
#line 1551 "private_builtin.m"
}

#line 1543 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__nonvar_1_p_2(
#line 1543 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5)
#line 1543 "private_builtin.m"
{
#line 1577 "private_builtin.m"
  {
#line 1577 "private_builtin.m"
    return MR_FALSE;
#line 1577 "private_builtin.m"
  }
#line 1543 "private_builtin.m"
}

#line 1542 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nonvar_1_p_1(
#line 1542 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1542 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1542 "private_builtin.m"
{
#line 1576 "private_builtin.m"
  {
#line 1576 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1576 "private_builtin.m"
  }
#line 1542 "private_builtin.m"
}

#line 1541 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nonvar_1_p_0(
#line 1541 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1541 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1541 "private_builtin.m"
{
#line 1575 "private_builtin.m"
  {
#line 1575 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1575 "private_builtin.m"
  }
#line 1541 "private_builtin.m"
}

#line 1538 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__var_1_p_2(
#line 1538 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5)
#line 1538 "private_builtin.m"
{
#line 1573 "private_builtin.m"
  {
#line 1573 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1573 "private_builtin.m"
  }
#line 1538 "private_builtin.m"
}

#line 1537 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__var_1_p_1(
#line 1537 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1537 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1537 "private_builtin.m"
{
#line 1572 "private_builtin.m"
  {
#line 1572 "private_builtin.m"
    return MR_FALSE;
#line 1572 "private_builtin.m"
  }
#line 1537 "private_builtin.m"
}

#line 1536 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__var_1_p_0(
#line 1536 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1536 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1536 "private_builtin.m"
{
#line 1571 "private_builtin.m"
  {
#line 1571 "private_builtin.m"
    return MR_FALSE;
#line 1571 "private_builtin.m"
  }
#line 1536 "private_builtin.m"
}

#line 1459 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0(void)
#line 1459 "private_builtin.m"
{
#line 1485 "private_builtin.m"
  {
#line 1485 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1489 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1489 "private_builtin.m"

    /* All uses of this predicate should override the body. */
    MR_fatal_error("trace_evaluate_runtime_condition called");

#line 2712 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1489 "private_builtin.m"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1485 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1485 "private_builtin.m"
  }
#line 1459 "private_builtin.m"
}

#line 1457 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nyi_foreign_type_compare_3_p_0(
#line 1457 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1457 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4,
#line 1457 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_5,
#line 1457 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__3_6)
#line 1457 "private_builtin.m"
{
#line 1481 "private_builtin.m"
  {
#line 1481 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1481 "private_builtin.m"
    {
#line 1481 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Result_4);
#line 1481 "private_builtin.m"
      return;
    }
#line 1481 "private_builtin.m"
  }
#line 1457 "private_builtin.m"
}

#line 1456 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__nyi_foreign_type_unify_2_p_0(
#line 1456 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
#line 1456 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_3,
#line 1456 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_4)
#line 1456 "private_builtin.m"
{
#line 1474 "private_builtin.m"
  {
#line 1474 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1474 "private_builtin.m"
    {
#line 1474 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 1474 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1474 "private_builtin.m"
  }
#line 1456 "private_builtin.m"
}

#line 1454 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unused_0_p_0(void)
#line 1454 "private_builtin.m"
{
#line 1466 "private_builtin.m"
  {
#line 1466 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__unused_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 2807 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1466 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1465 "private_builtin.m"
      {
#line 1465 "private_builtin.m"
        {
#line 1465 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted use of dead predicate");
#line 1465 "private_builtin.m"
          return;
        }
#line 1465 "private_builtin.m"
      }
#line 1466 "private_builtin.m"
    else
#line 1468 "private_builtin.m"
      {
#line 1468 "private_builtin.m"
      }
#line 1466 "private_builtin.m"
  }
#line 1454 "private_builtin.m"
}

#line 1443 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_at_ref_2_p_0(
#line 1443 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1443 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 1443 "private_builtin.m"
{
#line 1443 "private_builtin.m"
  {
#line 1443 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1443 "private_builtin.m"
  }
#line 1443 "private_builtin.m"
}

#line 1438 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_at_ref_impure_2_p_0(
#line 1438 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1438 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 1438 "private_builtin.m"
{
#line 1438 "private_builtin.m"
  {
#line 1438 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1438 "private_builtin.m"
    *mercury__private_builtin__HeadVar__1_1 = mercury__private_builtin__HeadVar__2_2;
#line 1438 "private_builtin.m"
  }
#line 1438 "private_builtin.m"
}

#line 1433 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unsafe_type_cast_2_p_0(
#line 1433 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1,
#line 1433 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2)
#line 1433 "private_builtin.m"
{
#line 1433 "private_builtin.m"
  {
#line 1433 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1433 "private_builtin.m"
    *mercury__private_builtin__HeadVar__2_2 = mercury__private_builtin__HeadVar__1_1;
#line 1433 "private_builtin.m"
  }
#line 1433 "private_builtin.m"
}

#line 1228 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__restore_hp_1_p_0(
#line 1228 "private_builtin.m"
  MR_Word mercury__private_builtin__SavedHeapPointer_1)
#line 1228 "private_builtin.m"
{
#line 1285 "private_builtin.m"
  {
#line 1285 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1289 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__restore_hp_1_p_0

	MR_Word SavedHeapPointer;

	SavedHeapPointer =  mercury__private_builtin__SavedHeapPointer_1 ;
		{
#line 1289 "private_builtin.m"

#ifndef MR_CONSERVATIVE_GC
    MR_restore_hp(SavedHeapPointer);
#endif

#line 2927 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1289 "private_builtin.m"
}
#line 1285 "private_builtin.m"
  }
#line 1228 "private_builtin.m"
}

#line 1227 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__mark_hp_1_p_0(
#line 1227 "private_builtin.m"
  MR_Word * mercury__private_builtin__SavedHeapPointer_1)
#line 1227 "private_builtin.m"
{
#line 1272 "private_builtin.m"
  {
#line 1272 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1276 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__mark_hp_1_p_0

	MR_Word SavedHeapPointer;

		{
#line 1276 "private_builtin.m"

#ifndef MR_CONSERVATIVE_GC
    MR_mark_hp(SavedHeapPointer);
#else
    /* We can't do heap reclamation with conservative GC. */
    SavedHeapPointer = 0;
#endif

#line 2966 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__SavedHeapPointer_1  = SavedHeapPointer;
#line 1276 "private_builtin.m"
}
#line 1272 "private_builtin.m"
  }
#line 1227 "private_builtin.m"
}

#line 1217 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__gc_trace_1_p_0(
#line 1217 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_2,
#line 1217 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1)
#line 1217 "private_builtin.m"
{
#line 1250 "private_builtin.m"
  {
#line 1250 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1253 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__gc_trace_1_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Pointer;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T_2 ;
	Pointer =  mercury__private_builtin__HeadVar__1_1 ;
		{
#line 1253 "private_builtin.m"

#ifdef MR_NATIVE_GC
    * (MR_Word *) Pointer =
        MR_agc_deep_copy(* (MR_Word *) Pointer, (MR_TypeInfo) TypeInfo_for_T,
            MR_ENGINE(MR_eng_heap_zone2->MR_zone_min),
            MR_ENGINE(MR_eng_heap_zone2->MR_zone_hardmax));
#else
    MR_fatal_error("private_builtin.gc_trace/2: "
        "called when accurate GC not enabled");
#endif

#line 3014 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1253 "private_builtin.m"
}
#line 1250 "private_builtin.m"
  }
#line 1217 "private_builtin.m"
}

#line 1203 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__free_heap_1_p_0(
#line 1203 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_2,
#line 1203 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1203 "private_builtin.m"
{
#line 1265 "private_builtin.m"
  {
#line 1265 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1265 "private_builtin.m"
    MR_Word mercury__private_builtin__TypeInfo_for_T_3;

#line 1268 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__free_heap_1_p_0

	MR_Word Val;

	Val = (MR_Word) mercury__private_builtin__HeadVar__1_1 ;
		{
#line 1268 "private_builtin.m"

    MR_free_heap((void *) Val);

#line 3053 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1268 "private_builtin.m"
}
#line 1265 "private_builtin.m"
  }
#line 1203 "private_builtin.m"
}

#line 895 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__prune_tickets_to_1_p_0(
#line 895 "private_builtin.m"
  MR_Word mercury__private_builtin__TicketCounter_1)
#line 895 "private_builtin.m"
{
#line 966 "private_builtin.m"
  {
#line 966 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 969 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__prune_tickets_to_1_p_0

	MR_Word TicketCounter;

	TicketCounter =  mercury__private_builtin__TicketCounter_1 ;
		{
#line 969 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_prune_tickets_to(TicketCounter);
#endif

#line 3090 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 969 "private_builtin.m"
}
#line 966 "private_builtin.m"
  }
#line 895 "private_builtin.m"
}

#line 894 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__mark_ticket_stack_1_p_0(
#line 894 "private_builtin.m"
  MR_Word * mercury__private_builtin__TicketCounter_1)
#line 894 "private_builtin.m"
{
#line 955 "private_builtin.m"
  {
#line 955 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 958 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__mark_ticket_stack_1_p_0

	MR_Word TicketCounter;

		{
#line 958 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_mark_ticket_stack(TicketCounter);
#else
    TicketCounter = 0;
#endif

#line 3128 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TicketCounter_1  = TicketCounter;
#line 958 "private_builtin.m"
}
#line 955 "private_builtin.m"
  }
#line 894 "private_builtin.m"
}

#line 893 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__prune_ticket_0_p_0(void)
#line 893 "private_builtin.m"
{
#line 946 "private_builtin.m"
  {
#line 946 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 949 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__prune_ticket_0_p_0


		{
#line 949 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_prune_ticket();
#endif

#line 3162 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 949 "private_builtin.m"
}
#line 946 "private_builtin.m"
  }
#line 893 "private_builtin.m"
}

#line 892 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__discard_ticket_0_p_0(void)
#line 892 "private_builtin.m"
{
#line 937 "private_builtin.m"
  {
#line 937 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 940 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__discard_ticket_0_p_0


		{
#line 940 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 3195 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 940 "private_builtin.m"
}
#line 937 "private_builtin.m"
  }
#line 892 "private_builtin.m"
}

#line 891 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_solve_1_p_0(
#line 891 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 891 "private_builtin.m"
{
#line 928 "private_builtin.m"
  {
#line 928 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 931 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_solve_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 931 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_solve);
#endif

#line 3232 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 931 "private_builtin.m"
}
#line 928 "private_builtin.m"
  }
#line 891 "private_builtin.m"
}

#line 890 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_commit_1_p_0(
#line 890 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 890 "private_builtin.m"
{
#line 919 "private_builtin.m"
  {
#line 919 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 922 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_commit_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 922 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_commit);
#endif

#line 3269 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 922 "private_builtin.m"
}
#line 919 "private_builtin.m"
  }
#line 890 "private_builtin.m"
}

#line 889 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_undo_1_p_0(
#line 889 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 889 "private_builtin.m"
{
#line 910 "private_builtin.m"
  {
#line 910 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 913 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_undo_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 913 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_undo);
#endif

#line 3306 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 913 "private_builtin.m"
}
#line 910 "private_builtin.m"
  }
#line 889 "private_builtin.m"
}

#line 888 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_ticket_1_p_0(
#line 888 "private_builtin.m"
  MR_Word * mercury__private_builtin__Ticket_1)
#line 888 "private_builtin.m"
{
#line 899 "private_builtin.m"
  {
#line 899 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 902 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__store_ticket_1_p_0

	MR_Word Ticket;

		{
#line 902 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_store_ticket(Ticket);
#else
    Ticket = 0;
#endif

#line 3344 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__Ticket_1  = Ticket;
#line 902 "private_builtin.m"
}
#line 899 "private_builtin.m"
  }
#line 888 "private_builtin.m"
}

#line 405 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0(
#line 405 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo0_1,
#line 405 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 405 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeClassInfo_3)
#line 405 "private_builtin.m"
{
#line 732 "private_builtin.m"
  {
#line 732 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 737 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__private_builtin__TypeClassInfo0_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 737 "private_builtin.m"

    TypeClassInfo =
        MR_typeclass_info_arg_typeclass_info(TypeClassInfo0, Index);

#line 3388 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeClassInfo_3  = TypeClassInfo;
#line 737 "private_builtin.m"
}
#line 732 "private_builtin.m"
  }
#line 405 "private_builtin.m"
}

#line 393 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__superclass_from_typeclass_info_3_p_0(
#line 393 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo0_1,
#line 393 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 393 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeClassInfo_3)
#line 393 "private_builtin.m"
{
#line 722 "private_builtin.m"
  {
#line 722 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 727 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__superclass_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__private_builtin__TypeClassInfo0_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 727 "private_builtin.m"

    TypeClassInfo =
        MR_typeclass_info_superclass_info(TypeClassInfo0, Index);

#line 3432 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeClassInfo_3  = TypeClassInfo;
#line 727 "private_builtin.m"
}
#line 722 "private_builtin.m"
  }
#line 393 "private_builtin.m"
}

#line 385 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0(
#line 385 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo_1,
#line 385 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 385 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeInfo_3)
#line 385 "private_builtin.m"
{
#line 713 "private_builtin.m"
  {
#line 713 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 718 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__private_builtin__TypeClassInfo_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 718 "private_builtin.m"

    TypeInfo = MR_typeclass_info_instance_tvar_type_info(TypeClassInfo, Index);

#line 3475 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeInfo_3  = TypeInfo;
#line 718 "private_builtin.m"
}
#line 713 "private_builtin.m"
  }
#line 385 "private_builtin.m"
}

#line 376 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__type_info_from_typeclass_info_3_p_0(
#line 376 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo_1,
#line 376 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 376 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeInfo_3)
#line 376 "private_builtin.m"
{
#line 704 "private_builtin.m"
  {
#line 704 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 709 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__private_builtin__TypeClassInfo_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 709 "private_builtin.m"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3518 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeInfo_3  = TypeInfo;
#line 709 "private_builtin.m"
}
#line 704 "private_builtin.m"
  }
#line 376 "private_builtin.m"
}

#line 192 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_strcmp_3_p_0(
#line 192 "private_builtin.m"
  MR_Integer * mercury__private_builtin__Res_1,
#line 192 "private_builtin.m"
  MR_String mercury__private_builtin__S1_2,
#line 192 "private_builtin.m"
  MR_String mercury__private_builtin__S2_3)
#line 192 "private_builtin.m"
{
#line 194 "private_builtin.m"
  {
#line 194 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 198 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_strcmp_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__private_builtin__S1_2 ;
	S2 =  mercury__private_builtin__S2_3 ;
		{
#line 198 "private_builtin.m"

    Res = strcmp(S1, S2);

#line 3561 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__Res_1  = Res;
#line 198 "private_builtin.m"
}
#line 194 "private_builtin.m"
  }
#line 192 "private_builtin.m"
}

#line 127 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__pointer_equal_2_p_0(
#line 127 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_3,
#line 127 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1,
#line 127 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 127 "private_builtin.m"
{
#line 127 "private_builtin.m"
  {
#line 127 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (((MR_Word) mercury__private_builtin__HeadVar__1_1) == ((MR_Word) mercury__private_builtin__HeadVar__2_2));

#line 127 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 127 "private_builtin.m"
  }
#line 127 "private_builtin.m"
}

#line 121 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__typed_compare_3_p_0(
#line 121 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T1_11,
#line 121 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T2_12,
#line 121 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 121 "private_builtin.m"
  MR_Box mercury__private_builtin__X_5,
#line 121 "private_builtin.m"
  MR_Box mercury__private_builtin__Y_6)
#line 121 "private_builtin.m"
{
#line 335 "private_builtin.m"
  {
#line 335 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 335 "private_builtin.m"
    MR_Word mercury__private_builtin__R0_7;
#line 335 "private_builtin.m"
    MR_Word mercury__private_builtin__V_9_9;
#line 335 "private_builtin.m"
    MR_Word mercury__private_builtin__V_10_10;
#line 197 "type_desc.opt"
    MR_Box mercury__private_builtin__V_14_14;
#line 197 "type_desc.opt"
    MR_Box mercury__private_builtin__V_15_15;

#line 197 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_compare_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_11 ;
		{
#line 197 "type_desc.opt"
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
#line 3652 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_9_9  = TypeInfo;
#line 197 "type_desc.opt"
}
#line 197 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_compare_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_12 ;
		{
#line 197 "type_desc.opt"
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
#line 3685 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_10_10  = TypeInfo;
#line 197 "type_desc.opt"
}
#line 336 "private_builtin.m"
    {
#line 336 "private_builtin.m"
      mercury__type_desc____Compare____type_desc_0_0(&mercury__private_builtin__R0_7, mercury__private_builtin__V_9_9, mercury__private_builtin__V_10_10);
    }
#line 337 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__R0_7 == (MR_Integer) 0);
#line 340 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 338 "private_builtin.m"
      {
#line 338 "private_builtin.m"
        MR_Box mercury__private_builtin__Z_8 = mercury__private_builtin__X_5;

#line 339 "private_builtin.m"
        {
#line 339 "private_builtin.m"
          mercury__builtin__compare_3_p_0(mercury__private_builtin__TypeInfo_for_T2_12, mercury__private_builtin__R_4, mercury__private_builtin__Z_8, mercury__private_builtin__Y_6);
#line 339 "private_builtin.m"
          return;
        }
#line 338 "private_builtin.m"
      }
#line 340 "private_builtin.m"
    else
#line 341 "private_builtin.m"
      *mercury__private_builtin__R_4 = mercury__private_builtin__R0_7;
#line 335 "private_builtin.m"
  }
#line 121 "private_builtin.m"
}

#line 115 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__typed_unify_2_p_1(
#line 115 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T1_6,
#line 115 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T2_7,
#line 115 "private_builtin.m"
  MR_Box mercury__private_builtin__X_3,
#line 115 "private_builtin.m"
  MR_Box * mercury__private_builtin__Y_4)
#line 115 "private_builtin.m"
{
#line 331 "private_builtin.m"
  {
#line 331 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 331 "private_builtin.m"
    MR_Word mercury__private_builtin__V_5_5;
#line 331 "private_builtin.m"
    MR_Word mercury__private_builtin__V_9_9;
#line 197 "type_desc.opt"
    MR_Box mercury__private_builtin__V_8_8;

#line 197 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_6 ;
		{
#line 197 "type_desc.opt"
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
#line 3774 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_5_5  = TypeInfo;
#line 197 "type_desc.opt"
}
#line 197 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_7 ;
		{
#line 197 "type_desc.opt"
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
#line 3807 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_9_9  = TypeInfo;
#line 197 "type_desc.opt"
}
#line 329 "private_builtin.m"
    {
#line 329 "private_builtin.m"
      mercury__private_builtin__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__private_builtin__V_5_5, mercury__private_builtin__V_9_9);
    }
#line 331 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 331 "private_builtin.m"
      {
#line 330 "private_builtin.m"
        *mercury__private_builtin__Y_4 = mercury__private_builtin__X_3;
#line 330 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 331 "private_builtin.m"
      }
#line 331 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 331 "private_builtin.m"
  }
#line 115 "private_builtin.m"
}

#line 114 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__typed_unify_2_p_0(
#line 114 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T1_6,
#line 114 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T2_7,
#line 114 "private_builtin.m"
  MR_Box mercury__private_builtin__X_3,
#line 114 "private_builtin.m"
  MR_Box mercury__private_builtin__Y_4)
#line 114 "private_builtin.m"
{
#line 331 "private_builtin.m"
  {
#line 331 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 331 "private_builtin.m"
    MR_Word mercury__private_builtin__V_5_5;
#line 331 "private_builtin.m"
    MR_Word mercury__private_builtin__V_10_10;
#line 331 "private_builtin.m"
    MR_Box mercury__private_builtin__V_11_11;
#line 197 "type_desc.opt"
    MR_Box mercury__private_builtin__V_8_8;
#line 197 "type_desc.opt"
    MR_Box mercury__private_builtin__V_9_9;

#line 197 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_6 ;
		{
#line 197 "type_desc.opt"
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
#line 3890 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_5_5  = TypeInfo;
#line 197 "type_desc.opt"
}
#line 197 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_7 ;
		{
#line 197 "type_desc.opt"
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
#line 3923 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_10_10  = TypeInfo;
#line 197 "type_desc.opt"
}
#line 329 "private_builtin.m"
    {
#line 329 "private_builtin.m"
      mercury__private_builtin__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__private_builtin__V_5_5, mercury__private_builtin__V_10_10);
    }
#line 331 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 331 "private_builtin.m"
      {
#line 330 "private_builtin.m"
        mercury__private_builtin__V_11_11 = mercury__private_builtin__X_3;
#line 330 "private_builtin.m"
        {
#line 330 "private_builtin.m"
          return mercury__private_builtin__succeeded = mercury__builtin__unify_2_p_0(mercury__private_builtin__TypeInfo_for_T2_7, mercury__private_builtin__Y_4, mercury__private_builtin__V_11_11);
        }
#line 331 "private_builtin.m"
      }
#line 331 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 331 "private_builtin.m"
  }
#line 114 "private_builtin.m"
}

#line 107 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_compound_lt_2_p_0(
#line 107 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1,
#line 107 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 107 "private_builtin.m"
{
#line 107 "private_builtin.m"
  {
#line 107 "private_builtin.m"
    MR_String mercury__private_builtin__V_5_5;
#line 107 "private_builtin.m"
    MR_String mercury__private_builtin__V_7_7;

#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_lt\'/2", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_7_7);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_7_7, &mercury__private_builtin__V_5_5);
    }
#line 1580 "private_builtin.m"
    {
#line 1580 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_5_5);
    }
#line 107 "private_builtin.m"
    return MR_TRUE;
#line 107 "private_builtin.m"
  }
#line 107 "private_builtin.m"
}

#line 106 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_compound_eq_2_p_0(
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

#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_eq\'/2", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_7_7);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_7_7, &mercury__private_builtin__V_5_5);
    }
#line 1580 "private_builtin.m"
    {
#line 1580 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_5_5);
    }
#line 106 "private_builtin.m"
    return MR_TRUE;
#line 106 "private_builtin.m"
  }
#line 106 "private_builtin.m"
}

#line 100 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_int_gt_2_p_0(
#line 100 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__1_1,
#line 100 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__2_2)
#line 100 "private_builtin.m"
{
#line 100 "private_builtin.m"
  {
#line 100 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__HeadVar__1_1 > mercury__private_builtin__HeadVar__2_2);

#line 100 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 100 "private_builtin.m"
  }
#line 100 "private_builtin.m"
}

#line 95 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_int_lt_2_p_0(
#line 95 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__1_1,
#line 95 "private_builtin.m"
  MR_Integer mercury__private_builtin__HeadVar__2_2)
#line 95 "private_builtin.m"
{
#line 95 "private_builtin.m"
  {
#line 95 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__HeadVar__1_1 < mercury__private_builtin__HeadVar__2_2);

#line 95 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 95 "private_builtin.m"
  }
#line 95 "private_builtin.m"
}

#line 90 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__compare_error_0_p_0(void)
#line 90 "private_builtin.m"
{
#line 323 "private_builtin.m"
  {
#line 323 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 324 "private_builtin.m"
    {
#line 324 "private_builtin.m"
      mercury__require__error_1_p_0((MR_String) "internal error in compare/3");
#line 324 "private_builtin.m"
      return;
    }
#line 323 "private_builtin.m"
  }
#line 90 "private_builtin.m"
}

#line 85 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_solver_type_3_p_0(
#line 85 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 85 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4,
#line 85 "private_builtin.m"
  MR_Box mercury__private_builtin___X_5,
#line 85 "private_builtin.m"
  MR_Box mercury__private_builtin___Y_6)
#line 85 "private_builtin.m"
{
#line 317 "private_builtin.m"
  {
#line 317 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 317 "private_builtin.m"
    {
#line 317 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Res_4);
#line 317 "private_builtin.m"
      return;
    }
#line 317 "private_builtin.m"
  }
#line 85 "private_builtin.m"
}

#line 84 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_solver_type_2_p_0(
#line 84 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
#line 84 "private_builtin.m"
  MR_Box mercury__private_builtin___X_3,
#line 84 "private_builtin.m"
  MR_Box mercury__private_builtin___Y_4)
#line 84 "private_builtin.m"
{
#line 303 "private_builtin.m"
  {
#line 303 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 303 "private_builtin.m"
    {
#line 303 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 303 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 303 "private_builtin.m"
  }
#line 84 "private_builtin.m"
}

#line 77 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_non_canonical_type_3_p_0(
#line 77 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_13,
#line 77 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4,
#line 77 "private_builtin.m"
  MR_Box mercury__private_builtin__X_5,
#line 77 "private_builtin.m"
  MR_Box mercury__private_builtin___Y_6)
#line 77 "private_builtin.m"
{
#line 285 "private_builtin.m"
  {
#line 285 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 285 "private_builtin.m"
    {
#line 285 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__TypeInfo_for_T_13, mercury__private_builtin__Res_4);
#line 285 "private_builtin.m"
      return;
    }
#line 285 "private_builtin.m"
  }
#line 77 "private_builtin.m"
}

#line 72 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_tuple_3_p_0(
#line 72 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 72 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4,
#line 72 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_5,
#line 72 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__3_6)
#line 72 "private_builtin.m"
{
#line 255 "private_builtin.m"
  {
#line 255 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 255 "private_builtin.m"
    {
#line 255 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Res_4);
#line 255 "private_builtin.m"
      return;
    }
#line 255 "private_builtin.m"
  }
#line 72 "private_builtin.m"
}

#line 71 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_tuple_2_p_0(
#line 71 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
#line 71 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_3,
#line 71 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_4)
#line 71 "private_builtin.m"
{
#line 245 "private_builtin.m"
  {
#line 245 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 245 "private_builtin.m"
    {
#line 245 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 245 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 245 "private_builtin.m"
  }
#line 71 "private_builtin.m"
}

#line 64 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_pred_3_p_0(
#line 64 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4,
#line 64 "private_builtin.m"
  MR_Word mercury__private_builtin___X_5,
#line 64 "private_builtin.m"
  MR_Word mercury__private_builtin___Y_6)
#line 64 "private_builtin.m"
{
#line 273 "private_builtin.m"
  {
#line 273 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 273 "private_builtin.m"
    {
#line 273 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__private_builtin__Result_4);
#line 273 "private_builtin.m"
      return;
    }
#line 273 "private_builtin.m"
  }
#line 64 "private_builtin.m"
}

#line 63 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_pred_2_p_0(
#line 63 "private_builtin.m"
  MR_Word mercury__private_builtin___X_3,
#line 63 "private_builtin.m"
  MR_Word mercury__private_builtin___Y_4)
#line 63 "private_builtin.m"
{
#line 264 "private_builtin.m"
  {
#line 264 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 264 "private_builtin.m"
    {
#line 264 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 264 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 264 "private_builtin.m"
  }
#line 63 "private_builtin.m"
}

#line 60 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_float_3_p_0(
#line 60 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 60 "private_builtin.m"
  MR_Float mercury__private_builtin__F1_5,
#line 60 "private_builtin.m"
  MR_Float mercury__private_builtin__F2_6)
#line 60 "private_builtin.m"
{
#line 234 "private_builtin.m"
  {
#line 234 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__F1_5 < mercury__private_builtin__F2_6);

#line 234 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 233 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 234 "private_builtin.m"
    else
#line 236 "private_builtin.m"
      {
#line 234 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__F1_5 > mercury__private_builtin__F2_6);
#line 236 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 235 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 236 "private_builtin.m"
        else
#line 237 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 236 "private_builtin.m"
      }
#line 234 "private_builtin.m"
  }
#line 60 "private_builtin.m"
}

#line 59 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_float_2_p_0(
#line 59 "private_builtin.m"
  MR_Float mercury__private_builtin__F_3,
#line 59 "private_builtin.m"
  MR_Float mercury__private_builtin__F_2)
#line 59 "private_builtin.m"
{
#line 229 "private_builtin.m"
  {
#line 229 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__F_2 == mercury__private_builtin__F_3);

#line 229 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 229 "private_builtin.m"
  }
#line 59 "private_builtin.m"
}

#line 56 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_string_3_p_0(
#line 56 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 56 "private_builtin.m"
  MR_String mercury__private_builtin__S1_5,
#line 56 "private_builtin.m"
  MR_String mercury__private_builtin__S2_6)
#line 56 "private_builtin.m"
{
#line 182 "private_builtin.m"
  {
#line 182 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 182 "private_builtin.m"
    MR_Integer mercury__private_builtin__Res_7;

#line 198 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_string_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__private_builtin__S1_5 ;
	S2 =  mercury__private_builtin__S2_6 ;
		{
#line 198 "private_builtin.m"

    Res = strcmp(S1, S2);

#line 4390 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__Res_7  = Res;
#line 198 "private_builtin.m"
}
#line 184 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__Res_7 < (MR_Integer) 0);
#line 186 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 185 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 186 "private_builtin.m"
    else
#line 188 "private_builtin.m"
      {
#line 186 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__Res_7 == (MR_Integer) 0);
#line 188 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 187 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 188 "private_builtin.m"
        else
#line 189 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 188 "private_builtin.m"
      }
#line 182 "private_builtin.m"
  }
#line 56 "private_builtin.m"
}

#line 55 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_string_2_p_0(
#line 55 "private_builtin.m"
  MR_String mercury__private_builtin__S_3,
#line 55 "private_builtin.m"
  MR_String mercury__private_builtin__S_2)
#line 55 "private_builtin.m"
{
#line 180 "private_builtin.m"
  {
#line 180 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (strcmp(mercury__private_builtin__S_2, mercury__private_builtin__S_3) == 0);

#line 180 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 180 "private_builtin.m"
  }
#line 55 "private_builtin.m"
}

#line 52 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_character_3_p_0(
#line 52 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 52 "private_builtin.m"
  MR_Char mercury__private_builtin__X_5,
#line 52 "private_builtin.m"
  MR_Char mercury__private_builtin__Y_6)
#line 52 "private_builtin.m"
{
#line 169 "private_builtin.m"
  {
#line 169 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 169 "private_builtin.m"
    MR_Integer mercury__private_builtin__XI_7;
#line 169 "private_builtin.m"
    MR_Integer mercury__private_builtin__YI_8;

#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_character_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__private_builtin__X_5 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4478 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__XI_7  = Int;
#line 110 "char.opt"
}
#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_character_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__private_builtin__Y_6 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4498 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__YI_8  = Int;
#line 110 "char.opt"
}
#line 172 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__XI_7 < mercury__private_builtin__YI_8);
#line 174 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 173 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 174 "private_builtin.m"
    else
#line 176 "private_builtin.m"
      {
#line 174 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__XI_7 == mercury__private_builtin__YI_8);
#line 176 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 175 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 176 "private_builtin.m"
        else
#line 177 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 176 "private_builtin.m"
      }
#line 169 "private_builtin.m"
  }
#line 52 "private_builtin.m"
}

#line 51 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_character_2_p_0(
#line 51 "private_builtin.m"
  MR_Char mercury__private_builtin__C_3,
#line 51 "private_builtin.m"
  MR_Char mercury__private_builtin__C_2)
#line 51 "private_builtin.m"
{
#line 167 "private_builtin.m"
  {
#line 167 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__C_2 == mercury__private_builtin__C_3);

#line 167 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 167 "private_builtin.m"
  }
#line 51 "private_builtin.m"
}

#line 49 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_compare_int_3_p_0(
#line 49 "private_builtin.m"
  MR_Word * mercury__private_builtin__R_4,
#line 49 "private_builtin.m"
  MR_Integer mercury__private_builtin__X_5,
#line 49 "private_builtin.m"
  MR_Integer mercury__private_builtin__Y_6)
#line 49 "private_builtin.m"
{
#line 161 "private_builtin.m"
  {
#line 161 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__X_5 < mercury__private_builtin__Y_6);

#line 161 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 160 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 161 "private_builtin.m"
    else
#line 163 "private_builtin.m"
      {
#line 161 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__X_5 == mercury__private_builtin__Y_6);
#line 163 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 162 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 163 "private_builtin.m"
        else
#line 164 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 163 "private_builtin.m"
      }
#line 161 "private_builtin.m"
  }
#line 49 "private_builtin.m"
}

#line 48 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_int_2_p_0(
#line 48 "private_builtin.m"
  MR_Integer mercury__private_builtin__X_3,
#line 48 "private_builtin.m"
  MR_Integer mercury__private_builtin__X_2)
#line 48 "private_builtin.m"
{
#line 156 "private_builtin.m"
  {
#line 156 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__X_2 == mercury__private_builtin__X_3);

#line 156 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 156 "private_builtin.m"
  }
#line 48 "private_builtin.m"
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
