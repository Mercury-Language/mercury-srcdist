/*
** Automatically generated from `store.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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


/* :- module store. */
/* :- implementation. */

/*
INIT mercury__store__init
ENDINIT
*/

#include "store.mih"


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




#line 85 "store.c"
static const MR_Integer mercury__store__store__functor_number_map_generic_mutvar_2[1];

#line 88 "store.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__private_builtin__pti_ref_1__pseudo_1;

#line 91 "store.c"
static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_mutvar_2;

#line 94 "store.c"
static const MR_Integer mercury__store__store__functor_number_map_generic_ref_2[1];

#line 97 "store.c"
static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_ref_2;

#line 100 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__plain_io__type_ctor_info_state_0;

#line 103 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__plain_io__type_ctor_info_state_0;

#line 106 "store.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__store__pti_store_1__pseudo_2;

#line 109 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2;

#line 112 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2;

#line 115 "store.c"
static const MR_ConstString mercury__store__store__type_class_id_var_names_store_1[1];

#line 118 "store.c"
static const MR_TypeClassId mercury__store__store__type_class_id_store_1;

#line 121 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____generic_mutvar_2_0_10001(
#line 124 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 126 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 128 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 130 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 133 "store.c"
static void MR_CALL 
mercury__store____Compare____generic_mutvar_2_0_10001(
#line 136 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 138 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 140 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 142 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 144 "store.c"
  MR_Box mercury__store__wrapper_arg_5);

#line 147 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____generic_ref_2_0_10001(
#line 150 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 152 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 154 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 156 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 159 "store.c"
static void MR_CALL 
mercury__store____Compare____generic_ref_2_0_10001(
#line 162 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 164 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 166 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 168 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 170 "store.c"
  MR_Box mercury__store__wrapper_arg_5);

#line 173 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____io_mutvar_1_0_10001(
#line 176 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 178 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 180 "store.c"
  MR_Box mercury__store__wrapper_arg_3);

#line 183 "store.c"
static void MR_CALL 
mercury__store____Compare____io_mutvar_1_0_10001(
#line 186 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 188 "store.c"
  MR_Box * mercury__store__wrapper_arg_2,
#line 190 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 192 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 195 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____io_ref_2_0_10001(
#line 198 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 200 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 202 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 204 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 207 "store.c"
static void MR_CALL 
mercury__store____Compare____io_ref_2_0_10001(
#line 210 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 212 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 214 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 216 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 218 "store.c"
  MR_Box mercury__store__wrapper_arg_5);

#line 221 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_1_0_10001(
#line 224 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 226 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 228 "store.c"
  MR_Box mercury__store__wrapper_arg_3);

#line 231 "store.c"
static void MR_CALL 
mercury__store____Compare____store_1_0_10001(
#line 234 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 236 "store.c"
  MR_Box * mercury__store__wrapper_arg_2,
#line 238 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 240 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 243 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_mutvar_2_0_10001(
#line 246 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 248 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 250 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 252 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 255 "store.c"
static void MR_CALL 
mercury__store____Compare____store_mutvar_2_0_10001(
#line 258 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 260 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 262 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 264 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 266 "store.c"
  MR_Box mercury__store__wrapper_arg_5);

#line 269 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_ref_2_0_10001(
#line 272 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 274 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 276 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 278 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 281 "store.c"
static void MR_CALL 
mercury__store____Compare____store_ref_2_0_10001(
#line 284 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 286 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 288 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 290 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 292 "store.c"
  MR_Box mercury__store__wrapper_arg_5);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__store_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__store_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__store_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__store_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__store_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__store_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__store_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__store_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__store_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "type_desc.mh"
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
#include "dir.mh"
#include "dir.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 645 "store.c"
static const MR_Integer mercury__store__store__functor_number_map_generic_mutvar_2[1] = {
  (MR_Integer) 0
};

#line 650 "store.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__private_builtin__pti_ref_1__pseudo_1 = {
  &mercury__private_builtin__private_builtin__type_ctor_info_ref_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 658 "store.c"
static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_mutvar_2 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) &mercury__store__private_builtin__pti_ref_1__pseudo_1,
  NULL
};

#line 665 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_generic_mutvar_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__store____Unify____generic_mutvar_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____generic_mutvar_2_0_10001)),
  (MR_String) "store",
  (MR_String) "generic_mutvar",
  {
    &mercury__store__store__notag_functor_desc_generic_mutvar_2
  },
  {
    &mercury__store__store__notag_functor_desc_generic_mutvar_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__store__store__functor_number_map_generic_mutvar_2
};

#line 686 "store.c"
static const MR_Integer mercury__store__store__functor_number_map_generic_ref_2[1] = {
  (MR_Integer) 0
};

#line 691 "store.c"
static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_ref_2 = {
  (MR_String) "ref",
  (MR_PseudoTypeInfo) &mercury__store__private_builtin__pti_ref_1__pseudo_1,
  NULL
};

#line 698 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_generic_ref_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__store____Unify____generic_ref_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____generic_ref_2_0_10001)),
  (MR_String) "store",
  (MR_String) "generic_ref",
  {
    &mercury__store__store__notag_functor_desc_generic_ref_2
  },
  {
    &mercury__store__store__notag_functor_desc_generic_ref_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__store__store__functor_number_map_generic_ref_2
};

#line 719 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__plain_io__type_ctor_info_state_0 = {
  &mercury__store__store__type_ctor_info_generic_mutvar_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 728 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_io_mutvar_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____io_mutvar_1_0_10001)),
  ((MR_Box) (mercury__store____Compare____io_mutvar_1_0_10001)),
  (MR_String) "store",
  (MR_String) "io_mutvar",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__store__store__pti_generic_mutvar_2__pseudo_1__plain_io__type_ctor_info_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 749 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__plain_io__type_ctor_info_state_0 = {
  &mercury__store__store__type_ctor_info_generic_ref_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 758 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_io_ref_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____io_ref_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____io_ref_2_0_10001)),
  (MR_String) "store",
  (MR_String) "io_ref",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__store__store__pti_generic_ref_2__pseudo_1__plain_io__type_ctor_info_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 779 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_store_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__store____Unify____store_1_0_10001)),
  ((MR_Box) (mercury__store____Compare____store_1_0_10001)),
  (MR_String) "store",
  (MR_String) "store",
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

#line 800 "store.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__store__pti_store_1__pseudo_2 = {
  &mercury__store__store__type_ctor_info_store_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 808 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 = {
  &mercury__store__store__type_ctor_info_generic_mutvar_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__store__store__pti_store_1__pseudo_2
  }
};

#line 817 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_store_mutvar_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____store_mutvar_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____store_mutvar_2_0_10001)),
  (MR_String) "store",
  (MR_String) "store_mutvar",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__store__store__pti_generic_mutvar_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 838 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 = {
  &mercury__store__store__type_ctor_info_generic_ref_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__store__store__pti_store_1__pseudo_2
  }
};

#line 847 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_store_ref_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____store_ref_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____store_ref_2_0_10001)),
  (MR_String) "store",
  (MR_String) "store_ref",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__store__store__pti_generic_ref_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 868 "store.c"
const MR_BaseTypeclassInfo base_typeclass_info_store__store__arity1__io__state__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 877 "store.c"
const MR_BaseTypeclassInfo base_typeclass_info_store__store__arity1__store__store__arity1__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 886 "store.c"
static const MR_ConstString mercury__store__store__type_class_id_var_names_store_1[1] = {
  (MR_String) "T"
};

#line 891 "store.c"
static const MR_TypeClassId mercury__store__store__type_class_id_store_1 = {
  (MR_String) "store",
  (MR_String) "store",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__store__store__type_class_id_var_names_store_1,
  NULL
};

#line 902 "store.c"
const MR_TypeClassDeclStruct mercury__store__store__type_class_decl_store_1 = {
  &mercury__store__store__type_class_id_store_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 910 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____generic_mutvar_2_0_10001(
#line 913 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 915 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 917 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 919 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 921 "store.c"
{
#line 923 "store.c"
  {
#line 925 "store.c"
    MR_bool mercury__store__succeeded;

#line 928 "store.c"
    {
#line 930 "store.c"
      mercury__store__succeeded = mercury__store____Unify____generic_mutvar_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 933 "store.c"
    return mercury__store__succeeded;
#line 935 "store.c"
  }
#line 937 "store.c"
}

#line 940 "store.c"
static void MR_CALL 
mercury__store____Compare____generic_mutvar_2_0_10001(
#line 943 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 945 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 947 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 949 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 951 "store.c"
  MR_Box mercury__store__wrapper_arg_5)
#line 953 "store.c"
{
#line 955 "store.c"
  {
#line 957 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 960 "store.c"
    {
#line 962 "store.c"
      mercury__store____Compare____generic_mutvar_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_4), ((MR_Word) mercury__store__wrapper_arg_5));
    }
#line 965 "store.c"
    *mercury__store__wrapper_arg_3 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 967 "store.c"
  }
#line 969 "store.c"
}

#line 972 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____generic_ref_2_0_10001(
#line 975 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 977 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 979 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 981 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 983 "store.c"
{
#line 985 "store.c"
  {
#line 987 "store.c"
    MR_bool mercury__store__succeeded;

#line 990 "store.c"
    {
#line 992 "store.c"
      mercury__store__succeeded = mercury__store____Unify____generic_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 995 "store.c"
    return mercury__store__succeeded;
#line 997 "store.c"
  }
#line 999 "store.c"
}

#line 1002 "store.c"
static void MR_CALL 
mercury__store____Compare____generic_ref_2_0_10001(
#line 1005 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1007 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1009 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 1011 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 1013 "store.c"
  MR_Box mercury__store__wrapper_arg_5)
#line 1015 "store.c"
{
#line 1017 "store.c"
  {
#line 1019 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1022 "store.c"
    {
#line 1024 "store.c"
      mercury__store____Compare____generic_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_4), ((MR_Word) mercury__store__wrapper_arg_5));
    }
#line 1027 "store.c"
    *mercury__store__wrapper_arg_3 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1029 "store.c"
  }
#line 1031 "store.c"
}

#line 1034 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____io_mutvar_1_0_10001(
#line 1037 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1039 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1041 "store.c"
  MR_Box mercury__store__wrapper_arg_3)
#line 1043 "store.c"
{
#line 1045 "store.c"
  {
#line 1047 "store.c"
    MR_bool mercury__store__succeeded;

#line 1050 "store.c"
    {
#line 1052 "store.c"
      mercury__store__succeeded = mercury__store____Unify____io_mutvar_1_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3));
    }
#line 1055 "store.c"
    return mercury__store__succeeded;
#line 1057 "store.c"
  }
#line 1059 "store.c"
}

#line 1062 "store.c"
static void MR_CALL 
mercury__store____Compare____io_mutvar_1_0_10001(
#line 1065 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1067 "store.c"
  MR_Box * mercury__store__wrapper_arg_2,
#line 1069 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 1071 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 1073 "store.c"
{
#line 1075 "store.c"
  {
#line 1077 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1080 "store.c"
    {
#line 1082 "store.c"
      mercury__store____Compare____io_mutvar_1_0(((MR_Word) mercury__store__wrapper_arg_1), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 1085 "store.c"
    *mercury__store__wrapper_arg_2 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1087 "store.c"
  }
#line 1089 "store.c"
}

#line 1092 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____io_ref_2_0_10001(
#line 1095 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1097 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1099 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 1101 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 1103 "store.c"
{
#line 1105 "store.c"
  {
#line 1107 "store.c"
    MR_bool mercury__store__succeeded;

#line 1110 "store.c"
    {
#line 1112 "store.c"
      mercury__store__succeeded = mercury__store____Unify____io_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 1115 "store.c"
    return mercury__store__succeeded;
#line 1117 "store.c"
  }
#line 1119 "store.c"
}

#line 1122 "store.c"
static void MR_CALL 
mercury__store____Compare____io_ref_2_0_10001(
#line 1125 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1127 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1129 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 1131 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 1133 "store.c"
  MR_Box mercury__store__wrapper_arg_5)
#line 1135 "store.c"
{
#line 1137 "store.c"
  {
#line 1139 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1142 "store.c"
    {
#line 1144 "store.c"
      mercury__store____Compare____io_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_4), ((MR_Word) mercury__store__wrapper_arg_5));
    }
#line 1147 "store.c"
    *mercury__store__wrapper_arg_3 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1149 "store.c"
  }
#line 1151 "store.c"
}

#line 1154 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_1_0_10001(
#line 1157 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1159 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1161 "store.c"
  MR_Box mercury__store__wrapper_arg_3)
#line 1163 "store.c"
{
#line 1165 "store.c"
  {
#line 1167 "store.c"
    MR_bool mercury__store__succeeded;

#line 1170 "store.c"
    {
#line 1172 "store.c"
      mercury__store__succeeded = mercury__store____Unify____store_1_0(((MR_Word) mercury__store__wrapper_arg_1));
    }
#line 1175 "store.c"
    return mercury__store__succeeded;
#line 1177 "store.c"
  }
#line 1179 "store.c"
}

#line 1182 "store.c"
static void MR_CALL 
mercury__store____Compare____store_1_0_10001(
#line 1185 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1187 "store.c"
  MR_Box * mercury__store__wrapper_arg_2,
#line 1189 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 1191 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 1193 "store.c"
{
#line 1195 "store.c"
  {
#line 1197 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1200 "store.c"
    {
#line 1202 "store.c"
      mercury__store____Compare____store_1_0(((MR_Word) mercury__store__wrapper_arg_1), &mercury__store__conv0_HeadVar__1_1);
    }
#line 1205 "store.c"
    *mercury__store__wrapper_arg_2 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1207 "store.c"
  }
#line 1209 "store.c"
}

#line 1212 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_mutvar_2_0_10001(
#line 1215 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1217 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1219 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 1221 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 1223 "store.c"
{
#line 1225 "store.c"
  {
#line 1227 "store.c"
    MR_bool mercury__store__succeeded;

#line 1230 "store.c"
    {
#line 1232 "store.c"
      mercury__store__succeeded = mercury__store____Unify____store_mutvar_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 1235 "store.c"
    return mercury__store__succeeded;
#line 1237 "store.c"
  }
#line 1239 "store.c"
}

#line 1242 "store.c"
static void MR_CALL 
mercury__store____Compare____store_mutvar_2_0_10001(
#line 1245 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1247 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1249 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 1251 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 1253 "store.c"
  MR_Box mercury__store__wrapper_arg_5)
#line 1255 "store.c"
{
#line 1257 "store.c"
  {
#line 1259 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1262 "store.c"
    {
#line 1264 "store.c"
      mercury__store____Compare____store_mutvar_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_4), ((MR_Word) mercury__store__wrapper_arg_5));
    }
#line 1267 "store.c"
    *mercury__store__wrapper_arg_3 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1269 "store.c"
  }
#line 1271 "store.c"
}

#line 1274 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_ref_2_0_10001(
#line 1277 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1279 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1281 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 1283 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 1285 "store.c"
{
#line 1287 "store.c"
  {
#line 1289 "store.c"
    MR_bool mercury__store__succeeded;

#line 1292 "store.c"
    {
#line 1294 "store.c"
      mercury__store__succeeded = mercury__store____Unify____store_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 1297 "store.c"
    return mercury__store__succeeded;
#line 1299 "store.c"
  }
#line 1301 "store.c"
}

#line 1304 "store.c"
static void MR_CALL 
mercury__store____Compare____store_ref_2_0_10001(
#line 1307 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1309 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1311 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 1313 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 1315 "store.c"
  MR_Box mercury__store__wrapper_arg_5)
#line 1317 "store.c"
{
#line 1319 "store.c"
  {
#line 1321 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1324 "store.c"
    {
#line 1326 "store.c"
      mercury__store____Compare____store_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_4), ((MR_Word) mercury__store__wrapper_arg_5));
    }
#line 1329 "store.c"
    *mercury__store__wrapper_arg_3 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1331 "store.c"
  }
#line 1333 "store.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__store__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 263 "store.m"
void MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 263 "store.m"
  MR_Word * mercury__store__HeadVar__1_1)
#line 263 "store.m"
{
#line 263 "store.m"
  {
#line 263 "store.m"
    MR_bool mercury__store__succeeded;

#line 263 "store.m"
    *mercury__store__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "store.m"
  }
#line 263 "store.m"
}

#line 263 "store.m"
MR_bool MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 263 "store.m"
{
#line 263 "store.m"
  {
#line 263 "store.m"
    return MR_TRUE;
#line 263 "store.m"
  }
#line 263 "store.m"
}

#line 128 "store.m"
void MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_3_p_0(
#line 128 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 128 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 128 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 128 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 128 "store.m"
{
#line 128 "store.m"
  {
#line 128 "store.m"
    MR_bool mercury__store__succeeded;
#line 128 "store.m"
    MR_Word mercury__store__TypeCtorInfo_8_8 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 128 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_4 = mercury__store__HeadVar__2_2;
#line 128 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_5 = mercury__store__HeadVar__3_3;

#line 128 "store.m"
    {
#line 128 "store.m"
      mercury__store____Compare____generic_ref_2_0(mercury__store__TypeInfo_for_T_6, mercury__store__TypeCtorInfo_8_8, mercury__store__HeadVar__1_1, mercury__store__Cast_HeadVar1_4, mercury__store__Cast_HeadVar2_5);
#line 128 "store.m"
      return;
    }
#line 128 "store.m"
  }
#line 128 "store.m"
}

#line 128 "store.m"
MR_bool MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_2_p_0(
#line 128 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 128 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 128 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 128 "store.m"
{
#line 128 "store.m"
  {
#line 128 "store.m"
    MR_bool mercury__store__succeeded;
#line 128 "store.m"
    MR_Word mercury__store__TypeCtorInfo_7_7 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 128 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_3 = mercury__store__HeadVar__1_1;
#line 128 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_4 = mercury__store__HeadVar__2_2;

#line 128 "store.m"
    {
#line 128 "store.m"
      return mercury__store__succeeded = mercury__store____Unify____generic_ref_2_0(mercury__store__TypeInfo_for_T_5, mercury__store__TypeCtorInfo_7_7, mercury__store__Cast_HeadVar1_3, mercury__store__Cast_HeadVar2_4);
    }
#line 128 "store.m"
    return mercury__store__succeeded;
#line 128 "store.m"
  }
#line 128 "store.m"
}

#line 271 "store.m"
void MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 271 "store.m"
  MR_Word * mercury__store__HeadVar__1_4)
#line 271 "store.m"
{
#line 274 "store.m"
  {
#line 274 "store.m"
    MR_bool mercury__store__succeeded;

#line 275 "store.m"
    {
#line 275 "store.m"
      mercury__require__error_1_p_0((MR_String) "attempt to compare two stores");
#line 275 "store.m"
      return;
    }
#line 274 "store.m"
  }
#line 271 "store.m"
}

#line 266 "store.m"
MR_bool MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 266 "store.m"
{
#line 268 "store.m"
  {
#line 269 "store.m"
    {
#line 269 "store.m"
      mercury__require__error_1_p_0((MR_String) "attempt to unify two stores");
    }
#line 268 "store.m"
    return MR_TRUE;
#line 268 "store.m"
  }
#line 266 "store.m"
}

#line 129 "store.m"
void MR_CALL 
mercury__store____Compare____store_ref_2_0(
#line 129 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 129 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_7,
#line 129 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 129 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 129 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 129 "store.m"
{
#line 129 "store.m"
  {
#line 129 "store.m"
    MR_bool mercury__store__succeeded;
#line 129 "store.m"
    MR_Word mercury__store__TypeCtorInfo_8_8 = (MR_Word) &mercury__store__store__type_ctor_info_store_1;
#line 129 "store.m"
    MR_Word mercury__store__TypeInfo_9_9;
#line 129 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_4 = mercury__store__HeadVar__2_2;
#line 129 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_5 = mercury__store__HeadVar__3_3;

#line 1527 "store.c"
    {
#line 1529 "store.c"
      mercury__store__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1531 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_9_9, 0) = ((MR_Box) (mercury__store__TypeCtorInfo_8_8));
#line 1533 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_9_9, 1) = ((MR_Box) (mercury__store__TypeInfo_for_S_7));
#line 1535 "store.c"
    }
#line 129 "store.m"
    {
#line 129 "store.m"
      mercury__store____Compare____generic_ref_2_0(mercury__store__TypeInfo_for_T_6, mercury__store__TypeInfo_9_9, mercury__store__HeadVar__1_1, (MR_Word) mercury__store__Cast_HeadVar1_4, (MR_Word) mercury__store__Cast_HeadVar2_5);
#line 129 "store.m"
      return;
    }
#line 129 "store.m"
  }
#line 129 "store.m"
}

#line 129 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____store_ref_2_0(
#line 129 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 129 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_6,
#line 129 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 129 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 129 "store.m"
{
#line 129 "store.m"
  {
#line 129 "store.m"
    MR_bool mercury__store__succeeded;
#line 129 "store.m"
    MR_Word mercury__store__TypeCtorInfo_7_7 = (MR_Word) &mercury__store__store__type_ctor_info_store_1;
#line 129 "store.m"
    MR_Word mercury__store__TypeInfo_8_8;
#line 129 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_3 = mercury__store__HeadVar__1_1;
#line 129 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_4 = mercury__store__HeadVar__2_2;

#line 1575 "store.c"
    {
#line 1577 "store.c"
      mercury__store__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1579 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_8_8, 0) = ((MR_Box) (mercury__store__TypeCtorInfo_7_7));
#line 1581 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_8_8, 1) = ((MR_Box) (mercury__store__TypeInfo_for_S_6));
#line 1583 "store.c"
    }
#line 129 "store.m"
    {
#line 129 "store.m"
      return mercury__store__succeeded = mercury__store____Unify____generic_ref_2_0(mercury__store__TypeInfo_for_T_5, mercury__store__TypeInfo_8_8, (MR_Word) mercury__store__Cast_HeadVar1_3, (MR_Word) mercury__store__Cast_HeadVar2_4);
    }
#line 129 "store.m"
    return mercury__store__succeeded;
#line 129 "store.m"
  }
#line 129 "store.m"
}

#line 69 "store.m"
void MR_CALL 
mercury__store____Compare____store_mutvar_2_0(
#line 69 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 69 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_7,
#line 69 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 69 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 69 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 69 "store.m"
{
#line 69 "store.m"
  {
#line 69 "store.m"
    MR_bool mercury__store__succeeded;
#line 69 "store.m"
    MR_Word mercury__store__TypeCtorInfo_8_8 = (MR_Word) &mercury__store__store__type_ctor_info_store_1;
#line 69 "store.m"
    MR_Word mercury__store__TypeInfo_9_9;
#line 69 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_4 = mercury__store__HeadVar__2_2;
#line 69 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_5 = mercury__store__HeadVar__3_3;

#line 1625 "store.c"
    {
#line 1627 "store.c"
      mercury__store__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1629 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_9_9, 0) = ((MR_Box) (mercury__store__TypeCtorInfo_8_8));
#line 1631 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_9_9, 1) = ((MR_Box) (mercury__store__TypeInfo_for_S_7));
#line 1633 "store.c"
    }
#line 69 "store.m"
    {
#line 69 "store.m"
      mercury__store____Compare____generic_mutvar_2_0(mercury__store__TypeInfo_for_T_6, mercury__store__TypeInfo_9_9, mercury__store__HeadVar__1_1, (MR_Word) mercury__store__Cast_HeadVar1_4, (MR_Word) mercury__store__Cast_HeadVar2_5);
#line 69 "store.m"
      return;
    }
#line 69 "store.m"
  }
#line 69 "store.m"
}

#line 69 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____store_mutvar_2_0(
#line 69 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 69 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_6,
#line 69 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 69 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 69 "store.m"
{
#line 69 "store.m"
  {
#line 69 "store.m"
    MR_bool mercury__store__succeeded;
#line 69 "store.m"
    MR_Word mercury__store__TypeCtorInfo_7_7 = (MR_Word) &mercury__store__store__type_ctor_info_store_1;
#line 69 "store.m"
    MR_Word mercury__store__TypeInfo_8_8;
#line 69 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_3 = mercury__store__HeadVar__1_1;
#line 69 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_4 = mercury__store__HeadVar__2_2;

#line 1673 "store.c"
    {
#line 1675 "store.c"
      mercury__store__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1677 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_8_8, 0) = ((MR_Box) (mercury__store__TypeCtorInfo_7_7));
#line 1679 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_8_8, 1) = ((MR_Box) (mercury__store__TypeInfo_for_S_6));
#line 1681 "store.c"
    }
#line 69 "store.m"
    {
#line 69 "store.m"
      return mercury__store__succeeded = mercury__store____Unify____generic_mutvar_2_0(mercury__store__TypeInfo_for_T_5, mercury__store__TypeInfo_8_8, (MR_Word) mercury__store__Cast_HeadVar1_3, (MR_Word) mercury__store__Cast_HeadVar2_4);
    }
#line 69 "store.m"
    return mercury__store__succeeded;
#line 69 "store.m"
  }
#line 69 "store.m"
}

#line 263 "store.m"
void MR_CALL 
mercury__store____Compare____store_1_0(
#line 263 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_4,
#line 263 "store.m"
  MR_Word * mercury__store__HeadVar__1_1)
#line 263 "store.m"
{
#line 263 "store.m"
  {
#line 263 "store.m"
    MR_bool mercury__store__succeeded;

#line 263 "store.m"
    {
#line 263 "store.m"
      mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__store__HeadVar__1_1);
#line 263 "store.m"
      return;
    }
#line 263 "store.m"
  }
#line 263 "store.m"
}

#line 263 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____store_1_0(
#line 263 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_3)
#line 263 "store.m"
{
#line 263 "store.m"
  {
#line 263 "store.m"
    MR_bool mercury__store__succeeded;

#line 263 "store.m"
    {
#line 263 "store.m"
      return mercury__store__succeeded = mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 263 "store.m"
    return mercury__store__succeeded;
#line 263 "store.m"
  }
#line 263 "store.m"
}

#line 128 "store.m"
void MR_CALL 
mercury__store____Compare____io_ref_2_0(
#line 128 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 128 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_7,
#line 128 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 128 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 128 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 128 "store.m"
{
#line 128 "store.m"
  {
#line 128 "store.m"
    MR_bool mercury__store__succeeded;

#line 128 "store.m"
    {
#line 128 "store.m"
      mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_3_p_0(mercury__store__TypeInfo_for_T_6, mercury__store__HeadVar__1_1, mercury__store__HeadVar__2_2, mercury__store__HeadVar__3_3);
#line 128 "store.m"
      return;
    }
#line 128 "store.m"
  }
#line 128 "store.m"
}

#line 128 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____io_ref_2_0(
#line 128 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 128 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_6,
#line 128 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 128 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 128 "store.m"
{
#line 128 "store.m"
  {
#line 128 "store.m"
    MR_bool mercury__store__succeeded;

#line 128 "store.m"
    {
#line 128 "store.m"
      return mercury__store__succeeded = mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_2_p_0(mercury__store__TypeInfo_for_T_5, mercury__store__HeadVar__1_1, mercury__store__HeadVar__2_2);
    }
#line 128 "store.m"
    return mercury__store__succeeded;
#line 128 "store.m"
  }
#line 128 "store.m"
}

#line 68 "store.m"
void MR_CALL 
mercury__store____Compare____io_mutvar_1_0(
#line 68 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 68 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 68 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 68 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 68 "store.m"
{
#line 68 "store.m"
  {
#line 68 "store.m"
    MR_bool mercury__store__succeeded;
#line 68 "store.m"
    MR_Word mercury__store__TypeCtorInfo_7_7 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 68 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_4 = mercury__store__HeadVar__2_2;
#line 68 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_5 = mercury__store__HeadVar__3_3;

#line 68 "store.m"
    {
#line 68 "store.m"
      mercury__store____Compare____generic_mutvar_2_0(mercury__store__TypeInfo_for_T_6, mercury__store__TypeCtorInfo_7_7, mercury__store__HeadVar__1_1, mercury__store__Cast_HeadVar1_4, mercury__store__Cast_HeadVar2_5);
#line 68 "store.m"
      return;
    }
#line 68 "store.m"
  }
#line 68 "store.m"
}

#line 68 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____io_mutvar_1_0(
#line 68 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 68 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 68 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 68 "store.m"
{
#line 68 "store.m"
  {
#line 68 "store.m"
    MR_bool mercury__store__succeeded;
#line 68 "store.m"
    MR_Word mercury__store__TypeCtorInfo_6_6 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 68 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_3 = mercury__store__HeadVar__1_1;
#line 68 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_4 = mercury__store__HeadVar__2_2;

#line 68 "store.m"
    {
#line 68 "store.m"
      return mercury__store__succeeded = mercury__store____Unify____generic_mutvar_2_0(mercury__store__TypeInfo_for_T_5, mercury__store__TypeCtorInfo_6_6, mercury__store__Cast_HeadVar1_3, mercury__store__Cast_HeadVar2_4);
    }
#line 68 "store.m"
    return mercury__store__succeeded;
#line 68 "store.m"
  }
#line 68 "store.m"
}

#line 515 "store.m"
void MR_CALL 
mercury__store____Compare____generic_ref_2_0(
#line 515 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_8,
#line 515 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_9,
#line 515 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 515 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 515 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 515 "store.m"
{
#line 515 "store.m"
  {
#line 515 "store.m"
    MR_bool mercury__store__succeeded;
#line 515 "store.m"
    MR_Integer mercury__store__CastX_6 = (MR_Integer) mercury__store__HeadVar__2_2;
#line 515 "store.m"
    MR_Integer mercury__store__CastY_7 = (MR_Integer) mercury__store__HeadVar__3_3;

#line 515 "store.m"
    mercury__store__succeeded = (mercury__store__CastX_6 == mercury__store__CastY_7);
#line 515 "store.m"
    if (mercury__store__succeeded)
#line 1905 "store.c"
      *mercury__store__HeadVar__1_1 = (MR_Integer) 0;
#line 515 "store.m"
    else
#line 515 "store.m"
      {
#line 515 "store.m"
        MR_Word mercury__store__V_4_4 = (MR_Word) mercury__store__HeadVar__2_2;
#line 515 "store.m"
        MR_Word mercury__store__V_5_5 = (MR_Word) mercury__store__HeadVar__3_3;

#line 515 "store.m"
        {
#line 515 "store.m"
          mercury__private_builtin____Compare____ref_1_0(mercury__store__TypeInfo_for_T_8, mercury__store__HeadVar__1_1, mercury__store__V_4_4, mercury__store__V_5_5);
#line 515 "store.m"
          return;
        }
#line 515 "store.m"
      }
#line 515 "store.m"
  }
#line 515 "store.m"
}

#line 515 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____generic_ref_2_0(
#line 515 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 515 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_8,
#line 515 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 515 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 515 "store.m"
{
#line 515 "store.m"
  {
#line 515 "store.m"
    MR_bool mercury__store__succeeded;
#line 515 "store.m"
    MR_Integer mercury__store__CastX_5 = (MR_Integer) mercury__store__HeadVar__1_1;
#line 515 "store.m"
    MR_Integer mercury__store__CastY_6 = (MR_Integer) mercury__store__HeadVar__2_2;

#line 515 "store.m"
    mercury__store__succeeded = (mercury__store__CastX_5 == mercury__store__CastY_6);
#line 515 "store.m"
    if (mercury__store__succeeded)
#line 515 "store.m"
      mercury__store__succeeded = MR_TRUE;
#line 515 "store.m"
    else
#line 515 "store.m"
      {
#line 515 "store.m"
        MR_Word mercury__store__V_3_3 = (MR_Word) mercury__store__HeadVar__1_1;
#line 515 "store.m"
        MR_Word mercury__store__V_4_4 = (MR_Word) mercury__store__HeadVar__2_2;

#line 1967 "store.c"
        {
#line 1969 "store.c"
          return mercury__store__succeeded = mercury__private_builtin____Unify____ref_1_0(mercury__store__TypeInfo_for_T_7, mercury__store__V_3_3, mercury__store__V_4_4);
        }
#line 515 "store.m"
      }
#line 515 "store.m"
    return mercury__store__succeeded;
#line 515 "store.m"
  }
#line 515 "store.m"
}

#line 406 "store.m"
void MR_CALL 
mercury__store____Compare____generic_mutvar_2_0(
#line 406 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_8,
#line 406 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_9,
#line 406 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 406 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 406 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 406 "store.m"
{
#line 406 "store.m"
  {
#line 406 "store.m"
    MR_bool mercury__store__succeeded;
#line 406 "store.m"
    MR_Integer mercury__store__CastX_6 = (MR_Integer) mercury__store__HeadVar__2_2;
#line 406 "store.m"
    MR_Integer mercury__store__CastY_7 = (MR_Integer) mercury__store__HeadVar__3_3;

#line 406 "store.m"
    mercury__store__succeeded = (mercury__store__CastX_6 == mercury__store__CastY_7);
#line 406 "store.m"
    if (mercury__store__succeeded)
#line 2009 "store.c"
      *mercury__store__HeadVar__1_1 = (MR_Integer) 0;
#line 406 "store.m"
    else
#line 406 "store.m"
      {
#line 406 "store.m"
        MR_Word mercury__store__V_4_4 = (MR_Word) mercury__store__HeadVar__2_2;
#line 406 "store.m"
        MR_Word mercury__store__V_5_5 = (MR_Word) mercury__store__HeadVar__3_3;

#line 406 "store.m"
        {
#line 406 "store.m"
          mercury__private_builtin____Compare____ref_1_0(mercury__store__TypeInfo_for_T_8, mercury__store__HeadVar__1_1, mercury__store__V_4_4, mercury__store__V_5_5);
#line 406 "store.m"
          return;
        }
#line 406 "store.m"
      }
#line 406 "store.m"
  }
#line 406 "store.m"
}

#line 406 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____generic_mutvar_2_0(
#line 406 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 406 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_8,
#line 406 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 406 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 406 "store.m"
{
#line 406 "store.m"
  {
#line 406 "store.m"
    MR_bool mercury__store__succeeded;
#line 406 "store.m"
    MR_Integer mercury__store__CastX_5 = (MR_Integer) mercury__store__HeadVar__1_1;
#line 406 "store.m"
    MR_Integer mercury__store__CastY_6 = (MR_Integer) mercury__store__HeadVar__2_2;

#line 406 "store.m"
    mercury__store__succeeded = (mercury__store__CastX_5 == mercury__store__CastY_6);
#line 406 "store.m"
    if (mercury__store__succeeded)
#line 406 "store.m"
      mercury__store__succeeded = MR_TRUE;
#line 406 "store.m"
    else
#line 406 "store.m"
      {
#line 406 "store.m"
        MR_Word mercury__store__V_3_3 = (MR_Word) mercury__store__HeadVar__1_1;
#line 406 "store.m"
        MR_Word mercury__store__V_4_4 = (MR_Word) mercury__store__HeadVar__2_2;

#line 2071 "store.c"
        {
#line 2073 "store.c"
          return mercury__store__succeeded = mercury__private_builtin____Unify____ref_1_0(mercury__store__TypeInfo_for_T_7, mercury__store__V_3_3, mercury__store__V_4_4);
        }
#line 406 "store.m"
      }
#line 406 "store.m"
    return mercury__store__succeeded;
#line 406 "store.m"
  }
#line 406 "store.m"
}

#line 639 "store.m"
void MR_CALL 
mercury__store__unsafe_ref_value_4_p_0(
#line 639 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 639 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_5,
#line 639 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 639 "store.m"
  MR_Box * mercury__store__HeadVar__2_2,
#line 639 "store.m"
  MR_Box mercury__store__HeadVar__3_3,
#line 639 "store.m"
  MR_Box * mercury__store__HeadVar__4_4)
#line 639 "store.m"
{
#line 642 "store.m"
  {
#line 642 "store.m"
    MR_bool mercury__store__succeeded;
#line 642 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 642 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 645 "store.m"
{
#define MR_PROC_LABEL mercury__store__unsafe_ref_value_4_p_0

	MR_Word Ref;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Ref =  mercury__store__HeadVar__1_1 ;
	S0 = (MR_Word) mercury__store__HeadVar__3_3 ;
		{
#line 645 "store.m"

    Val = * (MR_Word *) Ref;
    S = S0;

#line 2128 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__2_2  = (MR_Box) Val;
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 645 "store.m"
}
#line 642 "store.m"
  }
#line 639 "store.m"
}

#line 437 "store.m"
void MR_CALL 
mercury__store__unsafe_new_uninitialized_mutvar_3_p_0(
#line 437 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 437 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_4,
#line 437 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 437 "store.m"
  MR_Box mercury__store__HeadVar__2_2,
#line 437 "store.m"
  MR_Box * mercury__store__HeadVar__3_3)
#line 437 "store.m"
{
#line 440 "store.m"
  {
#line 440 "store.m"
    MR_bool mercury__store__succeeded;
#line 440 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_6;
#line 440 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_7;

#line 443 "store.m"
{
#define MR_PROC_LABEL mercury__store__unsafe_new_uninitialized_mutvar_3_p_0

	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) mercury__store__HeadVar__2_2 ;
		{
#line 443 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    S = S0;

#line 2182 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__1_1  = Mutvar;
	 *mercury__store__HeadVar__3_3  = (MR_Box) S;
#line 443 "store.m"
}
#line 440 "store.m"
  }
#line 437 "store.m"
}

#line 288 "store.m"
void MR_CALL 
mercury__store__do_init_1_p_0(
#line 288 "store.m"
  MR_Word * mercury__store__TypeInfo_for_S_2)
#line 288 "store.m"
{
#line 290 "store.m"
  {
#line 290 "store.m"
    MR_bool mercury__store__succeeded;

#line 293 "store.m"
{
#define MR_PROC_LABEL mercury__store__do_init_1_p_0

	MR_Word TypeInfo_for_S;

		{
#line 293 "store.m"

    TypeInfo_for_S = 0;

#line 2218 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__TypeInfo_for_S_2  = TypeInfo_for_S;
#line 293 "store.m"
}
#line 290 "store.m"
  }
#line 288 "store.m"
}

#line 271 "store.m"
void MR_CALL 
mercury__store__store_compare_3_p_0(
#line 271 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_8,
#line 271 "store.m"
  MR_Word * mercury__store__HeadVar__1_4)
#line 271 "store.m"
{
#line 274 "store.m"
  {
#line 274 "store.m"
    MR_bool mercury__store__succeeded;

#line 274 "store.m"
    {
#line 274 "store.m"
      mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__store__HeadVar__1_4);
#line 274 "store.m"
      return;
    }
#line 274 "store.m"
  }
#line 271 "store.m"
}

#line 266 "store.m"
MR_bool MR_CALL 
mercury__store__store_equal_2_p_0(
#line 266 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_6)
#line 266 "store.m"
{
#line 268 "store.m"
  {
#line 268 "store.m"
    MR_bool mercury__store__succeeded;

#line 268 "store.m"
    {
#line 268 "store.m"
      return mercury__store__succeeded = mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 268 "store.m"
    return mercury__store__succeeded;
#line 268 "store.m"
  }
#line 266 "store.m"
}

#line 237 "store.m"
void MR_CALL 
mercury__store__unsafe_new_arg_ref_5_p_0(
#line 237 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 237 "store.m"
  MR_Word mercury__store__TypeInfo_for_ArgT_8,
#line 237 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_6,
#line 237 "store.m"
  MR_Box mercury__store__HeadVar__1_1,
#line 237 "store.m"
  MR_Integer mercury__store__HeadVar__2_2,
#line 237 "store.m"
  MR_Word * mercury__store__HeadVar__3_3,
#line 237 "store.m"
  MR_Box mercury__store__HeadVar__4_4,
#line 237 "store.m"
  MR_Box * mercury__store__HeadVar__5_5)
#line 237 "store.m"
{
#line 914 "store.m"
  {
#line 914 "store.m"
    MR_bool mercury__store__succeeded;
#line 914 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_9;
#line 914 "store.m"
    MR_Word mercury__store__TypeInfo_for_ArgT_10;
#line 914 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_11;

#line 917 "store.m"
{
#define MR_PROC_LABEL mercury__store__unsafe_new_arg_ref_5_p_0

	MR_Word Val;
	MR_Integer Arg;
	MR_Word ArgRef;
	MR_Word S0;
	MR_Word S;

	Val = (MR_Word) mercury__store__HeadVar__1_1 ;
	Arg =  mercury__store__HeadVar__2_2 ;
	S0 = (MR_Word) mercury__store__HeadVar__4_4 ;
		{
#line 917 "store.m"
{
    /* unsafe - does not check type & arity, won't handle no_tag types */
    MR_Word *Ptr;

    Ptr = (MR_Word *) MR_strip_tag((MR_Word) Val);
    ArgRef = (MR_Word) &Ptr[Arg];
    S = S0;
}
#line 2335 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__3_3  = ArgRef;
	 *mercury__store__HeadVar__5_5  = (MR_Box) S;
#line 917 "store.m"
}
#line 914 "store.m"
  }
#line 237 "store.m"
}

#line 234 "store.m"
void MR_CALL 
mercury__store__unsafe_arg_ref_5_p_0(
#line 234 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 234 "store.m"
  MR_Word mercury__store__TypeInfo_for_ArgT_8,
#line 234 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_6,
#line 234 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 234 "store.m"
  MR_Integer mercury__store__HeadVar__2_2,
#line 234 "store.m"
  MR_Word * mercury__store__HeadVar__3_3,
#line 234 "store.m"
  MR_Box mercury__store__HeadVar__4_4,
#line 234 "store.m"
  MR_Box * mercury__store__HeadVar__5_5)
#line 234 "store.m"
{
#line 888 "store.m"
  {
#line 888 "store.m"
    MR_bool mercury__store__succeeded;
#line 888 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_9;
#line 888 "store.m"
    MR_Word mercury__store__TypeInfo_for_ArgT_10;
#line 888 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_11;

#line 891 "store.m"
{
#define MR_PROC_LABEL mercury__store__unsafe_arg_ref_5_p_0

	MR_Word Ref;
	MR_Integer Arg;
	MR_Word ArgRef;
	MR_Word S0;
	MR_Word S;

	Ref =  mercury__store__HeadVar__1_1 ;
	Arg =  mercury__store__HeadVar__2_2 ;
	S0 = (MR_Word) mercury__store__HeadVar__4_4 ;
		{
#line 891 "store.m"
{
    /* unsafe - does not check type & arity, won't handle no_tag types */
    MR_Word *Ptr;

    Ptr = (MR_Word *) MR_strip_tag((MR_Word) Ref);
    ArgRef = (MR_Word) &Ptr[Arg];
    S = S0;
}
#line 2403 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__3_3  = ArgRef;
	 *mercury__store__HeadVar__5_5  = (MR_Box) S;
#line 891 "store.m"
}
#line 888 "store.m"
  }
#line 234 "store.m"
}

#line 207 "store.m"
void MR_CALL 
mercury__store__extract_ref_value_3_p_0(
#line 207 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 207 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_4,
#line 207 "store.m"
  MR_Box mercury__store__HeadVar__1_1,
#line 207 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 207 "store.m"
  MR_Box * mercury__store__HeadVar__3_3)
#line 207 "store.m"
{
#line 865 "store.m"
  {
#line 865 "store.m"
    MR_bool mercury__store__succeeded;
#line 865 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_6;
#line 865 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_7;

#line 868 "store.m"
{
#define MR_PROC_LABEL mercury__store__extract_ref_value_3_p_0

	MR_Word Ref;
	MR_Word Val;

	Ref =  mercury__store__HeadVar__2_2 ;
		{
#line 868 "store.m"

    Val = * (MR_Word *) Ref;

#line 2453 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__3_3  = (MR_Box) Val;
#line 868 "store.m"
}
#line 865 "store.m"
  }
#line 207 "store.m"
}

#line 202 "store.m"
void MR_CALL 
mercury__store__copy_ref_value_4_p_0(
#line 202 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_10,
#line 202 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_9,
#line 202 "store.m"
  MR_Word mercury__store__Ref_5,
#line 202 "store.m"
  MR_Box * mercury__store__Val_6,
#line 202 "store.m"
  MR_Box mercury__store__DCG_0_7,
#line 202 "store.m"
  MR_Box * mercury__store__DCG_1_8)
#line 202 "store.m"
{
#line 642 "store.m"
  {
#line 642 "store.m"
    MR_bool mercury__store__succeeded;
#line 642 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_11;
#line 642 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_12;

#line 645 "store.m"
{
#define MR_PROC_LABEL mercury__store__copy_ref_value_4_p_0

	MR_Word Ref;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Ref =  mercury__store__Ref_5 ;
	S0 = (MR_Word) mercury__store__DCG_0_7 ;
		{
#line 645 "store.m"

    Val = * (MR_Word *) Ref;
    S = S0;

#line 2508 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__Val_6  = (MR_Box) Val;
	 *mercury__store__DCG_1_8  = (MR_Box) S;
#line 645 "store.m"
}
#line 642 "store.m"
  }
#line 202 "store.m"
}

#line 193 "store.m"
void MR_CALL 
mercury__store__set_ref_value_4_p_0(
#line 193 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 193 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_5,
#line 193 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 193 "store.m"
  MR_Box mercury__store__HeadVar__2_2,
#line 193 "store.m"
  MR_Box mercury__store__HeadVar__3_3,
#line 193 "store.m"
  MR_Box * mercury__store__HeadVar__4_4)
#line 193 "store.m"
{
#line 850 "store.m"
  {
#line 850 "store.m"
    MR_bool mercury__store__succeeded;
#line 850 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 850 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 853 "store.m"
{
#define MR_PROC_LABEL mercury__store__set_ref_value_4_p_0

	MR_Word Ref;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Ref =  mercury__store__HeadVar__1_1 ;
	Val = (MR_Word) mercury__store__HeadVar__2_2 ;
	S0 = (MR_Word) mercury__store__HeadVar__3_3 ;
		{
#line 853 "store.m"

    * (MR_Word *) Ref = Val;
    S = S0;

#line 2565 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 853 "store.m"
}
#line 850 "store.m"
  }
#line 193 "store.m"
}

#line 183 "store.m"
void MR_CALL 
mercury__store__set_ref_4_p_0(
#line 183 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 183 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_5,
#line 183 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 183 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 183 "store.m"
  MR_Box mercury__store__HeadVar__3_3,
#line 183 "store.m"
  MR_Box * mercury__store__HeadVar__4_4)
#line 183 "store.m"
{
#line 828 "store.m"
  {
#line 828 "store.m"
    MR_bool mercury__store__succeeded;
#line 828 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 828 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 831 "store.m"
{
#define MR_PROC_LABEL mercury__store__set_ref_4_p_0

	MR_Word Ref;
	MR_Word ValRef;
	MR_Word S0;
	MR_Word S;

	Ref =  mercury__store__HeadVar__1_1 ;
	ValRef =  mercury__store__HeadVar__2_2 ;
	S0 = (MR_Word) mercury__store__HeadVar__3_3 ;
		{
#line 831 "store.m"

    * (MR_Word *) Ref = * (MR_Word *) ValRef;
    S = S0;

#line 2621 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 831 "store.m"
}
#line 828 "store.m"
  }
#line 183 "store.m"
}

#line 172 "store.m"
void MR_CALL 
mercury__store__new_arg_ref_5_p_0(
#line 172 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 172 "store.m"
  MR_Word mercury__store__TypeInfo_for_ArgT_8,
#line 172 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_6,
#line 172 "store.m"
  MR_Box mercury__store__HeadVar__1_1,
#line 172 "store.m"
  MR_Integer mercury__store__HeadVar__2_2,
#line 172 "store.m"
  MR_Word * mercury__store__HeadVar__3_3,
#line 172 "store.m"
  MR_Box mercury__store__HeadVar__4_4,
#line 172 "store.m"
  MR_Box * mercury__store__HeadVar__5_5)
#line 172 "store.m"
{
#line 750 "store.m"
  {
#line 750 "store.m"
    MR_bool mercury__store__succeeded;
#line 750 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_9;

#line 753 "store.m"
{
#define MR_PROC_LABEL mercury__store__new_arg_ref_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_for_ArgT;
	MR_Word Val;
	MR_Integer ArgNum;
	MR_Word ArgRef;
	MR_Word S0;
	MR_Word S;

	TypeInfo_for_T =  mercury__store__TypeInfo_for_T_7 ;
	TypeInfo_for_ArgT =  mercury__store__TypeInfo_for_ArgT_8 ;
	Val = (MR_Word) mercury__store__HeadVar__1_1 ;
	ArgNum =  mercury__store__HeadVar__2_2 ;
	S0 = (MR_Word) mercury__store__HeadVar__4_4 ;
		{
#line 753 "store.m"
{
    MR_TypeInfo         type_info;
    MR_TypeInfo         arg_type_info;
    MR_TypeInfo         exp_arg_type_info;
    MR_Word             *arg_ref;
    const MR_DuArgLocn  *arg_locn;

    type_info = (MR_TypeInfo) TypeInfo_for_T;
    exp_arg_type_info = (MR_TypeInfo) TypeInfo_for_ArgT;

    MR_save_transient_registers();

    if (!MR_arg(type_info, (MR_Word *) &Val, ArgNum, &arg_type_info,
        &arg_ref, &arg_locn, MR_NONCANON_ABORT))
    {
        MR_fatal_error("store.new_arg_ref: argument number out of range");
    }

    if (MR_compare_type_info(arg_type_info, exp_arg_type_info) !=
        MR_COMPARE_EQUAL)
    {
        MR_fatal_error("store.new_arg_ref: argument has wrong type");
    }

    MR_restore_transient_registers();

    if (arg_locn != NULL && arg_locn->MR_arg_bits != 0) {
        MR_offset_incr_hp_msg(ArgRef, MR_SIZE_SLOT_SIZE,
            MR_SIZE_SLOT_SIZE + 1, MR_ALLOC_ID, "store.ref/2");
        MR_define_size_slot(0, ArgRef, 1);
        * (MR_Word *) ArgRef = MR_arg_value(arg_ref, arg_locn);
    } else if (arg_ref == &Val) {
        /*
        ** For no_tag types, the argument may have the same address as the
        ** term.  Since the term (Val) is currently on the C stack, we can't
        ** return a pointer to it; so if that is the case, then we need
        ** to copy it to the heap before returning.
        */

        MR_offset_incr_hp_msg(ArgRef, MR_SIZE_SLOT_SIZE,
            MR_SIZE_SLOT_SIZE + 1, MR_ALLOC_ID, "store.ref/2");
        MR_define_size_slot(0, ArgRef, 1);
        * (MR_Word *) ArgRef = Val;
    } else {
        ArgRef = (MR_Word) arg_ref;
    }
    S = S0;
}
#line 2728 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__3_3  = ArgRef;
	 *mercury__store__HeadVar__5_5  = (MR_Box) S;
#line 753 "store.m"
}
#line 750 "store.m"
  }
#line 172 "store.m"
}

#line 161 "store.m"
void MR_CALL 
mercury__store__arg_ref_5_p_0(
#line 161 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 161 "store.m"
  MR_Word mercury__store__TypeInfo_for_ArgT_8,
#line 161 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_6,
#line 161 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 161 "store.m"
  MR_Integer mercury__store__HeadVar__2_2,
#line 161 "store.m"
  MR_Word * mercury__store__HeadVar__3_3,
#line 161 "store.m"
  MR_Box mercury__store__HeadVar__4_4,
#line 161 "store.m"
  MR_Box * mercury__store__HeadVar__5_5)
#line 161 "store.m"
{
#line 684 "store.m"
  {
#line 684 "store.m"
    MR_bool mercury__store__succeeded;
#line 684 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_9;

#line 687 "store.m"
{
#define MR_PROC_LABEL mercury__store__arg_ref_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_for_ArgT;
	MR_Word Ref;
	MR_Integer ArgNum;
	MR_Word ArgRef;
	MR_Word S0;
	MR_Word S;

	TypeInfo_for_T =  mercury__store__TypeInfo_for_T_7 ;
	TypeInfo_for_ArgT =  mercury__store__TypeInfo_for_ArgT_8 ;
	Ref =  mercury__store__HeadVar__1_1 ;
	ArgNum =  mercury__store__HeadVar__2_2 ;
	S0 = (MR_Word) mercury__store__HeadVar__4_4 ;
		{
#line 687 "store.m"
{
    MR_TypeInfo         type_info;
    MR_TypeInfo         arg_type_info;
    MR_TypeInfo         exp_arg_type_info;
    MR_Word             *arg_ref;
    const MR_DuArgLocn  *arg_locn;

    type_info = (MR_TypeInfo) TypeInfo_for_T;
    exp_arg_type_info = (MR_TypeInfo) TypeInfo_for_ArgT;

    MR_save_transient_registers();

    if (!MR_arg(type_info, (MR_Word *) Ref, ArgNum, &arg_type_info,
        &arg_ref, &arg_locn, MR_NONCANON_ABORT))
    {
        MR_fatal_error("store.arg_ref: argument number out of range");
    }

    if (MR_compare_type_info(arg_type_info, exp_arg_type_info) !=
        MR_COMPARE_EQUAL)
    {
        MR_fatal_error("store.arg_ref: argument has wrong type");
    }

    MR_restore_transient_registers();

    if (arg_locn != NULL && arg_locn->MR_arg_bits != 0) {
        MR_offset_incr_hp_msg(ArgRef, MR_SIZE_SLOT_SIZE,
            MR_SIZE_SLOT_SIZE + 1, MR_ALLOC_ID, "store.ref/2");
        MR_define_size_slot(0, ArgRef, 1);
        * (MR_Word *) ArgRef = MR_arg_value(arg_ref, arg_locn);
    } else {
        ArgRef = (MR_Word) arg_ref;
    }
    S = S0;
}
#line 2824 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__3_3  = ArgRef;
	 *mercury__store__HeadVar__5_5  = (MR_Box) S;
#line 687 "store.m"
}
#line 684 "store.m"
  }
#line 161 "store.m"
}

#line 149 "store.m"
void MR_CALL 
mercury__store__ref_functor_5_p_0(
#line 149 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_16,
#line 149 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_15,
#line 149 "store.m"
  MR_Word mercury__store__Ref_6,
#line 149 "store.m"
  MR_String * mercury__store__Functor_7,
#line 149 "store.m"
  MR_Integer * mercury__store__Arity_8,
#line 149 "store.m"
  MR_Box mercury__store__STATE_VARIABLE_Store_0_11,
#line 149 "store.m"
  MR_Box * mercury__store__STATE_VARIABLE_Store_12)
#line 149 "store.m"
{
#line 672 "store.m"
  {
#line 672 "store.m"
    MR_bool mercury__store__succeeded;
#line 672 "store.m"
    MR_Box mercury__store__Val_10;
#line 642 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_17;
#line 642 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_18;

#line 645 "store.m"
{
#define MR_PROC_LABEL mercury__store__ref_functor_5_p_0

	MR_Word Ref;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Ref =  mercury__store__Ref_6 ;
	S0 = (MR_Word) mercury__store__STATE_VARIABLE_Store_0_11 ;
		{
#line 645 "store.m"

    Val = * (MR_Word *) Ref;
    S = S0;

#line 2884 "store.c"

		;}
#undef MR_PROC_LABEL
	 mercury__store__Val_10  = (MR_Box) Val;
	 *mercury__store__STATE_VARIABLE_Store_12  = (MR_Box) S;
#line 645 "store.m"
}
#line 674 "store.m"
    {
#line 674 "store.m"
      mercury__deconstruct__functor_4_p_1(mercury__store__TypeInfo_for_T_16, mercury__store__Val_10, (MR_Integer) 1, mercury__store__Functor_7, mercury__store__Arity_8);
#line 674 "store.m"
      return;
    }
#line 672 "store.m"
  }
#line 149 "store.m"
}

#line 141 "store.m"
void MR_CALL 
mercury__store__new_ref_4_p_0(
#line 141 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 141 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_5,
#line 141 "store.m"
  MR_Box mercury__store__HeadVar__1_1,
#line 141 "store.m"
  MR_Word * mercury__store__HeadVar__2_2,
#line 141 "store.m"
  MR_Box mercury__store__HeadVar__3_3,
#line 141 "store.m"
  MR_Box * mercury__store__HeadVar__4_4)
#line 141 "store.m"
{
#line 597 "store.m"
  {
#line 597 "store.m"
    MR_bool mercury__store__succeeded;
#line 597 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 597 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 600 "store.m"
{
#define MR_PROC_LABEL mercury__store__new_ref_4_p_0

	MR_Word Val;
	MR_Word Ref;
	MR_Word S0;
	MR_Word S;

	Val = (MR_Word) mercury__store__HeadVar__1_1 ;
	S0 = (MR_Word) mercury__store__HeadVar__3_3 ;
		{
#line 600 "store.m"

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.ref/2");
    MR_define_size_slot(0, Ref, 1);
    * (MR_Word *) Ref = Val;
    S = S0;

#line 2950 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__2_2  = Ref;
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 600 "store.m"
}
#line 597 "store.m"
  }
#line 141 "store.m"
}

#line 115 "store.m"
void MR_CALL 
mercury__store__new_cyclic_mutvar_4_p_0(
#line 115 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_14,
#line 115 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_13,
#line 115 "store.m"
  MR_Word mercury__store__Func_5,
#line 115 "store.m"
  MR_Word * mercury__store__MutVar_6,
#line 115 "store.m"
  MR_Box mercury__store__STATE_VARIABLE_Store_0_9,
#line 115 "store.m"
  MR_Box * mercury__store__STATE_VARIABLE_Store_10)
#line 115 "store.m"
{
#line 464 "store.m"
  {
#line 464 "store.m"
    MR_bool mercury__store__succeeded;
#line 464 "store.m"
    MR_Box mercury__store__Value_8;
#line 464 "store.m"
    MR_Box mercury__store__STATE_VARIABLE_Store_11_11;
#line 440 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_15;
#line 440 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_16;
#line 466 "store.m"
    MR_Box MR_CALL (* mercury__store__func_0)(MR_Box, MR_Box);
#line 349 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_17;
#line 349 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_18;

#line 443 "store.m"
{
#define MR_PROC_LABEL mercury__store__new_cyclic_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) mercury__store__STATE_VARIABLE_Store_0_9 ;
		{
#line 443 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    S = S0;

#line 3016 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__MutVar_6  = Mutvar;
	 mercury__store__STATE_VARIABLE_Store_11_11  = (MR_Box) S;
#line 443 "store.m"
}
#line 466 "store.m"
    mercury__store__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__store__Func_5, (MR_Integer) 1)));
#line 466 "store.m"
    {
#line 466 "store.m"
      mercury__store__Value_8 = mercury__store__func_0(((MR_Box) mercury__store__Func_5), ((MR_Box) (*mercury__store__MutVar_6)));
    }
#line 352 "store.m"
{
#define MR_PROC_LABEL mercury__store__new_cyclic_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Mutvar =  *mercury__store__MutVar_6 ;
	Val = (MR_Word) mercury__store__Value_8 ;
	S0 = (MR_Word) mercury__store__STATE_VARIABLE_Store_11_11 ;
		{
#line 352 "store.m"

    * (MR_Word *) Mutvar = Val;
    S = S0;

#line 3049 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__STATE_VARIABLE_Store_10  = (MR_Box) S;
#line 352 "store.m"
}
#line 464 "store.m"
  }
#line 115 "store.m"
}

#line 90 "store.m"
void MR_CALL 
mercury__store__set_mutvar_4_p_0(
#line 90 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 90 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_5,
#line 90 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 90 "store.m"
  MR_Box mercury__store__HeadVar__2_2,
#line 90 "store.m"
  MR_Box mercury__store__HeadVar__3_3,
#line 90 "store.m"
  MR_Box * mercury__store__HeadVar__4_4)
#line 90 "store.m"
{
#line 349 "store.m"
  {
#line 349 "store.m"
    MR_bool mercury__store__succeeded;
#line 349 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 349 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 352 "store.m"
{
#define MR_PROC_LABEL mercury__store__set_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Mutvar =  mercury__store__HeadVar__1_1 ;
	Val = (MR_Word) mercury__store__HeadVar__2_2 ;
	S0 = (MR_Word) mercury__store__HeadVar__3_3 ;
		{
#line 352 "store.m"

    * (MR_Word *) Mutvar = Val;
    S = S0;

#line 3105 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 352 "store.m"
}
#line 349 "store.m"
  }
#line 90 "store.m"
}

#line 85 "store.m"
void MR_CALL 
mercury__store__get_mutvar_4_p_0(
#line 85 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 85 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_5,
#line 85 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 85 "store.m"
  MR_Box * mercury__store__HeadVar__2_2,
#line 85 "store.m"
  MR_Box mercury__store__HeadVar__3_3,
#line 85 "store.m"
  MR_Box * mercury__store__HeadVar__4_4)
#line 85 "store.m"
{
#line 341 "store.m"
  {
#line 341 "store.m"
    MR_bool mercury__store__succeeded;
#line 341 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 341 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 344 "store.m"
{
#define MR_PROC_LABEL mercury__store__get_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Mutvar =  mercury__store__HeadVar__1_1 ;
	S0 = (MR_Word) mercury__store__HeadVar__3_3 ;
		{
#line 344 "store.m"

    Val = * (MR_Word *) Mutvar;
    S = S0;

#line 3160 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__2_2  = (MR_Box) Val;
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 344 "store.m"
}
#line 341 "store.m"
  }
#line 85 "store.m"
}

#line 80 "store.m"
void MR_CALL 
mercury__store__copy_mutvar_4_p_0(
#line 80 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_14,
#line 80 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_13,
#line 80 "store.m"
  MR_Word mercury__store__Mutvar_5,
#line 80 "store.m"
  MR_Word * mercury__store__Copy_6,
#line 80 "store.m"
  MR_Box mercury__store__STATE_VARIABLE_S_0_9,
#line 80 "store.m"
  MR_Box * mercury__store__STATE_VARIABLE_S_10)
#line 80 "store.m"
{
#line 433 "store.m"
  {
#line 433 "store.m"
    MR_bool mercury__store__succeeded;
#line 433 "store.m"
    MR_Box mercury__store__Value_8;
#line 433 "store.m"
    MR_Box mercury__store__STATE_VARIABLE_S_11_11;
#line 341 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_15;
#line 341 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_16;
#line 330 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_17;
#line 330 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_18;

#line 344 "store.m"
{
#define MR_PROC_LABEL mercury__store__copy_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Mutvar =  mercury__store__Mutvar_5 ;
	S0 = (MR_Word) mercury__store__STATE_VARIABLE_S_0_9 ;
		{
#line 344 "store.m"

    Val = * (MR_Word *) Mutvar;
    S = S0;

#line 3224 "store.c"

		;}
#undef MR_PROC_LABEL
	 mercury__store__Value_8  = (MR_Box) Val;
	 mercury__store__STATE_VARIABLE_S_11_11  = (MR_Box) S;
#line 344 "store.m"
}
#line 333 "store.m"
{
#define MR_PROC_LABEL mercury__store__copy_mutvar_4_p_0

	MR_Word Val;
	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	Val = (MR_Word) mercury__store__Value_8 ;
	S0 = (MR_Word) mercury__store__STATE_VARIABLE_S_11_11 ;
		{
#line 333 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    * (MR_Word *) Mutvar = Val;
    S = S0;

#line 3252 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__Copy_6  = Mutvar;
	 *mercury__store__STATE_VARIABLE_S_10  = (MR_Box) S;
#line 333 "store.m"
}
#line 433 "store.m"
  }
#line 80 "store.m"
}

#line 73 "store.m"
void MR_CALL 
mercury__store__new_mutvar_4_p_0(
#line 73 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 73 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_5,
#line 73 "store.m"
  MR_Box mercury__store__HeadVar__1_1,
#line 73 "store.m"
  MR_Word * mercury__store__HeadVar__2_2,
#line 73 "store.m"
  MR_Box mercury__store__HeadVar__3_3,
#line 73 "store.m"
  MR_Box * mercury__store__HeadVar__4_4)
#line 73 "store.m"
{
#line 330 "store.m"
  {
#line 330 "store.m"
    MR_bool mercury__store__succeeded;
#line 330 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 330 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 333 "store.m"
{
#define MR_PROC_LABEL mercury__store__new_mutvar_4_p_0

	MR_Word Val;
	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	Val = (MR_Word) mercury__store__HeadVar__1_1 ;
	S0 = (MR_Word) mercury__store__HeadVar__3_3 ;
		{
#line 333 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    * (MR_Word *) Mutvar = Val;
    S = S0;

#line 3311 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__2_2  = Mutvar;
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 333 "store.m"
}
#line 330 "store.m"
  }
#line 73 "store.m"
}

#line 57 "store.m"
void MR_CALL 
mercury__store__new_1_p_0(
#line 57 "store.m"
  MR_Word * mercury__store__TypeInfo_for_S_3)
#line 57 "store.m"
{
#line 290 "store.m"
  {
#line 290 "store.m"
    MR_bool mercury__store__succeeded;

#line 293 "store.m"
{
#define MR_PROC_LABEL mercury__store__new_1_p_0

	MR_Word TypeInfo_for_S;

		{
#line 293 "store.m"

    TypeInfo_for_S = 0;

#line 3347 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__TypeInfo_for_S_3  = TypeInfo_for_S;
#line 293 "store.m"
}
#line 290 "store.m"
  }
#line 57 "store.m"
}

#line 52 "store.m"
void MR_CALL 
mercury__store__init_1_p_0(
#line 52 "store.m"
  MR_Word * mercury__store__TypeInfo_for_S_3)
#line 52 "store.m"
{
#line 290 "store.m"
  {
#line 290 "store.m"
    MR_bool mercury__store__succeeded;

#line 293 "store.m"
{
#define MR_PROC_LABEL mercury__store__init_1_p_0

	MR_Word TypeInfo_for_S;

		{
#line 293 "store.m"

    TypeInfo_for_S = 0;

#line 3382 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__TypeInfo_for_S_3  = TypeInfo_for_S;
#line 293 "store.m"
}
#line 290 "store.m"
  }
#line 52 "store.m"
}

void mercury__store__init(void)
{
}

void mercury__store__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_generic_mutvar_2);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_generic_ref_2);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_io_mutvar_1);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_io_ref_2);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_store_1);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_store_mutvar_2);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_store_ref_2);
}

void mercury__store__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module store. */
