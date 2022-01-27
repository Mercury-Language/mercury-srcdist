/*
** Automatically generated from `private_builtin.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





#line 92 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_float_box_0[1];

#line 95 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0;

#line 98 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_mutvar_1[1];

#line 101 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1;

#line 104 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0[1];

#line 107 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0;

#line 110 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0[1];

#line 113 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0;

#line 116 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1[1];

#line 119 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1;

#line 122 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0_10001(
#line 125 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 127 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 130 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
#line 133 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 135 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 137 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 140 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
#line 143 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 145 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 147 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 150 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
#line 153 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 155 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 157 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 159 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4);

#line 162 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
#line 165 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 167 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 170 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
#line 173 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 175 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 177 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 180 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
#line 183 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 185 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 188 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
#line 191 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 193 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 195 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 198 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
#line 201 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 203 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 205 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 208 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
#line 211 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 213 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 215 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 217 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4);

#line 220 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
#line 223 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 225 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 228 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
#line 231 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 233 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 235 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 238 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
#line 241 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 243 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2);

#line 246 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
#line 249 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 251 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 253 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3);

#line 13 "ops.opt"
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



#include "private_builtin.mh"
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
#include "builtin.mh"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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
#include "version_array.mh"
#include "version_array.mh"
#line 1646 "private_builtin.m"


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




#line 665 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_float_box_0[1] = {
  (MR_Integer) 0
};

#line 670 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 = {
  (MR_String) "float_box",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  NULL
};

#line 677 "private_builtin.c"
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

#line 698 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_mutvar_1[1] = {
  (MR_Integer) 0
};

#line 703 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 710 "private_builtin.c"
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

#line 731 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0[1] = {
  (MR_Integer) 0
};

#line 736 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 = {
  (MR_String) "sample_type_info",
  (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0,
  NULL
};

#line 743 "private_builtin.c"
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

#line 764 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0[1] = {
  (MR_Integer) 0
};

#line 769 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 = {
  (MR_String) "sample_typeclass_info",
  (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0,
  NULL
};

#line 776 "private_builtin.c"
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

#line 797 "private_builtin.c"
static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1[1] = {
  (MR_Integer) 0
};

#line 802 "private_builtin.c"
static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 = {
  (MR_String) "store_at_ref_type",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 809 "private_builtin.c"
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

#line 830 "private_builtin.c"
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

#line 851 "private_builtin.c"
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

#line 872 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0_10001(
#line 875 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 877 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 879 "private_builtin.c"
{
#line 881 "private_builtin.c"
  {
#line 883 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 886 "private_builtin.c"
    {
#line 888 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____float_box_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 891 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 893 "private_builtin.c"
  }
#line 895 "private_builtin.c"
}

#line 898 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
#line 901 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 903 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 905 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 907 "private_builtin.c"
{
#line 909 "private_builtin.c"
  {
#line 911 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 914 "private_builtin.c"
    {
#line 916 "private_builtin.c"
      mercury__private_builtin____Compare____float_box_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 919 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 921 "private_builtin.c"
  }
#line 923 "private_builtin.c"
}

#line 926 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
#line 929 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 931 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 933 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 935 "private_builtin.c"
{
#line 937 "private_builtin.c"
  {
#line 939 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 942 "private_builtin.c"
    {
#line 944 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____mutvar_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 947 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 949 "private_builtin.c"
  }
#line 951 "private_builtin.c"
}

#line 954 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
#line 957 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 959 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 961 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 963 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4)
#line 965 "private_builtin.c"
{
#line 967 "private_builtin.c"
  {
#line 969 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 972 "private_builtin.c"
    {
#line 974 "private_builtin.c"
      mercury__private_builtin____Compare____mutvar_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), &mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_3), ((MR_Word) mercury__private_builtin__wrapper_arg_4));
    }
#line 977 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_2 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 979 "private_builtin.c"
  }
#line 981 "private_builtin.c"
}

#line 984 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
#line 987 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 989 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 991 "private_builtin.c"
{
#line 993 "private_builtin.c"
  {
#line 995 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 998 "private_builtin.c"
    {
#line 1000 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____sample_type_info_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1003 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1005 "private_builtin.c"
  }
#line 1007 "private_builtin.c"
}

#line 1010 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
#line 1013 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1015 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1017 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1019 "private_builtin.c"
{
#line 1021 "private_builtin.c"
  {
#line 1023 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1026 "private_builtin.c"
    {
#line 1028 "private_builtin.c"
      mercury__private_builtin____Compare____sample_type_info_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1031 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1033 "private_builtin.c"
  }
#line 1035 "private_builtin.c"
}

#line 1038 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
#line 1041 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1043 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 1045 "private_builtin.c"
{
#line 1047 "private_builtin.c"
  {
#line 1049 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1052 "private_builtin.c"
    {
#line 1054 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____sample_typeclass_info_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1057 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1059 "private_builtin.c"
  }
#line 1061 "private_builtin.c"
}

#line 1064 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
#line 1067 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1069 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1071 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1073 "private_builtin.c"
{
#line 1075 "private_builtin.c"
  {
#line 1077 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1080 "private_builtin.c"
    {
#line 1082 "private_builtin.c"
      mercury__private_builtin____Compare____sample_typeclass_info_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1085 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1087 "private_builtin.c"
  }
#line 1089 "private_builtin.c"
}

#line 1092 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
#line 1095 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1097 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1099 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1101 "private_builtin.c"
{
#line 1103 "private_builtin.c"
  {
#line 1105 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1108 "private_builtin.c"
    {
#line 1110 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____store_at_ref_type_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Box *) mercury__private_builtin__wrapper_arg_2), ((MR_Box *) mercury__private_builtin__wrapper_arg_3));
    }
#line 1113 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1115 "private_builtin.c"
  }
#line 1117 "private_builtin.c"
}

#line 1120 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
#line 1123 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1125 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_2,
#line 1127 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3,
#line 1129 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_4)
#line 1131 "private_builtin.c"
{
#line 1133 "private_builtin.c"
  {
#line 1135 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1138 "private_builtin.c"
    {
#line 1140 "private_builtin.c"
      mercury__private_builtin____Compare____store_at_ref_type_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), &mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Box *) mercury__private_builtin__wrapper_arg_3), ((MR_Box *) mercury__private_builtin__wrapper_arg_4));
    }
#line 1143 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_2 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1145 "private_builtin.c"
  }
#line 1147 "private_builtin.c"
}

#line 1150 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
#line 1153 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1155 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 1157 "private_builtin.c"
{
#line 1159 "private_builtin.c"
  {
#line 1161 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1164 "private_builtin.c"
    {
#line 1166 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____ticket_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1169 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1171 "private_builtin.c"
  }
#line 1173 "private_builtin.c"
}

#line 1176 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
#line 1179 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1181 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1183 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1185 "private_builtin.c"
{
#line 1187 "private_builtin.c"
  {
#line 1189 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1192 "private_builtin.c"
    {
#line 1194 "private_builtin.c"
      mercury__private_builtin____Compare____ticket_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1197 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1199 "private_builtin.c"
  }
#line 1201 "private_builtin.c"
}

#line 1204 "private_builtin.c"
static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
#line 1207 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_1,
#line 1209 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2)
#line 1211 "private_builtin.c"
{
#line 1213 "private_builtin.c"
  {
#line 1215 "private_builtin.c"
    MR_bool mercury__private_builtin__succeeded;

#line 1218 "private_builtin.c"
    {
#line 1220 "private_builtin.c"
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____ticket_counter_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
#line 1223 "private_builtin.c"
    return mercury__private_builtin__succeeded;
#line 1225 "private_builtin.c"
  }
#line 1227 "private_builtin.c"
}

#line 1230 "private_builtin.c"
static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
#line 1233 "private_builtin.c"
  MR_Box * mercury__private_builtin__wrapper_arg_1,
#line 1235 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_2,
#line 1237 "private_builtin.c"
  MR_Box mercury__private_builtin__wrapper_arg_3)
#line 1239 "private_builtin.c"
{
#line 1241 "private_builtin.c"
  {
#line 1243 "private_builtin.c"
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

#line 1246 "private_builtin.c"
    {
#line 1248 "private_builtin.c"
      mercury__private_builtin____Compare____ticket_counter_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
#line 1251 "private_builtin.c"
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
#line 1253 "private_builtin.c"
  }
#line 1255 "private_builtin.c"
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

#line 1544 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2(void)
#line 1544 "private_builtin.m"
{
#line 1578 "private_builtin.m"
  {
#line 1578 "private_builtin.m"
    return MR_FALSE;
#line 1578 "private_builtin.m"
  }
#line 1544 "private_builtin.m"
}

#line 1543 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1(void)
#line 1543 "private_builtin.m"
{
#line 1577 "private_builtin.m"
  {
#line 1577 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1577 "private_builtin.m"
  }
#line 1543 "private_builtin.m"
}

#line 1542 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
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

#line 1539 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2(void)
#line 1539 "private_builtin.m"
{
#line 1574 "private_builtin.m"
  {
#line 1574 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1574 "private_builtin.m"
  }
#line 1539 "private_builtin.m"
}

#line 1538 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1(void)
#line 1538 "private_builtin.m"
{
#line 1573 "private_builtin.m"
  {
#line 1573 "private_builtin.m"
    return MR_FALSE;
#line 1573 "private_builtin.m"
  }
#line 1538 "private_builtin.m"
}

#line 1537 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
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

#line 1458 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 1458 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4)
#line 1458 "private_builtin.m"
{
#line 1482 "private_builtin.m"
  {
#line 1482 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1385 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1482 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1481 "private_builtin.m"
      {
#line 1481 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;
#line 1481 "private_builtin.m"
        MR_String mercury__private_builtin__V_12_12;

#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "compare for foreign types", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_12_12);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_12_12, &mercury__private_builtin__V_10_10);
        }
#line 1581 "private_builtin.m"
        {
#line 1581 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__V_10_10);
#line 1581 "private_builtin.m"
          return;
        }
#line 1481 "private_builtin.m"
      }
#line 1482 "private_builtin.m"
    else
#line 1483 "private_builtin.m"
      *mercury__private_builtin__Result_4 = (MR_Integer) 0;
#line 1482 "private_builtin.m"
  }
#line 1458 "private_builtin.m"
}

#line 1457 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 1457 "private_builtin.m"
{
#line 1475 "private_builtin.m"
  {
#line 1475 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1452 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1475 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1474 "private_builtin.m"
      {
#line 1474 "private_builtin.m"
        MR_String mercury__private_builtin__V_8_8;
#line 1474 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;

#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "unify for foreign types", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_10_10);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_10_10, &mercury__private_builtin__V_8_8);
        }
#line 1581 "private_builtin.m"
        {
#line 1581 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__V_8_8);
        }
#line 1474 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 1474 "private_builtin.m"
      }
#line 1475 "private_builtin.m"
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

#line 1504 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 87 "builtin.opt"
      }
#line 1475 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1475 "private_builtin.m"
  }
#line 1457 "private_builtin.m"
}

#line 85 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 85 "private_builtin.m"
  MR_Word * mercury__private_builtin__Res_4)
#line 85 "private_builtin.m"
{
#line 318 "private_builtin.m"
  {
#line 318 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1545 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 318 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 316 "private_builtin.m"
      {
#line 317 "private_builtin.m"
        {
#line 317 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "call to generated compare/3 for solver type");
#line 317 "private_builtin.m"
          return;
        }
#line 316 "private_builtin.m"
      }
#line 318 "private_builtin.m"
    else
#line 320 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 318 "private_builtin.m"
  }
#line 85 "private_builtin.m"
}

#line 84 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 84 "private_builtin.m"
{
#line 304 "private_builtin.m"
  {
#line 304 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1597 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 304 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 302 "private_builtin.m"
      {
#line 303 "private_builtin.m"
        {
#line 303 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "call to generated unify/2 for solver type");
        }
#line 302 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 302 "private_builtin.m"
      }
#line 304 "private_builtin.m"
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

#line 1634 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 90 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 90 "builtin.opt"
      }
#line 304 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 304 "private_builtin.m"
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
#line 286 "private_builtin.m"
  {
#line 286 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1677 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 286 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 284 "private_builtin.m"
      {
#line 284 "private_builtin.m"
        MR_String mercury__private_builtin__Message_7;
#line 284 "private_builtin.m"
        MR_String mercury__private_builtin__V_9_9;
#line 284 "private_builtin.m"
        MR_String mercury__private_builtin__V_10_10;
#line 284 "private_builtin.m"
        MR_Word mercury__private_builtin__V_11_11;
#line 58 "type_desc.opt"
        MR_Box mercury__private_builtin__V_14_14;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T_13 ;
		{
#line 58 "type_desc.opt"
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
#line 1727 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_11_11  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 284 "private_builtin.m"
        {
#line 284 "private_builtin.m"
          mercury__private_builtin__V_10_10 = mercury__type_desc__type_name_1_f_0(mercury__private_builtin__V_11_11);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__private_builtin__V_10_10, (MR_String) "\'", &mercury__private_builtin__V_9_9);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "call to compare/3 for non-canonical type \140", mercury__private_builtin__V_9_9, &mercury__private_builtin__Message_7);
        }
#line 285 "private_builtin.m"
        {
#line 285 "private_builtin.m"
          mercury__require__error_1_p_0(mercury__private_builtin__Message_7);
#line 285 "private_builtin.m"
          return;
        }
#line 284 "private_builtin.m"
      }
#line 286 "private_builtin.m"
    else
#line 288 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 286 "private_builtin.m"
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
#line 256 "private_builtin.m"
  {
#line 256 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1790 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 256 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 255 "private_builtin.m"
      {
#line 255 "private_builtin.m"
        {
#line 255 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "builtin_compare_tuple called");
#line 255 "private_builtin.m"
          return;
        }
#line 255 "private_builtin.m"
      }
#line 256 "private_builtin.m"
    else
#line 258 "private_builtin.m"
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
#line 256 "private_builtin.m"
  }
#line 72 "private_builtin.m"
}

#line 71 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 71 "private_builtin.m"
{
#line 246 "private_builtin.m"
  {
#line 246 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1842 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 246 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 245 "private_builtin.m"
      {
#line 245 "private_builtin.m"
        {
#line 245 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "builtin_unify_tuple called");
        }
#line 245 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 245 "private_builtin.m"
      }
#line 246 "private_builtin.m"
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

#line 1879 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 87 "builtin.opt"
      }
#line 246 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 246 "private_builtin.m"
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
#line 274 "private_builtin.m"
  {
#line 274 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1920 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 274 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 273 "private_builtin.m"
      {
#line 273 "private_builtin.m"
        {
#line 273 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted higher-order comparison");
#line 273 "private_builtin.m"
          return;
        }
#line 273 "private_builtin.m"
      }
#line 274 "private_builtin.m"
    else
#line 276 "private_builtin.m"
      *mercury__private_builtin__Result_4 = (MR_Integer) 1;
#line 274 "private_builtin.m"
  }
#line 64 "private_builtin.m"
}

#line 63 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 63 "private_builtin.m"
{
#line 265 "private_builtin.m"
  {
#line 265 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1972 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 265 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 264 "private_builtin.m"
      {
#line 264 "private_builtin.m"
        {
#line 264 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted higher-order unification");
        }
#line 264 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 264 "private_builtin.m"
      }
#line 265 "private_builtin.m"
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

#line 2009 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 87 "builtin.opt"
      }
#line 265 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 265 "private_builtin.m"
  }
#line 63 "private_builtin.m"
}

#line 357 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____typeclass_info_0_0(
#line 357 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 357 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____typeclass_info_0_0(
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 357 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 354 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____type_info_0_0(
#line 354 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 354 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 354 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 354 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____type_info_0_0(
#line 354 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 354 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 355 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____type_ctor_info_0_0(
#line 355 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 355 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 355 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 355 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____type_ctor_info_0_0(
#line 355 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 355 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 884 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0(
#line 884 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 884 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 884 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 884 "private_builtin.m"
{
#line 884 "private_builtin.m"
  {
#line 884 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 884 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_4 = mercury__private_builtin__HeadVar__2_2;
#line 884 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_5 = mercury__private_builtin__HeadVar__3_3;

#line 884 "private_builtin.m"
    {
#line 884 "private_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__Cast_HeadVar1_4, mercury__private_builtin__Cast_HeadVar2_5);
#line 884 "private_builtin.m"
      return;
    }
#line 884 "private_builtin.m"
  }
#line 884 "private_builtin.m"
}

#line 884 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0(
#line 884 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 884 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 884 "private_builtin.m"
{
#line 884 "private_builtin.m"
  {
#line 884 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 884 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar1_3 = mercury__private_builtin__HeadVar__1_1;
#line 884 "private_builtin.m"
    MR_Word mercury__private_builtin__Cast_HeadVar2_4 = mercury__private_builtin__HeadVar__2_2;

#line 884 "private_builtin.m"
    {
#line 884 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__Cast_HeadVar1_3, mercury__private_builtin__Cast_HeadVar2_4);
    }
#line 884 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 884 "private_builtin.m"
  }
#line 884 "private_builtin.m"
}

#line 883 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0(
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
mercury__private_builtin____Unify____ticket_0_0(
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

#line 1449 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0(
#line 1449 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1449 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1449 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2,
#line 1449 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__3_3)
#line 1449 "private_builtin.m"
{
#line 1449 "private_builtin.m"
  {
#line 1449 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1449 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1449 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 1449 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 1449 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2231 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 1449 "private_builtin.m"
    else
#line 1449 "private_builtin.m"
      {
#line 1449 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_4_4 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1449 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_5_5 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 160 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 < mercury__private_builtin__V_5_5);
#line 162 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 161 "private_builtin.m"
          *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 162 "private_builtin.m"
        else
#line 164 "private_builtin.m"
          {
#line 162 "private_builtin.m"
            mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 == mercury__private_builtin__V_5_5);
#line 164 "private_builtin.m"
            if (mercury__private_builtin__succeeded)
#line 163 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 164 "private_builtin.m"
            else
#line 165 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "private_builtin.m"
          }
#line 1449 "private_builtin.m"
      }
#line 1449 "private_builtin.m"
  }
#line 1449 "private_builtin.m"
}

#line 1449 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0(
#line 1449 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_7,
#line 1449 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1449 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2)
#line 1449 "private_builtin.m"
{
#line 1449 "private_builtin.m"
  {
#line 1449 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1449 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1449 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 1449 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 1449 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1449 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 1449 "private_builtin.m"
    else
#line 1449 "private_builtin.m"
      {
#line 1449 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_3_3 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1449 "private_builtin.m"
        MR_Integer mercury__private_builtin__V_4_4 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 2306 "private_builtin.c"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_3_3 == mercury__private_builtin__V_4_4);
#line 1449 "private_builtin.m"
      }
#line 1449 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1449 "private_builtin.m"
  }
#line 1449 "private_builtin.m"
}

#line 366 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0(
#line 366 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 366 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 366 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 366 "private_builtin.m"
{
#line 366 "private_builtin.m"
  {
#line 366 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 366 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 366 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 366 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 366 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2341 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 366 "private_builtin.m"
    else
#line 366 "private_builtin.m"
      {
#line 366 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 366 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 366 "private_builtin.m"
        {
#line 366 "private_builtin.m"
          mercury__private_builtin____Compare____typeclass_info_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 366 "private_builtin.m"
          return;
        }
#line 366 "private_builtin.m"
      }
#line 366 "private_builtin.m"
  }
#line 366 "private_builtin.m"
}

#line 366 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0(
#line 366 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 366 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 366 "private_builtin.m"
{
#line 366 "private_builtin.m"
  {
#line 366 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 366 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 366 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 366 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 366 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 366 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 366 "private_builtin.m"
    else
#line 366 "private_builtin.m"
      {
#line 366 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 366 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2399 "private_builtin.c"
        {
#line 2401 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__private_builtin____Unify____typeclass_info_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 366 "private_builtin.m"
      }
#line 366 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 366 "private_builtin.m"
  }
#line 366 "private_builtin.m"
}

#line 364 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0(
#line 364 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 364 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 364 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 364 "private_builtin.m"
{
#line 364 "private_builtin.m"
  {
#line 364 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 364 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 364 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 364 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 364 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2437 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 364 "private_builtin.m"
    else
#line 364 "private_builtin.m"
      {
#line 364 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 364 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 364 "private_builtin.m"
        {
#line 364 "private_builtin.m"
          mercury__private_builtin____Compare____type_info_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 364 "private_builtin.m"
          return;
        }
#line 364 "private_builtin.m"
      }
#line 364 "private_builtin.m"
  }
#line 364 "private_builtin.m"
}

#line 364 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0(
#line 364 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 364 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 364 "private_builtin.m"
{
#line 364 "private_builtin.m"
  {
#line 364 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 364 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 364 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 364 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 364 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 364 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 364 "private_builtin.m"
    else
#line 364 "private_builtin.m"
      {
#line 364 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 364 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2495 "private_builtin.c"
        {
#line 2497 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__private_builtin____Unify____type_info_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 364 "private_builtin.m"
      }
#line 364 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 364 "private_builtin.m"
  }
#line 364 "private_builtin.m"
}

#line 1234 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____ref_1_0(
#line 1234 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_4,
#line 1234 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1234 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1234 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 1234 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____ref_1_0(
#line 1234 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_3,
#line 1234 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1234 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 1206 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0(
#line 1206 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1206 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1206 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1206 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 1206 "private_builtin.m"
{
#line 1206 "private_builtin.m"
  {
#line 1206 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1206 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 1206 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 1206 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 1206 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2557 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 1206 "private_builtin.m"
    else
#line 1206 "private_builtin.m"
      {
#line 1206 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
#line 1206 "private_builtin.m"
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

#line 1206 "private_builtin.m"
        {
#line 1206 "private_builtin.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
#line 1206 "private_builtin.m"
          return;
        }
#line 1206 "private_builtin.m"
      }
#line 1206 "private_builtin.m"
  }
#line 1206 "private_builtin.m"
}

#line 1206 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0(
#line 1206 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_7,
#line 1206 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1206 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 1206 "private_builtin.m"
{
#line 1206 "private_builtin.m"
  {
#line 1206 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1206 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 1206 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 1206 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 1206 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1206 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 1206 "private_builtin.m"
    else
#line 1206 "private_builtin.m"
      {
#line 1206 "private_builtin.m"
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
#line 1206 "private_builtin.m"
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

#line 2617 "private_builtin.c"
        {
#line 2619 "private_builtin.c"
          return mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
#line 1206 "private_builtin.m"
      }
#line 1206 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1206 "private_builtin.m"
  }
#line 1206 "private_builtin.m"
}

#line 1226 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____heap_pointer_0_0(
#line 1226 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 1226 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 1226 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 1226 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____heap_pointer_0_0(
#line 1226 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 1226 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 869 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0(
#line 869 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 869 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 869 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3)
#line 869 "private_builtin.m"
{
#line 869 "private_builtin.m"
  {
#line 869 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 869 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
#line 869 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

#line 869 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
#line 869 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 2673 "private_builtin.c"
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 869 "private_builtin.m"
    else
#line 869 "private_builtin.m"
      {
#line 869 "private_builtin.m"
        MR_Float mercury__private_builtin__V_4_4 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__2_2);
#line 869 "private_builtin.m"
        MR_Float mercury__private_builtin__V_5_5 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__3_3);

#line 233 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 < mercury__private_builtin__V_5_5);
#line 235 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 234 "private_builtin.m"
          *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "private_builtin.m"
        else
#line 237 "private_builtin.m"
          {
#line 235 "private_builtin.m"
            mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 > mercury__private_builtin__V_5_5);
#line 237 "private_builtin.m"
            if (mercury__private_builtin__succeeded)
#line 236 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "private_builtin.m"
            else
#line 238 "private_builtin.m"
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "private_builtin.m"
          }
#line 869 "private_builtin.m"
      }
#line 869 "private_builtin.m"
  }
#line 869 "private_builtin.m"
}

#line 869 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0(
#line 869 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 869 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2)
#line 869 "private_builtin.m"
{
#line 869 "private_builtin.m"
  {
#line 869 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 869 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
#line 869 "private_builtin.m"
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

#line 869 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
#line 869 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 869 "private_builtin.m"
      mercury__private_builtin__succeeded = MR_TRUE;
#line 869 "private_builtin.m"
    else
#line 869 "private_builtin.m"
      {
#line 869 "private_builtin.m"
        MR_Float mercury__private_builtin__V_3_3 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__1_1);
#line 869 "private_builtin.m"
        MR_Float mercury__private_builtin__V_4_4 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__2_2);

#line 2746 "private_builtin.c"
        mercury__private_builtin__succeeded = (mercury__private_builtin__V_3_3 == mercury__private_builtin__V_4_4);
#line 869 "private_builtin.m"
      }
#line 869 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 869 "private_builtin.m"
  }
#line 869 "private_builtin.m"
}

#line 358 "private_builtin.m"
void MR_CALL 
mercury__private_builtin____Compare____base_typeclass_info_0_0(
#line 358 "private_builtin.m"
  MR_Word * mercury__private_builtin__HeadVar__1_1,
#line 358 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2,
#line 358 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__3_3);

#line 358 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin____Unify____base_typeclass_info_0_0(
#line 358 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1,
#line 358 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__2_2);

#line 1566 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__semip_0_p_0(void)
#line 1566 "private_builtin.m"
{
#line 1608 "private_builtin.m"
  {
#line 1608 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1608 "private_builtin.m"
  }
#line 1566 "private_builtin.m"
}

#line 1562 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__imp_0_p_0(void)
#line 1562 "private_builtin.m"
{
#line 1587 "private_builtin.m"
  {
#line 1587 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1590 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__imp_0_p_0


		{
#line 1590 "private_builtin.m"

#line 2808 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1590 "private_builtin.m"
}
#line 1587 "private_builtin.m"
  }
#line 1562 "private_builtin.m"
}

#line 1558 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__sorry_1_p_0(
#line 1558 "private_builtin.m"
  MR_String mercury__private_builtin__PredName_2)
#line 1558 "private_builtin.m"
{
#line 1580 "private_builtin.m"
  {
#line 1580 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1580 "private_builtin.m"
    MR_String mercury__private_builtin__V_3_3;
#line 1580 "private_builtin.m"
    MR_String mercury__private_builtin__V_5_5;

#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__private_builtin__PredName_2, (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_5_5);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_5_5, &mercury__private_builtin__V_3_3);
    }
#line 1581 "private_builtin.m"
    {
#line 1581 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_3_3);
#line 1581 "private_builtin.m"
      return;
    }
#line 1580 "private_builtin.m"
  }
#line 1558 "private_builtin.m"
}

#line 1552 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__no_clauses_1_p_0(
#line 1552 "private_builtin.m"
  MR_String mercury__private_builtin__PredName_2)
#line 1552 "private_builtin.m"
{
#line 1584 "private_builtin.m"
  {
#line 1584 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1584 "private_builtin.m"
    MR_String mercury__private_builtin__V_3_3;

#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "no clauses for ", mercury__private_builtin__PredName_2, &mercury__private_builtin__V_3_3);
    }
#line 1585 "private_builtin.m"
    {
#line 1585 "private_builtin.m"
      mercury__require__error_1_p_0(mercury__private_builtin__V_3_3);
#line 1585 "private_builtin.m"
      return;
    }
#line 1584 "private_builtin.m"
  }
#line 1552 "private_builtin.m"
}

#line 1544 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__nonvar_1_p_2(
#line 1544 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5)
#line 1544 "private_builtin.m"
{
#line 1578 "private_builtin.m"
  {
#line 1578 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1578 "private_builtin.m"
    {
#line 1578 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2();
    }
#line 1578 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1578 "private_builtin.m"
  }
#line 1544 "private_builtin.m"
}

#line 1543 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nonvar_1_p_1(
#line 1543 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1543 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1543 "private_builtin.m"
{
#line 1577 "private_builtin.m"
  {
#line 1577 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1577 "private_builtin.m"
    {
#line 1577 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1();
#line 1577 "private_builtin.m"
      return;
    }
#line 1577 "private_builtin.m"
  }
#line 1543 "private_builtin.m"
}

#line 1542 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nonvar_1_p_0(
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
    {
#line 1576 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0();
#line 1576 "private_builtin.m"
      return;
    }
#line 1576 "private_builtin.m"
  }
#line 1542 "private_builtin.m"
}

#line 1539 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__var_1_p_2(
#line 1539 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5)
#line 1539 "private_builtin.m"
{
#line 1574 "private_builtin.m"
  {
#line 1574 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1574 "private_builtin.m"
    {
#line 1574 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2();
#line 1574 "private_builtin.m"
      return;
    }
#line 1574 "private_builtin.m"
  }
#line 1539 "private_builtin.m"
}

#line 1538 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__var_1_p_1(
#line 1538 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1538 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1538 "private_builtin.m"
{
#line 1573 "private_builtin.m"
  {
#line 1573 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1573 "private_builtin.m"
    {
#line 1573 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1();
    }
#line 1573 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1573 "private_builtin.m"
  }
#line 1538 "private_builtin.m"
}

#line 1537 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__var_1_p_0(
#line 1537 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
#line 1537 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1537 "private_builtin.m"
{
#line 1572 "private_builtin.m"
  {
#line 1572 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1572 "private_builtin.m"
    {
#line 1572 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0();
    }
#line 1572 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1572 "private_builtin.m"
  }
#line 1537 "private_builtin.m"
}

#line 1460 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0(void)
#line 1460 "private_builtin.m"
{
#line 1486 "private_builtin.m"
  {
#line 1486 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1490 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1490 "private_builtin.m"

    /* All uses of this predicate should override the body. */
    MR_fatal_error("trace_evaluate_runtime_condition called");

#line 3062 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1490 "private_builtin.m"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1486 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1486 "private_builtin.m"
  }
#line 1460 "private_builtin.m"
}

#line 1458 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__nyi_foreign_type_compare_3_p_0(
#line 1458 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
#line 1458 "private_builtin.m"
  MR_Word * mercury__private_builtin__Result_4,
#line 1458 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_5,
#line 1458 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__3_6)
#line 1458 "private_builtin.m"
{
#line 1482 "private_builtin.m"
  {
#line 1482 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1482 "private_builtin.m"
    {
#line 1482 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Result_4);
#line 1482 "private_builtin.m"
      return;
    }
#line 1482 "private_builtin.m"
  }
#line 1458 "private_builtin.m"
}

#line 1457 "private_builtin.m"
MR_bool MR_CALL 
mercury__private_builtin__nyi_foreign_type_unify_2_p_0(
#line 1457 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
#line 1457 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_3,
#line 1457 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_4)
#line 1457 "private_builtin.m"
{
#line 1475 "private_builtin.m"
  {
#line 1475 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1475 "private_builtin.m"
    {
#line 1475 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 1475 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 1475 "private_builtin.m"
  }
#line 1457 "private_builtin.m"
}

#line 1455 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unused_0_p_0(void)
#line 1455 "private_builtin.m"
{
#line 1467 "private_builtin.m"
  {
#line 1467 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 87 "builtin.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__unused_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 87 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 3157 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 87 "builtin.opt"
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1467 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 1466 "private_builtin.m"
      {
#line 1466 "private_builtin.m"
        {
#line 1466 "private_builtin.m"
          mercury__require__error_1_p_0((MR_String) "attempted use of dead predicate");
#line 1466 "private_builtin.m"
          return;
        }
#line 1466 "private_builtin.m"
      }
#line 1467 "private_builtin.m"
    else
#line 1469 "private_builtin.m"
      {
#line 1469 "private_builtin.m"
      }
#line 1467 "private_builtin.m"
  }
#line 1455 "private_builtin.m"
}

#line 1444 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_at_ref_2_p_0(
#line 1444 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1444 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 1444 "private_builtin.m"
{
#line 1444 "private_builtin.m"
  {
#line 1444 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1444 "private_builtin.m"
  }
#line 1444 "private_builtin.m"
}

#line 1439 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_at_ref_impure_2_p_0(
#line 1439 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__1_1,
#line 1439 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__2_2)
#line 1439 "private_builtin.m"
{
#line 1439 "private_builtin.m"
  {
#line 1439 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1439 "private_builtin.m"
    *mercury__private_builtin__HeadVar__1_1 = mercury__private_builtin__HeadVar__2_2;
#line 1439 "private_builtin.m"
  }
#line 1439 "private_builtin.m"
}

#line 1434 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unsafe_type_cast_2_p_0(
#line 1434 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1,
#line 1434 "private_builtin.m"
  MR_Box * mercury__private_builtin__HeadVar__2_2)
#line 1434 "private_builtin.m"
{
#line 1434 "private_builtin.m"
  {
#line 1434 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1434 "private_builtin.m"
    *mercury__private_builtin__HeadVar__2_2 = mercury__private_builtin__HeadVar__1_1;
#line 1434 "private_builtin.m"
  }
#line 1434 "private_builtin.m"
}

#line 1229 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__restore_hp_1_p_0(
#line 1229 "private_builtin.m"
  MR_Word mercury__private_builtin__SavedHeapPointer_1)
#line 1229 "private_builtin.m"
{
#line 1286 "private_builtin.m"
  {
#line 1286 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1290 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__restore_hp_1_p_0

	MR_Word SavedHeapPointer;

	SavedHeapPointer =  mercury__private_builtin__SavedHeapPointer_1 ;
		{
#line 1290 "private_builtin.m"

#ifndef MR_CONSERVATIVE_GC
    MR_restore_hp(SavedHeapPointer);
#endif

#line 3277 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1290 "private_builtin.m"
}
#line 1286 "private_builtin.m"
  }
#line 1229 "private_builtin.m"
}

#line 1228 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__mark_hp_1_p_0(
#line 1228 "private_builtin.m"
  MR_Word * mercury__private_builtin__SavedHeapPointer_1)
#line 1228 "private_builtin.m"
{
#line 1273 "private_builtin.m"
  {
#line 1273 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1277 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__mark_hp_1_p_0

	MR_Word SavedHeapPointer;

		{
#line 1277 "private_builtin.m"

#ifndef MR_CONSERVATIVE_GC
    MR_mark_hp(SavedHeapPointer);
#else
    /* We can't do heap reclamation with conservative GC. */
    SavedHeapPointer = 0;
#endif

#line 3316 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__SavedHeapPointer_1  = SavedHeapPointer;
#line 1277 "private_builtin.m"
}
#line 1273 "private_builtin.m"
  }
#line 1228 "private_builtin.m"
}

#line 1218 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__gc_trace_1_p_0(
#line 1218 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_2,
#line 1218 "private_builtin.m"
  MR_Word mercury__private_builtin__HeadVar__1_1)
#line 1218 "private_builtin.m"
{
#line 1251 "private_builtin.m"
  {
#line 1251 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 1254 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__gc_trace_1_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Pointer;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T_2 ;
	Pointer =  mercury__private_builtin__HeadVar__1_1 ;
		{
#line 1254 "private_builtin.m"

#ifdef MR_NATIVE_GC
    * (MR_Word *) Pointer =
        MR_agc_deep_copy(* (MR_Word *) Pointer, (MR_TypeInfo) TypeInfo_for_T,
            MR_ENGINE(MR_eng_heap_zone2->MR_zone_min),
            MR_ENGINE(MR_eng_heap_zone2->MR_zone_hardmax));
#else
    MR_fatal_error("private_builtin.gc_trace/2: "
        "called when accurate GC not enabled");
#endif

#line 3364 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1254 "private_builtin.m"
}
#line 1251 "private_builtin.m"
  }
#line 1218 "private_builtin.m"
}

#line 1204 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__free_heap_1_p_0(
#line 1204 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeInfo_for_T_2,
#line 1204 "private_builtin.m"
  MR_Box mercury__private_builtin__HeadVar__1_1)
#line 1204 "private_builtin.m"
{
#line 1266 "private_builtin.m"
  {
#line 1266 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 1266 "private_builtin.m"
    MR_Word mercury__private_builtin__TypeInfo_for_T_3;

#line 1269 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__free_heap_1_p_0

	MR_Word Val;

	Val = (MR_Word) mercury__private_builtin__HeadVar__1_1 ;
		{
#line 1269 "private_builtin.m"

    MR_free_heap((void *) Val);

#line 3403 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1269 "private_builtin.m"
}
#line 1266 "private_builtin.m"
  }
#line 1204 "private_builtin.m"
}

#line 896 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__prune_tickets_to_1_p_0(
#line 896 "private_builtin.m"
  MR_Word mercury__private_builtin__TicketCounter_1)
#line 896 "private_builtin.m"
{
#line 967 "private_builtin.m"
  {
#line 967 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 970 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__prune_tickets_to_1_p_0

	MR_Word TicketCounter;

	TicketCounter =  mercury__private_builtin__TicketCounter_1 ;
		{
#line 970 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_prune_tickets_to(TicketCounter);
#endif

#line 3440 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 970 "private_builtin.m"
}
#line 967 "private_builtin.m"
  }
#line 896 "private_builtin.m"
}

#line 895 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__mark_ticket_stack_1_p_0(
#line 895 "private_builtin.m"
  MR_Word * mercury__private_builtin__TicketCounter_1)
#line 895 "private_builtin.m"
{
#line 956 "private_builtin.m"
  {
#line 956 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 959 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__mark_ticket_stack_1_p_0

	MR_Word TicketCounter;

		{
#line 959 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_mark_ticket_stack(TicketCounter);
#else
    TicketCounter = 0;
#endif

#line 3478 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TicketCounter_1  = TicketCounter;
#line 959 "private_builtin.m"
}
#line 956 "private_builtin.m"
  }
#line 895 "private_builtin.m"
}

#line 894 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__prune_ticket_0_p_0(void)
#line 894 "private_builtin.m"
{
#line 947 "private_builtin.m"
  {
#line 947 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 950 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__prune_ticket_0_p_0


		{
#line 950 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_prune_ticket();
#endif

#line 3512 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 950 "private_builtin.m"
}
#line 947 "private_builtin.m"
  }
#line 894 "private_builtin.m"
}

#line 893 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__discard_ticket_0_p_0(void)
#line 893 "private_builtin.m"
{
#line 938 "private_builtin.m"
  {
#line 938 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 941 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__discard_ticket_0_p_0


		{
#line 941 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 3545 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 941 "private_builtin.m"
}
#line 938 "private_builtin.m"
  }
#line 893 "private_builtin.m"
}

#line 892 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_solve_1_p_0(
#line 892 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 892 "private_builtin.m"
{
#line 929 "private_builtin.m"
  {
#line 929 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 932 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_solve_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 932 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_solve);
#endif

#line 3582 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 932 "private_builtin.m"
}
#line 929 "private_builtin.m"
  }
#line 892 "private_builtin.m"
}

#line 891 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_commit_1_p_0(
#line 891 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 891 "private_builtin.m"
{
#line 920 "private_builtin.m"
  {
#line 920 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 923 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_commit_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 923 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_commit);
#endif

#line 3619 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 923 "private_builtin.m"
}
#line 920 "private_builtin.m"
  }
#line 891 "private_builtin.m"
}

#line 890 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__reset_ticket_undo_1_p_0(
#line 890 "private_builtin.m"
  MR_Word mercury__private_builtin__Ticket_1)
#line 890 "private_builtin.m"
{
#line 911 "private_builtin.m"
  {
#line 911 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 914 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_undo_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{
#line 914 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_undo);
#endif

#line 3656 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 914 "private_builtin.m"
}
#line 911 "private_builtin.m"
  }
#line 890 "private_builtin.m"
}

#line 889 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__store_ticket_1_p_0(
#line 889 "private_builtin.m"
  MR_Word * mercury__private_builtin__Ticket_1)
#line 889 "private_builtin.m"
{
#line 900 "private_builtin.m"
  {
#line 900 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 903 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__store_ticket_1_p_0

	MR_Word Ticket;

		{
#line 903 "private_builtin.m"

#ifdef MR_USE_TRAIL
    MR_store_ticket(Ticket);
#else
    Ticket = 0;
#endif

#line 3694 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__Ticket_1  = Ticket;
#line 903 "private_builtin.m"
}
#line 900 "private_builtin.m"
  }
#line 889 "private_builtin.m"
}

#line 406 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0(
#line 406 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo0_1,
#line 406 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 406 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeClassInfo_3)
#line 406 "private_builtin.m"
{
#line 733 "private_builtin.m"
  {
#line 733 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 738 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__private_builtin__TypeClassInfo0_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 738 "private_builtin.m"

    TypeClassInfo =
        MR_typeclass_info_arg_typeclass_info(TypeClassInfo0, Index);

#line 3738 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeClassInfo_3  = TypeClassInfo;
#line 738 "private_builtin.m"
}
#line 733 "private_builtin.m"
  }
#line 406 "private_builtin.m"
}

#line 394 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__superclass_from_typeclass_info_3_p_0(
#line 394 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo0_1,
#line 394 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 394 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeClassInfo_3)
#line 394 "private_builtin.m"
{
#line 723 "private_builtin.m"
  {
#line 723 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 728 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__superclass_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__private_builtin__TypeClassInfo0_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 728 "private_builtin.m"

    TypeClassInfo =
        MR_typeclass_info_superclass_info(TypeClassInfo0, Index);

#line 3782 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeClassInfo_3  = TypeClassInfo;
#line 728 "private_builtin.m"
}
#line 723 "private_builtin.m"
  }
#line 394 "private_builtin.m"
}

#line 386 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0(
#line 386 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo_1,
#line 386 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 386 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeInfo_3)
#line 386 "private_builtin.m"
{
#line 714 "private_builtin.m"
  {
#line 714 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 719 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__private_builtin__TypeClassInfo_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 719 "private_builtin.m"

    TypeInfo = MR_typeclass_info_instance_tvar_type_info(TypeClassInfo, Index);

#line 3825 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeInfo_3  = TypeInfo;
#line 719 "private_builtin.m"
}
#line 714 "private_builtin.m"
  }
#line 386 "private_builtin.m"
}

#line 377 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__type_info_from_typeclass_info_3_p_0(
#line 377 "private_builtin.m"
  MR_Word mercury__private_builtin__TypeClassInfo_1,
#line 377 "private_builtin.m"
  MR_Integer mercury__private_builtin__Index_2,
#line 377 "private_builtin.m"
  MR_Word * mercury__private_builtin__TypeInfo_3)
#line 377 "private_builtin.m"
{
#line 705 "private_builtin.m"
  {
#line 705 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 710 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__private_builtin__TypeClassInfo_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{
#line 710 "private_builtin.m"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3868 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeInfo_3  = TypeInfo;
#line 710 "private_builtin.m"
}
#line 705 "private_builtin.m"
  }
#line 377 "private_builtin.m"
}

#line 193 "private_builtin.m"
void MR_CALL 
mercury__private_builtin__builtin_strcmp_3_p_0(
#line 193 "private_builtin.m"
  MR_Integer * mercury__private_builtin__Res_1,
#line 193 "private_builtin.m"
  MR_String mercury__private_builtin__S1_2,
#line 193 "private_builtin.m"
  MR_String mercury__private_builtin__S2_3)
#line 193 "private_builtin.m"
{
#line 195 "private_builtin.m"
  {
#line 195 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 199 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_strcmp_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__private_builtin__S1_2 ;
	S2 =  mercury__private_builtin__S2_3 ;
		{
#line 199 "private_builtin.m"

    Res = strcmp(S1, S2);

#line 3911 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__Res_1  = Res;
#line 199 "private_builtin.m"
}
#line 195 "private_builtin.m"
  }
#line 193 "private_builtin.m"
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
#line 336 "private_builtin.m"
  {
#line 336 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 336 "private_builtin.m"
    MR_Word mercury__private_builtin__R0_7;
#line 336 "private_builtin.m"
    MR_Word mercury__private_builtin__V_9_9;
#line 336 "private_builtin.m"
    MR_Word mercury__private_builtin__V_10_10;
#line 58 "type_desc.opt"
    MR_Box mercury__private_builtin__V_14_14;
#line 58 "type_desc.opt"
    MR_Box mercury__private_builtin__V_15_15;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_compare_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_11 ;
		{
#line 58 "type_desc.opt"
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
#line 4002 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_9_9  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_compare_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_12 ;
		{
#line 58 "type_desc.opt"
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
#line 4035 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_10_10  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 337 "private_builtin.m"
    {
#line 337 "private_builtin.m"
      mercury__type_desc____Compare____type_desc_0_0(&mercury__private_builtin__R0_7, mercury__private_builtin__V_9_9, mercury__private_builtin__V_10_10);
    }
#line 338 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__R0_7 == (MR_Integer) 0);
#line 341 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 339 "private_builtin.m"
      {
#line 339 "private_builtin.m"
        MR_Box mercury__private_builtin__Z_8 = mercury__private_builtin__X_5;

#line 340 "private_builtin.m"
        {
#line 340 "private_builtin.m"
          mercury__builtin__compare_3_p_0(mercury__private_builtin__TypeInfo_for_T2_12, mercury__private_builtin__R_4, mercury__private_builtin__Z_8, mercury__private_builtin__Y_6);
#line 340 "private_builtin.m"
          return;
        }
#line 339 "private_builtin.m"
      }
#line 341 "private_builtin.m"
    else
#line 342 "private_builtin.m"
      *mercury__private_builtin__R_4 = mercury__private_builtin__R0_7;
#line 336 "private_builtin.m"
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
#line 332 "private_builtin.m"
  {
#line 332 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 332 "private_builtin.m"
    MR_Word mercury__private_builtin__V_5_5;
#line 332 "private_builtin.m"
    MR_Word mercury__private_builtin__V_9_9;
#line 58 "type_desc.opt"
    MR_Box mercury__private_builtin__V_8_8;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_6 ;
		{
#line 58 "type_desc.opt"
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
#line 4124 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_5_5  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_7 ;
		{
#line 58 "type_desc.opt"
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
#line 4157 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_9_9  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 330 "private_builtin.m"
    {
#line 330 "private_builtin.m"
      mercury__private_builtin__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__private_builtin__V_5_5, mercury__private_builtin__V_9_9);
    }
#line 332 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 332 "private_builtin.m"
      {
#line 331 "private_builtin.m"
        *mercury__private_builtin__Y_4 = mercury__private_builtin__X_3;
#line 331 "private_builtin.m"
        mercury__private_builtin__succeeded = MR_TRUE;
#line 332 "private_builtin.m"
      }
#line 332 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 332 "private_builtin.m"
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
#line 332 "private_builtin.m"
  {
#line 332 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 332 "private_builtin.m"
    MR_Word mercury__private_builtin__V_5_5;
#line 332 "private_builtin.m"
    MR_Word mercury__private_builtin__V_10_10;
#line 332 "private_builtin.m"
    MR_Box mercury__private_builtin__V_11_11;
#line 58 "type_desc.opt"
    MR_Box mercury__private_builtin__V_8_8;
#line 58 "type_desc.opt"
    MR_Box mercury__private_builtin__V_9_9;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_6 ;
		{
#line 58 "type_desc.opt"
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
#line 4240 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_5_5  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_7 ;
		{
#line 58 "type_desc.opt"
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
#line 4273 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_10_10  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 330 "private_builtin.m"
    {
#line 330 "private_builtin.m"
      mercury__private_builtin__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__private_builtin__V_5_5, mercury__private_builtin__V_10_10);
    }
#line 332 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 332 "private_builtin.m"
      {
#line 331 "private_builtin.m"
        mercury__private_builtin__V_11_11 = mercury__private_builtin__X_3;
#line 331 "private_builtin.m"
        {
#line 331 "private_builtin.m"
          return mercury__private_builtin__succeeded = mercury__builtin__unify_2_p_0(mercury__private_builtin__TypeInfo_for_T2_7, mercury__private_builtin__Y_4, mercury__private_builtin__V_11_11);
        }
#line 332 "private_builtin.m"
      }
#line 332 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 332 "private_builtin.m"
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

#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_lt\'/2", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_7_7);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_7_7, &mercury__private_builtin__V_5_5);
    }
#line 1581 "private_builtin.m"
    {
#line 1581 "private_builtin.m"
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

#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_eq\'/2", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_7_7);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_7_7, &mercury__private_builtin__V_5_5);
    }
#line 1581 "private_builtin.m"
    {
#line 1581 "private_builtin.m"
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
#line 324 "private_builtin.m"
  {
#line 324 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 325 "private_builtin.m"
    {
#line 325 "private_builtin.m"
      mercury__require__error_1_p_0((MR_String) "internal error in compare/3");
#line 325 "private_builtin.m"
      return;
    }
#line 324 "private_builtin.m"
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
#line 318 "private_builtin.m"
  {
#line 318 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 318 "private_builtin.m"
    {
#line 318 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Res_4);
#line 318 "private_builtin.m"
      return;
    }
#line 318 "private_builtin.m"
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
#line 304 "private_builtin.m"
  {
#line 304 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 304 "private_builtin.m"
    {
#line 304 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 304 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 304 "private_builtin.m"
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
#line 286 "private_builtin.m"
  {
#line 286 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 286 "private_builtin.m"
    {
#line 286 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__TypeInfo_for_T_13, mercury__private_builtin__Res_4);
#line 286 "private_builtin.m"
      return;
    }
#line 286 "private_builtin.m"
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
#line 256 "private_builtin.m"
  {
#line 256 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 256 "private_builtin.m"
    {
#line 256 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Res_4);
#line 256 "private_builtin.m"
      return;
    }
#line 256 "private_builtin.m"
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
#line 246 "private_builtin.m"
  {
#line 246 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 246 "private_builtin.m"
    {
#line 246 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 246 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 246 "private_builtin.m"
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
#line 274 "private_builtin.m"
  {
#line 274 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 274 "private_builtin.m"
    {
#line 274 "private_builtin.m"
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__private_builtin__Result_4);
#line 274 "private_builtin.m"
      return;
    }
#line 274 "private_builtin.m"
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
#line 265 "private_builtin.m"
  {
#line 265 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;

#line 265 "private_builtin.m"
    {
#line 265 "private_builtin.m"
      return mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 265 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 265 "private_builtin.m"
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
#line 235 "private_builtin.m"
  {
#line 235 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__F1_5 < mercury__private_builtin__F2_6);

#line 235 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 234 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 235 "private_builtin.m"
    else
#line 237 "private_builtin.m"
      {
#line 235 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__F1_5 > mercury__private_builtin__F2_6);
#line 237 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 236 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 237 "private_builtin.m"
        else
#line 238 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 237 "private_builtin.m"
      }
#line 235 "private_builtin.m"
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
#line 230 "private_builtin.m"
  {
#line 230 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__F_2 == mercury__private_builtin__F_3);

#line 230 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 230 "private_builtin.m"
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
#line 183 "private_builtin.m"
  {
#line 183 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 183 "private_builtin.m"
    MR_Integer mercury__private_builtin__Res_7;

#line 199 "private_builtin.m"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_string_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__private_builtin__S1_5 ;
	S2 =  mercury__private_builtin__S2_6 ;
		{
#line 199 "private_builtin.m"

    Res = strcmp(S1, S2);

#line 4740 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__Res_7  = Res;
#line 199 "private_builtin.m"
}
#line 185 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__Res_7 < (MR_Integer) 0);
#line 187 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 186 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 187 "private_builtin.m"
    else
#line 189 "private_builtin.m"
      {
#line 187 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__Res_7 == (MR_Integer) 0);
#line 189 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 188 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 189 "private_builtin.m"
        else
#line 190 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 189 "private_builtin.m"
      }
#line 183 "private_builtin.m"
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
#line 181 "private_builtin.m"
  {
#line 181 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (strcmp(mercury__private_builtin__S_2, mercury__private_builtin__S_3) == 0);

#line 181 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 181 "private_builtin.m"
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
#line 170 "private_builtin.m"
  {
#line 170 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded;
#line 170 "private_builtin.m"
    MR_Integer mercury__private_builtin__XI_7;
#line 170 "private_builtin.m"
    MR_Integer mercury__private_builtin__YI_8;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_character_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__private_builtin__X_5 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4828 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__XI_7  = Int;
#line 66 "char.opt"
}
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_character_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__private_builtin__Y_6 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4848 "private_builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__YI_8  = Int;
#line 66 "char.opt"
}
#line 173 "private_builtin.m"
    mercury__private_builtin__succeeded = (mercury__private_builtin__XI_7 < mercury__private_builtin__YI_8);
#line 175 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 174 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 175 "private_builtin.m"
    else
#line 177 "private_builtin.m"
      {
#line 175 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__XI_7 == mercury__private_builtin__YI_8);
#line 177 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 176 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 177 "private_builtin.m"
        else
#line 178 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 177 "private_builtin.m"
      }
#line 170 "private_builtin.m"
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
#line 168 "private_builtin.m"
  {
#line 168 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__C_2 == mercury__private_builtin__C_3);

#line 168 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 168 "private_builtin.m"
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
#line 162 "private_builtin.m"
  {
#line 162 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__X_5 < mercury__private_builtin__Y_6);

#line 162 "private_builtin.m"
    if (mercury__private_builtin__succeeded)
#line 161 "private_builtin.m"
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
#line 162 "private_builtin.m"
    else
#line 164 "private_builtin.m"
      {
#line 162 "private_builtin.m"
        mercury__private_builtin__succeeded = (mercury__private_builtin__X_5 == mercury__private_builtin__Y_6);
#line 164 "private_builtin.m"
        if (mercury__private_builtin__succeeded)
#line 163 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
#line 164 "private_builtin.m"
        else
#line 165 "private_builtin.m"
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
#line 164 "private_builtin.m"
      }
#line 162 "private_builtin.m"
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
#line 157 "private_builtin.m"
  {
#line 157 "private_builtin.m"
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__X_2 == mercury__private_builtin__X_3);

#line 157 "private_builtin.m"
    return mercury__private_builtin__succeeded;
#line 157 "private_builtin.m"
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
