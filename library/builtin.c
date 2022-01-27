/*
** Automatically generated from `builtin.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module builtin. */
/* :- implementation. */

/*
INIT mercury__builtin__init
ENDINIT
*/

#include "builtin.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
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
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 85 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__plain_builtin__type_ctor_info_comparison_result_0__pseudo_1__pseudo_1;

#line 88 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0;

#line 91 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0;

#line 94 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0;

#line 97 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1;

#line 100 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2;

#line 103 "builtin.c"
static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_value_ordered_comparison_result_0[3];

#line 106 "builtin.c"
static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_name_ordered_comparison_result_0[3];

#line 109 "builtin.c"
static const MR_Integer mercury__builtin__builtin__functor_number_map_comparison_result_0[3];

#line 112 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__builtin____vpti_pred_2__pseudo_1__pseudo_1;

#line 115 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____compare_1_0_10001(
#line 118 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 120 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 122 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3);

#line 125 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____compare_1_0_10001(
#line 128 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 130 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 132 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 134 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4);

#line 137 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_func_1_0_10001(
#line 140 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 142 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 144 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3);

#line 147 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_func_1_0_10001(
#line 150 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 152 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 154 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 156 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4);

#line 159 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_pred_1_0_10001(
#line 162 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 164 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 166 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3);

#line 169 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_pred_1_0_10001(
#line 172 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 174 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 176 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 178 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4);

#line 181 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_result_0_0_10001(
#line 184 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 186 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2);

#line 189 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_result_0_0_10001(
#line 192 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_1,
#line 194 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 196 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3);

#line 199 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____unify_1_0_10001(
#line 202 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 204 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 206 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3);

#line 209 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____unify_1_0_10001(
#line 212 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 214 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 216 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 218 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__builtin_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__builtin_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__builtin_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__builtin_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



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
#include "table_builtin.mh"
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



#line 577 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__plain_builtin__type_ctor_info_comparison_result_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_comparison_result_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 588 "builtin.c"
const MR_TypeCtorInfo_Struct mercury__builtin__builtin__type_ctor_info_compare_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__builtin____Unify____compare_1_0_10001)),
  ((MR_Box) (mercury__builtin____Compare____compare_1_0_10001)),
  (MR_String) "builtin",
  (MR_String) "compare",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin____vpti_pred_3__plain_builtin__type_ctor_info_comparison_result_0__pseudo_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 609 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_comparison_result_0
  }
};

#line 620 "builtin.c"
const MR_TypeCtorInfo_Struct mercury__builtin__builtin__type_ctor_info_comparison_func_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__builtin____Unify____comparison_func_1_0_10001)),
  ((MR_Box) (mercury__builtin____Compare____comparison_func_1_0_10001)),
  (MR_String) "builtin",
  (MR_String) "comparison_func",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin____vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 641 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_comparison_result_0
  }
};

#line 652 "builtin.c"
const MR_TypeCtorInfo_Struct mercury__builtin__builtin__type_ctor_info_comparison_pred_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__builtin____Unify____comparison_pred_1_0_10001)),
  ((MR_Box) (mercury__builtin____Compare____comparison_pred_1_0_10001)),
  (MR_String) "builtin",
  (MR_String) "comparison_pred",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin____vpti_pred_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 673 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0 = {
  (MR_String) "=",
  (MR_Integer) 0
};

#line 679 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1 = {
  (MR_String) "<",
  (MR_Integer) 1
};

#line 685 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2 = {
  (MR_String) ">",
  (MR_Integer) 2
};

#line 691 "builtin.c"
static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_value_ordered_comparison_result_0[3] = {
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2
};

#line 698 "builtin.c"
static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_name_ordered_comparison_result_0[3] = {
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2
};

#line 705 "builtin.c"
static const MR_Integer mercury__builtin__builtin__functor_number_map_comparison_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 712 "builtin.c"
const MR_TypeCtorInfo_Struct mercury__builtin__builtin__type_ctor_info_comparison_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__builtin____Unify____comparison_result_0_0_10001)),
  ((MR_Box) (mercury__builtin____Compare____comparison_result_0_0_10001)),
  (MR_String) "builtin",
  (MR_String) "comparison_result",
  {
    mercury__builtin__builtin__enum_name_ordered_comparison_result_0
  },
  {
    mercury__builtin__builtin__enum_value_ordered_comparison_result_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__builtin__builtin__functor_number_map_comparison_result_0
};

#line 733 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__builtin____vpti_pred_2__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 743 "builtin.c"
const MR_TypeCtorInfo_Struct mercury__builtin__builtin__type_ctor_info_unify_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__builtin____Unify____unify_1_0_10001)),
  ((MR_Box) (mercury__builtin____Compare____unify_1_0_10001)),
  (MR_String) "builtin",
  (MR_String) "unify",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin____vpti_pred_2__pseudo_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 764 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____compare_1_0_10001(
#line 767 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 769 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 771 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3)
#line 773 "builtin.c"
{
#line 775 "builtin.c"
  {
#line 777 "builtin.c"
    MR_bool mercury__builtin__succeeded;

#line 780 "builtin.c"
    {
#line 782 "builtin.c"
      mercury__builtin__succeeded = mercury__builtin____Unify____compare_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), ((MR_Word) mercury__builtin__wrapper_arg_2), ((MR_Word) mercury__builtin__wrapper_arg_3));
    }
#line 785 "builtin.c"
    return mercury__builtin__succeeded;
#line 787 "builtin.c"
  }
#line 789 "builtin.c"
}

#line 792 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____compare_1_0_10001(
#line 795 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 797 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 799 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 801 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4)
#line 803 "builtin.c"
{
#line 805 "builtin.c"
  {
#line 807 "builtin.c"
    MR_Word mercury__builtin__conv0_HeadVar__1_1;

#line 810 "builtin.c"
    {
#line 812 "builtin.c"
      mercury__builtin____Compare____compare_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), &mercury__builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__builtin__wrapper_arg_3), ((MR_Word) mercury__builtin__wrapper_arg_4));
    }
#line 815 "builtin.c"
    *mercury__builtin__wrapper_arg_2 = ((MR_Box) (mercury__builtin__conv0_HeadVar__1_1));
#line 817 "builtin.c"
  }
#line 819 "builtin.c"
}

#line 822 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_func_1_0_10001(
#line 825 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 827 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 829 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3)
#line 831 "builtin.c"
{
#line 833 "builtin.c"
  {
#line 835 "builtin.c"
    MR_bool mercury__builtin__succeeded;

#line 838 "builtin.c"
    {
#line 840 "builtin.c"
      mercury__builtin__succeeded = mercury__builtin____Unify____comparison_func_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), ((MR_Word) mercury__builtin__wrapper_arg_2), ((MR_Word) mercury__builtin__wrapper_arg_3));
    }
#line 843 "builtin.c"
    return mercury__builtin__succeeded;
#line 845 "builtin.c"
  }
#line 847 "builtin.c"
}

#line 850 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_func_1_0_10001(
#line 853 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 855 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 857 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 859 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4)
#line 861 "builtin.c"
{
#line 863 "builtin.c"
  {
#line 865 "builtin.c"
    MR_Word mercury__builtin__conv0_HeadVar__1_1;

#line 868 "builtin.c"
    {
#line 870 "builtin.c"
      mercury__builtin____Compare____comparison_func_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), &mercury__builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__builtin__wrapper_arg_3), ((MR_Word) mercury__builtin__wrapper_arg_4));
    }
#line 873 "builtin.c"
    *mercury__builtin__wrapper_arg_2 = ((MR_Box) (mercury__builtin__conv0_HeadVar__1_1));
#line 875 "builtin.c"
  }
#line 877 "builtin.c"
}

#line 880 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_pred_1_0_10001(
#line 883 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 885 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 887 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3)
#line 889 "builtin.c"
{
#line 891 "builtin.c"
  {
#line 893 "builtin.c"
    MR_bool mercury__builtin__succeeded;

#line 896 "builtin.c"
    {
#line 898 "builtin.c"
      mercury__builtin__succeeded = mercury__builtin____Unify____comparison_pred_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), ((MR_Word) mercury__builtin__wrapper_arg_2), ((MR_Word) mercury__builtin__wrapper_arg_3));
    }
#line 901 "builtin.c"
    return mercury__builtin__succeeded;
#line 903 "builtin.c"
  }
#line 905 "builtin.c"
}

#line 908 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_pred_1_0_10001(
#line 911 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 913 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 915 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 917 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4)
#line 919 "builtin.c"
{
#line 921 "builtin.c"
  {
#line 923 "builtin.c"
    MR_Word mercury__builtin__conv0_HeadVar__1_1;

#line 926 "builtin.c"
    {
#line 928 "builtin.c"
      mercury__builtin____Compare____comparison_pred_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), &mercury__builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__builtin__wrapper_arg_3), ((MR_Word) mercury__builtin__wrapper_arg_4));
    }
#line 931 "builtin.c"
    *mercury__builtin__wrapper_arg_2 = ((MR_Box) (mercury__builtin__conv0_HeadVar__1_1));
#line 933 "builtin.c"
  }
#line 935 "builtin.c"
}

#line 938 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_result_0_0_10001(
#line 941 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 943 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2)
#line 945 "builtin.c"
{
#line 947 "builtin.c"
  {
#line 949 "builtin.c"
    MR_bool mercury__builtin__succeeded;

#line 952 "builtin.c"
    {
#line 954 "builtin.c"
      mercury__builtin__succeeded = mercury__builtin____Unify____comparison_result_0_0(((MR_Word) mercury__builtin__wrapper_arg_1), ((MR_Word) mercury__builtin__wrapper_arg_2));
    }
#line 957 "builtin.c"
    return mercury__builtin__succeeded;
#line 959 "builtin.c"
  }
#line 961 "builtin.c"
}

#line 964 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_result_0_0_10001(
#line 967 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_1,
#line 969 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 971 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3)
#line 973 "builtin.c"
{
#line 975 "builtin.c"
  {
#line 977 "builtin.c"
    MR_Word mercury__builtin__conv0_HeadVar__1_1;

#line 980 "builtin.c"
    {
#line 982 "builtin.c"
      mercury__builtin____Compare____comparison_result_0_0(&mercury__builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__builtin__wrapper_arg_2), ((MR_Word) mercury__builtin__wrapper_arg_3));
    }
#line 985 "builtin.c"
    *mercury__builtin__wrapper_arg_1 = ((MR_Box) (mercury__builtin__conv0_HeadVar__1_1));
#line 987 "builtin.c"
  }
#line 989 "builtin.c"
}

#line 992 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____unify_1_0_10001(
#line 995 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 997 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 999 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3)
#line 1001 "builtin.c"
{
#line 1003 "builtin.c"
  {
#line 1005 "builtin.c"
    MR_bool mercury__builtin__succeeded;

#line 1008 "builtin.c"
    {
#line 1010 "builtin.c"
      mercury__builtin__succeeded = mercury__builtin____Unify____unify_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), ((MR_Word) mercury__builtin__wrapper_arg_2), ((MR_Word) mercury__builtin__wrapper_arg_3));
    }
#line 1013 "builtin.c"
    return mercury__builtin__succeeded;
#line 1015 "builtin.c"
  }
#line 1017 "builtin.c"
}

#line 1020 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____unify_1_0_10001(
#line 1023 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 1025 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 1027 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 1029 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4)
#line 1031 "builtin.c"
{
#line 1033 "builtin.c"
  {
#line 1035 "builtin.c"
    MR_Word mercury__builtin__conv0_HeadVar__1_1;

#line 1038 "builtin.c"
    {
#line 1040 "builtin.c"
      mercury__builtin____Compare____unify_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), &mercury__builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__builtin__wrapper_arg_3), ((MR_Word) mercury__builtin__wrapper_arg_4));
    }
#line 1043 "builtin.c"
    *mercury__builtin__wrapper_arg_2 = ((MR_Box) (mercury__builtin__conv0_HeadVar__1_1));
#line 1045 "builtin.c"
  }
#line 1047 "builtin.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__builtin__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 247 "builtin.m"
void MR_CALL 
mercury__builtin____Compare____unify_1_0(
#line 247 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_6,
#line 247 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 247 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2,
#line 247 "builtin.m"
  MR_Word mercury__builtin__HeadVar__3_3)
#line 247 "builtin.m"
{
#line 247 "builtin.m"
  {
#line 247 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 247 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar1_4 = mercury__builtin__HeadVar__2_2;
#line 247 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar2_5 = mercury__builtin__HeadVar__3_3;

#line 247 "builtin.m"
    {
#line 247 "builtin.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__builtin__HeadVar__1_1, (MR_Word) mercury__builtin__Cast_HeadVar1_4, (MR_Word) mercury__builtin__Cast_HeadVar2_5);
#line 247 "builtin.m"
      return;
    }
#line 247 "builtin.m"
  }
#line 247 "builtin.m"
}

#line 247 "builtin.m"
MR_bool MR_CALL 
mercury__builtin____Unify____unify_1_0(
#line 247 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_5,
#line 247 "builtin.m"
  MR_Word mercury__builtin__HeadVar__1_1,
#line 247 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2)
#line 247 "builtin.m"
{
#line 247 "builtin.m"
  {
#line 247 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 247 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar1_3 = mercury__builtin__HeadVar__1_1;
#line 247 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar2_4 = mercury__builtin__HeadVar__2_2;

#line 247 "builtin.m"
    {
#line 247 "builtin.m"
      return mercury__builtin__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__builtin__Cast_HeadVar1_3, (MR_Word) mercury__builtin__Cast_HeadVar2_4);
    }
#line 247 "builtin.m"
    return mercury__builtin__succeeded;
#line 247 "builtin.m"
  }
#line 247 "builtin.m"
}

#line 250 "builtin.m"
void MR_CALL 
mercury__builtin____Compare____comparison_result_0_0(
#line 250 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 250 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2,
#line 250 "builtin.m"
  MR_Word mercury__builtin__HeadVar__3_3)
#line 250 "builtin.m"
{
#line 250 "builtin.m"
  {
#line 250 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 250 "builtin.m"
    MR_Integer mercury__builtin__Cast_HeadVar1_4 = (MR_Integer) mercury__builtin__HeadVar__2_2;
#line 250 "builtin.m"
    MR_Integer mercury__builtin__Cast_HeadVar2_5 = (MR_Integer) mercury__builtin__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__builtin__succeeded = (mercury__builtin__Cast_HeadVar1_4 < mercury__builtin__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__builtin__succeeded)
#line 68 "private_builtin.opt"
      *mercury__builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__builtin__succeeded = (mercury__builtin__Cast_HeadVar1_4 == mercury__builtin__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__builtin__succeeded)
#line 73 "private_builtin.opt"
          *mercury__builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 250 "builtin.m"
  }
#line 250 "builtin.m"
}

#line 250 "builtin.m"
MR_bool MR_CALL 
mercury__builtin____Unify____comparison_result_0_0(
#line 250 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_1,
#line 250 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2)
#line 250 "builtin.m"
{
#line 1189 "builtin.c"
  {
#line 1191 "builtin.c"
    MR_bool mercury__builtin__succeeded = (mercury__builtin__HeadVar__2_1 == mercury__builtin__HeadVar__2_2);

#line 1194 "builtin.c"
    return mercury__builtin__succeeded;
#line 1196 "builtin.c"
  }
#line 250 "builtin.m"
}

#line 336 "builtin.m"
void MR_CALL 
mercury__builtin____Compare____comparison_pred_1_0(
#line 336 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_6,
#line 336 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 336 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2,
#line 336 "builtin.m"
  MR_Word mercury__builtin__HeadVar__3_3)
#line 336 "builtin.m"
{
#line 336 "builtin.m"
  {
#line 336 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 336 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar1_4 = mercury__builtin__HeadVar__2_2;
#line 336 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar2_5 = mercury__builtin__HeadVar__3_3;

#line 336 "builtin.m"
    {
#line 336 "builtin.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__builtin__HeadVar__1_1, (MR_Word) mercury__builtin__Cast_HeadVar1_4, (MR_Word) mercury__builtin__Cast_HeadVar2_5);
#line 336 "builtin.m"
      return;
    }
#line 336 "builtin.m"
  }
#line 336 "builtin.m"
}

#line 336 "builtin.m"
MR_bool MR_CALL 
mercury__builtin____Unify____comparison_pred_1_0(
#line 336 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_5,
#line 336 "builtin.m"
  MR_Word mercury__builtin__HeadVar__1_1,
#line 336 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2)
#line 336 "builtin.m"
{
#line 336 "builtin.m"
  {
#line 336 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 336 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar1_3 = mercury__builtin__HeadVar__1_1;
#line 336 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar2_4 = mercury__builtin__HeadVar__2_2;

#line 336 "builtin.m"
    {
#line 336 "builtin.m"
      return mercury__builtin__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__builtin__Cast_HeadVar1_3, (MR_Word) mercury__builtin__Cast_HeadVar2_4);
    }
#line 336 "builtin.m"
    return mercury__builtin__succeeded;
#line 336 "builtin.m"
  }
#line 336 "builtin.m"
}

#line 340 "builtin.m"
void MR_CALL 
mercury__builtin____Compare____comparison_func_1_0(
#line 340 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_6,
#line 340 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 340 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2,
#line 340 "builtin.m"
  MR_Word mercury__builtin__HeadVar__3_3)
#line 340 "builtin.m"
{
#line 340 "builtin.m"
  {
#line 340 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 340 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar1_4 = mercury__builtin__HeadVar__2_2;
#line 340 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar2_5 = mercury__builtin__HeadVar__3_3;

#line 340 "builtin.m"
    {
#line 340 "builtin.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__builtin__HeadVar__1_1, (MR_Word) mercury__builtin__Cast_HeadVar1_4, (MR_Word) mercury__builtin__Cast_HeadVar2_5);
#line 340 "builtin.m"
      return;
    }
#line 340 "builtin.m"
  }
#line 340 "builtin.m"
}

#line 340 "builtin.m"
MR_bool MR_CALL 
mercury__builtin____Unify____comparison_func_1_0(
#line 340 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_5,
#line 340 "builtin.m"
  MR_Word mercury__builtin__HeadVar__1_1,
#line 340 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2)
#line 340 "builtin.m"
{
#line 340 "builtin.m"
  {
#line 340 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 340 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar1_3 = mercury__builtin__HeadVar__1_1;
#line 340 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar2_4 = mercury__builtin__HeadVar__2_2;

#line 340 "builtin.m"
    {
#line 340 "builtin.m"
      return mercury__builtin__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__builtin__Cast_HeadVar1_3, (MR_Word) mercury__builtin__Cast_HeadVar2_4);
    }
#line 340 "builtin.m"
    return mercury__builtin__succeeded;
#line 340 "builtin.m"
  }
#line 340 "builtin.m"
}

#line 284 "builtin.m"
void MR_CALL 
mercury__builtin____Compare____compare_1_0(
#line 284 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_6,
#line 284 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 284 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2,
#line 284 "builtin.m"
  MR_Word mercury__builtin__HeadVar__3_3)
#line 284 "builtin.m"
{
#line 284 "builtin.m"
  {
#line 284 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 284 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar1_4 = mercury__builtin__HeadVar__2_2;
#line 284 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar2_5 = mercury__builtin__HeadVar__3_3;

#line 284 "builtin.m"
    {
#line 284 "builtin.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__builtin__HeadVar__1_1, (MR_Word) mercury__builtin__Cast_HeadVar1_4, (MR_Word) mercury__builtin__Cast_HeadVar2_5);
#line 284 "builtin.m"
      return;
    }
#line 284 "builtin.m"
  }
#line 284 "builtin.m"
}

#line 284 "builtin.m"
MR_bool MR_CALL 
mercury__builtin____Unify____compare_1_0(
#line 284 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_5,
#line 284 "builtin.m"
  MR_Word mercury__builtin__HeadVar__1_1,
#line 284 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2)
#line 284 "builtin.m"
{
#line 284 "builtin.m"
  {
#line 284 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 284 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar1_3 = mercury__builtin__HeadVar__1_1;
#line 284 "builtin.m"
    MR_Word mercury__builtin__Cast_HeadVar2_4 = mercury__builtin__HeadVar__2_2;

#line 284 "builtin.m"
    {
#line 284 "builtin.m"
      return mercury__builtin__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__builtin__Cast_HeadVar1_3, (MR_Word) mercury__builtin__Cast_HeadVar2_4);
    }
#line 284 "builtin.m"
    return mercury__builtin__succeeded;
#line 284 "builtin.m"
  }
#line 284 "builtin.m"
}

#line 43 "builtin.m"
void MR_CALL 
mercury__builtin____Compare____c_pointer_0_0(
#line 43 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 43 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2,
#line 43 "builtin.m"
  MR_Word mercury__builtin__HeadVar__3_3);

#line 43 "builtin.m"
MR_bool MR_CALL 
mercury__builtin____Unify____c_pointer_0_0(
#line 43 "builtin.m"
  MR_Word mercury__builtin__HeadVar__1_1,
#line 43 "builtin.m"
  MR_Word mercury__builtin__HeadVar__2_2);

#line 563 "builtin.m"
void MR_CALL 
mercury__builtin__call_rtti_generic_compare_3_p_0(
#line 563 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_7,
#line 563 "builtin.m"
  MR_Word * mercury__builtin__Res_4,
#line 563 "builtin.m"
  MR_Box mercury__builtin__X_5,
#line 563 "builtin.m"
  MR_Box mercury__builtin__Y_6)
#line 563 "builtin.m"
{
#line 572 "builtin.m"
  {
#line 572 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 572 "builtin.m"
    {
#line 572 "builtin.m"
      mercury__rtti_implementation__generic_compare_3_p_0(mercury__builtin__TypeInfo_for_T_7, mercury__builtin__Res_4, mercury__builtin__X_5, mercury__builtin__Y_6);
#line 572 "builtin.m"
      return;
    }
#line 572 "builtin.m"
  }
#line 563 "builtin.m"
}

#line 562 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__call_rtti_generic_unify_2_p_0(
#line 562 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_5,
#line 562 "builtin.m"
  MR_Box mercury__builtin__X_3,
#line 562 "builtin.m"
  MR_Box mercury__builtin__Y_4)
#line 562 "builtin.m"
{
#line 570 "builtin.m"
  {
#line 570 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 570 "builtin.m"
    {
#line 570 "builtin.m"
      return mercury__builtin__succeeded = mercury__rtti_implementation__generic_unify_2_p_0(mercury__builtin__TypeInfo_for_T_5, mercury__builtin__X_3, mercury__builtin__Y_4);
    }
#line 570 "builtin.m"
    return mercury__builtin__succeeded;
#line 570 "builtin.m"
  }
#line 562 "builtin.m"
}

#line 458 "builtin.m"
void MR_CALL 
mercury__builtin__compare_representation_3_p_0(
#line 458 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_4,
#line 458 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 458 "builtin.m"
  MR_Box mercury__builtin__HeadVar__2_2,
#line 458 "builtin.m"
  MR_Box mercury__builtin__HeadVar__3_3);

#line 437 "builtin.m"
void MR_CALL 
mercury__builtin__get_one_solution_io_4_p_0(
#line 437 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_11,
#line 437 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_IO_12,
#line 437 "builtin.m"
  MR_Word mercury__builtin__Pred_5,
#line 437 "builtin.m"
  MR_Box * mercury__builtin__X_6,
#line 437 "builtin.m"
  MR_Box mercury__builtin__STATE_VARIABLE_IO_0_8,
#line 437 "builtin.m"
  MR_Box * mercury__builtin__STATE_VARIABLE_IO_9)
#line 437 "builtin.m"
{
#line 502 "builtin.m"
  {
#line 502 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 503 "builtin.m"
    void MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__Pred_5, (MR_Integer) 1)));

#line 503 "builtin.m"
    {
#line 503 "builtin.m"
      mercury__builtin__func_0(((MR_Box) mercury__builtin__Pred_5), mercury__builtin__X_6, mercury__builtin__STATE_VARIABLE_IO_0_8, mercury__builtin__STATE_VARIABLE_IO_9);
    }
#line 1246 "builtin.m"
    {
#line 1246 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
#line 1246 "builtin.m"
      return;
    }
#line 502 "builtin.m"
  }
#line 437 "builtin.m"
}

#line 434 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__get_one_solution_1_f_1(
#line 434 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_5,
#line 434 "builtin.m"
  MR_Word mercury__builtin__CCPred_3,
#line 434 "builtin.m"
  MR_Box * mercury__builtin__OutVal_4)
#line 434 "builtin.m"
{
#line 492 "builtin.m"
  {
#line 492 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 493 "builtin.m"
    MR_bool MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_3, (MR_Integer) 1)));

#line 493 "builtin.m"
    {
#line 493 "builtin.m"
      mercury__builtin__succeeded = mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_3), mercury__builtin__OutVal_4);
    }
#line 493 "builtin.m"
    if (mercury__builtin__succeeded)
#line 493 "builtin.m"
      {
#line 1246 "builtin.m"
        {
#line 1246 "builtin.m"
          mercury__private_builtin__imp_0_p_0();
        }
#line 1246 "builtin.m"
        mercury__builtin__succeeded = MR_TRUE;
#line 493 "builtin.m"
      }
#line 492 "builtin.m"
    return mercury__builtin__succeeded;
#line 492 "builtin.m"
  }
#line 434 "builtin.m"
}

#line 433 "builtin.m"
MR_Box MR_CALL 
mercury__builtin__get_one_solution_1_f_0(
#line 433 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_5,
#line 433 "builtin.m"
  MR_Word mercury__builtin__CCPred_3)
#line 433 "builtin.m"
{
#line 492 "builtin.m"
  {
#line 492 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 492 "builtin.m"
    MR_Box mercury__builtin__OutVal_4;
#line 493 "builtin.m"
    void MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_3, (MR_Integer) 1)));

#line 493 "builtin.m"
    {
#line 493 "builtin.m"
      mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_3), &mercury__builtin__OutVal_4);
    }
#line 1246 "builtin.m"
    {
#line 1246 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
    }
#line 492 "builtin.m"
    return mercury__builtin__OutVal_4;
#line 492 "builtin.m"
  }
#line 433 "builtin.m"
}

#line 407 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__dynamic_cast_2_p_0(
#line 407 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T1_5,
#line 407 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T2_6,
#line 407 "builtin.m"
  MR_Box mercury__builtin__X_3,
#line 407 "builtin.m"
  MR_Box * mercury__builtin__Y_4)
#line 407 "builtin.m"
{
#line 473 "builtin.m"
  {
#line 473 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 473 "builtin.m"
    {
#line 473 "builtin.m"
      return mercury__builtin__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__builtin__TypeInfo_for_T1_5, mercury__builtin__TypeInfo_for_T2_6, mercury__builtin__X_3, mercury__builtin__Y_4);
    }
#line 473 "builtin.m"
    return mercury__builtin__succeeded;
#line 473 "builtin.m"
  }
#line 407 "builtin.m"
}

#line 399 "builtin.m"
void MR_CALL 
mercury__builtin__semipure_true_0_p_0(void)
#line 399 "builtin.m"
{
#line 1249 "builtin.m"
  {
#line 1249 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1249 "builtin.m"
  }
#line 399 "builtin.m"
}

#line 395 "builtin.m"
void MR_CALL 
mercury__builtin__impure_true_0_p_0(void)
#line 395 "builtin.m"
{
#line 1246 "builtin.m"
  {
#line 1246 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1246 "builtin.m"
    {
#line 1246 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
#line 1246 "builtin.m"
      return;
    }
#line 1246 "builtin.m"
  }
#line 395 "builtin.m"
}

#line 391 "builtin.m"
void MR_CALL 
mercury__builtin__cc_multi_equal_2_p_1(
#line 391 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_3,
#line 391 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1,
#line 391 "builtin.m"
  MR_Box * mercury__builtin__HeadVar__2_2)
#line 391 "builtin.m"
{
#line 1189 "builtin.m"
  {
#line 1189 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 1189 "builtin.m"
    MR_Word mercury__builtin__TypeInfo_for_T_4;

#line 1193 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__cc_multi_equal_2_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__builtin__HeadVar__1_1 ;
		{
#line 1193 "builtin.m"

    Y = X;

#line 1704 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__builtin__HeadVar__2_2  = (MR_Box) Y;
#line 1193 "builtin.m"
}
#line 1189 "builtin.m"
  }
#line 391 "builtin.m"
}

#line 390 "builtin.m"
void MR_CALL 
mercury__builtin__cc_multi_equal_2_p_0(
#line 390 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_3,
#line 390 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1,
#line 390 "builtin.m"
  MR_Box * mercury__builtin__HeadVar__2_2)
#line 390 "builtin.m"
{
#line 1196 "builtin.m"
  {
#line 1196 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 1196 "builtin.m"
    MR_Word mercury__builtin__TypeInfo_for_T_4;

#line 1200 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__cc_multi_equal_2_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__builtin__HeadVar__1_1 ;
		{
#line 1200 "builtin.m"

    Y = X;

#line 1747 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__builtin__HeadVar__2_2  = (MR_Box) Y;
#line 1200 "builtin.m"
}
#line 1196 "builtin.m"
  }
#line 390 "builtin.m"
}

#line 384 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__semidet_false_0_p_0(void)
#line 384 "builtin.m"
{
#line 1126 "builtin.m"
  {
#line 1126 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1130 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__semidet_false_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1130 "builtin.m"

    SUCCESS_INDICATOR = MR_FALSE;

#line 1780 "builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1130 "builtin.m"
	}
mercury__builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1126 "builtin.m"
    return mercury__builtin__succeeded;
#line 1126 "builtin.m"
  }
#line 384 "builtin.m"
}

#line 380 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__semidet_true_0_p_0(void)
#line 380 "builtin.m"
{
#line 1119 "builtin.m"
  {
#line 1119 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1123 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__semidet_true_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1123 "builtin.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1817 "builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1123 "builtin.m"
	}
mercury__builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1119 "builtin.m"
    return mercury__builtin__succeeded;
#line 1119 "builtin.m"
  }
#line 380 "builtin.m"
}

#line 376 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__semidet_fail_0_p_0(void)
#line 376 "builtin.m"
{
#line 1126 "builtin.m"
  {
#line 1126 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1130 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__semidet_fail_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1130 "builtin.m"

    SUCCESS_INDICATOR = MR_FALSE;

#line 1854 "builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1130 "builtin.m"
	}
mercury__builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1126 "builtin.m"
    return mercury__builtin__succeeded;
#line 1126 "builtin.m"
  }
#line 376 "builtin.m"
}

#line 371 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__semidet_succeed_0_p_0(void)
#line 371 "builtin.m"
{
#line 1119 "builtin.m"
  {
#line 1119 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1123 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__semidet_succeed_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1123 "builtin.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1891 "builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1123 "builtin.m"
	}
mercury__builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1119 "builtin.m"
    return mercury__builtin__succeeded;
#line 1119 "builtin.m"
  }
#line 371 "builtin.m"
}

#line 313 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__f_64_62_61_2_p_0(
#line 313 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_6,
#line 313 "builtin.m"
  MR_Box mercury__builtin__X_3,
#line 313 "builtin.m"
  MR_Box mercury__builtin__Y_4)
#line 313 "builtin.m"
{
#line 554 "builtin.m"
  {
#line 554 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 554 "builtin.m"
    MR_Word mercury__builtin__V_7_7;

#line 554 "builtin.m"
    {
#line 554 "builtin.m"
      mercury__builtin__compare_3_p_0(mercury__builtin__TypeInfo_for_T_6, &mercury__builtin__V_7_7, mercury__builtin__X_3, mercury__builtin__Y_4);
    }
#line 554 "builtin.m"
    mercury__builtin__succeeded = ((MR_Integer) 1 == mercury__builtin__V_7_7);
#line 554 "builtin.m"
    mercury__builtin__succeeded = !(mercury__builtin__succeeded);
#line 554 "builtin.m"
    return mercury__builtin__succeeded;
#line 554 "builtin.m"
  }
#line 313 "builtin.m"
}

#line 307 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__f_64_62_2_p_0(
#line 307 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_6,
#line 307 "builtin.m"
  MR_Box mercury__builtin__X_3,
#line 307 "builtin.m"
  MR_Box mercury__builtin__Y_4)
#line 307 "builtin.m"
{
#line 551 "builtin.m"
  {
#line 551 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 551 "builtin.m"
    MR_Word mercury__builtin__V_7_7;

#line 552 "builtin.m"
    {
#line 552 "builtin.m"
      mercury__builtin__compare_3_p_0(mercury__builtin__TypeInfo_for_T_6, &mercury__builtin__V_7_7, mercury__builtin__X_3, mercury__builtin__Y_4);
    }
#line 552 "builtin.m"
    mercury__builtin__succeeded = ((MR_Integer) 2 == mercury__builtin__V_7_7);
#line 551 "builtin.m"
    return mercury__builtin__succeeded;
#line 551 "builtin.m"
  }
#line 307 "builtin.m"
}

#line 301 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__f_64_61_60_2_p_0(
#line 301 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_6,
#line 301 "builtin.m"
  MR_Box mercury__builtin__X_3,
#line 301 "builtin.m"
  MR_Box mercury__builtin__Y_4)
#line 301 "builtin.m"
{
#line 550 "builtin.m"
  {
#line 550 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 550 "builtin.m"
    MR_Word mercury__builtin__V_7_7;

#line 550 "builtin.m"
    {
#line 550 "builtin.m"
      mercury__builtin__compare_3_p_0(mercury__builtin__TypeInfo_for_T_6, &mercury__builtin__V_7_7, mercury__builtin__X_3, mercury__builtin__Y_4);
    }
#line 550 "builtin.m"
    mercury__builtin__succeeded = ((MR_Integer) 2 == mercury__builtin__V_7_7);
#line 550 "builtin.m"
    mercury__builtin__succeeded = !(mercury__builtin__succeeded);
#line 550 "builtin.m"
    return mercury__builtin__succeeded;
#line 550 "builtin.m"
  }
#line 301 "builtin.m"
}

#line 295 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__f_64_60_2_p_0(
#line 295 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_6,
#line 295 "builtin.m"
  MR_Box mercury__builtin__X_3,
#line 295 "builtin.m"
  MR_Box mercury__builtin__Y_4)
#line 295 "builtin.m"
{
#line 547 "builtin.m"
  {
#line 547 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 547 "builtin.m"
    MR_Word mercury__builtin__V_7_7;

#line 548 "builtin.m"
    {
#line 548 "builtin.m"
      mercury__builtin__compare_3_p_0(mercury__builtin__TypeInfo_for_T_6, &mercury__builtin__V_7_7, mercury__builtin__X_3, mercury__builtin__Y_4);
    }
#line 548 "builtin.m"
    mercury__builtin__succeeded = ((MR_Integer) 1 == mercury__builtin__V_7_7);
#line 547 "builtin.m"
    return mercury__builtin__succeeded;
#line 547 "builtin.m"
  }
#line 295 "builtin.m"
}

#line 289 "builtin.m"
MR_Word MR_CALL 
mercury__builtin__ordering_2_f_0(
#line 289 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_7,
#line 289 "builtin.m"
  MR_Box mercury__builtin__X_4,
#line 289 "builtin.m"
  MR_Box mercury__builtin__Y_5)
#line 289 "builtin.m"
{
#line 543 "builtin.m"
  {
#line 543 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 543 "builtin.m"
    MR_Word mercury__builtin__R_6;

#line 543 "builtin.m"
    {
#line 543 "builtin.m"
      mercury__builtin__compare_3_p_0(mercury__builtin__TypeInfo_for_T_7, &mercury__builtin__R_6, mercury__builtin__X_4, mercury__builtin__Y_5);
    }
#line 543 "builtin.m"
    return mercury__builtin__R_6;
#line 543 "builtin.m"
  }
#line 289 "builtin.m"
}

#line 265 "builtin.m"
void MR_CALL 
mercury__builtin__compare_3_p_3(
#line 265 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_4,
#line 265 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 265 "builtin.m"
  MR_Box mercury__builtin__HeadVar__2_2,
#line 265 "builtin.m"
  MR_Box mercury__builtin__HeadVar__3_3);

#line 264 "builtin.m"
void MR_CALL 
mercury__builtin__compare_3_p_2(
#line 264 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_4,
#line 264 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 264 "builtin.m"
  MR_Box mercury__builtin__HeadVar__2_2,
#line 264 "builtin.m"
  MR_Box mercury__builtin__HeadVar__3_3);

#line 263 "builtin.m"
void MR_CALL 
mercury__builtin__compare_3_p_1(
#line 263 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_4,
#line 263 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 263 "builtin.m"
  MR_Box mercury__builtin__HeadVar__2_2,
#line 263 "builtin.m"
  MR_Box mercury__builtin__HeadVar__3_3);

#line 262 "builtin.m"
void MR_CALL 
mercury__builtin__compare_3_p_0(
#line 262 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_4,
#line 262 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 262 "builtin.m"
  MR_Box mercury__builtin__HeadVar__2_2,
#line 262 "builtin.m"
  MR_Box mercury__builtin__HeadVar__3_3);

#line 240 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__unify_2_p_0(
#line 240 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_3,
#line 240 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1,
#line 240 "builtin.m"
  MR_Box mercury__builtin__HeadVar__2_2);

#line 232 "builtin.m"
void MR_CALL 
mercury__builtin__promise_only_solution_io_4_p_0(
#line 232 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_11,
#line 232 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_IO_12,
#line 232 "builtin.m"
  MR_Word mercury__builtin__Pred_5,
#line 232 "builtin.m"
  MR_Box * mercury__builtin__X_6,
#line 232 "builtin.m"
  MR_Box mercury__builtin__STATE_VARIABLE_IO_0_8,
#line 232 "builtin.m"
  MR_Box * mercury__builtin__STATE_VARIABLE_IO_9)
#line 232 "builtin.m"
{
#line 502 "builtin.m"
  {
#line 502 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 503 "builtin.m"
    void MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__Pred_5, (MR_Integer) 1)));

#line 503 "builtin.m"
    {
#line 503 "builtin.m"
      mercury__builtin__func_0(((MR_Box) mercury__builtin__Pred_5), mercury__builtin__X_6, mercury__builtin__STATE_VARIABLE_IO_0_8, mercury__builtin__STATE_VARIABLE_IO_9);
    }
#line 1246 "builtin.m"
    {
#line 1246 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
#line 1246 "builtin.m"
      return;
    }
#line 502 "builtin.m"
  }
#line 232 "builtin.m"
}

#line 213 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__promise_only_solution_1_f_3(
#line 213 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_13,
#line 213 "builtin.m"
  MR_Word mercury__builtin__CCPred_1,
#line 213 "builtin.m"
  MR_Box * mercury__builtin__OutVal_2)
#line 213 "builtin.m"
{
#line 487 "builtin.m"
  {
#line 487 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 487 "builtin.m"
    MR_Box mercury__builtin__OutVal0_12;
#line 493 "builtin.m"
    MR_bool MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_1, (MR_Integer) 1)));

#line 493 "builtin.m"
    {
#line 493 "builtin.m"
      mercury__builtin__succeeded = mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_1), &mercury__builtin__OutVal0_12);
    }
#line 493 "builtin.m"
    if (mercury__builtin__succeeded)
#line 493 "builtin.m"
      {
#line 1246 "builtin.m"
        {
#line 1246 "builtin.m"
          mercury__private_builtin__imp_0_p_0();
        }
#line 1246 "builtin.m"
        mercury__builtin__succeeded = MR_TRUE;
#line 493 "builtin.m"
      }
#line 487 "builtin.m"
    if (mercury__builtin__succeeded)
#line 487 "builtin.m"
      {
#line 489 "builtin.m"
        *mercury__builtin__OutVal_2 = mercury__builtin__OutVal0_12;
#line 489 "builtin.m"
        mercury__builtin__succeeded = MR_TRUE;
#line 487 "builtin.m"
      }
#line 487 "builtin.m"
    return mercury__builtin__succeeded;
#line 487 "builtin.m"
  }
#line 213 "builtin.m"
}

#line 212 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__promise_only_solution_1_f_2(
#line 212 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_13,
#line 212 "builtin.m"
  MR_Word mercury__builtin__CCPred_1,
#line 212 "builtin.m"
  MR_Box * mercury__builtin__OutVal_2)
#line 212 "builtin.m"
{
#line 492 "builtin.m"
  {
#line 492 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 493 "builtin.m"
    MR_bool MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_1, (MR_Integer) 1)));

#line 493 "builtin.m"
    {
#line 493 "builtin.m"
      mercury__builtin__succeeded = mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_1), mercury__builtin__OutVal_2);
    }
#line 493 "builtin.m"
    if (mercury__builtin__succeeded)
#line 493 "builtin.m"
      {
#line 1246 "builtin.m"
        {
#line 1246 "builtin.m"
          mercury__private_builtin__imp_0_p_0();
        }
#line 1246 "builtin.m"
        mercury__builtin__succeeded = MR_TRUE;
#line 493 "builtin.m"
      }
#line 492 "builtin.m"
    return mercury__builtin__succeeded;
#line 492 "builtin.m"
  }
#line 212 "builtin.m"
}

#line 211 "builtin.m"
MR_Box MR_CALL 
mercury__builtin__promise_only_solution_1_f_1(
#line 211 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_13,
#line 211 "builtin.m"
  MR_Word mercury__builtin__CCPred_1)
#line 211 "builtin.m"
{
#line 482 "builtin.m"
  {
#line 482 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 482 "builtin.m"
    MR_Box mercury__builtin__OutVal_2;
#line 482 "builtin.m"
    MR_Box mercury__builtin__OutVal0_7;
#line 493 "builtin.m"
    void MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_1, (MR_Integer) 1)));

#line 493 "builtin.m"
    {
#line 493 "builtin.m"
      mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_1), &mercury__builtin__OutVal0_7);
    }
#line 1246 "builtin.m"
    {
#line 1246 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
    }
#line 484 "builtin.m"
    mercury__builtin__OutVal_2 = mercury__builtin__OutVal0_7;
#line 482 "builtin.m"
    return mercury__builtin__OutVal_2;
#line 482 "builtin.m"
  }
#line 211 "builtin.m"
}

#line 210 "builtin.m"
MR_Box MR_CALL 
mercury__builtin__promise_only_solution_1_f_0(
#line 210 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_13,
#line 210 "builtin.m"
  MR_Word mercury__builtin__CCPred_1)
#line 210 "builtin.m"
{
#line 492 "builtin.m"
  {
#line 492 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 492 "builtin.m"
    MR_Box mercury__builtin__OutVal_2;
#line 493 "builtin.m"
    void MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_1, (MR_Integer) 1)));

#line 493 "builtin.m"
    {
#line 493 "builtin.m"
      mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_1), &mercury__builtin__OutVal_2);
    }
#line 1246 "builtin.m"
    {
#line 1246 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
    }
#line 492 "builtin.m"
    return mercury__builtin__OutVal_2;
#line 492 "builtin.m"
  }
#line 210 "builtin.m"
}

#line 188 "builtin.m"
MR_Box MR_CALL 
mercury__builtin__unsafe_cast_any_to_ground_1_f_0(
#line 188 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_3,
#line 188 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1)
#line 188 "builtin.m"
{
#line 1253 "builtin.m"
  {
#line 1253 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 1253 "builtin.m"
    MR_Box mercury__builtin__HeadVar__2_2;
#line 1253 "builtin.m"
    MR_Word mercury__builtin__TypeInfo_for_T_4;

#line 1256 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__unsafe_cast_any_to_ground_1_f_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__builtin__HeadVar__1_1 ;
		{
#line 1256 "builtin.m"

    Y = X;

#line 2371 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__builtin__HeadVar__2_2  = (MR_Box) Y;
#line 1256 "builtin.m"
}
#line 1253 "builtin.m"
    return mercury__builtin__HeadVar__2_2;
#line 1253 "builtin.m"
  }
#line 188 "builtin.m"
}

#line 176 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__false_0_p_0(void)
#line 176 "builtin.m"
{
#line 176 "builtin.m"
  {
#line 176 "builtin.m"
    return MR_FALSE;
#line 176 "builtin.m"
  }
#line 176 "builtin.m"
}

#line 171 "builtin.m"
void MR_CALL 
mercury__builtin__unsafe_promise_unique_2_p_0(
#line 171 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1,
#line 171 "builtin.m"
  MR_Box * mercury__builtin__HeadVar__2_2)
#line 171 "builtin.m"
{
#line 171 "builtin.m"
  {
#line 171 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 171 "builtin.m"
    *mercury__builtin__HeadVar__2_2 = mercury__builtin__HeadVar__1_1;
#line 171 "builtin.m"
  }
#line 171 "builtin.m"
}

#line 170 "builtin.m"
MR_Box MR_CALL 
mercury__builtin__unsafe_promise_unique_1_f_0(
#line 170 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1)
#line 170 "builtin.m"
{
#line 170 "builtin.m"
  {
#line 170 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 170 "builtin.m"
    MR_Box mercury__builtin__HeadVar__2_2 = mercury__builtin__HeadVar__1_1;

#line 170 "builtin.m"
    return mercury__builtin__HeadVar__2_2;
#line 170 "builtin.m"
  }
#line 170 "builtin.m"
}

#line 156 "builtin.m"
void MR_CALL 
mercury__builtin__copy_2_p_1(
#line 156 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_3,
#line 156 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1,
#line 156 "builtin.m"
  MR_Box * mercury__builtin__HeadVar__2_2)
#line 156 "builtin.m"
{
#line 878 "builtin.m"
  {
#line 878 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 882 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__copy_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_3 ;
	Value = (MR_Word) mercury__builtin__HeadVar__1_1 ;
		{
#line 882 "builtin.m"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 2474 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__builtin__HeadVar__2_2  = (MR_Box) Copy;
#line 882 "builtin.m"
}
#line 878 "builtin.m"
  }
#line 156 "builtin.m"
}

#line 155 "builtin.m"
void MR_CALL 
mercury__builtin__copy_2_p_0(
#line 155 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_3,
#line 155 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1,
#line 155 "builtin.m"
  MR_Box * mercury__builtin__HeadVar__2_2)
#line 155 "builtin.m"
{
#line 868 "builtin.m"
  {
#line 868 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 872 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__copy_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_3 ;
	Value = (MR_Word) mercury__builtin__HeadVar__1_1 ;
		{
#line 872 "builtin.m"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 2519 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__builtin__HeadVar__2_2  = (MR_Box) Copy;
#line 872 "builtin.m"
}
#line 868 "builtin.m"
  }
#line 155 "builtin.m"
}

void mercury__builtin__init(void)
{
}

void mercury__builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__builtin__builtin__type_ctor_info_compare_1);
	MR_register_type_ctor_info(&mercury__builtin__builtin__type_ctor_info_comparison_func_1);
	MR_register_type_ctor_info(&mercury__builtin__builtin__type_ctor_info_comparison_pred_1);
	MR_register_type_ctor_info(&mercury__builtin__builtin__type_ctor_info_comparison_result_0);
	MR_register_type_ctor_info(&mercury__builtin__builtin__type_ctor_info_unify_1);
}

void mercury__builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module builtin. */
