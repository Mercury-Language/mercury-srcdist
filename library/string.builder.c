/*
** Automatically generated from `string.builder.m'
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


/* :- module string.builder. */
/* :- implementation. */

/*
INIT mercury__string__builder__init
ENDINIT
*/

#include "string.builder.mih"


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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 92 "string.builder.c"
static const MR_EnumFunctorDesc mercury__string__builder__string__builder__enum_functor_desc_handle_0_0;

#line 95 "string.builder.c"
static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_value_ordered_handle_0[1];

#line 98 "string.builder.c"
static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_name_ordered_handle_0[1];

#line 101 "string.builder.c"
static const MR_Integer mercury__string__builder__string__builder__functor_number_map_handle_0[1];

#line 104 "string.builder.c"
static const MR_Integer mercury__string__builder__string__builder__functor_number_map_state_0[1];

#line 107 "string.builder.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__builder__list__ti_list_1builtin__type_ctor_info_string_0;

#line 110 "string.builder.c"
static const MR_NotagFunctorDesc mercury__string__builder__string__builder__notag_functor_desc_state_0;

#line 113 "string.builder.c"
static MR_bool MR_CALL 
mercury__string__builder____Unify____handle_0_0_10001(
#line 116 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 118 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2);

#line 121 "string.builder.c"
static void MR_CALL 
mercury__string__builder____Compare____handle_0_0_10001(
#line 124 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_1,
#line 126 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 128 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3);

#line 131 "string.builder.c"
static MR_bool MR_CALL 
mercury__string__builder____Unify____state_0_0_10001(
#line 134 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 136 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2);

#line 139 "string.builder.c"
static void MR_CALL 
mercury__string__builder____Compare____state_0_0_10001(
#line 142 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_1,
#line 144 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 146 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3);

#line 149 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
#line 152 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 154 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 156 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 158 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 160 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4);

#line 163 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
#line 166 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 168 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 170 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 172 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 174 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4);

#line 177 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0_10001(
#line 180 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 182 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 184 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_2,
#line 186 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 188 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4);

#line 191 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0_10001(
#line 194 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 196 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 198 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 200 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__string__builder_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__string__builder_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__builder_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__builder_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__string__builder_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mercury__string__builder_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__builder_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__builder_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__builder_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__builder_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__builder_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "string.mh"
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
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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



#line 578 "string.builder.c"
static const MR_EnumFunctorDesc mercury__string__builder__string__builder__enum_functor_desc_handle_0_0 = {
  (MR_String) "handle",
  (MR_Integer) 0
};

#line 584 "string.builder.c"
static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_value_ordered_handle_0[1] = {
  &mercury__string__builder__string__builder__enum_functor_desc_handle_0_0
};

#line 589 "string.builder.c"
static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_name_ordered_handle_0[1] = {
  &mercury__string__builder__string__builder__enum_functor_desc_handle_0_0
};

#line 594 "string.builder.c"
static const MR_Integer mercury__string__builder__string__builder__functor_number_map_handle_0[1] = {
  (MR_Integer) 0
};

#line 599 "string.builder.c"
const MR_TypeCtorInfo_Struct mercury__string__builder__string__builder__type_ctor_info_handle_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__string__builder____Unify____handle_0_0_10001)),
  ((MR_Box) (mercury__string__builder____Compare____handle_0_0_10001)),
  (MR_String) "string.builder",
  (MR_String) "handle",
  {
    mercury__string__builder__string__builder__enum_name_ordered_handle_0
  },
  {
    mercury__string__builder__string__builder__enum_value_ordered_handle_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__builder__string__builder__functor_number_map_handle_0
};

#line 620 "string.builder.c"
static const MR_Integer mercury__string__builder__string__builder__functor_number_map_state_0[1] = {
  (MR_Integer) 0
};

#line 625 "string.builder.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__builder__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 633 "string.builder.c"
static const MR_NotagFunctorDesc mercury__string__builder__string__builder__notag_functor_desc_state_0 = {
  (MR_String) "state",
  (MR_PseudoTypeInfo) &mercury__string__builder__list__ti_list_1builtin__type_ctor_info_string_0,
  NULL
};

#line 640 "string.builder.c"
const MR_TypeCtorInfo_Struct mercury__string__builder__string__builder__type_ctor_info_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string__builder____Unify____state_0_0_10001)),
  ((MR_Box) (mercury__string__builder____Compare____state_0_0_10001)),
  (MR_String) "string.builder",
  (MR_String) "state",
  {
    &mercury__string__builder__string__builder__notag_functor_desc_state_0
  },
  {
    &mercury__string__builder__string__builder__notag_functor_desc_state_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__builder__string__builder__functor_number_map_state_0
};

#line 661 "string.builder.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__character__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001))
};

#line 671 "string.builder.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001))
};

#line 681 "string.builder.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0_10001))
};

#line 691 "string.builder.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0_10001))
};

#line 701 "string.builder.c"
static MR_bool MR_CALL 
mercury__string__builder____Unify____handle_0_0_10001(
#line 704 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 706 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2)
#line 708 "string.builder.c"
{
#line 710 "string.builder.c"
  {
#line 712 "string.builder.c"
    MR_bool mercury__string__builder__succeeded;

#line 715 "string.builder.c"
    {
#line 717 "string.builder.c"
      mercury__string__builder__succeeded = mercury__string__builder____Unify____handle_0_0();
    }
#line 720 "string.builder.c"
    return mercury__string__builder__succeeded;
#line 722 "string.builder.c"
  }
#line 724 "string.builder.c"
}

#line 727 "string.builder.c"
static void MR_CALL 
mercury__string__builder____Compare____handle_0_0_10001(
#line 730 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_1,
#line 732 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 734 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3)
#line 736 "string.builder.c"
{
#line 738 "string.builder.c"
  {
#line 740 "string.builder.c"
    MR_Word mercury__string__builder__conv0_HeadVar__1_1;

#line 743 "string.builder.c"
    {
#line 745 "string.builder.c"
      mercury__string__builder____Compare____handle_0_0(&mercury__string__builder__conv0_HeadVar__1_1);
    }
#line 748 "string.builder.c"
    *mercury__string__builder__wrapper_arg_1 = ((MR_Box) (mercury__string__builder__conv0_HeadVar__1_1));
#line 750 "string.builder.c"
  }
#line 752 "string.builder.c"
}

#line 755 "string.builder.c"
static MR_bool MR_CALL 
mercury__string__builder____Unify____state_0_0_10001(
#line 758 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 760 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2)
#line 762 "string.builder.c"
{
#line 764 "string.builder.c"
  {
#line 766 "string.builder.c"
    MR_bool mercury__string__builder__succeeded;

#line 769 "string.builder.c"
    {
#line 771 "string.builder.c"
      mercury__string__builder__succeeded = mercury__string__builder____Unify____state_0_0(((MR_Word) mercury__string__builder__wrapper_arg_1), ((MR_Word) mercury__string__builder__wrapper_arg_2));
    }
#line 774 "string.builder.c"
    return mercury__string__builder__succeeded;
#line 776 "string.builder.c"
  }
#line 778 "string.builder.c"
}

#line 781 "string.builder.c"
static void MR_CALL 
mercury__string__builder____Compare____state_0_0_10001(
#line 784 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_1,
#line 786 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 788 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3)
#line 790 "string.builder.c"
{
#line 792 "string.builder.c"
  {
#line 794 "string.builder.c"
    MR_Word mercury__string__builder__conv0_HeadVar__1_1;

#line 797 "string.builder.c"
    {
#line 799 "string.builder.c"
      mercury__string__builder____Compare____state_0_0(&mercury__string__builder__conv0_HeadVar__1_1, ((MR_Word) mercury__string__builder__wrapper_arg_2), ((MR_Word) mercury__string__builder__wrapper_arg_3));
    }
#line 802 "string.builder.c"
    *mercury__string__builder__wrapper_arg_1 = ((MR_Box) (mercury__string__builder__conv0_HeadVar__1_1));
#line 804 "string.builder.c"
  }
#line 806 "string.builder.c"
}

#line 809 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
#line 812 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 814 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 816 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 818 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 820 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4)
#line 822 "string.builder.c"
{
#line 824 "string.builder.c"
  {
#line 826 "string.builder.c"
    MR_Box mercury__string__builder__closure;
#line 828 "string.builder.c"
    MR_Word mercury__string__builder__conv0_STATE_VARIABLE_State_11;

#line 831 "string.builder.c"
    mercury__string__builder__closure = mercury__string__builder__closure_arg;
#line 833 "string.builder.c"
    {
#line 835 "string.builder.c"
      mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0(((MR_Char) (MR_Word) mercury__string__builder__wrapper_arg_2), ((MR_Word) mercury__string__builder__wrapper_arg_3), &mercury__string__builder__conv0_STATE_VARIABLE_State_11);
    }
#line 838 "string.builder.c"
    *mercury__string__builder__wrapper_arg_4 = ((MR_Box) (mercury__string__builder__conv0_STATE_VARIABLE_State_11));
#line 840 "string.builder.c"
  }
#line 842 "string.builder.c"
}

#line 845 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
#line 848 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 850 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 852 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 854 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 856 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4)
#line 858 "string.builder.c"
{
#line 860 "string.builder.c"
  {
#line 862 "string.builder.c"
    MR_Box mercury__string__builder__closure;
#line 864 "string.builder.c"
    MR_Word mercury__string__builder__conv0_STATE_VARIABLE_State_12;

#line 867 "string.builder.c"
    mercury__string__builder__closure = mercury__string__builder__closure_arg;
#line 869 "string.builder.c"
    {
#line 871 "string.builder.c"
      mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0(((MR_String) mercury__string__builder__wrapper_arg_2), ((MR_Word) mercury__string__builder__wrapper_arg_3), &mercury__string__builder__conv0_STATE_VARIABLE_State_12);
    }
#line 874 "string.builder.c"
    *mercury__string__builder__wrapper_arg_4 = ((MR_Box) (mercury__string__builder__conv0_STATE_VARIABLE_State_12));
#line 876 "string.builder.c"
  }
#line 878 "string.builder.c"
}

#line 881 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0_10001(
#line 884 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 886 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 888 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_2,
#line 890 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 892 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4)
#line 894 "string.builder.c"
{
#line 896 "string.builder.c"
  {
#line 898 "string.builder.c"
    MR_Box mercury__string__builder__closure;
#line 900 "string.builder.c"
    MR_String mercury__string__builder__conv1_HeadVar__2_2;
#line 902 "string.builder.c"
    MR_Word mercury__string__builder__conv0_STATE_VARIABLE_State_8;

#line 905 "string.builder.c"
    mercury__string__builder__closure = mercury__string__builder__closure_arg;
#line 907 "string.builder.c"
    {
#line 909 "string.builder.c"
      mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0(&mercury__string__builder__conv1_HeadVar__2_2, ((MR_Word) mercury__string__builder__wrapper_arg_3), &mercury__string__builder__conv0_STATE_VARIABLE_State_8);
    }
#line 912 "string.builder.c"
    *mercury__string__builder__wrapper_arg_2 = ((MR_Box) (mercury__string__builder__conv1_HeadVar__2_2));
#line 914 "string.builder.c"
    *mercury__string__builder__wrapper_arg_4 = ((MR_Box) (mercury__string__builder__conv0_STATE_VARIABLE_State_8));
#line 916 "string.builder.c"
  }
#line 918 "string.builder.c"
}

#line 921 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0_10001(
#line 924 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 926 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 928 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 930 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_3)
#line 932 "string.builder.c"
{
#line 934 "string.builder.c"
  {
#line 936 "string.builder.c"
    MR_Box mercury__string__builder__closure;
#line 938 "string.builder.c"
    MR_Word mercury__string__builder__conv0_STATE_VARIABLE_State_7;

#line 941 "string.builder.c"
    mercury__string__builder__closure = mercury__string__builder__closure_arg;
#line 943 "string.builder.c"
    {
#line 945 "string.builder.c"
      mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0(((MR_Word) mercury__string__builder__wrapper_arg_2), &mercury__string__builder__conv0_STATE_VARIABLE_State_7);
    }
#line 948 "string.builder.c"
    *mercury__string__builder__wrapper_arg_3 = ((MR_Box) (mercury__string__builder__conv0_STATE_VARIABLE_State_7));
#line 950 "string.builder.c"
  }
#line 952 "string.builder.c"
}

#line 78 "string.builder.m"
void MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_93_95_48_4_p_0(
#line 78 "string.builder.m"
  MR_String mercury__string__builder__String_6,
#line 78 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_11,
#line 78 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_12)
#line 78 "string.builder.m"
{
#line 78 "string.builder.m"
  {
#line 78 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 78 "string.builder.m"
    MR_Word mercury__string__builder__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 78 "string.builder.m"
    MR_Word mercury__string__builder__StringList0_8 = (MR_Word) mercury__string__builder__STATE_VARIABLE_State_0_11;
#line 78 "string.builder.m"
    MR_String mercury__string__builder__UniqueString_9;
#line 78 "string.builder.m"
    MR_Word mercury__string__builder__StringList_10;
#line 54 "builtin.opt"
    MR_Box mercury__string__builder__conv0_Copy;

#line 54 "builtin.opt"
{
#define MR_PROC_LABEL mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__string__builder__TypeCtorInfo_14_14 ;
	Value = (MR_Word) ((MR_Box) (mercury__string__builder__String_6)) ;
		{
#line 54 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 998 "string.builder.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__builder__conv0_Copy  = (MR_Box) Copy;
#line 54 "builtin.opt"
    mercury__string__builder__UniqueString_9 = ((MR_String) mercury__string__builder__conv0_Copy);
#line 54 "builtin.opt"
}
#line 81 "string.builder.m"
    {
#line 81 "string.builder.m"
      mercury__string__builder__StringList_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "string.builder.m"
      MR_hl_field(MR_mktag(1), mercury__string__builder__StringList_10, 0) = ((MR_Box) (mercury__string__builder__UniqueString_9));
#line 81 "string.builder.m"
      MR_hl_field(MR_mktag(1), mercury__string__builder__StringList_10, 1) = ((MR_Box) (mercury__string__builder__StringList0_8));
#line 81 "string.builder.m"
    }
#line 82 "string.builder.m"
    *mercury__string__builder__STATE_VARIABLE_State_12 = (MR_Word) mercury__string__builder__StringList_10;
#line 78 "string.builder.m"
  }
#line 78 "string.builder.m"
}

#line 88 "string.builder.m"
void MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_93_95_48_4_p_0(
#line 88 "string.builder.m"
  MR_Char mercury__string__builder__Char_6,
#line 88 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_10,
#line 88 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_11)
#line 88 "string.builder.m"
{
#line 88 "string.builder.m"
  {
#line 88 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 88 "string.builder.m"
    MR_Word mercury__string__builder__StringList0_8 = (MR_Word) mercury__string__builder__STATE_VARIABLE_State_0_10;
#line 88 "string.builder.m"
    MR_Word mercury__string__builder__StringList_9;
#line 88 "string.builder.m"
    MR_String mercury__string__builder__V_12_12;
#line 88 "string.builder.m"
    MR_Word mercury__string__builder__V_5_20;
#line 88 "string.builder.m"
    MR_Word mercury__string__builder__V_6_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 696 "string.opt"
    {
#line 696 "string.opt"
      mercury__string__builder__V_5_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__builder__V_5_20, 0) = ((MR_Box) (MR_Word) (mercury__string__builder__Char_6));
#line 696 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__builder__V_5_20, 1) = ((MR_Box) (mercury__string__builder__V_6_21));
#line 696 "string.opt"
    }
#line 698 "string.opt"
    {
#line 698 "string.opt"
      mercury__string__to_char_list_2_p_1(&mercury__string__builder__V_12_12, mercury__string__builder__V_5_20);
    }
#line 90 "string.builder.m"
    {
#line 90 "string.builder.m"
      mercury__string__builder__StringList_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 90 "string.builder.m"
      MR_hl_field(MR_mktag(1), mercury__string__builder__StringList_9, 0) = ((MR_Box) (mercury__string__builder__V_12_12));
#line 90 "string.builder.m"
      MR_hl_field(MR_mktag(1), mercury__string__builder__StringList_9, 1) = ((MR_Box) (mercury__string__builder__StringList0_8));
#line 90 "string.builder.m"
    }
#line 91 "string.builder.m"
    *mercury__string__builder__STATE_VARIABLE_State_11 = (MR_Word) mercury__string__builder__StringList_9;
#line 88 "string.builder.m"
  }
#line 88 "string.builder.m"
}

#line 68 "string.builder.m"
void MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(
#line 68 "string.builder.m"
  MR_String * mercury__string__builder__HeadVar__2_2,
#line 68 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_7,
#line 68 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_8)
#line 68 "string.builder.m"
{
#line 68 "string.builder.m"
  {
#line 68 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 68 "string.builder.m"
    *mercury__string__builder__HeadVar__2_2 = (MR_String) "<<string builder stream>>";
#line 68 "string.builder.m"
    *mercury__string__builder__STATE_VARIABLE_State_8 = mercury__string__builder__STATE_VARIABLE_State_0_7;
#line 68 "string.builder.m"
  }
#line 68 "string.builder.m"
}

#line 73 "string.builder.m"
void MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_111_117_116_112_117_116_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_102_108_117_115_104_95_51_95_95_91_49_93_95_48_3_p_0(
#line 73 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_6,
#line 73 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_7)
#line 73 "string.builder.m"
{
#line 73 "string.builder.m"
  {
#line 73 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 73 "string.builder.m"
    *mercury__string__builder__STATE_VARIABLE_State_7 = mercury__string__builder__STATE_VARIABLE_State_0_6;
#line 73 "string.builder.m"
  }
#line 73 "string.builder.m"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__string__builder__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 38 "string.builder.m"
void MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 38 "string.builder.m"
  MR_Word * mercury__string__builder__HeadVar__1_1)
#line 38 "string.builder.m"
{
#line 38 "string.builder.m"
  {
#line 38 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 38 "string.builder.m"
    *mercury__string__builder__HeadVar__1_1 = (MR_Integer) 0;
#line 38 "string.builder.m"
  }
#line 38 "string.builder.m"
}

#line 38 "string.builder.m"
MR_bool MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 38 "string.builder.m"
{
#line 38 "string.builder.m"
  {
#line 38 "string.builder.m"
    return MR_TRUE;
#line 38 "string.builder.m"
  }
#line 38 "string.builder.m"
}

#line 78 "string.builder.m"
void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0(
#line 78 "string.builder.m"
  MR_String mercury__string__builder__String_6,
#line 78 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_11,
#line 78 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_12)
#line 78 "string.builder.m"
{
#line 78 "string.builder.m"
  {
#line 78 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 78 "string.builder.m"
    {
#line 78 "string.builder.m"
      mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_93_95_48_4_p_0(mercury__string__builder__String_6, mercury__string__builder__STATE_VARIABLE_State_0_11, mercury__string__builder__STATE_VARIABLE_State_12);
#line 78 "string.builder.m"
      return;
    }
#line 78 "string.builder.m"
  }
#line 78 "string.builder.m"
}

#line 88 "string.builder.m"
void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0(
#line 88 "string.builder.m"
  MR_Char mercury__string__builder__Char_6,
#line 88 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_10,
#line 88 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_11)
#line 88 "string.builder.m"
{
#line 88 "string.builder.m"
  {
#line 88 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 88 "string.builder.m"
    {
#line 88 "string.builder.m"
      mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_93_95_48_4_p_0(mercury__string__builder__Char_6, mercury__string__builder__STATE_VARIABLE_State_0_10, mercury__string__builder__STATE_VARIABLE_State_11);
#line 88 "string.builder.m"
      return;
    }
#line 88 "string.builder.m"
  }
#line 88 "string.builder.m"
}

#line 68 "string.builder.m"
void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0(
#line 68 "string.builder.m"
  MR_String * mercury__string__builder__HeadVar__2_2,
#line 68 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_7,
#line 68 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_8)
#line 68 "string.builder.m"
{
#line 68 "string.builder.m"
  {
#line 68 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 68 "string.builder.m"
    {
#line 68 "string.builder.m"
      mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(mercury__string__builder__HeadVar__2_2, mercury__string__builder__STATE_VARIABLE_State_0_7, mercury__string__builder__STATE_VARIABLE_State_8);
#line 68 "string.builder.m"
      return;
    }
#line 68 "string.builder.m"
  }
#line 68 "string.builder.m"
}

#line 73 "string.builder.m"
void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0(
#line 73 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_6,
#line 73 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_7)
#line 73 "string.builder.m"
{
#line 73 "string.builder.m"
  {
#line 73 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 73 "string.builder.m"
    {
#line 73 "string.builder.m"
      mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_111_117_116_112_117_116_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_102_108_117_115_104_95_51_95_95_91_49_93_95_48_3_p_0(mercury__string__builder__STATE_VARIABLE_State_0_6, mercury__string__builder__STATE_VARIABLE_State_7);
#line 73 "string.builder.m"
      return;
    }
#line 73 "string.builder.m"
  }
#line 73 "string.builder.m"
}

#line 61 "string.builder.m"
void MR_CALL 
mercury__string__builder____Compare____state_0_0(
#line 61 "string.builder.m"
  MR_Word * mercury__string__builder__HeadVar__1_1,
#line 61 "string.builder.m"
  MR_Word mercury__string__builder__HeadVar__2_2,
#line 61 "string.builder.m"
  MR_Word mercury__string__builder__HeadVar__3_3)
#line 61 "string.builder.m"
{
#line 61 "string.builder.m"
  {
#line 61 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 61 "string.builder.m"
    MR_Integer mercury__string__builder__CastX_6 = (MR_Integer) mercury__string__builder__HeadVar__2_2;
#line 61 "string.builder.m"
    MR_Integer mercury__string__builder__CastY_7 = (MR_Integer) mercury__string__builder__HeadVar__3_3;

#line 61 "string.builder.m"
    mercury__string__builder__succeeded = (mercury__string__builder__CastX_6 == mercury__string__builder__CastY_7);
#line 61 "string.builder.m"
    if (mercury__string__builder__succeeded)
#line 1312 "string.builder.c"
      *mercury__string__builder__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "string.builder.m"
    else
#line 61 "string.builder.m"
      {
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__TypeInfo_8_8 = (MR_Word) &mercury__string__builder_scalar_common_1[0];
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__V_4_4 = (MR_Word) mercury__string__builder__HeadVar__2_2;
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__V_5_5 = (MR_Word) mercury__string__builder__HeadVar__3_3;

#line 61 "string.builder.m"
        {
#line 61 "string.builder.m"
          mercury__builtin__compare_3_p_0(mercury__string__builder__TypeInfo_8_8, mercury__string__builder__HeadVar__1_1, ((MR_Box) (mercury__string__builder__V_4_4)), ((MR_Box) (mercury__string__builder__V_5_5)));
#line 61 "string.builder.m"
          return;
        }
#line 61 "string.builder.m"
      }
#line 61 "string.builder.m"
  }
#line 61 "string.builder.m"
}

#line 61 "string.builder.m"
MR_bool MR_CALL 
mercury__string__builder____Unify____state_0_0(
#line 61 "string.builder.m"
  MR_Word mercury__string__builder__HeadVar__1_1,
#line 61 "string.builder.m"
  MR_Word mercury__string__builder__HeadVar__2_2)
#line 61 "string.builder.m"
{
#line 61 "string.builder.m"
  {
#line 61 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 61 "string.builder.m"
    MR_Integer mercury__string__builder__CastX_5 = (MR_Integer) mercury__string__builder__HeadVar__1_1;
#line 61 "string.builder.m"
    MR_Integer mercury__string__builder__CastY_6 = (MR_Integer) mercury__string__builder__HeadVar__2_2;

#line 61 "string.builder.m"
    mercury__string__builder__succeeded = (mercury__string__builder__CastX_5 == mercury__string__builder__CastY_6);
#line 61 "string.builder.m"
    if (mercury__string__builder__succeeded)
#line 61 "string.builder.m"
      mercury__string__builder__succeeded = MR_TRUE;
#line 61 "string.builder.m"
    else
#line 61 "string.builder.m"
      {
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__TypeInfo_7_7 = (MR_Word) &mercury__string__builder_scalar_common_1[0];
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__V_3_3 = (MR_Word) mercury__string__builder__HeadVar__1_1;
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__V_4_4 = (MR_Word) mercury__string__builder__HeadVar__2_2;

#line 1374 "string.builder.c"
        {
#line 1376 "string.builder.c"
          return mercury__string__builder__succeeded = mercury__builtin__unify_2_p_0(mercury__string__builder__TypeInfo_7_7, ((MR_Box) (mercury__string__builder__V_3_3)), ((MR_Box) (mercury__string__builder__V_4_4)));
        }
#line 61 "string.builder.m"
      }
#line 61 "string.builder.m"
    return mercury__string__builder__succeeded;
#line 61 "string.builder.m"
  }
#line 61 "string.builder.m"
}

#line 38 "string.builder.m"
void MR_CALL 
mercury__string__builder____Compare____handle_0_0(
#line 38 "string.builder.m"
  MR_Word * mercury__string__builder__HeadVar__1_1)
#line 38 "string.builder.m"
{
#line 38 "string.builder.m"
  {
#line 38 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 38 "string.builder.m"
    {
#line 38 "string.builder.m"
      mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__string__builder__HeadVar__1_1);
#line 38 "string.builder.m"
      return;
    }
#line 38 "string.builder.m"
  }
#line 38 "string.builder.m"
}

#line 38 "string.builder.m"
MR_bool MR_CALL 
mercury__string__builder____Unify____handle_0_0(void)
#line 38 "string.builder.m"
{
#line 38 "string.builder.m"
  {
#line 38 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 38 "string.builder.m"
    {
#line 38 "string.builder.m"
      return mercury__string__builder__succeeded = mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 38 "string.builder.m"
    return mercury__string__builder__succeeded;
#line 38 "string.builder.m"
  }
#line 38 "string.builder.m"
}

#line 52 "string.builder.m"
MR_String MR_CALL 
mercury__string__builder__to_string_1_f_0(
#line 52 "string.builder.m"
  MR_Word mercury__string__builder__State_3)
#line 52 "string.builder.m"
{
#line 95 "string.builder.m"
  {
#line 95 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 95 "string.builder.m"
    MR_String mercury__string__builder__String_4;
#line 95 "string.builder.m"
    MR_Word mercury__string__builder__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 95 "string.builder.m"
    MR_Word mercury__string__builder__StringList_5 = (MR_Word) mercury__string__builder__State_3;
#line 95 "string.builder.m"
    MR_Word mercury__string__builder__V_6_6;

#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__builder__TypeCtorInfo_7_7, mercury__string__builder__StringList_5, &mercury__string__builder__V_6_6);
    }
#line 97 "string.builder.m"
    {
#line 97 "string.builder.m"
      return mercury__string__builder__String_4 = mercury__string__append_list_1_f_0(mercury__string__builder__V_6_6);
    }
#line 95 "string.builder.m"
    return mercury__string__builder__String_4;
#line 95 "string.builder.m"
  }
#line 52 "string.builder.m"
}

#line 43 "string.builder.m"
MR_Word MR_CALL 
mercury__string__builder__init_0_f_0(void)
#line 43 "string.builder.m"
{
#line 64 "string.builder.m"
  {
#line 64 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 64 "string.builder.m"
    MR_Word mercury__string__builder__HeadVar__1_1 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 64 "string.builder.m"
    MR_Word mercury__string__builder__V_2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 64 "string.builder.m"
    return mercury__string__builder__HeadVar__1_1;
#line 64 "string.builder.m"
  }
#line 43 "string.builder.m"
}

void mercury__string__builder__init(void)
{
}

void mercury__string__builder__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__builder__string__builder__type_ctor_info_handle_0);
	MR_register_type_ctor_info(&mercury__string__builder__string__builder__type_ctor_info_state_0);
}

void mercury__string__builder__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module string.builder. */
