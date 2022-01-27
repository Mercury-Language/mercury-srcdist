/*
** Automatically generated from `bt_array.m'
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


/* :- module bt_array. */
/* :- implementation. */

/*
INIT mercury__bt_array__init
ENDINIT
*/

#include "bt_array.mih"


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




#line 86 "bt_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1;

#line 89 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_bt_array_1_0[3];

#line 92 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0;

#line 95 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_bt_array_1_0[1];

#line 98 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_bt_array_1[1];

#line 101 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_bt_array_1[1];

#line 104 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_bt_array_1[1];

#line 107 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0;

#line 110 "bt_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1;

#line 113 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_1_1[3];

#line 116 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1;

#line 119 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_0[1];

#line 122 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_1[1];

#line 125 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_1[2];

#line 128 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_1[2];

#line 131 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_1[2];

#line 134 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_0[1];

#line 137 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0;

#line 140 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_1[3];

#line 143 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1;

#line 146 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_0[1];

#line 149 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_1[1];

#line 152 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_bintree_1[2];

#line 155 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_bintree_1[2];

#line 158 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_bintree_1[2];

#line 161 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0_10001(
#line 164 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 166 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 168 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3);

#line 171 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0_10001(
#line 174 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 176 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 178 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 180 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4);

#line 183 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0_10001(
#line 186 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 188 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 190 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3);

#line 193 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0_10001(
#line 196 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 198 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 200 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 202 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4);

#line 205 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0_10001(
#line 208 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 210 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 212 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3);

#line 215 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0_10001(
#line 218 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 220 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 222 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 224 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 623 "bt_array.m"
static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
#line 623 "bt_array.m"
  MR_Integer mercury__bt_array__N_4,
#line 623 "bt_array.m"
  MR_Word mercury__bt_array__As_5,
#line 623 "bt_array.m"
  MR_Word * mercury__bt_array__Bs_6);

#line 478 "bt_array.m"
static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
#line 478 "bt_array.m"
  MR_Integer mercury__bt_array__N_4,
#line 478 "bt_array.m"
  MR_Word mercury__bt_array__As_5,
#line 478 "bt_array.m"
  MR_Word * mercury__bt_array__Bs_6);

#line 374 "bt_array.m"
static void MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(
#line 374 "bt_array.m"
  MR_Integer mercury__bt_array__I_5,
#line 374 "bt_array.m"
  MR_Word mercury__bt_array__RaList0_6,
#line 374 "bt_array.m"
  MR_Word mercury__bt_array__Xs0_7,
#line 374 "bt_array.m"
  MR_Word * mercury__bt_array__Xs_8);

#line 333 "bt_array.m"
static void MR_CALL 
mercury__bt_array__insert_items_4_p_0(
#line 333 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_15,
#line 333 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 333 "bt_array.m"
  MR_Integer mercury__bt_array__HeadVar__2_2,
#line 333 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__3_3,
#line 333 "bt_array.m"
  MR_Word * mercury__bt_array__Array_4);


static /* final */ const MR_Box mercury__bt_array_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bt_array_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bt_array_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__bt_array_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bt_array_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bt_array_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bt_array_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bt_array_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bt_array_scalar_common_2[0])),
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
#include "type_desc.mh"
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



#line 641 "bt_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1 = {
  &mercury__bt_array__bt_array__type_ctor_info_ra_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 649 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_bt_array_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1
};

#line 656 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0 = {
  (MR_String) "bt_array",
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__bt_array__bt_array__field_types_bt_array_1_0,
  NULL,
  NULL,
  NULL
};

#line 671 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_bt_array_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0
};

#line 676 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_bt_array_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_bt_array_1_0
  }
};

#line 685 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_bt_array_1[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0
};

#line 690 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_bt_array_1[1] = {
  (MR_Integer) 0
};

#line 695 "bt_array.c"
const MR_TypeCtorInfo_Struct mercury__bt_array__bt_array__type_ctor_info_bt_array_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____bt_array_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____bt_array_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "bt_array",
  {
    mercury__bt_array__bt_array__du_name_ordered_bt_array_1
  },
  {
    mercury__bt_array__bt_array__du_ptag_ordered_bt_array_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bt_array__bt_array__functor_number_map_bt_array_1
};

#line 716 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0 = {
  (MR_String) "nil",
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

#line 731 "bt_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1 = {
  &mercury__bt_array__bt_array__type_ctor_info_ra_list_bintree_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 739 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1
};

#line 746 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1 = {
  (MR_String) "cons",
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__bt_array__bt_array__field_types_ra_list_1_1,
  NULL,
  NULL,
  NULL
};

#line 761 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0
};

#line 766 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_1[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1
};

#line 771 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_1
  }
};

#line 785 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_1[2] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1,
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0
};

#line 791 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 797 "bt_array.c"
const MR_TypeCtorInfo_Struct mercury__bt_array__bt_array__type_ctor_info_ra_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____ra_list_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____ra_list_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "ra_list",
  {
    mercury__bt_array__bt_array__du_name_ordered_ra_list_1
  },
  {
    mercury__bt_array__bt_array__du_ptag_ordered_ra_list_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__bt_array__bt_array__functor_number_map_ra_list_1
};

#line 818 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 823 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0 = {
  (MR_String) "leaf",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__bt_array__bt_array__field_types_ra_list_bintree_1_0,
  NULL,
  NULL,
  NULL
};

#line 838 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1
};

#line 845 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1 = {
  (MR_String) "node",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__bt_array__bt_array__field_types_ra_list_bintree_1_1,
  NULL,
  NULL,
  NULL
};

#line 860 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0
};

#line 865 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_1[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1
};

#line 870 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_bintree_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_1
  }
};

#line 884 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_bintree_1[2] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0,
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1
};

#line 890 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_bintree_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 896 "bt_array.c"
const MR_TypeCtorInfo_Struct mercury__bt_array__bt_array__type_ctor_info_ra_list_bintree_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____ra_list_bintree_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____ra_list_bintree_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "ra_list_bintree",
  {
    mercury__bt_array__bt_array__du_name_ordered_ra_list_bintree_1
  },
  {
    mercury__bt_array__bt_array__du_ptag_ordered_ra_list_bintree_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__bt_array__bt_array__functor_number_map_ra_list_bintree_1
};

#line 917 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0_10001(
#line 920 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 922 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 924 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3)
#line 926 "bt_array.c"
{
#line 928 "bt_array.c"
  {
#line 930 "bt_array.c"
    MR_bool mercury__bt_array__succeeded;

#line 933 "bt_array.c"
    {
#line 935 "bt_array.c"
      mercury__bt_array__succeeded = mercury__bt_array____Unify____bt_array_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), ((MR_Word) mercury__bt_array__wrapper_arg_2), ((MR_Word) mercury__bt_array__wrapper_arg_3));
    }
#line 938 "bt_array.c"
    return mercury__bt_array__succeeded;
#line 940 "bt_array.c"
  }
#line 942 "bt_array.c"
}

#line 945 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0_10001(
#line 948 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 950 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 952 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 954 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4)
#line 956 "bt_array.c"
{
#line 958 "bt_array.c"
  {
#line 960 "bt_array.c"
    MR_Word mercury__bt_array__conv0_HeadVar__1_1;

#line 963 "bt_array.c"
    {
#line 965 "bt_array.c"
      mercury__bt_array____Compare____bt_array_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), &mercury__bt_array__conv0_HeadVar__1_1, ((MR_Word) mercury__bt_array__wrapper_arg_3), ((MR_Word) mercury__bt_array__wrapper_arg_4));
    }
#line 968 "bt_array.c"
    *mercury__bt_array__wrapper_arg_2 = ((MR_Box) (mercury__bt_array__conv0_HeadVar__1_1));
#line 970 "bt_array.c"
  }
#line 972 "bt_array.c"
}

#line 975 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0_10001(
#line 978 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 980 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 982 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3)
#line 984 "bt_array.c"
{
#line 986 "bt_array.c"
  {
#line 988 "bt_array.c"
    MR_bool mercury__bt_array__succeeded;

#line 991 "bt_array.c"
    {
#line 993 "bt_array.c"
      mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), ((MR_Word) mercury__bt_array__wrapper_arg_2), ((MR_Word) mercury__bt_array__wrapper_arg_3));
    }
#line 996 "bt_array.c"
    return mercury__bt_array__succeeded;
#line 998 "bt_array.c"
  }
#line 1000 "bt_array.c"
}

#line 1003 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0_10001(
#line 1006 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 1008 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 1010 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 1012 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4)
#line 1014 "bt_array.c"
{
#line 1016 "bt_array.c"
  {
#line 1018 "bt_array.c"
    MR_Word mercury__bt_array__conv0_HeadVar__1_1;

#line 1021 "bt_array.c"
    {
#line 1023 "bt_array.c"
      mercury__bt_array____Compare____ra_list_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), &mercury__bt_array__conv0_HeadVar__1_1, ((MR_Word) mercury__bt_array__wrapper_arg_3), ((MR_Word) mercury__bt_array__wrapper_arg_4));
    }
#line 1026 "bt_array.c"
    *mercury__bt_array__wrapper_arg_2 = ((MR_Box) (mercury__bt_array__conv0_HeadVar__1_1));
#line 1028 "bt_array.c"
  }
#line 1030 "bt_array.c"
}

#line 1033 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0_10001(
#line 1036 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 1038 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 1040 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3)
#line 1042 "bt_array.c"
{
#line 1044 "bt_array.c"
  {
#line 1046 "bt_array.c"
    MR_bool mercury__bt_array__succeeded;

#line 1049 "bt_array.c"
    {
#line 1051 "bt_array.c"
      mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), ((MR_Word) mercury__bt_array__wrapper_arg_2), ((MR_Word) mercury__bt_array__wrapper_arg_3));
    }
#line 1054 "bt_array.c"
    return mercury__bt_array__succeeded;
#line 1056 "bt_array.c"
  }
#line 1058 "bt_array.c"
}

#line 1061 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0_10001(
#line 1064 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 1066 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 1068 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 1070 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4)
#line 1072 "bt_array.c"
{
#line 1074 "bt_array.c"
  {
#line 1076 "bt_array.c"
    MR_Word mercury__bt_array__conv0_HeadVar__1_1;

#line 1079 "bt_array.c"
    {
#line 1081 "bt_array.c"
      mercury__bt_array____Compare____ra_list_bintree_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), &mercury__bt_array__conv0_HeadVar__1_1, ((MR_Word) mercury__bt_array__wrapper_arg_3), ((MR_Word) mercury__bt_array__wrapper_arg_4));
    }
#line 1084 "bt_array.c"
    *mercury__bt_array__wrapper_arg_2 = ((MR_Box) (mercury__bt_array__conv0_HeadVar__1_1));
#line 1086 "bt_array.c"
  }
#line 1088 "bt_array.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__bt_array__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 623 "bt_array.m"
static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
#line 623 "bt_array.m"
  MR_Integer mercury__bt_array__N_4,
#line 623 "bt_array.m"
  MR_Word mercury__bt_array__As_5,
#line 623 "bt_array.m"
  MR_Word * mercury__bt_array__Bs_6)
#line 623 "bt_array.m"
{
#line 630 "bt_array.m"
  while (MR_TRUE)
#line 630 "bt_array.m"
    {
#line 630 "bt_array.m"
      /* tailcall optimized into a loop */
#line 630 "bt_array.m"
      {
#line 630 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = (mercury__bt_array__N_4 > (MR_Integer) 0);

#line 630 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 627 "bt_array.m"
          {
#line 627 "bt_array.m"
            MR_Integer mercury__bt_array__N1_7 = (mercury__bt_array__N_4 - (MR_Integer) 1);
#line 627 "bt_array.m"
            MR_Word mercury__bt_array__Cs_8;
#line 627 "bt_array.m"
            MR_Word mercury__bt_array__V_26_26;
#line 627 "bt_array.m"
            MR_Word mercury__bt_array__V_27_27;
#line 627 "bt_array.m"
            MR_Integer mercury__bt_array__V_28_28;

#line 519 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__As_5)) == (MR_mktag((MR_Integer) 1)));
#line 519 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 519 "bt_array.m"
              {
#line 519 "bt_array.m"
                mercury__bt_array__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 0)));
#line 519 "bt_array.m"
                mercury__bt_array__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 1)));
#line 519 "bt_array.m"
                mercury__bt_array__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 2)));
#line 519 "bt_array.m"
                if (((MR_tag((MR_Word) mercury__bt_array__V_27_27)) == (MR_mktag((MR_Integer) 0))))
#line 519 "bt_array.m"
                  mercury__bt_array__Cs_8 = mercury__bt_array__V_26_26;
#line 519 "bt_array.m"
                else
#line 520 "bt_array.m"
                  {
#line 520 "bt_array.m"
                    MR_Word mercury__bt_array__T1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_27_27, (MR_Integer) 1)));
#line 520 "bt_array.m"
                    MR_Word mercury__bt_array__T2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_27_27, (MR_Integer) 2)));
#line 520 "bt_array.m"
                    MR_Integer mercury__bt_array__Size2_22 = (mercury__bt_array__V_28_28 / (MR_Integer) 2);
#line 520 "bt_array.m"
                    MR_Word mercury__bt_array__V_25_25;
#line 520 "bt_array.m"
                    MR_Box mercury__bt_array__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_27_27, (MR_Integer) 0));

#line 522 "bt_array.m"
                    {
#line 522 "bt_array.m"
                      mercury__bt_array__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 522 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__V_25_25, 0) = ((MR_Box) (mercury__bt_array__Size2_22));
#line 522 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__V_25_25, 1) = ((MR_Box) (mercury__bt_array__T2_19));
#line 522 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__V_25_25, 2) = ((MR_Box) (mercury__bt_array__V_26_26));
#line 522 "bt_array.m"
                    }
#line 522 "bt_array.m"
                    {
#line 522 "bt_array.m"
                      mercury__bt_array__Cs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 522 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__Cs_8, 0) = ((MR_Box) (mercury__bt_array__Size2_22));
#line 522 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__Cs_8, 1) = ((MR_Box) (mercury__bt_array__T1_18));
#line 522 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__Cs_8, 2) = ((MR_Box) (mercury__bt_array__V_25_25));
#line 522 "bt_array.m"
                    }
#line 520 "bt_array.m"
                  }
#line 629 "bt_array.m"
                {
#line 629 "bt_array.m"
                  /* direct tailcall eliminated */
#line 629 "bt_array.m"
                  {
#line 629 "bt_array.m"
                    MR_Integer mercury__bt_array__N__tmp_copy_4 = mercury__bt_array__N1_7;
#line 629 "bt_array.m"
                    MR_Word mercury__bt_array__As__tmp_copy_5 = mercury__bt_array__Cs_8;

#line 629 "bt_array.m"
                    mercury__bt_array__As_5 = mercury__bt_array__As__tmp_copy_5;
#line 629 "bt_array.m"
                    mercury__bt_array__N_4 = mercury__bt_array__N__tmp_copy_4;
#line 629 "bt_array.m"
                  }
#line 629 "bt_array.m"
                  continue;
#line 629 "bt_array.m"
                }
#line 519 "bt_array.m"
              }
#line 627 "bt_array.m"
          }
#line 630 "bt_array.m"
        else
#line 631 "bt_array.m"
          {
#line 631 "bt_array.m"
            *mercury__bt_array__Bs_6 = mercury__bt_array__As_5;
#line 631 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 631 "bt_array.m"
          }
#line 630 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 630 "bt_array.m"
      }
#line 630 "bt_array.m"
      break;
#line 630 "bt_array.m"
    }
#line 623 "bt_array.m"
}

#line 478 "bt_array.m"
static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
#line 478 "bt_array.m"
  MR_Integer mercury__bt_array__N_4,
#line 478 "bt_array.m"
  MR_Word mercury__bt_array__As_5,
#line 478 "bt_array.m"
  MR_Word * mercury__bt_array__Bs_6)
#line 478 "bt_array.m"
{
#line 619 "bt_array.m"
  while (MR_TRUE)
#line 619 "bt_array.m"
    {
#line 619 "bt_array.m"
      /* tailcall optimized into a loop */
#line 619 "bt_array.m"
      {
#line 619 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = (mercury__bt_array__N_4 > (MR_Integer) 0);

#line 619 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 612 "bt_array.m"
          {
#line 612 "bt_array.m"
            MR_Integer mercury__bt_array__Size_7;
#line 612 "bt_array.m"
            MR_Word mercury__bt_array__Cs_9;
#line 612 "bt_array.m"
            MR_Word mercury__bt_array__V_8_8;

#line 612 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__As_5)) == (MR_mktag((MR_Integer) 1)));
#line 612 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 612 "bt_array.m"
              {
#line 612 "bt_array.m"
                mercury__bt_array__Size_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 0)));
#line 612 "bt_array.m"
                mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 1)));
#line 612 "bt_array.m"
                mercury__bt_array__Cs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 2)));
#line 613 "bt_array.m"
                mercury__bt_array__succeeded = (mercury__bt_array__Size_7 < mercury__bt_array__N_4);
#line 616 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 614 "bt_array.m"
                  {
#line 614 "bt_array.m"
                    MR_Integer mercury__bt_array__N1_10 = (mercury__bt_array__N_4 - mercury__bt_array__Size_7);

#line 615 "bt_array.m"
                    /* direct tailcall eliminated */
#line 615 "bt_array.m"
                    {
#line 615 "bt_array.m"
                      MR_Integer mercury__bt_array__N__tmp_copy_4 = mercury__bt_array__N1_10;
#line 615 "bt_array.m"
                      MR_Word mercury__bt_array__As__tmp_copy_5 = mercury__bt_array__Cs_9;

#line 615 "bt_array.m"
                      mercury__bt_array__As_5 = mercury__bt_array__As__tmp_copy_5;
#line 615 "bt_array.m"
                      mercury__bt_array__N_4 = mercury__bt_array__N__tmp_copy_4;
#line 615 "bt_array.m"
                    }
#line 615 "bt_array.m"
                    continue;
#line 614 "bt_array.m"
                  }
#line 616 "bt_array.m"
                else
#line 617 "bt_array.m"
                  {
#line 617 "bt_array.m"
                    return mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__N_4, mercury__bt_array__As_5, mercury__bt_array__Bs_6);
                  }
#line 612 "bt_array.m"
              }
#line 612 "bt_array.m"
          }
#line 619 "bt_array.m"
        else
#line 620 "bt_array.m"
          {
#line 620 "bt_array.m"
            *mercury__bt_array__Bs_6 = mercury__bt_array__As_5;
#line 620 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 620 "bt_array.m"
          }
#line 619 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 619 "bt_array.m"
      }
#line 619 "bt_array.m"
      break;
#line 619 "bt_array.m"
    }
#line 478 "bt_array.m"
}

#line 374 "bt_array.m"
static void MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(
#line 374 "bt_array.m"
  MR_Integer mercury__bt_array__I_5,
#line 374 "bt_array.m"
  MR_Word mercury__bt_array__RaList0_6,
#line 374 "bt_array.m"
  MR_Word mercury__bt_array__Xs0_7,
#line 374 "bt_array.m"
  MR_Word * mercury__bt_array__Xs_8)
#line 374 "bt_array.m"
{
#line 384 "bt_array.m"
  while (MR_TRUE)
#line 384 "bt_array.m"
    {
#line 384 "bt_array.m"
      /* tailcall optimized into a loop */
#line 384 "bt_array.m"
      {
#line 384 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_6)) == (MR_mktag((MR_Integer) 1)));
#line 384 "bt_array.m"
        MR_Box mercury__bt_array__X_9;
#line 384 "bt_array.m"
        MR_Word mercury__bt_array__RaList1_10;
#line 379 "bt_array.m"
        MR_Integer mercury__bt_array__V_12_12;
#line 379 "bt_array.m"
        MR_Word mercury__bt_array__V_30_30;
#line 379 "bt_array.m"
        MR_Word mercury__bt_array__V_31_31;
#line 379 "bt_array.m"
        MR_Integer mercury__bt_array__V_32_32;

#line 526 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 526 "bt_array.m"
          {
#line 526 "bt_array.m"
            mercury__bt_array__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_6, (MR_Integer) 0)));
#line 526 "bt_array.m"
            mercury__bt_array__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_6, (MR_Integer) 1)));
#line 526 "bt_array.m"
            mercury__bt_array__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_6, (MR_Integer) 2)));
#line 526 "bt_array.m"
            if (((MR_tag((MR_Word) mercury__bt_array__V_31_31)) == (MR_mktag((MR_Integer) 0))))
#line 526 "bt_array.m"
              {
#line 526 "bt_array.m"
                mercury__bt_array__X_9 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_31_31, (MR_Integer) 0));
#line 526 "bt_array.m"
                mercury__bt_array__RaList1_10 = mercury__bt_array__V_30_30;
#line 526 "bt_array.m"
              }
#line 526 "bt_array.m"
            else
#line 527 "bt_array.m"
              {
#line 527 "bt_array.m"
                MR_Word mercury__bt_array__T1_22;
#line 527 "bt_array.m"
                MR_Word mercury__bt_array__T2_23;
#line 527 "bt_array.m"
                MR_Integer mercury__bt_array__Size2_26;
#line 527 "bt_array.m"
                MR_Word mercury__bt_array__V_29_29;

#line 527 "bt_array.m"
                mercury__bt_array__X_9 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_31_31, (MR_Integer) 0));
#line 527 "bt_array.m"
                mercury__bt_array__T1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_31_31, (MR_Integer) 1)));
#line 527 "bt_array.m"
                mercury__bt_array__T2_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_31_31, (MR_Integer) 2)));
#line 105 "int.opt"
                mercury__bt_array__Size2_26 = (mercury__bt_array__V_32_32 / (MR_Integer) 2);
#line 529 "bt_array.m"
                {
#line 529 "bt_array.m"
                  mercury__bt_array__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_29_29, 0) = ((MR_Box) (mercury__bt_array__Size2_26));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_29_29, 1) = ((MR_Box) (mercury__bt_array__T2_23));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_29_29, 2) = ((MR_Box) (mercury__bt_array__V_30_30));
#line 529 "bt_array.m"
                }
#line 529 "bt_array.m"
                {
#line 529 "bt_array.m"
                  mercury__bt_array__RaList1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_10, 0) = ((MR_Box) (mercury__bt_array__Size2_26));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_10, 1) = ((MR_Box) (mercury__bt_array__T1_22));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_10, 2) = ((MR_Box) (mercury__bt_array__V_29_29));
#line 529 "bt_array.m"
                }
#line 527 "bt_array.m"
              }
#line 380 "bt_array.m"
            mercury__bt_array__V_12_12 = (MR_Integer) 0;
#line 380 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__I_5 >= mercury__bt_array__V_12_12);
#line 526 "bt_array.m"
          }
#line 384 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 382 "bt_array.m"
          {
#line 382 "bt_array.m"
            MR_Integer mercury__bt_array__I1_11 = (mercury__bt_array__I_5 - (MR_Integer) 1);
#line 382 "bt_array.m"
            MR_Word mercury__bt_array__V_14_14;

#line 383 "bt_array.m"
            {
#line 383 "bt_array.m"
              mercury__bt_array__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_14_14, 0) = mercury__bt_array__X_9;
#line 383 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_14_14, 1) = ((MR_Box) (mercury__bt_array__Xs0_7));
#line 383 "bt_array.m"
            }
#line 383 "bt_array.m"
            /* direct tailcall eliminated */
#line 383 "bt_array.m"
            {
#line 383 "bt_array.m"
              MR_Integer mercury__bt_array__I__tmp_copy_5 = mercury__bt_array__I1_11;
#line 383 "bt_array.m"
              MR_Word mercury__bt_array__RaList0__tmp_copy_6 = mercury__bt_array__RaList1_10;
#line 383 "bt_array.m"
              MR_Word mercury__bt_array__Xs0__tmp_copy_7 = mercury__bt_array__V_14_14;

#line 383 "bt_array.m"
              mercury__bt_array__Xs0_7 = mercury__bt_array__Xs0__tmp_copy_7;
#line 383 "bt_array.m"
              mercury__bt_array__RaList0_6 = mercury__bt_array__RaList0__tmp_copy_6;
#line 383 "bt_array.m"
              mercury__bt_array__I_5 = mercury__bt_array__I__tmp_copy_5;
#line 383 "bt_array.m"
            }
#line 383 "bt_array.m"
            continue;
#line 382 "bt_array.m"
          }
#line 384 "bt_array.m"
        else
#line 385 "bt_array.m"
          *mercury__bt_array__Xs_8 = mercury__bt_array__Xs0_7;
#line 384 "bt_array.m"
      }
#line 384 "bt_array.m"
      break;
#line 384 "bt_array.m"
    }
#line 374 "bt_array.m"
}

#line 489 "bt_array.m"
void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0(
#line 489 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_24,
#line 489 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__1_1,
#line 489 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 489 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__3_3)
#line 489 "bt_array.m"
{
#line 489 "bt_array.m"
  while (MR_TRUE)
#line 489 "bt_array.m"
    {
#line 489 "bt_array.m"
      /* tailcall optimized into a loop */
#line 489 "bt_array.m"
      {
#line 489 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;
#line 489 "bt_array.m"
        MR_Integer mercury__bt_array__CastX_22 = (MR_Integer) mercury__bt_array__HeadVar__2_2;
#line 489 "bt_array.m"
        MR_Integer mercury__bt_array__CastY_23 = (MR_Integer) mercury__bt_array__HeadVar__3_3;

#line 489 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__CastX_22 == mercury__bt_array__CastY_23);
#line 489 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 1549 "bt_array.c"
          *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
#line 489 "bt_array.m"
        else
#line 489 "bt_array.m"
          if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 489 "bt_array.m"
            {
#line 489 "bt_array.m"
              MR_Box mercury__bt_array__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));

#line 489 "bt_array.m"
              if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 489 "bt_array.m"
                {
#line 489 "bt_array.m"
                  MR_Box mercury__bt_array__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0));

#line 489 "bt_array.m"
                  {
#line 489 "bt_array.m"
                    mercury__builtin__compare_3_p_0(mercury__bt_array__TypeInfo_for_T_24, mercury__bt_array__HeadVar__1_1, mercury__bt_array__V_29_29, mercury__bt_array__V_5_5);
#line 489 "bt_array.m"
                    return;
                  }
#line 489 "bt_array.m"
                }
#line 489 "bt_array.m"
              else
#line 1578 "bt_array.c"
                *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 1;
#line 489 "bt_array.m"
            }
#line 489 "bt_array.m"
          else
#line 489 "bt_array.m"
            {
#line 489 "bt_array.m"
              MR_Word mercury__bt_array__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 489 "bt_array.m"
              MR_Word mercury__bt_array__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 489 "bt_array.m"
              MR_Box mercury__bt_array__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));

#line 489 "bt_array.m"
              if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1595 "bt_array.c"
                *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 2;
#line 489 "bt_array.m"
              else
#line 489 "bt_array.m"
                {
#line 489 "bt_array.m"
                  MR_Box mercury__bt_array__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0));
#line 489 "bt_array.m"
                  MR_Word mercury__bt_array__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
#line 489 "bt_array.m"
                  MR_Word mercury__bt_array__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 2)));
#line 489 "bt_array.m"
                  MR_Word mercury__bt_array__V_20_20;

#line 489 "bt_array.m"
                  {
#line 489 "bt_array.m"
                    mercury__builtin__compare_3_p_0(mercury__bt_array__TypeInfo_for_T_24, &mercury__bt_array__V_20_20, mercury__bt_array__V_32_32, mercury__bt_array__V_17_17);
                  }
#line 1615 "bt_array.c"
                  mercury__bt_array__succeeded = (mercury__bt_array__V_20_20 == (MR_Integer) 0);
#line 489 "bt_array.m"
                  mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 489 "bt_array.m"
                  if (mercury__bt_array__succeeded)
#line 489 "bt_array.m"
                    *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_20_20;
#line 489 "bt_array.m"
                  else
#line 489 "bt_array.m"
                    {
#line 489 "bt_array.m"
                      MR_Word mercury__bt_array__V_21_21;

#line 489 "bt_array.m"
                      {
#line 489 "bt_array.m"
                        mercury__bt_array____Compare____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_24, &mercury__bt_array__V_21_21, mercury__bt_array__V_31_31, mercury__bt_array__V_18_18);
                      }
#line 1635 "bt_array.c"
                      mercury__bt_array__succeeded = (mercury__bt_array__V_21_21 == (MR_Integer) 0);
#line 489 "bt_array.m"
                      mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 489 "bt_array.m"
                      if (mercury__bt_array__succeeded)
#line 489 "bt_array.m"
                        *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_21_21;
#line 489 "bt_array.m"
                      else
#line 489 "bt_array.m"
                        {
#line 489 "bt_array.m"
                          /* direct tailcall eliminated */
#line 489 "bt_array.m"
                          {
#line 489 "bt_array.m"
                            MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_30_30;
#line 489 "bt_array.m"
                            MR_Word mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__V_19_19;

#line 489 "bt_array.m"
                            mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
#line 489 "bt_array.m"
                            mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 489 "bt_array.m"
                          }
#line 489 "bt_array.m"
                          continue;
#line 489 "bt_array.m"
                        }
#line 489 "bt_array.m"
                    }
#line 489 "bt_array.m"
                }
#line 489 "bt_array.m"
            }
#line 489 "bt_array.m"
      }
#line 489 "bt_array.m"
      break;
#line 489 "bt_array.m"
    }
#line 489 "bt_array.m"
}

#line 489 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0(
#line 489 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
#line 489 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 489 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2)
#line 489 "bt_array.m"
{
#line 489 "bt_array.m"
  while (MR_TRUE)
#line 489 "bt_array.m"
    {
#line 489 "bt_array.m"
      /* tailcall optimized into a loop */
#line 489 "bt_array.m"
      {
#line 489 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;
#line 489 "bt_array.m"
        MR_Integer mercury__bt_array__CastX_11 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
#line 489 "bt_array.m"
        MR_Integer mercury__bt_array__CastY_12 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

#line 489 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__CastX_11 == mercury__bt_array__CastY_12);
#line 489 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 489 "bt_array.m"
          mercury__bt_array__succeeded = MR_TRUE;
#line 489 "bt_array.m"
        else
#line 489 "bt_array.m"
          if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 489 "bt_array.m"
            {
#line 489 "bt_array.m"
              MR_Box mercury__bt_array__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0));
#line 489 "bt_array.m"
              MR_Box mercury__bt_array__V_4_4;

#line 489 "bt_array.m"
              mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 489 "bt_array.m"
              if (mercury__bt_array__succeeded)
#line 489 "bt_array.m"
                {
#line 489 "bt_array.m"
                  mercury__bt_array__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
#line 1732 "bt_array.c"
                  {
#line 1734 "bt_array.c"
                    return mercury__bt_array__succeeded = mercury__builtin__unify_2_p_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_3_3, mercury__bt_array__V_4_4);
                  }
#line 489 "bt_array.m"
                }
#line 489 "bt_array.m"
            }
#line 489 "bt_array.m"
          else
#line 489 "bt_array.m"
            {
#line 489 "bt_array.m"
              MR_Box mercury__bt_array__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0));
#line 489 "bt_array.m"
              MR_Word mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "bt_array.m"
              MR_Word mercury__bt_array__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 489 "bt_array.m"
              MR_Box mercury__bt_array__V_8_8;
#line 489 "bt_array.m"
              MR_Word mercury__bt_array__V_9_9;
#line 489 "bt_array.m"
              MR_Word mercury__bt_array__V_10_10;

#line 489 "bt_array.m"
              mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 489 "bt_array.m"
              if (mercury__bt_array__succeeded)
#line 489 "bt_array.m"
                {
#line 489 "bt_array.m"
                  mercury__bt_array__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
#line 489 "bt_array.m"
                  mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 489 "bt_array.m"
                  mercury__bt_array__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 1770 "bt_array.c"
                  {
#line 1772 "bt_array.c"
                    mercury__bt_array__succeeded = mercury__builtin__unify_2_p_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_5_5, mercury__bt_array__V_8_8);
                  }
#line 489 "bt_array.m"
                  if (mercury__bt_array__succeeded)
#line 489 "bt_array.m"
                    {
#line 1779 "bt_array.c"
                      {
#line 1781 "bt_array.c"
                        mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_6_6, mercury__bt_array__V_9_9);
                      }
#line 489 "bt_array.m"
                      if (mercury__bt_array__succeeded)
#line 1786 "bt_array.c"
                        {
#line 1788 "bt_array.c"
                          /* direct tailcall eliminated */
#line 1790 "bt_array.c"
                          {
#line 1792 "bt_array.c"
                            MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__V_7_7;
#line 1794 "bt_array.c"
                            MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_10_10;

#line 1797 "bt_array.c"
                            mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 1799 "bt_array.c"
                            mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
#line 1801 "bt_array.c"
                          }
#line 1803 "bt_array.c"
                          continue;
#line 1805 "bt_array.c"
                        }
#line 489 "bt_array.m"
                    }
#line 489 "bt_array.m"
                }
#line 489 "bt_array.m"
            }
#line 489 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 489 "bt_array.m"
      }
#line 489 "bt_array.m"
      break;
#line 489 "bt_array.m"
    }
#line 489 "bt_array.m"
}

#line 485 "bt_array.m"
void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0(
#line 485 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_20,
#line 485 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__1_1,
#line 485 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 485 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__3_3)
#line 485 "bt_array.m"
{
#line 485 "bt_array.m"
  while (MR_TRUE)
#line 485 "bt_array.m"
    {
#line 485 "bt_array.m"
      /* tailcall optimized into a loop */
#line 485 "bt_array.m"
      {
#line 485 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;
#line 485 "bt_array.m"
        MR_Integer mercury__bt_array__CastX_18 = (MR_Integer) mercury__bt_array__HeadVar__2_2;
#line 485 "bt_array.m"
        MR_Integer mercury__bt_array__CastY_19 = (MR_Integer) mercury__bt_array__HeadVar__3_3;

#line 485 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__CastX_18 == mercury__bt_array__CastY_19);
#line 485 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 1856 "bt_array.c"
          *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
#line 485 "bt_array.m"
        else
#line 485 "bt_array.m"
          if ((mercury__bt_array__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "bt_array.m"
            if ((mercury__bt_array__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "bt_array.m"
              *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
#line 485 "bt_array.m"
            else
#line 1868 "bt_array.c"
              *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 1;
#line 485 "bt_array.m"
          else
#line 485 "bt_array.m"
            {
#line 485 "bt_array.m"
              MR_Word mercury__bt_array__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 485 "bt_array.m"
              MR_Word mercury__bt_array__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 485 "bt_array.m"
              MR_Integer mercury__bt_array__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));

#line 485 "bt_array.m"
              if ((mercury__bt_array__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1883 "bt_array.c"
                *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 2;
#line 485 "bt_array.m"
              else
#line 485 "bt_array.m"
                {
#line 485 "bt_array.m"
                  MR_Integer mercury__bt_array__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0)));
#line 485 "bt_array.m"
                  MR_Word mercury__bt_array__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
#line 485 "bt_array.m"
                  MR_Word mercury__bt_array__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 2)));
#line 485 "bt_array.m"
                  MR_Word mercury__bt_array__V_16_16;

#line 66 "private_builtin.opt"
                  mercury__bt_array__succeeded = (mercury__bt_array__V_28_28 < mercury__bt_array__V_13_13);
#line 69 "private_builtin.opt"
                  if (mercury__bt_array__succeeded)
#line 68 "private_builtin.opt"
                    mercury__bt_array__V_16_16 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__bt_array__succeeded = (mercury__bt_array__V_28_28 == mercury__bt_array__V_13_13);
#line 74 "private_builtin.opt"
                      if (mercury__bt_array__succeeded)
#line 73 "private_builtin.opt"
                        mercury__bt_array__V_16_16 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        mercury__bt_array__V_16_16 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 1920 "bt_array.c"
                  mercury__bt_array__succeeded = (mercury__bt_array__V_16_16 == (MR_Integer) 0);
#line 485 "bt_array.m"
                  mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 485 "bt_array.m"
                  if (mercury__bt_array__succeeded)
#line 485 "bt_array.m"
                    *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_16_16;
#line 485 "bt_array.m"
                  else
#line 485 "bt_array.m"
                    {
#line 485 "bt_array.m"
                      MR_Word mercury__bt_array__V_17_17;

#line 485 "bt_array.m"
                      {
#line 485 "bt_array.m"
                        mercury__bt_array____Compare____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_20, &mercury__bt_array__V_17_17, mercury__bt_array__V_27_27, mercury__bt_array__V_14_14);
                      }
#line 1940 "bt_array.c"
                      mercury__bt_array__succeeded = (mercury__bt_array__V_17_17 == (MR_Integer) 0);
#line 485 "bt_array.m"
                      mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 485 "bt_array.m"
                      if (mercury__bt_array__succeeded)
#line 485 "bt_array.m"
                        *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_17_17;
#line 485 "bt_array.m"
                      else
#line 485 "bt_array.m"
                        {
#line 485 "bt_array.m"
                          /* direct tailcall eliminated */
#line 485 "bt_array.m"
                          {
#line 485 "bt_array.m"
                            MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_26_26;
#line 485 "bt_array.m"
                            MR_Word mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__V_15_15;

#line 485 "bt_array.m"
                            mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
#line 485 "bt_array.m"
                            mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 485 "bt_array.m"
                          }
#line 485 "bt_array.m"
                          continue;
#line 485 "bt_array.m"
                        }
#line 485 "bt_array.m"
                    }
#line 485 "bt_array.m"
                }
#line 485 "bt_array.m"
            }
#line 485 "bt_array.m"
      }
#line 485 "bt_array.m"
      break;
#line 485 "bt_array.m"
    }
#line 485 "bt_array.m"
}

#line 485 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0(
#line 485 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
#line 485 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 485 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2)
#line 485 "bt_array.m"
{
#line 485 "bt_array.m"
  while (MR_TRUE)
#line 485 "bt_array.m"
    {
#line 485 "bt_array.m"
      /* tailcall optimized into a loop */
#line 485 "bt_array.m"
      {
#line 485 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;
#line 485 "bt_array.m"
        MR_Integer mercury__bt_array__CastX_11 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
#line 485 "bt_array.m"
        MR_Integer mercury__bt_array__CastY_12 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

#line 485 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__CastX_11 == mercury__bt_array__CastY_12);
#line 485 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 485 "bt_array.m"
          mercury__bt_array__succeeded = MR_TRUE;
#line 485 "bt_array.m"
        else
#line 485 "bt_array.m"
          if ((mercury__bt_array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "bt_array.m"
            {
#line 485 "bt_array.m"
              MR_Integer mercury__bt_array__CastX_3 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
#line 485 "bt_array.m"
              MR_Integer mercury__bt_array__CastY_4 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

#line 485 "bt_array.m"
              mercury__bt_array__succeeded = (mercury__bt_array__CastY_4 == mercury__bt_array__CastX_3);
#line 485 "bt_array.m"
            }
#line 485 "bt_array.m"
          else
#line 485 "bt_array.m"
            {
#line 485 "bt_array.m"
              MR_Integer mercury__bt_array__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 485 "bt_array.m"
              MR_Word mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 485 "bt_array.m"
              MR_Word mercury__bt_array__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 485 "bt_array.m"
              MR_Integer mercury__bt_array__V_8_8;
#line 485 "bt_array.m"
              MR_Word mercury__bt_array__V_9_9;
#line 485 "bt_array.m"
              MR_Word mercury__bt_array__V_10_10;

#line 485 "bt_array.m"
              mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 485 "bt_array.m"
              if (mercury__bt_array__succeeded)
#line 485 "bt_array.m"
                {
#line 485 "bt_array.m"
                  mercury__bt_array__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
#line 485 "bt_array.m"
                  mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 485 "bt_array.m"
                  mercury__bt_array__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 2062 "bt_array.c"
                  mercury__bt_array__succeeded = (mercury__bt_array__V_5_5 == mercury__bt_array__V_8_8);
#line 485 "bt_array.m"
                  if (mercury__bt_array__succeeded)
#line 485 "bt_array.m"
                    {
#line 2068 "bt_array.c"
                      {
#line 2070 "bt_array.c"
                        mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_6_6, mercury__bt_array__V_9_9);
                      }
#line 485 "bt_array.m"
                      if (mercury__bt_array__succeeded)
#line 2075 "bt_array.c"
                        {
#line 2077 "bt_array.c"
                          /* direct tailcall eliminated */
#line 2079 "bt_array.c"
                          {
#line 2081 "bt_array.c"
                            MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__V_7_7;
#line 2083 "bt_array.c"
                            MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_10_10;

#line 2086 "bt_array.c"
                            mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 2088 "bt_array.c"
                            mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
#line 2090 "bt_array.c"
                          }
#line 2092 "bt_array.c"
                          continue;
#line 2094 "bt_array.c"
                        }
#line 485 "bt_array.m"
                    }
#line 485 "bt_array.m"
                }
#line 485 "bt_array.m"
            }
#line 485 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 485 "bt_array.m"
      }
#line 485 "bt_array.m"
      break;
#line 485 "bt_array.m"
    }
#line 485 "bt_array.m"
}

#line 183 "bt_array.m"
void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0(
#line 183 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_14,
#line 183 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__1_1,
#line 183 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 183 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__3_3)
#line 183 "bt_array.m"
{
#line 183 "bt_array.m"
  {
#line 183 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 183 "bt_array.m"
    MR_Integer mercury__bt_array__CastX_12 = (MR_Integer) mercury__bt_array__HeadVar__2_2;
#line 183 "bt_array.m"
    MR_Integer mercury__bt_array__CastY_13 = (MR_Integer) mercury__bt_array__HeadVar__3_3;

#line 183 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__CastX_12 == mercury__bt_array__CastY_13);
#line 183 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 2139 "bt_array.c"
      *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
#line 183 "bt_array.m"
    else
#line 183 "bt_array.m"
      {
#line 183 "bt_array.m"
        MR_Integer mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
#line 183 "bt_array.m"
        MR_Integer mercury__bt_array__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 183 "bt_array.m"
        MR_Word mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 183 "bt_array.m"
        MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0)));
#line 183 "bt_array.m"
        MR_Integer mercury__bt_array__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
#line 183 "bt_array.m"
        MR_Word mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 2)));
#line 183 "bt_array.m"
        MR_Word mercury__bt_array__V_10_10;

#line 66 "private_builtin.opt"
        mercury__bt_array__succeeded = (mercury__bt_array__V_4_4 < mercury__bt_array__V_7_7);
#line 69 "private_builtin.opt"
        if (mercury__bt_array__succeeded)
#line 68 "private_builtin.opt"
          mercury__bt_array__V_10_10 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__bt_array__succeeded = (mercury__bt_array__V_4_4 == mercury__bt_array__V_7_7);
#line 74 "private_builtin.opt"
            if (mercury__bt_array__succeeded)
#line 73 "private_builtin.opt"
              mercury__bt_array__V_10_10 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__bt_array__V_10_10 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 2182 "bt_array.c"
        mercury__bt_array__succeeded = (mercury__bt_array__V_10_10 == (MR_Integer) 0);
#line 183 "bt_array.m"
        mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 183 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 183 "bt_array.m"
          *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_10_10;
#line 183 "bt_array.m"
        else
#line 183 "bt_array.m"
          {
#line 183 "bt_array.m"
            MR_Word mercury__bt_array__V_11_11;

#line 66 "private_builtin.opt"
            mercury__bt_array__succeeded = (mercury__bt_array__V_5_5 < mercury__bt_array__V_8_8);
#line 69 "private_builtin.opt"
            if (mercury__bt_array__succeeded)
#line 68 "private_builtin.opt"
              mercury__bt_array__V_11_11 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__bt_array__succeeded = (mercury__bt_array__V_5_5 == mercury__bt_array__V_8_8);
#line 74 "private_builtin.opt"
                if (mercury__bt_array__succeeded)
#line 73 "private_builtin.opt"
                  mercury__bt_array__V_11_11 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__bt_array__V_11_11 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 2219 "bt_array.c"
            mercury__bt_array__succeeded = (mercury__bt_array__V_11_11 == (MR_Integer) 0);
#line 183 "bt_array.m"
            mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 183 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 183 "bt_array.m"
              *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_11_11;
#line 183 "bt_array.m"
            else
#line 183 "bt_array.m"
              {
#line 183 "bt_array.m"
                mercury__bt_array____Compare____ra_list_1_0(mercury__bt_array__TypeInfo_for_T_14, mercury__bt_array__HeadVar__1_1, mercury__bt_array__V_6_6, mercury__bt_array__V_9_9);
#line 183 "bt_array.m"
                return;
              }
#line 183 "bt_array.m"
          }
#line 183 "bt_array.m"
      }
#line 183 "bt_array.m"
  }
#line 183 "bt_array.m"
}

#line 183 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0(
#line 183 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_11,
#line 183 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 183 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2)
#line 183 "bt_array.m"
{
#line 183 "bt_array.m"
  {
#line 183 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 183 "bt_array.m"
    MR_Integer mercury__bt_array__CastX_9 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
#line 183 "bt_array.m"
    MR_Integer mercury__bt_array__CastY_10 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

#line 183 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__CastX_9 == mercury__bt_array__CastY_10);
#line 183 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 183 "bt_array.m"
      mercury__bt_array__succeeded = MR_TRUE;
#line 183 "bt_array.m"
    else
#line 183 "bt_array.m"
      {
#line 183 "bt_array.m"
        MR_Integer mercury__bt_array__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 183 "bt_array.m"
        MR_Integer mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 183 "bt_array.m"
        MR_Word mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 183 "bt_array.m"
        MR_Integer mercury__bt_array__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
#line 183 "bt_array.m"
        MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 183 "bt_array.m"
        MR_Word mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));

#line 2288 "bt_array.c"
        mercury__bt_array__succeeded = (mercury__bt_array__V_3_3 == mercury__bt_array__V_6_6);
#line 183 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 183 "bt_array.m"
          {
#line 2294 "bt_array.c"
            mercury__bt_array__succeeded = (mercury__bt_array__V_4_4 == mercury__bt_array__V_7_7);
#line 183 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 2298 "bt_array.c"
              {
#line 2300 "bt_array.c"
                return mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_1_0(mercury__bt_array__TypeInfo_for_T_11, mercury__bt_array__V_5_5, mercury__bt_array__V_8_8);
              }
#line 183 "bt_array.m"
          }
#line 183 "bt_array.m"
      }
#line 183 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 183 "bt_array.m"
  }
#line 183 "bt_array.m"
}

#line 588 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_bintree_update_5_p_0(
#line 588 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_25,
#line 588 "bt_array.m"
  MR_Integer mercury__bt_array__Size_1,
#line 588 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 588 "bt_array.m"
  MR_Integer mercury__bt_array__HeadVar__3_3,
#line 588 "bt_array.m"
  MR_Box mercury__bt_array__X_4,
#line 588 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__5_5)
#line 588 "bt_array.m"
{
#line 591 "bt_array.m"
  {
#line 591 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;

#line 591 "bt_array.m"
    if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 591 "bt_array.m"
      {
#line 591 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
#line 591 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 591 "bt_array.m"
          {
#line 591 "bt_array.m"
            {
#line 591 "bt_array.m"
              MR_Word base;
#line 591 "bt_array.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 591 "bt_array.m"
              *mercury__bt_array__HeadVar__5_5 = base;
#line 591 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 0) = mercury__bt_array__X_4;
#line 591 "bt_array.m"
            }
#line 591 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 591 "bt_array.m"
          }
#line 591 "bt_array.m"
      }
#line 591 "bt_array.m"
    else
#line 592 "bt_array.m"
      {
#line 592 "bt_array.m"
        MR_Box mercury__bt_array__X0_10 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
#line 592 "bt_array.m"
        MR_Word mercury__bt_array__T1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 592 "bt_array.m"
        MR_Word mercury__bt_array__T2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));

#line 593 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
#line 595 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 594 "bt_array.m"
          {
#line 594 "bt_array.m"
            {
#line 594 "bt_array.m"
              MR_Word base;
#line 594 "bt_array.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 594 "bt_array.m"
              *mercury__bt_array__HeadVar__5_5 = base;
#line 594 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__bt_array__X_4;
#line 594 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T1_11));
#line 594 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__T2_12));
#line 594 "bt_array.m"
            }
#line 594 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 594 "bt_array.m"
          }
#line 595 "bt_array.m"
        else
#line 596 "bt_array.m"
          {
#line 596 "bt_array.m"
            MR_Integer mercury__bt_array__Size2_16 = (mercury__bt_array__Size_1 / (MR_Integer) 2);

#line 597 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 <= mercury__bt_array__Size2_16);
#line 601 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 598 "bt_array.m"
              {
#line 598 "bt_array.m"
                MR_Integer mercury__bt_array__NewI_17 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);
#line 598 "bt_array.m"
                MR_Word mercury__bt_array__T0_18;

#line 599 "bt_array.m"
                {
#line 599 "bt_array.m"
                  mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(mercury__bt_array__TypeInfo_for_T_25, mercury__bt_array__Size2_16, mercury__bt_array__T1_11, mercury__bt_array__NewI_17, mercury__bt_array__X_4, &mercury__bt_array__T0_18);
                }
#line 598 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 598 "bt_array.m"
                  {
#line 600 "bt_array.m"
                    {
#line 600 "bt_array.m"
                      MR_Word base;
#line 600 "bt_array.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 600 "bt_array.m"
                      *mercury__bt_array__HeadVar__5_5 = base;
#line 600 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__bt_array__X0_10;
#line 600 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T0_18));
#line 600 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__T2_12));
#line 600 "bt_array.m"
                    }
#line 600 "bt_array.m"
                    mercury__bt_array__succeeded = MR_TRUE;
#line 598 "bt_array.m"
                  }
#line 598 "bt_array.m"
              }
#line 601 "bt_array.m"
            else
#line 602 "bt_array.m"
              {
#line 602 "bt_array.m"
                MR_Integer mercury__bt_array__V_21_21 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);
#line 602 "bt_array.m"
                MR_Integer mercury__bt_array__NewI_23 = (mercury__bt_array__V_21_21 - mercury__bt_array__Size2_16);
#line 602 "bt_array.m"
                MR_Word mercury__bt_array__T0_24;

#line 603 "bt_array.m"
                {
#line 603 "bt_array.m"
                  mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(mercury__bt_array__TypeInfo_for_T_25, mercury__bt_array__Size2_16, mercury__bt_array__T2_12, mercury__bt_array__NewI_23, mercury__bt_array__X_4, &mercury__bt_array__T0_24);
                }
#line 602 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 602 "bt_array.m"
                  {
#line 604 "bt_array.m"
                    {
#line 604 "bt_array.m"
                      MR_Word base;
#line 604 "bt_array.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 604 "bt_array.m"
                      *mercury__bt_array__HeadVar__5_5 = base;
#line 604 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__bt_array__X0_10;
#line 604 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T1_11));
#line 604 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__T0_24));
#line 604 "bt_array.m"
                    }
#line 604 "bt_array.m"
                    mercury__bt_array__succeeded = MR_TRUE;
#line 602 "bt_array.m"
                  }
#line 602 "bt_array.m"
              }
#line 596 "bt_array.m"
          }
#line 592 "bt_array.m"
      }
#line 591 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 591 "bt_array.m"
  }
#line 588 "bt_array.m"
}

#line 575 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_update_2_4_p_0(
#line 575 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_14,
#line 575 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 575 "bt_array.m"
  MR_Integer mercury__bt_array__I_8,
#line 575 "bt_array.m"
  MR_Box mercury__bt_array__X_9,
#line 575 "bt_array.m"
  MR_Word * mercury__bt_array__List_10)
#line 575 "bt_array.m"
{
#line 578 "bt_array.m"
  {
#line 578 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 578 "bt_array.m"
    MR_Integer mercury__bt_array__Size_5;
#line 578 "bt_array.m"
    MR_Word mercury__bt_array__T0_6;
#line 578 "bt_array.m"
    MR_Word mercury__bt_array__Rest_7;

#line 578 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 578 "bt_array.m"
      {
#line 578 "bt_array.m"
        mercury__bt_array__Size_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 578 "bt_array.m"
        mercury__bt_array__T0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 578 "bt_array.m"
        mercury__bt_array__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 579 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__I_8 < mercury__bt_array__Size_5);
#line 582 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 580 "bt_array.m"
          {
#line 580 "bt_array.m"
            MR_Word mercury__bt_array__T_11;

#line 580 "bt_array.m"
            {
#line 580 "bt_array.m"
              mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(mercury__bt_array__TypeInfo_for_T_14, mercury__bt_array__Size_5, mercury__bt_array__T0_6, mercury__bt_array__I_8, mercury__bt_array__X_9, &mercury__bt_array__T_11);
            }
#line 580 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 580 "bt_array.m"
              {
#line 581 "bt_array.m"
                {
#line 581 "bt_array.m"
                  MR_Word base;
#line 581 "bt_array.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 581 "bt_array.m"
                  *mercury__bt_array__List_10 = base;
#line 581 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__Size_5));
#line 581 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T_11));
#line 581 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__Rest_7));
#line 581 "bt_array.m"
                }
#line 581 "bt_array.m"
                mercury__bt_array__succeeded = MR_TRUE;
#line 580 "bt_array.m"
              }
#line 580 "bt_array.m"
          }
#line 582 "bt_array.m"
        else
#line 583 "bt_array.m"
          {
#line 583 "bt_array.m"
            MR_Integer mercury__bt_array__NewI_12 = (mercury__bt_array__I_8 - mercury__bt_array__Size_5);
#line 583 "bt_array.m"
            MR_Word mercury__bt_array__List0_13;

#line 584 "bt_array.m"
            {
#line 584 "bt_array.m"
              mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_14, mercury__bt_array__Rest_7, mercury__bt_array__NewI_12, mercury__bt_array__X_9, &mercury__bt_array__List0_13);
            }
#line 583 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 583 "bt_array.m"
              {
#line 585 "bt_array.m"
                {
#line 585 "bt_array.m"
                  MR_Word base;
#line 585 "bt_array.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 585 "bt_array.m"
                  *mercury__bt_array__List_10 = base;
#line 585 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__Size_5));
#line 585 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T0_6));
#line 585 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__List0_13));
#line 585 "bt_array.m"
                }
#line 585 "bt_array.m"
                mercury__bt_array__succeeded = MR_TRUE;
#line 583 "bt_array.m"
              }
#line 583 "bt_array.m"
          }
#line 578 "bt_array.m"
      }
#line 578 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 578 "bt_array.m"
  }
#line 575 "bt_array.m"
}

#line 549 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_bintree_lookup_4_p_0(
#line 549 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_20,
#line 549 "bt_array.m"
  MR_Integer mercury__bt_array__Size_1,
#line 549 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 549 "bt_array.m"
  MR_Integer mercury__bt_array__HeadVar__3_3,
#line 549 "bt_array.m"
  MR_Box * mercury__bt_array__X_4)
#line 549 "bt_array.m"
{
#line 552 "bt_array.m"
  while (MR_TRUE)
#line 552 "bt_array.m"
    {
#line 552 "bt_array.m"
      /* tailcall optimized into a loop */
#line 552 "bt_array.m"
      {
#line 552 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;

#line 552 "bt_array.m"
        if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 552 "bt_array.m"
          {
#line 552 "bt_array.m"
            *mercury__bt_array__X_4 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
#line 552 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
#line 552 "bt_array.m"
          }
#line 552 "bt_array.m"
        else
#line 553 "bt_array.m"
          {
#line 553 "bt_array.m"
            MR_Box mercury__bt_array__X0_8 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
#line 553 "bt_array.m"
            MR_Word mercury__bt_array__T1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 553 "bt_array.m"
            MR_Word mercury__bt_array__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));

#line 554 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
#line 556 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 555 "bt_array.m"
              {
#line 555 "bt_array.m"
                *mercury__bt_array__X_4 = mercury__bt_array__X0_8;
#line 555 "bt_array.m"
                mercury__bt_array__succeeded = MR_TRUE;
#line 555 "bt_array.m"
              }
#line 556 "bt_array.m"
            else
#line 557 "bt_array.m"
              {
#line 557 "bt_array.m"
                MR_Integer mercury__bt_array__Size2_13 = (mercury__bt_array__Size_1 / (MR_Integer) 2);

#line 558 "bt_array.m"
                mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 <= mercury__bt_array__Size2_13);
#line 561 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 559 "bt_array.m"
                  {
#line 559 "bt_array.m"
                    MR_Integer mercury__bt_array__NewI_14 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);

#line 560 "bt_array.m"
                    /* direct tailcall eliminated */
#line 560 "bt_array.m"
                    {
#line 560 "bt_array.m"
                      MR_Integer mercury__bt_array__Size__tmp_copy_1 = mercury__bt_array__Size2_13;
#line 560 "bt_array.m"
                      MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__T1_9;
#line 560 "bt_array.m"
                      MR_Integer mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__NewI_14;

#line 560 "bt_array.m"
                      mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
#line 560 "bt_array.m"
                      mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 560 "bt_array.m"
                      mercury__bt_array__Size_1 = mercury__bt_array__Size__tmp_copy_1;
#line 560 "bt_array.m"
                    }
#line 560 "bt_array.m"
                    continue;
#line 559 "bt_array.m"
                  }
#line 561 "bt_array.m"
                else
#line 562 "bt_array.m"
                  {
#line 562 "bt_array.m"
                    MR_Integer mercury__bt_array__V_17_17 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);
#line 562 "bt_array.m"
                    MR_Integer mercury__bt_array__NewI_19 = (mercury__bt_array__V_17_17 - mercury__bt_array__Size2_13);

#line 563 "bt_array.m"
                    /* direct tailcall eliminated */
#line 563 "bt_array.m"
                    {
#line 563 "bt_array.m"
                      MR_Integer mercury__bt_array__Size__tmp_copy_1 = mercury__bt_array__Size2_13;
#line 563 "bt_array.m"
                      MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__T2_10;
#line 563 "bt_array.m"
                      MR_Integer mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__NewI_19;

#line 563 "bt_array.m"
                      mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
#line 563 "bt_array.m"
                      mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 563 "bt_array.m"
                      mercury__bt_array__Size_1 = mercury__bt_array__Size__tmp_copy_1;
#line 563 "bt_array.m"
                    }
#line 563 "bt_array.m"
                    continue;
#line 562 "bt_array.m"
                  }
#line 557 "bt_array.m"
              }
#line 553 "bt_array.m"
          }
#line 552 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 552 "bt_array.m"
      }
#line 552 "bt_array.m"
      break;
#line 552 "bt_array.m"
    }
#line 549 "bt_array.m"
}

#line 539 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_lookup_2_3_p_0(
#line 539 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
#line 539 "bt_array.m"
  MR_Integer mercury__bt_array__I_4,
#line 539 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 539 "bt_array.m"
  MR_Box * mercury__bt_array__X_8)
#line 539 "bt_array.m"
{
#line 541 "bt_array.m"
  while (MR_TRUE)
#line 541 "bt_array.m"
    {
#line 541 "bt_array.m"
      /* tailcall optimized into a loop */
#line 541 "bt_array.m"
      {
#line 541 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 541 "bt_array.m"
        MR_Integer mercury__bt_array__Size_5;
#line 541 "bt_array.m"
        MR_Word mercury__bt_array__T_6;
#line 541 "bt_array.m"
        MR_Word mercury__bt_array__Rest_7;

#line 541 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 541 "bt_array.m"
          {
#line 541 "bt_array.m"
            mercury__bt_array__Size_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
#line 541 "bt_array.m"
            mercury__bt_array__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 541 "bt_array.m"
            mercury__bt_array__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 542 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__I_4 < mercury__bt_array__Size_5);
#line 544 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 543 "bt_array.m"
              {
#line 543 "bt_array.m"
                return mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_lookup_4_p_0(mercury__bt_array__TypeInfo_for_T_10, mercury__bt_array__Size_5, mercury__bt_array__T_6, mercury__bt_array__I_4, mercury__bt_array__X_8);
              }
#line 544 "bt_array.m"
            else
#line 545 "bt_array.m"
              {
#line 545 "bt_array.m"
                MR_Integer mercury__bt_array__NewI_9 = (mercury__bt_array__I_4 - mercury__bt_array__Size_5);

#line 546 "bt_array.m"
                /* direct tailcall eliminated */
#line 546 "bt_array.m"
                {
#line 546 "bt_array.m"
                  MR_Integer mercury__bt_array__I__tmp_copy_4 = mercury__bt_array__NewI_9;
#line 546 "bt_array.m"
                  MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__Rest_7;

#line 546 "bt_array.m"
                  mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 546 "bt_array.m"
                  mercury__bt_array__I_4 = mercury__bt_array__I__tmp_copy_4;
#line 546 "bt_array.m"
                }
#line 546 "bt_array.m"
                continue;
#line 545 "bt_array.m"
              }
#line 541 "bt_array.m"
          }
#line 541 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 541 "bt_array.m"
      }
#line 541 "bt_array.m"
      break;
#line 541 "bt_array.m"
    }
#line 539 "bt_array.m"
}

#line 473 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_update_4_p_0(
#line 473 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
#line 473 "bt_array.m"
  MR_Word mercury__bt_array__List0_5,
#line 473 "bt_array.m"
  MR_Integer mercury__bt_array__I_6,
#line 473 "bt_array.m"
  MR_Box mercury__bt_array__X_7,
#line 473 "bt_array.m"
  MR_Word * mercury__bt_array__List_8)
#line 473 "bt_array.m"
{
#line 571 "bt_array.m"
  {
#line 571 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = (mercury__bt_array__I_6 >= (MR_Integer) 0);

#line 571 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 573 "bt_array.m"
      {
#line 573 "bt_array.m"
        return mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_10, mercury__bt_array__List0_5, mercury__bt_array__I_6, mercury__bt_array__X_7, mercury__bt_array__List_8);
      }
#line 571 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 571 "bt_array.m"
  }
#line 473 "bt_array.m"
}

#line 471 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_lookup_3_p_0(
#line 471 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_8,
#line 471 "bt_array.m"
  MR_Integer mercury__bt_array__I_4,
#line 471 "bt_array.m"
  MR_Word mercury__bt_array__List_5,
#line 471 "bt_array.m"
  MR_Box * mercury__bt_array__X_6)
#line 471 "bt_array.m"
{
#line 535 "bt_array.m"
  {
#line 535 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = (mercury__bt_array__I_4 >= (MR_Integer) 0);

#line 535 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 537 "bt_array.m"
      {
#line 537 "bt_array.m"
        return mercury__bt_array__succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(mercury__bt_array__TypeInfo_for_T_8, mercury__bt_array__I_4, mercury__bt_array__List_5, mercury__bt_array__X_6);
      }
#line 535 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 535 "bt_array.m"
  }
#line 471 "bt_array.m"
}

#line 467 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_head_tail_3_p_0(
#line 467 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_18,
#line 467 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 467 "bt_array.m"
  MR_Box * mercury__bt_array__X_2,
#line 467 "bt_array.m"
  MR_Word * mercury__bt_array__Tail_3)
#line 467 "bt_array.m"
{
#line 526 "bt_array.m"
  {
#line 526 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 526 "bt_array.m"
    MR_Word mercury__bt_array__V_19_19;
#line 526 "bt_array.m"
    MR_Word mercury__bt_array__V_20_20;
#line 526 "bt_array.m"
    MR_Integer mercury__bt_array__V_21_21;

#line 526 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 526 "bt_array.m"
      {
#line 526 "bt_array.m"
        mercury__bt_array__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 526 "bt_array.m"
        mercury__bt_array__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 526 "bt_array.m"
        mercury__bt_array__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 526 "bt_array.m"
        if (((MR_tag((MR_Word) mercury__bt_array__V_20_20)) == (MR_mktag((MR_Integer) 0))))
#line 526 "bt_array.m"
          {
#line 526 "bt_array.m"
            *mercury__bt_array__X_2 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_20_20, (MR_Integer) 0));
#line 526 "bt_array.m"
            *mercury__bt_array__Tail_3 = mercury__bt_array__V_19_19;
#line 526 "bt_array.m"
          }
#line 526 "bt_array.m"
        else
#line 527 "bt_array.m"
          {
#line 527 "bt_array.m"
            MR_Word mercury__bt_array__T1_10;
#line 527 "bt_array.m"
            MR_Word mercury__bt_array__T2_11;
#line 527 "bt_array.m"
            MR_Integer mercury__bt_array__Size2_14;
#line 527 "bt_array.m"
            MR_Word mercury__bt_array__V_17_17;

#line 527 "bt_array.m"
            *mercury__bt_array__X_2 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 0));
#line 527 "bt_array.m"
            mercury__bt_array__T1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 1)));
#line 527 "bt_array.m"
            mercury__bt_array__T2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 2)));
#line 105 "int.opt"
            mercury__bt_array__Size2_14 = (mercury__bt_array__V_21_21 / (MR_Integer) 2);
#line 529 "bt_array.m"
            {
#line 529 "bt_array.m"
              mercury__bt_array__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 529 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_17_17, 0) = ((MR_Box) (mercury__bt_array__Size2_14));
#line 529 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_17_17, 1) = ((MR_Box) (mercury__bt_array__T2_11));
#line 529 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_17_17, 2) = ((MR_Box) (mercury__bt_array__V_19_19));
#line 529 "bt_array.m"
            }
#line 529 "bt_array.m"
            {
#line 529 "bt_array.m"
              MR_Word base;
#line 529 "bt_array.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 529 "bt_array.m"
              *mercury__bt_array__Tail_3 = base;
#line 529 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__Size2_14));
#line 529 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T1_10));
#line 529 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__V_17_17));
#line 529 "bt_array.m"
            }
#line 527 "bt_array.m"
          }
#line 526 "bt_array.m"
        mercury__bt_array__succeeded = MR_TRUE;
#line 526 "bt_array.m"
      }
#line 526 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 526 "bt_array.m"
  }
#line 467 "bt_array.m"
}

#line 461 "bt_array.m"
void MR_CALL 
mercury__bt_array__ra_list_cons_3_p_0(
#line 461 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_19,
#line 461 "bt_array.m"
  MR_Box mercury__bt_array__X_4,
#line 461 "bt_array.m"
  MR_Word mercury__bt_array__List0_5,
#line 461 "bt_array.m"
  MR_Word * mercury__bt_array__List_6)
#line 461 "bt_array.m"
{
#line 508 "bt_array.m"
  {
#line 508 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__List0_5)) == (MR_mktag((MR_Integer) 1)));
#line 508 "bt_array.m"
    MR_Integer mercury__bt_array__Size1_7;
#line 508 "bt_array.m"
    MR_Word mercury__bt_array__T1_8;
#line 508 "bt_array.m"
    MR_Integer mercury__bt_array__Size2_9;
#line 508 "bt_array.m"
    MR_Word mercury__bt_array__T2_10;
#line 508 "bt_array.m"
    MR_Word mercury__bt_array__Rest_11;
#line 503 "bt_array.m"
    MR_Word mercury__bt_array__V_13_13;

#line 503 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 503 "bt_array.m"
      {
#line 503 "bt_array.m"
        mercury__bt_array__Size1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__List0_5, (MR_Integer) 0)));
#line 503 "bt_array.m"
        mercury__bt_array__T1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__List0_5, (MR_Integer) 1)));
#line 503 "bt_array.m"
        mercury__bt_array__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__List0_5, (MR_Integer) 2)));
#line 503 "bt_array.m"
        mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 503 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 503 "bt_array.m"
          {
#line 503 "bt_array.m"
            mercury__bt_array__Size2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_13_13, (MR_Integer) 0)));
#line 503 "bt_array.m"
            mercury__bt_array__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_13_13, (MR_Integer) 1)));
#line 503 "bt_array.m"
            mercury__bt_array__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_13_13, (MR_Integer) 2)));
#line 504 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__Size1_7 == mercury__bt_array__Size2_9);
#line 503 "bt_array.m"
          }
#line 503 "bt_array.m"
      }
#line 508 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 506 "bt_array.m"
      {
#line 506 "bt_array.m"
        MR_Integer mercury__bt_array__NewSize_12;
#line 506 "bt_array.m"
        MR_Integer mercury__bt_array__V_14_14 = ((MR_Integer) 1 + mercury__bt_array__Size1_7);
#line 506 "bt_array.m"
        MR_Word mercury__bt_array__V_16_16;

#line 506 "bt_array.m"
        mercury__bt_array__NewSize_12 = (mercury__bt_array__V_14_14 + mercury__bt_array__Size2_9);
#line 507 "bt_array.m"
        {
#line 507 "bt_array.m"
          mercury__bt_array__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 507 "bt_array.m"
          MR_hl_field(MR_mktag(1), mercury__bt_array__V_16_16, 0) = mercury__bt_array__X_4;
#line 507 "bt_array.m"
          MR_hl_field(MR_mktag(1), mercury__bt_array__V_16_16, 1) = ((MR_Box) (mercury__bt_array__T1_8));
#line 507 "bt_array.m"
          MR_hl_field(MR_mktag(1), mercury__bt_array__V_16_16, 2) = ((MR_Box) (mercury__bt_array__T2_10));
#line 507 "bt_array.m"
        }
#line 507 "bt_array.m"
        {
#line 507 "bt_array.m"
          MR_Word base;
#line 507 "bt_array.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 507 "bt_array.m"
          *mercury__bt_array__List_6 = base;
#line 507 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__NewSize_12));
#line 507 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__V_16_16));
#line 507 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__Rest_11));
#line 507 "bt_array.m"
        }
#line 506 "bt_array.m"
      }
#line 508 "bt_array.m"
    else
#line 509 "bt_array.m"
      {
#line 509 "bt_array.m"
        MR_Word mercury__bt_array__V_18_18;

#line 509 "bt_array.m"
        {
#line 509 "bt_array.m"
          mercury__bt_array__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 509 "bt_array.m"
          MR_hl_field(MR_mktag(0), mercury__bt_array__V_18_18, 0) = mercury__bt_array__X_4;
#line 509 "bt_array.m"
        }
#line 509 "bt_array.m"
        {
#line 509 "bt_array.m"
          MR_Word base;
#line 509 "bt_array.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 509 "bt_array.m"
          *mercury__bt_array__List_6 = base;
#line 509 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 509 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__V_18_18));
#line 509 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__List0_5));
#line 509 "bt_array.m"
        }
#line 509 "bt_array.m"
      }
#line 508 "bt_array.m"
  }
#line 461 "bt_array.m"
}

#line 459 "bt_array.m"
void MR_CALL 
mercury__bt_array__ra_list_nil_1_p_0(
#line 459 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_2,
#line 459 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__1_1)
#line 459 "bt_array.m"
{
#line 497 "bt_array.m"
  {
#line 497 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;

#line 497 "bt_array.m"
    *mercury__bt_array__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 497 "bt_array.m"
  }
#line 459 "bt_array.m"
}

#line 398 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__bsearch_2_6_p_0(
#line 398 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_26,
#line 398 "bt_array.m"
  MR_Word mercury__bt_array__A_7,
#line 398 "bt_array.m"
  MR_Integer mercury__bt_array__Lo_8,
#line 398 "bt_array.m"
  MR_Integer mercury__bt_array__Hi_9,
#line 398 "bt_array.m"
  MR_Box mercury__bt_array__El_10,
#line 398 "bt_array.m"
  MR_Word mercury__bt_array__Compare_11,
#line 398 "bt_array.m"
  MR_Integer * mercury__bt_array__I_12)
#line 398 "bt_array.m"
{
#line 402 "bt_array.m"
  while (MR_TRUE)
#line 402 "bt_array.m"
    {
#line 402 "bt_array.m"
      /* tailcall optimized into a loop */
#line 402 "bt_array.m"
      {
#line 402 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;
#line 402 "bt_array.m"
        MR_Integer mercury__bt_array__Width_13 = (mercury__bt_array__Hi_9 - mercury__bt_array__Lo_8);

#line 406 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__Width_13 >= (MR_Integer) 0);
#line 402 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 402 "bt_array.m"
          {
#line 410 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__Width_13 == (MR_Integer) 0);
#line 414 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 411 "bt_array.m"
              {
#line 411 "bt_array.m"
                MR_Box mercury__bt_array__X_14;
#line 411 "bt_array.m"
                MR_Word mercury__bt_array__V_27_27;
#line 412 "bt_array.m"
                void MR_CALL (* mercury__bt_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 412 "bt_array.m"
                MR_Box mercury__bt_array__conv1_V_27_27;

#line 411 "bt_array.m"
                {
#line 411 "bt_array.m"
                  mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_26, mercury__bt_array__A_7, mercury__bt_array__Lo_8, &mercury__bt_array__X_14);
                }
#line 412 "bt_array.m"
                mercury__bt_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bt_array__Compare_11, (MR_Integer) 1)));
#line 412 "bt_array.m"
                {
#line 412 "bt_array.m"
                  mercury__bt_array__func_0(((MR_Box) mercury__bt_array__Compare_11), mercury__bt_array__El_10, mercury__bt_array__X_14, &mercury__bt_array__conv1_V_27_27);
                }
#line 412 "bt_array.m"
                mercury__bt_array__V_27_27 = ((MR_Word) mercury__bt_array__conv1_V_27_27);
#line 412 "bt_array.m"
                mercury__bt_array__succeeded = ((MR_Integer) 0 == mercury__bt_array__V_27_27);
#line 411 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 411 "bt_array.m"
                  {
#line 413 "bt_array.m"
                    *mercury__bt_array__I_12 = mercury__bt_array__Lo_8;
#line 413 "bt_array.m"
                    mercury__bt_array__succeeded = MR_TRUE;
#line 411 "bt_array.m"
                  }
#line 411 "bt_array.m"
              }
#line 414 "bt_array.m"
            else
#line 423 "bt_array.m"
              {
#line 423 "bt_array.m"
                MR_Integer mercury__bt_array__Mid_15;
#line 423 "bt_array.m"
                MR_Box mercury__bt_array__XMid_16;
#line 423 "bt_array.m"
                MR_Word mercury__bt_array__Comp_17;
#line 423 "bt_array.m"
                MR_Integer mercury__bt_array__V_21_21 = (mercury__bt_array__Lo_8 + mercury__bt_array__Hi_9);
#line 425 "bt_array.m"
                void MR_CALL (* mercury__bt_array__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 425 "bt_array.m"
                MR_Box mercury__bt_array__conv3_Comp_17;

#line 423 "bt_array.m"
                {
#line 423 "bt_array.m"
                  mercury__bt_array__Mid_15 = mercury__int__f_62_62_2_f_0(mercury__bt_array__V_21_21, (MR_Integer) 1);
                }
#line 424 "bt_array.m"
                {
#line 424 "bt_array.m"
                  mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_26, mercury__bt_array__A_7, mercury__bt_array__Mid_15, &mercury__bt_array__XMid_16);
                }
#line 425 "bt_array.m"
                mercury__bt_array__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bt_array__Compare_11, (MR_Integer) 1)));
#line 425 "bt_array.m"
                {
#line 425 "bt_array.m"
                  mercury__bt_array__func_2(((MR_Box) mercury__bt_array__Compare_11), mercury__bt_array__XMid_16, mercury__bt_array__El_10, &mercury__bt_array__conv3_Comp_17);
                }
#line 425 "bt_array.m"
                mercury__bt_array__Comp_17 = ((MR_Word) mercury__bt_array__conv3_Comp_17);
#line 429 "bt_array.m"
                if ((mercury__bt_array__Comp_17 == (MR_Integer) 1))
#line 426 "bt_array.m"
                  {
#line 426 "bt_array.m"
                    MR_Integer mercury__bt_array__Mid1_18 = (mercury__bt_array__Mid_15 + (MR_Integer) 1);

#line 428 "bt_array.m"
                    /* direct tailcall eliminated */
#line 428 "bt_array.m"
                    {
#line 428 "bt_array.m"
                      MR_Integer mercury__bt_array__Lo__tmp_copy_8 = mercury__bt_array__Mid1_18;

#line 428 "bt_array.m"
                      mercury__bt_array__Lo_8 = mercury__bt_array__Lo__tmp_copy_8;
#line 428 "bt_array.m"
                    }
#line 428 "bt_array.m"
                    continue;
#line 426 "bt_array.m"
                  }
#line 429 "bt_array.m"
                else
#line 429 "bt_array.m"
                  if ((mercury__bt_array__Comp_17 == (MR_Integer) 0))
#line 430 "bt_array.m"
                    {
#line 430 "bt_array.m"
                      /* direct tailcall eliminated */
#line 430 "bt_array.m"
                      {
#line 430 "bt_array.m"
                        MR_Integer mercury__bt_array__Hi__tmp_copy_9 = mercury__bt_array__Mid_15;

#line 430 "bt_array.m"
                        mercury__bt_array__Hi_9 = mercury__bt_array__Hi__tmp_copy_9;
#line 430 "bt_array.m"
                      }
#line 430 "bt_array.m"
                      continue;
#line 430 "bt_array.m"
                    }
#line 429 "bt_array.m"
                  else
#line 431 "bt_array.m"
                    {
#line 431 "bt_array.m"
                      MR_Integer mercury__bt_array__Mid1_25 = (mercury__bt_array__Mid_15 - (MR_Integer) 1);

#line 433 "bt_array.m"
                      /* direct tailcall eliminated */
#line 433 "bt_array.m"
                      {
#line 433 "bt_array.m"
                        MR_Integer mercury__bt_array__Hi__tmp_copy_9 = mercury__bt_array__Mid1_25;

#line 433 "bt_array.m"
                        mercury__bt_array__Hi_9 = mercury__bt_array__Hi__tmp_copy_9;
#line 433 "bt_array.m"
                      }
#line 433 "bt_array.m"
                      continue;
#line 431 "bt_array.m"
                    }
#line 423 "bt_array.m"
              }
#line 402 "bt_array.m"
          }
#line 402 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 402 "bt_array.m"
      }
#line 402 "bt_array.m"
      break;
#line 402 "bt_array.m"
    }
#line 398 "bt_array.m"
}

#line 347 "bt_array.m"
void MR_CALL 
mercury__bt_array__reverse_from_ra_list_3_p_0(
#line 347 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
#line 347 "bt_array.m"
  MR_Word mercury__bt_array__RaList0_4,
#line 347 "bt_array.m"
  MR_Word mercury__bt_array__Xs0_5,
#line 347 "bt_array.m"
  MR_Word * mercury__bt_array__Xs_6)
#line 347 "bt_array.m"
{
#line 352 "bt_array.m"
  while (MR_TRUE)
#line 352 "bt_array.m"
    {
#line 352 "bt_array.m"
      /* tailcall optimized into a loop */
#line 352 "bt_array.m"
      {
#line 352 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_4)) == (MR_mktag((MR_Integer) 1)));
#line 352 "bt_array.m"
        MR_Box mercury__bt_array__X_7;
#line 352 "bt_array.m"
        MR_Word mercury__bt_array__RaList1_8;
#line 526 "bt_array.m"
        MR_Word mercury__bt_array__V_25_25;
#line 526 "bt_array.m"
        MR_Word mercury__bt_array__V_26_26;
#line 526 "bt_array.m"
        MR_Integer mercury__bt_array__V_27_27;

#line 526 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 526 "bt_array.m"
          {
#line 526 "bt_array.m"
            mercury__bt_array__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_4, (MR_Integer) 0)));
#line 526 "bt_array.m"
            mercury__bt_array__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_4, (MR_Integer) 1)));
#line 526 "bt_array.m"
            mercury__bt_array__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_4, (MR_Integer) 2)));
#line 526 "bt_array.m"
            if (((MR_tag((MR_Word) mercury__bt_array__V_26_26)) == (MR_mktag((MR_Integer) 0))))
#line 526 "bt_array.m"
              {
#line 526 "bt_array.m"
                mercury__bt_array__X_7 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_26_26, (MR_Integer) 0));
#line 526 "bt_array.m"
                mercury__bt_array__RaList1_8 = mercury__bt_array__V_25_25;
#line 526 "bt_array.m"
              }
#line 526 "bt_array.m"
            else
#line 527 "bt_array.m"
              {
#line 527 "bt_array.m"
                MR_Word mercury__bt_array__T1_17;
#line 527 "bt_array.m"
                MR_Word mercury__bt_array__T2_18;
#line 527 "bt_array.m"
                MR_Integer mercury__bt_array__Size2_21;
#line 527 "bt_array.m"
                MR_Word mercury__bt_array__V_24_24;

#line 527 "bt_array.m"
                mercury__bt_array__X_7 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, (MR_Integer) 0));
#line 527 "bt_array.m"
                mercury__bt_array__T1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, (MR_Integer) 1)));
#line 527 "bt_array.m"
                mercury__bt_array__T2_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, (MR_Integer) 2)));
#line 105 "int.opt"
                mercury__bt_array__Size2_21 = (mercury__bt_array__V_27_27 / (MR_Integer) 2);
#line 529 "bt_array.m"
                {
#line 529 "bt_array.m"
                  mercury__bt_array__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_24_24, 0) = ((MR_Box) (mercury__bt_array__Size2_21));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_24_24, 1) = ((MR_Box) (mercury__bt_array__T2_18));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_24_24, 2) = ((MR_Box) (mercury__bt_array__V_25_25));
#line 529 "bt_array.m"
                }
#line 529 "bt_array.m"
                {
#line 529 "bt_array.m"
                  mercury__bt_array__RaList1_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_8, 0) = ((MR_Box) (mercury__bt_array__Size2_21));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_8, 1) = ((MR_Box) (mercury__bt_array__T1_17));
#line 529 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_8, 2) = ((MR_Box) (mercury__bt_array__V_24_24));
#line 529 "bt_array.m"
                }
#line 527 "bt_array.m"
              }
#line 526 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 526 "bt_array.m"
          }
#line 352 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 351 "bt_array.m"
          {
#line 351 "bt_array.m"
            MR_Word mercury__bt_array__V_9_9;

#line 351 "bt_array.m"
            {
#line 351 "bt_array.m"
              mercury__bt_array__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_9_9, 0) = mercury__bt_array__X_7;
#line 351 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_9_9, 1) = ((MR_Box) (mercury__bt_array__Xs0_5));
#line 351 "bt_array.m"
            }
#line 351 "bt_array.m"
            /* direct tailcall eliminated */
#line 351 "bt_array.m"
            {
#line 351 "bt_array.m"
              MR_Word mercury__bt_array__RaList0__tmp_copy_4 = mercury__bt_array__RaList1_8;
#line 351 "bt_array.m"
              MR_Word mercury__bt_array__Xs0__tmp_copy_5 = mercury__bt_array__V_9_9;

#line 351 "bt_array.m"
              mercury__bt_array__Xs0_5 = mercury__bt_array__Xs0__tmp_copy_5;
#line 351 "bt_array.m"
              mercury__bt_array__RaList0_4 = mercury__bt_array__RaList0__tmp_copy_4;
#line 351 "bt_array.m"
            }
#line 351 "bt_array.m"
            continue;
#line 351 "bt_array.m"
          }
#line 352 "bt_array.m"
        else
#line 353 "bt_array.m"
          *mercury__bt_array__Xs_6 = mercury__bt_array__Xs0_5;
#line 352 "bt_array.m"
      }
#line 352 "bt_array.m"
      break;
#line 352 "bt_array.m"
    }
#line 347 "bt_array.m"
}

#line 333 "bt_array.m"
static void MR_CALL 
mercury__bt_array__insert_items_4_p_0(
#line 333 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_15,
#line 333 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 333 "bt_array.m"
  MR_Integer mercury__bt_array__HeadVar__2_2,
#line 333 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__3_3,
#line 333 "bt_array.m"
  MR_Word * mercury__bt_array__Array_4)
#line 333 "bt_array.m"
{
#line 336 "bt_array.m"
  while (MR_TRUE)
#line 336 "bt_array.m"
    {
#line 336 "bt_array.m"
      /* tailcall optimized into a loop */
#line 336 "bt_array.m"
      {
#line 336 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;

#line 336 "bt_array.m"
        if ((mercury__bt_array__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "bt_array.m"
          *mercury__bt_array__Array_4 = mercury__bt_array__HeadVar__1_1;
#line 336 "bt_array.m"
        else
#line 337 "bt_array.m"
          {
#line 337 "bt_array.m"
            MR_Box mercury__bt_array__Head_9 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0));
#line 337 "bt_array.m"
            MR_Word mercury__bt_array__Tail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
#line 337 "bt_array.m"
            MR_Word mercury__bt_array__Array1_12;
#line 337 "bt_array.m"
            MR_Integer mercury__bt_array__N1_13;

#line 338 "bt_array.m"
            {
#line 338 "bt_array.m"
              mercury__bt_array__set_4_p_0(mercury__bt_array__TypeInfo_for_T_15, mercury__bt_array__HeadVar__1_1, mercury__bt_array__HeadVar__2_2, mercury__bt_array__Head_9, &mercury__bt_array__Array1_12);
            }
#line 339 "bt_array.m"
            mercury__bt_array__N1_13 = (mercury__bt_array__HeadVar__2_2 + (MR_Integer) 1);
#line 340 "bt_array.m"
            /* direct tailcall eliminated */
#line 340 "bt_array.m"
            {
#line 340 "bt_array.m"
              MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__Array1_12;
#line 340 "bt_array.m"
              MR_Integer mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__N1_13;
#line 340 "bt_array.m"
              MR_Word mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__Tail_10;

#line 340 "bt_array.m"
              mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
#line 340 "bt_array.m"
              mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 340 "bt_array.m"
              mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
#line 340 "bt_array.m"
            }
#line 340 "bt_array.m"
            continue;
#line 337 "bt_array.m"
          }
#line 336 "bt_array.m"
      }
#line 336 "bt_array.m"
      break;
#line 336 "bt_array.m"
    }
#line 333 "bt_array.m"
}

#line 323 "bt_array.m"
void MR_CALL 
mercury__bt_array__reverse_into_ra_list_3_p_0(
#line 323 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
#line 323 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 323 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 323 "bt_array.m"
  MR_Word * mercury__bt_array__RaList_3)
#line 323 "bt_array.m"
{
#line 326 "bt_array.m"
  while (MR_TRUE)
#line 326 "bt_array.m"
    {
#line 326 "bt_array.m"
      /* tailcall optimized into a loop */
#line 326 "bt_array.m"
      {
#line 326 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;

#line 326 "bt_array.m"
        if ((mercury__bt_array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "bt_array.m"
          *mercury__bt_array__RaList_3 = mercury__bt_array__HeadVar__2_2;
#line 326 "bt_array.m"
        else
#line 327 "bt_array.m"
          {
#line 327 "bt_array.m"
            MR_Box mercury__bt_array__X_5 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0));
#line 327 "bt_array.m"
            MR_Word mercury__bt_array__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 327 "bt_array.m"
            MR_Word mercury__bt_array__RaList1_9;
#line 508 "bt_array.m"
            MR_Integer mercury__bt_array__Size1_14;
#line 508 "bt_array.m"
            MR_Word mercury__bt_array__T1_15;
#line 508 "bt_array.m"
            MR_Integer mercury__bt_array__Size2_16;
#line 508 "bt_array.m"
            MR_Word mercury__bt_array__T2_17;
#line 508 "bt_array.m"
            MR_Word mercury__bt_array__Rest_18;
#line 503 "bt_array.m"
            MR_Word mercury__bt_array__V_20_20;

#line 503 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 503 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 503 "bt_array.m"
              {
#line 503 "bt_array.m"
                mercury__bt_array__Size1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
#line 503 "bt_array.m"
                mercury__bt_array__T1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 503 "bt_array.m"
                mercury__bt_array__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 503 "bt_array.m"
                mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 503 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 503 "bt_array.m"
                  {
#line 503 "bt_array.m"
                    mercury__bt_array__Size2_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 0)));
#line 503 "bt_array.m"
                    mercury__bt_array__T2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 1)));
#line 503 "bt_array.m"
                    mercury__bt_array__Rest_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 2)));
#line 504 "bt_array.m"
                    mercury__bt_array__succeeded = (mercury__bt_array__Size1_14 == mercury__bt_array__Size2_16);
#line 503 "bt_array.m"
                  }
#line 503 "bt_array.m"
              }
#line 508 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 506 "bt_array.m"
              {
#line 506 "bt_array.m"
                MR_Integer mercury__bt_array__NewSize_19;
#line 506 "bt_array.m"
                MR_Integer mercury__bt_array__V_21_21 = ((MR_Integer) 1 + mercury__bt_array__Size1_14);
#line 506 "bt_array.m"
                MR_Word mercury__bt_array__V_23_23;

#line 506 "bt_array.m"
                mercury__bt_array__NewSize_19 = (mercury__bt_array__V_21_21 + mercury__bt_array__Size2_16);
#line 507 "bt_array.m"
                {
#line 507 "bt_array.m"
                  mercury__bt_array__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, 0) = mercury__bt_array__X_5;
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, 1) = ((MR_Box) (mercury__bt_array__T1_15));
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, 2) = ((MR_Box) (mercury__bt_array__T2_17));
#line 507 "bt_array.m"
                }
#line 507 "bt_array.m"
                {
#line 507 "bt_array.m"
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) (mercury__bt_array__NewSize_19));
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_23_23));
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__Rest_18));
#line 507 "bt_array.m"
                }
#line 506 "bt_array.m"
              }
#line 508 "bt_array.m"
            else
#line 509 "bt_array.m"
              {
#line 509 "bt_array.m"
                MR_Word mercury__bt_array__V_25_25;

#line 509 "bt_array.m"
                {
#line 509 "bt_array.m"
                  mercury__bt_array__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 509 "bt_array.m"
                  MR_hl_field(MR_mktag(0), mercury__bt_array__V_25_25, 0) = mercury__bt_array__X_5;
#line 509 "bt_array.m"
                }
#line 509 "bt_array.m"
                {
#line 509 "bt_array.m"
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 509 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) ((MR_Integer) 1));
#line 509 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_25_25));
#line 509 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__HeadVar__2_2));
#line 509 "bt_array.m"
                }
#line 509 "bt_array.m"
              }
#line 329 "bt_array.m"
            /* direct tailcall eliminated */
#line 329 "bt_array.m"
            {
#line 329 "bt_array.m"
              MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__Xs_6;
#line 329 "bt_array.m"
              MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__RaList1_9;

#line 329 "bt_array.m"
              mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 329 "bt_array.m"
              mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
#line 329 "bt_array.m"
            }
#line 329 "bt_array.m"
            continue;
#line 327 "bt_array.m"
          }
#line 326 "bt_array.m"
      }
#line 326 "bt_array.m"
      break;
#line 326 "bt_array.m"
    }
#line 323 "bt_array.m"
}

#line 225 "bt_array.m"
void MR_CALL 
mercury__bt_array__actual_position_4_p_0(
#line 225 "bt_array.m"
  MR_Integer mercury__bt_array__Low_5,
#line 225 "bt_array.m"
  MR_Integer mercury__bt_array__High_6,
#line 225 "bt_array.m"
  MR_Integer mercury__bt_array__Index_7,
#line 225 "bt_array.m"
  MR_Integer * mercury__bt_array__Pos_8)
#line 225 "bt_array.m"
{
#line 227 "bt_array.m"
  {
#line 227 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 227 "bt_array.m"
    MR_Integer mercury__bt_array__V_9_9 = (mercury__bt_array__High_6 - mercury__bt_array__Low_5);

#line 228 "bt_array.m"
    *mercury__bt_array__Pos_8 = (mercury__bt_array__V_9_9 - mercury__bt_array__Index_7);
#line 227 "bt_array.m"
  }
#line 225 "bt_array.m"
}

#line 197 "bt_array.m"
void MR_CALL 
mercury__bt_array__add_elements_4_p_0(
#line 197 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
#line 197 "bt_array.m"
  MR_Integer mercury__bt_array__ElemsToAdd_5,
#line 197 "bt_array.m"
  MR_Box mercury__bt_array__Item_6,
#line 197 "bt_array.m"
  MR_Word mercury__bt_array__RaList0_7,
#line 197 "bt_array.m"
  MR_Word * mercury__bt_array__RaList_8)
#line 197 "bt_array.m"
{
#line 202 "bt_array.m"
  while (MR_TRUE)
#line 202 "bt_array.m"
    {
#line 202 "bt_array.m"
      /* tailcall optimized into a loop */
#line 202 "bt_array.m"
      {
#line 202 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = (mercury__bt_array__ElemsToAdd_5 <= (MR_Integer) 0);

#line 202 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 201 "bt_array.m"
          *mercury__bt_array__RaList_8 = mercury__bt_array__RaList0_7;
#line 202 "bt_array.m"
        else
#line 203 "bt_array.m"
          {
#line 203 "bt_array.m"
            MR_Word mercury__bt_array__RaList1_9;
#line 203 "bt_array.m"
            MR_Integer mercury__bt_array__ElemsToAdd1_10;
#line 508 "bt_array.m"
            MR_Integer mercury__bt_array__Size1_17;
#line 508 "bt_array.m"
            MR_Word mercury__bt_array__T1_18;
#line 508 "bt_array.m"
            MR_Integer mercury__bt_array__Size2_19;
#line 508 "bt_array.m"
            MR_Word mercury__bt_array__T2_20;
#line 508 "bt_array.m"
            MR_Word mercury__bt_array__Rest_21;
#line 503 "bt_array.m"
            MR_Word mercury__bt_array__V_23_23;

#line 503 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_7)) == (MR_mktag((MR_Integer) 1)));
#line 503 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 503 "bt_array.m"
              {
#line 503 "bt_array.m"
                mercury__bt_array__Size1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_7, (MR_Integer) 0)));
#line 503 "bt_array.m"
                mercury__bt_array__T1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_7, (MR_Integer) 1)));
#line 503 "bt_array.m"
                mercury__bt_array__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_7, (MR_Integer) 2)));
#line 503 "bt_array.m"
                mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 503 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 503 "bt_array.m"
                  {
#line 503 "bt_array.m"
                    mercury__bt_array__Size2_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, (MR_Integer) 0)));
#line 503 "bt_array.m"
                    mercury__bt_array__T2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, (MR_Integer) 1)));
#line 503 "bt_array.m"
                    mercury__bt_array__Rest_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, (MR_Integer) 2)));
#line 504 "bt_array.m"
                    mercury__bt_array__succeeded = (mercury__bt_array__Size1_17 == mercury__bt_array__Size2_19);
#line 503 "bt_array.m"
                  }
#line 503 "bt_array.m"
              }
#line 508 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 506 "bt_array.m"
              {
#line 506 "bt_array.m"
                MR_Integer mercury__bt_array__NewSize_22;
#line 506 "bt_array.m"
                MR_Integer mercury__bt_array__V_24_24 = ((MR_Integer) 1 + mercury__bt_array__Size1_17);
#line 506 "bt_array.m"
                MR_Word mercury__bt_array__V_26_26;

#line 506 "bt_array.m"
                mercury__bt_array__NewSize_22 = (mercury__bt_array__V_24_24 + mercury__bt_array__Size2_19);
#line 507 "bt_array.m"
                {
#line 507 "bt_array.m"
                  mercury__bt_array__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, 0) = mercury__bt_array__Item_6;
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, 1) = ((MR_Box) (mercury__bt_array__T1_18));
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, 2) = ((MR_Box) (mercury__bt_array__T2_20));
#line 507 "bt_array.m"
                }
#line 507 "bt_array.m"
                {
#line 507 "bt_array.m"
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) (mercury__bt_array__NewSize_22));
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_26_26));
#line 507 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__Rest_21));
#line 507 "bt_array.m"
                }
#line 506 "bt_array.m"
              }
#line 508 "bt_array.m"
            else
#line 509 "bt_array.m"
              {
#line 509 "bt_array.m"
                MR_Word mercury__bt_array__V_28_28;

#line 509 "bt_array.m"
                {
#line 509 "bt_array.m"
                  mercury__bt_array__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 509 "bt_array.m"
                  MR_hl_field(MR_mktag(0), mercury__bt_array__V_28_28, 0) = mercury__bt_array__Item_6;
#line 509 "bt_array.m"
                }
#line 509 "bt_array.m"
                {
#line 509 "bt_array.m"
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 509 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) ((MR_Integer) 1));
#line 509 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_28_28));
#line 509 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__RaList0_7));
#line 509 "bt_array.m"
                }
#line 509 "bt_array.m"
              }
#line 204 "bt_array.m"
            mercury__bt_array__ElemsToAdd1_10 = (mercury__bt_array__ElemsToAdd_5 - (MR_Integer) 1);
#line 205 "bt_array.m"
            /* direct tailcall eliminated */
#line 205 "bt_array.m"
            {
#line 205 "bt_array.m"
              MR_Integer mercury__bt_array__ElemsToAdd__tmp_copy_5 = mercury__bt_array__ElemsToAdd1_10;
#line 205 "bt_array.m"
              MR_Word mercury__bt_array__RaList0__tmp_copy_7 = mercury__bt_array__RaList1_9;

#line 205 "bt_array.m"
              mercury__bt_array__RaList0_7 = mercury__bt_array__RaList0__tmp_copy_7;
#line 205 "bt_array.m"
              mercury__bt_array__ElemsToAdd_5 = mercury__bt_array__ElemsToAdd__tmp_copy_5;
#line 205 "bt_array.m"
            }
#line 205 "bt_array.m"
            continue;
#line 203 "bt_array.m"
          }
#line 202 "bt_array.m"
      }
#line 202 "bt_array.m"
      break;
#line 202 "bt_array.m"
    }
#line 197 "bt_array.m"
}

#line 173 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__f_101_108_101_109_32_58_61_3_f_0(
#line 173 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_8,
#line 173 "bt_array.m"
  MR_Integer mercury__bt_array__Index_5,
#line 173 "bt_array.m"
  MR_Word mercury__bt_array__Array_6,
#line 173 "bt_array.m"
  MR_Box mercury__bt_array__Value_7)
#line 173 "bt_array.m"
{
#line 658 "bt_array.m"
  {
#line 658 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 658 "bt_array.m"
    MR_Word mercury__bt_array__HeadVar__4_4;

#line 658 "bt_array.m"
    {
#line 658 "bt_array.m"
      mercury__bt_array__set_4_p_0(mercury__bt_array__TypeInfo_for_T_8, mercury__bt_array__Array_6, mercury__bt_array__Index_5, mercury__bt_array__Value_7, &mercury__bt_array__HeadVar__4_4);
    }
#line 658 "bt_array.m"
    return mercury__bt_array__HeadVar__4_4;
#line 658 "bt_array.m"
  }
#line 173 "bt_array.m"
}

#line 168 "bt_array.m"
MR_Box MR_CALL 
mercury__bt_array__elem_2_f_0(
#line 168 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_6,
#line 168 "bt_array.m"
  MR_Integer mercury__bt_array__Index_4,
#line 168 "bt_array.m"
  MR_Word mercury__bt_array__Array_5)
#line 168 "bt_array.m"
{
#line 655 "bt_array.m"
  {
#line 655 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 655 "bt_array.m"
    MR_Box mercury__bt_array__HeadVar__3_3;

#line 655 "bt_array.m"
    {
#line 655 "bt_array.m"
      mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_6, mercury__bt_array__Array_5, mercury__bt_array__Index_4, &mercury__bt_array__HeadVar__3_3);
    }
#line 655 "bt_array.m"
    return mercury__bt_array__HeadVar__3_3;
#line 655 "bt_array.m"
  }
#line 168 "bt_array.m"
}

#line 162 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__bsearch_4_p_0(
#line 162 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_11,
#line 162 "bt_array.m"
  MR_Word mercury__bt_array__A_5,
#line 162 "bt_array.m"
  MR_Box mercury__bt_array__El_6,
#line 162 "bt_array.m"
  MR_Word mercury__bt_array__Compare_7,
#line 162 "bt_array.m"
  MR_Integer * mercury__bt_array__I_8)
#line 162 "bt_array.m"
{
#line 390 "bt_array.m"
  {
#line 390 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 390 "bt_array.m"
    MR_Integer mercury__bt_array__Lo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__A_5, (MR_Integer) 0)));
#line 390 "bt_array.m"
    MR_Integer mercury__bt_array__Hi_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__A_5, (MR_Integer) 1)));
#line 217 "bt_array.m"
    MR_Word mercury__bt_array__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__A_5, (MR_Integer) 2)));

#line 392 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Lo_9 <= mercury__bt_array__Hi_10);
#line 390 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 393 "bt_array.m"
      {
#line 393 "bt_array.m"
        return mercury__bt_array__succeeded = mercury__bt_array__bsearch_2_6_p_0(mercury__bt_array__TypeInfo_for_T_11, mercury__bt_array__A_5, mercury__bt_array__Lo_9, mercury__bt_array__Hi_10, mercury__bt_array__El_6, mercury__bt_array__Compare_7, mercury__bt_array__I_8);
      }
#line 390 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 390 "bt_array.m"
  }
#line 162 "bt_array.m"
}

#line 154 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__fetch_items_3_f_0(
#line 154 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
#line 154 "bt_array.m"
  MR_Word mercury__bt_array__BTA_5,
#line 154 "bt_array.m"
  MR_Integer mercury__bt_array__N1_6,
#line 154 "bt_array.m"
  MR_Integer mercury__bt_array__N2_7)
#line 154 "bt_array.m"
{
#line 673 "bt_array.m"
  {
#line 673 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 673 "bt_array.m"
    MR_Word mercury__bt_array__Xs_8;

#line 673 "bt_array.m"
    {
#line 673 "bt_array.m"
      mercury__bt_array__fetch_items_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__BTA_5, mercury__bt_array__N1_6, mercury__bt_array__N2_7, &mercury__bt_array__Xs_8);
    }
#line 673 "bt_array.m"
    return mercury__bt_array__Xs_8;
#line 673 "bt_array.m"
  }
#line 154 "bt_array.m"
}

#line 152 "bt_array.m"
void MR_CALL 
mercury__bt_array__fetch_items_4_p_0(
#line 152 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_18,
#line 152 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 152 "bt_array.m"
  MR_Integer mercury__bt_array__Low_8,
#line 152 "bt_array.m"
  MR_Integer mercury__bt_array__High_9,
#line 152 "bt_array.m"
  MR_Word * mercury__bt_array__List_10)
#line 152 "bt_array.m"
{
#line 358 "bt_array.m"
  {
#line 358 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = (mercury__bt_array__Low_8 > mercury__bt_array__High_9);
#line 358 "bt_array.m"
    MR_Integer mercury__bt_array__ALow_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 358 "bt_array.m"
    MR_Integer mercury__bt_array__AHigh_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 358 "bt_array.m"
    MR_Word mercury__bt_array__RaList0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));

#line 363 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 362 "bt_array.m"
      *mercury__bt_array__List_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 363 "bt_array.m"
    else
#line 370 "bt_array.m"
      {
#line 370 "bt_array.m"
        MR_Word mercury__bt_array__List0_14;
#line 364 "bt_array.m"
        MR_Integer mercury__bt_array__Drop_11;
#line 364 "bt_array.m"
        MR_Word mercury__bt_array__RaList_12;
#line 364 "bt_array.m"
        MR_Integer mercury__bt_array__Take_13;
#line 364 "bt_array.m"
        MR_Integer mercury__bt_array__V_15_15;
#line 364 "bt_array.m"
        MR_Integer mercury__bt_array__V_16_16;
#line 364 "bt_array.m"
        MR_Word mercury__bt_array__V_17_17;
#line 364 "bt_array.m"
        MR_Integer mercury__bt_array__V_23_23 = (mercury__bt_array__AHigh_6 - mercury__bt_array__ALow_5);

#line 228 "bt_array.m"
        mercury__bt_array__Drop_11 = (mercury__bt_array__V_23_23 - mercury__bt_array__High_9);
#line 365 "bt_array.m"
        {
#line 365 "bt_array.m"
          mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__Drop_11, mercury__bt_array__RaList0_7, &mercury__bt_array__RaList_12);
        }
#line 364 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 364 "bt_array.m"
          {
#line 366 "bt_array.m"
            mercury__bt_array__V_15_15 = (mercury__bt_array__High_9 - mercury__bt_array__Low_8);
#line 366 "bt_array.m"
            mercury__bt_array__V_16_16 = (MR_Integer) 1;
#line 366 "bt_array.m"
            mercury__bt_array__Take_13 = (mercury__bt_array__V_15_15 + mercury__bt_array__V_16_16);
#line 367 "bt_array.m"
            mercury__bt_array__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 367 "bt_array.m"
            {
#line 367 "bt_array.m"
              mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(mercury__bt_array__Take_13, mercury__bt_array__RaList_12, mercury__bt_array__V_17_17, &mercury__bt_array__List0_14);
            }
#line 367 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 364 "bt_array.m"
          }
#line 370 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 369 "bt_array.m"
          *mercury__bt_array__List_10 = mercury__bt_array__List0_14;
#line 370 "bt_array.m"
        else
#line 371 "bt_array.m"
          *mercury__bt_array__List_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 370 "bt_array.m"
      }
#line 358 "bt_array.m"
  }
#line 152 "bt_array.m"
}

#line 146 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__to_list_1_f_0(
#line 146 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_5,
#line 146 "bt_array.m"
  MR_Word mercury__bt_array__BTA_3)
#line 146 "bt_array.m"
{
#line 344 "bt_array.m"
  {
#line 344 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 344 "bt_array.m"
    MR_Word mercury__bt_array__Xs_4;
#line 344 "bt_array.m"
    MR_Word mercury__bt_array__RaList_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));
#line 344 "bt_array.m"
    MR_Word mercury__bt_array__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "bt_array.m"
    MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
#line 344 "bt_array.m"
    MR_Integer mercury__bt_array__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));

#line 345 "bt_array.m"
    {
#line 345 "bt_array.m"
      mercury__bt_array__reverse_from_ra_list_3_p_0(mercury__bt_array__TypeInfo_for_T_5, mercury__bt_array__RaList_9, mercury__bt_array__V_10_10, &mercury__bt_array__Xs_4);
    }
#line 344 "bt_array.m"
    return mercury__bt_array__Xs_4;
#line 344 "bt_array.m"
  }
#line 146 "bt_array.m"
}

#line 145 "bt_array.m"
void MR_CALL 
mercury__bt_array__to_list_2_p_0(
#line 145 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_8,
#line 145 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 145 "bt_array.m"
  MR_Word * mercury__bt_array__List_6)
#line 145 "bt_array.m"
{
#line 344 "bt_array.m"
  {
#line 344 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 344 "bt_array.m"
    MR_Word mercury__bt_array__RaList_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 344 "bt_array.m"
    MR_Word mercury__bt_array__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "bt_array.m"
    MR_Integer mercury__bt_array__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 344 "bt_array.m"
    MR_Integer mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));

#line 345 "bt_array.m"
    {
#line 345 "bt_array.m"
      mercury__bt_array__reverse_from_ra_list_3_p_0(mercury__bt_array__TypeInfo_for_T_8, mercury__bt_array__RaList_5, mercury__bt_array__V_7_7, mercury__bt_array__List_6);
#line 345 "bt_array.m"
      return;
    }
#line 344 "bt_array.m"
  }
#line 145 "bt_array.m"
}

#line 139 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__from_list_2_f_0(
#line 139 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_7,
#line 139 "bt_array.m"
  MR_Integer mercury__bt_array__N_4,
#line 139 "bt_array.m"
  MR_Word mercury__bt_array__Xs_5)
#line 139 "bt_array.m"
{
#line 667 "bt_array.m"
  {
#line 667 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 667 "bt_array.m"
    MR_Word mercury__bt_array__BTA_6;

#line 667 "bt_array.m"
    {
#line 667 "bt_array.m"
      mercury__bt_array__from_list_3_p_0(mercury__bt_array__TypeInfo_for_T_7, mercury__bt_array__N_4, mercury__bt_array__Xs_5, &mercury__bt_array__BTA_6);
    }
#line 667 "bt_array.m"
    return mercury__bt_array__BTA_6;
#line 667 "bt_array.m"
  }
#line 139 "bt_array.m"
}

#line 138 "bt_array.m"
void MR_CALL 
mercury__bt_array__from_list_3_p_0(
#line 138 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_12,
#line 138 "bt_array.m"
  MR_Integer mercury__bt_array__Low_4,
#line 138 "bt_array.m"
  MR_Word mercury__bt_array__List_5,
#line 138 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__3_3)
#line 138 "bt_array.m"
{
#line 317 "bt_array.m"
  {
#line 317 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 317 "bt_array.m"
    MR_Integer mercury__bt_array__High_6;
#line 317 "bt_array.m"
    MR_Word mercury__bt_array__RaList_7;
#line 317 "bt_array.m"
    MR_Integer mercury__bt_array__Len_8;
#line 317 "bt_array.m"
    MR_Word mercury__bt_array__RaList0_9;
#line 317 "bt_array.m"
    MR_Integer mercury__bt_array__V_10_10;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__bt_array__TypeInfo_for_T_12, mercury__bt_array__List_5, (MR_Integer) 0, &mercury__bt_array__Len_8);
    }
#line 319 "bt_array.m"
    mercury__bt_array__V_10_10 = (mercury__bt_array__Low_4 + mercury__bt_array__Len_8);
#line 319 "bt_array.m"
    mercury__bt_array__High_6 = (mercury__bt_array__V_10_10 - (MR_Integer) 1);
#line 497 "bt_array.m"
    mercury__bt_array__RaList0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 321 "bt_array.m"
    {
#line 321 "bt_array.m"
      mercury__bt_array__reverse_into_ra_list_3_p_0(mercury__bt_array__TypeInfo_for_T_12, mercury__bt_array__List_5, mercury__bt_array__RaList0_9, &mercury__bt_array__RaList_7);
    }
#line 317 "bt_array.m"
    {
#line 317 "bt_array.m"
      MR_Word base;
#line 317 "bt_array.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 317 "bt_array.m"
      *mercury__bt_array__HeadVar__3_3 = base;
#line 317 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_4));
#line 317 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_6));
#line 317 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_7));
#line 317 "bt_array.m"
    }
#line 317 "bt_array.m"
  }
#line 138 "bt_array.m"
}

#line 132 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__shrink_3_f_0(
#line 132 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
#line 132 "bt_array.m"
  MR_Word mercury__bt_array__BT1A_5,
#line 132 "bt_array.m"
  MR_Integer mercury__bt_array__N1_6,
#line 132 "bt_array.m"
  MR_Integer mercury__bt_array__N2_7)
#line 132 "bt_array.m"
{
#line 664 "bt_array.m"
  {
#line 664 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 664 "bt_array.m"
    MR_Word mercury__bt_array__BTA2_8;

#line 664 "bt_array.m"
    {
#line 664 "bt_array.m"
      mercury__bt_array__shrink_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__BT1A_5, mercury__bt_array__N1_6, mercury__bt_array__N2_7, &mercury__bt_array__BTA2_8);
    }
#line 664 "bt_array.m"
    return mercury__bt_array__BTA2_8;
#line 664 "bt_array.m"
  }
#line 132 "bt_array.m"
}

#line 130 "bt_array.m"
void MR_CALL 
mercury__bt_array__shrink_4_p_0(
#line 130 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_24,
#line 130 "bt_array.m"
  MR_Word mercury__bt_array__Array0_5,
#line 130 "bt_array.m"
  MR_Integer mercury__bt_array__L_6,
#line 130 "bt_array.m"
  MR_Integer mercury__bt_array__H_7,
#line 130 "bt_array.m"
  MR_Word * mercury__bt_array__Array_8)
#line 130 "bt_array.m"
{
#line 288 "bt_array.m"
  {
#line 288 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 288 "bt_array.m"
    MR_Integer mercury__bt_array__L0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_5, (MR_Integer) 0)));
#line 288 "bt_array.m"
    MR_Integer mercury__bt_array__H0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_5, (MR_Integer) 1)));
#line 288 "bt_array.m"
    MR_Word mercury__bt_array__RaList0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_5, (MR_Integer) 2)));

#line 290 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__L_6 < mercury__bt_array__L0_9);
#line 290 "bt_array.m"
    if (!(mercury__bt_array__succeeded))
#line 290 "bt_array.m"
      mercury__bt_array__succeeded = (mercury__bt_array__H_7 > mercury__bt_array__H0_10);
#line 292 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 291 "bt_array.m"
      {
#line 291 "bt_array.m"
        {
#line 291 "bt_array.m"
          mercury__require__error_1_p_0((MR_String) "bt_array.shrink: New bounds are larger than old ones");
#line 291 "bt_array.m"
          return;
        }
#line 291 "bt_array.m"
      }
#line 292 "bt_array.m"
    else
#line 302 "bt_array.m"
      {
#line 292 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__L_6 == mercury__bt_array__L0_9);
#line 302 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 295 "bt_array.m"
          {
#line 295 "bt_array.m"
            MR_Integer mercury__bt_array__SizeDiff_12 = (mercury__bt_array__H0_10 - mercury__bt_array__H_7);
#line 295 "bt_array.m"
            MR_Word mercury__bt_array__RaList_14;
#line 298 "bt_array.m"
            MR_Word mercury__bt_array__RaList1_13;

#line 296 "bt_array.m"
            {
#line 296 "bt_array.m"
              mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__SizeDiff_12, mercury__bt_array__RaList0_11, &mercury__bt_array__RaList1_13);
            }
#line 298 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 297 "bt_array.m"
              mercury__bt_array__RaList_14 = mercury__bt_array__RaList1_13;
#line 298 "bt_array.m"
            else
#line 299 "bt_array.m"
              {
#line 299 "bt_array.m"
                {
#line 299 "bt_array.m"
                  mercury__require__error_1_p_0((MR_String) "bt_array.shrink: Can\'t resize to a less-than-empty array");
#line 299 "bt_array.m"
                  return;
                }
#line 299 "bt_array.m"
              }
#line 301 "bt_array.m"
            {
#line 301 "bt_array.m"
              MR_Word base;
#line 301 "bt_array.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 301 "bt_array.m"
              *mercury__bt_array__Array_8 = base;
#line 301 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__L_6));
#line 301 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__H_7));
#line 301 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_14));
#line 301 "bt_array.m"
            }
#line 295 "bt_array.m"
          }
#line 302 "bt_array.m"
        else
#line 307 "bt_array.m"
          {
#line 307 "bt_array.m"
            MR_Box mercury__bt_array__Item_16;
#line 307 "bt_array.m"
            MR_Integer mercury__bt_array__L1_17;
#line 307 "bt_array.m"
            MR_Integer mercury__bt_array__H1_18;
#line 307 "bt_array.m"
            MR_Word mercury__bt_array__Items_19;
#line 307 "bt_array.m"
            MR_Word mercury__bt_array__Array1_20;
#line 307 "bt_array.m"
            MR_Word mercury__bt_array__ListOut_47;
#line 307 "bt_array.m"
            MR_Word mercury__bt_array__ListIn_48;
#line 307 "bt_array.m"
            MR_Integer mercury__bt_array__ElemsToAdd_49;
#line 307 "bt_array.m"
            MR_Integer mercury__bt_array__V_50_50;
#line 305 "bt_array.m"
            MR_Box mercury__bt_array__Item0_15;
#line 514 "bt_array.m"
            MR_Word mercury__bt_array__V_36_36;
#line 514 "bt_array.m"
            MR_Word mercury__bt_array__V_35_35;
#line 514 "bt_array.m"
            MR_Integer mercury__bt_array__V_37_37;

#line 514 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_11)) == (MR_mktag((MR_Integer) 1)));
#line 514 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 514 "bt_array.m"
              {
#line 514 "bt_array.m"
                mercury__bt_array__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_11, (MR_Integer) 0)));
#line 514 "bt_array.m"
                mercury__bt_array__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_11, (MR_Integer) 1)));
#line 514 "bt_array.m"
                mercury__bt_array__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_11, (MR_Integer) 2)));
#line 514 "bt_array.m"
                if (((MR_tag((MR_Word) mercury__bt_array__V_36_36)) == (MR_mktag((MR_Integer) 0))))
#line 514 "bt_array.m"
                  mercury__bt_array__Item0_15 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_36_36, (MR_Integer) 0));
#line 514 "bt_array.m"
                else
#line 515 "bt_array.m"
                  {
#line 515 "bt_array.m"
                    MR_Word mercury__bt_array__V_31_31;
#line 515 "bt_array.m"
                    MR_Word mercury__bt_array__V_32_32;

#line 515 "bt_array.m"
                    mercury__bt_array__Item0_15 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_36_36, (MR_Integer) 0));
#line 515 "bt_array.m"
                    mercury__bt_array__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_36_36, (MR_Integer) 1)));
#line 515 "bt_array.m"
                    mercury__bt_array__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_36_36, (MR_Integer) 2)));
#line 515 "bt_array.m"
                  }
#line 514 "bt_array.m"
                mercury__bt_array__succeeded = MR_TRUE;
#line 514 "bt_array.m"
              }
#line 305 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 304 "bt_array.m"
              mercury__bt_array__Item_16 = mercury__bt_array__Item0_15;
#line 305 "bt_array.m"
            else
#line 306 "bt_array.m"
              {
#line 306 "bt_array.m"
                {
#line 306 "bt_array.m"
                  mercury__require__error_1_p_0((MR_String) "bt_array.shrink: Can\'t shrink an empty array");
#line 306 "bt_array.m"
                  return;
                }
#line 306 "bt_array.m"
              }
#line 75 "int.opt"
            mercury__bt_array__succeeded = (mercury__bt_array__L_6 > mercury__bt_array__L0_9);
#line 78 "int.opt"
            if (mercury__bt_array__succeeded)
#line 77 "int.opt"
              mercury__bt_array__L1_17 = mercury__bt_array__L_6;
#line 78 "int.opt"
            else
#line 79 "int.opt"
              mercury__bt_array__L1_17 = mercury__bt_array__L0_9;
#line 85 "int.opt"
            mercury__bt_array__succeeded = (mercury__bt_array__H_7 < mercury__bt_array__H0_10);
#line 88 "int.opt"
            if (mercury__bt_array__succeeded)
#line 87 "int.opt"
              mercury__bt_array__H1_18 = mercury__bt_array__H_7;
#line 88 "int.opt"
            else
#line 89 "int.opt"
              mercury__bt_array__H1_18 = mercury__bt_array__H0_10;
#line 310 "bt_array.m"
            {
#line 310 "bt_array.m"
              mercury__bt_array__fetch_items_4_p_0(mercury__bt_array__TypeInfo_for_T_24, mercury__bt_array__Array0_5, mercury__bt_array__L1_17, mercury__bt_array__H1_18, &mercury__bt_array__Items_19);
            }
#line 497 "bt_array.m"
            mercury__bt_array__ListIn_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "bt_array.m"
            mercury__bt_array__V_50_50 = (mercury__bt_array__H_7 - mercury__bt_array__L_6);
#line 194 "bt_array.m"
            mercury__bt_array__ElemsToAdd_49 = (mercury__bt_array__V_50_50 + (MR_Integer) 1);
#line 195 "bt_array.m"
            {
#line 195 "bt_array.m"
              mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_24, mercury__bt_array__ElemsToAdd_49, mercury__bt_array__Item_16, mercury__bt_array__ListIn_48, &mercury__bt_array__ListOut_47);
            }
#line 192 "bt_array.m"
            {
#line 192 "bt_array.m"
              mercury__bt_array__Array1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 192 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 0) = ((MR_Box) (mercury__bt_array__L_6));
#line 192 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 1) = ((MR_Box) (mercury__bt_array__H_7));
#line 192 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 2) = ((MR_Box) (mercury__bt_array__ListOut_47));
#line 192 "bt_array.m"
            }
#line 312 "bt_array.m"
            {
#line 312 "bt_array.m"
              mercury__bt_array__insert_items_4_p_0(mercury__bt_array__TypeInfo_for_T_24, mercury__bt_array__Array1_20, mercury__bt_array__L1_17, mercury__bt_array__Items_19, mercury__bt_array__Array_8);
#line 312 "bt_array.m"
              return;
            }
#line 307 "bt_array.m"
          }
#line 302 "bt_array.m"
      }
#line 288 "bt_array.m"
  }
#line 130 "bt_array.m"
}

#line 117 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__resize_4_f_0(
#line 117 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_11,
#line 117 "bt_array.m"
  MR_Word mercury__bt_array__BT1A_6,
#line 117 "bt_array.m"
  MR_Integer mercury__bt_array__N1_7,
#line 117 "bt_array.m"
  MR_Integer mercury__bt_array__N2_8,
#line 117 "bt_array.m"
  MR_Box mercury__bt_array__T_9)
#line 117 "bt_array.m"
{
#line 661 "bt_array.m"
  {
#line 661 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 661 "bt_array.m"
    MR_Word mercury__bt_array__BTA2_10;

#line 661 "bt_array.m"
    {
#line 661 "bt_array.m"
      mercury__bt_array__resize_5_p_0(mercury__bt_array__TypeInfo_for_T_11, mercury__bt_array__BT1A_6, mercury__bt_array__N1_7, mercury__bt_array__N2_8, mercury__bt_array__T_9, &mercury__bt_array__BTA2_10);
    }
#line 661 "bt_array.m"
    return mercury__bt_array__BTA2_10;
#line 661 "bt_array.m"
  }
#line 117 "bt_array.m"
}

#line 115 "bt_array.m"
void MR_CALL 
mercury__bt_array__resize_5_p_0(
#line 115 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_28,
#line 115 "bt_array.m"
  MR_Word mercury__bt_array__Array0_6,
#line 115 "bt_array.m"
  MR_Integer mercury__bt_array__L_7,
#line 115 "bt_array.m"
  MR_Integer mercury__bt_array__H_8,
#line 115 "bt_array.m"
  MR_Box mercury__bt_array__Item_9,
#line 115 "bt_array.m"
  MR_Word * mercury__bt_array__Array_10)
#line 115 "bt_array.m"
{
#line 258 "bt_array.m"
  {
#line 258 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 258 "bt_array.m"
    MR_Integer mercury__bt_array__L0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_6, (MR_Integer) 0)));
#line 258 "bt_array.m"
    MR_Integer mercury__bt_array__H0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_6, (MR_Integer) 1)));
#line 258 "bt_array.m"
    MR_Word mercury__bt_array__RaList0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_6, (MR_Integer) 2)));

#line 260 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__L_7 == mercury__bt_array__L0_11);
#line 280 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 273 "bt_array.m"
      {
#line 264 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__H_8 < mercury__bt_array__H0_12);
#line 273 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 265 "bt_array.m"
          {
#line 265 "bt_array.m"
            MR_Integer mercury__bt_array__SizeDiff_14 = (mercury__bt_array__H0_12 - mercury__bt_array__H_8);
#line 265 "bt_array.m"
            MR_Word mercury__bt_array__RaList_16;
#line 268 "bt_array.m"
            MR_Word mercury__bt_array__RaList1_15;

#line 266 "bt_array.m"
            {
#line 266 "bt_array.m"
              mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__SizeDiff_14, mercury__bt_array__RaList0_13, &mercury__bt_array__RaList1_15);
            }
#line 268 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 267 "bt_array.m"
              mercury__bt_array__RaList_16 = mercury__bt_array__RaList1_15;
#line 268 "bt_array.m"
            else
#line 269 "bt_array.m"
              {
#line 269 "bt_array.m"
                {
#line 269 "bt_array.m"
                  mercury__require__error_1_p_0((MR_String) "bt_array.resize: Can\'t resize to a less-than-empty array");
#line 269 "bt_array.m"
                  return;
                }
#line 269 "bt_array.m"
              }
#line 272 "bt_array.m"
            {
#line 272 "bt_array.m"
              MR_Word base;
#line 272 "bt_array.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 272 "bt_array.m"
              *mercury__bt_array__Array_10 = base;
#line 272 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__L_7));
#line 272 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__H_8));
#line 272 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_16));
#line 272 "bt_array.m"
            }
#line 265 "bt_array.m"
          }
#line 273 "bt_array.m"
        else
#line 277 "bt_array.m"
          {
#line 273 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__H_8 > mercury__bt_array__H0_12);
#line 277 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 274 "bt_array.m"
              {
#line 274 "bt_array.m"
                MR_Integer mercury__bt_array__SizeDiff_24 = (mercury__bt_array__H_8 - mercury__bt_array__H0_12);
#line 274 "bt_array.m"
                MR_Word mercury__bt_array__RaList_25;

#line 275 "bt_array.m"
                {
#line 275 "bt_array.m"
                  mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__SizeDiff_24, mercury__bt_array__Item_9, mercury__bt_array__RaList0_13, &mercury__bt_array__RaList_25);
                }
#line 276 "bt_array.m"
                {
#line 276 "bt_array.m"
                  MR_Word base;
#line 276 "bt_array.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 276 "bt_array.m"
                  *mercury__bt_array__Array_10 = base;
#line 276 "bt_array.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__L_7));
#line 276 "bt_array.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__H_8));
#line 276 "bt_array.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_25));
#line 276 "bt_array.m"
                }
#line 274 "bt_array.m"
              }
#line 277 "bt_array.m"
            else
#line 278 "bt_array.m"
              *mercury__bt_array__Array_10 = mercury__bt_array__Array0_6;
#line 277 "bt_array.m"
          }
#line 273 "bt_array.m"
      }
#line 280 "bt_array.m"
    else
#line 281 "bt_array.m"
      {
#line 281 "bt_array.m"
        MR_Integer mercury__bt_array__L1_17;
#line 281 "bt_array.m"
        MR_Integer mercury__bt_array__H1_18;
#line 281 "bt_array.m"
        MR_Word mercury__bt_array__Items_19;
#line 281 "bt_array.m"
        MR_Word mercury__bt_array__Array1_20;
#line 281 "bt_array.m"
        MR_Word mercury__bt_array__ListOut_38;
#line 281 "bt_array.m"
        MR_Word mercury__bt_array__ListIn_39;
#line 281 "bt_array.m"
        MR_Integer mercury__bt_array__ElemsToAdd_40;
#line 281 "bt_array.m"
        MR_Integer mercury__bt_array__V_41_41;

#line 75 "int.opt"
        mercury__bt_array__succeeded = (mercury__bt_array__L_7 > mercury__bt_array__L0_11);
#line 78 "int.opt"
        if (mercury__bt_array__succeeded)
#line 77 "int.opt"
          mercury__bt_array__L1_17 = mercury__bt_array__L_7;
#line 78 "int.opt"
        else
#line 79 "int.opt"
          mercury__bt_array__L1_17 = mercury__bt_array__L0_11;
#line 85 "int.opt"
        mercury__bt_array__succeeded = (mercury__bt_array__H_8 < mercury__bt_array__H0_12);
#line 88 "int.opt"
        if (mercury__bt_array__succeeded)
#line 87 "int.opt"
          mercury__bt_array__H1_18 = mercury__bt_array__H_8;
#line 88 "int.opt"
        else
#line 89 "int.opt"
          mercury__bt_array__H1_18 = mercury__bt_array__H0_12;
#line 283 "bt_array.m"
        {
#line 283 "bt_array.m"
          mercury__bt_array__fetch_items_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__Array0_6, mercury__bt_array__L1_17, mercury__bt_array__H1_18, &mercury__bt_array__Items_19);
        }
#line 497 "bt_array.m"
        mercury__bt_array__ListIn_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "bt_array.m"
        mercury__bt_array__V_41_41 = (mercury__bt_array__H_8 - mercury__bt_array__L_7);
#line 194 "bt_array.m"
        mercury__bt_array__ElemsToAdd_40 = (mercury__bt_array__V_41_41 + (MR_Integer) 1);
#line 195 "bt_array.m"
        {
#line 195 "bt_array.m"
          mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__ElemsToAdd_40, mercury__bt_array__Item_9, mercury__bt_array__ListIn_39, &mercury__bt_array__ListOut_38);
        }
#line 192 "bt_array.m"
        {
#line 192 "bt_array.m"
          mercury__bt_array__Array1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 192 "bt_array.m"
          MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 0) = ((MR_Box) (mercury__bt_array__L_7));
#line 192 "bt_array.m"
          MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 1) = ((MR_Box) (mercury__bt_array__H_8));
#line 192 "bt_array.m"
          MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 2) = ((MR_Box) (mercury__bt_array__ListOut_38));
#line 192 "bt_array.m"
        }
#line 285 "bt_array.m"
        {
#line 285 "bt_array.m"
          mercury__bt_array__insert_items_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__Array1_20, mercury__bt_array__L1_17, mercury__bt_array__Items_19, mercury__bt_array__Array_10);
#line 285 "bt_array.m"
          return;
        }
#line 281 "bt_array.m"
      }
#line 258 "bt_array.m"
  }
#line 115 "bt_array.m"
}

#line 101 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__semidet_set_4_p_0(
#line 101 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_12,
#line 101 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 101 "bt_array.m"
  MR_Integer mercury__bt_array__Index_8,
#line 101 "bt_array.m"
  MR_Box mercury__bt_array__Item_9,
#line 101 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__4_4)
#line 101 "bt_array.m"
{
#line 252 "bt_array.m"
  {
#line 252 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 252 "bt_array.m"
    MR_Integer mercury__bt_array__Low_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "bt_array.m"
    MR_Integer mercury__bt_array__High_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "bt_array.m"
    MR_Word mercury__bt_array__RaListIn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 252 "bt_array.m"
    MR_Word mercury__bt_array__RaListOut_10;
#line 252 "bt_array.m"
    MR_Integer mercury__bt_array__Pos_11;
#line 252 "bt_array.m"
    MR_Integer mercury__bt_array__V_17_17 = (mercury__bt_array__High_6 - mercury__bt_array__Low_5);

#line 228 "bt_array.m"
    mercury__bt_array__Pos_11 = (mercury__bt_array__V_17_17 - mercury__bt_array__Index_8);
#line 572 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_11 >= (MR_Integer) 0);
#line 252 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 252 "bt_array.m"
      {
#line 573 "bt_array.m"
        {
#line 573 "bt_array.m"
          mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_12, mercury__bt_array__RaListIn_7, mercury__bt_array__Pos_11, mercury__bt_array__Item_9, &mercury__bt_array__RaListOut_10);
        }
#line 252 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 252 "bt_array.m"
          {
#line 252 "bt_array.m"
            {
#line 252 "bt_array.m"
              MR_Word base;
#line 252 "bt_array.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 252 "bt_array.m"
              *mercury__bt_array__HeadVar__4_4 = base;
#line 252 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_5));
#line 252 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_6));
#line 252 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaListOut_10));
#line 252 "bt_array.m"
            }
#line 252 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 252 "bt_array.m"
          }
#line 252 "bt_array.m"
      }
#line 252 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 252 "bt_array.m"
  }
#line 101 "bt_array.m"
}

#line 95 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__set_3_f_0(
#line 95 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
#line 95 "bt_array.m"
  MR_Word mercury__bt_array__BT1A_5,
#line 95 "bt_array.m"
  MR_Integer mercury__bt_array__N_6,
#line 95 "bt_array.m"
  MR_Box mercury__bt_array__T_7)
#line 95 "bt_array.m"
{
#line 658 "bt_array.m"
  {
#line 658 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 658 "bt_array.m"
    MR_Word mercury__bt_array__BTA2_8;

#line 658 "bt_array.m"
    {
#line 658 "bt_array.m"
      mercury__bt_array__set_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__BT1A_5, mercury__bt_array__N_6, mercury__bt_array__T_7, &mercury__bt_array__BTA2_8);
    }
#line 658 "bt_array.m"
    return mercury__bt_array__BTA2_8;
#line 658 "bt_array.m"
  }
#line 95 "bt_array.m"
}

#line 93 "bt_array.m"
void MR_CALL 
mercury__bt_array__set_4_p_0(
#line 93 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_11,
#line 93 "bt_array.m"
  MR_Word mercury__bt_array__BtArray0_5,
#line 93 "bt_array.m"
  MR_Integer mercury__bt_array__Index_6,
#line 93 "bt_array.m"
  MR_Box mercury__bt_array__Item_7,
#line 93 "bt_array.m"
  MR_Word * mercury__bt_array__BtArray_8)
#line 93 "bt_array.m"
{
#line 247 "bt_array.m"
  {
#line 247 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 247 "bt_array.m"
    MR_Word mercury__bt_array__BtArray1_9;
#line 252 "bt_array.m"
    MR_Integer mercury__bt_array__Low_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray0_5, (MR_Integer) 0)));
#line 252 "bt_array.m"
    MR_Integer mercury__bt_array__High_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray0_5, (MR_Integer) 1)));
#line 252 "bt_array.m"
    MR_Word mercury__bt_array__RaListIn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray0_5, (MR_Integer) 2)));
#line 252 "bt_array.m"
    MR_Word mercury__bt_array__RaListOut_17;
#line 252 "bt_array.m"
    MR_Integer mercury__bt_array__Pos_18;
#line 252 "bt_array.m"
    MR_Integer mercury__bt_array__V_23_23 = (mercury__bt_array__High_15 - mercury__bt_array__Low_14);

#line 228 "bt_array.m"
    mercury__bt_array__Pos_18 = (mercury__bt_array__V_23_23 - mercury__bt_array__Index_6);
#line 572 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_18 >= (MR_Integer) 0);
#line 252 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 252 "bt_array.m"
      {
#line 573 "bt_array.m"
        {
#line 573 "bt_array.m"
          mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_11, mercury__bt_array__RaListIn_16, mercury__bt_array__Pos_18, mercury__bt_array__Item_7, &mercury__bt_array__RaListOut_17);
        }
#line 252 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 252 "bt_array.m"
          {
#line 252 "bt_array.m"
            {
#line 252 "bt_array.m"
              mercury__bt_array__BtArray1_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 252 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray1_9, 0) = ((MR_Box) (mercury__bt_array__Low_14));
#line 252 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray1_9, 1) = ((MR_Box) (mercury__bt_array__High_15));
#line 252 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray1_9, 2) = ((MR_Box) (mercury__bt_array__RaListOut_17));
#line 252 "bt_array.m"
            }
#line 252 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 252 "bt_array.m"
          }
#line 252 "bt_array.m"
      }
#line 247 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 246 "bt_array.m"
      *mercury__bt_array__BtArray_8 = mercury__bt_array__BtArray1_9;
#line 247 "bt_array.m"
    else
#line 248 "bt_array.m"
      {
#line 248 "bt_array.m"
        {
#line 248 "bt_array.m"
          mercury__require__error_1_p_0((MR_String) "bt_array.set: index out of bounds");
#line 248 "bt_array.m"
          return;
        }
#line 248 "bt_array.m"
      }
#line 247 "bt_array.m"
  }
#line 93 "bt_array.m"
}

#line 88 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__semidet_lookup_3_p_0(
#line 88 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
#line 88 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 88 "bt_array.m"
  MR_Integer mercury__bt_array__Index_7,
#line 88 "bt_array.m"
  MR_Box * mercury__bt_array__Item_8)
#line 88 "bt_array.m"
{
#line 238 "bt_array.m"
  {
#line 238 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 238 "bt_array.m"
    MR_Integer mercury__bt_array__Low_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "bt_array.m"
    MR_Integer mercury__bt_array__High_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "bt_array.m"
    MR_Word mercury__bt_array__RaList_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 238 "bt_array.m"
    MR_Integer mercury__bt_array__Pos_9;
#line 238 "bt_array.m"
    MR_Integer mercury__bt_array__V_15_15 = (mercury__bt_array__High_5 - mercury__bt_array__Low_4);

#line 228 "bt_array.m"
    mercury__bt_array__Pos_9 = (mercury__bt_array__V_15_15 - mercury__bt_array__Index_7);
#line 536 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_9 >= (MR_Integer) 0);
#line 238 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 537 "bt_array.m"
      {
#line 537 "bt_array.m"
        return mercury__bt_array__succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(mercury__bt_array__TypeInfo_for_T_10, mercury__bt_array__Pos_9, mercury__bt_array__RaList_6, mercury__bt_array__Item_8);
      }
#line 238 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 238 "bt_array.m"
  }
#line 88 "bt_array.m"
}

#line 83 "bt_array.m"
MR_Box MR_CALL 
mercury__bt_array__lookup_2_f_0(
#line 83 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_7,
#line 83 "bt_array.m"
  MR_Word mercury__bt_array__BTA_4,
#line 83 "bt_array.m"
  MR_Integer mercury__bt_array__N_5)
#line 83 "bt_array.m"
{
#line 655 "bt_array.m"
  {
#line 655 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 655 "bt_array.m"
    MR_Box mercury__bt_array__T_6;

#line 655 "bt_array.m"
    {
#line 655 "bt_array.m"
      mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_7, mercury__bt_array__BTA_4, mercury__bt_array__N_5, &mercury__bt_array__T_6);
    }
#line 655 "bt_array.m"
    return mercury__bt_array__T_6;
#line 655 "bt_array.m"
  }
#line 83 "bt_array.m"
}

#line 82 "bt_array.m"
void MR_CALL 
mercury__bt_array__lookup_3_p_0(
#line 82 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_12,
#line 82 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 82 "bt_array.m"
  MR_Integer mercury__bt_array__Index_7,
#line 82 "bt_array.m"
  MR_Box * mercury__bt_array__Item_8)
#line 82 "bt_array.m"
{
#line 230 "bt_array.m"
  {
#line 230 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 230 "bt_array.m"
    MR_Integer mercury__bt_array__Low_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 230 "bt_array.m"
    MR_Integer mercury__bt_array__High_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 230 "bt_array.m"
    MR_Word mercury__bt_array__RaList_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 230 "bt_array.m"
    MR_Integer mercury__bt_array__Pos_9;
#line 230 "bt_array.m"
    MR_Integer mercury__bt_array__V_17_17 = (mercury__bt_array__High_5 - mercury__bt_array__Low_4);
#line 234 "bt_array.m"
    MR_Box mercury__bt_array__Item0_10;

#line 228 "bt_array.m"
    mercury__bt_array__Pos_9 = (mercury__bt_array__V_17_17 - mercury__bt_array__Index_7);
#line 536 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_9 >= (MR_Integer) 0);
#line 535 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 537 "bt_array.m"
      {
#line 537 "bt_array.m"
        mercury__bt_array__succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(mercury__bt_array__TypeInfo_for_T_12, mercury__bt_array__Pos_9, mercury__bt_array__RaList_6, &mercury__bt_array__Item0_10);
      }
#line 234 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 233 "bt_array.m"
      *mercury__bt_array__Item_8 = mercury__bt_array__Item0_10;
#line 234 "bt_array.m"
    else
#line 235 "bt_array.m"
      {
#line 235 "bt_array.m"
        {
#line 235 "bt_array.m"
          mercury__require__error_1_p_0((MR_String) "bt_array.lookup: Array subscript out of bounds");
#line 235 "bt_array.m"
          return;
        }
#line 235 "bt_array.m"
      }
#line 230 "bt_array.m"
  }
#line 82 "bt_array.m"
}

#line 75 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__in_bounds_2_p_0(
#line 75 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_7,
#line 75 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 75 "bt_array.m"
  MR_Integer mercury__bt_array__Index_6)
#line 75 "bt_array.m"
{
#line 219 "bt_array.m"
  {
#line 219 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 219 "bt_array.m"
    MR_Integer mercury__bt_array__Low_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 219 "bt_array.m"
    MR_Integer mercury__bt_array__High_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 219 "bt_array.m"
    MR_Word mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));

#line 220 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Low_3 <= mercury__bt_array__Index_6);
#line 219 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 220 "bt_array.m"
      mercury__bt_array__succeeded = (mercury__bt_array__Index_6 <= mercury__bt_array__High_4);
#line 219 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 219 "bt_array.m"
  }
#line 75 "bt_array.m"
}

#line 70 "bt_array.m"
void MR_CALL 
mercury__bt_array__bounds_3_p_0(
#line 70 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_7,
#line 70 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 70 "bt_array.m"
  MR_Integer * mercury__bt_array__Low_4,
#line 70 "bt_array.m"
  MR_Integer * mercury__bt_array__High_5)
#line 70 "bt_array.m"
{
#line 217 "bt_array.m"
  {
#line 217 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 217 "bt_array.m"
    MR_Word mercury__bt_array__V_6_6;

#line 217 "bt_array.m"
    *mercury__bt_array__Low_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "bt_array.m"
    *mercury__bt_array__High_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "bt_array.m"
    mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 217 "bt_array.m"
  }
#line 70 "bt_array.m"
}

#line 66 "bt_array.m"
MR_Integer MR_CALL 
mercury__bt_array__size_1_f_0(
#line 66 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_5,
#line 66 "bt_array.m"
  MR_Word mercury__bt_array__BTA_3)
#line 66 "bt_array.m"
{
#line 214 "bt_array.m"
  {
#line 214 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 214 "bt_array.m"
    MR_Integer mercury__bt_array__N_4;
#line 214 "bt_array.m"
    MR_Integer mercury__bt_array__Low_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
#line 214 "bt_array.m"
    MR_Integer mercury__bt_array__High_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));
#line 214 "bt_array.m"
    MR_Integer mercury__bt_array__V_10_10 = (mercury__bt_array__High_8 - mercury__bt_array__Low_7);
#line 214 "bt_array.m"
    MR_Word mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));

#line 215 "bt_array.m"
    mercury__bt_array__N_4 = (mercury__bt_array__V_10_10 + (MR_Integer) 1);
#line 214 "bt_array.m"
    return mercury__bt_array__N_4;
#line 214 "bt_array.m"
  }
#line 66 "bt_array.m"
}

#line 65 "bt_array.m"
void MR_CALL 
mercury__bt_array__size_2_p_0(
#line 65 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_9,
#line 65 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 65 "bt_array.m"
  MR_Integer * mercury__bt_array__Size_6)
#line 65 "bt_array.m"
{
#line 214 "bt_array.m"
  {
#line 214 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 214 "bt_array.m"
    MR_Integer mercury__bt_array__Low_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 214 "bt_array.m"
    MR_Integer mercury__bt_array__High_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "bt_array.m"
    MR_Integer mercury__bt_array__V_7_7 = (mercury__bt_array__High_4 - mercury__bt_array__Low_3);
#line 214 "bt_array.m"
    MR_Word mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));

#line 215 "bt_array.m"
    *mercury__bt_array__Size_6 = (mercury__bt_array__V_7_7 + (MR_Integer) 1);
#line 214 "bt_array.m"
  }
#line 65 "bt_array.m"
}

#line 60 "bt_array.m"
MR_Integer MR_CALL 
mercury__bt_array__max_1_f_0(
#line 60 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_5,
#line 60 "bt_array.m"
  MR_Word mercury__bt_array__BTA_3)
#line 60 "bt_array.m"
{
#line 212 "bt_array.m"
  {
#line 212 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 212 "bt_array.m"
    MR_Integer mercury__bt_array__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));
#line 212 "bt_array.m"
    MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
#line 212 "bt_array.m"
    MR_Word mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));

#line 212 "bt_array.m"
    return mercury__bt_array__N_4;
#line 212 "bt_array.m"
  }
#line 60 "bt_array.m"
}

#line 59 "bt_array.m"
void MR_CALL 
mercury__bt_array__max_2_p_0(
#line 59 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_6,
#line 59 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 59 "bt_array.m"
  MR_Integer * mercury__bt_array__High_4)
#line 59 "bt_array.m"
{
#line 212 "bt_array.m"
  {
#line 212 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 212 "bt_array.m"
    MR_Integer mercury__bt_array__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 212 "bt_array.m"
    MR_Word mercury__bt_array__V_5_5;

#line 212 "bt_array.m"
    *mercury__bt_array__High_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 212 "bt_array.m"
    mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 212 "bt_array.m"
  }
#line 59 "bt_array.m"
}

#line 55 "bt_array.m"
MR_Integer MR_CALL 
mercury__bt_array__min_1_f_0(
#line 55 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_5,
#line 55 "bt_array.m"
  MR_Word mercury__bt_array__BTA_3)
#line 55 "bt_array.m"
{
#line 210 "bt_array.m"
  {
#line 210 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 210 "bt_array.m"
    MR_Integer mercury__bt_array__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
#line 210 "bt_array.m"
    MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));
#line 210 "bt_array.m"
    MR_Word mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));

#line 210 "bt_array.m"
    return mercury__bt_array__N_4;
#line 210 "bt_array.m"
  }
#line 55 "bt_array.m"
}

#line 54 "bt_array.m"
void MR_CALL 
mercury__bt_array__min_2_p_0(
#line 54 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_6,
#line 54 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 54 "bt_array.m"
  MR_Integer * mercury__bt_array__Low_3)
#line 54 "bt_array.m"
{
#line 210 "bt_array.m"
  {
#line 210 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 210 "bt_array.m"
    MR_Integer mercury__bt_array__V_4_4;
#line 210 "bt_array.m"
    MR_Word mercury__bt_array__V_5_5;

#line 210 "bt_array.m"
    *mercury__bt_array__Low_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "bt_array.m"
    mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "bt_array.m"
    mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 210 "bt_array.m"
  }
#line 54 "bt_array.m"
}

#line 48 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__init_3_f_0(
#line 48 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
#line 48 "bt_array.m"
  MR_Integer mercury__bt_array__N1_5,
#line 48 "bt_array.m"
  MR_Integer mercury__bt_array__N2_6,
#line 48 "bt_array.m"
  MR_Box mercury__bt_array__T_7)
#line 48 "bt_array.m"
{
#line 192 "bt_array.m"
  {
#line 192 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 192 "bt_array.m"
    MR_Word mercury__bt_array__BTA_8;
#line 192 "bt_array.m"
    MR_Word mercury__bt_array__ListOut_13;
#line 192 "bt_array.m"
    MR_Word mercury__bt_array__ListIn_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "bt_array.m"
    MR_Integer mercury__bt_array__ElemsToAdd_15;
#line 192 "bt_array.m"
    MR_Integer mercury__bt_array__V_16_16 = (mercury__bt_array__N2_6 - mercury__bt_array__N1_5);

#line 194 "bt_array.m"
    mercury__bt_array__ElemsToAdd_15 = (mercury__bt_array__V_16_16 + (MR_Integer) 1);
#line 195 "bt_array.m"
    {
#line 195 "bt_array.m"
      mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__ElemsToAdd_15, mercury__bt_array__T_7, mercury__bt_array__ListIn_14, &mercury__bt_array__ListOut_13);
    }
#line 192 "bt_array.m"
    {
#line 192 "bt_array.m"
      mercury__bt_array__BTA_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 192 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_8, 0) = ((MR_Box) (mercury__bt_array__N1_5));
#line 192 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_8, 1) = ((MR_Box) (mercury__bt_array__N2_6));
#line 192 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_8, 2) = ((MR_Box) (mercury__bt_array__ListOut_13));
#line 192 "bt_array.m"
    }
#line 192 "bt_array.m"
    return mercury__bt_array__BTA_8;
#line 192 "bt_array.m"
  }
#line 48 "bt_array.m"
}

#line 47 "bt_array.m"
void MR_CALL 
mercury__bt_array__init_4_p_0(
#line 47 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
#line 47 "bt_array.m"
  MR_Integer mercury__bt_array__Low_5,
#line 47 "bt_array.m"
  MR_Integer mercury__bt_array__High_6,
#line 47 "bt_array.m"
  MR_Box mercury__bt_array__Item_7,
#line 47 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__4_4)
#line 47 "bt_array.m"
{
#line 192 "bt_array.m"
  {
#line 192 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 192 "bt_array.m"
    MR_Word mercury__bt_array__ListOut_8;
#line 192 "bt_array.m"
    MR_Word mercury__bt_array__ListIn_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "bt_array.m"
    MR_Integer mercury__bt_array__ElemsToAdd_10;
#line 192 "bt_array.m"
    MR_Integer mercury__bt_array__V_11_11 = (mercury__bt_array__High_6 - mercury__bt_array__Low_5);

#line 194 "bt_array.m"
    mercury__bt_array__ElemsToAdd_10 = (mercury__bt_array__V_11_11 + (MR_Integer) 1);
#line 195 "bt_array.m"
    {
#line 195 "bt_array.m"
      mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__ElemsToAdd_10, mercury__bt_array__Item_7, mercury__bt_array__ListIn_9, &mercury__bt_array__ListOut_8);
    }
#line 192 "bt_array.m"
    {
#line 192 "bt_array.m"
      MR_Word base;
#line 192 "bt_array.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 192 "bt_array.m"
      *mercury__bt_array__HeadVar__4_4 = base;
#line 192 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_5));
#line 192 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_6));
#line 192 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__ListOut_8));
#line 192 "bt_array.m"
    }
#line 192 "bt_array.m"
  }
#line 47 "bt_array.m"
}

#line 42 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__make_empty_array_1_f_0(
#line 42 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_5,
#line 42 "bt_array.m"
  MR_Integer mercury__bt_array__N_3)
#line 42 "bt_array.m"
{
#line 188 "bt_array.m"
  {
#line 188 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 188 "bt_array.m"
    MR_Word mercury__bt_array__BTA_4;
#line 188 "bt_array.m"
    MR_Integer mercury__bt_array__High_7 = (mercury__bt_array__N_3 - (MR_Integer) 1);
#line 188 "bt_array.m"
    MR_Word mercury__bt_array__ListOut_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 188 "bt_array.m"
    {
#line 188 "bt_array.m"
      mercury__bt_array__BTA_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 188 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_4, 0) = ((MR_Box) (mercury__bt_array__N_3));
#line 188 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_4, 1) = ((MR_Box) (mercury__bt_array__High_7));
#line 188 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_4, 2) = ((MR_Box) (mercury__bt_array__ListOut_8));
#line 188 "bt_array.m"
    }
#line 188 "bt_array.m"
    return mercury__bt_array__BTA_4;
#line 188 "bt_array.m"
  }
#line 42 "bt_array.m"
}

#line 41 "bt_array.m"
void MR_CALL 
mercury__bt_array__make_empty_array_2_p_0(
#line 41 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_7,
#line 41 "bt_array.m"
  MR_Integer mercury__bt_array__Low_3,
#line 41 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__2_2)
#line 41 "bt_array.m"
{
#line 188 "bt_array.m"
  {
#line 188 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 188 "bt_array.m"
    MR_Integer mercury__bt_array__High_4 = (mercury__bt_array__Low_3 - (MR_Integer) 1);
#line 188 "bt_array.m"
    MR_Word mercury__bt_array__ListOut_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 188 "bt_array.m"
    {
#line 188 "bt_array.m"
      MR_Word base;
#line 188 "bt_array.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 188 "bt_array.m"
      *mercury__bt_array__HeadVar__2_2 = base;
#line 188 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_3));
#line 188 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_4));
#line 188 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__ListOut_5));
#line 188 "bt_array.m"
    }
#line 188 "bt_array.m"
  }
#line 41 "bt_array.m"
}

void mercury__bt_array__init(void)
{
}

void mercury__bt_array__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bt_array__bt_array__type_ctor_info_bt_array_1);
	MR_register_type_ctor_info(&mercury__bt_array__bt_array__type_ctor_info_ra_list_1);
	MR_register_type_ctor_info(&mercury__bt_array__bt_array__type_ctor_info_ra_list_bintree_1);
}

void mercury__bt_array__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bt_array. */
