/*
** Automatically generated from `lazy.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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


/* :- module lazy. */
/* :- implementation. */

/*
INIT mercury__lazy__init
ENDINIT
*/

#include "lazy.mih"


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
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 86 "lazy.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__lazy__lazy__pti_lazy_state_1__pseudo_1;

#line 89 "lazy.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__lazy__mutvar__pti_mutvar_1__pseudo_lazy__pti_lazy_state_1__pseudo_1;

#line 92 "lazy.c"
static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_1_0[1];

#line 95 "lazy.c"
static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_1_0;

#line 98 "lazy.c"
static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_1_0[1];

#line 101 "lazy.c"
static const MR_DuPtagLayout mercury__lazy__lazy__du_ptag_ordered_lazy_1[1];

#line 104 "lazy.c"
static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_name_ordered_lazy_1[1];

#line 107 "lazy.c"
static const MR_Integer mercury__lazy__lazy__functor_number_map_lazy_1[1];

#line 110 "lazy.c"
static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_state_1_0[1];

#line 113 "lazy.c"
static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_state_1_0;

#line 116 "lazy.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__lazy____vpti_func_1__pseudo_1;

#line 119 "lazy.c"
static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_state_1_1[1];

#line 122 "lazy.c"
static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_state_1_1;

#line 125 "lazy.c"
static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_state_1_0[1];

#line 128 "lazy.c"
static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_state_1_1[1];

#line 131 "lazy.c"
static const MR_DuPtagLayout mercury__lazy__lazy__du_ptag_ordered_lazy_state_1[2];

#line 134 "lazy.c"
static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_name_ordered_lazy_state_1[2];

#line 137 "lazy.c"
static const MR_Integer mercury__lazy__lazy__functor_number_map_lazy_state_1[2];

#line 140 "lazy.c"
static MR_bool MR_CALL 
mercury__lazy____Unify____lazy_1_0_10001(
#line 143 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_1,
#line 145 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_2,
#line 147 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_3);

#line 150 "lazy.c"
static void MR_CALL 
mercury__lazy____Compare____lazy_1_0_10001(
#line 153 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_1,
#line 155 "lazy.c"
  MR_Box * mercury__lazy__wrapper_arg_2,
#line 157 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_3,
#line 159 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_4);

#line 162 "lazy.c"
static MR_bool MR_CALL 
mercury__lazy____Unify____lazy_state_1_0_10001(
#line 165 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_1,
#line 167 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_2,
#line 169 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_3);

#line 172 "lazy.c"
static void MR_CALL 
mercury__lazy____Compare____lazy_state_1_0_10001(
#line 175 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_1,
#line 177 "lazy.c"
  MR_Box * mercury__lazy__wrapper_arg_2,
#line 179 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_3,
#line 181 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__lazy__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__lazy_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__lazy_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__lazy_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__lazy_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__lazy_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__lazy_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__lazy_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__lazy_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__lazy_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



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



#line 550 "lazy.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__lazy__lazy__pti_lazy_state_1__pseudo_1 = {
  &mercury__lazy__lazy__type_ctor_info_lazy_state_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 558 "lazy.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__lazy__mutvar__pti_mutvar_1__pseudo_lazy__pti_lazy_state_1__pseudo_1 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_PseudoTypeInfo) &mercury__lazy__lazy__pti_lazy_state_1__pseudo_1
  }
};

#line 566 "lazy.c"
static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__lazy__mutvar__pti_mutvar_1__pseudo_lazy__pti_lazy_state_1__pseudo_1
};

#line 571 "lazy.c"
static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_1_0 = {
  (MR_String) "lazy",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__lazy__lazy__field_types_lazy_1_0,
  NULL,
  NULL,
  NULL
};

#line 586 "lazy.c"
static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_1_0[1] = {
  &mercury__lazy__lazy__du_functor_desc_lazy_1_0
};

#line 591 "lazy.c"
static const MR_DuPtagLayout mercury__lazy__lazy__du_ptag_ordered_lazy_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__lazy__lazy__du_stag_ordered_lazy_1_0
  }
};

#line 600 "lazy.c"
static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_name_ordered_lazy_1[1] = {
  &mercury__lazy__lazy__du_functor_desc_lazy_1_0
};

#line 605 "lazy.c"
static const MR_Integer mercury__lazy__lazy__functor_number_map_lazy_1[1] = {
  (MR_Integer) 0
};

#line 610 "lazy.c"
const MR_TypeCtorInfo_Struct mercury__lazy__lazy__type_ctor_info_lazy_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU_USEREQ,
  ((MR_Box) (mercury__lazy____Unify____lazy_1_0_10001)),
  ((MR_Box) (mercury__lazy____Compare____lazy_1_0_10001)),
  (MR_String) "lazy",
  (MR_String) "lazy",
  {
    mercury__lazy__lazy__du_name_ordered_lazy_1
  },
  {
    mercury__lazy__lazy__du_ptag_ordered_lazy_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__lazy__lazy__functor_number_map_lazy_1
};

#line 631 "lazy.c"
static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_state_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 636 "lazy.c"
static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_state_1_0 = {
  (MR_String) "value",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__lazy__lazy__field_types_lazy_state_1_0,
  NULL,
  NULL,
  NULL
};

#line 651 "lazy.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__lazy____vpti_func_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 660 "lazy.c"
static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_state_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__lazy____vpti_func_1__pseudo_1
};

#line 665 "lazy.c"
static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_state_1_1 = {
  (MR_String) "closure",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__lazy__lazy__field_types_lazy_state_1_1,
  NULL,
  NULL,
  NULL
};

#line 680 "lazy.c"
static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_state_1_0[1] = {
  &mercury__lazy__lazy__du_functor_desc_lazy_state_1_0
};

#line 685 "lazy.c"
static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_state_1_1[1] = {
  &mercury__lazy__lazy__du_functor_desc_lazy_state_1_1
};

#line 690 "lazy.c"
static const MR_DuPtagLayout mercury__lazy__lazy__du_ptag_ordered_lazy_state_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__lazy__lazy__du_stag_ordered_lazy_state_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__lazy__lazy__du_stag_ordered_lazy_state_1_1
  }
};

#line 704 "lazy.c"
static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_name_ordered_lazy_state_1[2] = {
  &mercury__lazy__lazy__du_functor_desc_lazy_state_1_1,
  &mercury__lazy__lazy__du_functor_desc_lazy_state_1_0
};

#line 710 "lazy.c"
static const MR_Integer mercury__lazy__lazy__functor_number_map_lazy_state_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 716 "lazy.c"
const MR_TypeCtorInfo_Struct mercury__lazy__lazy__type_ctor_info_lazy_state_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__lazy____Unify____lazy_state_1_0_10001)),
  ((MR_Box) (mercury__lazy____Compare____lazy_state_1_0_10001)),
  (MR_String) "lazy",
  (MR_String) "lazy_state",
  {
    mercury__lazy__lazy__du_name_ordered_lazy_state_1
  },
  {
    mercury__lazy__lazy__du_ptag_ordered_lazy_state_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__lazy__lazy__functor_number_map_lazy_state_1
};

#line 737 "lazy.c"
static MR_bool MR_CALL 
mercury__lazy____Unify____lazy_1_0_10001(
#line 740 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_1,
#line 742 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_2,
#line 744 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_3)
#line 746 "lazy.c"
{
#line 748 "lazy.c"
  {
#line 750 "lazy.c"
    MR_bool mercury__lazy__succeeded;

#line 753 "lazy.c"
    {
#line 755 "lazy.c"
      mercury__lazy__succeeded = mercury__lazy____Unify____lazy_1_0(((MR_Word) mercury__lazy__wrapper_arg_1), ((MR_Word) mercury__lazy__wrapper_arg_2), ((MR_Word) mercury__lazy__wrapper_arg_3));
    }
#line 758 "lazy.c"
    return mercury__lazy__succeeded;
#line 760 "lazy.c"
  }
#line 762 "lazy.c"
}

#line 765 "lazy.c"
static void MR_CALL 
mercury__lazy____Compare____lazy_1_0_10001(
#line 768 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_1,
#line 770 "lazy.c"
  MR_Box * mercury__lazy__wrapper_arg_2,
#line 772 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_3,
#line 774 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_4)
#line 776 "lazy.c"
{
#line 778 "lazy.c"
  {
#line 780 "lazy.c"
    MR_Word mercury__lazy__conv0_HeadVar__1_1;

#line 783 "lazy.c"
    {
#line 785 "lazy.c"
      mercury__lazy____Compare____lazy_1_0(((MR_Word) mercury__lazy__wrapper_arg_1), &mercury__lazy__conv0_HeadVar__1_1, ((MR_Word) mercury__lazy__wrapper_arg_3), ((MR_Word) mercury__lazy__wrapper_arg_4));
    }
#line 788 "lazy.c"
    *mercury__lazy__wrapper_arg_2 = ((MR_Box) (mercury__lazy__conv0_HeadVar__1_1));
#line 790 "lazy.c"
  }
#line 792 "lazy.c"
}

#line 795 "lazy.c"
static MR_bool MR_CALL 
mercury__lazy____Unify____lazy_state_1_0_10001(
#line 798 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_1,
#line 800 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_2,
#line 802 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_3)
#line 804 "lazy.c"
{
#line 806 "lazy.c"
  {
#line 808 "lazy.c"
    MR_bool mercury__lazy__succeeded;

#line 811 "lazy.c"
    {
#line 813 "lazy.c"
      mercury__lazy__succeeded = mercury__lazy____Unify____lazy_state_1_0(((MR_Word) mercury__lazy__wrapper_arg_1), ((MR_Word) mercury__lazy__wrapper_arg_2), ((MR_Word) mercury__lazy__wrapper_arg_3));
    }
#line 816 "lazy.c"
    return mercury__lazy__succeeded;
#line 818 "lazy.c"
  }
#line 820 "lazy.c"
}

#line 823 "lazy.c"
static void MR_CALL 
mercury__lazy____Compare____lazy_state_1_0_10001(
#line 826 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_1,
#line 828 "lazy.c"
  MR_Box * mercury__lazy__wrapper_arg_2,
#line 830 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_3,
#line 832 "lazy.c"
  MR_Box mercury__lazy__wrapper_arg_4)
#line 834 "lazy.c"
{
#line 836 "lazy.c"
  {
#line 838 "lazy.c"
    MR_Word mercury__lazy__conv0_HeadVar__1_1;

#line 841 "lazy.c"
    {
#line 843 "lazy.c"
      mercury__lazy____Compare____lazy_state_1_0(((MR_Word) mercury__lazy__wrapper_arg_1), &mercury__lazy__conv0_HeadVar__1_1, ((MR_Word) mercury__lazy__wrapper_arg_3), ((MR_Word) mercury__lazy__wrapper_arg_4));
    }
#line 846 "lazy.c"
    *mercury__lazy__wrapper_arg_2 = ((MR_Box) (mercury__lazy__conv0_HeadVar__1_1));
#line 848 "lazy.c"
  }
#line 850 "lazy.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__lazy__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__lazy__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 122 "lazy.m"
void MR_CALL 
mercury__lazy____Compare____lazy_state_1_0(
#line 122 "lazy.m"
  MR_Word mercury__lazy__TypeInfo_for_T_14,
#line 122 "lazy.m"
  MR_Word * mercury__lazy__HeadVar__1_1,
#line 122 "lazy.m"
  MR_Word mercury__lazy__HeadVar__2_2,
#line 122 "lazy.m"
  MR_Word mercury__lazy__HeadVar__3_3)
#line 122 "lazy.m"
{
#line 122 "lazy.m"
  {
#line 122 "lazy.m"
    MR_bool mercury__lazy__succeeded;
#line 122 "lazy.m"
    MR_Integer mercury__lazy__CastX_12 = (MR_Integer) mercury__lazy__HeadVar__2_2;
#line 122 "lazy.m"
    MR_Integer mercury__lazy__CastY_13 = (MR_Integer) mercury__lazy__HeadVar__3_3;

#line 122 "lazy.m"
    mercury__lazy__succeeded = (mercury__lazy__CastX_12 == mercury__lazy__CastY_13);
#line 122 "lazy.m"
    if (mercury__lazy__succeeded)
#line 896 "lazy.c"
      *mercury__lazy__HeadVar__1_1 = (MR_Integer) 0;
#line 122 "lazy.m"
    else
#line 122 "lazy.m"
      if (((MR_tag((MR_Word) mercury__lazy__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 122 "lazy.m"
        {
#line 122 "lazy.m"
          MR_Word mercury__lazy__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lazy__HeadVar__2_2, (MR_Integer) 0)));

#line 122 "lazy.m"
          if (((MR_tag((MR_Word) mercury__lazy__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 122 "lazy.m"
            {
#line 122 "lazy.m"
              MR_Word mercury__lazy__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lazy__HeadVar__3_3, (MR_Integer) 0)));

#line 122 "lazy.m"
              {
#line 122 "lazy.m"
                mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__lazy__HeadVar__1_1, (MR_Word) mercury__lazy__V_18_18, (MR_Word) mercury__lazy__V_11_11);
#line 122 "lazy.m"
                return;
              }
#line 122 "lazy.m"
            }
#line 122 "lazy.m"
          else
#line 925 "lazy.c"
            *mercury__lazy__HeadVar__1_1 = (MR_Integer) 2;
#line 122 "lazy.m"
        }
#line 122 "lazy.m"
      else
#line 122 "lazy.m"
        {
#line 122 "lazy.m"
          MR_Box mercury__lazy__V_19_19 = (MR_hl_field(MR_mktag(0), mercury__lazy__HeadVar__2_2, (MR_Integer) 0));

#line 122 "lazy.m"
          if (((MR_tag((MR_Word) mercury__lazy__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 938 "lazy.c"
            *mercury__lazy__HeadVar__1_1 = (MR_Integer) 1;
#line 122 "lazy.m"
          else
#line 122 "lazy.m"
            {
#line 122 "lazy.m"
              MR_Box mercury__lazy__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__lazy__HeadVar__3_3, (MR_Integer) 0));

#line 122 "lazy.m"
              {
#line 122 "lazy.m"
                mercury__builtin__compare_3_p_0(mercury__lazy__TypeInfo_for_T_14, mercury__lazy__HeadVar__1_1, mercury__lazy__V_19_19, mercury__lazy__V_5_5);
#line 122 "lazy.m"
                return;
              }
#line 122 "lazy.m"
            }
#line 122 "lazy.m"
        }
#line 122 "lazy.m"
  }
#line 122 "lazy.m"
}

#line 122 "lazy.m"
MR_bool MR_CALL 
mercury__lazy____Unify____lazy_state_1_0(
#line 122 "lazy.m"
  MR_Word mercury__lazy__TypeInfo_for_T_9,
#line 122 "lazy.m"
  MR_Word mercury__lazy__HeadVar__1_1,
#line 122 "lazy.m"
  MR_Word mercury__lazy__HeadVar__2_2)
#line 122 "lazy.m"
{
#line 122 "lazy.m"
  {
#line 122 "lazy.m"
    MR_bool mercury__lazy__succeeded;
#line 122 "lazy.m"
    MR_Integer mercury__lazy__CastX_7 = (MR_Integer) mercury__lazy__HeadVar__1_1;
#line 122 "lazy.m"
    MR_Integer mercury__lazy__CastY_8 = (MR_Integer) mercury__lazy__HeadVar__2_2;

#line 122 "lazy.m"
    mercury__lazy__succeeded = (mercury__lazy__CastX_7 == mercury__lazy__CastY_8);
#line 122 "lazy.m"
    if (mercury__lazy__succeeded)
#line 122 "lazy.m"
      mercury__lazy__succeeded = MR_TRUE;
#line 122 "lazy.m"
    else
#line 122 "lazy.m"
      if (((MR_tag((MR_Word) mercury__lazy__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 122 "lazy.m"
        {
#line 122 "lazy.m"
          MR_Word mercury__lazy__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lazy__HeadVar__1_1, (MR_Integer) 0)));
#line 122 "lazy.m"
          MR_Word mercury__lazy__V_6_6;

#line 122 "lazy.m"
          mercury__lazy__succeeded = ((MR_tag((MR_Word) mercury__lazy__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 122 "lazy.m"
          if (mercury__lazy__succeeded)
#line 122 "lazy.m"
            {
#line 122 "lazy.m"
              mercury__lazy__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lazy__HeadVar__2_2, (MR_Integer) 0)));
#line 1008 "lazy.c"
              {
#line 1010 "lazy.c"
                return mercury__lazy__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__lazy__V_5_5, (MR_Word) mercury__lazy__V_6_6);
              }
#line 122 "lazy.m"
            }
#line 122 "lazy.m"
        }
#line 122 "lazy.m"
      else
#line 122 "lazy.m"
        {
#line 122 "lazy.m"
          MR_Box mercury__lazy__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__lazy__HeadVar__1_1, (MR_Integer) 0));
#line 122 "lazy.m"
          MR_Box mercury__lazy__V_4_4;

#line 122 "lazy.m"
          mercury__lazy__succeeded = ((MR_tag((MR_Word) mercury__lazy__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 122 "lazy.m"
          if (mercury__lazy__succeeded)
#line 122 "lazy.m"
            {
#line 122 "lazy.m"
              mercury__lazy__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__lazy__HeadVar__2_2, (MR_Integer) 0));
#line 1034 "lazy.c"
              {
#line 1036 "lazy.c"
                return mercury__lazy__succeeded = mercury__builtin__unify_2_p_0(mercury__lazy__TypeInfo_for_T_9, mercury__lazy__V_3_3, mercury__lazy__V_4_4);
              }
#line 122 "lazy.m"
            }
#line 122 "lazy.m"
        }
#line 122 "lazy.m"
    return mercury__lazy__succeeded;
#line 122 "lazy.m"
  }
#line 122 "lazy.m"
}

#line 114 "lazy.m"
void MR_CALL 
mercury__lazy____Compare____lazy_1_0(
#line 114 "lazy.m"
  MR_Word mercury__lazy__TypeInfo_for_T_6,
#line 114 "lazy.m"
  MR_Word * mercury__lazy__HeadVar__1_1,
#line 114 "lazy.m"
  MR_Word mercury__lazy__HeadVar__2_2,
#line 114 "lazy.m"
  MR_Word mercury__lazy__HeadVar__3_3)
#line 114 "lazy.m"
{
#line 114 "lazy.m"
  {
#line 114 "lazy.m"
    MR_bool mercury__lazy__succeeded;
#line 114 "lazy.m"
    MR_Integer mercury__lazy__CastX_4 = (MR_Integer) mercury__lazy__HeadVar__2_2;
#line 114 "lazy.m"
    MR_Integer mercury__lazy__CastY_5 = (MR_Integer) mercury__lazy__HeadVar__3_3;

#line 114 "lazy.m"
    mercury__lazy__succeeded = (mercury__lazy__CastX_4 == mercury__lazy__CastY_5);
#line 114 "lazy.m"
    if (mercury__lazy__succeeded)
#line 114 "lazy.m"
      *mercury__lazy__HeadVar__1_1 = (MR_Integer) 0;
#line 114 "lazy.m"
    else
#line 131 "lazy.m"
      {
#line 131 "lazy.m"
        MR_Box mercury__lazy__V_10_10;
#line 131 "lazy.m"
        MR_Box mercury__lazy__V_11_11;

#line 132 "lazy.m"
        {
#line 132 "lazy.m"
          mercury__lazy__V_10_10 = mercury__lazy__force_1_f_0(mercury__lazy__TypeInfo_for_T_6, mercury__lazy__HeadVar__2_2);
        }
#line 132 "lazy.m"
        {
#line 132 "lazy.m"
          mercury__lazy__V_11_11 = mercury__lazy__force_1_f_0(mercury__lazy__TypeInfo_for_T_6, mercury__lazy__HeadVar__3_3);
        }
#line 132 "lazy.m"
        {
#line 132 "lazy.m"
          mercury__builtin__compare_3_p_0(mercury__lazy__TypeInfo_for_T_6, mercury__lazy__HeadVar__1_1, mercury__lazy__V_10_10, mercury__lazy__V_11_11);
#line 132 "lazy.m"
          return;
        }
#line 131 "lazy.m"
      }
#line 114 "lazy.m"
  }
#line 114 "lazy.m"
}

#line 114 "lazy.m"
MR_bool MR_CALL 
mercury__lazy____Unify____lazy_1_0(
#line 114 "lazy.m"
  MR_Word mercury__lazy__TypeInfo_for_T_5,
#line 114 "lazy.m"
  MR_Word mercury__lazy__HeadVar__1_1,
#line 114 "lazy.m"
  MR_Word mercury__lazy__HeadVar__2_2)
#line 114 "lazy.m"
{
#line 114 "lazy.m"
  {
#line 114 "lazy.m"
    MR_bool mercury__lazy__succeeded;
#line 114 "lazy.m"
    MR_Integer mercury__lazy__CastX_3 = (MR_Integer) mercury__lazy__HeadVar__1_1;
#line 114 "lazy.m"
    MR_Integer mercury__lazy__CastY_4 = (MR_Integer) mercury__lazy__HeadVar__2_2;

#line 114 "lazy.m"
    mercury__lazy__succeeded = (mercury__lazy__CastX_3 == mercury__lazy__CastY_4);
#line 114 "lazy.m"
    if (mercury__lazy__succeeded)
#line 114 "lazy.m"
      mercury__lazy__succeeded = MR_TRUE;
#line 114 "lazy.m"
    else
#line 128 "lazy.m"
      {
#line 128 "lazy.m"
        MR_Box mercury__lazy__V_8_8;
#line 128 "lazy.m"
        MR_Box mercury__lazy__V_9_9;

#line 129 "lazy.m"
        {
#line 129 "lazy.m"
          mercury__lazy__V_8_8 = mercury__lazy__force_1_f_0(mercury__lazy__TypeInfo_for_T_5, mercury__lazy__HeadVar__1_1);
        }
#line 129 "lazy.m"
        {
#line 129 "lazy.m"
          mercury__lazy__V_9_9 = mercury__lazy__force_1_f_0(mercury__lazy__TypeInfo_for_T_5, mercury__lazy__HeadVar__2_2);
        }
#line 129 "lazy.m"
        {
#line 129 "lazy.m"
          return mercury__lazy__succeeded = mercury__builtin__unify_2_p_0(mercury__lazy__TypeInfo_for_T_5, mercury__lazy__V_8_8, mercury__lazy__V_9_9);
        }
#line 128 "lazy.m"
      }
#line 114 "lazy.m"
    return mercury__lazy__succeeded;
#line 114 "lazy.m"
  }
#line 114 "lazy.m"
}

#line 78 "lazy.m"
void MR_CALL 
mercury__lazy__compare_values_3_p_0(
#line 78 "lazy.m"
  MR_Word mercury__lazy__TypeInfo_for_T_9,
#line 78 "lazy.m"
  MR_Word * mercury__lazy__R_4,
#line 78 "lazy.m"
  MR_Word mercury__lazy__X_5,
#line 78 "lazy.m"
  MR_Word mercury__lazy__Y_6)
#line 78 "lazy.m"
{
#line 131 "lazy.m"
  {
#line 131 "lazy.m"
    MR_bool mercury__lazy__succeeded;
#line 131 "lazy.m"
    MR_Box mercury__lazy__V_7_7;
#line 131 "lazy.m"
    MR_Box mercury__lazy__V_8_8;

#line 132 "lazy.m"
    {
#line 132 "lazy.m"
      mercury__lazy__V_7_7 = mercury__lazy__force_1_f_0(mercury__lazy__TypeInfo_for_T_9, mercury__lazy__X_5);
    }
#line 132 "lazy.m"
    {
#line 132 "lazy.m"
      mercury__lazy__V_8_8 = mercury__lazy__force_1_f_0(mercury__lazy__TypeInfo_for_T_9, mercury__lazy__Y_6);
    }
#line 132 "lazy.m"
    {
#line 132 "lazy.m"
      mercury__builtin__compare_3_p_0(mercury__lazy__TypeInfo_for_T_9, mercury__lazy__R_4, mercury__lazy__V_7_7, mercury__lazy__V_8_8);
#line 132 "lazy.m"
      return;
    }
#line 131 "lazy.m"
  }
#line 78 "lazy.m"
}

#line 76 "lazy.m"
MR_bool MR_CALL 
mercury__lazy__equal_values_2_p_0(
#line 76 "lazy.m"
  MR_Word mercury__lazy__TypeInfo_for_T_6,
#line 76 "lazy.m"
  MR_Word mercury__lazy__X_3,
#line 76 "lazy.m"
  MR_Word mercury__lazy__Y_4)
#line 76 "lazy.m"
{
#line 128 "lazy.m"
  {
#line 128 "lazy.m"
    MR_bool mercury__lazy__succeeded;
#line 128 "lazy.m"
    MR_Box mercury__lazy__V_5_5;
#line 128 "lazy.m"
    MR_Box mercury__lazy__V_7_7;

#line 129 "lazy.m"
    {
#line 129 "lazy.m"
      mercury__lazy__V_5_5 = mercury__lazy__force_1_f_0(mercury__lazy__TypeInfo_for_T_6, mercury__lazy__X_3);
    }
#line 129 "lazy.m"
    {
#line 129 "lazy.m"
      mercury__lazy__V_7_7 = mercury__lazy__force_1_f_0(mercury__lazy__TypeInfo_for_T_6, mercury__lazy__Y_4);
    }
#line 129 "lazy.m"
    {
#line 129 "lazy.m"
      return mercury__lazy__succeeded = mercury__builtin__unify_2_p_0(mercury__lazy__TypeInfo_for_T_6, mercury__lazy__V_5_5, mercury__lazy__V_7_7);
    }
#line 128 "lazy.m"
    return mercury__lazy__succeeded;
#line 128 "lazy.m"
  }
#line 76 "lazy.m"
}

#line 72 "lazy.m"
MR_bool MR_CALL 
mercury__lazy__read_if_val_2_p_0(
#line 72 "lazy.m"
  MR_Word mercury__lazy__TypeInfo_for_T_7,
#line 72 "lazy.m"
  MR_Word mercury__lazy__Lazy_3,
#line 72 "lazy.m"
  MR_Box * mercury__lazy__Value_4)
#line 72 "lazy.m"
{
#line 168 "lazy.m"
  {
#line 168 "lazy.m"
    MR_bool mercury__lazy__succeeded;
#line 168 "lazy.m"
    MR_Word mercury__lazy__TypeCtorInfo_8_8 = (MR_Word) &mercury__lazy__lazy__type_ctor_info_lazy_state_1;
#line 168 "lazy.m"
    MR_Word mercury__lazy__TypeInfo_9_9;
#line 168 "lazy.m"
    MR_Word mercury__lazy__Mutvar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__lazy__Lazy_3, (MR_Integer) 0)));
#line 168 "lazy.m"
    MR_Word mercury__lazy__State_6;
#line 172 "lazy.m"
    MR_Box mercury__lazy__conv0_State_6;

#line 1282 "lazy.c"
    {
#line 1284 "lazy.c"
      mercury__lazy__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1286 "lazy.c"
      MR_hl_field(MR_mktag(0), mercury__lazy__TypeInfo_9_9, 0) = ((MR_Box) (mercury__lazy__TypeCtorInfo_8_8));
#line 1288 "lazy.c"
      MR_hl_field(MR_mktag(0), mercury__lazy__TypeInfo_9_9, 1) = ((MR_Box) (mercury__lazy__TypeInfo_for_T_7));
#line 1290 "lazy.c"
    }
#line 172 "lazy.m"
    {
#line 172 "lazy.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__lazy__TypeInfo_9_9, (MR_Word) mercury__lazy__Mutvar_5, &mercury__lazy__conv0_State_6);
    }
#line 172 "lazy.m"
    mercury__lazy__State_6 = ((MR_Word) mercury__lazy__conv0_State_6);
#line 173 "lazy.m"
    mercury__lazy__succeeded = ((MR_tag((MR_Word) mercury__lazy__State_6)) == (MR_mktag((MR_Integer) 0)));
#line 173 "lazy.m"
    if (mercury__lazy__succeeded)
#line 173 "lazy.m"
      *mercury__lazy__Value_4 = (MR_hl_field(MR_mktag(0), mercury__lazy__State_6, (MR_Integer) 0));
#line 168 "lazy.m"
    return mercury__lazy__succeeded;
#line 168 "lazy.m"
  }
#line 72 "lazy.m"
}

#line 66 "lazy.m"
MR_Box MR_CALL 
mercury__lazy__force_1_f_0(
#line 66 "lazy.m"
  MR_Word mercury__lazy__TypeInfo_for_T_9,
#line 66 "lazy.m"
  MR_Word mercury__lazy__Lazy_3)
#line 66 "lazy.m"
{
#line 148 "lazy.m"
  {
#line 148 "lazy.m"
    MR_bool mercury__lazy__succeeded;
#line 148 "lazy.m"
    MR_Box mercury__lazy__Value_4;
#line 148 "lazy.m"
    MR_Word mercury__lazy__Mutvar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__lazy__Lazy_3, (MR_Integer) 0)));
#line 156 "lazy.m"
    MR_Word mercury__lazy__TypeCtorInfo_10_10 = (MR_Word) &mercury__lazy__lazy__type_ctor_info_lazy_state_1;
#line 156 "lazy.m"
    MR_Word mercury__lazy__TypeInfo_11_11;
#line 156 "lazy.m"
    MR_Word mercury__lazy__State_6;
#line 156 "lazy.m"
    MR_Box mercury__lazy__conv0_State_6;

#line 1338 "lazy.c"
    {
#line 1340 "lazy.c"
      mercury__lazy__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "lazy.c"
      MR_hl_field(MR_mktag(0), mercury__lazy__TypeInfo_11_11, 0) = ((MR_Box) (mercury__lazy__TypeCtorInfo_10_10));
#line 1344 "lazy.c"
      MR_hl_field(MR_mktag(0), mercury__lazy__TypeInfo_11_11, 1) = ((MR_Box) (mercury__lazy__TypeInfo_for_T_9));
#line 1346 "lazy.c"
    }
#line 156 "lazy.m"
    {
#line 156 "lazy.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__lazy__TypeInfo_11_11, (MR_Word) mercury__lazy__Mutvar_5, &mercury__lazy__conv0_State_6);
    }
#line 156 "lazy.m"
    mercury__lazy__State_6 = ((MR_Word) mercury__lazy__conv0_State_6);
#line 159 "lazy.m"
    if (((MR_tag((MR_Word) mercury__lazy__State_6)) == (MR_mktag((MR_Integer) 1))))
#line 160 "lazy.m"
      {
#line 160 "lazy.m"
        MR_Word mercury__lazy__Thunk_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lazy__State_6, (MR_Integer) 0)));
#line 160 "lazy.m"
        MR_Word mercury__lazy__V_8_8;
#line 161 "lazy.m"
        MR_Box MR_CALL (* mercury__lazy__func_1)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__lazy__Thunk_7, (MR_Integer) 1)));

#line 161 "lazy.m"
        {
#line 161 "lazy.m"
          mercury__lazy__Value_4 = mercury__lazy__func_1(((MR_Box) mercury__lazy__Thunk_7));
        }
#line 162 "lazy.m"
        {
#line 162 "lazy.m"
          mercury__lazy__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 162 "lazy.m"
          MR_hl_field(MR_mktag(0), mercury__lazy__V_8_8, 0) = mercury__lazy__Value_4;
#line 162 "lazy.m"
        }
#line 162 "lazy.m"
        {
#line 162 "lazy.m"
          mercury__mutvar__set_mutvar_2_p_0(mercury__lazy__TypeInfo_11_11, (MR_Word) mercury__lazy__Mutvar_5, ((MR_Box) (mercury__lazy__V_8_8)));
        }
#line 160 "lazy.m"
      }
#line 159 "lazy.m"
    else
#line 158 "lazy.m"
      mercury__lazy__Value_4 = (MR_hl_field(MR_mktag(0), mercury__lazy__State_6, (MR_Integer) 0));
#line 148 "lazy.m"
    return mercury__lazy__Value_4;
#line 148 "lazy.m"
  }
#line 66 "lazy.m"
}

#line 55 "lazy.m"
MR_Word MR_CALL 
mercury__lazy__delay_1_f_0(
#line 55 "lazy.m"
  MR_Word mercury__lazy__TypeInfo_for_T_6,
#line 55 "lazy.m"
  MR_Word mercury__lazy__F_3)
#line 55 "lazy.m"
{
#line 141 "lazy.m"
  {
#line 141 "lazy.m"
    MR_bool mercury__lazy__succeeded;
#line 141 "lazy.m"
    MR_Word mercury__lazy__HeadVar__2_2;
#line 141 "lazy.m"
    MR_Word mercury__lazy__Mutvar_4;
#line 143 "lazy.m"
    MR_Word mercury__lazy__TypeCtorInfo_7_7;
#line 143 "lazy.m"
    MR_Word mercury__lazy__TypeInfo_8_8;
#line 143 "lazy.m"
    MR_Word mercury__lazy__V_5_5;
#line 143 "lazy.m"
    MR_Word mercury__lazy__conv0_Mutvar_4;

#line 143 "lazy.m"
    {
#line 143 "lazy.m"
      mercury__lazy__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 143 "lazy.m"
      MR_hl_field(MR_mktag(1), mercury__lazy__V_5_5, 0) = ((MR_Box) (mercury__lazy__F_3));
#line 143 "lazy.m"
    }
#line 1431 "lazy.c"
    mercury__lazy__TypeCtorInfo_7_7 = (MR_Word) &mercury__lazy__lazy__type_ctor_info_lazy_state_1;
#line 1433 "lazy.c"
    {
#line 1435 "lazy.c"
      mercury__lazy__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "lazy.c"
      MR_hl_field(MR_mktag(0), mercury__lazy__TypeInfo_8_8, 0) = ((MR_Box) (mercury__lazy__TypeCtorInfo_7_7));
#line 1439 "lazy.c"
      MR_hl_field(MR_mktag(0), mercury__lazy__TypeInfo_8_8, 1) = ((MR_Box) (mercury__lazy__TypeInfo_for_T_6));
#line 1441 "lazy.c"
    }
#line 143 "lazy.m"
    {
#line 143 "lazy.m"
      mercury__mutvar__new_mutvar_2_p_0(mercury__lazy__TypeInfo_8_8, ((MR_Box) (mercury__lazy__V_5_5)), &mercury__lazy__conv0_Mutvar_4);
    }
#line 143 "lazy.m"
    mercury__lazy__Mutvar_4 = (MR_Word) mercury__lazy__conv0_Mutvar_4;
#line 141 "lazy.m"
    {
#line 141 "lazy.m"
      mercury__lazy__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 141 "lazy.m"
      MR_hl_field(MR_mktag(0), mercury__lazy__HeadVar__2_2, 0) = ((MR_Box) (mercury__lazy__Mutvar_4));
#line 141 "lazy.m"
    }
#line 141 "lazy.m"
    return mercury__lazy__HeadVar__2_2;
#line 141 "lazy.m"
  }
#line 55 "lazy.m"
}

#line 51 "lazy.m"
MR_Word MR_CALL 
mercury__lazy__val_1_f_0(
#line 51 "lazy.m"
  MR_Word mercury__lazy__TypeInfo_for_T_6,
#line 51 "lazy.m"
  MR_Box mercury__lazy__X_3)
#line 51 "lazy.m"
{
#line 136 "lazy.m"
  {
#line 136 "lazy.m"
    MR_bool mercury__lazy__succeeded;
#line 136 "lazy.m"
    MR_Word mercury__lazy__HeadVar__2_2;
#line 136 "lazy.m"
    MR_Word mercury__lazy__Mutvar_4;
#line 138 "lazy.m"
    MR_Word mercury__lazy__TypeCtorInfo_7_7;
#line 138 "lazy.m"
    MR_Word mercury__lazy__TypeInfo_8_8;
#line 138 "lazy.m"
    MR_Word mercury__lazy__V_5_5;
#line 138 "lazy.m"
    MR_Word mercury__lazy__conv0_Mutvar_4;

#line 138 "lazy.m"
    {
#line 138 "lazy.m"
      mercury__lazy__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 138 "lazy.m"
      MR_hl_field(MR_mktag(0), mercury__lazy__V_5_5, 0) = mercury__lazy__X_3;
#line 138 "lazy.m"
    }
#line 1499 "lazy.c"
    mercury__lazy__TypeCtorInfo_7_7 = (MR_Word) &mercury__lazy__lazy__type_ctor_info_lazy_state_1;
#line 1501 "lazy.c"
    {
#line 1503 "lazy.c"
      mercury__lazy__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "lazy.c"
      MR_hl_field(MR_mktag(0), mercury__lazy__TypeInfo_8_8, 0) = ((MR_Box) (mercury__lazy__TypeCtorInfo_7_7));
#line 1507 "lazy.c"
      MR_hl_field(MR_mktag(0), mercury__lazy__TypeInfo_8_8, 1) = ((MR_Box) (mercury__lazy__TypeInfo_for_T_6));
#line 1509 "lazy.c"
    }
#line 138 "lazy.m"
    {
#line 138 "lazy.m"
      mercury__mutvar__new_mutvar_2_p_0(mercury__lazy__TypeInfo_8_8, ((MR_Box) (mercury__lazy__V_5_5)), &mercury__lazy__conv0_Mutvar_4);
    }
#line 138 "lazy.m"
    mercury__lazy__Mutvar_4 = (MR_Word) mercury__lazy__conv0_Mutvar_4;
#line 136 "lazy.m"
    {
#line 136 "lazy.m"
      mercury__lazy__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 136 "lazy.m"
      MR_hl_field(MR_mktag(0), mercury__lazy__HeadVar__2_2, 0) = ((MR_Box) (mercury__lazy__Mutvar_4));
#line 136 "lazy.m"
    }
#line 136 "lazy.m"
    return mercury__lazy__HeadVar__2_2;
#line 136 "lazy.m"
  }
#line 51 "lazy.m"
}

void mercury__lazy__init(void)
{
}

void mercury__lazy__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__lazy__lazy__type_ctor_info_lazy_1);
	MR_register_type_ctor_info(&mercury__lazy__lazy__type_ctor_info_lazy_state_1);
}

void mercury__lazy__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module lazy. */
