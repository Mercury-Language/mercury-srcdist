/*
** Automatically generated from `math.m'
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


/* :- module math. */
/* :- implementation. */

/*
INIT mercury__math__init
ENDINIT
*/

#include "math.mih"


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




#line 85 "math.c"
static const MR_Integer mercury__math__math__functor_number_map_domain_error_0[1];

#line 88 "math.c"
static const MR_NotagFunctorDesc mercury__math__math__notag_functor_desc_domain_error_0;

#line 91 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_0;

#line 94 "math.c"
static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_1[1];

#line 97 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_1;

#line 100 "math.c"
static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_2[2];

#line 103 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_2;

#line 106 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_0[1];

#line 109 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_1[1];

#line 112 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_2[1];

#line 115 "math.c"
static const MR_DuPtagLayout mercury__math__math__du_ptag_ordered_quadratic_roots_0[3];

#line 118 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_name_ordered_quadratic_roots_0[3];

#line 121 "math.c"
static const MR_Integer mercury__math__math__functor_number_map_quadratic_roots_0[3];

#line 124 "math.c"
static MR_bool MR_CALL 
mercury__math____Unify____domain_error_0_0_10001(
#line 127 "math.c"
  MR_Box mercury__math__wrapper_arg_1,
#line 129 "math.c"
  MR_Box mercury__math__wrapper_arg_2);

#line 132 "math.c"
static void MR_CALL 
mercury__math____Compare____domain_error_0_0_10001(
#line 135 "math.c"
  MR_Box * mercury__math__wrapper_arg_1,
#line 137 "math.c"
  MR_Box mercury__math__wrapper_arg_2,
#line 139 "math.c"
  MR_Box mercury__math__wrapper_arg_3);

#line 142 "math.c"
static MR_bool MR_CALL 
mercury__math____Unify____quadratic_roots_0_0_10001(
#line 145 "math.c"
  MR_Box mercury__math__wrapper_arg_1,
#line 147 "math.c"
  MR_Box mercury__math__wrapper_arg_2);

#line 150 "math.c"
static void MR_CALL 
mercury__math____Compare____quadratic_roots_0_0_10001(
#line 153 "math.c"
  MR_Box * mercury__math__wrapper_arg_1,
#line 155 "math.c"
  MR_Box mercury__math__wrapper_arg_2,
#line 157 "math.c"
  MR_Box mercury__math__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__math__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 252 "math.m"
static MR_bool MR_CALL 
mercury__math__math_domain_checks_0_p_0(void);


static /* final */ const MR_Box mercury__math_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__math_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__math_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__math_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__math_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__math_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__math_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__math_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__math_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



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



#line 520 "math.c"
static const MR_Integer mercury__math__math__functor_number_map_domain_error_0[1] = {
  (MR_Integer) 0
};

#line 525 "math.c"
static const MR_NotagFunctorDesc mercury__math__math__notag_functor_desc_domain_error_0 = {
  (MR_String) "domain_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 532 "math.c"
const MR_TypeCtorInfo_Struct mercury__math__math__type_ctor_info_domain_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__math____Unify____domain_error_0_0_10001)),
  ((MR_Box) (mercury__math____Compare____domain_error_0_0_10001)),
  (MR_String) "math",
  (MR_String) "domain_error",
  {
    &mercury__math__math__notag_functor_desc_domain_error_0
  },
  {
    &mercury__math__math__notag_functor_desc_domain_error_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__math__math__functor_number_map_domain_error_0
};

#line 553 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_0 = {
  (MR_String) "no_roots",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 568 "math.c"
static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 573 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_1 = {
  (MR_String) "one_root",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__math__math__field_types_quadratic_roots_0_1,
  NULL,
  NULL,
  NULL
};

#line 588 "math.c"
static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 594 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_2 = {
  (MR_String) "two_roots",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__math__math__field_types_quadratic_roots_0_2,
  NULL,
  NULL,
  NULL
};

#line 609 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_0[1] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_0
};

#line 614 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_1[1] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_1
};

#line 619 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_2[1] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_2
};

#line 624 "math.c"
static const MR_DuPtagLayout mercury__math__math__du_ptag_ordered_quadratic_roots_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__math__math__du_stag_ordered_quadratic_roots_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__math__math__du_stag_ordered_quadratic_roots_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__math__math__du_stag_ordered_quadratic_roots_0_2
  }
};

#line 643 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_name_ordered_quadratic_roots_0[3] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_0,
  &mercury__math__math__du_functor_desc_quadratic_roots_0_1,
  &mercury__math__math__du_functor_desc_quadratic_roots_0_2
};

#line 650 "math.c"
static const MR_Integer mercury__math__math__functor_number_map_quadratic_roots_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 657 "math.c"
const MR_TypeCtorInfo_Struct mercury__math__math__type_ctor_info_quadratic_roots_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__math____Unify____quadratic_roots_0_0_10001)),
  ((MR_Box) (mercury__math____Compare____quadratic_roots_0_0_10001)),
  (MR_String) "math",
  (MR_String) "quadratic_roots",
  {
    mercury__math__math__du_name_ordered_quadratic_roots_0
  },
  {
    mercury__math__math__du_ptag_ordered_quadratic_roots_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__math__math__functor_number_map_quadratic_roots_0
};

#line 678 "math.c"
static MR_bool MR_CALL 
mercury__math____Unify____domain_error_0_0_10001(
#line 681 "math.c"
  MR_Box mercury__math__wrapper_arg_1,
#line 683 "math.c"
  MR_Box mercury__math__wrapper_arg_2)
#line 685 "math.c"
{
#line 687 "math.c"
  {
#line 689 "math.c"
    MR_bool mercury__math__succeeded;

#line 692 "math.c"
    {
#line 694 "math.c"
      mercury__math__succeeded = mercury__math____Unify____domain_error_0_0(((MR_Word) mercury__math__wrapper_arg_1), ((MR_Word) mercury__math__wrapper_arg_2));
    }
#line 697 "math.c"
    return mercury__math__succeeded;
#line 699 "math.c"
  }
#line 701 "math.c"
}

#line 704 "math.c"
static void MR_CALL 
mercury__math____Compare____domain_error_0_0_10001(
#line 707 "math.c"
  MR_Box * mercury__math__wrapper_arg_1,
#line 709 "math.c"
  MR_Box mercury__math__wrapper_arg_2,
#line 711 "math.c"
  MR_Box mercury__math__wrapper_arg_3)
#line 713 "math.c"
{
#line 715 "math.c"
  {
#line 717 "math.c"
    MR_Word mercury__math__conv0_HeadVar__1_1;

#line 720 "math.c"
    {
#line 722 "math.c"
      mercury__math____Compare____domain_error_0_0(&mercury__math__conv0_HeadVar__1_1, ((MR_Word) mercury__math__wrapper_arg_2), ((MR_Word) mercury__math__wrapper_arg_3));
    }
#line 725 "math.c"
    *mercury__math__wrapper_arg_1 = ((MR_Box) (mercury__math__conv0_HeadVar__1_1));
#line 727 "math.c"
  }
#line 729 "math.c"
}

#line 732 "math.c"
static MR_bool MR_CALL 
mercury__math____Unify____quadratic_roots_0_0_10001(
#line 735 "math.c"
  MR_Box mercury__math__wrapper_arg_1,
#line 737 "math.c"
  MR_Box mercury__math__wrapper_arg_2)
#line 739 "math.c"
{
#line 741 "math.c"
  {
#line 743 "math.c"
    MR_bool mercury__math__succeeded;

#line 746 "math.c"
    {
#line 748 "math.c"
      mercury__math__succeeded = mercury__math____Unify____quadratic_roots_0_0(((MR_Word) mercury__math__wrapper_arg_1), ((MR_Word) mercury__math__wrapper_arg_2));
    }
#line 751 "math.c"
    return mercury__math__succeeded;
#line 753 "math.c"
  }
#line 755 "math.c"
}

#line 758 "math.c"
static void MR_CALL 
mercury__math____Compare____quadratic_roots_0_0_10001(
#line 761 "math.c"
  MR_Box * mercury__math__wrapper_arg_1,
#line 763 "math.c"
  MR_Box mercury__math__wrapper_arg_2,
#line 765 "math.c"
  MR_Box mercury__math__wrapper_arg_3)
#line 767 "math.c"
{
#line 769 "math.c"
  {
#line 771 "math.c"
    MR_Word mercury__math__conv0_HeadVar__1_1;

#line 774 "math.c"
    {
#line 776 "math.c"
      mercury__math____Compare____quadratic_roots_0_0(&mercury__math__conv0_HeadVar__1_1, ((MR_Word) mercury__math__wrapper_arg_2), ((MR_Word) mercury__math__wrapper_arg_3));
    }
#line 779 "math.c"
    *mercury__math__wrapper_arg_1 = ((MR_Box) (mercury__math__conv0_HeadVar__1_1));
#line 781 "math.c"
  }
#line 783 "math.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__math__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__math__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 89 "math.m"
void MR_CALL 
mercury__math____Compare____quadratic_roots_0_0(
#line 89 "math.m"
  MR_Word * mercury__math__HeadVar__1_1,
#line 89 "math.m"
  MR_Word mercury__math__HeadVar__2_2,
#line 89 "math.m"
  MR_Word mercury__math__HeadVar__3_3)
#line 89 "math.m"
{
#line 89 "math.m"
  {
#line 89 "math.m"
    MR_bool mercury__math__succeeded;
#line 89 "math.m"
    MR_Integer mercury__math__CastX_23 = (MR_Integer) mercury__math__HeadVar__2_2;
#line 89 "math.m"
    MR_Integer mercury__math__CastY_24 = (MR_Integer) mercury__math__HeadVar__3_3;

#line 89 "math.m"
    mercury__math__succeeded = (mercury__math__CastX_23 == mercury__math__CastY_24);
#line 89 "math.m"
    if (mercury__math__succeeded)
#line 827 "math.c"
      *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 89 "math.m"
    else
#line 89 "math.m"
      if ((mercury__math__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 89 "math.m"
        if ((mercury__math__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 89 "math.m"
          *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 89 "math.m"
        else
#line 89 "math.m"
          if (((MR_tag((MR_Word) mercury__math__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 841 "math.c"
            *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "math.m"
          else
#line 845 "math.c"
            *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "math.m"
      else
#line 89 "math.m"
        if (((MR_tag((MR_Word) mercury__math__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 89 "math.m"
          {
#line 89 "math.m"
            MR_Float mercury__math__V_28_28 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__2_2, (MR_Integer) 0)));

#line 89 "math.m"
            if ((mercury__math__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 858 "math.c"
              *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 89 "math.m"
            else
#line 89 "math.m"
              if (((MR_tag((MR_Word) mercury__math__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 89 "math.m"
                {
#line 89 "math.m"
                  MR_Float mercury__math__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__3_3, (MR_Integer) 0)));

#line 118 "private_builtin.opt"
                  mercury__math__succeeded = (mercury__math__V_28_28 < mercury__math__V_9_9);
#line 121 "private_builtin.opt"
                  if (mercury__math__succeeded)
#line 120 "private_builtin.opt"
                    *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                  else
#line 126 "private_builtin.opt"
                    {
#line 123 "private_builtin.opt"
                      mercury__math__succeeded = (mercury__math__V_28_28 > mercury__math__V_9_9);
#line 126 "private_builtin.opt"
                      if (mercury__math__succeeded)
#line 125 "private_builtin.opt"
                        *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                      else
#line 127 "private_builtin.opt"
                        *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                    }
#line 89 "math.m"
                }
#line 89 "math.m"
              else
#line 895 "math.c"
                *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "math.m"
          }
#line 89 "math.m"
        else
#line 89 "math.m"
          {
#line 89 "math.m"
            MR_Float mercury__math__V_29_29 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "math.m"
            MR_Float mercury__math__V_30_30 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 0)));

#line 89 "math.m"
            if ((mercury__math__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "math.c"
              *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 89 "math.m"
            else
#line 89 "math.m"
              if (((MR_tag((MR_Word) mercury__math__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 916 "math.c"
                *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 89 "math.m"
              else
#line 89 "math.m"
                {
#line 89 "math.m"
                  MR_Float mercury__math__V_20_20 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__3_3, (MR_Integer) 0)));
#line 89 "math.m"
                  MR_Float mercury__math__V_21_21 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__3_3, (MR_Integer) 1)));
#line 89 "math.m"
                  MR_Word mercury__math__V_22_22;

#line 118 "private_builtin.opt"
                  mercury__math__succeeded = (mercury__math__V_30_30 < mercury__math__V_20_20);
#line 121 "private_builtin.opt"
                  if (mercury__math__succeeded)
#line 120 "private_builtin.opt"
                    mercury__math__V_22_22 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                  else
#line 126 "private_builtin.opt"
                    {
#line 123 "private_builtin.opt"
                      mercury__math__succeeded = (mercury__math__V_30_30 > mercury__math__V_20_20);
#line 126 "private_builtin.opt"
                      if (mercury__math__succeeded)
#line 125 "private_builtin.opt"
                        mercury__math__V_22_22 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                      else
#line 127 "private_builtin.opt"
                        mercury__math__V_22_22 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                    }
#line 951 "math.c"
                  mercury__math__succeeded = (mercury__math__V_22_22 == (MR_Integer) 0);
#line 89 "math.m"
                  mercury__math__succeeded = !(mercury__math__succeeded);
#line 89 "math.m"
                  if (mercury__math__succeeded)
#line 89 "math.m"
                    *mercury__math__HeadVar__1_1 = mercury__math__V_22_22;
#line 89 "math.m"
                  else
#line 121 "private_builtin.opt"
                    {
#line 118 "private_builtin.opt"
                      mercury__math__succeeded = (mercury__math__V_29_29 < mercury__math__V_21_21);
#line 121 "private_builtin.opt"
                      if (mercury__math__succeeded)
#line 120 "private_builtin.opt"
                        *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                      else
#line 126 "private_builtin.opt"
                        {
#line 123 "private_builtin.opt"
                          mercury__math__succeeded = (mercury__math__V_29_29 > mercury__math__V_21_21);
#line 126 "private_builtin.opt"
                          if (mercury__math__succeeded)
#line 125 "private_builtin.opt"
                            *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                          else
#line 127 "private_builtin.opt"
                            *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                        }
#line 121 "private_builtin.opt"
                    }
#line 89 "math.m"
                }
#line 89 "math.m"
          }
#line 89 "math.m"
  }
#line 89 "math.m"
}

#line 89 "math.m"
MR_bool MR_CALL 
mercury__math____Unify____quadratic_roots_0_0(
#line 89 "math.m"
  MR_Word mercury__math__HeadVar__1_1,
#line 89 "math.m"
  MR_Word mercury__math__HeadVar__2_2)
#line 89 "math.m"
{
#line 89 "math.m"
  {
#line 89 "math.m"
    MR_bool mercury__math__succeeded;
#line 89 "math.m"
    MR_Integer mercury__math__CastX_11 = (MR_Integer) mercury__math__HeadVar__1_1;
#line 89 "math.m"
    MR_Integer mercury__math__CastY_12 = (MR_Integer) mercury__math__HeadVar__2_2;

#line 89 "math.m"
    mercury__math__succeeded = (mercury__math__CastX_11 == mercury__math__CastY_12);
#line 89 "math.m"
    if (mercury__math__succeeded)
#line 89 "math.m"
      mercury__math__succeeded = MR_TRUE;
#line 89 "math.m"
    else
#line 89 "math.m"
      if ((mercury__math__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 89 "math.m"
        {
#line 89 "math.m"
          MR_Integer mercury__math__CastX_3 = (MR_Integer) mercury__math__HeadVar__1_1;
#line 89 "math.m"
          MR_Integer mercury__math__CastY_4 = (MR_Integer) mercury__math__HeadVar__2_2;

#line 89 "math.m"
          mercury__math__succeeded = (mercury__math__CastY_4 == mercury__math__CastX_3);
#line 89 "math.m"
        }
#line 89 "math.m"
      else
#line 89 "math.m"
        if (((MR_tag((MR_Word) mercury__math__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 89 "math.m"
          {
#line 89 "math.m"
            MR_Float mercury__math__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__1_1, (MR_Integer) 0)));
#line 89 "math.m"
            MR_Float mercury__math__V_6_6;

#line 89 "math.m"
            mercury__math__succeeded = ((MR_tag((MR_Word) mercury__math__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 89 "math.m"
            if (mercury__math__succeeded)
#line 89 "math.m"
              {
#line 89 "math.m"
                mercury__math__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__2_2, (MR_Integer) 0)));
#line 1054 "math.c"
                mercury__math__succeeded = (mercury__math__V_5_5 == mercury__math__V_6_6);
#line 89 "math.m"
              }
#line 89 "math.m"
          }
#line 89 "math.m"
        else
#line 89 "math.m"
          {
#line 89 "math.m"
            MR_Float mercury__math__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__1_1, (MR_Integer) 0)));
#line 89 "math.m"
            MR_Float mercury__math__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "math.m"
            MR_Float mercury__math__V_9_9;
#line 89 "math.m"
            MR_Float mercury__math__V_10_10;

#line 89 "math.m"
            mercury__math__succeeded = ((MR_tag((MR_Word) mercury__math__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 89 "math.m"
            if (mercury__math__succeeded)
#line 89 "math.m"
              {
#line 89 "math.m"
                mercury__math__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 0)));
#line 89 "math.m"
                mercury__math__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 1)));
#line 1083 "math.c"
                mercury__math__succeeded = (mercury__math__V_7_7 == mercury__math__V_9_9);
#line 89 "math.m"
                if (mercury__math__succeeded)
#line 1087 "math.c"
                  mercury__math__succeeded = (mercury__math__V_8_8 == mercury__math__V_10_10);
#line 89 "math.m"
              }
#line 89 "math.m"
          }
#line 89 "math.m"
    return mercury__math__succeeded;
#line 89 "math.m"
  }
#line 89 "math.m"
}

#line 37 "math.m"
void MR_CALL 
mercury__math____Compare____domain_error_0_0(
#line 37 "math.m"
  MR_Word * mercury__math__HeadVar__1_1,
#line 37 "math.m"
  MR_Word mercury__math__HeadVar__2_2,
#line 37 "math.m"
  MR_Word mercury__math__HeadVar__3_3)
#line 37 "math.m"
{
#line 37 "math.m"
  {
#line 37 "math.m"
    MR_bool mercury__math__succeeded;
#line 37 "math.m"
    MR_Integer mercury__math__CastX_6 = (MR_Integer) mercury__math__HeadVar__2_2;
#line 37 "math.m"
    MR_Integer mercury__math__CastY_7 = (MR_Integer) mercury__math__HeadVar__3_3;

#line 37 "math.m"
    mercury__math__succeeded = (mercury__math__CastX_6 == mercury__math__CastY_7);
#line 37 "math.m"
    if (mercury__math__succeeded)
#line 1124 "math.c"
      *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "math.m"
    else
#line 37 "math.m"
      {
#line 37 "math.m"
        MR_String mercury__math__V_4_4 = (MR_String) mercury__math__HeadVar__2_2;
#line 37 "math.m"
        MR_String mercury__math__V_5_5 = (MR_String) mercury__math__HeadVar__3_3;
#line 37 "math.m"
        MR_Integer mercury__math__Res_7_12;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__math____Compare____domain_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__math__V_4_4 ;
	S2 =  mercury__math__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 1152 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Res_7_12  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__math__succeeded = (mercury__math__Res_7_12 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__math__succeeded)
#line 104 "private_builtin.opt"
          *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__math__succeeded = (mercury__math__Res_7_12 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__math__succeeded)
#line 109 "private_builtin.opt"
              *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 37 "math.m"
      }
#line 37 "math.m"
  }
#line 37 "math.m"
}

#line 37 "math.m"
MR_bool MR_CALL 
mercury__math____Unify____domain_error_0_0(
#line 37 "math.m"
  MR_Word mercury__math__HeadVar__1_1,
#line 37 "math.m"
  MR_Word mercury__math__HeadVar__2_2)
#line 37 "math.m"
{
#line 37 "math.m"
  {
#line 37 "math.m"
    MR_bool mercury__math__succeeded;
#line 37 "math.m"
    MR_Integer mercury__math__CastX_5 = (MR_Integer) mercury__math__HeadVar__1_1;
#line 37 "math.m"
    MR_Integer mercury__math__CastY_6 = (MR_Integer) mercury__math__HeadVar__2_2;

#line 37 "math.m"
    mercury__math__succeeded = (mercury__math__CastX_5 == mercury__math__CastY_6);
#line 37 "math.m"
    if (mercury__math__succeeded)
#line 37 "math.m"
      mercury__math__succeeded = MR_TRUE;
#line 37 "math.m"
    else
#line 37 "math.m"
      {
#line 37 "math.m"
        MR_String mercury__math__V_3_3 = (MR_String) mercury__math__HeadVar__1_1;
#line 37 "math.m"
        MR_String mercury__math__V_4_4 = (MR_String) mercury__math__HeadVar__2_2;

#line 1221 "math.c"
        mercury__math__succeeded = (strcmp(mercury__math__V_3_3, mercury__math__V_4_4) == 0);
#line 37 "math.m"
      }
#line 37 "math.m"
    return mercury__math__succeeded;
#line 37 "math.m"
  }
#line 37 "math.m"
}

#line 252 "math.m"
static MR_bool MR_CALL 
mercury__math__math_domain_checks_0_p_0(void)
#line 252 "math.m"
{
#line 254 "math.m"
  {
#line 254 "math.m"
    MR_bool mercury__math__succeeded;

#line 258 "math.m"
{
#define MR_PROC_LABEL mercury__math__math_domain_checks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1257 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 258 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 254 "math.m"
    return mercury__math__succeeded;
#line 254 "math.m"
  }
#line 252 "math.m"
}

#line 203 "math.m"
MR_Float MR_CALL 
mercury__math__tanh_1_f_0(
#line 203 "math.m"
  MR_Float mercury__math__X_1)
#line 203 "math.m"
{
#line 960 "math.m"
  {
#line 960 "math.m"
    MR_bool mercury__math__succeeded;
#line 960 "math.m"
    MR_Float mercury__math__Tanh_2;

#line 964 "math.m"
{
#define MR_PROC_LABEL mercury__math__tanh_1_f_0

	MR_Float X;
	MR_Float Tanh;

	X =  mercury__math__X_1 ;
		{
#line 964 "math.m"

    Tanh = tanh(X);

#line 1300 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Tanh_2  = Tanh;
#line 964 "math.m"
}
#line 960 "math.m"
    return mercury__math__Tanh_2;
#line 960 "math.m"
  }
#line 203 "math.m"
}

#line 199 "math.m"
MR_Float MR_CALL 
mercury__math__cosh_1_f_0(
#line 199 "math.m"
  MR_Float mercury__math__X_1)
#line 199 "math.m"
{
#line 937 "math.m"
  {
#line 937 "math.m"
    MR_bool mercury__math__succeeded;
#line 937 "math.m"
    MR_Float mercury__math__Cosh_2;

#line 941 "math.m"
{
#define MR_PROC_LABEL mercury__math__cosh_1_f_0

	MR_Float X;
	MR_Float Cosh;

	X =  mercury__math__X_1 ;
		{
#line 941 "math.m"

    Cosh = cosh(X);

#line 1341 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Cosh_2  = Cosh;
#line 941 "math.m"
}
#line 937 "math.m"
    return mercury__math__Cosh_2;
#line 937 "math.m"
  }
#line 199 "math.m"
}

#line 195 "math.m"
MR_Float MR_CALL 
mercury__math__sinh_1_f_0(
#line 195 "math.m"
  MR_Float mercury__math__X_1)
#line 195 "math.m"
{
#line 914 "math.m"
  {
#line 914 "math.m"
    MR_bool mercury__math__succeeded;
#line 914 "math.m"
    MR_Float mercury__math__Sinh_2;

#line 918 "math.m"
{
#define MR_PROC_LABEL mercury__math__sinh_1_f_0

	MR_Float X;
	MR_Float Sinh;

	X =  mercury__math__X_1 ;
		{
#line 918 "math.m"

    Sinh = sinh(X);

#line 1382 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Sinh_2  = Sinh;
#line 918 "math.m"
}
#line 914 "math.m"
    return mercury__math__Sinh_2;
#line 914 "math.m"
  }
#line 195 "math.m"
}

#line 186 "math.m"
MR_Float MR_CALL 
mercury__math__atan2_2_f_0(
#line 186 "math.m"
  MR_Float mercury__math__Y_1,
#line 186 "math.m"
  MR_Float mercury__math__X_2)
#line 186 "math.m"
{
#line 888 "math.m"
  {
#line 888 "math.m"
    MR_bool mercury__math__succeeded;
#line 888 "math.m"
    MR_Float mercury__math__ATan2_3;

#line 892 "math.m"
{
#define MR_PROC_LABEL mercury__math__atan2_2_f_0

	MR_Float Y;
	MR_Float X;
	MR_Float ATan2;

	Y =  mercury__math__Y_1 ;
	X =  mercury__math__X_2 ;
		{
#line 892 "math.m"

    ATan2 = atan2(Y, X);

#line 1427 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ATan2_3  = ATan2;
#line 892 "math.m"
}
#line 888 "math.m"
    return mercury__math__ATan2_3;
#line 888 "math.m"
  }
#line 186 "math.m"
}

#line 181 "math.m"
MR_Float MR_CALL 
mercury__math__atan_1_f_0(
#line 181 "math.m"
  MR_Float mercury__math__X_1)
#line 181 "math.m"
{
#line 862 "math.m"
  {
#line 862 "math.m"
    MR_bool mercury__math__succeeded;
#line 862 "math.m"
    MR_Float mercury__math__ATan_2;

#line 866 "math.m"
{
#define MR_PROC_LABEL mercury__math__atan_1_f_0

	MR_Float X;
	MR_Float ATan;

	X =  mercury__math__X_1 ;
		{
#line 866 "math.m"

    ATan = atan(X);

#line 1468 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ATan_2  = ATan;
#line 866 "math.m"
}
#line 862 "math.m"
    return mercury__math__ATan_2;
#line 862 "math.m"
  }
#line 181 "math.m"
}

#line 176 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_acos_1_f_0(
#line 176 "math.m"
  MR_Float mercury__math__X_1)
#line 176 "math.m"
{
#line 836 "math.m"
  {
#line 836 "math.m"
    MR_bool mercury__math__succeeded;
#line 836 "math.m"
    MR_Float mercury__math__ACos_2;

#line 840 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_acos_1_f_0

	MR_Float X;
	MR_Float ACos;

	X =  mercury__math__X_1 ;
		{
#line 840 "math.m"

    ACos = acos(X);

#line 1509 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ACos_2  = ACos;
#line 840 "math.m"
}
#line 836 "math.m"
    return mercury__math__ACos_2;
#line 836 "math.m"
  }
#line 176 "math.m"
}

#line 175 "math.m"
MR_Float MR_CALL 
mercury__math__acos_1_f_0(
#line 175 "math.m"
  MR_Float mercury__math__X_3)
#line 175 "math.m"
{
#line 832 "math.m"
  {
#line 832 "math.m"
    MR_bool mercury__math__succeeded;
#line 832 "math.m"
    MR_Float mercury__math__ACos_4;

#line 258 "math.m"
{
#define MR_PROC_LABEL mercury__math__acos_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1552 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 258 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 826 "math.m"
    if (mercury__math__succeeded)
#line 826 "math.m"
      {
#line 827 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 < ((MR_Float) -1.0000000000000000));
#line 828 "math.m"
        if (!(mercury__math__succeeded))
#line 828 "math.m"
          {
#line 828 "math.m"
            mercury__math__succeeded = (mercury__math__X_3 > ((MR_Float) 1.0000000000000000));
#line 828 "math.m"
          }
#line 826 "math.m"
      }
#line 832 "math.m"
    if (mercury__math__succeeded)
#line 831 "math.m"
      {
#line 831 "math.m"
        MR_Word mercury__math__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 831 "math.m"
        MR_Word mercury__math__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "math.acos"));

#line 831 "math.m"
        {
#line 831 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_9, ((MR_Box) (mercury__math__V_7_7)));
        }
#line 831 "math.m"
      }
#line 832 "math.m"
    else
#line 836 "math.m"
      {
#line 840 "math.m"
{
#define MR_PROC_LABEL mercury__math__acos_1_f_0

	MR_Float X;
	MR_Float ACos;

	X =  mercury__math__X_3 ;
		{
#line 840 "math.m"

    ACos = acos(X);

#line 1610 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ACos_4  = ACos;
#line 840 "math.m"
}
#line 836 "math.m"
      }
#line 832 "math.m"
    return mercury__math__ACos_4;
#line 832 "math.m"
  }
#line 175 "math.m"
}

#line 168 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_asin_1_f_0(
#line 168 "math.m"
  MR_Float mercury__math__X_1)
#line 168 "math.m"
{
#line 798 "math.m"
  {
#line 798 "math.m"
    MR_bool mercury__math__succeeded;
#line 798 "math.m"
    MR_Float mercury__math__ASin_2;

#line 802 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_asin_1_f_0

	MR_Float X;
	MR_Float ASin;

	X =  mercury__math__X_1 ;
		{
#line 802 "math.m"

    ASin = asin(X);

#line 1653 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ASin_2  = ASin;
#line 802 "math.m"
}
#line 798 "math.m"
    return mercury__math__ASin_2;
#line 798 "math.m"
  }
#line 168 "math.m"
}

#line 167 "math.m"
MR_Float MR_CALL 
mercury__math__asin_1_f_0(
#line 167 "math.m"
  MR_Float mercury__math__X_3)
#line 167 "math.m"
{
#line 794 "math.m"
  {
#line 794 "math.m"
    MR_bool mercury__math__succeeded;
#line 794 "math.m"
    MR_Float mercury__math__ASin_4;

#line 258 "math.m"
{
#define MR_PROC_LABEL mercury__math__asin_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1696 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 258 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 788 "math.m"
    if (mercury__math__succeeded)
#line 788 "math.m"
      {
#line 789 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 < ((MR_Float) -1.0000000000000000));
#line 790 "math.m"
        if (!(mercury__math__succeeded))
#line 790 "math.m"
          {
#line 790 "math.m"
            mercury__math__succeeded = (mercury__math__X_3 > ((MR_Float) 1.0000000000000000));
#line 790 "math.m"
          }
#line 788 "math.m"
      }
#line 794 "math.m"
    if (mercury__math__succeeded)
#line 793 "math.m"
      {
#line 793 "math.m"
        MR_Word mercury__math__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 793 "math.m"
        MR_Word mercury__math__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "math.asin"));

#line 793 "math.m"
        {
#line 793 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_9, ((MR_Box) (mercury__math__V_7_7)));
        }
#line 793 "math.m"
      }
#line 794 "math.m"
    else
#line 798 "math.m"
      {
#line 802 "math.m"
{
#define MR_PROC_LABEL mercury__math__asin_1_f_0

	MR_Float X;
	MR_Float ASin;

	X =  mercury__math__X_3 ;
		{
#line 802 "math.m"

    ASin = asin(X);

#line 1754 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ASin_4  = ASin;
#line 802 "math.m"
}
#line 798 "math.m"
      }
#line 794 "math.m"
    return mercury__math__ASin_4;
#line 794 "math.m"
  }
#line 167 "math.m"
}

#line 160 "math.m"
MR_Float MR_CALL 
mercury__math__tan_1_f_0(
#line 160 "math.m"
  MR_Float mercury__math__X_1)
#line 160 "math.m"
{
#line 760 "math.m"
  {
#line 760 "math.m"
    MR_bool mercury__math__succeeded;
#line 760 "math.m"
    MR_Float mercury__math__Tan_2;

#line 764 "math.m"
{
#define MR_PROC_LABEL mercury__math__tan_1_f_0

	MR_Float X;
	MR_Float Tan;

	X =  mercury__math__X_1 ;
		{
#line 764 "math.m"

    Tan = tan(X);

#line 1797 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Tan_2  = Tan;
#line 764 "math.m"
}
#line 760 "math.m"
    return mercury__math__Tan_2;
#line 760 "math.m"
  }
#line 160 "math.m"
}

#line 156 "math.m"
MR_Float MR_CALL 
mercury__math__cos_1_f_0(
#line 156 "math.m"
  MR_Float mercury__math__X_1)
#line 156 "math.m"
{
#line 734 "math.m"
  {
#line 734 "math.m"
    MR_bool mercury__math__succeeded;
#line 734 "math.m"
    MR_Float mercury__math__Cos_2;

#line 738 "math.m"
{
#define MR_PROC_LABEL mercury__math__cos_1_f_0

	MR_Float X;
	MR_Float Cos;

	X =  mercury__math__X_1 ;
		{
#line 738 "math.m"

    Cos = cos(X);

#line 1838 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Cos_2  = Cos;
#line 738 "math.m"
}
#line 734 "math.m"
    return mercury__math__Cos_2;
#line 734 "math.m"
  }
#line 156 "math.m"
}

#line 152 "math.m"
MR_Float MR_CALL 
mercury__math__sin_1_f_0(
#line 152 "math.m"
  MR_Float mercury__math__X_1)
#line 152 "math.m"
{
#line 708 "math.m"
  {
#line 708 "math.m"
    MR_bool mercury__math__succeeded;
#line 708 "math.m"
    MR_Float mercury__math__Sin_2;

#line 712 "math.m"
{
#define MR_PROC_LABEL mercury__math__sin_1_f_0

	MR_Float X;
	MR_Float Sin;

	X =  mercury__math__X_1 ;
		{
#line 712 "math.m"

    Sin = sin(X);

#line 1879 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Sin_2  = Sin;
#line 712 "math.m"
}
#line 708 "math.m"
    return mercury__math__Sin_2;
#line 708 "math.m"
  }
#line 152 "math.m"
}

#line 143 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_log_2_f_0(
#line 143 "math.m"
  MR_Float mercury__math__B_1,
#line 143 "math.m"
  MR_Float mercury__math__X_2)
#line 143 "math.m"
{
#line 691 "math.m"
  {
#line 691 "math.m"
    MR_bool mercury__math__succeeded;
#line 691 "math.m"
    MR_Float mercury__math__Log_3;

#line 695 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_log_2_f_0

	MR_Float B;
	MR_Float X;
	MR_Float Log;

	B =  mercury__math__B_1 ;
	X =  mercury__math__X_2 ;
		{
#line 695 "math.m"

    Log = log(X) / log(B);

#line 1924 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_3  = Log;
#line 695 "math.m"
}
#line 691 "math.m"
    return mercury__math__Log_3;
#line 691 "math.m"
  }
#line 143 "math.m"
}

#line 142 "math.m"
MR_Float MR_CALL 
mercury__math__log_2_f_0(
#line 142 "math.m"
  MR_Float mercury__math__B_4,
#line 142 "math.m"
  MR_Float mercury__math__X_5)
#line 142 "math.m"
{
#line 687 "math.m"
  {
#line 687 "math.m"
    MR_bool mercury__math__succeeded;
#line 687 "math.m"
    MR_Float mercury__math__Log_6;

#line 258 "math.m"
{
#define MR_PROC_LABEL mercury__math__log_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1969 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 258 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 680 "math.m"
    if (mercury__math__succeeded)
#line 680 "math.m"
      {
#line 681 "math.m"
        mercury__math__succeeded = (mercury__math__X_5 <= ((MR_Float) 0.0000000000000000));
#line 682 "math.m"
        if (!(mercury__math__succeeded))
#line 682 "math.m"
          {
#line 682 "math.m"
            mercury__math__succeeded = (mercury__math__B_4 <= ((MR_Float) 0.0000000000000000));
#line 682 "math.m"
            if (!(mercury__math__succeeded))
#line 683 "math.m"
              mercury__math__succeeded = (mercury__math__B_4 == ((MR_Float) 1.0000000000000000));
#line 682 "math.m"
          }
#line 680 "math.m"
      }
#line 687 "math.m"
    if (mercury__math__succeeded)
#line 686 "math.m"
      {
#line 686 "math.m"
        MR_Word mercury__math__TypeCtorInfo_11_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 686 "math.m"
        MR_Word mercury__math__V_9_9 = (MR_Word) ((MR_Box) ((MR_String) "math.log"));

#line 686 "math.m"
        {
#line 686 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_11_11, ((MR_Box) (mercury__math__V_9_9)));
        }
#line 686 "math.m"
      }
#line 687 "math.m"
    else
#line 691 "math.m"
      {
#line 695 "math.m"
{
#define MR_PROC_LABEL mercury__math__log_2_f_0

	MR_Float B;
	MR_Float X;
	MR_Float Log;

	B =  mercury__math__B_4 ;
	X =  mercury__math__X_5 ;
		{
#line 695 "math.m"

    Log = log(X) / log(B);

#line 2033 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_6  = Log;
#line 695 "math.m"
}
#line 691 "math.m"
      }
#line 687 "math.m"
    return mercury__math__Log_6;
#line 687 "math.m"
  }
#line 142 "math.m"
}

#line 136 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_log2_1_f_0(
#line 136 "math.m"
  MR_Float mercury__math__X_1)
#line 136 "math.m"
{
#line 657 "math.m"
  {
#line 657 "math.m"
    MR_bool mercury__math__succeeded;
#line 657 "math.m"
    MR_Float mercury__math__Log2_2;

#line 661 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_log2_1_f_0

	MR_Float X;
	MR_Float Log2;

	X =  mercury__math__X_1 ;
		{
#line 661 "math.m"

    Log2 = log(X) / ML_FLOAT_LN2;

#line 2076 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log2_2  = Log2;
#line 661 "math.m"
}
#line 657 "math.m"
    return mercury__math__Log2_2;
#line 657 "math.m"
  }
#line 136 "math.m"
}

#line 135 "math.m"
MR_Float MR_CALL 
mercury__math__log2_1_f_0(
#line 135 "math.m"
  MR_Float mercury__math__X_3)
#line 135 "math.m"
{
#line 653 "math.m"
  {
#line 653 "math.m"
    MR_bool mercury__math__succeeded;
#line 653 "math.m"
    MR_Float mercury__math__Log_4;
#line 651 "math.m"
    MR_Float mercury__math__V_5_5;

#line 258 "math.m"
{
#define MR_PROC_LABEL mercury__math__log2_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2121 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 258 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 651 "math.m"
    if (mercury__math__succeeded)
#line 651 "math.m"
      {
#line 651 "math.m"
        mercury__math__V_5_5 = (MR_Float) 0.0000000000000000;
#line 651 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 <= mercury__math__V_5_5);
#line 651 "math.m"
      }
#line 653 "math.m"
    if (mercury__math__succeeded)
#line 652 "math.m"
      {
#line 652 "math.m"
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 652 "math.m"
        MR_Word mercury__math__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "math.log2"));

#line 652 "math.m"
        {
#line 652 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__V_6_6)));
        }
#line 652 "math.m"
      }
#line 653 "math.m"
    else
#line 657 "math.m"
      {
#line 661 "math.m"
{
#define MR_PROC_LABEL mercury__math__log2_1_f_0

	MR_Float X;
	MR_Float Log2;

	X =  mercury__math__X_3 ;
		{
#line 661 "math.m"

    Log2 = log(X) / ML_FLOAT_LN2;

#line 2173 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_4  = Log2;
#line 661 "math.m"
}
#line 657 "math.m"
      }
#line 653 "math.m"
    return mercury__math__Log_4;
#line 653 "math.m"
  }
#line 135 "math.m"
}

#line 129 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_log10_1_f_0(
#line 129 "math.m"
  MR_Float mercury__math__X_1)
#line 129 "math.m"
{
#line 628 "math.m"
  {
#line 628 "math.m"
    MR_bool mercury__math__succeeded;
#line 628 "math.m"
    MR_Float mercury__math__Log10_2;

#line 632 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_log10_1_f_0

	MR_Float X;
	MR_Float Log10;

	X =  mercury__math__X_1 ;
		{
#line 632 "math.m"

    Log10 = log10(X);

#line 2216 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log10_2  = Log10;
#line 632 "math.m"
}
#line 628 "math.m"
    return mercury__math__Log10_2;
#line 628 "math.m"
  }
#line 129 "math.m"
}

#line 128 "math.m"
MR_Float MR_CALL 
mercury__math__log10_1_f_0(
#line 128 "math.m"
  MR_Float mercury__math__X_3)
#line 128 "math.m"
{
#line 624 "math.m"
  {
#line 624 "math.m"
    MR_bool mercury__math__succeeded;
#line 624 "math.m"
    MR_Float mercury__math__Log_4;
#line 622 "math.m"
    MR_Float mercury__math__V_5_5;

#line 258 "math.m"
{
#define MR_PROC_LABEL mercury__math__log10_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2261 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 258 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 622 "math.m"
    if (mercury__math__succeeded)
#line 622 "math.m"
      {
#line 622 "math.m"
        mercury__math__V_5_5 = (MR_Float) 0.0000000000000000;
#line 622 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 <= mercury__math__V_5_5);
#line 622 "math.m"
      }
#line 624 "math.m"
    if (mercury__math__succeeded)
#line 623 "math.m"
      {
#line 623 "math.m"
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 623 "math.m"
        MR_Word mercury__math__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "math.log10"));

#line 623 "math.m"
        {
#line 623 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__V_6_6)));
        }
#line 623 "math.m"
      }
#line 624 "math.m"
    else
#line 628 "math.m"
      {
#line 632 "math.m"
{
#define MR_PROC_LABEL mercury__math__log10_1_f_0

	MR_Float X;
	MR_Float Log10;

	X =  mercury__math__X_3 ;
		{
#line 632 "math.m"

    Log10 = log10(X);

#line 2313 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_4  = Log10;
#line 632 "math.m"
}
#line 628 "math.m"
      }
#line 624 "math.m"
    return mercury__math__Log_4;
#line 624 "math.m"
  }
#line 128 "math.m"
}

#line 122 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_ln_1_f_0(
#line 122 "math.m"
  MR_Float mercury__math__X_1)
#line 122 "math.m"
{
#line 595 "math.m"
  {
#line 595 "math.m"
    MR_bool mercury__math__succeeded;
#line 595 "math.m"
    MR_Float mercury__math__Log_2;

#line 599 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_ln_1_f_0

	MR_Float X;
	MR_Float Log;

	X =  mercury__math__X_1 ;
		{
#line 599 "math.m"

    Log = log(X);

#line 2356 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_2  = Log;
#line 599 "math.m"
}
#line 595 "math.m"
    return mercury__math__Log_2;
#line 595 "math.m"
  }
#line 122 "math.m"
}

#line 121 "math.m"
MR_Float MR_CALL 
mercury__math__ln_1_f_0(
#line 121 "math.m"
  MR_Float mercury__math__X_3)
#line 121 "math.m"
{
#line 591 "math.m"
  {
#line 591 "math.m"
    MR_bool mercury__math__succeeded;
#line 591 "math.m"
    MR_Float mercury__math__Log_4;
#line 589 "math.m"
    MR_Float mercury__math__V_5_5;

#line 258 "math.m"
{
#define MR_PROC_LABEL mercury__math__ln_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2401 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 258 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 589 "math.m"
    if (mercury__math__succeeded)
#line 589 "math.m"
      {
#line 589 "math.m"
        mercury__math__V_5_5 = (MR_Float) 0.0000000000000000;
#line 589 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 <= mercury__math__V_5_5);
#line 589 "math.m"
      }
#line 591 "math.m"
    if (mercury__math__succeeded)
#line 590 "math.m"
      {
#line 590 "math.m"
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 590 "math.m"
        MR_Word mercury__math__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "math.ln"));

#line 590 "math.m"
        {
#line 590 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__V_6_6)));
        }
#line 590 "math.m"
      }
#line 591 "math.m"
    else
#line 595 "math.m"
      {
#line 599 "math.m"
{
#define MR_PROC_LABEL mercury__math__ln_1_f_0

	MR_Float X;
	MR_Float Log;

	X =  mercury__math__X_3 ;
		{
#line 599 "math.m"

    Log = log(X);

#line 2453 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_4  = Log;
#line 599 "math.m"
}
#line 595 "math.m"
      }
#line 591 "math.m"
    return mercury__math__Log_4;
#line 591 "math.m"
  }
#line 121 "math.m"
}

#line 115 "math.m"
MR_Float MR_CALL 
mercury__math__exp_1_f_0(
#line 115 "math.m"
  MR_Float mercury__math__X_1)
#line 115 "math.m"
{
#line 562 "math.m"
  {
#line 562 "math.m"
    MR_bool mercury__math__succeeded;
#line 562 "math.m"
    MR_Float mercury__math__Exp_2;

#line 566 "math.m"
{
#define MR_PROC_LABEL mercury__math__exp_1_f_0

	MR_Float X;
	MR_Float Exp;

	X =  mercury__math__X_1 ;
		{
#line 566 "math.m"

    Exp = exp(X);

#line 2496 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Exp_2  = Exp;
#line 566 "math.m"
}
#line 562 "math.m"
    return mercury__math__Exp_2;
#line 562 "math.m"
  }
#line 115 "math.m"
}

#line 111 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_pow_2_f_0(
#line 111 "math.m"
  MR_Float mercury__math__X_1,
#line 111 "math.m"
  MR_Float mercury__math__Y_2)
#line 111 "math.m"
{
#line 533 "math.m"
  {
#line 533 "math.m"
    MR_bool mercury__math__succeeded;
#line 533 "math.m"
    MR_Float mercury__math__Res_3;

#line 537 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_pow_2_f_0

	MR_Float X;
	MR_Float Y;
	MR_Float Res;

	X =  mercury__math__X_1 ;
	Y =  mercury__math__Y_2 ;
		{
#line 537 "math.m"

    Res = pow(X, Y);

#line 2541 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Res_3  = Res;
#line 537 "math.m"
}
#line 533 "math.m"
    return mercury__math__Res_3;
#line 533 "math.m"
  }
#line 111 "math.m"
}

#line 110 "math.m"
MR_Float MR_CALL 
mercury__math__pow_2_f_0(
#line 110 "math.m"
  MR_Float mercury__math__X_4,
#line 110 "math.m"
  MR_Float mercury__math__Y_5)
#line 110 "math.m"
{
#line 523 "math.m"
  {
#line 523 "math.m"
    MR_bool mercury__math__succeeded;
#line 523 "math.m"
    MR_Float mercury__math__Res_6;
#line 521 "math.m"
    MR_Float mercury__math__V_7_7;

#line 258 "math.m"
{
#define MR_PROC_LABEL mercury__math__pow_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2588 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 258 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 521 "math.m"
    if (mercury__math__succeeded)
#line 521 "math.m"
      {
#line 521 "math.m"
        mercury__math__V_7_7 = (MR_Float) 0.0000000000000000;
#line 521 "math.m"
        mercury__math__succeeded = (mercury__math__X_4 < mercury__math__V_7_7);
#line 521 "math.m"
      }
#line 523 "math.m"
    if (mercury__math__succeeded)
#line 522 "math.m"
      {
#line 522 "math.m"
        MR_Word mercury__math__TypeCtorInfo_13_13 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 522 "math.m"
        MR_Word mercury__math__V_8_8 = (MR_Word) ((MR_Box) ((MR_String) "math.pow"));

#line 522 "math.m"
        {
#line 522 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_13_13, ((MR_Box) (mercury__math__V_8_8)));
        }
#line 522 "math.m"
      }
#line 523 "math.m"
    else
#line 529 "math.m"
      {
#line 523 "math.m"
        mercury__math__succeeded = (mercury__math__X_4 == ((MR_Float) 0.0000000000000000));
#line 529 "math.m"
        if (mercury__math__succeeded)
#line 526 "math.m"
          {
#line 524 "math.m"
            mercury__math__succeeded = (mercury__math__Y_5 <= ((MR_Float) 0.0000000000000000));
#line 526 "math.m"
            if (mercury__math__succeeded)
#line 525 "math.m"
              {
#line 525 "math.m"
                MR_Word mercury__math__TypeCtorInfo_14_14 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 525 "math.m"
                MR_Word mercury__math__V_11_11 = (MR_Word) ((MR_Box) ((MR_String) "math.pow"));

#line 525 "math.m"
                {
#line 525 "math.m"
                  mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_14_14, ((MR_Box) (mercury__math__V_11_11)));
                }
#line 525 "math.m"
              }
#line 526 "math.m"
            else
#line 527 "math.m"
              mercury__math__Res_6 = (MR_Float) 0.0000000000000000;
#line 526 "math.m"
          }
#line 529 "math.m"
        else
#line 533 "math.m"
          {
#line 537 "math.m"
{
#define MR_PROC_LABEL mercury__math__pow_2_f_0

	MR_Float X;
	MR_Float Y;
	MR_Float Res;

	X =  mercury__math__X_4 ;
	Y =  mercury__math__Y_5 ;
		{
#line 537 "math.m"

    Res = pow(X, Y);

#line 2676 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Res_6  = Res;
#line 537 "math.m"
}
#line 533 "math.m"
          }
#line 529 "math.m"
      }
#line 523 "math.m"
    return mercury__math__Res_6;
#line 523 "math.m"
  }
#line 110 "math.m"
}

#line 99 "math.m"
MR_Word MR_CALL 
mercury__math__solve_quadratic_3_f_0(
#line 99 "math.m"
  MR_Float mercury__math__A_5,
#line 99 "math.m"
  MR_Float mercury__math__B_6,
#line 99 "math.m"
  MR_Float mercury__math__C_7)
#line 99 "math.m"
{
#line 486 "math.m"
  {
#line 486 "math.m"
    MR_bool mercury__math__succeeded;
#line 486 "math.m"
    MR_Word mercury__math__Roots_8;
#line 486 "math.m"
    MR_Float mercury__math__DSquared_9;
#line 486 "math.m"
    MR_Word mercury__math__CmpD_10;
#line 486 "math.m"
    MR_Float mercury__math__V_17_17 = (mercury__math__B_6 * mercury__math__B_6);
#line 486 "math.m"
    MR_Float mercury__math__V_19_19;
#line 486 "math.m"
    MR_Float mercury__math__V_20_20 = (((MR_Float) 4.0000000000000000) * mercury__math__A_5);

#line 489 "math.m"
    mercury__math__V_19_19 = (mercury__math__V_20_20 * mercury__math__C_7);
#line 489 "math.m"
    mercury__math__DSquared_9 = (mercury__math__V_17_17 - mercury__math__V_19_19);
#line 118 "private_builtin.opt"
    mercury__math__succeeded = (mercury__math__DSquared_9 < ((MR_Float) 0.0000000000000000));
#line 121 "private_builtin.opt"
    if (mercury__math__succeeded)
#line 120 "private_builtin.opt"
      mercury__math__CmpD_10 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
    else
#line 126 "private_builtin.opt"
      {
#line 123 "private_builtin.opt"
        mercury__math__succeeded = (mercury__math__DSquared_9 > ((MR_Float) 0.0000000000000000));
#line 126 "private_builtin.opt"
        if (mercury__math__succeeded)
#line 125 "private_builtin.opt"
          mercury__math__CmpD_10 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
        else
#line 127 "private_builtin.opt"
          mercury__math__CmpD_10 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
      }
#line 494 "math.m"
    if ((mercury__math__CmpD_10 == (MR_Integer) 1))
#line 493 "math.m"
      mercury__math__Roots_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "math.m"
    else
#line 494 "math.m"
      if ((mercury__math__CmpD_10 == (MR_Integer) 0))
#line 495 "math.m"
        {
#line 495 "math.m"
          MR_Float mercury__math__Root_11;
#line 495 "math.m"
          MR_Float mercury__math__V_30_30 = (((MR_Float) -0.50000000000000000) * mercury__math__B_6);

#line 191 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 191 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2778 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 191 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 72 "float.opt"
          if (mercury__math__succeeded)
#line 73 "float.opt"
            mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
#line 78 "float.opt"
          if (mercury__math__succeeded)
#line 75 "float.opt"
            {
#line 75 "float.opt"
              MR_Word mercury__math__TypeCtorInfo_9_42 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 75 "float.opt"
              MR_Word mercury__math__V_7_40 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 77 "float.opt"
              {
#line 77 "float.opt"
                mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_42, ((MR_Box) (mercury__math__V_7_40)));
              }
#line 75 "float.opt"
            }
#line 78 "float.opt"
          else
#line 79 "float.opt"
            mercury__math__Root_11 = (mercury__math__V_30_30 / mercury__math__A_5);
#line 497 "math.m"
          {
#line 497 "math.m"
            mercury__math__Roots_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "math.m"
            MR_hl_field(MR_mktag(1), mercury__math__Roots_8, 0) = MR_box_float(mercury__math__Root_11);
#line 497 "math.m"
          }
#line 495 "math.m"
        }
#line 494 "math.m"
      else
#line 499 "math.m"
        {
#line 499 "math.m"
          MR_Float mercury__math__D_12;
#line 499 "math.m"
          MR_Word mercury__math__CmpB_13;
#line 499 "math.m"
          MR_Float mercury__math__Root1_15;
#line 499 "math.m"
          MR_Float mercury__math__Root2_16;

#line 500 "math.m"
          {
#line 500 "math.m"
            mercury__math__D_12 = mercury__math__sqrt_1_f_0(mercury__math__DSquared_9);
          }
#line 118 "private_builtin.opt"
          mercury__math__succeeded = (mercury__math__B_6 < ((MR_Float) 0.0000000000000000));
#line 121 "private_builtin.opt"
          if (mercury__math__succeeded)
#line 120 "private_builtin.opt"
            mercury__math__CmpB_13 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
          else
#line 126 "private_builtin.opt"
            {
#line 123 "private_builtin.opt"
              mercury__math__succeeded = (mercury__math__B_6 > ((MR_Float) 0.0000000000000000));
#line 126 "private_builtin.opt"
              if (mercury__math__succeeded)
#line 125 "private_builtin.opt"
                mercury__math__CmpB_13 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
              else
#line 127 "private_builtin.opt"
                mercury__math__CmpB_13 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
            }
#line 507 "math.m"
          if ((mercury__math__CmpB_13 == (MR_Integer) 1))
#line 503 "math.m"
            {
#line 503 "math.m"
              MR_Float mercury__math__Q_14;
#line 503 "math.m"
              MR_Float mercury__math__V_29_29 = (mercury__math__B_6 - mercury__math__D_12);

#line 504 "math.m"
              mercury__math__Q_14 = (((MR_Float) -0.50000000000000000) * mercury__math__V_29_29);
#line 191 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 191 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2887 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 191 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 72 "float.opt"
              if (mercury__math__succeeded)
#line 73 "float.opt"
                mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
#line 78 "float.opt"
              if (mercury__math__succeeded)
#line 75 "float.opt"
                {
#line 75 "float.opt"
                  MR_Word mercury__math__TypeCtorInfo_9_51 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 75 "float.opt"
                  MR_Word mercury__math__V_7_49 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 77 "float.opt"
                  {
#line 77 "float.opt"
                    mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_51, ((MR_Box) (mercury__math__V_7_49)));
                  }
#line 75 "float.opt"
                }
#line 78 "float.opt"
              else
#line 79 "float.opt"
                mercury__math__Root1_15 = (mercury__math__Q_14 / mercury__math__A_5);
#line 191 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 191 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2935 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 191 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 72 "float.opt"
              if (mercury__math__succeeded)
#line 73 "float.opt"
                mercury__math__succeeded = (mercury__math__Q_14 == ((MR_Float) 0.0000000000000000));
#line 78 "float.opt"
              if (mercury__math__succeeded)
#line 75 "float.opt"
                {
#line 75 "float.opt"
                  MR_Word mercury__math__TypeCtorInfo_9_57 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 75 "float.opt"
                  MR_Word mercury__math__V_7_55 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 77 "float.opt"
                  {
#line 77 "float.opt"
                    mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_57, ((MR_Box) (mercury__math__V_7_55)));
                  }
#line 75 "float.opt"
                }
#line 78 "float.opt"
              else
#line 79 "float.opt"
                mercury__math__Root2_16 = (mercury__math__C_7 / mercury__math__Q_14);
#line 503 "math.m"
            }
#line 507 "math.m"
          else
#line 507 "math.m"
            if ((mercury__math__CmpB_13 == (MR_Integer) 0))
#line 508 "math.m"
              {
#line 508 "math.m"
                MR_Float mercury__math__V_26_26 = (((MR_Float) -0.50000000000000000) * mercury__math__D_12);

#line 191 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 191 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2994 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 191 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 72 "float.opt"
                if (mercury__math__succeeded)
#line 73 "float.opt"
                  mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
#line 78 "float.opt"
                if (mercury__math__succeeded)
#line 75 "float.opt"
                  {
#line 75 "float.opt"
                    MR_Word mercury__math__TypeCtorInfo_9_63 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 75 "float.opt"
                    MR_Word mercury__math__V_7_61 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 77 "float.opt"
                    {
#line 77 "float.opt"
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_63, ((MR_Box) (mercury__math__V_7_61)));
                    }
#line 75 "float.opt"
                  }
#line 78 "float.opt"
                else
#line 79 "float.opt"
                  mercury__math__Root1_15 = (mercury__math__V_26_26 / mercury__math__A_5);
#line 510 "math.m"
                mercury__math__Root2_16 = (((MR_Float) 0.0000000000000000) - mercury__math__Root1_15);
#line 508 "math.m"
              }
#line 507 "math.m"
            else
#line 512 "math.m"
              {
#line 512 "math.m"
                MR_Float mercury__math__V_25_25 = (mercury__math__B_6 + mercury__math__D_12);
#line 512 "math.m"
                MR_Float mercury__math__Q_32 = (((MR_Float) -0.50000000000000000) * mercury__math__V_25_25);

#line 191 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 191 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 3055 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 191 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 72 "float.opt"
                if (mercury__math__succeeded)
#line 73 "float.opt"
                  mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
#line 78 "float.opt"
                if (mercury__math__succeeded)
#line 75 "float.opt"
                  {
#line 75 "float.opt"
                    MR_Word mercury__math__TypeCtorInfo_9_69 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 75 "float.opt"
                    MR_Word mercury__math__V_7_67 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 77 "float.opt"
                    {
#line 77 "float.opt"
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_69, ((MR_Box) (mercury__math__V_7_67)));
                    }
#line 75 "float.opt"
                  }
#line 78 "float.opt"
                else
#line 79 "float.opt"
                  mercury__math__Root1_15 = (mercury__math__Q_32 / mercury__math__A_5);
#line 191 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 191 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 3103 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 191 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 72 "float.opt"
                if (mercury__math__succeeded)
#line 73 "float.opt"
                  mercury__math__succeeded = (mercury__math__Q_32 == ((MR_Float) 0.0000000000000000));
#line 78 "float.opt"
                if (mercury__math__succeeded)
#line 75 "float.opt"
                  {
#line 75 "float.opt"
                    MR_Word mercury__math__TypeCtorInfo_9_75 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 75 "float.opt"
                    MR_Word mercury__math__V_7_73 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 77 "float.opt"
                    {
#line 77 "float.opt"
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_75, ((MR_Box) (mercury__math__V_7_73)));
                    }
#line 75 "float.opt"
                  }
#line 78 "float.opt"
                else
#line 79 "float.opt"
                  mercury__math__Root2_16 = (mercury__math__C_7 / mercury__math__Q_32);
#line 512 "math.m"
              }
#line 517 "math.m"
          {
#line 517 "math.m"
            mercury__math__Roots_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "math.m"
            MR_hl_field(MR_mktag(2), mercury__math__Roots_8, 0) = MR_box_float(mercury__math__Root1_15);
#line 517 "math.m"
            MR_hl_field(MR_mktag(2), mercury__math__Roots_8, 1) = MR_box_float(mercury__math__Root2_16);
#line 517 "math.m"
          }
#line 499 "math.m"
        }
#line 486 "math.m"
    return mercury__math__Roots_8;
#line 486 "math.m"
  }
#line 99 "math.m"
}

#line 87 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_sqrt_1_f_0(
#line 87 "math.m"
  MR_Float mercury__math__X_1)
#line 87 "math.m"
{
#line 457 "math.m"
  {
#line 457 "math.m"
    MR_bool mercury__math__succeeded;
#line 457 "math.m"
    MR_Float mercury__math__SquareRoot_2;

#line 461 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_sqrt_1_f_0

	MR_Float X;
	MR_Float SquareRoot;

	X =  mercury__math__X_1 ;
		{
#line 461 "math.m"

    SquareRoot = sqrt(X);

#line 3184 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__SquareRoot_2  = SquareRoot;
#line 461 "math.m"
}
#line 457 "math.m"
    return mercury__math__SquareRoot_2;
#line 457 "math.m"
  }
#line 87 "math.m"
}

#line 86 "math.m"
MR_Float MR_CALL 
mercury__math__sqrt_1_f_0(
#line 86 "math.m"
  MR_Float mercury__math__X_3)
#line 86 "math.m"
{
#line 453 "math.m"
  {
#line 453 "math.m"
    MR_bool mercury__math__succeeded;
#line 453 "math.m"
    MR_Float mercury__math__SquareRoot_4;
#line 451 "math.m"
    MR_Float mercury__math__V_5_5;

#line 258 "math.m"
{
#define MR_PROC_LABEL mercury__math__sqrt_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 3229 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 258 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 451 "math.m"
    if (mercury__math__succeeded)
#line 451 "math.m"
      {
#line 451 "math.m"
        mercury__math__V_5_5 = (MR_Float) 0.0000000000000000;
#line 451 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 < mercury__math__V_5_5);
#line 451 "math.m"
      }
#line 453 "math.m"
    if (mercury__math__succeeded)
#line 452 "math.m"
      {
#line 452 "math.m"
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 452 "math.m"
        MR_Word mercury__math__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "math.sqrt"));

#line 452 "math.m"
        {
#line 452 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__V_6_6)));
        }
#line 452 "math.m"
      }
#line 453 "math.m"
    else
#line 457 "math.m"
      {
#line 461 "math.m"
{
#define MR_PROC_LABEL mercury__math__sqrt_1_f_0

	MR_Float X;
	MR_Float SquareRoot;

	X =  mercury__math__X_3 ;
		{
#line 461 "math.m"

    SquareRoot = sqrt(X);

#line 3281 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__SquareRoot_4  = SquareRoot;
#line 461 "math.m"
}
#line 457 "math.m"
      }
#line 453 "math.m"
    return mercury__math__SquareRoot_4;
#line 453 "math.m"
  }
#line 86 "math.m"
}

#line 75 "math.m"
MR_Float MR_CALL 
mercury__math__truncate_1_f_0(
#line 75 "math.m"
  MR_Float mercury__math__X_3)
#line 75 "math.m"
{
#line 448 "math.m"
  {
#line 448 "math.m"
    MR_bool mercury__math__succeeded = (mercury__math__X_3 < ((MR_Float) 0.0000000000000000));
#line 448 "math.m"
    MR_Float mercury__math__HeadVar__2_2;

#line 448 "math.m"
    if (mercury__math__succeeded)
#line 355 "math.m"
      {
#line 359 "math.m"
{
#define MR_PROC_LABEL mercury__math__truncate_1_f_0

	MR_Float Num;
	MR_Float Ceil;

	Num =  mercury__math__X_3 ;
		{
#line 359 "math.m"

    Ceil = ceil(Num);

#line 3328 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__HeadVar__2_2  = Ceil;
#line 359 "math.m"
}
#line 355 "math.m"
      }
#line 448 "math.m"
    else
#line 387 "math.m"
      {
#line 391 "math.m"
{
#define MR_PROC_LABEL mercury__math__truncate_1_f_0

	MR_Float Num;
	MR_Float Floor;

	Num =  mercury__math__X_3 ;
		{
#line 391 "math.m"

    Floor = floor(Num);

#line 3354 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__HeadVar__2_2  = Floor;
#line 391 "math.m"
}
#line 387 "math.m"
      }
#line 448 "math.m"
    return mercury__math__HeadVar__2_2;
#line 448 "math.m"
  }
#line 75 "math.m"
}

#line 70 "math.m"
MR_Float MR_CALL 
mercury__math__round_1_f_0(
#line 70 "math.m"
  MR_Float mercury__math__Num_1)
#line 70 "math.m"
{
#line 419 "math.m"
  {
#line 419 "math.m"
    MR_bool mercury__math__succeeded;
#line 419 "math.m"
    MR_Float mercury__math__Rounded_2;

#line 423 "math.m"
{
#define MR_PROC_LABEL mercury__math__round_1_f_0

	MR_Float Num;
	MR_Float Rounded;

	Num =  mercury__math__Num_1 ;
		{
#line 423 "math.m"

    Rounded = floor(Num+0.5);

#line 3397 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Rounded_2  = Rounded;
#line 423 "math.m"
}
#line 419 "math.m"
    return mercury__math__Rounded_2;
#line 419 "math.m"
  }
#line 70 "math.m"
}

#line 65 "math.m"
MR_Float MR_CALL 
mercury__math__floor_1_f_0(
#line 65 "math.m"
  MR_Float mercury__math__Num_1)
#line 65 "math.m"
{
#line 387 "math.m"
  {
#line 387 "math.m"
    MR_bool mercury__math__succeeded;
#line 387 "math.m"
    MR_Float mercury__math__Floor_2;

#line 391 "math.m"
{
#define MR_PROC_LABEL mercury__math__floor_1_f_0

	MR_Float Num;
	MR_Float Floor;

	Num =  mercury__math__Num_1 ;
		{
#line 391 "math.m"

    Floor = floor(Num);

#line 3438 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Floor_2  = Floor;
#line 391 "math.m"
}
#line 387 "math.m"
    return mercury__math__Floor_2;
#line 387 "math.m"
  }
#line 65 "math.m"
}

#line 60 "math.m"
MR_Float MR_CALL 
mercury__math__ceiling_1_f_0(
#line 60 "math.m"
  MR_Float mercury__math__Num_1)
#line 60 "math.m"
{
#line 355 "math.m"
  {
#line 355 "math.m"
    MR_bool mercury__math__succeeded;
#line 355 "math.m"
    MR_Float mercury__math__Ceil_2;

#line 359 "math.m"
{
#define MR_PROC_LABEL mercury__math__ceiling_1_f_0

	MR_Float Num;
	MR_Float Ceil;

	Num =  mercury__math__Num_1 ;
		{
#line 359 "math.m"

    Ceil = ceil(Num);

#line 3479 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Ceil_2  = Ceil;
#line 359 "math.m"
}
#line 355 "math.m"
    return mercury__math__Ceil_2;
#line 355 "math.m"
  }
#line 60 "math.m"
}

#line 50 "math.m"
MR_Float MR_CALL 
mercury__math__e_0_f_0(void)
#line 50 "math.m"
{
#line 329 "math.m"
  {
#line 329 "math.m"
    MR_bool mercury__math__succeeded;
#line 329 "math.m"
    MR_Float mercury__math__E_1;

#line 333 "math.m"
{
#define MR_PROC_LABEL mercury__math__e_0_f_0

	MR_Float E;

		{
#line 333 "math.m"

    E = ML_FLOAT_E;

#line 3516 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__E_1  = E;
#line 333 "math.m"
}
#line 329 "math.m"
    return mercury__math__E_1;
#line 329 "math.m"
  }
#line 50 "math.m"
}

#line 46 "math.m"
MR_Float MR_CALL 
mercury__math__pi_0_f_0(void)
#line 46 "math.m"
{
#line 296 "math.m"
  {
#line 296 "math.m"
    MR_bool mercury__math__succeeded;
#line 296 "math.m"
    MR_Float mercury__math__Pi_1;

#line 300 "math.m"
{
#define MR_PROC_LABEL mercury__math__pi_0_f_0

	MR_Float Pi;

		{
#line 300 "math.m"

    Pi = ML_FLOAT_PI;

#line 3553 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Pi_1  = Pi;
#line 300 "math.m"
}
#line 296 "math.m"
    return mercury__math__Pi_1;
#line 296 "math.m"
  }
#line 46 "math.m"
}

void mercury__math__init(void)
{
}

void mercury__math__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__math__math__type_ctor_info_domain_error_0);
	MR_register_type_ctor_info(&mercury__math__math__type_ctor_info_quadratic_roots_0);
}

void mercury__math__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module math. */
