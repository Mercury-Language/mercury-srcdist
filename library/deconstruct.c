/*
** Automatically generated from `deconstruct.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


/* :- module deconstruct. */
/* :- implementation. */

/*
INIT mercury__deconstruct__init
ENDINIT
*/

#include "deconstruct.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
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




#line 90 "deconstruct.c"
static const MR_PseudoTypeInfo mercury__deconstruct__deconstruct__field_types_maybe_arg_0_0[1];

#line 93 "deconstruct.c"
static const MR_DuExistLocn mercury__deconstruct__deconstruct__exist_locns_maybe_arg_0_0[1];

#line 96 "deconstruct.c"
static const MR_DuExistInfo mercury__deconstruct__deconstruct__exist_info_maybe_arg_0_0;

#line 99 "deconstruct.c"
static const MR_DuFunctorDesc mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_0;

#line 102 "deconstruct.c"
static const MR_DuFunctorDesc mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_1;

#line 105 "deconstruct.c"
static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_0[1];

#line 108 "deconstruct.c"
static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_1[1];

#line 111 "deconstruct.c"
static const MR_DuPtagLayout mercury__deconstruct__deconstruct__du_ptag_ordered_maybe_arg_0[2];

#line 114 "deconstruct.c"
static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_name_ordered_maybe_arg_0[2];

#line 117 "deconstruct.c"
static const MR_Integer mercury__deconstruct__deconstruct__functor_number_map_maybe_arg_0[2];

#line 120 "deconstruct.c"
static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_0;

#line 123 "deconstruct.c"
static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_1;

#line 126 "deconstruct.c"
static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_2;

#line 129 "deconstruct.c"
static const MR_EnumFunctorDescPtr mercury__deconstruct__deconstruct__enum_value_ordered_noncanon_handling_0[3];

#line 132 "deconstruct.c"
static const MR_EnumFunctorDescPtr mercury__deconstruct__deconstruct__enum_name_ordered_noncanon_handling_0[3];

#line 135 "deconstruct.c"
static const MR_Integer mercury__deconstruct__deconstruct__functor_number_map_noncanon_handling_0[3];

#line 138 "deconstruct.c"
static MR_bool MR_CALL 
mercury__deconstruct____Unify____maybe_arg_0_0_10001(
#line 141 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_1,
#line 143 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_2);

#line 146 "deconstruct.c"
static void MR_CALL 
mercury__deconstruct____Compare____maybe_arg_0_0_10001(
#line 149 "deconstruct.c"
  MR_Box * mercury__deconstruct__wrapper_arg_1,
#line 151 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_2,
#line 153 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_3);

#line 156 "deconstruct.c"
static MR_bool MR_CALL 
mercury__deconstruct____Unify____noncanon_handling_0_0_10001(
#line 159 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_1,
#line 161 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_2);

#line 164 "deconstruct.c"
static void MR_CALL 
mercury__deconstruct____Compare____noncanon_handling_0_0_10001(
#line 167 "deconstruct.c"
  MR_Box * mercury__deconstruct__wrapper_arg_1,
#line 169 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_2,
#line 171 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 842 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_can_5_p_0(
#line 842 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 842 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 842 "deconstruct.m"
  MR_Integer mercury__deconstruct__HeadVar__2_2,
#line 842 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__3_3,
#line 842 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__4_4,
#line 842 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__5_5);

#line 840 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_dna_5_p_0(
#line 840 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 840 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 840 "deconstruct.m"
  MR_Integer mercury__deconstruct__HeadVar__2_2,
#line 840 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__3_3,
#line 840 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__4_4,
#line 840 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__5_5);

#line 837 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__deconstruct_idcc_5_p_0(
#line 837 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 837 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 837 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 837 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3,
#line 837 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__4_4,
#line 837 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__5_5);

#line 836 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__deconstruct_can_4_p_0(
#line 836 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_11,
#line 836 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 836 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 836 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3,
#line 836 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__4_4);

#line 834 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__deconstruct_dna_5_p_0(
#line 834 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 834 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 834 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 834 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3,
#line 834 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__4_4,
#line 834 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__5_5);

#line 642 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__univ_named_arg_idcc_5_p_0(
#line 642 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 642 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 642 "deconstruct.m"
  MR_String mercury__deconstruct__HeadVar__2_2,
#line 642 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__3_3,
#line 642 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__4_4,
#line 642 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__5_5);

#line 634 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__univ_named_arg_can_3_p_0(
#line 634 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_8,
#line 634 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 634 "deconstruct.m"
  MR_String mercury__deconstruct__HeadVar__2_2,
#line 634 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__3_3);

#line 633 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__univ_named_arg_dna_3_p_0(
#line 633 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_8,
#line 633 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 633 "deconstruct.m"
  MR_String mercury__deconstruct__HeadVar__2_2,
#line 633 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__3_3);

#line 630 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__univ_arg_idcc_5_p_0(
#line 630 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_17,
#line 630 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 630 "deconstruct.m"
  MR_Integer mercury__deconstruct__HeadVar__2_2,
#line 630 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__3_3,
#line 630 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__4_4,
#line 630 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__5_5);

#line 622 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__univ_arg_can_3_p_0(
#line 622 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 622 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 622 "deconstruct.m"
  MR_Integer mercury__deconstruct__HeadVar__2_2,
#line 622 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__3_3);

#line 621 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__univ_arg_dna_3_p_0(
#line 621 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 621 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 621 "deconstruct.m"
  MR_Integer mercury__deconstruct__HeadVar__2_2,
#line 621 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__3_3);

#line 494 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__functor_idcc_3_p_0(
#line 494 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_10,
#line 494 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 494 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 494 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3);

#line 493 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__functor_can_3_p_0(
#line 493 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_10,
#line 493 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 493 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 493 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3);

#line 492 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__functor_dna_3_p_0(
#line 492 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_10,
#line 492 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 492 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 492 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3);


static /* final */ const MR_Box mercury__deconstruct_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__deconstruct_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__deconstruct_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__deconstruct_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__deconstruct_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__deconstruct_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__deconstruct_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__deconstruct_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__deconstruct_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "deconstruct.mh"
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



#line 737 "deconstruct.c"
static const MR_PseudoTypeInfo mercury__deconstruct__deconstruct__field_types_maybe_arg_0_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 742 "deconstruct.c"
static const MR_DuExistLocn mercury__deconstruct__deconstruct__exist_locns_maybe_arg_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) -1
  }
};

#line 750 "deconstruct.c"
static const MR_DuExistInfo mercury__deconstruct__deconstruct__exist_info_maybe_arg_0_0 = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__deconstruct__deconstruct__exist_locns_maybe_arg_0_0,
  NULL
};

#line 759 "deconstruct.c"
static const MR_DuFunctorDesc mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_0 = {
  (MR_String) "arg",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__deconstruct__deconstruct__field_types_maybe_arg_0_0,
  NULL,
  NULL,
  &mercury__deconstruct__deconstruct__exist_info_maybe_arg_0_0
};

#line 774 "deconstruct.c"
static const MR_DuFunctorDesc mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_1 = {
  (MR_String) "no_arg",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 789 "deconstruct.c"
static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_0[1] = {
  &mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_1
};

#line 794 "deconstruct.c"
static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_1[1] = {
  &mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_0
};

#line 799 "deconstruct.c"
static const MR_DuPtagLayout mercury__deconstruct__deconstruct__du_ptag_ordered_maybe_arg_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_1
  }
};

#line 813 "deconstruct.c"
static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_name_ordered_maybe_arg_0[2] = {
  &mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_0,
  &mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_1
};

#line 819 "deconstruct.c"
static const MR_Integer mercury__deconstruct__deconstruct__functor_number_map_maybe_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 825 "deconstruct.c"
const MR_TypeCtorInfo_Struct mercury__deconstruct__deconstruct__type_ctor_info_maybe_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__deconstruct____Unify____maybe_arg_0_0_10001)),
  ((MR_Box) (mercury__deconstruct____Compare____maybe_arg_0_0_10001)),
  (MR_String) "deconstruct",
  (MR_String) "maybe_arg",
  {
    mercury__deconstruct__deconstruct__du_name_ordered_maybe_arg_0
  },
  {
    mercury__deconstruct__deconstruct__du_ptag_ordered_maybe_arg_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__deconstruct__deconstruct__functor_number_map_maybe_arg_0
};

#line 846 "deconstruct.c"
static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_0 = {
  (MR_String) "do_not_allow",
  (MR_Integer) 0
};

#line 852 "deconstruct.c"
static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_1 = {
  (MR_String) "canonicalize",
  (MR_Integer) 1
};

#line 858 "deconstruct.c"
static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_2 = {
  (MR_String) "include_details_cc",
  (MR_Integer) 2
};

#line 864 "deconstruct.c"
static const MR_EnumFunctorDescPtr mercury__deconstruct__deconstruct__enum_value_ordered_noncanon_handling_0[3] = {
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_0,
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_1,
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_2
};

#line 871 "deconstruct.c"
static const MR_EnumFunctorDescPtr mercury__deconstruct__deconstruct__enum_name_ordered_noncanon_handling_0[3] = {
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_1,
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_0,
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_2
};

#line 878 "deconstruct.c"
static const MR_Integer mercury__deconstruct__deconstruct__functor_number_map_noncanon_handling_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 885 "deconstruct.c"
const MR_TypeCtorInfo_Struct mercury__deconstruct__deconstruct__type_ctor_info_noncanon_handling_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__deconstruct____Unify____noncanon_handling_0_0_10001)),
  ((MR_Box) (mercury__deconstruct____Compare____noncanon_handling_0_0_10001)),
  (MR_String) "deconstruct",
  (MR_String) "noncanon_handling",
  {
    mercury__deconstruct__deconstruct__enum_name_ordered_noncanon_handling_0
  },
  {
    mercury__deconstruct__deconstruct__enum_value_ordered_noncanon_handling_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__deconstruct__deconstruct__functor_number_map_noncanon_handling_0
};

#line 906 "deconstruct.c"
static MR_bool MR_CALL 
mercury__deconstruct____Unify____maybe_arg_0_0_10001(
#line 909 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_1,
#line 911 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_2)
#line 913 "deconstruct.c"
{
#line 915 "deconstruct.c"
  {
#line 917 "deconstruct.c"
    MR_bool mercury__deconstruct__succeeded;

#line 920 "deconstruct.c"
    {
#line 922 "deconstruct.c"
      mercury__deconstruct__succeeded = mercury__deconstruct____Unify____maybe_arg_0_0(((MR_Word) mercury__deconstruct__wrapper_arg_1), ((MR_Word) mercury__deconstruct__wrapper_arg_2));
    }
#line 925 "deconstruct.c"
    return mercury__deconstruct__succeeded;
#line 927 "deconstruct.c"
  }
#line 929 "deconstruct.c"
}

#line 932 "deconstruct.c"
static void MR_CALL 
mercury__deconstruct____Compare____maybe_arg_0_0_10001(
#line 935 "deconstruct.c"
  MR_Box * mercury__deconstruct__wrapper_arg_1,
#line 937 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_2,
#line 939 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_3)
#line 941 "deconstruct.c"
{
#line 943 "deconstruct.c"
  {
#line 945 "deconstruct.c"
    MR_Word mercury__deconstruct__conv0_HeadVar__1_1;

#line 948 "deconstruct.c"
    {
#line 950 "deconstruct.c"
      mercury__deconstruct____Compare____maybe_arg_0_0(&mercury__deconstruct__conv0_HeadVar__1_1, ((MR_Word) mercury__deconstruct__wrapper_arg_2), ((MR_Word) mercury__deconstruct__wrapper_arg_3));
    }
#line 953 "deconstruct.c"
    *mercury__deconstruct__wrapper_arg_1 = ((MR_Box) (mercury__deconstruct__conv0_HeadVar__1_1));
#line 955 "deconstruct.c"
  }
#line 957 "deconstruct.c"
}

#line 960 "deconstruct.c"
static MR_bool MR_CALL 
mercury__deconstruct____Unify____noncanon_handling_0_0_10001(
#line 963 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_1,
#line 965 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_2)
#line 967 "deconstruct.c"
{
#line 969 "deconstruct.c"
  {
#line 971 "deconstruct.c"
    MR_bool mercury__deconstruct__succeeded;

#line 974 "deconstruct.c"
    {
#line 976 "deconstruct.c"
      mercury__deconstruct__succeeded = mercury__deconstruct____Unify____noncanon_handling_0_0(((MR_Word) mercury__deconstruct__wrapper_arg_1), ((MR_Word) mercury__deconstruct__wrapper_arg_2));
    }
#line 979 "deconstruct.c"
    return mercury__deconstruct__succeeded;
#line 981 "deconstruct.c"
  }
#line 983 "deconstruct.c"
}

#line 986 "deconstruct.c"
static void MR_CALL 
mercury__deconstruct____Compare____noncanon_handling_0_0_10001(
#line 989 "deconstruct.c"
  MR_Box * mercury__deconstruct__wrapper_arg_1,
#line 991 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_2,
#line 993 "deconstruct.c"
  MR_Box mercury__deconstruct__wrapper_arg_3)
#line 995 "deconstruct.c"
{
#line 997 "deconstruct.c"
  {
#line 999 "deconstruct.c"
    MR_Word mercury__deconstruct__conv0_HeadVar__1_1;

#line 1002 "deconstruct.c"
    {
#line 1004 "deconstruct.c"
      mercury__deconstruct____Compare____noncanon_handling_0_0(&mercury__deconstruct__conv0_HeadVar__1_1, ((MR_Word) mercury__deconstruct__wrapper_arg_2), ((MR_Word) mercury__deconstruct__wrapper_arg_3));
    }
#line 1007 "deconstruct.c"
    *mercury__deconstruct__wrapper_arg_1 = ((MR_Box) (mercury__deconstruct__conv0_HeadVar__1_1));
#line 1009 "deconstruct.c"
  }
#line 1011 "deconstruct.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__deconstruct__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 445 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1(
#line 445 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_18,
#line 445 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 445 "deconstruct.m"
  MR_Integer * mercury__deconstruct__FunctorNumber_8,
#line 445 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 445 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 445 "deconstruct.m"
{
#line 466 "deconstruct.m"
  {
#line 466 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 466 "deconstruct.m"
    MR_Word mercury__deconstruct__V_14_14;
#line 56 "type_desc.opt"
    MR_Box mercury__deconstruct__V_19_19;
#line 67 "construct.opt"
    MR_Integer mercury__deconstruct__V_11_11;
#line 899 "deconstruct.m"
    MR_String mercury__deconstruct__V_13_13;
#line 461 "deconstruct.m"
    MR_Integer mercury__deconstruct__V_16_16;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_18 ;
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
#line 1087 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__V_14_14  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__deconstruct__V_14_14 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 1111 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__V_11_11  = Functors;
#line 67 "construct.opt"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 466 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 466 "deconstruct.m"
      {
#line 903 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_18 ;
	Term = (MR_Word) mercury__deconstruct__Term_6 ;
		{
#line 903 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 1162 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__V_13_13  = Functor;
	 *mercury__deconstruct__FunctorNumber_8  = FunctorNumber;
	 *mercury__deconstruct__Arity_9  = Arity;
	 *mercury__deconstruct__Arguments_10  = Arguments;
#line 903 "deconstruct.m"
}
#line 461 "deconstruct.m"
        mercury__deconstruct__V_16_16 = (MR_Integer) 0;
#line 461 "deconstruct.m"
        mercury__deconstruct__succeeded = (*mercury__deconstruct__FunctorNumber_8 >= mercury__deconstruct__V_16_16);
#line 463 "deconstruct.m"
        if (mercury__deconstruct__succeeded)
#line 462 "deconstruct.m"
          {
#line 462 "deconstruct.m"
          }
#line 463 "deconstruct.m"
        else
#line 464 "deconstruct.m"
          {
#line 464 "deconstruct.m"
            {
#line 464 "deconstruct.m"
              mercury__require__error_1_p_0((MR_String) "deconstruct_du: internal error (recompile needed\?)");
            }
#line 464 "deconstruct.m"
          }
#line 463 "deconstruct.m"
        mercury__deconstruct__succeeded = MR_TRUE;
#line 466 "deconstruct.m"
      }
#line 466 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 466 "deconstruct.m"
  }
#line 445 "deconstruct.m"
}

#line 444 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0(
#line 444 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_18,
#line 444 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 444 "deconstruct.m"
  MR_Integer * mercury__deconstruct__FunctorNumber_8,
#line 444 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 444 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 444 "deconstruct.m"
{
#line 466 "deconstruct.m"
  {
#line 466 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 466 "deconstruct.m"
    MR_Word mercury__deconstruct__V_14_14;
#line 56 "type_desc.opt"
    MR_Box mercury__deconstruct__V_19_19;
#line 67 "construct.opt"
    MR_Integer mercury__deconstruct__V_11_11;
#line 847 "deconstruct.m"
    MR_String mercury__deconstruct__V_12_12;
#line 461 "deconstruct.m"
    MR_Integer mercury__deconstruct__V_16_16;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_18 ;
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
#line 1260 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__V_14_14  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__deconstruct__V_14_14 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 1284 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__V_11_11  = Functors;
#line 67 "construct.opt"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 466 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 466 "deconstruct.m"
      {
#line 851 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_18 ;
	Term = (MR_Word) mercury__deconstruct__Term_6 ;
		{
#line 851 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 1335 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__V_12_12  = Functor;
	 *mercury__deconstruct__FunctorNumber_8  = FunctorNumber;
	 *mercury__deconstruct__Arity_9  = Arity;
	 *mercury__deconstruct__Arguments_10  = Arguments;
#line 851 "deconstruct.m"
}
#line 461 "deconstruct.m"
        mercury__deconstruct__V_16_16 = (MR_Integer) 0;
#line 461 "deconstruct.m"
        mercury__deconstruct__succeeded = (*mercury__deconstruct__FunctorNumber_8 >= mercury__deconstruct__V_16_16);
#line 463 "deconstruct.m"
        if (mercury__deconstruct__succeeded)
#line 462 "deconstruct.m"
          {
#line 462 "deconstruct.m"
          }
#line 463 "deconstruct.m"
        else
#line 464 "deconstruct.m"
          {
#line 464 "deconstruct.m"
            {
#line 464 "deconstruct.m"
              mercury__require__error_1_p_0((MR_String) "deconstruct_du: internal error (recompile needed\?)");
            }
#line 464 "deconstruct.m"
          }
#line 463 "deconstruct.m"
        mercury__deconstruct__succeeded = MR_TRUE;
#line 466 "deconstruct.m"
      }
#line 466 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 466 "deconstruct.m"
  }
#line 444 "deconstruct.m"
}

#line 264 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1(
#line 264 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_14,
#line 264 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_7,
#line 264 "deconstruct.m"
  MR_Integer mercury__deconstruct__MaxArity_9,
#line 264 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_10,
#line 264 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_11,
#line 264 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_12)
#line 264 "deconstruct.m"
{
#line 955 "deconstruct.m"
  {
#line 955 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 959 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_14 ;
	Term = (MR_Word) mercury__deconstruct__Term_7 ;
	MaxArity =  mercury__deconstruct__MaxArity_9 ;
		{
#line 959 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Limit_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 1440 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__deconstruct__Functor_10  = Functor;
	 *mercury__deconstruct__Arity_11  = Arity;
	 *mercury__deconstruct__Arguments_12  = Arguments;
#line 959 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 955 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 955 "deconstruct.m"
  }
#line 264 "deconstruct.m"
}

#line 262 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_p_0(
#line 262 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_14,
#line 262 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_7,
#line 262 "deconstruct.m"
  MR_Integer mercury__deconstruct__MaxArity_9,
#line 262 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_10,
#line 262 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_11,
#line 262 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_12)
#line 262 "deconstruct.m"
{
#line 926 "deconstruct.m"
  {
#line 926 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 930 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_14 ;
	Term = (MR_Word) mercury__deconstruct__Term_7 ;
	MaxArity =  mercury__deconstruct__MaxArity_9 ;
		{
#line 930 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Limit_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 1522 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__deconstruct__Functor_10  = Functor;
	 *mercury__deconstruct__Arity_11  = Arity;
	 *mercury__deconstruct__Arguments_12  = Arguments;
#line 930 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 926 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 926 "deconstruct.m"
  }
#line 262 "deconstruct.m"
}

#line 230 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_5_p_2(
#line 230 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 230 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 230 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_8,
#line 230 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 230 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 230 "deconstruct.m"
{
#line 899 "deconstruct.m"
  {
#line 899 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 899 "deconstruct.m"
    MR_Integer mercury__deconstruct__V_12_12;

#line 903 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_5_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_13 ;
	Term = (MR_Word) mercury__deconstruct__Term_6 ;
		{
#line 903 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 1600 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_8  = Functor;
	 mercury__deconstruct__V_12_12  = FunctorNumber;
	 *mercury__deconstruct__Arity_9  = Arity;
	 *mercury__deconstruct__Arguments_10  = Arguments;
#line 903 "deconstruct.m"
}
#line 899 "deconstruct.m"
  }
#line 230 "deconstruct.m"
}

#line 229 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_5_p_1(
#line 229 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 229 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 229 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_8,
#line 229 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 229 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 229 "deconstruct.m"
{
#line 874 "deconstruct.m"
  {
#line 874 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 877 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_5_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_13 ;
	Term = (MR_Word) mercury__deconstruct__Term_6 ;
		{
#line 877 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#undef FUNCTOR_NUMBER_ARG
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 1670 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_8  = Functor;
	 *mercury__deconstruct__Arity_9  = Arity;
	 *mercury__deconstruct__Arguments_10  = Arguments;
#line 877 "deconstruct.m"
}
#line 874 "deconstruct.m"
  }
#line 229 "deconstruct.m"
}

#line 228 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_5_p_0(
#line 228 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 228 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 228 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_8,
#line 228 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 228 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 228 "deconstruct.m"
{
#line 847 "deconstruct.m"
  {
#line 847 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 847 "deconstruct.m"
    MR_Integer mercury__deconstruct__V_11_11;

#line 851 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_13 ;
	Term = (MR_Word) mercury__deconstruct__Term_6 ;
		{
#line 851 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 1743 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_8  = Functor;
	 mercury__deconstruct__V_11_11  = FunctorNumber;
	 *mercury__deconstruct__Arity_9  = Arity;
	 *mercury__deconstruct__Arguments_10  = Arguments;
#line 851 "deconstruct.m"
}
#line 847 "deconstruct.m"
  }
#line 228 "deconstruct.m"
}

#line 209 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_p_2(
#line 209 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_16,
#line 209 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_15,
#line 209 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 209 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 209 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 209 "deconstruct.m"
{
#line 418 "deconstruct.m"
  {
#line 418 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 418 "deconstruct.m"
    MR_Word mercury__deconstruct__TypeCtorInfo_3_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 418 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_9;
#line 418 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ0_10;
#line 418 "deconstruct.m"
    MR_Integer mercury__deconstruct__Success_11;
#line 418 "deconstruct.m"
    MR_Word mercury__deconstruct__V_12_12;

#line 8 "univ.opt"
    {
#line 8 "univ.opt"
      mercury__univ__type_to_univ_2_p_0(mercury__deconstruct__TypeCtorInfo_3_18, ((MR_Box) ((MR_Integer) 0)), &mercury__deconstruct__V_12_12);
    }
#line 764 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_16 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Name =  mercury__deconstruct__Name_7 ;
	DummyUniv =  mercury__deconstruct__V_12_12 ;
		{
#line 764 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

}
#line 1835 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__Univ0_10  = Argument;
	 mercury__deconstruct__Success_11  = Success;
#line 764 "deconstruct.m"
}
#line 410 "deconstruct.m"
    mercury__deconstruct__succeeded = (mercury__deconstruct__Success_11 == (MR_Integer) 0);
#line 410 "deconstruct.m"
    mercury__deconstruct__succeeded = !(mercury__deconstruct__succeeded);
#line 412 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 411 "deconstruct.m"
      mercury__deconstruct__Univ_9 = mercury__deconstruct__Univ0_10;
#line 412 "deconstruct.m"
    else
#line 413 "deconstruct.m"
      {
#line 413 "deconstruct.m"
        {
#line 413 "deconstruct.m"
          mercury__require__error_1_p_0((MR_String) "det_named_arg: no argument with that name");
#line 413 "deconstruct.m"
          return;
        }
#line 413 "deconstruct.m"
      }
#line 12 "univ.opt"
    *mercury__deconstruct__TypeInfo_for_T_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 0)));
#line 12 "univ.opt"
    *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 1));
#line 418 "deconstruct.m"
  }
#line 209 "deconstruct.m"
}

#line 208 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1(
#line 208 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_16,
#line 208 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_15,
#line 208 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 208 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 208 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 208 "deconstruct.m"
{
#line 418 "deconstruct.m"
  {
#line 418 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 418 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_9;

#line 740 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_16 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Name =  mercury__deconstruct__Name_7 ;
		{
#line 740 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}
#line 1929 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 740 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 418 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 12 "univ.opt"
      {
#line 12 "univ.opt"
        *mercury__deconstruct__TypeInfo_for_T_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 0)));
#line 12 "univ.opt"
        *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 1));
#line 12 "univ.opt"
      }
#line 418 "deconstruct.m"
    else
#line 419 "deconstruct.m"
      {
#line 419 "deconstruct.m"
        {
#line 419 "deconstruct.m"
          mercury__require__error_1_p_0((MR_String) "det_named_arg: no argument with that name");
#line 419 "deconstruct.m"
          return;
        }
#line 419 "deconstruct.m"
      }
#line 418 "deconstruct.m"
  }
#line 208 "deconstruct.m"
}

#line 207 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0(
#line 207 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_16,
#line 207 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_15,
#line 207 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 207 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 207 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 207 "deconstruct.m"
{
#line 418 "deconstruct.m"
  {
#line 418 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 418 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_9;

#line 717 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_16 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Name =  mercury__deconstruct__Name_7 ;
		{
#line 717 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}
#line 2023 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 717 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 418 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 12 "univ.opt"
      {
#line 12 "univ.opt"
        *mercury__deconstruct__TypeInfo_for_T_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 0)));
#line 12 "univ.opt"
        *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 1));
#line 12 "univ.opt"
      }
#line 418 "deconstruct.m"
    else
#line 419 "deconstruct.m"
      {
#line 419 "deconstruct.m"
        {
#line 419 "deconstruct.m"
          mercury__require__error_1_p_0((MR_String) "det_named_arg: no argument with that name");
#line 419 "deconstruct.m"
          return;
        }
#line 419 "deconstruct.m"
      }
#line 418 "deconstruct.m"
  }
#line 207 "deconstruct.m"
}

#line 198 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_p_2(
#line 198 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_20,
#line 198 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_19,
#line 198 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 198 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 198 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 198 "deconstruct.m"
{
#line 373 "deconstruct.m"
  {
#line 373 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 373 "deconstruct.m"
    MR_Word mercury__deconstruct__TypeCtorInfo_3_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 373 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_10;
#line 373 "deconstruct.m"
    MR_Integer mercury__deconstruct__Success_11;
#line 373 "deconstruct.m"
    MR_Word mercury__deconstruct__V_12_12;
#line 373 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ0_18;

#line 8 "univ.opt"
    {
#line 8 "univ.opt"
      mercury__univ__type_to_univ_2_p_0(mercury__deconstruct__TypeCtorInfo_3_22, ((MR_Box) ((MR_Integer) 0)), &mercury__deconstruct__V_12_12);
    }
#line 691 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_20 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Index =  mercury__deconstruct__Index_7 ;
	DummyUniv =  mercury__deconstruct__V_12_12 ;
		{
#line 691 "deconstruct.m"
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
}
#line 2135 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__Univ0_18  = Argument;
	 mercury__deconstruct__Success_11  = Success;
#line 691 "deconstruct.m"
}
#line 391 "deconstruct.m"
    mercury__deconstruct__succeeded = (mercury__deconstruct__Success_11 == (MR_Integer) 0);
#line 391 "deconstruct.m"
    mercury__deconstruct__succeeded = !(mercury__deconstruct__succeeded);
#line 393 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 392 "deconstruct.m"
      mercury__deconstruct__Univ_10 = mercury__deconstruct__Univ0_18;
#line 393 "deconstruct.m"
    else
#line 394 "deconstruct.m"
      {
#line 394 "deconstruct.m"
        {
#line 394 "deconstruct.m"
          mercury__require__error_1_p_0((MR_String) "det_arg: argument number out of range");
#line 394 "deconstruct.m"
          return;
        }
#line 394 "deconstruct.m"
      }
#line 12 "univ.opt"
    *mercury__deconstruct__TypeInfo_for_T_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_10, (MR_Integer) 0)));
#line 12 "univ.opt"
    *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_10, (MR_Integer) 1));
#line 373 "deconstruct.m"
  }
#line 198 "deconstruct.m"
}

#line 197 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_p_1(
#line 197 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_20,
#line 197 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_19,
#line 197 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 197 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 197 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 197 "deconstruct.m"
{
#line 373 "deconstruct.m"
  {
#line 373 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 373 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_10;
#line 385 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ0_16;

#line 669 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_20 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Index =  mercury__deconstruct__Index_7 ;
		{
#line 669 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 2229 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ0_16  = Argument;
#line 669 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 385 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 384 "deconstruct.m"
      mercury__deconstruct__Univ_10 = mercury__deconstruct__Univ0_16;
#line 385 "deconstruct.m"
    else
#line 386 "deconstruct.m"
      {
#line 386 "deconstruct.m"
        {
#line 386 "deconstruct.m"
          mercury__require__error_1_p_0((MR_String) "det_arg: argument number out of range");
#line 386 "deconstruct.m"
          return;
        }
#line 386 "deconstruct.m"
      }
#line 12 "univ.opt"
    *mercury__deconstruct__TypeInfo_for_T_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_10, (MR_Integer) 0)));
#line 12 "univ.opt"
    *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_10, (MR_Integer) 1));
#line 373 "deconstruct.m"
  }
#line 197 "deconstruct.m"
}

#line 196 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_p_0(
#line 196 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_20,
#line 196 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_19,
#line 196 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 196 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 196 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 196 "deconstruct.m"
{
#line 373 "deconstruct.m"
  {
#line 373 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 373 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_10;
#line 378 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ0_9;

#line 648 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_20 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Index =  mercury__deconstruct__Index_7 ;
		{
#line 648 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 2321 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ0_9  = Argument;
#line 648 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 378 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 377 "deconstruct.m"
      mercury__deconstruct__Univ_10 = mercury__deconstruct__Univ0_9;
#line 378 "deconstruct.m"
    else
#line 379 "deconstruct.m"
      {
#line 379 "deconstruct.m"
        {
#line 379 "deconstruct.m"
          mercury__require__error_1_p_0((MR_String) "det_arg: argument number out of range");
#line 379 "deconstruct.m"
          return;
        }
#line 379 "deconstruct.m"
      }
#line 12 "univ.opt"
    *mercury__deconstruct__TypeInfo_for_T_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_10, (MR_Integer) 0)));
#line 12 "univ.opt"
    *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_10, (MR_Integer) 1));
#line 373 "deconstruct.m"
  }
#line 196 "deconstruct.m"
}

#line 182 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1(
#line 182 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 182 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_11,
#line 182 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 182 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 182 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 182 "deconstruct.m"
{
#line 344 "deconstruct.m"
  {
#line 344 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 344 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_9;

#line 740 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Name =  mercury__deconstruct__Name_7 ;
		{
#line 740 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}
#line 2413 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 740 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 344 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 344 "deconstruct.m"
      {
#line 12 "univ.opt"
        *mercury__deconstruct__TypeInfo_for_T_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 0)));
#line 12 "univ.opt"
        *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 1));
#line 12 "univ.opt"
        mercury__deconstruct__succeeded = MR_TRUE;
#line 344 "deconstruct.m"
      }
#line 344 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 344 "deconstruct.m"
  }
#line 182 "deconstruct.m"
}

#line 181 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0(
#line 181 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 181 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_11,
#line 181 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 181 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 181 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 181 "deconstruct.m"
{
#line 344 "deconstruct.m"
  {
#line 344 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 344 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_9;

#line 717 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Name =  mercury__deconstruct__Name_7 ;
		{
#line 717 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}
#line 2498 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 717 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 344 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 344 "deconstruct.m"
      {
#line 12 "univ.opt"
        *mercury__deconstruct__TypeInfo_for_T_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 0)));
#line 12 "univ.opt"
        *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 1));
#line 12 "univ.opt"
        mercury__deconstruct__succeeded = MR_TRUE;
#line 344 "deconstruct.m"
      }
#line 344 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 344 "deconstruct.m"
  }
#line 181 "deconstruct.m"
}

#line 161 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_p_1(
#line 161 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 161 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_11,
#line 161 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 161 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 161 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 161 "deconstruct.m"
{
#line 323 "deconstruct.m"
  {
#line 323 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 323 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_9;

#line 669 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Index =  mercury__deconstruct__Index_7 ;
		{
#line 669 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 2581 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 669 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 323 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 323 "deconstruct.m"
      {
#line 12 "univ.opt"
        *mercury__deconstruct__TypeInfo_for_T_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 0)));
#line 12 "univ.opt"
        *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 1));
#line 12 "univ.opt"
        mercury__deconstruct__succeeded = MR_TRUE;
#line 323 "deconstruct.m"
      }
#line 323 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 323 "deconstruct.m"
  }
#line 161 "deconstruct.m"
}

#line 160 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_p_0(
#line 160 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 160 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_11,
#line 160 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 160 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 160 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 160 "deconstruct.m"
{
#line 323 "deconstruct.m"
  {
#line 323 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 323 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_9;

#line 648 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Index =  mercury__deconstruct__Index_7 ;
		{
#line 648 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 2664 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 648 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 323 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 323 "deconstruct.m"
      {
#line 12 "univ.opt"
        *mercury__deconstruct__TypeInfo_for_T_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 0)));
#line 12 "univ.opt"
        *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 1));
#line 12 "univ.opt"
        mercury__deconstruct__succeeded = MR_TRUE;
#line 323 "deconstruct.m"
      }
#line 323 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 323 "deconstruct.m"
  }
#line 160 "deconstruct.m"
}

#line 125 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_50_4_p_2(
#line 125 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_9,
#line 125 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 125 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_7,
#line 125 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_8)
#line 125 "deconstruct.m"
{
#line 530 "deconstruct.m"
  {
#line 530 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 533 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_50_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_9 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
		{
#line 533 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}
#line 2737 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_7  = Functor;
	 *mercury__deconstruct__Arity_8  = Arity;
#line 533 "deconstruct.m"
}
#line 530 "deconstruct.m"
  }
#line 125 "deconstruct.m"
}

#line 124 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_49_4_p_1(
#line 124 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_9,
#line 124 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 124 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_7,
#line 124 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_8)
#line 124 "deconstruct.m"
{
#line 513 "deconstruct.m"
  {
#line 513 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 516 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_9 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
		{
#line 516 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}
#line 2794 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_7  = Functor;
	 *mercury__deconstruct__Arity_8  = Arity;
#line 516 "deconstruct.m"
}
#line 513 "deconstruct.m"
  }
#line 124 "deconstruct.m"
}

#line 123 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_48_4_p_0(
#line 123 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_9,
#line 123 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 123 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_7,
#line 123 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_8)
#line 123 "deconstruct.m"
{
#line 496 "deconstruct.m"
  {
#line 496 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 499 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_9 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
		{
#line 499 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}
#line 2851 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_7  = Functor;
	 *mercury__deconstruct__Arity_8  = Arity;
#line 499 "deconstruct.m"
}
#line 496 "deconstruct.m"
  }
#line 123 "deconstruct.m"
}

#line 43 "deconstruct.m"
void MR_CALL 
mercury__deconstruct____Compare____noncanon_handling_0_0(
#line 43 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__1_1,
#line 43 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__2_2,
#line 43 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__3_3)
#line 43 "deconstruct.m"
{
#line 43 "deconstruct.m"
  {
#line 43 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 43 "deconstruct.m"
    MR_Integer mercury__deconstruct__Cast_HeadVar1_4 = (MR_Integer) mercury__deconstruct__HeadVar__2_2;
#line 43 "deconstruct.m"
    MR_Integer mercury__deconstruct__Cast_HeadVar2_5 = (MR_Integer) mercury__deconstruct__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__deconstruct__succeeded = (mercury__deconstruct__Cast_HeadVar1_4 < mercury__deconstruct__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__deconstruct__succeeded)
#line 68 "private_builtin.opt"
      *mercury__deconstruct__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__deconstruct__succeeded = (mercury__deconstruct__Cast_HeadVar1_4 == mercury__deconstruct__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__deconstruct__succeeded)
#line 73 "private_builtin.opt"
          *mercury__deconstruct__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__deconstruct__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 43 "deconstruct.m"
  }
#line 43 "deconstruct.m"
}

#line 43 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct____Unify____noncanon_handling_0_0(
#line 43 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__2_1,
#line 43 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__2_2)
#line 43 "deconstruct.m"
{
#line 2920 "deconstruct.c"
  {
#line 2922 "deconstruct.c"
    MR_bool mercury__deconstruct__succeeded = (mercury__deconstruct__HeadVar__2_1 == mercury__deconstruct__HeadVar__2_2);

#line 2925 "deconstruct.c"
    return mercury__deconstruct__succeeded;
#line 2927 "deconstruct.c"
  }
#line 43 "deconstruct.m"
}

#line 164 "deconstruct.m"
void MR_CALL 
mercury__deconstruct____Compare____maybe_arg_0_0(
#line 164 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__1_1,
#line 164 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__2_2,
#line 164 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__3_3)
#line 164 "deconstruct.m"
{
#line 164 "deconstruct.m"
  {
#line 164 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 164 "deconstruct.m"
    MR_Integer mercury__deconstruct__CastX_8 = (MR_Integer) mercury__deconstruct__HeadVar__2_2;
#line 164 "deconstruct.m"
    MR_Integer mercury__deconstruct__CastY_9 = (MR_Integer) mercury__deconstruct__HeadVar__3_3;

#line 164 "deconstruct.m"
    mercury__deconstruct__succeeded = (mercury__deconstruct__CastX_8 == mercury__deconstruct__CastY_9);
#line 164 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 164 "deconstruct.m"
      *mercury__deconstruct__HeadVar__1_1 = (MR_Integer) 0;
#line 164 "deconstruct.m"
    else
#line 164 "deconstruct.m"
      if ((mercury__deconstruct__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "deconstruct.m"
        if ((mercury__deconstruct__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "deconstruct.m"
          *mercury__deconstruct__HeadVar__1_1 = (MR_Integer) 0;
#line 164 "deconstruct.m"
        else
#line 164 "deconstruct.m"
          *mercury__deconstruct__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "deconstruct.m"
      else
#line 164 "deconstruct.m"
        {
#line 164 "deconstruct.m"
          MR_Word mercury__deconstruct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__deconstruct__HeadVar__2_2, (MR_Integer) 0)));
#line 164 "deconstruct.m"
          MR_Box mercury__deconstruct__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__deconstruct__HeadVar__2_2, (MR_Integer) 1));

#line 164 "deconstruct.m"
          if ((mercury__deconstruct__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "deconstruct.m"
            *mercury__deconstruct__HeadVar__1_1 = (MR_Integer) 1;
#line 164 "deconstruct.m"
          else
#line 164 "deconstruct.m"
            {
#line 164 "deconstruct.m"
              MR_Word mercury__deconstruct__TypeInfo_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__deconstruct__HeadVar__3_3, (MR_Integer) 0)));
#line 164 "deconstruct.m"
              MR_Box mercury__deconstruct__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__deconstruct__HeadVar__3_3, (MR_Integer) 1));

#line 164 "deconstruct.m"
              {
#line 164 "deconstruct.m"
                mercury__private_builtin__typed_compare_3_p_0(mercury__deconstruct__V_15_15, mercury__deconstruct__TypeInfo_13_13, mercury__deconstruct__HeadVar__1_1, mercury__deconstruct__V_14_14, mercury__deconstruct__V_5_5);
#line 164 "deconstruct.m"
                return;
              }
#line 164 "deconstruct.m"
            }
#line 164 "deconstruct.m"
        }
#line 164 "deconstruct.m"
  }
#line 164 "deconstruct.m"
}

#line 164 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct____Unify____maybe_arg_0_0(
#line 164 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__1_1,
#line 164 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__2_2)
#line 164 "deconstruct.m"
{
#line 164 "deconstruct.m"
  {
#line 164 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 164 "deconstruct.m"
    MR_Integer mercury__deconstruct__CastX_7 = (MR_Integer) mercury__deconstruct__HeadVar__1_1;
#line 164 "deconstruct.m"
    MR_Integer mercury__deconstruct__CastY_8 = (MR_Integer) mercury__deconstruct__HeadVar__2_2;

#line 164 "deconstruct.m"
    mercury__deconstruct__succeeded = (mercury__deconstruct__CastX_7 == mercury__deconstruct__CastY_8);
#line 164 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 164 "deconstruct.m"
      mercury__deconstruct__succeeded = MR_TRUE;
#line 164 "deconstruct.m"
    else
#line 164 "deconstruct.m"
      if ((mercury__deconstruct__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "deconstruct.m"
        {
#line 164 "deconstruct.m"
          MR_Integer mercury__deconstruct__CastX_5 = (MR_Integer) mercury__deconstruct__HeadVar__1_1;
#line 164 "deconstruct.m"
          MR_Integer mercury__deconstruct__CastY_6 = (MR_Integer) mercury__deconstruct__HeadVar__2_2;

#line 164 "deconstruct.m"
          mercury__deconstruct__succeeded = (mercury__deconstruct__CastY_6 == mercury__deconstruct__CastX_5);
#line 164 "deconstruct.m"
        }
#line 164 "deconstruct.m"
      else
#line 164 "deconstruct.m"
        {
#line 164 "deconstruct.m"
          MR_Word mercury__deconstruct__TypeInfo_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__deconstruct__HeadVar__1_1, (MR_Integer) 0)));
#line 164 "deconstruct.m"
          MR_Word mercury__deconstruct__TypeInfo_10_10;
#line 164 "deconstruct.m"
          MR_Box mercury__deconstruct__V_3_3 = (MR_hl_field(MR_mktag(1), mercury__deconstruct__HeadVar__1_1, (MR_Integer) 1));
#line 164 "deconstruct.m"
          MR_Box mercury__deconstruct__V_4_4;

#line 164 "deconstruct.m"
          mercury__deconstruct__succeeded = ((MR_tag((MR_Word) mercury__deconstruct__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 164 "deconstruct.m"
          if (mercury__deconstruct__succeeded)
#line 164 "deconstruct.m"
            {
#line 164 "deconstruct.m"
              mercury__deconstruct__TypeInfo_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__deconstruct__HeadVar__2_2, (MR_Integer) 0)));
#line 164 "deconstruct.m"
              mercury__deconstruct__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__deconstruct__HeadVar__2_2, (MR_Integer) 1));
#line 164 "deconstruct.m"
              {
#line 164 "deconstruct.m"
                return mercury__deconstruct__succeeded = mercury__private_builtin__typed_unify_2_p_0(mercury__deconstruct__TypeInfo_9_9, mercury__deconstruct__TypeInfo_10_10, mercury__deconstruct__V_3_3, mercury__deconstruct__V_4_4);
              }
#line 164 "deconstruct.m"
            }
#line 164 "deconstruct.m"
        }
#line 164 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 164 "deconstruct.m"
  }
#line 164 "deconstruct.m"
}

#line 844 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__limited_deconstruct_idcc_5_p_0(
#line 844 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 844 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 844 "deconstruct.m"
  MR_Integer mercury__deconstruct__HeadVar__2_2,
#line 844 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__3_3,
#line 844 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__4_4,
#line 844 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__5_5)
#line 844 "deconstruct.m"
{
#line 984 "deconstruct.m"
  {
#line 984 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 988 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__limited_deconstruct_idcc_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_13 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
	MaxArity =  mercury__deconstruct__HeadVar__2_2 ;
		{
#line 988 "deconstruct.m"
{
    #define EXPAND_INFO_TYPE    MR_Expand_Functor_Args_Limit_Info
    #define EXPAND_INFO_CALL    MR_expand_functor_args_limit
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define MAX_ARITY_ARG       MaxArity
    #define FUNCTOR_ARG         Functor
    #define ARITY_ARG           Arity
    #define ARGUMENTS_ARG       Arguments
    #define NONCANON            MR_NONCANON_CC
    /* This comment tells the compiler to define MR_ALLOC_ID. */
    #include "mercury_ml_deconstruct_body.h"
    #undef  EXPAND_INFO_TYPE
    #undef  EXPAND_INFO_CALL
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  MAX_ARITY_ARG
    #undef  FUNCTOR_ARG
    #undef  ARITY_ARG
    #undef  ARGUMENTS_ARG
    #undef  NONCANON

    if (!success) {
        /*
        ** Fill in some dummy values, to ensure that we don't try to return
        ** uninitialized memory to Mercury. It doesn't matter what we put here,
        ** except that we must have Arity > MaxArity. The casts cast away
        ** const.
        */

        Arity = MaxArity + 1;
        Functor = (MR_String) (MR_Integer) "";
        Arguments = MR_list_empty();
    }
}
#line 3159 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__HeadVar__3_3  = Functor;
	 *mercury__deconstruct__HeadVar__4_4  = Arity;
	 *mercury__deconstruct__HeadVar__5_5  = Arguments;
#line 988 "deconstruct.m"
}
#line 984 "deconstruct.m"
  }
#line 844 "deconstruct.m"
}

#line 842 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_can_5_p_0(
#line 842 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 842 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 842 "deconstruct.m"
  MR_Integer mercury__deconstruct__HeadVar__2_2,
#line 842 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__3_3,
#line 842 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__4_4,
#line 842 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__5_5)
#line 842 "deconstruct.m"
{
#line 955 "deconstruct.m"
  {
#line 955 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 959 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__limited_deconstruct_can_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_13 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
	MaxArity =  mercury__deconstruct__HeadVar__2_2 ;
		{
#line 959 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Limit_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 3236 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__deconstruct__HeadVar__3_3  = Functor;
	 *mercury__deconstruct__HeadVar__4_4  = Arity;
	 *mercury__deconstruct__HeadVar__5_5  = Arguments;
#line 959 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 955 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 955 "deconstruct.m"
  }
#line 842 "deconstruct.m"
}

#line 840 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_dna_5_p_0(
#line 840 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 840 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 840 "deconstruct.m"
  MR_Integer mercury__deconstruct__HeadVar__2_2,
#line 840 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__3_3,
#line 840 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__4_4,
#line 840 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__5_5)
#line 840 "deconstruct.m"
{
#line 926 "deconstruct.m"
  {
#line 926 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 930 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__limited_deconstruct_dna_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_13 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
	MaxArity =  mercury__deconstruct__HeadVar__2_2 ;
		{
#line 930 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Limit_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 3318 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__deconstruct__HeadVar__3_3  = Functor;
	 *mercury__deconstruct__HeadVar__4_4  = Arity;
	 *mercury__deconstruct__HeadVar__5_5  = Arguments;
#line 930 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 926 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 926 "deconstruct.m"
  }
#line 840 "deconstruct.m"
}

#line 837 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__deconstruct_idcc_5_p_0(
#line 837 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 837 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 837 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 837 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3,
#line 837 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__4_4,
#line 837 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__5_5)
#line 837 "deconstruct.m"
{
#line 899 "deconstruct.m"
  {
#line 899 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 903 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_idcc_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
		{
#line 903 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 3396 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__HeadVar__2_2  = Functor;
	 *mercury__deconstruct__HeadVar__3_3  = FunctorNumber;
	 *mercury__deconstruct__HeadVar__4_4  = Arity;
	 *mercury__deconstruct__HeadVar__5_5  = Arguments;
#line 903 "deconstruct.m"
}
#line 899 "deconstruct.m"
  }
#line 837 "deconstruct.m"
}

#line 836 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__deconstruct_can_4_p_0(
#line 836 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_11,
#line 836 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 836 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 836 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3,
#line 836 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__4_4)
#line 836 "deconstruct.m"
{
#line 874 "deconstruct.m"
  {
#line 874 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 877 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_can_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_11 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
		{
#line 877 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#undef FUNCTOR_NUMBER_ARG
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 3466 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__HeadVar__2_2  = Functor;
	 *mercury__deconstruct__HeadVar__3_3  = Arity;
	 *mercury__deconstruct__HeadVar__4_4  = Arguments;
#line 877 "deconstruct.m"
}
#line 874 "deconstruct.m"
  }
#line 836 "deconstruct.m"
}

#line 834 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__deconstruct_dna_5_p_0(
#line 834 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 834 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 834 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 834 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3,
#line 834 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__4_4,
#line 834 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__5_5)
#line 834 "deconstruct.m"
{
#line 847 "deconstruct.m"
  {
#line 847 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 851 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_dna_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
		{
#line 851 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 3539 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__HeadVar__2_2  = Functor;
	 *mercury__deconstruct__HeadVar__3_3  = FunctorNumber;
	 *mercury__deconstruct__HeadVar__4_4  = Arity;
	 *mercury__deconstruct__HeadVar__5_5  = Arguments;
#line 851 "deconstruct.m"
}
#line 847 "deconstruct.m"
  }
#line 834 "deconstruct.m"
}

#line 642 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__univ_named_arg_idcc_5_p_0(
#line 642 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 642 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 642 "deconstruct.m"
  MR_String mercury__deconstruct__HeadVar__2_2,
#line 642 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__3_3,
#line 642 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__4_4,
#line 642 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__5_5)
#line 642 "deconstruct.m"
{
#line 760 "deconstruct.m"
  {
#line 760 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 764 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__univ_named_arg_idcc_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_13 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
	Name =  mercury__deconstruct__HeadVar__2_2 ;
	DummyUniv =  mercury__deconstruct__HeadVar__3_3 ;
		{
#line 764 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

}
#line 3618 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__HeadVar__4_4  = Argument;
	 *mercury__deconstruct__HeadVar__5_5  = Success;
#line 764 "deconstruct.m"
}
#line 760 "deconstruct.m"
  }
#line 642 "deconstruct.m"
}

#line 634 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__univ_named_arg_can_3_p_0(
#line 634 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_8,
#line 634 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 634 "deconstruct.m"
  MR_String mercury__deconstruct__HeadVar__2_2,
#line 634 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__3_3)
#line 634 "deconstruct.m"
{
#line 737 "deconstruct.m"
  {
#line 737 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 740 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__univ_named_arg_can_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_8 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
	Name =  mercury__deconstruct__HeadVar__2_2 ;
		{
#line 740 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}
#line 3683 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__deconstruct__HeadVar__3_3  = Argument;
#line 740 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 737 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 737 "deconstruct.m"
  }
#line 634 "deconstruct.m"
}

#line 633 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__univ_named_arg_dna_3_p_0(
#line 633 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_8,
#line 633 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 633 "deconstruct.m"
  MR_String mercury__deconstruct__HeadVar__2_2,
#line 633 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__3_3)
#line 633 "deconstruct.m"
{
#line 714 "deconstruct.m"
  {
#line 714 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 717 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__univ_named_arg_dna_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_8 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
	Name =  mercury__deconstruct__HeadVar__2_2 ;
		{
#line 717 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}
#line 3752 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__deconstruct__HeadVar__3_3  = Argument;
#line 717 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 714 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 714 "deconstruct.m"
  }
#line 633 "deconstruct.m"
}

#line 630 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__univ_arg_idcc_5_p_0(
#line 630 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_17,
#line 630 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 630 "deconstruct.m"
  MR_Integer mercury__deconstruct__HeadVar__2_2,
#line 630 "deconstruct.m"
  MR_Word mercury__deconstruct__HeadVar__3_3,
#line 630 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__4_4,
#line 630 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__5_5)
#line 630 "deconstruct.m"
{
#line 687 "deconstruct.m"
  {
#line 687 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 691 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__univ_arg_idcc_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_17 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
	Index =  mercury__deconstruct__HeadVar__2_2 ;
	DummyUniv =  mercury__deconstruct__HeadVar__3_3 ;
		{
#line 691 "deconstruct.m"
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
}
#line 3830 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__HeadVar__4_4  = Argument;
	 *mercury__deconstruct__HeadVar__5_5  = Success;
#line 691 "deconstruct.m"
}
#line 687 "deconstruct.m"
  }
#line 630 "deconstruct.m"
}

#line 622 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__univ_arg_can_3_p_0(
#line 622 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 622 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 622 "deconstruct.m"
  MR_Integer mercury__deconstruct__HeadVar__2_2,
#line 622 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__3_3)
#line 622 "deconstruct.m"
{
#line 666 "deconstruct.m"
  {
#line 666 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 669 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__univ_arg_can_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
	Index =  mercury__deconstruct__HeadVar__2_2 ;
		{
#line 669 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 3893 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__deconstruct__HeadVar__3_3  = Argument;
#line 669 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 666 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 666 "deconstruct.m"
  }
#line 622 "deconstruct.m"
}

#line 621 "deconstruct.m"
static MR_bool MR_CALL 
mercury__deconstruct__univ_arg_dna_3_p_0(
#line 621 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 621 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 621 "deconstruct.m"
  MR_Integer mercury__deconstruct__HeadVar__2_2,
#line 621 "deconstruct.m"
  MR_Word * mercury__deconstruct__HeadVar__3_3)
#line 621 "deconstruct.m"
{
#line 645 "deconstruct.m"
  {
#line 645 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 648 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__univ_arg_dna_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
	Index =  mercury__deconstruct__HeadVar__2_2 ;
		{
#line 648 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 3960 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__deconstruct__HeadVar__3_3  = Argument;
#line 648 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 645 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 645 "deconstruct.m"
  }
#line 621 "deconstruct.m"
}

#line 494 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__functor_idcc_3_p_0(
#line 494 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_10,
#line 494 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 494 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 494 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3)
#line 494 "deconstruct.m"
{
#line 530 "deconstruct.m"
  {
#line 530 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 533 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__functor_idcc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_10 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
		{
#line 533 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}
#line 4021 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__HeadVar__2_2  = Functor;
	 *mercury__deconstruct__HeadVar__3_3  = Arity;
#line 533 "deconstruct.m"
}
#line 530 "deconstruct.m"
  }
#line 494 "deconstruct.m"
}

#line 493 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__functor_can_3_p_0(
#line 493 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_10,
#line 493 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 493 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 493 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3)
#line 493 "deconstruct.m"
{
#line 513 "deconstruct.m"
  {
#line 513 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 516 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__functor_can_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_10 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
		{
#line 516 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}
#line 4078 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__HeadVar__2_2  = Functor;
	 *mercury__deconstruct__HeadVar__3_3  = Arity;
#line 516 "deconstruct.m"
}
#line 513 "deconstruct.m"
  }
#line 493 "deconstruct.m"
}

#line 492 "deconstruct.m"
static void MR_CALL 
mercury__deconstruct__functor_dna_3_p_0(
#line 492 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_10,
#line 492 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 492 "deconstruct.m"
  MR_String * mercury__deconstruct__HeadVar__2_2,
#line 492 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3)
#line 492 "deconstruct.m"
{
#line 496 "deconstruct.m"
  {
#line 496 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 499 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__functor_dna_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_10 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
		{
#line 499 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}
#line 4135 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__HeadVar__2_2  = Functor;
	 *mercury__deconstruct__HeadVar__3_3  = Arity;
#line 499 "deconstruct.m"
}
#line 496 "deconstruct.m"
  }
#line 492 "deconstruct.m"
}

#line 447 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_2_5_p_2(
#line 447 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_18,
#line 447 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 447 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_7,
#line 447 "deconstruct.m"
  MR_Integer * mercury__deconstruct__FunctorNumber_8,
#line 447 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 447 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 447 "deconstruct.m"
{
#line 466 "deconstruct.m"
  {
#line 466 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 466 "deconstruct.m"
    MR_Word mercury__deconstruct__V_14_14;
#line 56 "type_desc.opt"
    MR_Box mercury__deconstruct__V_19_19;
#line 67 "construct.opt"
    MR_Integer mercury__deconstruct__V_11_11;
#line 461 "deconstruct.m"
    MR_Integer mercury__deconstruct__V_16_16;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_2_5_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_18 ;
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
#line 4204 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__V_14_14  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_2_5_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__deconstruct__V_14_14 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 4228 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__V_11_11  = Functors;
#line 67 "construct.opt"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 466 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 466 "deconstruct.m"
      {
#line 454 "deconstruct.m"
        if ((mercury__deconstruct__NonCanon_7 == (MR_Integer) 1))
#line 455 "deconstruct.m"
          {
#line 456 "deconstruct.m"
            {
#line 456 "deconstruct.m"
              mercury__require__error_1_p_0((MR_String) "deconstruct_du: canonicalize not supported");
            }
#line 455 "deconstruct.m"
          }
#line 454 "deconstruct.m"
        else
#line 454 "deconstruct.m"
          if ((mercury__deconstruct__NonCanon_7 == (MR_Integer) 0))
#line 847 "deconstruct.m"
            {
#line 847 "deconstruct.m"
              MR_String mercury__deconstruct__V_12_12;

#line 851 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_2_5_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_18 ;
	Term = (MR_Word) mercury__deconstruct__Term_6 ;
		{
#line 851 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 4299 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__V_12_12  = Functor;
	 *mercury__deconstruct__FunctorNumber_8  = FunctorNumber;
	 *mercury__deconstruct__Arity_9  = Arity;
	 *mercury__deconstruct__Arguments_10  = Arguments;
#line 851 "deconstruct.m"
}
#line 847 "deconstruct.m"
            }
#line 454 "deconstruct.m"
          else
#line 899 "deconstruct.m"
            {
#line 899 "deconstruct.m"
              MR_String mercury__deconstruct__V_13_13;

#line 903 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_2_5_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_18 ;
	Term = (MR_Word) mercury__deconstruct__Term_6 ;
		{
#line 903 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 4355 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__V_13_13  = Functor;
	 *mercury__deconstruct__FunctorNumber_8  = FunctorNumber;
	 *mercury__deconstruct__Arity_9  = Arity;
	 *mercury__deconstruct__Arguments_10  = Arguments;
#line 903 "deconstruct.m"
}
#line 899 "deconstruct.m"
            }
#line 461 "deconstruct.m"
        mercury__deconstruct__V_16_16 = (MR_Integer) 0;
#line 461 "deconstruct.m"
        mercury__deconstruct__succeeded = (*mercury__deconstruct__FunctorNumber_8 >= mercury__deconstruct__V_16_16);
#line 463 "deconstruct.m"
        if (mercury__deconstruct__succeeded)
#line 462 "deconstruct.m"
          {
#line 462 "deconstruct.m"
          }
#line 463 "deconstruct.m"
        else
#line 464 "deconstruct.m"
          {
#line 464 "deconstruct.m"
            {
#line 464 "deconstruct.m"
              mercury__require__error_1_p_0((MR_String) "deconstruct_du: internal error (recompile needed\?)");
            }
#line 464 "deconstruct.m"
          }
#line 463 "deconstruct.m"
        mercury__deconstruct__succeeded = MR_TRUE;
#line 466 "deconstruct.m"
      }
#line 466 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 466 "deconstruct.m"
  }
#line 447 "deconstruct.m"
}

#line 445 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_2_5_p_1(
#line 445 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_18,
#line 445 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 445 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_7,
#line 445 "deconstruct.m"
  MR_Integer * mercury__deconstruct__FunctorNumber_8,
#line 445 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 445 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 445 "deconstruct.m"
{
#line 466 "deconstruct.m"
  {
#line 466 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 466 "deconstruct.m"
    {
#line 466 "deconstruct.m"
      return mercury__deconstruct__succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1(mercury__deconstruct__TypeInfo_for_T_18, mercury__deconstruct__Term_6, mercury__deconstruct__FunctorNumber_8, mercury__deconstruct__Arity_9, mercury__deconstruct__Arguments_10);
    }
#line 466 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 466 "deconstruct.m"
  }
#line 445 "deconstruct.m"
}

#line 444 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_2_5_p_0(
#line 444 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_18,
#line 444 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 444 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_7,
#line 444 "deconstruct.m"
  MR_Integer * mercury__deconstruct__FunctorNumber_8,
#line 444 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 444 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 444 "deconstruct.m"
{
#line 466 "deconstruct.m"
  {
#line 466 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 466 "deconstruct.m"
    {
#line 466 "deconstruct.m"
      return mercury__deconstruct__succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0(mercury__deconstruct__TypeInfo_for_T_18, mercury__deconstruct__Term_6, mercury__deconstruct__FunctorNumber_8, mercury__deconstruct__Arity_9, mercury__deconstruct__Arguments_10);
    }
#line 466 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 466 "deconstruct.m"
  }
#line 444 "deconstruct.m"
}

#line 267 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__limited_deconstruct_cc_3_p_0(
#line 267 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_11,
#line 267 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_4,
#line 267 "deconstruct.m"
  MR_Integer mercury__deconstruct__MaxArity_5,
#line 267 "deconstruct.m"
  MR_Word * mercury__deconstruct__MaybeResult_6)
#line 267 "deconstruct.m"
{
#line 482 "deconstruct.m"
  {
#line 482 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 482 "deconstruct.m"
    MR_String mercury__deconstruct__Functor_7;
#line 482 "deconstruct.m"
    MR_Integer mercury__deconstruct__Arity_8;
#line 482 "deconstruct.m"
    MR_Word mercury__deconstruct__Arguments_9;

#line 988 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__limited_deconstruct_cc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_11 ;
	Term = (MR_Word) mercury__deconstruct__Term_4 ;
	MaxArity =  mercury__deconstruct__MaxArity_5 ;
		{
#line 988 "deconstruct.m"
{
    #define EXPAND_INFO_TYPE    MR_Expand_Functor_Args_Limit_Info
    #define EXPAND_INFO_CALL    MR_expand_functor_args_limit
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define MAX_ARITY_ARG       MaxArity
    #define FUNCTOR_ARG         Functor
    #define ARITY_ARG           Arity
    #define ARGUMENTS_ARG       Arguments
    #define NONCANON            MR_NONCANON_CC
    /* This comment tells the compiler to define MR_ALLOC_ID. */
    #include "mercury_ml_deconstruct_body.h"
    #undef  EXPAND_INFO_TYPE
    #undef  EXPAND_INFO_CALL
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  MAX_ARITY_ARG
    #undef  FUNCTOR_ARG
    #undef  ARITY_ARG
    #undef  ARGUMENTS_ARG
    #undef  NONCANON

    if (!success) {
        /*
        ** Fill in some dummy values, to ensure that we don't try to return
        ** uninitialized memory to Mercury. It doesn't matter what we put here,
        ** except that we must have Arity > MaxArity. The casts cast away
        ** const.
        */

        Arity = MaxArity + 1;
        Functor = (MR_String) (MR_Integer) "";
        Arguments = MR_list_empty();
    }
}
#line 4542 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__Functor_7  = Functor;
	 mercury__deconstruct__Arity_8  = Arity;
	 mercury__deconstruct__Arguments_9  = Arguments;
#line 988 "deconstruct.m"
}
#line 484 "deconstruct.m"
    mercury__deconstruct__succeeded = (mercury__deconstruct__Arity_8 <= mercury__deconstruct__MaxArity_5);
#line 486 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 485 "deconstruct.m"
      {
#line 485 "deconstruct.m"
        MR_Tuple mercury__deconstruct__V_10_10;

#line 485 "deconstruct.m"
        {
#line 485 "deconstruct.m"
          mercury__deconstruct__V_10_10 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 485 "deconstruct.m"
          MR_hl_field(MR_mktag(0), mercury__deconstruct__V_10_10, 0) = ((MR_Box) (mercury__deconstruct__Functor_7));
#line 485 "deconstruct.m"
          MR_hl_field(MR_mktag(0), mercury__deconstruct__V_10_10, 1) = ((MR_Box) (mercury__deconstruct__Arity_8));
#line 485 "deconstruct.m"
          MR_hl_field(MR_mktag(0), mercury__deconstruct__V_10_10, 2) = ((MR_Box) (mercury__deconstruct__Arguments_9));
#line 485 "deconstruct.m"
        }
#line 485 "deconstruct.m"
        {
#line 485 "deconstruct.m"
          MR_Word base;
#line 485 "deconstruct.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 485 "deconstruct.m"
          *mercury__deconstruct__MaybeResult_6 = base;
#line 485 "deconstruct.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__deconstruct__V_10_10));
#line 485 "deconstruct.m"
        }
#line 485 "deconstruct.m"
      }
#line 486 "deconstruct.m"
    else
#line 487 "deconstruct.m"
      *mercury__deconstruct__MaybeResult_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "deconstruct.m"
  }
#line 267 "deconstruct.m"
}

#line 264 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_6_p_1(
#line 264 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_14,
#line 264 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_7,
#line 264 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_8,
#line 264 "deconstruct.m"
  MR_Integer mercury__deconstruct__MaxArity_9,
#line 264 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_10,
#line 264 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_11,
#line 264 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_12)
#line 264 "deconstruct.m"
{
#line 955 "deconstruct.m"
  {
#line 955 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 955 "deconstruct.m"
    {
#line 955 "deconstruct.m"
      return mercury__deconstruct__succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1(mercury__deconstruct__TypeInfo_for_T_14, mercury__deconstruct__Term_7, mercury__deconstruct__MaxArity_9, mercury__deconstruct__Functor_10, mercury__deconstruct__Arity_11, mercury__deconstruct__Arguments_12);
    }
#line 955 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 955 "deconstruct.m"
  }
#line 264 "deconstruct.m"
}

#line 262 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_6_p_0(
#line 262 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_14,
#line 262 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_7,
#line 262 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_8,
#line 262 "deconstruct.m"
  MR_Integer mercury__deconstruct__MaxArity_9,
#line 262 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_10,
#line 262 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_11,
#line 262 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_12)
#line 262 "deconstruct.m"
{
#line 926 "deconstruct.m"
  {
#line 926 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 926 "deconstruct.m"
    {
#line 926 "deconstruct.m"
      return mercury__deconstruct__succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_p_0(mercury__deconstruct__TypeInfo_for_T_14, mercury__deconstruct__Term_7, mercury__deconstruct__MaxArity_9, mercury__deconstruct__Functor_10, mercury__deconstruct__Arity_11, mercury__deconstruct__Arguments_12);
    }
#line 926 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 926 "deconstruct.m"
  }
#line 262 "deconstruct.m"
}

#line 247 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_5_p_2(
#line 247 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_11,
#line 247 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 247 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_7,
#line 247 "deconstruct.m"
  MR_Integer * mercury__deconstruct__FunctorNumber_8,
#line 247 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 247 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 247 "deconstruct.m"
{
#line 438 "deconstruct.m"
  {
#line 438 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 90 "builtin.opt"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_5_p_2

	MR_bool SUCCESS_INDICATOR;

		{
#line 90 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;

#line 4700 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 90 "builtin.opt"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 438 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 436 "deconstruct.m"
      {
#line 436 "deconstruct.m"
        return mercury__deconstruct__succeeded = mercury__erlang_rtti_implementation__deconstruct_du_5_p_2(mercury__deconstruct__TypeInfo_for_T_11, mercury__deconstruct__Term_6, mercury__deconstruct__NonCanon_7, mercury__deconstruct__FunctorNumber_8, mercury__deconstruct__Arity_9, mercury__deconstruct__Arguments_10);
      }
#line 438 "deconstruct.m"
    else
#line 439 "deconstruct.m"
      {
#line 439 "deconstruct.m"
        return mercury__deconstruct__succeeded = mercury__deconstruct__deconstruct_du_2_5_p_2(mercury__deconstruct__TypeInfo_for_T_11, mercury__deconstruct__Term_6, mercury__deconstruct__NonCanon_7, mercury__deconstruct__FunctorNumber_8, mercury__deconstruct__Arity_9, mercury__deconstruct__Arguments_10);
      }
#line 438 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 438 "deconstruct.m"
  }
#line 247 "deconstruct.m"
}

#line 246 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_5_p_1(
#line 246 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_11,
#line 246 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 246 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_7,
#line 246 "deconstruct.m"
  MR_Integer * mercury__deconstruct__FunctorNumber_8,
#line 246 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 246 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 246 "deconstruct.m"
{
#line 438 "deconstruct.m"
  {
#line 438 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 90 "builtin.opt"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_5_p_1

	MR_bool SUCCESS_INDICATOR;

		{
#line 90 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;

#line 4763 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 90 "builtin.opt"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 438 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 436 "deconstruct.m"
      {
#line 436 "deconstruct.m"
        return mercury__deconstruct__succeeded = mercury__erlang_rtti_implementation__deconstruct_du_5_p_1(mercury__deconstruct__TypeInfo_for_T_11, mercury__deconstruct__Term_6, mercury__deconstruct__NonCanon_7, mercury__deconstruct__FunctorNumber_8, mercury__deconstruct__Arity_9, mercury__deconstruct__Arguments_10);
      }
#line 438 "deconstruct.m"
    else
#line 439 "deconstruct.m"
      {
#line 439 "deconstruct.m"
        return mercury__deconstruct__succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1(mercury__deconstruct__TypeInfo_for_T_11, mercury__deconstruct__Term_6, mercury__deconstruct__FunctorNumber_8, mercury__deconstruct__Arity_9, mercury__deconstruct__Arguments_10);
      }
#line 438 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 438 "deconstruct.m"
  }
#line 246 "deconstruct.m"
}

#line 245 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_5_p_0(
#line 245 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_11,
#line 245 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 245 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_7,
#line 245 "deconstruct.m"
  MR_Integer * mercury__deconstruct__FunctorNumber_8,
#line 245 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 245 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 245 "deconstruct.m"
{
#line 438 "deconstruct.m"
  {
#line 438 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 90 "builtin.opt"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 90 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;

#line 4826 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 90 "builtin.opt"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 438 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 436 "deconstruct.m"
      {
#line 436 "deconstruct.m"
        return mercury__deconstruct__succeeded = mercury__erlang_rtti_implementation__deconstruct_du_5_p_0(mercury__deconstruct__TypeInfo_for_T_11, mercury__deconstruct__Term_6, mercury__deconstruct__NonCanon_7, mercury__deconstruct__FunctorNumber_8, mercury__deconstruct__Arity_9, mercury__deconstruct__Arguments_10);
      }
#line 438 "deconstruct.m"
    else
#line 439 "deconstruct.m"
      {
#line 439 "deconstruct.m"
        return mercury__deconstruct__succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0(mercury__deconstruct__TypeInfo_for_T_11, mercury__deconstruct__Term_6, mercury__deconstruct__FunctorNumber_8, mercury__deconstruct__Arity_9, mercury__deconstruct__Arguments_10);
      }
#line 438 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 438 "deconstruct.m"
  }
#line 245 "deconstruct.m"
}

#line 231 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__deconstruct_5_p_3(
#line 231 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 231 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 231 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_7,
#line 231 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_8,
#line 231 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 231 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 231 "deconstruct.m"
{
#line 426 "deconstruct.m"
  {
#line 426 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 426 "deconstruct.m"
    if ((mercury__deconstruct__NonCanon_7 == (MR_Integer) 1))
#line 874 "deconstruct.m"
      {
#line 877 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_5_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_13 ;
	Term = (MR_Word) mercury__deconstruct__Term_6 ;
		{
#line 877 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#undef FUNCTOR_NUMBER_ARG
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 4917 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_8  = Functor;
	 *mercury__deconstruct__Arity_9  = Arity;
	 *mercury__deconstruct__Arguments_10  = Arguments;
#line 877 "deconstruct.m"
}
#line 874 "deconstruct.m"
      }
#line 426 "deconstruct.m"
    else
#line 426 "deconstruct.m"
      if ((mercury__deconstruct__NonCanon_7 == (MR_Integer) 0))
#line 847 "deconstruct.m"
        {
#line 847 "deconstruct.m"
          MR_Integer mercury__deconstruct__V_11_11;

#line 851 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_5_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_13 ;
	Term = (MR_Word) mercury__deconstruct__Term_6 ;
		{
#line 851 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 4974 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_8  = Functor;
	 mercury__deconstruct__V_11_11  = FunctorNumber;
	 *mercury__deconstruct__Arity_9  = Arity;
	 *mercury__deconstruct__Arguments_10  = Arguments;
#line 851 "deconstruct.m"
}
#line 847 "deconstruct.m"
        }
#line 426 "deconstruct.m"
      else
#line 899 "deconstruct.m"
        {
#line 899 "deconstruct.m"
          MR_Integer mercury__deconstruct__V_12_12;

#line 903 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_5_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_13 ;
	Term = (MR_Word) mercury__deconstruct__Term_6 ;
		{
#line 903 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
/* This comment tells the compiler to define MR_ALLOC_ID. */
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}
#line 5030 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_8  = Functor;
	 mercury__deconstruct__V_12_12  = FunctorNumber;
	 *mercury__deconstruct__Arity_9  = Arity;
	 *mercury__deconstruct__Arguments_10  = Arguments;
#line 903 "deconstruct.m"
}
#line 899 "deconstruct.m"
        }
#line 426 "deconstruct.m"
  }
#line 231 "deconstruct.m"
}

#line 230 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__deconstruct_5_p_2(
#line 230 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 230 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 230 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_7,
#line 230 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_8,
#line 230 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 230 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 230 "deconstruct.m"
{
#line 899 "deconstruct.m"
  {
#line 899 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 899 "deconstruct.m"
    {
#line 899 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_5_p_2(mercury__deconstruct__TypeInfo_for_T_13, mercury__deconstruct__Term_6, mercury__deconstruct__Functor_8, mercury__deconstruct__Arity_9, mercury__deconstruct__Arguments_10);
#line 899 "deconstruct.m"
      return;
    }
#line 899 "deconstruct.m"
  }
#line 230 "deconstruct.m"
}

#line 229 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__deconstruct_5_p_1(
#line 229 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 229 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 229 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_7,
#line 229 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_8,
#line 229 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 229 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 229 "deconstruct.m"
{
#line 874 "deconstruct.m"
  {
#line 874 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 874 "deconstruct.m"
    {
#line 874 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_5_p_1(mercury__deconstruct__TypeInfo_for_T_13, mercury__deconstruct__Term_6, mercury__deconstruct__Functor_8, mercury__deconstruct__Arity_9, mercury__deconstruct__Arguments_10);
#line 874 "deconstruct.m"
      return;
    }
#line 874 "deconstruct.m"
  }
#line 229 "deconstruct.m"
}

#line 228 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__deconstruct_5_p_0(
#line 228 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_13,
#line 228 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_6,
#line 228 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_7,
#line 228 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_8,
#line 228 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_9,
#line 228 "deconstruct.m"
  MR_Word * mercury__deconstruct__Arguments_10)
#line 228 "deconstruct.m"
{
#line 847 "deconstruct.m"
  {
#line 847 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 847 "deconstruct.m"
    {
#line 847 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_5_p_0(mercury__deconstruct__TypeInfo_for_T_13, mercury__deconstruct__Term_6, mercury__deconstruct__Functor_8, mercury__deconstruct__Arity_9, mercury__deconstruct__Arguments_10);
#line 847 "deconstruct.m"
      return;
    }
#line 847 "deconstruct.m"
  }
#line 228 "deconstruct.m"
}

#line 210 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__det_named_arg_4_p_3(
#line 210 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_16,
#line 210 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_15,
#line 210 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 210 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 210 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 210 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 210 "deconstruct.m"
{
#line 418 "deconstruct.m"
  {
#line 418 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 418 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_9;

#line 404 "deconstruct.m"
    if ((mercury__deconstruct__NonCanon_6 == (MR_Integer) 1))
#line 737 "deconstruct.m"
      {
#line 740 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__det_named_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_16 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Name =  mercury__deconstruct__Name_7 ;
		{
#line 740 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}
#line 5211 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 740 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 737 "deconstruct.m"
      }
#line 404 "deconstruct.m"
    else
#line 404 "deconstruct.m"
      if ((mercury__deconstruct__NonCanon_6 == (MR_Integer) 0))
#line 714 "deconstruct.m"
        {
#line 717 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__det_named_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_16 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Name =  mercury__deconstruct__Name_7 ;
		{
#line 717 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}
#line 5263 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 717 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 714 "deconstruct.m"
        }
#line 404 "deconstruct.m"
      else
#line 408 "deconstruct.m"
        {
#line 408 "deconstruct.m"
          MR_Word mercury__deconstruct__TypeCtorInfo_3_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 408 "deconstruct.m"
          MR_Word mercury__deconstruct__Univ0_10;
#line 408 "deconstruct.m"
          MR_Integer mercury__deconstruct__Success_11;
#line 408 "deconstruct.m"
          MR_Word mercury__deconstruct__V_12_12;

#line 8 "univ.opt"
          {
#line 8 "univ.opt"
            mercury__univ__type_to_univ_2_p_0(mercury__deconstruct__TypeCtorInfo_3_26, ((MR_Box) ((MR_Integer) 0)), &mercury__deconstruct__V_12_12);
          }
#line 764 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__det_named_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_16 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Name =  mercury__deconstruct__Name_7 ;
	DummyUniv =  mercury__deconstruct__V_12_12 ;
		{
#line 764 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

}
#line 5335 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__Univ0_10  = Argument;
	 mercury__deconstruct__Success_11  = Success;
#line 764 "deconstruct.m"
}
#line 410 "deconstruct.m"
          mercury__deconstruct__succeeded = (mercury__deconstruct__Success_11 == (MR_Integer) 0);
#line 410 "deconstruct.m"
          mercury__deconstruct__succeeded = !(mercury__deconstruct__succeeded);
#line 412 "deconstruct.m"
          if (mercury__deconstruct__succeeded)
#line 411 "deconstruct.m"
            mercury__deconstruct__Univ_9 = mercury__deconstruct__Univ0_10;
#line 412 "deconstruct.m"
          else
#line 413 "deconstruct.m"
            {
#line 413 "deconstruct.m"
              {
#line 413 "deconstruct.m"
                mercury__require__error_1_p_0((MR_String) "det_named_arg: no argument with that name");
#line 413 "deconstruct.m"
                return;
              }
#line 413 "deconstruct.m"
            }
#line 408 "deconstruct.m"
          mercury__deconstruct__succeeded = MR_TRUE;
#line 408 "deconstruct.m"
        }
#line 418 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 12 "univ.opt"
      {
#line 12 "univ.opt"
        *mercury__deconstruct__TypeInfo_for_T_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 0)));
#line 12 "univ.opt"
        *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 1));
#line 12 "univ.opt"
      }
#line 418 "deconstruct.m"
    else
#line 419 "deconstruct.m"
      {
#line 419 "deconstruct.m"
        {
#line 419 "deconstruct.m"
          mercury__require__error_1_p_0((MR_String) "det_named_arg: no argument with that name");
#line 419 "deconstruct.m"
          return;
        }
#line 419 "deconstruct.m"
      }
#line 418 "deconstruct.m"
  }
#line 210 "deconstruct.m"
}

#line 209 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__det_named_arg_4_p_2(
#line 209 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_16,
#line 209 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_15,
#line 209 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 209 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 209 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 209 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 209 "deconstruct.m"
{
#line 418 "deconstruct.m"
  {
#line 418 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 418 "deconstruct.m"
    {
#line 418 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_p_2(mercury__deconstruct__TypeInfo_for_T_16, mercury__deconstruct__TypeInfo_for_T_15, mercury__deconstruct__Term_5, mercury__deconstruct__Name_7, mercury__deconstruct__Argument_8);
#line 418 "deconstruct.m"
      return;
    }
#line 418 "deconstruct.m"
  }
#line 209 "deconstruct.m"
}

#line 208 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__det_named_arg_4_p_1(
#line 208 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_16,
#line 208 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_15,
#line 208 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 208 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 208 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 208 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 208 "deconstruct.m"
{
#line 418 "deconstruct.m"
  {
#line 418 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 418 "deconstruct.m"
    {
#line 418 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1(mercury__deconstruct__TypeInfo_for_T_16, mercury__deconstruct__TypeInfo_for_T_15, mercury__deconstruct__Term_5, mercury__deconstruct__Name_7, mercury__deconstruct__Argument_8);
#line 418 "deconstruct.m"
      return;
    }
#line 418 "deconstruct.m"
  }
#line 208 "deconstruct.m"
}

#line 207 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__det_named_arg_4_p_0(
#line 207 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_16,
#line 207 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_15,
#line 207 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 207 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 207 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 207 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 207 "deconstruct.m"
{
#line 418 "deconstruct.m"
  {
#line 418 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 418 "deconstruct.m"
    {
#line 418 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0(mercury__deconstruct__TypeInfo_for_T_16, mercury__deconstruct__TypeInfo_for_T_15, mercury__deconstruct__Term_5, mercury__deconstruct__Name_7, mercury__deconstruct__Argument_8);
#line 418 "deconstruct.m"
      return;
    }
#line 418 "deconstruct.m"
  }
#line 207 "deconstruct.m"
}

#line 199 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__det_arg_4_p_3(
#line 199 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_20,
#line 199 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_19,
#line 199 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 199 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 199 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 199 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 199 "deconstruct.m"
{
#line 373 "deconstruct.m"
  {
#line 373 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 373 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_10;

#line 381 "deconstruct.m"
    if ((mercury__deconstruct__NonCanon_6 == (MR_Integer) 1))
#line 385 "deconstruct.m"
      {
#line 385 "deconstruct.m"
        MR_Word mercury__deconstruct__Univ0_16;

#line 669 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__det_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_20 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Index =  mercury__deconstruct__Index_7 ;
		{
#line 669 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 5561 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ0_16  = Argument;
#line 669 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 385 "deconstruct.m"
        if (mercury__deconstruct__succeeded)
#line 384 "deconstruct.m"
          mercury__deconstruct__Univ_10 = mercury__deconstruct__Univ0_16;
#line 385 "deconstruct.m"
        else
#line 386 "deconstruct.m"
          {
#line 386 "deconstruct.m"
            {
#line 386 "deconstruct.m"
              mercury__require__error_1_p_0((MR_String) "det_arg: argument number out of range");
#line 386 "deconstruct.m"
              return;
            }
#line 386 "deconstruct.m"
          }
#line 385 "deconstruct.m"
      }
#line 381 "deconstruct.m"
    else
#line 381 "deconstruct.m"
      if ((mercury__deconstruct__NonCanon_6 == (MR_Integer) 0))
#line 378 "deconstruct.m"
        {
#line 378 "deconstruct.m"
          MR_Word mercury__deconstruct__Univ0_9;

#line 648 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__det_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_20 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Index =  mercury__deconstruct__Index_7 ;
		{
#line 648 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 5631 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ0_9  = Argument;
#line 648 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 378 "deconstruct.m"
          if (mercury__deconstruct__succeeded)
#line 377 "deconstruct.m"
            mercury__deconstruct__Univ_10 = mercury__deconstruct__Univ0_9;
#line 378 "deconstruct.m"
          else
#line 379 "deconstruct.m"
            {
#line 379 "deconstruct.m"
              {
#line 379 "deconstruct.m"
                mercury__require__error_1_p_0((MR_String) "det_arg: argument number out of range");
#line 379 "deconstruct.m"
                return;
              }
#line 379 "deconstruct.m"
            }
#line 378 "deconstruct.m"
        }
#line 381 "deconstruct.m"
      else
#line 389 "deconstruct.m"
        {
#line 389 "deconstruct.m"
          MR_Word mercury__deconstruct__TypeCtorInfo_3_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 389 "deconstruct.m"
          MR_Integer mercury__deconstruct__Success_11;
#line 389 "deconstruct.m"
          MR_Word mercury__deconstruct__V_12_12;
#line 389 "deconstruct.m"
          MR_Word mercury__deconstruct__Univ0_18;

#line 8 "univ.opt"
          {
#line 8 "univ.opt"
            mercury__univ__type_to_univ_2_p_0(mercury__deconstruct__TypeCtorInfo_3_38, ((MR_Box) ((MR_Integer) 0)), &mercury__deconstruct__V_12_12);
          }
#line 691 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__det_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_20 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Index =  mercury__deconstruct__Index_7 ;
	DummyUniv =  mercury__deconstruct__V_12_12 ;
		{
#line 691 "deconstruct.m"
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
}
#line 5717 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__Univ0_18  = Argument;
	 mercury__deconstruct__Success_11  = Success;
#line 691 "deconstruct.m"
}
#line 391 "deconstruct.m"
          mercury__deconstruct__succeeded = (mercury__deconstruct__Success_11 == (MR_Integer) 0);
#line 391 "deconstruct.m"
          mercury__deconstruct__succeeded = !(mercury__deconstruct__succeeded);
#line 393 "deconstruct.m"
          if (mercury__deconstruct__succeeded)
#line 392 "deconstruct.m"
            mercury__deconstruct__Univ_10 = mercury__deconstruct__Univ0_18;
#line 393 "deconstruct.m"
          else
#line 394 "deconstruct.m"
            {
#line 394 "deconstruct.m"
              {
#line 394 "deconstruct.m"
                mercury__require__error_1_p_0((MR_String) "det_arg: argument number out of range");
#line 394 "deconstruct.m"
                return;
              }
#line 394 "deconstruct.m"
            }
#line 389 "deconstruct.m"
        }
#line 12 "univ.opt"
    *mercury__deconstruct__TypeInfo_for_T_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_10, (MR_Integer) 0)));
#line 12 "univ.opt"
    *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_10, (MR_Integer) 1));
#line 373 "deconstruct.m"
  }
#line 199 "deconstruct.m"
}

#line 198 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__det_arg_4_p_2(
#line 198 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_20,
#line 198 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_19,
#line 198 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 198 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 198 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 198 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 198 "deconstruct.m"
{
#line 373 "deconstruct.m"
  {
#line 373 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 373 "deconstruct.m"
    {
#line 373 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_p_2(mercury__deconstruct__TypeInfo_for_T_20, mercury__deconstruct__TypeInfo_for_T_19, mercury__deconstruct__Term_5, mercury__deconstruct__Index_7, mercury__deconstruct__Argument_8);
#line 373 "deconstruct.m"
      return;
    }
#line 373 "deconstruct.m"
  }
#line 198 "deconstruct.m"
}

#line 197 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__det_arg_4_p_1(
#line 197 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_20,
#line 197 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_19,
#line 197 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 197 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 197 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 197 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 197 "deconstruct.m"
{
#line 373 "deconstruct.m"
  {
#line 373 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 373 "deconstruct.m"
    {
#line 373 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_p_1(mercury__deconstruct__TypeInfo_for_T_20, mercury__deconstruct__TypeInfo_for_T_19, mercury__deconstruct__Term_5, mercury__deconstruct__Index_7, mercury__deconstruct__Argument_8);
#line 373 "deconstruct.m"
      return;
    }
#line 373 "deconstruct.m"
  }
#line 197 "deconstruct.m"
}

#line 196 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__det_arg_4_p_0(
#line 196 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_20,
#line 196 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_19,
#line 196 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 196 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 196 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 196 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 196 "deconstruct.m"
{
#line 373 "deconstruct.m"
  {
#line 373 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 373 "deconstruct.m"
    {
#line 373 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_p_0(mercury__deconstruct__TypeInfo_for_T_20, mercury__deconstruct__TypeInfo_for_T_19, mercury__deconstruct__Term_5, mercury__deconstruct__Index_7, mercury__deconstruct__Argument_8);
#line 373 "deconstruct.m"
      return;
    }
#line 373 "deconstruct.m"
  }
#line 196 "deconstruct.m"
}

#line 188 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__named_arg_cc_3_p_0(
#line 188 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_11,
#line 188 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_4,
#line 188 "deconstruct.m"
  MR_String mercury__deconstruct__Name_5,
#line 188 "deconstruct.m"
  MR_Word * mercury__deconstruct__MaybeArg_6)
#line 188 "deconstruct.m"
{
#line 357 "deconstruct.m"
  {
#line 357 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 357 "deconstruct.m"
    MR_Word mercury__deconstruct__TypeCtorInfo_3_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 357 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_7;
#line 357 "deconstruct.m"
    MR_Integer mercury__deconstruct__Success_8;
#line 357 "deconstruct.m"
    MR_Word mercury__deconstruct__V_9_9;

#line 8 "univ.opt"
    {
#line 8 "univ.opt"
      mercury__univ__type_to_univ_2_p_0(mercury__deconstruct__TypeCtorInfo_3_14, ((MR_Box) ((MR_Integer) 0)), &mercury__deconstruct__V_9_9);
    }
#line 764 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__named_arg_cc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_11 ;
	Term = (MR_Word) mercury__deconstruct__Term_4 ;
	Name =  mercury__deconstruct__Name_5 ;
	DummyUniv =  mercury__deconstruct__V_9_9 ;
		{
#line 764 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

}
#line 5932 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__Univ_7  = Argument;
	 mercury__deconstruct__Success_8  = Success;
#line 764 "deconstruct.m"
}
#line 359 "deconstruct.m"
    mercury__deconstruct__succeeded = (mercury__deconstruct__Success_8 == (MR_Integer) 0);
#line 359 "deconstruct.m"
    mercury__deconstruct__succeeded = !(mercury__deconstruct__succeeded);
#line 361 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 360 "deconstruct.m"
      {
#line 360 "deconstruct.m"
        MR_Word mercury__deconstruct__TypeInfo_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_7, (MR_Integer) 0)));
#line 360 "deconstruct.m"
        MR_Box mercury__deconstruct__V_10_10 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_7, (MR_Integer) 1));

#line 360 "deconstruct.m"
        {
#line 360 "deconstruct.m"
          MR_Word base;
#line 360 "deconstruct.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "deconstruct.m"
          *mercury__deconstruct__MaybeArg_6 = base;
#line 360 "deconstruct.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__deconstruct__TypeInfo_12_12));
#line 360 "deconstruct.m"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__deconstruct__V_10_10;
#line 360 "deconstruct.m"
        }
#line 360 "deconstruct.m"
      }
#line 361 "deconstruct.m"
    else
#line 362 "deconstruct.m"
      *mercury__deconstruct__MaybeArg_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 357 "deconstruct.m"
  }
#line 188 "deconstruct.m"
}

#line 183 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__named_arg_4_p_2(
#line 183 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 183 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_11,
#line 183 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 183 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 183 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 183 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 183 "deconstruct.m"
{
#line 344 "deconstruct.m"
  {
#line 344 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 344 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_9;

#line 348 "deconstruct.m"
    if ((mercury__deconstruct__NonCanon_6 == (MR_Integer) 1))
#line 737 "deconstruct.m"
      {
#line 740 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__named_arg_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Name =  mercury__deconstruct__Name_7 ;
		{
#line 740 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}
#line 6040 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 740 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 737 "deconstruct.m"
      }
#line 348 "deconstruct.m"
    else
#line 714 "deconstruct.m"
      {
#line 717 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__named_arg_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Name =  mercury__deconstruct__Name_7 ;
		{
#line 717 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}
#line 6090 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 717 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 714 "deconstruct.m"
      }
#line 344 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 344 "deconstruct.m"
      {
#line 12 "univ.opt"
        *mercury__deconstruct__TypeInfo_for_T_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 0)));
#line 12 "univ.opt"
        *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 1));
#line 12 "univ.opt"
        mercury__deconstruct__succeeded = MR_TRUE;
#line 344 "deconstruct.m"
      }
#line 344 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 344 "deconstruct.m"
  }
#line 183 "deconstruct.m"
}

#line 182 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__named_arg_4_p_1(
#line 182 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 182 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_11,
#line 182 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 182 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 182 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 182 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 182 "deconstruct.m"
{
#line 344 "deconstruct.m"
  {
#line 344 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 344 "deconstruct.m"
    {
#line 344 "deconstruct.m"
      return mercury__deconstruct__succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1(mercury__deconstruct__TypeInfo_for_T_12, mercury__deconstruct__TypeInfo_for_T_11, mercury__deconstruct__Term_5, mercury__deconstruct__Name_7, mercury__deconstruct__Argument_8);
    }
#line 344 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 344 "deconstruct.m"
  }
#line 182 "deconstruct.m"
}

#line 181 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__named_arg_4_p_0(
#line 181 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 181 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_11,
#line 181 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 181 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 181 "deconstruct.m"
  MR_String mercury__deconstruct__Name_7,
#line 181 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 181 "deconstruct.m"
{
#line 344 "deconstruct.m"
  {
#line 344 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 344 "deconstruct.m"
    {
#line 344 "deconstruct.m"
      return mercury__deconstruct__succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0(mercury__deconstruct__TypeInfo_for_T_12, mercury__deconstruct__TypeInfo_for_T_11, mercury__deconstruct__Term_5, mercury__deconstruct__Name_7, mercury__deconstruct__Argument_8);
    }
#line 344 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 344 "deconstruct.m"
  }
#line 181 "deconstruct.m"
}

#line 172 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__arg_cc_3_p_0(
#line 172 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_11,
#line 172 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_4,
#line 172 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_5,
#line 172 "deconstruct.m"
  MR_Word * mercury__deconstruct__MaybeArg_6)
#line 172 "deconstruct.m"
{
#line 336 "deconstruct.m"
  {
#line 336 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 336 "deconstruct.m"
    MR_Word mercury__deconstruct__TypeCtorInfo_3_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 336 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_7;
#line 336 "deconstruct.m"
    MR_Integer mercury__deconstruct__Success_8;
#line 336 "deconstruct.m"
    MR_Word mercury__deconstruct__V_9_9;

#line 8 "univ.opt"
    {
#line 8 "univ.opt"
      mercury__univ__type_to_univ_2_p_0(mercury__deconstruct__TypeCtorInfo_3_14, ((MR_Box) ((MR_Integer) 0)), &mercury__deconstruct__V_9_9);
    }
#line 691 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__arg_cc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_11 ;
	Term = (MR_Word) mercury__deconstruct__Term_4 ;
	Index =  mercury__deconstruct__Index_5 ;
	DummyUniv =  mercury__deconstruct__V_9_9 ;
		{
#line 691 "deconstruct.m"
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
}
#line 6259 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__deconstruct__Univ_7  = Argument;
	 mercury__deconstruct__Success_8  = Success;
#line 691 "deconstruct.m"
}
#line 338 "deconstruct.m"
    mercury__deconstruct__succeeded = (mercury__deconstruct__Success_8 == (MR_Integer) 0);
#line 338 "deconstruct.m"
    mercury__deconstruct__succeeded = !(mercury__deconstruct__succeeded);
#line 340 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 339 "deconstruct.m"
      {
#line 339 "deconstruct.m"
        MR_Word mercury__deconstruct__TypeInfo_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_7, (MR_Integer) 0)));
#line 339 "deconstruct.m"
        MR_Box mercury__deconstruct__V_10_10 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_7, (MR_Integer) 1));

#line 339 "deconstruct.m"
        {
#line 339 "deconstruct.m"
          MR_Word base;
#line 339 "deconstruct.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "deconstruct.m"
          *mercury__deconstruct__MaybeArg_6 = base;
#line 339 "deconstruct.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__deconstruct__TypeInfo_12_12));
#line 339 "deconstruct.m"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__deconstruct__V_10_10;
#line 339 "deconstruct.m"
        }
#line 339 "deconstruct.m"
      }
#line 340 "deconstruct.m"
    else
#line 341 "deconstruct.m"
      *mercury__deconstruct__MaybeArg_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "deconstruct.m"
  }
#line 172 "deconstruct.m"
}

#line 162 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__arg_4_p_2(
#line 162 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 162 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_11,
#line 162 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 162 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 162 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 162 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 162 "deconstruct.m"
{
#line 323 "deconstruct.m"
  {
#line 323 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;
#line 323 "deconstruct.m"
    MR_Word mercury__deconstruct__Univ_9;

#line 327 "deconstruct.m"
    if ((mercury__deconstruct__NonCanon_6 == (MR_Integer) 1))
#line 666 "deconstruct.m"
      {
#line 669 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__arg_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Index =  mercury__deconstruct__Index_7 ;
		{
#line 669 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 6365 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 669 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 666 "deconstruct.m"
      }
#line 327 "deconstruct.m"
    else
#line 645 "deconstruct.m"
      {
#line 648 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__arg_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_12 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
	Index =  mercury__deconstruct__Index_7 ;
		{
#line 648 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}
#line 6413 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__deconstruct__Univ_9  = Argument;
#line 648 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 645 "deconstruct.m"
      }
#line 323 "deconstruct.m"
    if (mercury__deconstruct__succeeded)
#line 323 "deconstruct.m"
      {
#line 12 "univ.opt"
        *mercury__deconstruct__TypeInfo_for_T_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 0)));
#line 12 "univ.opt"
        *mercury__deconstruct__Argument_8 = (MR_hl_field(MR_mktag(0), mercury__deconstruct__Univ_9, (MR_Integer) 1));
#line 12 "univ.opt"
        mercury__deconstruct__succeeded = MR_TRUE;
#line 323 "deconstruct.m"
      }
#line 323 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 323 "deconstruct.m"
  }
#line 162 "deconstruct.m"
}

#line 161 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__arg_4_p_1(
#line 161 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 161 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_11,
#line 161 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 161 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 161 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 161 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 161 "deconstruct.m"
{
#line 323 "deconstruct.m"
  {
#line 323 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 323 "deconstruct.m"
    {
#line 323 "deconstruct.m"
      return mercury__deconstruct__succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_p_1(mercury__deconstruct__TypeInfo_for_T_12, mercury__deconstruct__TypeInfo_for_T_11, mercury__deconstruct__Term_5, mercury__deconstruct__Index_7, mercury__deconstruct__Argument_8);
    }
#line 323 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 323 "deconstruct.m"
  }
#line 161 "deconstruct.m"
}

#line 160 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__arg_4_p_0(
#line 160 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_12,
#line 160 "deconstruct.m"
  MR_Word * mercury__deconstruct__TypeInfo_for_T_11,
#line 160 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 160 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 160 "deconstruct.m"
  MR_Integer mercury__deconstruct__Index_7,
#line 160 "deconstruct.m"
  MR_Box * mercury__deconstruct__Argument_8)
#line 160 "deconstruct.m"
{
#line 323 "deconstruct.m"
  {
#line 323 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 323 "deconstruct.m"
    {
#line 323 "deconstruct.m"
      return mercury__deconstruct__succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_p_0(mercury__deconstruct__TypeInfo_for_T_12, mercury__deconstruct__TypeInfo_for_T_11, mercury__deconstruct__Term_5, mercury__deconstruct__Index_7, mercury__deconstruct__Argument_8);
    }
#line 323 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 323 "deconstruct.m"
  }
#line 160 "deconstruct.m"
}

#line 144 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__functor_number_cc_3_p_0(
#line 144 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_7,
#line 144 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 144 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__2_2,
#line 144 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3)
#line 144 "deconstruct.m"
{
#line 578 "deconstruct.m"
  {
#line 578 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 581 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__functor_number_cc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_7 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
		{
#line 581 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#undef  FUNCTOR_ARG
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  NONCANON

SUCCESS_INDICATOR = (FunctorNumber >= 0);
}
#line 6560 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__deconstruct__HeadVar__2_2  = FunctorNumber;
	 *mercury__deconstruct__HeadVar__3_3  = Arity;
#line 581 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 578 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 578 "deconstruct.m"
  }
#line 144 "deconstruct.m"
}

#line 135 "deconstruct.m"
MR_bool MR_CALL 
mercury__deconstruct__functor_number_3_p_0(
#line 135 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_8,
#line 135 "deconstruct.m"
  MR_Box mercury__deconstruct__HeadVar__1_1,
#line 135 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__2_2,
#line 135 "deconstruct.m"
  MR_Integer * mercury__deconstruct__HeadVar__3_3)
#line 135 "deconstruct.m"
{
#line 558 "deconstruct.m"
  {
#line 558 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 561 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__functor_number_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_8 ;
	Term = (MR_Word) mercury__deconstruct__HeadVar__1_1 ;
		{
#line 561 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#undef  FUNCTOR_ARG
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  NONCANON

SUCCESS_INDICATOR = (FunctorNumber >= 0);
}
#line 6626 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__deconstruct__HeadVar__2_2  = FunctorNumber;
	 *mercury__deconstruct__HeadVar__3_3  = Arity;
#line 561 "deconstruct.m"
	}
mercury__deconstruct__succeeded  = SUCCESS_INDICATOR;
}
#line 558 "deconstruct.m"
    return mercury__deconstruct__succeeded;
#line 558 "deconstruct.m"
  }
#line 135 "deconstruct.m"
}

#line 126 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__functor_4_p_3(
#line 126 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_9,
#line 126 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 126 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 126 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_7,
#line 126 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_8)
#line 126 "deconstruct.m"
{
#line 315 "deconstruct.m"
  {
#line 315 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 315 "deconstruct.m"
    if ((mercury__deconstruct__NonCanon_6 == (MR_Integer) 1))
#line 513 "deconstruct.m"
      {
#line 516 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__functor_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_9 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
		{
#line 516 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}
#line 6694 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_7  = Functor;
	 *mercury__deconstruct__Arity_8  = Arity;
#line 516 "deconstruct.m"
}
#line 513 "deconstruct.m"
      }
#line 315 "deconstruct.m"
    else
#line 315 "deconstruct.m"
      if ((mercury__deconstruct__NonCanon_6 == (MR_Integer) 0))
#line 496 "deconstruct.m"
        {
#line 499 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__functor_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_9 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
		{
#line 499 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}
#line 6736 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_7  = Functor;
	 *mercury__deconstruct__Arity_8  = Arity;
#line 499 "deconstruct.m"
}
#line 496 "deconstruct.m"
        }
#line 315 "deconstruct.m"
      else
#line 530 "deconstruct.m"
        {
#line 533 "deconstruct.m"
{
#define MR_PROC_LABEL mercury__deconstruct__functor_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__deconstruct__TypeInfo_for_T_9 ;
	Term = (MR_Word) mercury__deconstruct__Term_5 ;
		{
#line 533 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}
#line 6776 "deconstruct.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__deconstruct__Functor_7  = Functor;
	 *mercury__deconstruct__Arity_8  = Arity;
#line 533 "deconstruct.m"
}
#line 530 "deconstruct.m"
        }
#line 315 "deconstruct.m"
  }
#line 126 "deconstruct.m"
}

#line 125 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__functor_4_p_2(
#line 125 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_9,
#line 125 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 125 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 125 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_7,
#line 125 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_8)
#line 125 "deconstruct.m"
{
#line 530 "deconstruct.m"
  {
#line 530 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 530 "deconstruct.m"
    {
#line 530 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_50_4_p_2(mercury__deconstruct__TypeInfo_for_T_9, mercury__deconstruct__Term_5, mercury__deconstruct__Functor_7, mercury__deconstruct__Arity_8);
#line 530 "deconstruct.m"
      return;
    }
#line 530 "deconstruct.m"
  }
#line 125 "deconstruct.m"
}

#line 124 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__functor_4_p_1(
#line 124 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_9,
#line 124 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 124 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 124 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_7,
#line 124 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_8)
#line 124 "deconstruct.m"
{
#line 513 "deconstruct.m"
  {
#line 513 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 513 "deconstruct.m"
    {
#line 513 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_49_4_p_1(mercury__deconstruct__TypeInfo_for_T_9, mercury__deconstruct__Term_5, mercury__deconstruct__Functor_7, mercury__deconstruct__Arity_8);
#line 513 "deconstruct.m"
      return;
    }
#line 513 "deconstruct.m"
  }
#line 124 "deconstruct.m"
}

#line 123 "deconstruct.m"
void MR_CALL 
mercury__deconstruct__functor_4_p_0(
#line 123 "deconstruct.m"
  MR_Word mercury__deconstruct__TypeInfo_for_T_9,
#line 123 "deconstruct.m"
  MR_Box mercury__deconstruct__Term_5,
#line 123 "deconstruct.m"
  MR_Word mercury__deconstruct__NonCanon_6,
#line 123 "deconstruct.m"
  MR_String * mercury__deconstruct__Functor_7,
#line 123 "deconstruct.m"
  MR_Integer * mercury__deconstruct__Arity_8)
#line 123 "deconstruct.m"
{
#line 496 "deconstruct.m"
  {
#line 496 "deconstruct.m"
    MR_bool mercury__deconstruct__succeeded;

#line 496 "deconstruct.m"
    {
#line 496 "deconstruct.m"
      mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_48_4_p_0(mercury__deconstruct__TypeInfo_for_T_9, mercury__deconstruct__Term_5, mercury__deconstruct__Functor_7, mercury__deconstruct__Arity_8);
#line 496 "deconstruct.m"
      return;
    }
#line 496 "deconstruct.m"
  }
#line 123 "deconstruct.m"
}

void mercury__deconstruct__init(void)
{
}

void mercury__deconstruct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__deconstruct__deconstruct__type_ctor_info_maybe_arg_0);
	MR_register_type_ctor_info(&mercury__deconstruct__deconstruct__type_ctor_info_noncanon_handling_0);
}

void mercury__deconstruct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module deconstruct. */
