/*
** Automatically generated from `store.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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




#line 93 "store.c"
static const MR_Integer mercury__store__store__functor_number_map_generic_mutvar_2[1];

#line 96 "store.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__private_builtin__pti_ref_1__pseudo_1;

#line 99 "store.c"
static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_mutvar_2;

#line 102 "store.c"
static const MR_Integer mercury__store__store__functor_number_map_generic_ref_2[1];

#line 105 "store.c"
static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_ref_2;

#line 108 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__plain_io__type_ctor_info_state_0;

#line 111 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__plain_io__type_ctor_info_state_0;

#line 114 "store.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__store__pti_store_1__pseudo_2;

#line 117 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2;

#line 120 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2;

#line 123 "store.c"
static const MR_ConstString mercury__store__store__type_class_id_var_names_store_1[1];

#line 126 "store.c"
static const MR_TypeClassId mercury__store__store__type_class_id_store_1;

#line 129 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____generic_mutvar_2_0_10001(
#line 132 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 134 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 136 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 138 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 141 "store.c"
static void MR_CALL 
mercury__store____Compare____generic_mutvar_2_0_10001(
#line 144 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 146 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 148 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 150 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 152 "store.c"
  MR_Box mercury__store__wrapper_arg_5);

#line 155 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____generic_ref_2_0_10001(
#line 158 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 160 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 162 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 164 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 167 "store.c"
static void MR_CALL 
mercury__store____Compare____generic_ref_2_0_10001(
#line 170 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 172 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 174 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 176 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 178 "store.c"
  MR_Box mercury__store__wrapper_arg_5);

#line 181 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____io_mutvar_1_0_10001(
#line 184 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 186 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 188 "store.c"
  MR_Box mercury__store__wrapper_arg_3);

#line 191 "store.c"
static void MR_CALL 
mercury__store____Compare____io_mutvar_1_0_10001(
#line 194 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 196 "store.c"
  MR_Box * mercury__store__wrapper_arg_2,
#line 198 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 200 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 203 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____io_ref_2_0_10001(
#line 206 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 208 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 210 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 212 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 215 "store.c"
static void MR_CALL 
mercury__store____Compare____io_ref_2_0_10001(
#line 218 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 220 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 222 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 224 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 226 "store.c"
  MR_Box mercury__store__wrapper_arg_5);

#line 229 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_1_0_10001(
#line 232 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 234 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 236 "store.c"
  MR_Box mercury__store__wrapper_arg_3);

#line 239 "store.c"
static void MR_CALL 
mercury__store____Compare____store_1_0_10001(
#line 242 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 244 "store.c"
  MR_Box * mercury__store__wrapper_arg_2,
#line 246 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 248 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 251 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_mutvar_2_0_10001(
#line 254 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 256 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 258 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 260 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 263 "store.c"
static void MR_CALL 
mercury__store____Compare____store_mutvar_2_0_10001(
#line 266 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 268 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 270 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 272 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 274 "store.c"
  MR_Box mercury__store__wrapper_arg_5);

#line 277 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_ref_2_0_10001(
#line 280 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 282 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 284 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 286 "store.c"
  MR_Box mercury__store__wrapper_arg_4);

#line 289 "store.c"
static void MR_CALL 
mercury__store____Compare____store_ref_2_0_10001(
#line 292 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 294 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 296 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 298 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 300 "store.c"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
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



#line 655 "store.c"
static const MR_Integer mercury__store__store__functor_number_map_generic_mutvar_2[1] = {
  (MR_Integer) 0
};

#line 660 "store.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__private_builtin__pti_ref_1__pseudo_1 = {
  &mercury__private_builtin__private_builtin__type_ctor_info_ref_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 668 "store.c"
static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_mutvar_2 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) &mercury__store__private_builtin__pti_ref_1__pseudo_1,
  NULL
};

#line 675 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_generic_mutvar_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__store____Unify____generic_mutvar_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____generic_mutvar_2_0_10001)),
  (MR_String) "store",
  (MR_String) "generic_mutvar",
  {     &mercury__store__store__notag_functor_desc_generic_mutvar_2 },
  {     &mercury__store__store__notag_functor_desc_generic_mutvar_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__store__store__functor_number_map_generic_mutvar_2
};

#line 692 "store.c"
static const MR_Integer mercury__store__store__functor_number_map_generic_ref_2[1] = {
  (MR_Integer) 0
};

#line 697 "store.c"
static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_ref_2 = {
  (MR_String) "ref",
  (MR_PseudoTypeInfo) &mercury__store__private_builtin__pti_ref_1__pseudo_1,
  NULL
};

#line 704 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_generic_ref_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__store____Unify____generic_ref_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____generic_ref_2_0_10001)),
  (MR_String) "store",
  (MR_String) "generic_ref",
  {     &mercury__store__store__notag_functor_desc_generic_ref_2 },
  {     &mercury__store__store__notag_functor_desc_generic_ref_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__store__store__functor_number_map_generic_ref_2
};

#line 721 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__plain_io__type_ctor_info_state_0 = {
  &mercury__store__store__type_ctor_info_generic_mutvar_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 730 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_io_mutvar_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____io_mutvar_1_0_10001)),
  ((MR_Box) (mercury__store____Compare____io_mutvar_1_0_10001)),
  (MR_String) "store",
  (MR_String) "io_mutvar",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__store__store__pti_generic_mutvar_2__pseudo_1__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 747 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__plain_io__type_ctor_info_state_0 = {
  &mercury__store__store__type_ctor_info_generic_ref_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 756 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_io_ref_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____io_ref_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____io_ref_2_0_10001)),
  (MR_String) "store",
  (MR_String) "io_ref",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__store__store__pti_generic_ref_2__pseudo_1__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 773 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_store_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__store____Unify____store_1_0_10001)),
  ((MR_Box) (mercury__store____Compare____store_1_0_10001)),
  (MR_String) "store",
  (MR_String) "store",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 790 "store.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__store__pti_store_1__pseudo_2 = {
  &mercury__store__store__type_ctor_info_store_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 798 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 = {
  &mercury__store__store__type_ctor_info_generic_mutvar_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__store__store__pti_store_1__pseudo_2
  }
};

#line 807 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_store_mutvar_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____store_mutvar_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____store_mutvar_2_0_10001)),
  (MR_String) "store",
  (MR_String) "store_mutvar",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__store__store__pti_generic_mutvar_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 824 "store.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 = {
  &mercury__store__store__type_ctor_info_generic_ref_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__store__store__pti_store_1__pseudo_2
  }
};

#line 833 "store.c"
const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_store_ref_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____store_ref_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____store_ref_2_0_10001)),
  (MR_String) "store",
  (MR_String) "store_ref",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__store__store__pti_generic_ref_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 850 "store.c"
const MR_BaseTypeclassInfo base_typeclass_info_store__store__arity1__io__state__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 859 "store.c"
const MR_BaseTypeclassInfo base_typeclass_info_store__store__arity1__store__store__arity1__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 868 "store.c"
static const MR_ConstString mercury__store__store__type_class_id_var_names_store_1[1] = {
  (MR_String) "T"
};

#line 873 "store.c"
static const MR_TypeClassId mercury__store__store__type_class_id_store_1 = {
  (MR_String) "store",
  (MR_String) "store",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__store__store__type_class_id_var_names_store_1,
  NULL
};

#line 884 "store.c"
const MR_TypeClassDeclStruct mercury__store__store__type_class_decl_store_1 = {
  &mercury__store__store__type_class_id_store_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 892 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____generic_mutvar_2_0_10001(
#line 895 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 897 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 899 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 901 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 903 "store.c"
{
#line 905 "store.c"
  {
#line 907 "store.c"
    MR_bool mercury__store__succeeded;

#line 910 "store.c"
    {
#line 912 "store.c"
      mercury__store__succeeded = mercury__store____Unify____generic_mutvar_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 915 "store.c"
    return mercury__store__succeeded;
#line 917 "store.c"
  }
#line 919 "store.c"
}

#line 922 "store.c"
static void MR_CALL 
mercury__store____Compare____generic_mutvar_2_0_10001(
#line 925 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 927 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 929 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 931 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 933 "store.c"
  MR_Box mercury__store__wrapper_arg_5)
#line 935 "store.c"
{
#line 937 "store.c"
  {
#line 939 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 942 "store.c"
    {
#line 944 "store.c"
      mercury__store____Compare____generic_mutvar_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_4), ((MR_Word) mercury__store__wrapper_arg_5));
    }
#line 947 "store.c"
    *mercury__store__wrapper_arg_3 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 949 "store.c"
  }
#line 951 "store.c"
}

#line 954 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____generic_ref_2_0_10001(
#line 957 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 959 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 961 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 963 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 965 "store.c"
{
#line 967 "store.c"
  {
#line 969 "store.c"
    MR_bool mercury__store__succeeded;

#line 972 "store.c"
    {
#line 974 "store.c"
      mercury__store__succeeded = mercury__store____Unify____generic_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 977 "store.c"
    return mercury__store__succeeded;
#line 979 "store.c"
  }
#line 981 "store.c"
}

#line 984 "store.c"
static void MR_CALL 
mercury__store____Compare____generic_ref_2_0_10001(
#line 987 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 989 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 991 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 993 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 995 "store.c"
  MR_Box mercury__store__wrapper_arg_5)
#line 997 "store.c"
{
#line 999 "store.c"
  {
#line 1001 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1004 "store.c"
    {
#line 1006 "store.c"
      mercury__store____Compare____generic_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_4), ((MR_Word) mercury__store__wrapper_arg_5));
    }
#line 1009 "store.c"
    *mercury__store__wrapper_arg_3 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1011 "store.c"
  }
#line 1013 "store.c"
}

#line 1016 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____io_mutvar_1_0_10001(
#line 1019 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1021 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1023 "store.c"
  MR_Box mercury__store__wrapper_arg_3)
#line 1025 "store.c"
{
#line 1027 "store.c"
  {
#line 1029 "store.c"
    MR_bool mercury__store__succeeded;

#line 1032 "store.c"
    {
#line 1034 "store.c"
      mercury__store__succeeded = mercury__store____Unify____io_mutvar_1_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3));
    }
#line 1037 "store.c"
    return mercury__store__succeeded;
#line 1039 "store.c"
  }
#line 1041 "store.c"
}

#line 1044 "store.c"
static void MR_CALL 
mercury__store____Compare____io_mutvar_1_0_10001(
#line 1047 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1049 "store.c"
  MR_Box * mercury__store__wrapper_arg_2,
#line 1051 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 1053 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 1055 "store.c"
{
#line 1057 "store.c"
  {
#line 1059 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1062 "store.c"
    {
#line 1064 "store.c"
      mercury__store____Compare____io_mutvar_1_0(((MR_Word) mercury__store__wrapper_arg_1), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 1067 "store.c"
    *mercury__store__wrapper_arg_2 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1069 "store.c"
  }
#line 1071 "store.c"
}

#line 1074 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____io_ref_2_0_10001(
#line 1077 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1079 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1081 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 1083 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 1085 "store.c"
{
#line 1087 "store.c"
  {
#line 1089 "store.c"
    MR_bool mercury__store__succeeded;

#line 1092 "store.c"
    {
#line 1094 "store.c"
      mercury__store__succeeded = mercury__store____Unify____io_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 1097 "store.c"
    return mercury__store__succeeded;
#line 1099 "store.c"
  }
#line 1101 "store.c"
}

#line 1104 "store.c"
static void MR_CALL 
mercury__store____Compare____io_ref_2_0_10001(
#line 1107 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1109 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1111 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 1113 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 1115 "store.c"
  MR_Box mercury__store__wrapper_arg_5)
#line 1117 "store.c"
{
#line 1119 "store.c"
  {
#line 1121 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1124 "store.c"
    {
#line 1126 "store.c"
      mercury__store____Compare____io_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_4), ((MR_Word) mercury__store__wrapper_arg_5));
    }
#line 1129 "store.c"
    *mercury__store__wrapper_arg_3 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1131 "store.c"
  }
#line 1133 "store.c"
}

#line 1136 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_1_0_10001(
#line 1139 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1141 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1143 "store.c"
  MR_Box mercury__store__wrapper_arg_3)
#line 1145 "store.c"
{
#line 1147 "store.c"
  {
#line 1149 "store.c"
    MR_bool mercury__store__succeeded;

#line 1152 "store.c"
    {
#line 1154 "store.c"
      mercury__store__succeeded = mercury__store____Unify____store_1_0(((MR_Word) mercury__store__wrapper_arg_1));
    }
#line 1157 "store.c"
    return mercury__store__succeeded;
#line 1159 "store.c"
  }
#line 1161 "store.c"
}

#line 1164 "store.c"
static void MR_CALL 
mercury__store____Compare____store_1_0_10001(
#line 1167 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1169 "store.c"
  MR_Box * mercury__store__wrapper_arg_2,
#line 1171 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 1173 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 1175 "store.c"
{
#line 1177 "store.c"
  {
#line 1179 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1182 "store.c"
    {
#line 1184 "store.c"
      mercury__store____Compare____store_1_0(((MR_Word) mercury__store__wrapper_arg_1), &mercury__store__conv0_HeadVar__1_1);
    }
#line 1187 "store.c"
    *mercury__store__wrapper_arg_2 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1189 "store.c"
  }
#line 1191 "store.c"
}

#line 1194 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_mutvar_2_0_10001(
#line 1197 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1199 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1201 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 1203 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 1205 "store.c"
{
#line 1207 "store.c"
  {
#line 1209 "store.c"
    MR_bool mercury__store__succeeded;

#line 1212 "store.c"
    {
#line 1214 "store.c"
      mercury__store__succeeded = mercury__store____Unify____store_mutvar_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 1217 "store.c"
    return mercury__store__succeeded;
#line 1219 "store.c"
  }
#line 1221 "store.c"
}

#line 1224 "store.c"
static void MR_CALL 
mercury__store____Compare____store_mutvar_2_0_10001(
#line 1227 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1229 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1231 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 1233 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 1235 "store.c"
  MR_Box mercury__store__wrapper_arg_5)
#line 1237 "store.c"
{
#line 1239 "store.c"
  {
#line 1241 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1244 "store.c"
    {
#line 1246 "store.c"
      mercury__store____Compare____store_mutvar_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_4), ((MR_Word) mercury__store__wrapper_arg_5));
    }
#line 1249 "store.c"
    *mercury__store__wrapper_arg_3 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1251 "store.c"
  }
#line 1253 "store.c"
}

#line 1256 "store.c"
static MR_bool MR_CALL 
mercury__store____Unify____store_ref_2_0_10001(
#line 1259 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1261 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1263 "store.c"
  MR_Box mercury__store__wrapper_arg_3,
#line 1265 "store.c"
  MR_Box mercury__store__wrapper_arg_4)
#line 1267 "store.c"
{
#line 1269 "store.c"
  {
#line 1271 "store.c"
    MR_bool mercury__store__succeeded;

#line 1274 "store.c"
    {
#line 1276 "store.c"
      mercury__store__succeeded = mercury__store____Unify____store_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), ((MR_Word) mercury__store__wrapper_arg_3), ((MR_Word) mercury__store__wrapper_arg_4));
    }
#line 1279 "store.c"
    return mercury__store__succeeded;
#line 1281 "store.c"
  }
#line 1283 "store.c"
}

#line 1286 "store.c"
static void MR_CALL 
mercury__store____Compare____store_ref_2_0_10001(
#line 1289 "store.c"
  MR_Box mercury__store__wrapper_arg_1,
#line 1291 "store.c"
  MR_Box mercury__store__wrapper_arg_2,
#line 1293 "store.c"
  MR_Box * mercury__store__wrapper_arg_3,
#line 1295 "store.c"
  MR_Box mercury__store__wrapper_arg_4,
#line 1297 "store.c"
  MR_Box mercury__store__wrapper_arg_5)
#line 1299 "store.c"
{
#line 1301 "store.c"
  {
#line 1303 "store.c"
    MR_Word mercury__store__conv0_HeadVar__1_1;

#line 1306 "store.c"
    {
#line 1308 "store.c"
      mercury__store____Compare____store_ref_2_0(((MR_Word) mercury__store__wrapper_arg_1), ((MR_Word) mercury__store__wrapper_arg_2), &mercury__store__conv0_HeadVar__1_1, ((MR_Word) mercury__store__wrapper_arg_4), ((MR_Word) mercury__store__wrapper_arg_5));
    }
#line 1311 "store.c"
    *mercury__store__wrapper_arg_3 = ((MR_Box) (mercury__store__conv0_HeadVar__1_1));
#line 1313 "store.c"
  }
#line 1315 "store.c"
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

#line 268 "store.m"
void MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 268 "store.m"
  MR_Word * mercury__store__HeadVar__1_1)
#line 268 "store.m"
{
#line 268 "store.m"
  {
#line 268 "store.m"
    MR_bool mercury__store__succeeded;

#line 268 "store.m"
    *mercury__store__HeadVar__1_1 = (MR_Integer) 0;
#line 268 "store.m"
  }
#line 268 "store.m"
}

#line 268 "store.m"
MR_bool MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 268 "store.m"
{
#line 268 "store.m"
  {
#line 268 "store.m"
    return MR_TRUE;
#line 268 "store.m"
  }
#line 268 "store.m"
}

#line 133 "store.m"
void MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_3_p_0(
#line 133 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 133 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 133 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 133 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 133 "store.m"
{
#line 133 "store.m"
  {
#line 133 "store.m"
    MR_bool mercury__store__succeeded;
#line 133 "store.m"
    MR_Word mercury__store__TypeCtorInfo_8_8 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 133 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_4 = mercury__store__HeadVar__2_2;
#line 133 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_5 = mercury__store__HeadVar__3_3;

#line 133 "store.m"
    {
#line 133 "store.m"
      mercury__store____Compare____generic_ref_2_0(mercury__store__TypeInfo_for_T_6, mercury__store__TypeCtorInfo_8_8, mercury__store__HeadVar__1_1, mercury__store__Cast_HeadVar1_4, mercury__store__Cast_HeadVar2_5);
#line 133 "store.m"
      return;
    }
#line 133 "store.m"
  }
#line 133 "store.m"
}

#line 133 "store.m"
MR_bool MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_2_p_0(
#line 133 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 133 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 133 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 133 "store.m"
{
#line 133 "store.m"
  {
#line 133 "store.m"
    MR_bool mercury__store__succeeded;
#line 133 "store.m"
    MR_Word mercury__store__TypeCtorInfo_7_7 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 133 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_3 = mercury__store__HeadVar__1_1;
#line 133 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_4 = mercury__store__HeadVar__2_2;

#line 133 "store.m"
    {
#line 133 "store.m"
      return mercury__store__succeeded = mercury__store____Unify____generic_ref_2_0(mercury__store__TypeInfo_for_T_5, mercury__store__TypeCtorInfo_7_7, mercury__store__Cast_HeadVar1_3, mercury__store__Cast_HeadVar2_4);
    }
#line 133 "store.m"
    return mercury__store__succeeded;
#line 133 "store.m"
  }
#line 133 "store.m"
}

#line 276 "store.m"
void MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 276 "store.m"
  MR_Word * mercury__store__HeadVar__1_4)
#line 276 "store.m"
{
#line 279 "store.m"
  {
#line 279 "store.m"
    MR_bool mercury__store__succeeded;

#line 280 "store.m"
    {
#line 280 "store.m"
      mercury__require__error_1_p_0((MR_String) "attempt to compare two stores");
#line 280 "store.m"
      return;
    }
#line 279 "store.m"
  }
#line 276 "store.m"
}

#line 271 "store.m"
MR_bool MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 271 "store.m"
{
#line 273 "store.m"
  {
#line 274 "store.m"
    {
#line 274 "store.m"
      mercury__require__error_1_p_0((MR_String) "attempt to unify two stores");
    }
#line 273 "store.m"
    return MR_TRUE;
#line 273 "store.m"
  }
#line 271 "store.m"
}

#line 134 "store.m"
void MR_CALL 
mercury__store____Compare____store_ref_2_0(
#line 134 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 134 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_7,
#line 134 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 134 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 134 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 134 "store.m"
{
#line 134 "store.m"
  {
#line 134 "store.m"
    MR_bool mercury__store__succeeded;
#line 134 "store.m"
    MR_Word mercury__store__TypeCtorInfo_8_8 = (MR_Word) &mercury__store__store__type_ctor_info_store_1;
#line 134 "store.m"
    MR_Word mercury__store__TypeInfo_9_9;
#line 134 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_4 = mercury__store__HeadVar__2_2;
#line 134 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_5 = mercury__store__HeadVar__3_3;

#line 1509 "store.c"
    {
#line 1511 "store.c"
      mercury__store__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1513 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_9_9, 0) = ((MR_Box) (mercury__store__TypeCtorInfo_8_8));
#line 1515 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_9_9, 1) = ((MR_Box) (mercury__store__TypeInfo_for_S_7));
#line 1517 "store.c"
    }
#line 134 "store.m"
    {
#line 134 "store.m"
      mercury__store____Compare____generic_ref_2_0(mercury__store__TypeInfo_for_T_6, mercury__store__TypeInfo_9_9, mercury__store__HeadVar__1_1, (MR_Word) mercury__store__Cast_HeadVar1_4, (MR_Word) mercury__store__Cast_HeadVar2_5);
#line 134 "store.m"
      return;
    }
#line 134 "store.m"
  }
#line 134 "store.m"
}

#line 134 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____store_ref_2_0(
#line 134 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 134 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_6,
#line 134 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 134 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 134 "store.m"
{
#line 134 "store.m"
  {
#line 134 "store.m"
    MR_bool mercury__store__succeeded;
#line 134 "store.m"
    MR_Word mercury__store__TypeCtorInfo_7_7 = (MR_Word) &mercury__store__store__type_ctor_info_store_1;
#line 134 "store.m"
    MR_Word mercury__store__TypeInfo_8_8;
#line 134 "store.m"
    MR_Word mercury__store__Cast_HeadVar1_3 = mercury__store__HeadVar__1_1;
#line 134 "store.m"
    MR_Word mercury__store__Cast_HeadVar2_4 = mercury__store__HeadVar__2_2;

#line 1557 "store.c"
    {
#line 1559 "store.c"
      mercury__store__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_8_8, 0) = ((MR_Box) (mercury__store__TypeCtorInfo_7_7));
#line 1563 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_8_8, 1) = ((MR_Box) (mercury__store__TypeInfo_for_S_6));
#line 1565 "store.c"
    }
#line 134 "store.m"
    {
#line 134 "store.m"
      return mercury__store__succeeded = mercury__store____Unify____generic_ref_2_0(mercury__store__TypeInfo_for_T_5, mercury__store__TypeInfo_8_8, (MR_Word) mercury__store__Cast_HeadVar1_3, (MR_Word) mercury__store__Cast_HeadVar2_4);
    }
#line 134 "store.m"
    return mercury__store__succeeded;
#line 134 "store.m"
  }
#line 134 "store.m"
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

#line 1607 "store.c"
    {
#line 1609 "store.c"
      mercury__store__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1611 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_9_9, 0) = ((MR_Box) (mercury__store__TypeCtorInfo_8_8));
#line 1613 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_9_9, 1) = ((MR_Box) (mercury__store__TypeInfo_for_S_7));
#line 1615 "store.c"
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

#line 1655 "store.c"
    {
#line 1657 "store.c"
      mercury__store__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1659 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_8_8, 0) = ((MR_Box) (mercury__store__TypeCtorInfo_7_7));
#line 1661 "store.c"
      MR_hl_field(MR_mktag(0), mercury__store__TypeInfo_8_8, 1) = ((MR_Box) (mercury__store__TypeInfo_for_S_6));
#line 1663 "store.c"
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

#line 268 "store.m"
void MR_CALL 
mercury__store____Compare____store_1_0(
#line 268 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_4,
#line 268 "store.m"
  MR_Word * mercury__store__HeadVar__1_1)
#line 268 "store.m"
{
#line 268 "store.m"
  {
#line 268 "store.m"
    MR_bool mercury__store__succeeded;

#line 268 "store.m"
    {
#line 268 "store.m"
      mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__store__HeadVar__1_1);
#line 268 "store.m"
      return;
    }
#line 268 "store.m"
  }
#line 268 "store.m"
}

#line 268 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____store_1_0(
#line 268 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_3)
#line 268 "store.m"
{
#line 268 "store.m"
  {
#line 268 "store.m"
    MR_bool mercury__store__succeeded;

#line 268 "store.m"
    {
#line 268 "store.m"
      return mercury__store__succeeded = mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 268 "store.m"
    return mercury__store__succeeded;
#line 268 "store.m"
  }
#line 268 "store.m"
}

#line 133 "store.m"
void MR_CALL 
mercury__store____Compare____io_ref_2_0(
#line 133 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 133 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_7,
#line 133 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 133 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 133 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 133 "store.m"
{
#line 133 "store.m"
  {
#line 133 "store.m"
    MR_bool mercury__store__succeeded;

#line 133 "store.m"
    {
#line 133 "store.m"
      mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_3_p_0(mercury__store__TypeInfo_for_T_6, mercury__store__HeadVar__1_1, mercury__store__HeadVar__2_2, mercury__store__HeadVar__3_3);
#line 133 "store.m"
      return;
    }
#line 133 "store.m"
  }
#line 133 "store.m"
}

#line 133 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____io_ref_2_0(
#line 133 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 133 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_6,
#line 133 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 133 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 133 "store.m"
{
#line 133 "store.m"
  {
#line 133 "store.m"
    MR_bool mercury__store__succeeded;

#line 133 "store.m"
    {
#line 133 "store.m"
      return mercury__store__succeeded = mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_2_p_0(mercury__store__TypeInfo_for_T_5, mercury__store__HeadVar__1_1, mercury__store__HeadVar__2_2);
    }
#line 133 "store.m"
    return mercury__store__succeeded;
#line 133 "store.m"
  }
#line 133 "store.m"
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

#line 517 "store.m"
void MR_CALL 
mercury__store____Compare____generic_ref_2_0(
#line 517 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_8,
#line 517 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_9,
#line 517 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 517 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 517 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 517 "store.m"
{
#line 517 "store.m"
  {
#line 517 "store.m"
    MR_bool mercury__store__succeeded;
#line 517 "store.m"
    MR_Integer mercury__store__CastX_6 = (MR_Integer) mercury__store__HeadVar__2_2;
#line 517 "store.m"
    MR_Integer mercury__store__CastY_7 = (MR_Integer) mercury__store__HeadVar__3_3;

#line 517 "store.m"
    mercury__store__succeeded = (mercury__store__CastX_6 == mercury__store__CastY_7);
#line 517 "store.m"
    if (mercury__store__succeeded)
#line 1887 "store.c"
      *mercury__store__HeadVar__1_1 = (MR_Integer) 0;
#line 517 "store.m"
    else
#line 517 "store.m"
      {
#line 517 "store.m"
        MR_Word mercury__store__V_4_4 = (MR_Word) mercury__store__HeadVar__2_2;
#line 517 "store.m"
        MR_Word mercury__store__V_5_5 = (MR_Word) mercury__store__HeadVar__3_3;

#line 517 "store.m"
        {
#line 517 "store.m"
          mercury__private_builtin____Compare____ref_1_0(mercury__store__TypeInfo_for_T_8, mercury__store__HeadVar__1_1, mercury__store__V_4_4, mercury__store__V_5_5);
#line 517 "store.m"
          return;
        }
#line 517 "store.m"
      }
#line 517 "store.m"
  }
#line 517 "store.m"
}

#line 517 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____generic_ref_2_0(
#line 517 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 517 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_8,
#line 517 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 517 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 517 "store.m"
{
#line 517 "store.m"
  {
#line 517 "store.m"
    MR_bool mercury__store__succeeded;
#line 517 "store.m"
    MR_Integer mercury__store__CastX_5 = (MR_Integer) mercury__store__HeadVar__1_1;
#line 517 "store.m"
    MR_Integer mercury__store__CastY_6 = (MR_Integer) mercury__store__HeadVar__2_2;

#line 517 "store.m"
    mercury__store__succeeded = (mercury__store__CastX_5 == mercury__store__CastY_6);
#line 517 "store.m"
    if (mercury__store__succeeded)
#line 517 "store.m"
      mercury__store__succeeded = MR_TRUE;
#line 517 "store.m"
    else
#line 517 "store.m"
      {
#line 517 "store.m"
        MR_Word mercury__store__V_3_3 = (MR_Word) mercury__store__HeadVar__1_1;
#line 517 "store.m"
        MR_Word mercury__store__V_4_4 = (MR_Word) mercury__store__HeadVar__2_2;

#line 1949 "store.c"
        {
#line 1951 "store.c"
          return mercury__store__succeeded = mercury__private_builtin____Unify____ref_1_0(mercury__store__TypeInfo_for_T_7, mercury__store__V_3_3, mercury__store__V_4_4);
        }
#line 517 "store.m"
      }
#line 517 "store.m"
    return mercury__store__succeeded;
#line 517 "store.m"
  }
#line 517 "store.m"
}

#line 408 "store.m"
void MR_CALL 
mercury__store____Compare____generic_mutvar_2_0(
#line 408 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_8,
#line 408 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_9,
#line 408 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 408 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 408 "store.m"
  MR_Word mercury__store__HeadVar__3_3)
#line 408 "store.m"
{
#line 408 "store.m"
  {
#line 408 "store.m"
    MR_bool mercury__store__succeeded;
#line 408 "store.m"
    MR_Integer mercury__store__CastX_6 = (MR_Integer) mercury__store__HeadVar__2_2;
#line 408 "store.m"
    MR_Integer mercury__store__CastY_7 = (MR_Integer) mercury__store__HeadVar__3_3;

#line 408 "store.m"
    mercury__store__succeeded = (mercury__store__CastX_6 == mercury__store__CastY_7);
#line 408 "store.m"
    if (mercury__store__succeeded)
#line 1991 "store.c"
      *mercury__store__HeadVar__1_1 = (MR_Integer) 0;
#line 408 "store.m"
    else
#line 408 "store.m"
      {
#line 408 "store.m"
        MR_Word mercury__store__V_4_4 = (MR_Word) mercury__store__HeadVar__2_2;
#line 408 "store.m"
        MR_Word mercury__store__V_5_5 = (MR_Word) mercury__store__HeadVar__3_3;

#line 408 "store.m"
        {
#line 408 "store.m"
          mercury__private_builtin____Compare____ref_1_0(mercury__store__TypeInfo_for_T_8, mercury__store__HeadVar__1_1, mercury__store__V_4_4, mercury__store__V_5_5);
#line 408 "store.m"
          return;
        }
#line 408 "store.m"
      }
#line 408 "store.m"
  }
#line 408 "store.m"
}

#line 408 "store.m"
MR_bool MR_CALL 
mercury__store____Unify____generic_mutvar_2_0(
#line 408 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 408 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_8,
#line 408 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 408 "store.m"
  MR_Word mercury__store__HeadVar__2_2)
#line 408 "store.m"
{
#line 408 "store.m"
  {
#line 408 "store.m"
    MR_bool mercury__store__succeeded;
#line 408 "store.m"
    MR_Integer mercury__store__CastX_5 = (MR_Integer) mercury__store__HeadVar__1_1;
#line 408 "store.m"
    MR_Integer mercury__store__CastY_6 = (MR_Integer) mercury__store__HeadVar__2_2;

#line 408 "store.m"
    mercury__store__succeeded = (mercury__store__CastX_5 == mercury__store__CastY_6);
#line 408 "store.m"
    if (mercury__store__succeeded)
#line 408 "store.m"
      mercury__store__succeeded = MR_TRUE;
#line 408 "store.m"
    else
#line 408 "store.m"
      {
#line 408 "store.m"
        MR_Word mercury__store__V_3_3 = (MR_Word) mercury__store__HeadVar__1_1;
#line 408 "store.m"
        MR_Word mercury__store__V_4_4 = (MR_Word) mercury__store__HeadVar__2_2;

#line 2053 "store.c"
        {
#line 2055 "store.c"
          return mercury__store__succeeded = mercury__private_builtin____Unify____ref_1_0(mercury__store__TypeInfo_for_T_7, mercury__store__V_3_3, mercury__store__V_4_4);
        }
#line 408 "store.m"
      }
#line 408 "store.m"
    return mercury__store__succeeded;
#line 408 "store.m"
  }
#line 408 "store.m"
}

#line 641 "store.m"
void MR_CALL 
mercury__store__unsafe_ref_value_4_p_0(
#line 641 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 641 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_5,
#line 641 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 641 "store.m"
  MR_Box * mercury__store__HeadVar__2_2,
#line 641 "store.m"
  MR_Box mercury__store__HeadVar__3_3,
#line 641 "store.m"
  MR_Box * mercury__store__HeadVar__4_4)
#line 641 "store.m"
{
#line 644 "store.m"
  {
#line 644 "store.m"
    MR_bool mercury__store__succeeded;
#line 644 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 644 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 647 "store.m"
{
#define MR_PROC_LABEL mercury__store__unsafe_ref_value_4_p_0

	MR_Word Ref;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Ref =  mercury__store__HeadVar__1_1 ;
	S0 = (MR_Word) mercury__store__HeadVar__3_3 ;
		{
#line 647 "store.m"

    Val = * (MR_Word *) Ref;
    S = S0;

#line 2110 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__2_2  = (MR_Box) Val;
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 647 "store.m"
}
#line 644 "store.m"
  }
#line 641 "store.m"
}

#line 439 "store.m"
void MR_CALL 
mercury__store__unsafe_new_uninitialized_mutvar_3_p_0(
#line 439 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 439 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_4,
#line 439 "store.m"
  MR_Word * mercury__store__HeadVar__1_1,
#line 439 "store.m"
  MR_Box mercury__store__HeadVar__2_2,
#line 439 "store.m"
  MR_Box * mercury__store__HeadVar__3_3)
#line 439 "store.m"
{
#line 442 "store.m"
  {
#line 442 "store.m"
    MR_bool mercury__store__succeeded;
#line 442 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_6;
#line 442 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_7;

#line 445 "store.m"
{
#define MR_PROC_LABEL mercury__store__unsafe_new_uninitialized_mutvar_3_p_0

	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) mercury__store__HeadVar__2_2 ;
		{
#line 445 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    S = S0;

#line 2164 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__1_1  = Mutvar;
	 *mercury__store__HeadVar__3_3  = (MR_Box) S;
#line 445 "store.m"
}
#line 442 "store.m"
  }
#line 439 "store.m"
}

#line 290 "store.m"
void MR_CALL 
mercury__store__do_init_1_p_0(
#line 290 "store.m"
  MR_Word * mercury__store__TypeInfo_for_S_2)
#line 290 "store.m"
{
#line 292 "store.m"
  {
#line 292 "store.m"
    MR_bool mercury__store__succeeded;

#line 295 "store.m"
{
#define MR_PROC_LABEL mercury__store__do_init_1_p_0

	MR_Word TypeInfo_for_S;

		{
#line 295 "store.m"

    TypeInfo_for_S = 0;

#line 2200 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__TypeInfo_for_S_2  = TypeInfo_for_S;
#line 295 "store.m"
}
#line 292 "store.m"
  }
#line 290 "store.m"
}

#line 276 "store.m"
void MR_CALL 
mercury__store__store_compare_3_p_0(
#line 276 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_8,
#line 276 "store.m"
  MR_Word * mercury__store__HeadVar__1_4)
#line 276 "store.m"
{
#line 279 "store.m"
  {
#line 279 "store.m"
    MR_bool mercury__store__succeeded;

#line 279 "store.m"
    {
#line 279 "store.m"
      mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__store__HeadVar__1_4);
#line 279 "store.m"
      return;
    }
#line 279 "store.m"
  }
#line 276 "store.m"
}

#line 271 "store.m"
MR_bool MR_CALL 
mercury__store__store_equal_2_p_0(
#line 271 "store.m"
  MR_Word mercury__store__TypeInfo_for_S_6)
#line 271 "store.m"
{
#line 273 "store.m"
  {
#line 273 "store.m"
    MR_bool mercury__store__succeeded;

#line 273 "store.m"
    {
#line 273 "store.m"
      return mercury__store__succeeded = mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
#line 273 "store.m"
    return mercury__store__succeeded;
#line 273 "store.m"
  }
#line 271 "store.m"
}

#line 242 "store.m"
void MR_CALL 
mercury__store__unsafe_new_arg_ref_5_p_0(
#line 242 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 242 "store.m"
  MR_Word mercury__store__TypeInfo_for_ArgT_8,
#line 242 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_6,
#line 242 "store.m"
  MR_Box mercury__store__HeadVar__1_1,
#line 242 "store.m"
  MR_Integer mercury__store__HeadVar__2_2,
#line 242 "store.m"
  MR_Word * mercury__store__HeadVar__3_3,
#line 242 "store.m"
  MR_Box mercury__store__HeadVar__4_4,
#line 242 "store.m"
  MR_Box * mercury__store__HeadVar__5_5)
#line 242 "store.m"
{
#line 916 "store.m"
  {
#line 916 "store.m"
    MR_bool mercury__store__succeeded;
#line 916 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_9;
#line 916 "store.m"
    MR_Word mercury__store__TypeInfo_for_ArgT_10;
#line 916 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_11;

#line 919 "store.m"
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
#line 919 "store.m"
{
    /* unsafe - does not check type & arity, won't handle no_tag types */
    MR_Word *Ptr;

    Ptr = (MR_Word *) MR_strip_tag((MR_Word) Val);
    ArgRef = (MR_Word) &Ptr[Arg];
    S = S0;
}
#line 2317 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__3_3  = ArgRef;
	 *mercury__store__HeadVar__5_5  = (MR_Box) S;
#line 919 "store.m"
}
#line 916 "store.m"
  }
#line 242 "store.m"
}

#line 239 "store.m"
void MR_CALL 
mercury__store__unsafe_arg_ref_5_p_0(
#line 239 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 239 "store.m"
  MR_Word mercury__store__TypeInfo_for_ArgT_8,
#line 239 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_6,
#line 239 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 239 "store.m"
  MR_Integer mercury__store__HeadVar__2_2,
#line 239 "store.m"
  MR_Word * mercury__store__HeadVar__3_3,
#line 239 "store.m"
  MR_Box mercury__store__HeadVar__4_4,
#line 239 "store.m"
  MR_Box * mercury__store__HeadVar__5_5)
#line 239 "store.m"
{
#line 890 "store.m"
  {
#line 890 "store.m"
    MR_bool mercury__store__succeeded;
#line 890 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_9;
#line 890 "store.m"
    MR_Word mercury__store__TypeInfo_for_ArgT_10;
#line 890 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_11;

#line 893 "store.m"
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
#line 893 "store.m"
{
    /* unsafe - does not check type & arity, won't handle no_tag types */
    MR_Word *Ptr;

    Ptr = (MR_Word *) MR_strip_tag((MR_Word) Ref);
    ArgRef = (MR_Word) &Ptr[Arg];
    S = S0;
}
#line 2385 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__3_3  = ArgRef;
	 *mercury__store__HeadVar__5_5  = (MR_Box) S;
#line 893 "store.m"
}
#line 890 "store.m"
  }
#line 239 "store.m"
}

#line 212 "store.m"
void MR_CALL 
mercury__store__extract_ref_value_3_p_0(
#line 212 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_5,
#line 212 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_4,
#line 212 "store.m"
  MR_Box mercury__store__HeadVar__1_1,
#line 212 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 212 "store.m"
  MR_Box * mercury__store__HeadVar__3_3)
#line 212 "store.m"
{
#line 867 "store.m"
  {
#line 867 "store.m"
    MR_bool mercury__store__succeeded;
#line 867 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_6;
#line 867 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_7;

#line 870 "store.m"
{
#define MR_PROC_LABEL mercury__store__extract_ref_value_3_p_0

	MR_Word Ref;
	MR_Word Val;

	Ref =  mercury__store__HeadVar__2_2 ;
		{
#line 870 "store.m"

    Val = * (MR_Word *) Ref;

#line 2435 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__3_3  = (MR_Box) Val;
#line 870 "store.m"
}
#line 867 "store.m"
  }
#line 212 "store.m"
}

#line 207 "store.m"
void MR_CALL 
mercury__store__copy_ref_value_4_p_0(
#line 207 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_10,
#line 207 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_9,
#line 207 "store.m"
  MR_Word mercury__store__Ref_5,
#line 207 "store.m"
  MR_Box * mercury__store__Val_6,
#line 207 "store.m"
  MR_Box mercury__store__DCG_0_7,
#line 207 "store.m"
  MR_Box * mercury__store__DCG_1_8)
#line 207 "store.m"
{
#line 644 "store.m"
  {
#line 644 "store.m"
    MR_bool mercury__store__succeeded;
#line 644 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_11;
#line 644 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_12;

#line 647 "store.m"
{
#define MR_PROC_LABEL mercury__store__copy_ref_value_4_p_0

	MR_Word Ref;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Ref =  mercury__store__Ref_5 ;
	S0 = (MR_Word) mercury__store__DCG_0_7 ;
		{
#line 647 "store.m"

    Val = * (MR_Word *) Ref;
    S = S0;

#line 2490 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__Val_6  = (MR_Box) Val;
	 *mercury__store__DCG_1_8  = (MR_Box) S;
#line 647 "store.m"
}
#line 644 "store.m"
  }
#line 207 "store.m"
}

#line 198 "store.m"
void MR_CALL 
mercury__store__set_ref_value_4_p_0(
#line 198 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 198 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_5,
#line 198 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 198 "store.m"
  MR_Box mercury__store__HeadVar__2_2,
#line 198 "store.m"
  MR_Box mercury__store__HeadVar__3_3,
#line 198 "store.m"
  MR_Box * mercury__store__HeadVar__4_4)
#line 198 "store.m"
{
#line 852 "store.m"
  {
#line 852 "store.m"
    MR_bool mercury__store__succeeded;
#line 852 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 852 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 855 "store.m"
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
#line 855 "store.m"

    * (MR_Word *) Ref = Val;
    S = S0;

#line 2547 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 855 "store.m"
}
#line 852 "store.m"
  }
#line 198 "store.m"
}

#line 188 "store.m"
void MR_CALL 
mercury__store__set_ref_4_p_0(
#line 188 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 188 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_5,
#line 188 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 188 "store.m"
  MR_Word mercury__store__HeadVar__2_2,
#line 188 "store.m"
  MR_Box mercury__store__HeadVar__3_3,
#line 188 "store.m"
  MR_Box * mercury__store__HeadVar__4_4)
#line 188 "store.m"
{
#line 830 "store.m"
  {
#line 830 "store.m"
    MR_bool mercury__store__succeeded;
#line 830 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 830 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 833 "store.m"
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
#line 833 "store.m"

    * (MR_Word *) Ref = * (MR_Word *) ValRef;
    S = S0;

#line 2603 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 833 "store.m"
}
#line 830 "store.m"
  }
#line 188 "store.m"
}

#line 177 "store.m"
void MR_CALL 
mercury__store__new_arg_ref_5_p_0(
#line 177 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 177 "store.m"
  MR_Word mercury__store__TypeInfo_for_ArgT_8,
#line 177 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_6,
#line 177 "store.m"
  MR_Box mercury__store__HeadVar__1_1,
#line 177 "store.m"
  MR_Integer mercury__store__HeadVar__2_2,
#line 177 "store.m"
  MR_Word * mercury__store__HeadVar__3_3,
#line 177 "store.m"
  MR_Box mercury__store__HeadVar__4_4,
#line 177 "store.m"
  MR_Box * mercury__store__HeadVar__5_5)
#line 177 "store.m"
{
#line 752 "store.m"
  {
#line 752 "store.m"
    MR_bool mercury__store__succeeded;
#line 752 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_9;

#line 755 "store.m"
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
#line 755 "store.m"
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
#line 2710 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__3_3  = ArgRef;
	 *mercury__store__HeadVar__5_5  = (MR_Box) S;
#line 755 "store.m"
}
#line 752 "store.m"
  }
#line 177 "store.m"
}

#line 166 "store.m"
void MR_CALL 
mercury__store__arg_ref_5_p_0(
#line 166 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_7,
#line 166 "store.m"
  MR_Word mercury__store__TypeInfo_for_ArgT_8,
#line 166 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_6,
#line 166 "store.m"
  MR_Word mercury__store__HeadVar__1_1,
#line 166 "store.m"
  MR_Integer mercury__store__HeadVar__2_2,
#line 166 "store.m"
  MR_Word * mercury__store__HeadVar__3_3,
#line 166 "store.m"
  MR_Box mercury__store__HeadVar__4_4,
#line 166 "store.m"
  MR_Box * mercury__store__HeadVar__5_5)
#line 166 "store.m"
{
#line 686 "store.m"
  {
#line 686 "store.m"
    MR_bool mercury__store__succeeded;
#line 686 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_9;

#line 689 "store.m"
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
#line 689 "store.m"
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
#line 2806 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__3_3  = ArgRef;
	 *mercury__store__HeadVar__5_5  = (MR_Box) S;
#line 689 "store.m"
}
#line 686 "store.m"
  }
#line 166 "store.m"
}

#line 154 "store.m"
void MR_CALL 
mercury__store__ref_functor_5_p_0(
#line 154 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_16,
#line 154 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_15,
#line 154 "store.m"
  MR_Word mercury__store__Ref_6,
#line 154 "store.m"
  MR_String * mercury__store__Functor_7,
#line 154 "store.m"
  MR_Integer * mercury__store__Arity_8,
#line 154 "store.m"
  MR_Box mercury__store__STATE_VARIABLE_Store_0_11,
#line 154 "store.m"
  MR_Box * mercury__store__STATE_VARIABLE_Store_12)
#line 154 "store.m"
{
#line 674 "store.m"
  {
#line 674 "store.m"
    MR_bool mercury__store__succeeded;
#line 674 "store.m"
    MR_Box mercury__store__Val_10;
#line 644 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_17;
#line 644 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_18;

#line 647 "store.m"
{
#define MR_PROC_LABEL mercury__store__ref_functor_5_p_0

	MR_Word Ref;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Ref =  mercury__store__Ref_6 ;
	S0 = (MR_Word) mercury__store__STATE_VARIABLE_Store_0_11 ;
		{
#line 647 "store.m"

    Val = * (MR_Word *) Ref;
    S = S0;

#line 2866 "store.c"

		;}
#undef MR_PROC_LABEL
	 mercury__store__Val_10  = (MR_Box) Val;
	 *mercury__store__STATE_VARIABLE_Store_12  = (MR_Box) S;
#line 647 "store.m"
}
#line 676 "store.m"
    {
#line 676 "store.m"
      mercury__deconstruct__functor_4_p_1(mercury__store__TypeInfo_for_T_16, mercury__store__Val_10, (MR_Integer) 1, mercury__store__Functor_7, mercury__store__Arity_8);
#line 676 "store.m"
      return;
    }
#line 674 "store.m"
  }
#line 154 "store.m"
}

#line 146 "store.m"
void MR_CALL 
mercury__store__new_ref_4_p_0(
#line 146 "store.m"
  MR_Word mercury__store__TypeInfo_for_T_6,
#line 146 "store.m"
  MR_Word mercury__store__TypeClassInfo_for_store_5,
#line 146 "store.m"
  MR_Box mercury__store__HeadVar__1_1,
#line 146 "store.m"
  MR_Word * mercury__store__HeadVar__2_2,
#line 146 "store.m"
  MR_Box mercury__store__HeadVar__3_3,
#line 146 "store.m"
  MR_Box * mercury__store__HeadVar__4_4)
#line 146 "store.m"
{
#line 599 "store.m"
  {
#line 599 "store.m"
    MR_bool mercury__store__succeeded;
#line 599 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 599 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 602 "store.m"
{
#define MR_PROC_LABEL mercury__store__new_ref_4_p_0

	MR_Word Val;
	MR_Word Ref;
	MR_Word S0;
	MR_Word S;

	Val = (MR_Word) mercury__store__HeadVar__1_1 ;
	S0 = (MR_Word) mercury__store__HeadVar__3_3 ;
		{
#line 602 "store.m"

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.ref/2");
    MR_define_size_slot(0, Ref, 1);
    * (MR_Word *) Ref = Val;
    S = S0;

#line 2932 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__2_2  = Ref;
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 602 "store.m"
}
#line 599 "store.m"
  }
#line 146 "store.m"
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
#line 466 "store.m"
  {
#line 466 "store.m"
    MR_bool mercury__store__succeeded;
#line 466 "store.m"
    MR_Box mercury__store__Value_8;
#line 466 "store.m"
    MR_Box mercury__store__STATE_VARIABLE_Store_11_11;
#line 442 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_15;
#line 442 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_16;
#line 468 "store.m"
    MR_Box MR_CALL (* mercury__store__func_0)(MR_Box, MR_Box);
#line 351 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_17;
#line 351 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_18;

#line 445 "store.m"
{
#define MR_PROC_LABEL mercury__store__new_cyclic_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) mercury__store__STATE_VARIABLE_Store_0_9 ;
		{
#line 445 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    S = S0;

#line 2998 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__MutVar_6  = Mutvar;
	 mercury__store__STATE_VARIABLE_Store_11_11  = (MR_Box) S;
#line 445 "store.m"
}
#line 468 "store.m"
    mercury__store__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__store__Func_5, (MR_Integer) 1)));
#line 468 "store.m"
    {
#line 468 "store.m"
      mercury__store__Value_8 = mercury__store__func_0(((MR_Box) mercury__store__Func_5), ((MR_Box) (*mercury__store__MutVar_6)));
    }
#line 354 "store.m"
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
#line 354 "store.m"

    * (MR_Word *) Mutvar = Val;
    S = S0;

#line 3031 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__STATE_VARIABLE_Store_10  = (MR_Box) S;
#line 354 "store.m"
}
#line 466 "store.m"
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
#line 351 "store.m"
  {
#line 351 "store.m"
    MR_bool mercury__store__succeeded;
#line 351 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 351 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 354 "store.m"
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
#line 354 "store.m"

    * (MR_Word *) Mutvar = Val;
    S = S0;

#line 3087 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 354 "store.m"
}
#line 351 "store.m"
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
#line 343 "store.m"
  {
#line 343 "store.m"
    MR_bool mercury__store__succeeded;
#line 343 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 343 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 346 "store.m"
{
#define MR_PROC_LABEL mercury__store__get_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Mutvar =  mercury__store__HeadVar__1_1 ;
	S0 = (MR_Word) mercury__store__HeadVar__3_3 ;
		{
#line 346 "store.m"

    Val = * (MR_Word *) Mutvar;
    S = S0;

#line 3142 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__2_2  = (MR_Box) Val;
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 346 "store.m"
}
#line 343 "store.m"
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
#line 435 "store.m"
  {
#line 435 "store.m"
    MR_bool mercury__store__succeeded;
#line 435 "store.m"
    MR_Box mercury__store__Value_8;
#line 435 "store.m"
    MR_Box mercury__store__STATE_VARIABLE_S_11_11;
#line 343 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_15;
#line 343 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_16;
#line 332 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_17;
#line 332 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_18;

#line 346 "store.m"
{
#define MR_PROC_LABEL mercury__store__copy_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Mutvar =  mercury__store__Mutvar_5 ;
	S0 = (MR_Word) mercury__store__STATE_VARIABLE_S_0_9 ;
		{
#line 346 "store.m"

    Val = * (MR_Word *) Mutvar;
    S = S0;

#line 3206 "store.c"

		;}
#undef MR_PROC_LABEL
	 mercury__store__Value_8  = (MR_Box) Val;
	 mercury__store__STATE_VARIABLE_S_11_11  = (MR_Box) S;
#line 346 "store.m"
}
#line 335 "store.m"
{
#define MR_PROC_LABEL mercury__store__copy_mutvar_4_p_0

	MR_Word Val;
	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	Val = (MR_Word) mercury__store__Value_8 ;
	S0 = (MR_Word) mercury__store__STATE_VARIABLE_S_11_11 ;
		{
#line 335 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    * (MR_Word *) Mutvar = Val;
    S = S0;

#line 3234 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__Copy_6  = Mutvar;
	 *mercury__store__STATE_VARIABLE_S_10  = (MR_Box) S;
#line 335 "store.m"
}
#line 435 "store.m"
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
#line 332 "store.m"
  {
#line 332 "store.m"
    MR_bool mercury__store__succeeded;
#line 332 "store.m"
    MR_Word mercury__store__TypeInfo_for_T_7;
#line 332 "store.m"
    MR_Word mercury__store__TypeClassInfo_for_store_8;

#line 335 "store.m"
{
#define MR_PROC_LABEL mercury__store__new_mutvar_4_p_0

	MR_Word Val;
	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	Val = (MR_Word) mercury__store__HeadVar__1_1 ;
	S0 = (MR_Word) mercury__store__HeadVar__3_3 ;
		{
#line 335 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    * (MR_Word *) Mutvar = Val;
    S = S0;

#line 3293 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__HeadVar__2_2  = Mutvar;
	 *mercury__store__HeadVar__4_4  = (MR_Box) S;
#line 335 "store.m"
}
#line 332 "store.m"
  }
#line 73 "store.m"
}

#line 52 "store.m"
void MR_CALL 
mercury__store__init_1_p_0(
#line 52 "store.m"
  MR_Word * mercury__store__TypeInfo_for_S_3)
#line 52 "store.m"
{
#line 292 "store.m"
  {
#line 292 "store.m"
    MR_bool mercury__store__succeeded;

#line 295 "store.m"
{
#define MR_PROC_LABEL mercury__store__init_1_p_0

	MR_Word TypeInfo_for_S;

		{
#line 295 "store.m"

    TypeInfo_for_S = 0;

#line 3329 "store.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__store__TypeInfo_for_S_3  = TypeInfo_for_S;
#line 295 "store.m"
}
#line 292 "store.m"
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
