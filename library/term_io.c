/*
** Automatically generated from `term_io.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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


/* :- module term_io. */
/* :- implementation. */

/*
INIT mercury__term_io__init
ENDINIT
*/

#include "term_io.mih"


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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 86 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0;

#line 89 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1;

#line 92 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_value_ordered_adjacent_to_graphic_token_0[2];

#line 95 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0[2];

#line 98 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0[2];

#line 101 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_0;

#line 104 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_1[2];

#line 107 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_1;

#line 110 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__varset__pti_varset_1__pseudo_1;

#line 113 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__term__pti_term_1__pseudo_1;

#line 116 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_2[2];

#line 119 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_2;

#line 122 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_0[1];

#line 125 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_1[1];

#line 128 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_2[1];

#line 131 "term_io.c"
static const MR_DuPtagLayout mercury__term_io__term_io__du_ptag_ordered_read_term_1[3];

#line 134 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_name_ordered_read_term_1[3];

#line 137 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_read_term_1[3];

#line 140 "term_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0;

#line 143 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
#line 146 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 148 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2);

#line 151 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
#line 154 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 156 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 158 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3);

#line 161 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0_10001(
#line 164 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 166 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 168 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3);

#line 171 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_1_0_10001(
#line 174 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 176 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_2,
#line 178 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3,
#line 180 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_4);

#line 183 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0_10001(
#line 186 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 188 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2);

#line 191 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_0_0_10001(
#line 194 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 196 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 198 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3);

#line 86 "string.opt"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 86 "string.opt"
  MR_Word mercury__term_io__V_17_17,
#line 86 "string.opt"
  MR_Word mercury__term_io__V_18_18,
#line 86 "string.opt"
  MR_Box mercury__term_io__V_19_19,
#line 86 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 86 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 86 "string.opt"
  MR_Integer mercury__term_io__End_10_10,
#line 86 "string.opt"
  MR_Box mercury__term_io__STATE_VARIABLE_Acc_0_14_11,
#line 86 "string.opt"
  MR_Box * mercury__term_io__STATE_VARIABLE_Acc_15_12);

#line 86 "string.opt"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 86 "string.opt"
  MR_Word mercury__term_io__V_17_17,
#line 86 "string.opt"
  MR_Word mercury__term_io__V_18_18,
#line 86 "string.opt"
  MR_Word mercury__term_io__V_19_19,
#line 86 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 86 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 86 "string.opt"
  MR_Integer mercury__term_io__End_10_10);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 509 "term_io.m"
static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
#line 509 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1);

#line 87 "string.opt"
static void MR_CALL 
mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(
#line 87 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 87 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 87 "string.opt"
  MR_Integer mercury__term_io__End_10_10,
#line 87 "string.opt"
  MR_Word mercury__term_io__STATE_VARIABLE_Acc_0_14_11,
#line 87 "string.opt"
  MR_Word * mercury__term_io__STATE_VARIABLE_Acc_15_12);

#line 115 "string.opt"
static MR_bool MR_CALL 
mercury__term_io__all_match_2__ho22_3_p_in__string_0(
#line 115 "string.opt"
  MR_String mercury__term_io__String_5_5,
#line 115 "string.opt"
  MR_Integer mercury__term_io__I_6_6);

#line 525 "term_io.m"
static void MR_CALL 
mercury__term_io__write_term_args_8_p_0(
#line 525 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_40,
#line 525 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_39,
#line 525 "term_io.m"
  MR_Box mercury__term_io__Ops_1,
#line 525 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 525 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_3,
#line 525 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_4,
#line 525 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_5,
#line 525 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_6);

#line 480 "term_io.m"
static void MR_CALL 
mercury__term_io__write_list_tail_8_p_0(
#line 480 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_52,
#line 480 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_51,
#line 480 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 480 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 480 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_21,
#line 480 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_22,
#line 480 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_23,
#line 480 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_24);

#line 329 "term_io.m"
static void MR_CALL 
mercury__term_io__write_arg_term_8_p_0(
#line 329 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_25,
#line 329 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_24,
#line 329 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 329 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 329 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_14,
#line 329 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_15,
#line 329 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_16,
#line 329 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_17);


static /* final */ const MR_Box mercury__term_io_scalar_common_1[4][2];

static /* final */ const MR_Box mercury__term_io_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__term_io_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_io_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__term_io_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term_io__term_io__type_ctor_info_read_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\"")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_3[0])),
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



#line 714 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0 = {
  (MR_String) "maybe_adjacent_to_graphic_token",
  (MR_Integer) 0
};

#line 720 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1 = {
  (MR_String) "not_adjacent_to_graphic_token",
  (MR_Integer) 1
};

#line 726 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_value_ordered_adjacent_to_graphic_token_0[2] = {
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

#line 732 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0[2] = {
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

#line 738 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 744 "term_io.c"
const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_adjacent_to_graphic_token_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001)),
  ((MR_Box) (mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001)),
  (MR_String) "term_io",
  (MR_String) "adjacent_to_graphic_token",
  {
    mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0
  },
  {
    mercury__term_io__term_io__enum_value_ordered_adjacent_to_graphic_token_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0
};

#line 765 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_0 = {
  (MR_String) "eof",
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

#line 780 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 786 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_io__term_io__field_types_read_term_1_1,
  NULL,
  NULL,
  NULL
};

#line 801 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 809 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 817 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_2[2] = {
  (MR_PseudoTypeInfo) &mercury__term_io__varset__pti_varset_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term_io__term__pti_term_1__pseudo_1
};

#line 823 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_2 = {
  (MR_String) "term",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_io__term_io__field_types_read_term_1_2,
  NULL,
  NULL,
  NULL
};

#line 838 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_0[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_0
};

#line 843 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_1[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_1
};

#line 848 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_2[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_2
};

#line 853 "term_io.c"
static const MR_DuPtagLayout mercury__term_io__term_io__du_ptag_ordered_read_term_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_io__term_io__du_stag_ordered_read_term_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_io__term_io__du_stag_ordered_read_term_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_io__term_io__du_stag_ordered_read_term_1_2
  }
};

#line 872 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_name_ordered_read_term_1[3] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_0,
  &mercury__term_io__term_io__du_functor_desc_read_term_1_1,
  &mercury__term_io__term_io__du_functor_desc_read_term_1_2
};

#line 879 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_read_term_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 886 "term_io.c"
const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_read_term_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_io____Unify____read_term_1_0_10001)),
  ((MR_Box) (mercury__term_io____Compare____read_term_1_0_10001)),
  (MR_String) "term_io",
  (MR_String) "read_term",
  {
    mercury__term_io__term_io__du_name_ordered_read_term_1
  },
  {
    mercury__term_io__term_io__du_ptag_ordered_read_term_1
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__term_io__term_io__functor_number_map_read_term_1
};

#line 907 "term_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0 = {
  &mercury__term_io__term_io__type_ctor_info_read_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 915 "term_io.c"
const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_read_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_io____Unify____read_term_0_0_10001)),
  ((MR_Box) (mercury__term_io____Compare____read_term_0_0_10001)),
  (MR_String) "term_io",
  (MR_String) "read_term",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 936 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
#line 939 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 941 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2)
#line 943 "term_io.c"
{
#line 945 "term_io.c"
  {
#line 947 "term_io.c"
    MR_bool mercury__term_io__succeeded;

#line 950 "term_io.c"
    {
#line 952 "term_io.c"
      mercury__term_io__succeeded = mercury__term_io____Unify____adjacent_to_graphic_token_0_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2));
    }
#line 955 "term_io.c"
    return mercury__term_io__succeeded;
#line 957 "term_io.c"
  }
#line 959 "term_io.c"
}

#line 962 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
#line 965 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 967 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 969 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3)
#line 971 "term_io.c"
{
#line 973 "term_io.c"
  {
#line 975 "term_io.c"
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

#line 978 "term_io.c"
    {
#line 980 "term_io.c"
      mercury__term_io____Compare____adjacent_to_graphic_token_0_0(&mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
#line 983 "term_io.c"
    *mercury__term_io__wrapper_arg_1 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
#line 985 "term_io.c"
  }
#line 987 "term_io.c"
}

#line 990 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0_10001(
#line 993 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 995 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 997 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3)
#line 999 "term_io.c"
{
#line 1001 "term_io.c"
  {
#line 1003 "term_io.c"
    MR_bool mercury__term_io__succeeded;

#line 1006 "term_io.c"
    {
#line 1008 "term_io.c"
      mercury__term_io__succeeded = mercury__term_io____Unify____read_term_1_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
#line 1011 "term_io.c"
    return mercury__term_io__succeeded;
#line 1013 "term_io.c"
  }
#line 1015 "term_io.c"
}

#line 1018 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_1_0_10001(
#line 1021 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 1023 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_2,
#line 1025 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3,
#line 1027 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_4)
#line 1029 "term_io.c"
{
#line 1031 "term_io.c"
  {
#line 1033 "term_io.c"
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

#line 1036 "term_io.c"
    {
#line 1038 "term_io.c"
      mercury__term_io____Compare____read_term_1_0(((MR_Word) mercury__term_io__wrapper_arg_1), &mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_3), ((MR_Word) mercury__term_io__wrapper_arg_4));
    }
#line 1041 "term_io.c"
    *mercury__term_io__wrapper_arg_2 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
#line 1043 "term_io.c"
  }
#line 1045 "term_io.c"
}

#line 1048 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0_10001(
#line 1051 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 1053 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2)
#line 1055 "term_io.c"
{
#line 1057 "term_io.c"
  {
#line 1059 "term_io.c"
    MR_bool mercury__term_io__succeeded;

#line 1062 "term_io.c"
    {
#line 1064 "term_io.c"
      mercury__term_io__succeeded = mercury__term_io____Unify____read_term_0_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2));
    }
#line 1067 "term_io.c"
    return mercury__term_io__succeeded;
#line 1069 "term_io.c"
  }
#line 1071 "term_io.c"
}

#line 1074 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_0_0_10001(
#line 1077 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 1079 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 1081 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3)
#line 1083 "term_io.c"
{
#line 1085 "term_io.c"
  {
#line 1087 "term_io.c"
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

#line 1090 "term_io.c"
    {
#line 1092 "term_io.c"
      mercury__term_io____Compare____read_term_0_0(&mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
#line 1095 "term_io.c"
    *mercury__term_io__wrapper_arg_1 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
#line 1097 "term_io.c"
  }
#line 1099 "term_io.c"
}

#line 86 "string.opt"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 86 "string.opt"
  MR_Word mercury__term_io__V_17_17,
#line 86 "string.opt"
  MR_Word mercury__term_io__V_18_18,
#line 86 "string.opt"
  MR_Box mercury__term_io__V_19_19,
#line 86 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 86 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 86 "string.opt"
  MR_Integer mercury__term_io__End_10_10,
#line 86 "string.opt"
  MR_Box mercury__term_io__STATE_VARIABLE_Acc_0_14_11,
#line 86 "string.opt"
  MR_Box * mercury__term_io__STATE_VARIABLE_Acc_15_12)
#line 86 "string.opt"
{
#line 858 "string.opt"
  while (MR_TRUE)
#line 858 "string.opt"
    {
#line 858 "string.opt"
      /* tailcall optimized into a loop */
#line 858 "string.opt"
      {
#line 858 "string.opt"
        MR_bool mercury__term_io__succeeded = (mercury__term_io__I_9_9 < mercury__term_io__End_10_10);
#line 858 "string.opt"
        MR_Integer mercury__term_io__J_12_13;
#line 858 "string.opt"
        MR_Char mercury__term_io__Char_13_14;

#line 852 "string.opt"
        if (mercury__term_io__succeeded)
#line 852 "string.opt"
          {
#line 593 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_io__String_8_8 ;
	Index =  mercury__term_io__I_9_9 ;
		{
#line 593 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1167 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__J_12_13  = NextIndex;
	 mercury__term_io__Char_13_14  = Ch;
#line 593 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 852 "string.opt"
            if (mercury__term_io__succeeded)
#line 854 "string.opt"
              mercury__term_io__succeeded = (mercury__term_io__J_12_13 <= mercury__term_io__End_10_10);
#line 852 "string.opt"
          }
#line 858 "string.opt"
        if (mercury__term_io__succeeded)
#line 856 "string.opt"
          {
#line 856 "string.opt"
            MR_Box mercury__term_io__STATE_VARIABLE_Acc_16_16_15;

#line 856 "string.opt"
            {
#line 856 "string.opt"
              mercury__term_io__write_escaped_char_4_p_0(mercury__term_io__V_17_17, mercury__term_io__V_18_18, mercury__term_io__V_19_19, mercury__term_io__Char_13_14, mercury__term_io__STATE_VARIABLE_Acc_0_14_11, &mercury__term_io__STATE_VARIABLE_Acc_16_16_15);
            }
#line 857 "string.opt"
            /* direct tailcall eliminated */
#line 857 "string.opt"
            {
#line 857 "string.opt"
              MR_Integer mercury__term_io__I_9__tmp_copy_9 = mercury__term_io__J_12_13;
#line 857 "string.opt"
              MR_Box mercury__term_io__STATE_VARIABLE_Acc_0_14__tmp_copy_11 = mercury__term_io__STATE_VARIABLE_Acc_16_16_15;

#line 857 "string.opt"
              mercury__term_io__STATE_VARIABLE_Acc_0_14_11 = mercury__term_io__STATE_VARIABLE_Acc_0_14__tmp_copy_11;
#line 857 "string.opt"
              mercury__term_io__I_9_9 = mercury__term_io__I_9__tmp_copy_9;
#line 857 "string.opt"
            }
#line 857 "string.opt"
            continue;
#line 856 "string.opt"
          }
#line 858 "string.opt"
        else
#line 859 "string.opt"
          *mercury__term_io__STATE_VARIABLE_Acc_15_12 = mercury__term_io__STATE_VARIABLE_Acc_0_14_11;
#line 858 "string.opt"
      }
#line 858 "string.opt"
      break;
#line 858 "string.opt"
    }
#line 86 "string.opt"
}

#line 86 "string.opt"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 86 "string.opt"
  MR_Word mercury__term_io__V_17_17,
#line 86 "string.opt"
  MR_Word mercury__term_io__V_18_18,
#line 86 "string.opt"
  MR_Word mercury__term_io__V_19_19,
#line 86 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 86 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 86 "string.opt"
  MR_Integer mercury__term_io__End_10_10)
#line 86 "string.opt"
{
#line 858 "string.opt"
  while (MR_TRUE)
#line 858 "string.opt"
    {
#line 858 "string.opt"
      /* tailcall optimized into a loop */
#line 858 "string.opt"
      {
#line 858 "string.opt"
        MR_bool mercury__term_io__succeeded = (mercury__term_io__I_9_9 < mercury__term_io__End_10_10);
#line 858 "string.opt"
        MR_Integer mercury__term_io__J_12_13;
#line 858 "string.opt"
        MR_Char mercury__term_io__Char_13_14;

#line 852 "string.opt"
        if (mercury__term_io__succeeded)
#line 852 "string.opt"
          {
#line 593 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_io__String_8_8 ;
	Index =  mercury__term_io__I_9_9 ;
		{
#line 593 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1289 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__J_12_13  = NextIndex;
	 mercury__term_io__Char_13_14  = Ch;
#line 593 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 852 "string.opt"
            if (mercury__term_io__succeeded)
#line 854 "string.opt"
              mercury__term_io__succeeded = (mercury__term_io__J_12_13 <= mercury__term_io__End_10_10);
#line 852 "string.opt"
          }
#line 858 "string.opt"
        if (mercury__term_io__succeeded)
#line 856 "string.opt"
          {
#line 856 "string.opt"
            {
#line 856 "string.opt"
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__V_17_17, mercury__term_io__V_18_18, mercury__term_io__V_19_19, mercury__term_io__Char_13_14);
            }
#line 857 "string.opt"
            /* direct tailcall eliminated */
#line 857 "string.opt"
            {
#line 857 "string.opt"
              MR_Integer mercury__term_io__I_9__tmp_copy_9 = mercury__term_io__J_12_13;

#line 857 "string.opt"
              mercury__term_io__I_9_9 = mercury__term_io__I_9__tmp_copy_9;
#line 857 "string.opt"
            }
#line 857 "string.opt"
            continue;
#line 856 "string.opt"
          }
#line 858 "string.opt"
        else
#line 859 "string.opt"
          {
#line 859 "string.opt"
          }
#line 858 "string.opt"
      }
#line 858 "string.opt"
      break;
#line 858 "string.opt"
    }
#line 86 "string.opt"
}

#line 127 "term_io.m"
void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 127 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 127 "term_io.m"
  MR_Char mercury__term_io__C_6)
#line 127 "term_io.m"
{
#line 577 "term_io.m"
  {
#line 577 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 577 "term_io.m"
    MR_String mercury__term_io__V_10_10;
#line 577 "term_io.m"
    MR_String mercury__term_io__V_18_18;
#line 577 "term_io.m"
    MR_String mercury__term_io__V_21_21;
#line 1366 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1368 "term_io.c"
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_9;

#line 721 "term_io.m"
    {
#line 721 "term_io.m"
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_6, &mercury__term_io__V_18_18);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2(mercury__term_io__V_18_18, (MR_String) "\'", &mercury__term_io__V_21_21);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__V_21_21, &mercury__term_io__V_10_10);
    }
#line 1386 "term_io.c"
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1388 "term_io.c"
    {
#line 1390 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (mercury__term_io__V_10_10)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_9);
    }
#line 577 "term_io.m"
  }
#line 127 "term_io.m"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__term_io__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 509 "term_io.m"
static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
#line 509 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1)
#line 509 "term_io.m"
{
#line 511 "term_io.m"
  while (MR_TRUE)
#line 511 "term_io.m"
    {
#line 511 "term_io.m"
      /* tailcall optimized into a loop */
#line 511 "term_io.m"
      {
#line 511 "term_io.m"
        MR_bool mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 511 "term_io.m"
        MR_Word mercury__term_io__V_30_30;
#line 511 "term_io.m"
        MR_Word mercury__term_io__V_31_31;
#line 511 "term_io.m"
        MR_Word mercury__term_io__V_29_29;

#line 511 "term_io.m"
        if (mercury__term_io__succeeded)
#line 511 "term_io.m"
          {
#line 511 "term_io.m"
            mercury__term_io__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 511 "term_io.m"
            mercury__term_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
#line 511 "term_io.m"
            mercury__term_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 2)));
#line 511 "term_io.m"
            if (((MR_tag((MR_Word) mercury__term_io__V_31_31)) == (MR_mktag((MR_Integer) 0))))
#line 513 "term_io.m"
              {
#line 513 "term_io.m"
                MR_String mercury__term_io__Op_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_31_31, (MR_Integer) 0)));
#line 513 "term_io.m"
                MR_Word mercury__term_io__Arg_13;
#line 513 "term_io.m"
                MR_Word mercury__term_io__V_32_32;
#line 513 "term_io.m"
                MR_Word mercury__term_io__V_33_33;

#line 515 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 515 "term_io.m"
                if (mercury__term_io__succeeded)
#line 515 "term_io.m"
                  {
#line 515 "term_io.m"
                    mercury__term_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_30_30, (MR_Integer) 0)));
#line 515 "term_io.m"
                    mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_30_30, (MR_Integer) 1)));
#line 517 "term_io.m"
                    if ((mercury__term_io__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "term_io.m"
                      {
#line 518 "term_io.m"
                        MR_Word mercury__term_io__TypeClassInfo_for_op_table_28;
#line 1478 "term_io.c"
                        MR_Integer mercury__term_io__V_18_18;
#line 1480 "term_io.c"
                        MR_Word mercury__term_io__V_19_19;
#line 1482 "term_io.c"
                        MR_bool MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 1484 "term_io.c"
                        MR_Box mercury__term_io__conv2_V_18_18;
#line 1486 "term_io.c"
                        MR_Box mercury__term_io__conv1_V_19_19;

#line 518 "term_io.m"
                        mercury__term_io__Arg_13 = mercury__term_io__V_33_33;
#line 32 "ops.opt"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1493 "term_io.c"
                        mercury__term_io__TypeClassInfo_for_op_table_28 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 1495 "term_io.c"
                        mercury__term_io__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_28, (MR_Integer) 0)), (MR_Integer) 8)));
#line 1497 "term_io.c"
                        {
#line 1499 "term_io.c"
                          mercury__term_io__succeeded = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_28), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__term_io__Op_10)), &mercury__term_io__conv2_V_18_18, &mercury__term_io__conv1_V_19_19);
                        }
#line 1502 "term_io.c"
                        if (mercury__term_io__succeeded)
#line 1504 "term_io.c"
                          {
#line 1506 "term_io.c"
                            mercury__term_io__V_18_18 = ((MR_Integer) mercury__term_io__conv2_V_18_18);
#line 1508 "term_io.c"
                            mercury__term_io__V_19_19 = ((MR_Word) mercury__term_io__conv1_V_19_19);
#line 1510 "term_io.c"
                            mercury__term_io__succeeded = MR_TRUE;
#line 1512 "term_io.c"
                          }
#line 518 "term_io.m"
                      }
#line 517 "term_io.m"
                    else
#line 515 "term_io.m"
                      {
#line 515 "term_io.m"
                        MR_Word mercury__term_io__TypeClassInfo_for_op_table_27;
#line 515 "term_io.m"
                        MR_Word mercury__term_io__V_24_24;
#line 515 "term_io.m"
                        MR_Word mercury__term_io__V_14_14;
#line 1526 "term_io.c"
                        MR_Integer mercury__term_io__V_15_15;
#line 1528 "term_io.c"
                        MR_Word mercury__term_io__V_16_16;
#line 1530 "term_io.c"
                        MR_Word mercury__term_io__V_17_17;
#line 1532 "term_io.c"
                        MR_bool MR_CALL (* mercury__term_io__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
#line 1534 "term_io.c"
                        MR_Box mercury__term_io__conv6_V_15_15;
#line 1536 "term_io.c"
                        MR_Box mercury__term_io__conv5_V_16_16;
#line 1538 "term_io.c"
                        MR_Box mercury__term_io__conv4_V_17_17;

#line 515 "term_io.m"
                        mercury__term_io__Arg_13 = mercury__term_io__V_33_33;
#line 515 "term_io.m"
                        mercury__term_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 0)));
#line 515 "term_io.m"
                        mercury__term_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 1)));
#line 515 "term_io.m"
                        mercury__term_io__succeeded = (mercury__term_io__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 515 "term_io.m"
                          {
#line 32 "ops.opt"
                            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1555 "term_io.c"
                            mercury__term_io__TypeClassInfo_for_op_table_27 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 1557 "term_io.c"
                            mercury__term_io__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1559 "term_io.c"
                            {
#line 1561 "term_io.c"
                              mercury__term_io__succeeded = mercury__term_io__func_3(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_27), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__term_io__Op_10)), &mercury__term_io__conv6_V_15_15, &mercury__term_io__conv5_V_16_16, &mercury__term_io__conv4_V_17_17);
                            }
#line 1564 "term_io.c"
                            if (mercury__term_io__succeeded)
#line 1566 "term_io.c"
                              {
#line 1568 "term_io.c"
                                mercury__term_io__V_15_15 = ((MR_Integer) mercury__term_io__conv6_V_15_15);
#line 1570 "term_io.c"
                                mercury__term_io__V_16_16 = ((MR_Word) mercury__term_io__conv5_V_16_16);
#line 1572 "term_io.c"
                                mercury__term_io__V_17_17 = ((MR_Word) mercury__term_io__conv4_V_17_17);
#line 1574 "term_io.c"
                                mercury__term_io__succeeded = MR_TRUE;
#line 1576 "term_io.c"
                              }
#line 515 "term_io.m"
                          }
#line 515 "term_io.m"
                      }
#line 513 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 521 "term_io.m"
                      {
#line 521 "term_io.m"
                        /* direct tailcall eliminated */
#line 521 "term_io.m"
                        {
#line 521 "term_io.m"
                          MR_Word mercury__term_io__HeadVar__1__tmp_copy_1 = mercury__term_io__Arg_13;

#line 521 "term_io.m"
                          mercury__term_io__HeadVar__1_1 = mercury__term_io__HeadVar__1__tmp_copy_1;
#line 521 "term_io.m"
                        }
#line 521 "term_io.m"
                        continue;
#line 521 "term_io.m"
                      }
#line 515 "term_io.m"
                  }
#line 513 "term_io.m"
              }
#line 511 "term_io.m"
            else
#line 511 "term_io.m"
              if (((MR_tag((MR_Word) mercury__term_io__V_31_31)) == (MR_mktag((MR_Integer) 1))))
#line 511 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 511 "term_io.m"
              else
#line 511 "term_io.m"
                if (((((MR_tag((MR_Word) mercury__term_io__V_31_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__V_31_31, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 512 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 511 "term_io.m"
                else
#line 511 "term_io.m"
                  mercury__term_io__succeeded = MR_FALSE;
#line 511 "term_io.m"
          }
#line 511 "term_io.m"
        return mercury__term_io__succeeded;
#line 511 "term_io.m"
      }
#line 511 "term_io.m"
      break;
#line 511 "term_io.m"
    }
#line 509 "term_io.m"
}

#line 127 "term_io.m"
void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 127 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 127 "term_io.m"
  MR_Char mercury__term_io__C_6,
#line 127 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
#line 127 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
#line 127 "term_io.m"
{
#line 577 "term_io.m"
  {
#line 577 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 577 "term_io.m"
    MR_String mercury__term_io__V_10_10;
#line 577 "term_io.m"
    MR_String mercury__term_io__V_18_18;
#line 577 "term_io.m"
    MR_String mercury__term_io__V_21_21;
#line 1659 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 721 "term_io.m"
    {
#line 721 "term_io.m"
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_6, &mercury__term_io__V_18_18);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2(mercury__term_io__V_18_18, (MR_String) "\'", &mercury__term_io__V_21_21);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__V_21_21, &mercury__term_io__V_10_10);
    }
#line 1677 "term_io.c"
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1679 "term_io.c"
    {
#line 1681 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), mercury__term_io__Stream_5, ((MR_Box) (mercury__term_io__V_10_10)), mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 1683 "term_io.c"
      return;
    }
#line 577 "term_io.m"
  }
#line 127 "term_io.m"
}

#line 87 "string.opt"
static void MR_CALL 
mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(
#line 87 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 87 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 87 "string.opt"
  MR_Integer mercury__term_io__End_10_10,
#line 87 "string.opt"
  MR_Word mercury__term_io__STATE_VARIABLE_Acc_0_14_11,
#line 87 "string.opt"
  MR_Word * mercury__term_io__STATE_VARIABLE_Acc_15_12)
#line 87 "string.opt"
{
#line 858 "string.opt"
  while (MR_TRUE)
#line 858 "string.opt"
    {
#line 858 "string.opt"
      /* tailcall optimized into a loop */
#line 858 "string.opt"
      {
#line 858 "string.opt"
        MR_bool mercury__term_io__succeeded = (mercury__term_io__I_9_9 < mercury__term_io__End_10_10);
#line 858 "string.opt"
        MR_Integer mercury__term_io__J_12_13;
#line 858 "string.opt"
        MR_Char mercury__term_io__Char_13_14;

#line 852 "string.opt"
        if (mercury__term_io__succeeded)
#line 852 "string.opt"
          {
#line 593 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__foldl_between_2__ho30_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_io__String_8_8 ;
	Index =  mercury__term_io__I_9_9 ;
		{
#line 593 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1750 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__J_12_13  = NextIndex;
	 mercury__term_io__Char_13_14  = Ch;
#line 593 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 852 "string.opt"
            if (mercury__term_io__succeeded)
#line 854 "string.opt"
              mercury__term_io__succeeded = (mercury__term_io__J_12_13 <= mercury__term_io__End_10_10);
#line 852 "string.opt"
          }
#line 858 "string.opt"
        if (mercury__term_io__succeeded)
#line 856 "string.opt"
          {
#line 856 "string.opt"
            MR_Word mercury__term_io__STATE_VARIABLE_Acc_16_16_15;

#line 666 "string.opt"
            {
#line 666 "string.opt"
              mercury__term_io__STATE_VARIABLE_Acc_16_16_15 = mercury__term_io__add_escaped_char_2_f_0(mercury__term_io__Char_13_14, mercury__term_io__STATE_VARIABLE_Acc_0_14_11);
            }
#line 857 "string.opt"
            /* direct tailcall eliminated */
#line 857 "string.opt"
            {
#line 857 "string.opt"
              MR_Integer mercury__term_io__I_9__tmp_copy_9 = mercury__term_io__J_12_13;
#line 857 "string.opt"
              MR_Word mercury__term_io__STATE_VARIABLE_Acc_0_14__tmp_copy_11 = mercury__term_io__STATE_VARIABLE_Acc_16_16_15;

#line 857 "string.opt"
              mercury__term_io__STATE_VARIABLE_Acc_0_14_11 = mercury__term_io__STATE_VARIABLE_Acc_0_14__tmp_copy_11;
#line 857 "string.opt"
              mercury__term_io__I_9_9 = mercury__term_io__I_9__tmp_copy_9;
#line 857 "string.opt"
            }
#line 857 "string.opt"
            continue;
#line 856 "string.opt"
          }
#line 858 "string.opt"
        else
#line 859 "string.opt"
          *mercury__term_io__STATE_VARIABLE_Acc_15_12 = mercury__term_io__STATE_VARIABLE_Acc_0_14_11;
#line 858 "string.opt"
      }
#line 858 "string.opt"
      break;
#line 858 "string.opt"
    }
#line 87 "string.opt"
}

#line 115 "string.opt"
static MR_bool MR_CALL 
mercury__term_io__all_match_2__ho22_3_p_in__string_0(
#line 115 "string.opt"
  MR_String mercury__term_io__String_5_5,
#line 115 "string.opt"
  MR_Integer mercury__term_io__I_6_6)
#line 115 "string.opt"
{
#line 911 "string.opt"
  while (MR_TRUE)
#line 911 "string.opt"
    {
#line 911 "string.opt"
      /* tailcall optimized into a loop */
#line 911 "string.opt"
      {
#line 911 "string.opt"
        MR_bool mercury__term_io__succeeded;
#line 911 "string.opt"
        MR_Integer mercury__term_io__J_7_7;
#line 911 "string.opt"
        MR_Char mercury__term_io__Char_8_8;

#line 593 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__all_match_2__ho22_3_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_io__String_5_5 ;
	Index =  mercury__term_io__I_6_6 ;
		{
#line 593 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1860 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__J_7_7  = NextIndex;
	 mercury__term_io__Char_8_8  = Ch;
#line 593 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 911 "string.opt"
        if (mercury__term_io__succeeded)
#line 909 "string.opt"
          {
#line 909 "string.opt"
            {
#line 909 "string.opt"
              mercury__term_io__succeeded = mercury__lexer__graphic_token_char_1_p_0(mercury__term_io__Char_8_8);
            }
#line 909 "string.opt"
            if (mercury__term_io__succeeded)
#line 910 "string.opt"
              {
#line 910 "string.opt"
                /* direct tailcall eliminated */
#line 910 "string.opt"
                {
#line 910 "string.opt"
                  MR_Integer mercury__term_io__I_6__tmp_copy_6 = mercury__term_io__J_7_7;

#line 910 "string.opt"
                  mercury__term_io__I_6_6 = mercury__term_io__I_6__tmp_copy_6;
#line 910 "string.opt"
                }
#line 910 "string.opt"
                continue;
#line 910 "string.opt"
              }
#line 909 "string.opt"
          }
#line 911 "string.opt"
        else
#line 912 "string.opt"
          mercury__term_io__succeeded = MR_TRUE;
#line 911 "string.opt"
        return mercury__term_io__succeeded;
#line 911 "string.opt"
      }
#line 911 "string.opt"
      break;
#line 911 "string.opt"
    }
#line 115 "string.opt"
}

#line 99 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
#line 99 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_15,
#line 99 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_16,
#line 99 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 99 "term_io.m"
  MR_String mercury__term_io__S_6)
#line 99 "term_io.m"
{
#line 671 "term_io.m"
  {
#line 671 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 1933 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1935 "term_io.c"
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_11_11;
#line 1937 "term_io.c"
    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1939 "term_io.c"
    MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_9;

#line 1942 "term_io.c"
    {
#line 1944 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_11_11);
    }
#line 673 "term_io.m"
    {
#line 673 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_15, mercury__term_io__TypeClassInfo_for_writer_16, mercury__term_io__Stream_5, mercury__term_io__S_6);
    }
#line 1952 "term_io.c"
    mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1954 "term_io.c"
    {
#line 1956 "term_io.c"
      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_9);
    }
#line 671 "term_io.m"
  }
#line 99 "term_io.m"
}

#line 113 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
#line 113 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 113 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 113 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 113 "term_io.m"
  MR_String mercury__term_io__S_6)
#line 113 "term_io.m"
{
#line 586 "term_io.m"
  {
#line 586 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 587 "term_io.m"
    {
#line 587 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__S_6, (MR_Integer) 1);
#line 587 "term_io.m"
      return;
    }
#line 586 "term_io.m"
  }
#line 113 "term_io.m"
}

#line 161 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
#line 161 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 161 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 161 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 161 "term_io.m"
  MR_String mercury__term_io__String_6)
#line 161 "term_io.m"
{
#line 683 "term_io.m"
  {
#line 683 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 683 "term_io.m"
    MR_Integer mercury__term_io__Length_8_26;
#line 683 "term_io.m"
    MR_Integer mercury__term_io__End_13_36;
#line 683 "term_io.m"
    MR_Integer mercury__term_io__V_17_37;

#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 2031 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Length_8_26  = Length;
#line 244 "string.opt"
}
#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 2051 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_37  = Length;
#line 244 "string.opt"
}
#line 85 "int.opt"
    mercury__term_io__succeeded = (mercury__term_io__Length_8_26 < mercury__term_io__V_17_37);
#line 88 "int.opt"
    if (mercury__term_io__succeeded)
#line 87 "int.opt"
      mercury__term_io__End_13_36 = mercury__term_io__Length_8_26;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__term_io__End_13_36 = mercury__term_io__V_17_37;
#line 696 "string.opt"
    {
#line 696 "string.opt"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__String_6, (MR_Integer) 0, mercury__term_io__End_13_36);
#line 696 "string.opt"
      return;
    }
#line 683 "term_io.m"
  }
#line 161 "term_io.m"
}

#line 141 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
#line 141 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_17,
#line 141 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_18,
#line 141 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 141 "term_io.m"
  MR_Char mercury__term_io__Char_6)
#line 141 "term_io.m"
{
#line 714 "term_io.m"
  {
#line 714 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 714 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_8;

#line 846 "term_io.m"
    if ((mercury__term_io__Char_6 == (MR_Char) 8))
#line 851 "term_io.m"
      {
#line 851 "term_io.m"
        mercury__term_io__QuoteChar_8 = (MR_Char) 98;
#line 851 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 851 "term_io.m"
      }
#line 846 "term_io.m"
    else
#line 846 "term_io.m"
      if ((mercury__term_io__Char_6 == (MR_Char) 9))
#line 850 "term_io.m"
        {
#line 850 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 116;
#line 850 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 850 "term_io.m"
        }
#line 846 "term_io.m"
      else
#line 846 "term_io.m"
        if ((mercury__term_io__Char_6 == (MR_Char) 10))
#line 849 "term_io.m"
          {
#line 849 "term_io.m"
            mercury__term_io__QuoteChar_8 = (MR_Char) 110;
#line 849 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 849 "term_io.m"
          }
#line 846 "term_io.m"
        else
#line 846 "term_io.m"
          if ((mercury__term_io__Char_6 == (MR_Char) 34))
#line 847 "term_io.m"
            {
#line 847 "term_io.m"
              mercury__term_io__QuoteChar_8 = (MR_Char) 34;
#line 847 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 847 "term_io.m"
            }
#line 846 "term_io.m"
          else
#line 846 "term_io.m"
            if ((mercury__term_io__Char_6 == (MR_Char) 39))
#line 846 "term_io.m"
              {
#line 846 "term_io.m"
                mercury__term_io__QuoteChar_8 = (MR_Char) 39;
#line 846 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
              }
#line 846 "term_io.m"
            else
#line 846 "term_io.m"
              if ((mercury__term_io__Char_6 == (MR_Char) 92))
#line 848 "term_io.m"
                {
#line 848 "term_io.m"
                  mercury__term_io__QuoteChar_8 = (MR_Char) 92;
#line 848 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 848 "term_io.m"
                }
#line 846 "term_io.m"
              else
#line 846 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 714 "term_io.m"
    if (mercury__term_io__succeeded)
#line 712 "term_io.m"
      {
#line 2178 "term_io.c"
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2180 "term_io.c"
        MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_12_12;
#line 2182 "term_io.c"
        void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2184 "term_io.c"
        MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_10;

#line 2187 "term_io.c"
        {
#line 2189 "term_io.c"
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 92)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_12_12);
        }
#line 2192 "term_io.c"
        mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2194 "term_io.c"
        {
#line 2196 "term_io.c"
          mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_8)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_10);
        }
#line 712 "term_io.m"
      }
#line 714 "term_io.m"
    else
#line 716 "term_io.m"
      {
#line 768 "term_io.m"
        {
#line 768 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_6);
        }
#line 768 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 768 "term_io.m"
          {
#line 779 "term_io.m"
            if ((mercury__term_io__Char_6 == (MR_Char) 32))
#line 779 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
            else
#line 779 "term_io.m"
              if ((mercury__term_io__Char_6 == (MR_Char) 33))
#line 780 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
              else
#line 779 "term_io.m"
                if ((mercury__term_io__Char_6 == (MR_Char) 34))
#line 803 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                else
#line 779 "term_io.m"
                  if ((mercury__term_io__Char_6 == (MR_Char) 35))
#line 782 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                  else
#line 779 "term_io.m"
                    if ((mercury__term_io__Char_6 == (MR_Char) 36))
#line 783 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                    else
#line 779 "term_io.m"
                      if ((mercury__term_io__Char_6 == (MR_Char) 37))
#line 784 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                      else
#line 779 "term_io.m"
                        if ((mercury__term_io__Char_6 == (MR_Char) 38))
#line 786 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                        else
#line 779 "term_io.m"
                          if ((mercury__term_io__Char_6 == (MR_Char) 39))
#line 802 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                          else
#line 779 "term_io.m"
                            if ((mercury__term_io__Char_6 == (MR_Char) 40))
#line 788 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                            else
#line 779 "term_io.m"
                              if ((mercury__term_io__Char_6 == (MR_Char) 41))
#line 789 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                              else
#line 779 "term_io.m"
                                if ((mercury__term_io__Char_6 == (MR_Char) 42))
#line 787 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                else
#line 779 "term_io.m"
                                  if ((mercury__term_io__Char_6 == (MR_Char) 43))
#line 792 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                  else
#line 779 "term_io.m"
                                    if ((mercury__term_io__Char_6 == (MR_Char) 44))
#line 807 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                    else
#line 779 "term_io.m"
                                      if ((mercury__term_io__Char_6 == (MR_Char) 45))
#line 790 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                      else
#line 779 "term_io.m"
                                        if ((mercury__term_io__Char_6 == (MR_Char) 46))
#line 806 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                        else
#line 779 "term_io.m"
                                          if ((mercury__term_io__Char_6 == (MR_Char) 47))
#line 808 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                          else
#line 779 "term_io.m"
                                            if ((mercury__term_io__Char_6 == (MR_Char) 58))
#line 801 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                            else
#line 779 "term_io.m"
                                              if ((mercury__term_io__Char_6 == (MR_Char) 59))
#line 800 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                              else
#line 779 "term_io.m"
                                                if ((mercury__term_io__Char_6 == (MR_Char) 60))
#line 804 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                else
#line 779 "term_io.m"
                                                  if ((mercury__term_io__Char_6 == (MR_Char) 61))
#line 793 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                  else
#line 779 "term_io.m"
                                                    if ((mercury__term_io__Char_6 == (MR_Char) 62))
#line 805 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                    else
#line 779 "term_io.m"
                                                      if ((mercury__term_io__Char_6 == (MR_Char) 63))
#line 809 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                      else
#line 779 "term_io.m"
                                                        if ((mercury__term_io__Char_6 == (MR_Char) 64))
#line 781 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                        else
#line 779 "term_io.m"
                                                          if ((mercury__term_io__Char_6 == (MR_Char) 91))
#line 798 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                          else
#line 779 "term_io.m"
                                                            if ((mercury__term_io__Char_6 == (MR_Char) 92))
#line 810 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                            else
#line 779 "term_io.m"
                                                              if ((mercury__term_io__Char_6 == (MR_Char) 93))
#line 799 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                              else
#line 779 "term_io.m"
                                                                if ((mercury__term_io__Char_6 == (MR_Char) 94))
#line 785 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                else
#line 779 "term_io.m"
                                                                  if ((mercury__term_io__Char_6 == (MR_Char) 95))
#line 791 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                  else
#line 779 "term_io.m"
                                                                    if ((mercury__term_io__Char_6 == (MR_Char) 96))
#line 794 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                    else
#line 779 "term_io.m"
                                                                      if ((mercury__term_io__Char_6 == (MR_Char) 123))
#line 796 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                      else
#line 779 "term_io.m"
                                                                        if ((mercury__term_io__Char_6 == (MR_Char) 124))
#line 811 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                        else
#line 779 "term_io.m"
                                                                          if ((mercury__term_io__Char_6 == (MR_Char) 125))
#line 797 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                          else
#line 779 "term_io.m"
                                                                            if ((mercury__term_io__Char_6 == (MR_Char) 126))
#line 795 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                            else
#line 779 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_FALSE;
#line 768 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 770 "term_io.m"
              {
#line 770 "term_io.m"
                MR_Integer mercury__term_io__V_20_20;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_6 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 2434 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_20_20  = Int;
#line 66 "char.opt"
}
#line 770 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_20_20 >= (MR_Integer) 128);
#line 770 "term_io.m"
              }
#line 768 "term_io.m"
          }
#line 716 "term_io.m"
        if (mercury__term_io__succeeded)
#line 2449 "term_io.c"
          {
#line 2451 "term_io.c"
            void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2453 "term_io.c"
            MR_Box mercury__term_io__conv5_STATE_VARIABLE_State_10;

#line 2456 "term_io.c"
            {
#line 2458 "term_io.c"
              mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) (mercury__term_io__Char_6)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_State_10);
            }
#line 2461 "term_io.c"
          }
#line 716 "term_io.m"
        else
#line 717 "term_io.m"
          {
#line 717 "term_io.m"
            MR_String mercury__term_io__V_15_15;
#line 2469 "term_io.c"
            void MR_CALL (* mercury__term_io__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2471 "term_io.c"
            MR_Box mercury__term_io__conv7_STATE_VARIABLE_State_10;

#line 717 "term_io.m"
            {
#line 717 "term_io.m"
              mercury__term_io__V_15_15 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_6);
            }
#line 2479 "term_io.c"
            mercury__term_io__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2481 "term_io.c"
            {
#line 2483 "term_io.c"
              mercury__term_io__func_6(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_17), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (mercury__term_io__V_15_15)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv7_STATE_VARIABLE_State_10);
            }
#line 717 "term_io.m"
          }
#line 716 "term_io.m"
      }
#line 714 "term_io.m"
  }
#line 141 "term_io.m"
}

#line 127 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 127 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 127 "term_io.m"
  MR_Char mercury__term_io__C_6)
#line 127 "term_io.m"
{
#line 577 "term_io.m"
  {
#line 577 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 577 "term_io.m"
    {
#line 577 "term_io.m"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_5, mercury__term_io__C_6);
#line 577 "term_io.m"
      return;
    }
#line 577 "term_io.m"
  }
#line 127 "term_io.m"
}

#line 219 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
#line 219 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_19,
#line 219 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_20,
#line 219 "term_io.m"
  MR_Word mercury__term_io__Stream_6,
#line 219 "term_io.m"
  MR_String mercury__term_io__S_7,
#line 219 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_8)
#line 219 "term_io.m"
{
#line 596 "term_io.m"
  {
#line 596 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 596 "term_io.m"
    MR_Word mercury__term_io__ShouldQuote_10;

#line 629 "term_io.m"
    if ((strcmp(mercury__term_io__S_7, (MR_String) "!") == 0))
#line 634 "term_io.m"
      mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
    else
#line 629 "term_io.m"
      if ((strcmp(mercury__term_io__S_7, (MR_String) ";") == 0))
#line 631 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
      else
#line 629 "term_io.m"
        if ((strcmp(mercury__term_io__S_7, (MR_String) "[]") == 0))
#line 652 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
        else
#line 629 "term_io.m"
          if ((strcmp(mercury__term_io__S_7, (MR_String) "{}") == 0))
#line 655 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
          else
#line 629 "term_io.m"
            mercury__term_io__succeeded = MR_FALSE;
#line 629 "term_io.m"
    if (!(mercury__term_io__succeeded))
#line 629 "term_io.m"
      {
#line 637 "term_io.m"
        {
#line 642 "term_io.m"
          MR_Integer mercury__term_io__V_26_26;
#line 642 "term_io.m"
          MR_Char mercury__term_io__V_27_27;
#line 642 "term_io.m"
          MR_Char mercury__term_io__V_30_30;
#line 642 "term_io.m"
          MR_Integer mercury__term_io__Len_7_38;

#line 533 "string.opt"
          {
#line 533 "string.opt"
            mercury__term_io__succeeded = mercury__term_io__all_match_2__ho22_3_p_in__string_0(mercury__term_io__S_7, (MR_Integer) 0);
          }
#line 637 "term_io.m"
          if (mercury__term_io__succeeded)
#line 637 "term_io.m"
            {
#line 638 "term_io.m"
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_7, (MR_String) "") == 0);
#line 638 "term_io.m"
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 637 "term_io.m"
              if (mercury__term_io__succeeded)
#line 637 "term_io.m"
                {
#line 642 "term_io.m"
                  mercury__term_io__V_26_26 = (MR_Integer) 0;
#line 642 "term_io.m"
                  mercury__term_io__V_27_27 = (MR_Char) 35;
#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 2622 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_38  = Length;
#line 244 "string.opt"
}
#line 1015 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__V_26_26 ;
	Length =  mercury__term_io__Len_7_38 ;
		{
#line 1015 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 2651 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1015 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 642 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 642 "term_io.m"
                    {
#line 561 "string.opt"
                      {
#line 561 "string.opt"
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, mercury__term_io__V_26_26, &mercury__term_io__V_30_30);
                      }
#line 642 "term_io.m"
                      mercury__term_io__succeeded = (mercury__term_io__V_27_27 == mercury__term_io__V_30_30);
#line 642 "term_io.m"
                    }
#line 642 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 637 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 649 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_8 == (MR_Integer) 1);
#line 637 "term_io.m"
                }
#line 637 "term_io.m"
            }
#line 637 "term_io.m"
        }
#line 629 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 626 "term_io.m"
          {
#line 626 "term_io.m"
            MR_Char mercury__term_io__FirstChar_24;
#line 626 "term_io.m"
            MR_Integer mercury__term_io__Len_7_44;
#line 110 "char.opt"
            MR_Char mercury__term_io__V_3_48;

#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 2709 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_44  = Length;
#line 244 "string.opt"
}
#line 1015 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__Len_7_44 ;
		{
#line 1015 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 2738 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1015 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 626 "term_io.m"
            if (mercury__term_io__succeeded)
#line 626 "term_io.m"
              {
#line 561 "string.opt"
                {
#line 561 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, (MR_Integer) 0, &mercury__term_io__FirstChar_24);
                }
#line 110 "char.opt"
                {
#line 110 "char.opt"
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_24, &mercury__term_io__V_3_48);
                }
#line 626 "term_io.m"
                if (mercury__term_io__succeeded)
#line 626 "term_io.m"
                  {
#line 483 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_7 ;
		{
#line 483 "string.opt"

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }

#line 2807 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 483 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 626 "term_io.m"
                  }
#line 626 "term_io.m"
              }
#line 626 "term_io.m"
          }
#line 629 "term_io.m"
      }
#line 659 "term_io.m"
    if (mercury__term_io__succeeded)
#line 658 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 0;
#line 659 "term_io.m"
    else
#line 661 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 1;
#line 601 "term_io.m"
    if ((mercury__term_io__ShouldQuote_10 == (MR_Integer) 0))
#line 2834 "term_io.c"
      {
#line 2836 "term_io.c"
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2838 "term_io.c"
        MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_12;

#line 2841 "term_io.c"
        {
#line 2843 "term_io.c"
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_19), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (mercury__term_io__S_7)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_12);
        }
#line 2846 "term_io.c"
      }
#line 601 "term_io.m"
    else
#line 602 "term_io.m"
      {
#line 2852 "term_io.c"
        void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2854 "term_io.c"
        MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_14_14;
#line 2856 "term_io.c"
        void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2858 "term_io.c"
        MR_Box mercury__term_io__conv5_STATE_VARIABLE_State_12;

#line 2861 "term_io.c"
        {
#line 2863 "term_io.c"
          mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_14_14);
        }
#line 604 "term_io.m"
        {
#line 604 "term_io.m"
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__TypeClassInfo_for_writer_20, mercury__term_io__Stream_6, mercury__term_io__S_7);
        }
#line 2871 "term_io.c"
        mercury__term_io__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2873 "term_io.c"
        {
#line 2875 "term_io.c"
          mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_State_12);
        }
#line 602 "term_io.m"
      }
#line 596 "term_io.m"
  }
#line 219 "term_io.m"
}

#line 32 "term_io.m"
void MR_CALL 
mercury__term_io____Compare____read_term_1_0(
#line 32 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_32,
#line 32 "term_io.m"
  MR_Word * mercury__term_io__HeadVar__1_1,
#line 32 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 32 "term_io.m"
  MR_Word mercury__term_io__HeadVar__3_3)
#line 32 "term_io.m"
{
#line 32 "term_io.m"
  {
#line 32 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 32 "term_io.m"
    MR_Integer mercury__term_io__CastX_30 = (MR_Integer) mercury__term_io__HeadVar__2_2;
#line 32 "term_io.m"
    MR_Integer mercury__term_io__CastY_31 = (MR_Integer) mercury__term_io__HeadVar__3_3;

#line 32 "term_io.m"
    mercury__term_io__succeeded = (mercury__term_io__CastX_30 == mercury__term_io__CastY_31);
#line 32 "term_io.m"
    if (mercury__term_io__succeeded)
#line 2911 "term_io.c"
      *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "term_io.m"
    else
#line 32 "term_io.m"
      if ((mercury__term_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 32 "term_io.m"
        if ((mercury__term_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 32 "term_io.m"
          *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "term_io.m"
        else
#line 32 "term_io.m"
          if (((MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2925 "term_io.c"
            *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "term_io.m"
          else
#line 2929 "term_io.c"
            *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "term_io.m"
      else
#line 32 "term_io.m"
        if (((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 32 "term_io.m"
          {
#line 32 "term_io.m"
            MR_Integer mercury__term_io__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_io.m"
            MR_String mercury__term_io__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "term_io.m"
            if ((mercury__term_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2944 "term_io.c"
              *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "term_io.m"
            else
#line 32 "term_io.m"
              if (((MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 32 "term_io.m"
                {
#line 32 "term_io.m"
                  MR_String mercury__term_io__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "term_io.m"
                  MR_Integer mercury__term_io__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_io.m"
                  MR_Word mercury__term_io__V_14_14;
#line 32 "term_io.m"
                  MR_Integer mercury__term_io__Res_7_46;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_io____Compare____read_term_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_io__V_40_40 ;
	S2 =  mercury__term_io__V_12_12 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2976 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Res_7_46  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                  mercury__term_io__succeeded = (mercury__term_io__Res_7_46 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                  if (mercury__term_io__succeeded)
#line 104 "private_builtin.opt"
                    mercury__term_io__V_14_14 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                  else
#line 110 "private_builtin.opt"
                    {
#line 107 "private_builtin.opt"
                      mercury__term_io__succeeded = (mercury__term_io__Res_7_46 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                      if (mercury__term_io__succeeded)
#line 109 "private_builtin.opt"
                        mercury__term_io__V_14_14 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                      else
#line 111 "private_builtin.opt"
                        mercury__term_io__V_14_14 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                    }
#line 3005 "term_io.c"
                  mercury__term_io__succeeded = (mercury__term_io__V_14_14 == (MR_Integer) 0);
#line 32 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 32 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 32 "term_io.m"
                    *mercury__term_io__HeadVar__1_1 = mercury__term_io__V_14_14;
#line 32 "term_io.m"
                  else
#line 69 "private_builtin.opt"
                    {
#line 66 "private_builtin.opt"
                      mercury__term_io__succeeded = (mercury__term_io__V_39_39 < mercury__term_io__V_13_13);
#line 69 "private_builtin.opt"
                      if (mercury__term_io__succeeded)
#line 68 "private_builtin.opt"
                        *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__term_io__succeeded = (mercury__term_io__V_39_39 == mercury__term_io__V_13_13);
#line 74 "private_builtin.opt"
                          if (mercury__term_io__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 69 "private_builtin.opt"
                    }
#line 32 "term_io.m"
                }
#line 32 "term_io.m"
              else
#line 3045 "term_io.c"
                *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "term_io.m"
          }
#line 32 "term_io.m"
        else
#line 32 "term_io.m"
          {
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "term_io.m"
            if ((mercury__term_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3060 "term_io.c"
              *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "term_io.m"
            else
#line 32 "term_io.m"
              if (((MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3066 "term_io.c"
                *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "term_io.m"
              else
#line 32 "term_io.m"
                {
#line 32 "term_io.m"
                  MR_Word mercury__term_io__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "term_io.m"
                  MR_Word mercury__term_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_io.m"
                  MR_Word mercury__term_io__V_29_29;

#line 32 "term_io.m"
                  {
#line 32 "term_io.m"
                    mercury__varset____Compare____varset_1_0(mercury__term_io__TypeInfo_for_T_32, &mercury__term_io__V_29_29, mercury__term_io__V_42_42, mercury__term_io__V_27_27);
                  }
#line 3084 "term_io.c"
                  mercury__term_io__succeeded = (mercury__term_io__V_29_29 == (MR_Integer) 0);
#line 32 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 32 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 32 "term_io.m"
                    *mercury__term_io__HeadVar__1_1 = mercury__term_io__V_29_29;
#line 32 "term_io.m"
                  else
#line 32 "term_io.m"
                    {
#line 32 "term_io.m"
                      mercury__term____Compare____term_1_0(mercury__term_io__TypeInfo_for_T_32, mercury__term_io__HeadVar__1_1, mercury__term_io__V_41_41, mercury__term_io__V_28_28);
#line 32 "term_io.m"
                      return;
                    }
#line 32 "term_io.m"
                }
#line 32 "term_io.m"
          }
#line 32 "term_io.m"
  }
#line 32 "term_io.m"
}

#line 32 "term_io.m"
MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0(
#line 32 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_15,
#line 32 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1,
#line 32 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2)
#line 32 "term_io.m"
{
#line 32 "term_io.m"
  {
#line 32 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 32 "term_io.m"
    MR_Integer mercury__term_io__CastX_13 = (MR_Integer) mercury__term_io__HeadVar__1_1;
#line 32 "term_io.m"
    MR_Integer mercury__term_io__CastY_14 = (MR_Integer) mercury__term_io__HeadVar__2_2;

#line 32 "term_io.m"
    mercury__term_io__succeeded = (mercury__term_io__CastX_13 == mercury__term_io__CastY_14);
#line 32 "term_io.m"
    if (mercury__term_io__succeeded)
#line 32 "term_io.m"
      mercury__term_io__succeeded = MR_TRUE;
#line 32 "term_io.m"
    else
#line 32 "term_io.m"
      if ((mercury__term_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 32 "term_io.m"
        {
#line 32 "term_io.m"
          MR_Integer mercury__term_io__CastX_3 = (MR_Integer) mercury__term_io__HeadVar__1_1;
#line 32 "term_io.m"
          MR_Integer mercury__term_io__CastY_4 = (MR_Integer) mercury__term_io__HeadVar__2_2;

#line 32 "term_io.m"
          mercury__term_io__succeeded = (mercury__term_io__CastY_4 == mercury__term_io__CastX_3);
#line 32 "term_io.m"
        }
#line 32 "term_io.m"
      else
#line 32 "term_io.m"
        if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 32 "term_io.m"
          {
#line 32 "term_io.m"
            MR_String mercury__term_io__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "term_io.m"
            MR_Integer mercury__term_io__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_io.m"
            MR_String mercury__term_io__V_7_7;
#line 32 "term_io.m"
            MR_Integer mercury__term_io__V_8_8;

#line 32 "term_io.m"
            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 32 "term_io.m"
            if (mercury__term_io__succeeded)
#line 32 "term_io.m"
              {
#line 32 "term_io.m"
                mercury__term_io__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "term_io.m"
                mercury__term_io__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 3176 "term_io.c"
                mercury__term_io__succeeded = (strcmp(mercury__term_io__V_5_5, mercury__term_io__V_7_7) == 0);
#line 32 "term_io.m"
                if (mercury__term_io__succeeded)
#line 3180 "term_io.c"
                  mercury__term_io__succeeded = (mercury__term_io__V_6_6 == mercury__term_io__V_8_8);
#line 32 "term_io.m"
              }
#line 32 "term_io.m"
          }
#line 32 "term_io.m"
        else
#line 32 "term_io.m"
          {
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_11_11;
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_12_12;

#line 32 "term_io.m"
            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 32 "term_io.m"
            if (mercury__term_io__succeeded)
#line 32 "term_io.m"
              {
#line 32 "term_io.m"
                mercury__term_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "term_io.m"
                mercury__term_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 3209 "term_io.c"
                {
#line 3211 "term_io.c"
                  mercury__term_io__succeeded = mercury__varset____Unify____varset_1_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__V_9_9, mercury__term_io__V_11_11);
                }
#line 32 "term_io.m"
                if (mercury__term_io__succeeded)
#line 3216 "term_io.c"
                  {
#line 3218 "term_io.c"
                    return mercury__term_io__succeeded = mercury__term____Unify____term_1_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__V_10_10, mercury__term_io__V_12_12);
                  }
#line 32 "term_io.m"
              }
#line 32 "term_io.m"
          }
#line 32 "term_io.m"
    return mercury__term_io__succeeded;
#line 32 "term_io.m"
  }
#line 32 "term_io.m"
}

#line 37 "term_io.m"
void MR_CALL 
mercury__term_io____Compare____read_term_0_0(
#line 37 "term_io.m"
  MR_Word * mercury__term_io__HeadVar__1_1,
#line 37 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 37 "term_io.m"
  MR_Word mercury__term_io__HeadVar__3_3)
#line 37 "term_io.m"
{
#line 37 "term_io.m"
  {
#line 37 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 37 "term_io.m"
    MR_Word mercury__term_io__TypeInfo_6_6 = (MR_Word) &mercury__term_io_scalar_common_1[1];
#line 37 "term_io.m"
    MR_Word mercury__term_io__Cast_HeadVar1_4 = mercury__term_io__HeadVar__2_2;
#line 37 "term_io.m"
    MR_Word mercury__term_io__Cast_HeadVar2_5 = mercury__term_io__HeadVar__3_3;

#line 37 "term_io.m"
    {
#line 37 "term_io.m"
      mercury__builtin__compare_3_p_0(mercury__term_io__TypeInfo_6_6, mercury__term_io__HeadVar__1_1, ((MR_Box) (mercury__term_io__Cast_HeadVar1_4)), ((MR_Box) (mercury__term_io__Cast_HeadVar2_5)));
#line 37 "term_io.m"
      return;
    }
#line 37 "term_io.m"
  }
#line 37 "term_io.m"
}

#line 37 "term_io.m"
MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0(
#line 37 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1,
#line 37 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2)
#line 37 "term_io.m"
{
#line 37 "term_io.m"
  {
#line 37 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 37 "term_io.m"
    MR_Word mercury__term_io__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 37 "term_io.m"
    MR_Word mercury__term_io__Cast_HeadVar1_3 = mercury__term_io__HeadVar__1_1;
#line 37 "term_io.m"
    MR_Word mercury__term_io__Cast_HeadVar2_4 = mercury__term_io__HeadVar__2_2;

#line 37 "term_io.m"
    {
#line 37 "term_io.m"
      return mercury__term_io__succeeded = mercury__term_io____Unify____read_term_1_0(mercury__term_io__TypeCtorInfo_5_5, mercury__term_io__Cast_HeadVar1_3, mercury__term_io__Cast_HeadVar2_4);
    }
#line 37 "term_io.m"
    return mercury__term_io__succeeded;
#line 37 "term_io.m"
  }
#line 37 "term_io.m"
}

#line 212 "term_io.m"
void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0(
#line 212 "term_io.m"
  MR_Word * mercury__term_io__HeadVar__1_1,
#line 212 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 212 "term_io.m"
  MR_Word mercury__term_io__HeadVar__3_3)
#line 212 "term_io.m"
{
#line 212 "term_io.m"
  {
#line 212 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 212 "term_io.m"
    MR_Integer mercury__term_io__Cast_HeadVar1_4 = (MR_Integer) mercury__term_io__HeadVar__2_2;
#line 212 "term_io.m"
    MR_Integer mercury__term_io__Cast_HeadVar2_5 = (MR_Integer) mercury__term_io__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__term_io__succeeded = (mercury__term_io__Cast_HeadVar1_4 < mercury__term_io__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__term_io__succeeded)
#line 68 "private_builtin.opt"
      *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__term_io__succeeded = (mercury__term_io__Cast_HeadVar1_4 == mercury__term_io__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__term_io__succeeded)
#line 73 "private_builtin.opt"
          *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 212 "term_io.m"
  }
#line 212 "term_io.m"
}

#line 212 "term_io.m"
MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0(
#line 212 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_1,
#line 212 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2)
#line 212 "term_io.m"
{
#line 3354 "term_io.c"
  {
#line 3356 "term_io.c"
    MR_bool mercury__term_io__succeeded = (mercury__term_io__HeadVar__2_1 == mercury__term_io__HeadVar__2_2);

#line 3359 "term_io.c"
    return mercury__term_io__succeeded;
#line 3361 "term_io.c"
  }
#line 212 "term_io.m"
}

#line 690 "term_io.m"
MR_Word MR_CALL 
mercury__term_io__add_escaped_char_2_f_0(
#line 690 "term_io.m"
  MR_Char mercury__term_io__Char_4,
#line 690 "term_io.m"
  MR_Word mercury__term_io__Strings0_5)
#line 690 "term_io.m"
{
#line 695 "term_io.m"
  {
#line 695 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 695 "term_io.m"
    MR_Word mercury__term_io__Strings_6;
#line 695 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_7;

#line 846 "term_io.m"
    if ((mercury__term_io__Char_4 == (MR_Char) 8))
#line 851 "term_io.m"
      {
#line 851 "term_io.m"
        mercury__term_io__QuoteChar_7 = (MR_Char) 98;
#line 851 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 851 "term_io.m"
      }
#line 846 "term_io.m"
    else
#line 846 "term_io.m"
      if ((mercury__term_io__Char_4 == (MR_Char) 9))
#line 850 "term_io.m"
        {
#line 850 "term_io.m"
          mercury__term_io__QuoteChar_7 = (MR_Char) 116;
#line 850 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 850 "term_io.m"
        }
#line 846 "term_io.m"
      else
#line 846 "term_io.m"
        if ((mercury__term_io__Char_4 == (MR_Char) 10))
#line 849 "term_io.m"
          {
#line 849 "term_io.m"
            mercury__term_io__QuoteChar_7 = (MR_Char) 110;
#line 849 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 849 "term_io.m"
          }
#line 846 "term_io.m"
        else
#line 846 "term_io.m"
          if ((mercury__term_io__Char_4 == (MR_Char) 34))
#line 847 "term_io.m"
            {
#line 847 "term_io.m"
              mercury__term_io__QuoteChar_7 = (MR_Char) 34;
#line 847 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 847 "term_io.m"
            }
#line 846 "term_io.m"
          else
#line 846 "term_io.m"
            if ((mercury__term_io__Char_4 == (MR_Char) 39))
#line 846 "term_io.m"
              {
#line 846 "term_io.m"
                mercury__term_io__QuoteChar_7 = (MR_Char) 39;
#line 846 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
              }
#line 846 "term_io.m"
            else
#line 846 "term_io.m"
              if ((mercury__term_io__Char_4 == (MR_Char) 92))
#line 848 "term_io.m"
                {
#line 848 "term_io.m"
                  mercury__term_io__QuoteChar_7 = (MR_Char) 92;
#line 848 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 848 "term_io.m"
                }
#line 846 "term_io.m"
              else
#line 846 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 695 "term_io.m"
    if (mercury__term_io__succeeded)
#line 694 "term_io.m"
      {
#line 694 "term_io.m"
        MR_String mercury__term_io__V_8_8;
#line 694 "term_io.m"
        MR_Word mercury__term_io__V_9_9;
#line 694 "term_io.m"
        MR_Word mercury__term_io__V_11_11;
#line 694 "term_io.m"
        MR_Word mercury__term_io__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 694 "term_io.m"
        {
#line 694 "term_io.m"
          mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 0) = ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_7));
#line 694 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 1) = ((MR_Box) (mercury__term_io__V_12_12));
#line 694 "term_io.m"
        }
#line 694 "term_io.m"
        {
#line 694 "term_io.m"
          mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 694 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 1) = ((MR_Box) (mercury__term_io__V_11_11));
#line 694 "term_io.m"
        }
#line 394 "string.opt"
        {
#line 394 "string.opt"
          mercury__string__from_char_list_2_p_0(mercury__term_io__V_9_9, &mercury__term_io__V_8_8);
        }
#line 694 "term_io.m"
        {
#line 694 "term_io.m"
          mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_8_8));
#line 694 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
#line 694 "term_io.m"
        }
#line 694 "term_io.m"
      }
#line 695 "term_io.m"
    else
#line 697 "term_io.m"
      {
#line 768 "term_io.m"
        {
#line 768 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_4);
        }
#line 768 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 768 "term_io.m"
          {
#line 779 "term_io.m"
            if ((mercury__term_io__Char_4 == (MR_Char) 32))
#line 779 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
            else
#line 779 "term_io.m"
              if ((mercury__term_io__Char_4 == (MR_Char) 33))
#line 780 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
              else
#line 779 "term_io.m"
                if ((mercury__term_io__Char_4 == (MR_Char) 34))
#line 803 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                else
#line 779 "term_io.m"
                  if ((mercury__term_io__Char_4 == (MR_Char) 35))
#line 782 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                  else
#line 779 "term_io.m"
                    if ((mercury__term_io__Char_4 == (MR_Char) 36))
#line 783 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                    else
#line 779 "term_io.m"
                      if ((mercury__term_io__Char_4 == (MR_Char) 37))
#line 784 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                      else
#line 779 "term_io.m"
                        if ((mercury__term_io__Char_4 == (MR_Char) 38))
#line 786 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                        else
#line 779 "term_io.m"
                          if ((mercury__term_io__Char_4 == (MR_Char) 39))
#line 802 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                          else
#line 779 "term_io.m"
                            if ((mercury__term_io__Char_4 == (MR_Char) 40))
#line 788 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                            else
#line 779 "term_io.m"
                              if ((mercury__term_io__Char_4 == (MR_Char) 41))
#line 789 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                              else
#line 779 "term_io.m"
                                if ((mercury__term_io__Char_4 == (MR_Char) 42))
#line 787 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                else
#line 779 "term_io.m"
                                  if ((mercury__term_io__Char_4 == (MR_Char) 43))
#line 792 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                  else
#line 779 "term_io.m"
                                    if ((mercury__term_io__Char_4 == (MR_Char) 44))
#line 807 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                    else
#line 779 "term_io.m"
                                      if ((mercury__term_io__Char_4 == (MR_Char) 45))
#line 790 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                      else
#line 779 "term_io.m"
                                        if ((mercury__term_io__Char_4 == (MR_Char) 46))
#line 806 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                        else
#line 779 "term_io.m"
                                          if ((mercury__term_io__Char_4 == (MR_Char) 47))
#line 808 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                          else
#line 779 "term_io.m"
                                            if ((mercury__term_io__Char_4 == (MR_Char) 58))
#line 801 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                            else
#line 779 "term_io.m"
                                              if ((mercury__term_io__Char_4 == (MR_Char) 59))
#line 800 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                              else
#line 779 "term_io.m"
                                                if ((mercury__term_io__Char_4 == (MR_Char) 60))
#line 804 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                else
#line 779 "term_io.m"
                                                  if ((mercury__term_io__Char_4 == (MR_Char) 61))
#line 793 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                  else
#line 779 "term_io.m"
                                                    if ((mercury__term_io__Char_4 == (MR_Char) 62))
#line 805 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                    else
#line 779 "term_io.m"
                                                      if ((mercury__term_io__Char_4 == (MR_Char) 63))
#line 809 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                      else
#line 779 "term_io.m"
                                                        if ((mercury__term_io__Char_4 == (MR_Char) 64))
#line 781 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                        else
#line 779 "term_io.m"
                                                          if ((mercury__term_io__Char_4 == (MR_Char) 91))
#line 798 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                          else
#line 779 "term_io.m"
                                                            if ((mercury__term_io__Char_4 == (MR_Char) 92))
#line 810 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                            else
#line 779 "term_io.m"
                                                              if ((mercury__term_io__Char_4 == (MR_Char) 93))
#line 799 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                              else
#line 779 "term_io.m"
                                                                if ((mercury__term_io__Char_4 == (MR_Char) 94))
#line 785 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                else
#line 779 "term_io.m"
                                                                  if ((mercury__term_io__Char_4 == (MR_Char) 95))
#line 791 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                  else
#line 779 "term_io.m"
                                                                    if ((mercury__term_io__Char_4 == (MR_Char) 96))
#line 794 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                    else
#line 779 "term_io.m"
                                                                      if ((mercury__term_io__Char_4 == (MR_Char) 123))
#line 796 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                      else
#line 779 "term_io.m"
                                                                        if ((mercury__term_io__Char_4 == (MR_Char) 124))
#line 811 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                        else
#line 779 "term_io.m"
                                                                          if ((mercury__term_io__Char_4 == (MR_Char) 125))
#line 797 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                          else
#line 779 "term_io.m"
                                                                            if ((mercury__term_io__Char_4 == (MR_Char) 126))
#line 795 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                            else
#line 779 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_FALSE;
#line 768 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 770 "term_io.m"
              {
#line 770 "term_io.m"
                MR_Integer mercury__term_io__V_18_18;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__add_escaped_char_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_4 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 3741 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_18_18  = Int;
#line 66 "char.opt"
}
#line 770 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_18_18 >= (MR_Integer) 128);
#line 770 "term_io.m"
              }
#line 768 "term_io.m"
          }
#line 697 "term_io.m"
        if (mercury__term_io__succeeded)
#line 696 "term_io.m"
          {
#line 696 "term_io.m"
            MR_String mercury__term_io__V_13_13;
#line 696 "term_io.m"
            MR_Word mercury__term_io__V_5_26;
#line 696 "term_io.m"
            MR_Word mercury__term_io__V_6_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 288 "string.opt"
            {
#line 288 "string.opt"
              mercury__term_io__V_5_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_26, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_4));
#line 288 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_26, 1) = ((MR_Box) (mercury__term_io__V_6_27));
#line 288 "string.opt"
            }
#line 290 "string.opt"
            {
#line 290 "string.opt"
              mercury__string__to_char_list_2_p_1(&mercury__term_io__V_13_13, mercury__term_io__V_5_26);
            }
#line 696 "term_io.m"
            {
#line 696 "term_io.m"
              mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_13_13));
#line 696 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
#line 696 "term_io.m"
            }
#line 696 "term_io.m"
          }
#line 697 "term_io.m"
        else
#line 698 "term_io.m"
          {
#line 698 "term_io.m"
            MR_String mercury__term_io__V_14_14;

#line 698 "term_io.m"
            {
#line 698 "term_io.m"
              mercury__term_io__V_14_14 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_4);
            }
#line 698 "term_io.m"
            {
#line 698 "term_io.m"
              mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_14_14));
#line 698 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
#line 698 "term_io.m"
            }
#line 698 "term_io.m"
          }
#line 697 "term_io.m"
      }
#line 695 "term_io.m"
    return mercury__term_io__Strings_6;
#line 695 "term_io.m"
  }
#line 690 "term_io.m"
}

#line 559 "term_io.m"
MR_String MR_CALL 
mercury__term_io__format_constant_agt_2_f_0(
#line 559 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1,
#line 559 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_2)
#line 559 "term_io.m"
{
#line 561 "term_io.m"
  {
#line 561 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 561 "term_io.m"
    MR_String mercury__term_io__HeadVar__3_3;

#line 561 "term_io.m"
    if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 565 "term_io.m"
      {
#line 565 "term_io.m"
        MR_String mercury__term_io__A_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

#line 566 "term_io.m"
        {
#line 566 "term_io.m"
          return mercury__term_io__HeadVar__3_3 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__term_io__A_8, mercury__term_io__NextToGraphicToken_2);
        }
#line 565 "term_io.m"
      }
#line 561 "term_io.m"
    else
#line 561 "term_io.m"
      if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 561 "term_io.m"
        {
#line 561 "term_io.m"
          MR_Integer mercury__term_io__I_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

#line 297 "string.opt"
          {
#line 297 "string.opt"
            mercury__string__int_to_base_string_3_p_0(mercury__term_io__I_4, (MR_Integer) 10, &mercury__term_io__HeadVar__3_3);
          }
#line 561 "term_io.m"
        }
#line 561 "term_io.m"
      else
#line 561 "term_io.m"
        if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 567 "term_io.m"
          {
#line 567 "term_io.m"
            MR_String mercury__term_io__S_10 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

#line 568 "term_io.m"
            {
#line 568 "term_io.m"
              return mercury__term_io__HeadVar__3_3 = mercury__term_io__quoted_string_1_f_0(mercury__term_io__S_10);
            }
#line 567 "term_io.m"
          }
#line 561 "term_io.m"
        else
#line 561 "term_io.m"
          if (((((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 563 "term_io.m"
            {
#line 563 "term_io.m"
              MR_Float mercury__term_io__F_6 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 309 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__format_constant_agt_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__term_io__F_6 ;
		{
#line 309 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 3913 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__HeadVar__3_3  = Str;
#line 309 "string.opt"
}
#line 563 "term_io.m"
            }
#line 561 "term_io.m"
          else
#line 569 "term_io.m"
            {
#line 569 "term_io.m"
              MR_String mercury__term_io__N_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 260 "string.opt"
              {
#line 260 "string.opt"
                mercury__string__append_3_p_2((MR_String) "\044", mercury__term_io__N_12, &mercury__term_io__HeadVar__3_3);
              }
#line 569 "term_io.m"
            }
#line 561 "term_io.m"
    return mercury__term_io__HeadVar__3_3;
#line 561 "term_io.m"
  }
#line 559 "term_io.m"
}

#line 541 "term_io.m"
void MR_CALL 
mercury__term_io__write_constant_4_p_0(
#line 541 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1,
#line 541 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_2)
#line 541 "term_io.m"
{
#line 544 "term_io.m"
  {
#line 544 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 544 "term_io.m"
    if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 548 "term_io.m"
      {
#line 548 "term_io.m"
        MR_Word mercury__term_io__TypeClassInfo_for_writer_45;
#line 548 "term_io.m"
        MR_Word mercury__term_io__TypeClassInfo_for_writer_46;
#line 548 "term_io.m"
        MR_String mercury__term_io__A_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 548 "term_io.m"
        MR_Word mercury__term_io__Stream_42;
#line 548 "term_io.m"
        MR_Box mercury__term_io__Stream_4_49;

#line 1352 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 3983 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_49  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
        mercury__term_io__Stream_42 = (MR_Word) mercury__term_io__Stream_4_49;
#line 3992 "term_io.c"
        mercury__term_io__TypeClassInfo_for_writer_45 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 3994 "term_io.c"
        mercury__term_io__TypeClassInfo_for_writer_46 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 594 "term_io.m"
        {
#line 594 "term_io.m"
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_45, mercury__term_io__TypeClassInfo_for_writer_46, mercury__term_io__Stream_42, mercury__term_io__A_17, mercury__term_io__NextToGraphicToken_2);
#line 594 "term_io.m"
          return;
        }
#line 548 "term_io.m"
      }
#line 544 "term_io.m"
    else
#line 544 "term_io.m"
      if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 544 "term_io.m"
        {
#line 544 "term_io.m"
          MR_Integer mercury__term_io__I_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

#line 574 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_Integer Val;

	Val =  mercury__term_io__I_5 ;
		{
#line 574 "io.opt"

    MercuryFilePtr out = mercury_current_text_output();
    if (ML_fprintf(out, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        mercury_output_error(out, errno);
    }

#line 4029 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 574 "io.opt"
}
#line 544 "term_io.m"
        }
#line 544 "term_io.m"
      else
#line 544 "term_io.m"
        if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 550 "term_io.m"
          {
#line 550 "term_io.m"
            MR_String mercury__term_io__S_23 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

#line 551 "term_io.m"
            {
#line 551 "term_io.m"
              mercury__term_io__quote_string_3_p_0(mercury__term_io__S_23);
#line 551 "term_io.m"
              return;
            }
#line 550 "term_io.m"
          }
#line 544 "term_io.m"
        else
#line 544 "term_io.m"
          if (((((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 546 "term_io.m"
            {
#line 546 "term_io.m"
              MR_Float mercury__term_io__F_11 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 582 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_Float Val;

	Val =  mercury__term_io__F_11 ;
		{
#line 582 "io.opt"

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MercuryFilePtr out;

    MR_sprintf_float(buf, Val);
    out = mercury_current_text_output();
    if (ML_fprintf(out, "%s", buf) < 0) {
        mercury_output_error(out, errno);
    }

#line 4083 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 582 "io.opt"
}
#line 546 "term_io.m"
            }
#line 544 "term_io.m"
          else
#line 552 "term_io.m"
            {
#line 552 "term_io.m"
              MR_String mercury__term_io__N_29 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 550 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_Char Character;

	Character =  (MR_Char) 36 ;
		{
#line 550 "io.opt"

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }

#line 4129 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 550 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_String Message;

	Message =  mercury__term_io__N_29 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4147 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 552 "term_io.m"
            }
#line 544 "term_io.m"
  }
#line 541 "term_io.m"
}

#line 525 "term_io.m"
static void MR_CALL 
mercury__term_io__write_term_args_8_p_0(
#line 525 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_40,
#line 525 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_39,
#line 525 "term_io.m"
  MR_Box mercury__term_io__Ops_1,
#line 525 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 525 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_3,
#line 525 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_4,
#line 525 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_5,
#line 525 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_6)
#line 525 "term_io.m"
{
#line 530 "term_io.m"
  while (MR_TRUE)
#line 530 "term_io.m"
    {
#line 530 "term_io.m"
      /* tailcall optimized into a loop */
#line 530 "term_io.m"
      {
#line 530 "term_io.m"
        MR_bool mercury__term_io__succeeded;

#line 530 "term_io.m"
        if ((mercury__term_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "term_io.m"
          {
#line 530 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_N_6 = mercury__term_io__STATE_VARIABLE_N_0_5;
#line 530 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_VarSet_4 = mercury__term_io__STATE_VARIABLE_VarSet_0_3;
#line 530 "term_io.m"
          }
#line 530 "term_io.m"
        else
#line 531 "term_io.m"
          {
#line 531 "term_io.m"
            MR_Word mercury__term_io__X_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 531 "term_io.m"
            MR_Word mercury__term_io__Xs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 531 "term_io.m"
            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_33_33;
#line 531 "term_io.m"
            MR_Integer mercury__term_io__STATE_VARIABLE_N_34_34;
#line 531 "term_io.m"
            MR_Integer mercury__term_io__V_52_52;
#line 4216 "term_io.c"
            MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
#line 4218 "term_io.c"
            MR_Box mercury__term_io__conv1_V_52_52;

#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_term_args_8_p_0

	MR_String Message;

	Message =  (MR_String) ", " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4233 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 4239 "term_io.c"
            mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_39, (MR_Integer) 0)), (MR_Integer) 13)));
#line 4241 "term_io.c"
            {
#line 4243 "term_io.c"
              mercury__term_io__conv1_V_52_52 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_39), mercury__term_io__Ops_1);
            }
#line 4246 "term_io.c"
            mercury__term_io__V_52_52 = ((MR_Integer) mercury__term_io__conv1_V_52_52);
#line 334 "term_io.m"
            {
#line 334 "term_io.m"
              mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_40, mercury__term_io__TypeClassInfo_for_op_table_39, mercury__term_io__Ops_1, mercury__term_io__X_20, mercury__term_io__V_52_52, mercury__term_io__STATE_VARIABLE_VarSet_0_3, &mercury__term_io__STATE_VARIABLE_VarSet_33_33, mercury__term_io__STATE_VARIABLE_N_0_5, &mercury__term_io__STATE_VARIABLE_N_34_34);
            }
#line 534 "term_io.m"
            /* direct tailcall eliminated */
#line 534 "term_io.m"
            {
#line 534 "term_io.m"
              MR_Word mercury__term_io__HeadVar__2__tmp_copy_2 = mercury__term_io__Xs_21;
#line 534 "term_io.m"
              MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_3 = mercury__term_io__STATE_VARIABLE_VarSet_33_33;
#line 534 "term_io.m"
              MR_Integer mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_5 = mercury__term_io__STATE_VARIABLE_N_34_34;

#line 534 "term_io.m"
              mercury__term_io__STATE_VARIABLE_N_0_5 = mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_5;
#line 534 "term_io.m"
              mercury__term_io__STATE_VARIABLE_VarSet_0_3 = mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_3;
#line 534 "term_io.m"
              mercury__term_io__HeadVar__2_2 = mercury__term_io__HeadVar__2__tmp_copy_2;
#line 534 "term_io.m"
            }
#line 534 "term_io.m"
            continue;
#line 531 "term_io.m"
          }
#line 530 "term_io.m"
      }
#line 530 "term_io.m"
      break;
#line 530 "term_io.m"
    }
#line 525 "term_io.m"
}

#line 480 "term_io.m"
static void MR_CALL 
mercury__term_io__write_list_tail_8_p_0(
#line 480 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_52,
#line 480 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_51,
#line 480 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 480 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 480 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_21,
#line 480 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_22,
#line 480 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_23,
#line 480 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_24)
#line 480 "term_io.m"
{
#line 490 "term_io.m"
  while (MR_TRUE)
#line 490 "term_io.m"
    {
#line 490 "term_io.m"
      /* tailcall optimized into a loop */
#line 490 "term_io.m"
      {
#line 490 "term_io.m"
        MR_bool mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_10)) == (MR_mktag((MR_Integer) 1)));
#line 490 "term_io.m"
        MR_Word mercury__term_io__Val_16;
#line 486 "term_io.m"
        MR_Word mercury__term_io__TypeCtorInfo_12_60;
#line 486 "term_io.m"
        MR_Word mercury__term_io__TypeInfo_13_61;
#line 486 "term_io.m"
        MR_Word mercury__term_io__TypeCtorInfo_14_62;
#line 486 "term_io.m"
        MR_Word mercury__term_io__TypeInfo_15_63;
#line 486 "term_io.m"
        MR_Word mercury__term_io__Id_14;
#line 486 "term_io.m"
        MR_Word mercury__term_io__Values_7_58;
#line 486 "term_io.m"
        MR_Word mercury__term_io__V_15_15;
#line 63 "varset.opt"
        MR_Word mercury__term_io__V_8_56;
#line 63 "varset.opt"
        MR_Word mercury__term_io__V_9_57;
#line 39 "map.opt"
        MR_Box mercury__term_io__conv0_Val_16;

#line 486 "term_io.m"
        if (mercury__term_io__succeeded)
#line 486 "term_io.m"
          {
#line 486 "term_io.m"
            mercury__term_io__Id_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_10, (MR_Integer) 0)));
#line 486 "term_io.m"
            mercury__term_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_10, (MR_Integer) 1)));
#line 63 "varset.opt"
            mercury__term_io__V_8_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 0)));
#line 63 "varset.opt"
            mercury__term_io__V_9_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 1)));
#line 63 "varset.opt"
            mercury__term_io__Values_7_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 2)));
#line 4353 "term_io.c"
            mercury__term_io__TypeCtorInfo_12_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 4355 "term_io.c"
            mercury__term_io__TypeCtorInfo_14_62 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4357 "term_io.c"
            {
#line 4359 "term_io.c"
              mercury__term_io__TypeInfo_13_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4361 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_61, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_60));
#line 4363 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_61, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_52));
#line 4365 "term_io.c"
            }
#line 4367 "term_io.c"
            {
#line 4369 "term_io.c"
              mercury__term_io__TypeInfo_15_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4371 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_63, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_14_62));
#line 4373 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_63, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_52));
#line 4375 "term_io.c"
            }
#line 39 "map.opt"
            {
#line 39 "map.opt"
              mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_52, mercury__term_io__TypeInfo_13_61, mercury__term_io__TypeInfo_15_63, mercury__term_io__Values_7_58, mercury__term_io__Id_14, &mercury__term_io__conv0_Val_16);
            }
#line 39 "map.opt"
            if (mercury__term_io__succeeded)
#line 39 "map.opt"
              {
#line 39 "map.opt"
                mercury__term_io__Val_16 = ((MR_Word) mercury__term_io__conv0_Val_16);
#line 39 "map.opt"
                mercury__term_io__succeeded = MR_TRUE;
#line 39 "map.opt"
              }
#line 486 "term_io.m"
          }
#line 490 "term_io.m"
        if (mercury__term_io__succeeded)
#line 489 "term_io.m"
          {
#line 489 "term_io.m"
            /* direct tailcall eliminated */
#line 489 "term_io.m"
            {
#line 489 "term_io.m"
              MR_Word mercury__term_io__Term__tmp_copy_10 = mercury__term_io__Val_16;

#line 489 "term_io.m"
              mercury__term_io__Term_10 = mercury__term_io__Term__tmp_copy_10;
#line 489 "term_io.m"
            }
#line 489 "term_io.m"
            continue;
#line 489 "term_io.m"
          }
#line 490 "term_io.m"
        else
#line 496 "term_io.m"
          {
#line 496 "term_io.m"
            MR_Word mercury__term_io__ListHead_17;
#line 496 "term_io.m"
            MR_Word mercury__term_io__ListTail_18;
#line 491 "term_io.m"
            MR_Word mercury__term_io__V_30_30;
#line 491 "term_io.m"
            MR_String mercury__term_io__V_31_31;
#line 491 "term_io.m"
            MR_Word mercury__term_io__V_32_32;
#line 491 "term_io.m"
            MR_Word mercury__term_io__V_33_33;
#line 491 "term_io.m"
            MR_Word mercury__term_io__V_34_34;
#line 491 "term_io.m"
            MR_Word mercury__term_io__V_19_19;

#line 491 "term_io.m"
            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 491 "term_io.m"
            if (mercury__term_io__succeeded)
#line 491 "term_io.m"
              {
#line 491 "term_io.m"
                mercury__term_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 0)));
#line 491 "term_io.m"
                mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 1)));
#line 491 "term_io.m"
                mercury__term_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 2)));
#line 491 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 491 "term_io.m"
                if (mercury__term_io__succeeded)
#line 491 "term_io.m"
                  {
#line 491 "term_io.m"
                    mercury__term_io__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_30_30, (MR_Integer) 0)));
#line 491 "term_io.m"
                    mercury__term_io__succeeded = (strcmp(mercury__term_io__V_31_31, (MR_String) "[|]") == 0);
#line 491 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 491 "term_io.m"
                      {
#line 491 "term_io.m"
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 491 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 491 "term_io.m"
                          {
#line 491 "term_io.m"
                            mercury__term_io__ListHead_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 0)));
#line 491 "term_io.m"
                            mercury__term_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 1)));
#line 491 "term_io.m"
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 491 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 491 "term_io.m"
                              {
#line 491 "term_io.m"
                                mercury__term_io__ListTail_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_33_33, (MR_Integer) 0)));
#line 491 "term_io.m"
                                mercury__term_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_33_33, (MR_Integer) 1)));
#line 491 "term_io.m"
                                mercury__term_io__succeeded = (mercury__term_io__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "term_io.m"
                              }
#line 491 "term_io.m"
                          }
#line 491 "term_io.m"
                      }
#line 491 "term_io.m"
                  }
#line 491 "term_io.m"
              }
#line 496 "term_io.m"
            if (mercury__term_io__succeeded)
#line 493 "term_io.m"
              {
#line 493 "term_io.m"
                MR_Word mercury__term_io__STATE_VARIABLE_VarSet_37_37;
#line 493 "term_io.m"
                MR_Integer mercury__term_io__STATE_VARIABLE_N_38_38;
#line 493 "term_io.m"
                MR_Integer mercury__term_io__V_79_79;
#line 4502 "term_io.c"
                MR_Box MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box);
#line 4504 "term_io.c"
                MR_Box mercury__term_io__conv2_V_79_79;

#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_list_tail_8_p_0

	MR_String Message;

	Message =  (MR_String) ", " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4519 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 4525 "term_io.c"
                mercury__term_io__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_51, (MR_Integer) 0)), (MR_Integer) 13)));
#line 4527 "term_io.c"
                {
#line 4529 "term_io.c"
                  mercury__term_io__conv2_V_79_79 = mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_51), mercury__term_io__Ops_9);
                }
#line 4532 "term_io.c"
                mercury__term_io__V_79_79 = ((MR_Integer) mercury__term_io__conv2_V_79_79);
#line 334 "term_io.m"
                {
#line 334 "term_io.m"
                  mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_52, mercury__term_io__TypeClassInfo_for_op_table_51, mercury__term_io__Ops_9, mercury__term_io__ListHead_17, mercury__term_io__V_79_79, mercury__term_io__STATE_VARIABLE_VarSet_0_21, &mercury__term_io__STATE_VARIABLE_VarSet_37_37, mercury__term_io__STATE_VARIABLE_N_0_23, &mercury__term_io__STATE_VARIABLE_N_38_38);
                }
#line 495 "term_io.m"
                /* direct tailcall eliminated */
#line 495 "term_io.m"
                {
#line 495 "term_io.m"
                  MR_Word mercury__term_io__Term__tmp_copy_10 = mercury__term_io__ListTail_18;
#line 495 "term_io.m"
                  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_21 = mercury__term_io__STATE_VARIABLE_VarSet_37_37;
#line 495 "term_io.m"
                  MR_Integer mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_23 = mercury__term_io__STATE_VARIABLE_N_38_38;

#line 495 "term_io.m"
                  mercury__term_io__STATE_VARIABLE_N_0_23 = mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_23;
#line 495 "term_io.m"
                  mercury__term_io__STATE_VARIABLE_VarSet_0_21 = mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_21;
#line 495 "term_io.m"
                  mercury__term_io__Term_10 = mercury__term_io__Term__tmp_copy_10;
#line 495 "term_io.m"
                }
#line 495 "term_io.m"
                continue;
#line 493 "term_io.m"
              }
#line 496 "term_io.m"
            else
#line 500 "term_io.m"
              {
#line 497 "term_io.m"
                MR_Word mercury__term_io__V_43_43;
#line 497 "term_io.m"
                MR_String mercury__term_io__V_44_44;
#line 497 "term_io.m"
                MR_Word mercury__term_io__V_45_45;
#line 497 "term_io.m"
                MR_Word mercury__term_io__V_20_20;

#line 497 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 497 "term_io.m"
                if (mercury__term_io__succeeded)
#line 497 "term_io.m"
                  {
#line 497 "term_io.m"
                    mercury__term_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 0)));
#line 497 "term_io.m"
                    mercury__term_io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 1)));
#line 497 "term_io.m"
                    mercury__term_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 2)));
#line 497 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 497 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 497 "term_io.m"
                      {
#line 497 "term_io.m"
                        mercury__term_io__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_43_43, (MR_Integer) 0)));
#line 497 "term_io.m"
                        mercury__term_io__succeeded = (strcmp(mercury__term_io__V_44_44, (MR_String) "[]") == 0);
#line 497 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 497 "term_io.m"
                          mercury__term_io__succeeded = (mercury__term_io__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 497 "term_io.m"
                      }
#line 497 "term_io.m"
                  }
#line 500 "term_io.m"
                if (mercury__term_io__succeeded)
#line 499 "term_io.m"
                  {
#line 499 "term_io.m"
                    *mercury__term_io__STATE_VARIABLE_N_24 = mercury__term_io__STATE_VARIABLE_N_0_23;
#line 499 "term_io.m"
                    *mercury__term_io__STATE_VARIABLE_VarSet_22 = mercury__term_io__STATE_VARIABLE_VarSet_0_21;
#line 499 "term_io.m"
                  }
#line 500 "term_io.m"
                else
#line 501 "term_io.m"
                  {
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_list_tail_8_p_0

	MR_String Message;

	Message =  (MR_String) " | " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4631 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 502 "term_io.m"
                    {
#line 502 "term_io.m"
                      mercury__term_io__write_term_2_8_p_0(mercury__term_io__TypeInfo_for_T_52, mercury__term_io__TypeClassInfo_for_op_table_51, mercury__term_io__Ops_9, mercury__term_io__Term_10, mercury__term_io__STATE_VARIABLE_VarSet_0_21, mercury__term_io__STATE_VARIABLE_VarSet_22, mercury__term_io__STATE_VARIABLE_N_0_23, mercury__term_io__STATE_VARIABLE_N_24);
#line 502 "term_io.m"
                      return;
                    }
#line 501 "term_io.m"
                  }
#line 500 "term_io.m"
              }
#line 496 "term_io.m"
          }
#line 490 "term_io.m"
      }
#line 490 "term_io.m"
      break;
#line 490 "term_io.m"
    }
#line 480 "term_io.m"
}

#line 337 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_3_9_p_0(
#line 337 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_223,
#line 337 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_222,
#line 337 "term_io.m"
  MR_Box mercury__term_io__Ops_1,
#line 337 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 337 "term_io.m"
  MR_Integer mercury__term_io__Priority_3,
#line 337 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_4,
#line 337 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_5,
#line 337 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_6,
#line 337 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_7)
#line 337 "term_io.m"
{
#line 341 "term_io.m"
  {
#line 341 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 341 "term_io.m"
    if (((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 344 "term_io.m"
      {
#line 344 "term_io.m"
        MR_Word mercury__term_io__Functor_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 344 "term_io.m"
        MR_Word mercury__term_io__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 343 "term_io.m"
        MR_Word mercury__term_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__2_2, (MR_Integer) 2)));
#line 353 "term_io.m"
        MR_Word mercury__term_io__ListHead_34;
#line 353 "term_io.m"
        MR_Word mercury__term_io__ListTail_35;
#line 346 "term_io.m"
        MR_String mercury__term_io__V_70_70;
#line 346 "term_io.m"
        MR_Word mercury__term_io__V_71_71;
#line 346 "term_io.m"
        MR_Word mercury__term_io__V_72_72;

#line 346 "term_io.m"
        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 346 "term_io.m"
        if (mercury__term_io__succeeded)
#line 346 "term_io.m"
          {
#line 346 "term_io.m"
            mercury__term_io__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 346 "term_io.m"
            mercury__term_io__succeeded = (strcmp(mercury__term_io__V_70_70, (MR_String) "[|]") == 0);
#line 346 "term_io.m"
            if (mercury__term_io__succeeded)
#line 346 "term_io.m"
              {
#line 347 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 347 "term_io.m"
                if (mercury__term_io__succeeded)
#line 347 "term_io.m"
                  {
#line 347 "term_io.m"
                    mercury__term_io__ListHead_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 347 "term_io.m"
                    mercury__term_io__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 347 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 347 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 347 "term_io.m"
                      {
#line 347 "term_io.m"
                        mercury__term_io__ListTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_71_71, (MR_Integer) 0)));
#line 347 "term_io.m"
                        mercury__term_io__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_71_71, (MR_Integer) 1)));
#line 347 "term_io.m"
                        mercury__term_io__succeeded = (mercury__term_io__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "term_io.m"
                      }
#line 347 "term_io.m"
                  }
#line 346 "term_io.m"
              }
#line 346 "term_io.m"
          }
#line 353 "term_io.m"
        if (mercury__term_io__succeeded)
#line 349 "term_io.m"
          {
#line 349 "term_io.m"
            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_75_75;
#line 349 "term_io.m"
            MR_Integer mercury__term_io__STATE_VARIABLE_N_76_76;

#line 349 "term_io.m"
            {
#line 349 "term_io.m"
              mercury__io__write_char_3_p_0((MR_Char) 91);
            }
#line 350 "term_io.m"
            {
#line 350 "term_io.m"
              mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__ListHead_34, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_75_75, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_76_76);
            }
#line 351 "term_io.m"
            {
#line 351 "term_io.m"
              mercury__term_io__write_list_tail_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__ListTail_35, mercury__term_io__STATE_VARIABLE_VarSet_75_75, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_76_76, mercury__term_io__STATE_VARIABLE_N_7);
            }
#line 352 "term_io.m"
            {
#line 352 "term_io.m"
              mercury__io__write_char_3_p_0((MR_Char) 93);
#line 352 "term_io.m"
              return;
            }
#line 349 "term_io.m"
          }
#line 353 "term_io.m"
        else
#line 358 "term_io.m"
          {
#line 354 "term_io.m"
            MR_String mercury__term_io__V_83_83;

#line 354 "term_io.m"
            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 354 "term_io.m"
            if (mercury__term_io__succeeded)
#line 354 "term_io.m"
              {
#line 354 "term_io.m"
                mercury__term_io__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 354 "term_io.m"
                mercury__term_io__succeeded = (strcmp(mercury__term_io__V_83_83, (MR_String) "[]") == 0);
#line 354 "term_io.m"
                if (mercury__term_io__succeeded)
#line 355 "term_io.m"
                  mercury__term_io__succeeded = (mercury__term_io__Args_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "term_io.m"
              }
#line 358 "term_io.m"
            if (mercury__term_io__succeeded)
#line 357 "term_io.m"
              {
#line 357 "term_io.m"
                {
#line 357 "term_io.m"
                  mercury__io__write_string_3_p_0((MR_String) "[]");
                }
#line 357 "term_io.m"
                *mercury__term_io__STATE_VARIABLE_N_7 = mercury__term_io__STATE_VARIABLE_N_0_6;
#line 357 "term_io.m"
                *mercury__term_io__STATE_VARIABLE_VarSet_5 = mercury__term_io__STATE_VARIABLE_VarSet_0_4;
#line 357 "term_io.m"
              }
#line 358 "term_io.m"
            else
#line 365 "term_io.m"
              {
#line 365 "term_io.m"
                MR_Word mercury__term_io__BracedTerm_36;
#line 359 "term_io.m"
                MR_String mercury__term_io__V_86_86;
#line 359 "term_io.m"
                MR_Word mercury__term_io__V_87_87;

#line 359 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 359 "term_io.m"
                if (mercury__term_io__succeeded)
#line 359 "term_io.m"
                  {
#line 359 "term_io.m"
                    mercury__term_io__V_86_86 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 359 "term_io.m"
                    mercury__term_io__succeeded = (strcmp(mercury__term_io__V_86_86, (MR_String) "{}") == 0);
#line 359 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 359 "term_io.m"
                      {
#line 360 "term_io.m"
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 360 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 360 "term_io.m"
                          {
#line 360 "term_io.m"
                            mercury__term_io__BracedTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 360 "term_io.m"
                            mercury__term_io__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 360 "term_io.m"
                            mercury__term_io__succeeded = (mercury__term_io__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 360 "term_io.m"
                          }
#line 359 "term_io.m"
                      }
#line 359 "term_io.m"
                  }
#line 365 "term_io.m"
                if (mercury__term_io__succeeded)
#line 362 "term_io.m"
                  {
#line 362 "term_io.m"
                    {
#line 362 "term_io.m"
                      mercury__io__write_string_3_p_0((MR_String) "{ ");
                    }
#line 363 "term_io.m"
                    {
#line 363 "term_io.m"
                      mercury__term_io__write_term_2_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__BracedTerm_36, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
                    }
#line 364 "term_io.m"
                    {
#line 364 "term_io.m"
                      mercury__io__write_string_3_p_0((MR_String) " }");
#line 364 "term_io.m"
                      return;
                    }
#line 362 "term_io.m"
                  }
#line 365 "term_io.m"
                else
#line 373 "term_io.m"
                  {
#line 373 "term_io.m"
                    MR_Word mercury__term_io__BracedHead_37;
#line 373 "term_io.m"
                    MR_Word mercury__term_io__BracedTail_38;
#line 366 "term_io.m"
                    MR_String mercury__term_io__V_95_95;

#line 366 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 366 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 366 "term_io.m"
                      {
#line 366 "term_io.m"
                        mercury__term_io__V_95_95 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 366 "term_io.m"
                        mercury__term_io__succeeded = (strcmp(mercury__term_io__V_95_95, (MR_String) "{}") == 0);
#line 366 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 366 "term_io.m"
                          {
#line 367 "term_io.m"
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 367 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 367 "term_io.m"
                              {
#line 367 "term_io.m"
                                mercury__term_io__BracedHead_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 367 "term_io.m"
                                mercury__term_io__BracedTail_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 367 "term_io.m"
                              }
#line 366 "term_io.m"
                          }
#line 366 "term_io.m"
                      }
#line 373 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 369 "term_io.m"
                      {
#line 369 "term_io.m"
                        MR_Word mercury__term_io__STATE_VARIABLE_VarSet_98_98;
#line 369 "term_io.m"
                        MR_Integer mercury__term_io__STATE_VARIABLE_N_99_99;

#line 369 "term_io.m"
                        {
#line 369 "term_io.m"
                          mercury__io__write_char_3_p_0((MR_Char) 123);
                        }
#line 370 "term_io.m"
                        {
#line 370 "term_io.m"
                          mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__BracedHead_37, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_98_98, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_99_99);
                        }
#line 371 "term_io.m"
                        {
#line 371 "term_io.m"
                          mercury__term_io__write_term_args_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__BracedTail_38, mercury__term_io__STATE_VARIABLE_VarSet_98_98, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_99_99, mercury__term_io__STATE_VARIABLE_N_7);
                        }
#line 372 "term_io.m"
                        {
#line 372 "term_io.m"
                          mercury__io__write_char_3_p_0((MR_Char) 125);
#line 372 "term_io.m"
                          return;
                        }
#line 369 "term_io.m"
                      }
#line 373 "term_io.m"
                    else
#line 385 "term_io.m"
                      {
#line 385 "term_io.m"
                        MR_Word mercury__term_io__Var_39;
#line 385 "term_io.m"
                        MR_Word mercury__term_io__FirstArg_41;
#line 385 "term_io.m"
                        MR_Word mercury__term_io__OtherArgs_42;
#line 377 "term_io.m"
                        MR_String mercury__term_io__V_106_106;
#line 377 "term_io.m"
                        MR_Word mercury__term_io__V_107_107;
#line 377 "term_io.m"
                        MR_Word mercury__term_io__V_108_108;
#line 378 "term_io.m"
                        MR_Word mercury__term_io__V_40_40;

#line 377 "term_io.m"
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 377 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 377 "term_io.m"
                          {
#line 377 "term_io.m"
                            mercury__term_io__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 377 "term_io.m"
                            mercury__term_io__succeeded = (strcmp(mercury__term_io__V_106_106, (MR_String) "") == 0);
#line 377 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 377 "term_io.m"
                              {
#line 378 "term_io.m"
                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 378 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 378 "term_io.m"
                                  {
#line 378 "term_io.m"
                                    mercury__term_io__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 378 "term_io.m"
                                    mercury__term_io__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 378 "term_io.m"
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_107_107)) == (MR_mktag((MR_Integer) 1)));
#line 378 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 378 "term_io.m"
                                      {
#line 378 "term_io.m"
                                        mercury__term_io__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_107_107, (MR_Integer) 0)));
#line 378 "term_io.m"
                                        mercury__term_io__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_107_107, (MR_Integer) 1)));
#line 378 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_108_108)) == (MR_mktag((MR_Integer) 1)));
#line 378 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 378 "term_io.m"
                                          {
#line 378 "term_io.m"
                                            mercury__term_io__FirstArg_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_108_108, (MR_Integer) 0)));
#line 378 "term_io.m"
                                            mercury__term_io__OtherArgs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_108_108, (MR_Integer) 1)));
#line 378 "term_io.m"
                                          }
#line 378 "term_io.m"
                                      }
#line 378 "term_io.m"
                                  }
#line 377 "term_io.m"
                              }
#line 377 "term_io.m"
                          }
#line 385 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 380 "term_io.m"
                          {
#line 380 "term_io.m"
                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_109_109;
#line 380 "term_io.m"
                            MR_Integer mercury__term_io__STATE_VARIABLE_N_110_110;
#line 380 "term_io.m"
                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_114_114;
#line 380 "term_io.m"
                            MR_Integer mercury__term_io__STATE_VARIABLE_N_115_115;

#line 380 "term_io.m"
                            {
#line 380 "term_io.m"
                              mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Var_39, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_109_109, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_110_110);
                            }
#line 381 "term_io.m"
                            {
#line 381 "term_io.m"
                              mercury__io__write_char_3_p_0((MR_Char) 40);
                            }
#line 382 "term_io.m"
                            {
#line 382 "term_io.m"
                              mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__FirstArg_41, mercury__term_io__STATE_VARIABLE_VarSet_109_109, &mercury__term_io__STATE_VARIABLE_VarSet_114_114, mercury__term_io__STATE_VARIABLE_N_110_110, &mercury__term_io__STATE_VARIABLE_N_115_115);
                            }
#line 383 "term_io.m"
                            {
#line 383 "term_io.m"
                              mercury__term_io__write_term_args_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OtherArgs_42, mercury__term_io__STATE_VARIABLE_VarSet_114_114, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_115_115, mercury__term_io__STATE_VARIABLE_N_7);
                            }
#line 384 "term_io.m"
                            {
#line 384 "term_io.m"
                              mercury__io__write_char_3_p_0((MR_Char) 41);
#line 384 "term_io.m"
                              return;
                            }
#line 380 "term_io.m"
                          }
#line 385 "term_io.m"
                        else
#line 397 "term_io.m"
                          {
#line 397 "term_io.m"
                            MR_Word mercury__term_io__PrefixArg_43;
#line 397 "term_io.m"
                            MR_Integer mercury__term_io__OpPriority_45;
#line 397 "term_io.m"
                            MR_Word mercury__term_io__OpAssoc_46;
#line 386 "term_io.m"
                            MR_String mercury__term_io__OpName_44;
#line 386 "term_io.m"
                            MR_Word mercury__term_io__V_122_122;

#line 386 "term_io.m"
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 386 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 386 "term_io.m"
                              {
#line 386 "term_io.m"
                                mercury__term_io__PrefixArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 386 "term_io.m"
                                mercury__term_io__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 386 "term_io.m"
                                mercury__term_io__succeeded = (mercury__term_io__V_122_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 386 "term_io.m"
                                  {
#line 387 "term_io.m"
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 387 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 387 "term_io.m"
                                      {
#line 387 "term_io.m"
                                        mercury__term_io__OpName_44 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 388 "term_io.m"
                                        {
#line 388 "term_io.m"
                                          mercury__term_io__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_44, &mercury__term_io__OpPriority_45, &mercury__term_io__OpAssoc_46);
                                        }
#line 387 "term_io.m"
                                      }
#line 386 "term_io.m"
                                  }
#line 386 "term_io.m"
                              }
#line 397 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 390 "term_io.m"
                              {
#line 390 "term_io.m"
                                MR_Word mercury__term_io__TypeClassInfo_for_writer_225;
#line 390 "term_io.m"
                                MR_Word mercury__term_io__Stream_47;
#line 390 "term_io.m"
                                MR_Integer mercury__term_io__NewPriority_48;

#line 390 "term_io.m"
                                {
#line 390 "term_io.m"
                                  mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_47);
                                }
#line 5144 "term_io.c"
                                mercury__term_io__TypeClassInfo_for_writer_225 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 33 "stream.string_writer.opt"
                                mercury__term_io__succeeded = (mercury__term_io__OpPriority_45 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                if (mercury__term_io__succeeded)
#line 5150 "term_io.c"
                                  {
#line 5152 "term_io.c"
                                    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_225, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5154 "term_io.c"
                                    MR_Box mercury__term_io__conv1_STATE_VARIABLE_IO_125_125;

#line 5157 "term_io.c"
                                    {
#line 5159 "term_io.c"
                                      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_225), ((MR_Box) (mercury__term_io__Stream_47)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_IO_125_125);
                                    }
#line 5162 "term_io.c"
                                  }
#line 36 "stream.string_writer.opt"
                                else
#line 37 "stream.string_writer.opt"
                                  {
#line 37 "stream.string_writer.opt"
                                  }
#line 392 "term_io.m"
                                {
#line 392 "term_io.m"
                                  mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                }
#line 393 "term_io.m"
                                {
#line 393 "term_io.m"
                                  mercury__io__write_char_3_p_0((MR_Char) 32);
                                }
#line 34 "ops.opt"
                                if ((mercury__term_io__OpAssoc_46 == (MR_Integer) 0))
#line 35 "ops.opt"
                                  {
#line 36 "ops.opt"
                                    mercury__term_io__NewPriority_48 = (mercury__term_io__OpPriority_45 - (MR_Integer) 1);
#line 35 "ops.opt"
                                  }
#line 34 "ops.opt"
                                else
#line 34 "ops.opt"
                                  mercury__term_io__NewPriority_48 = mercury__term_io__OpPriority_45;
#line 395 "term_io.m"
                                {
#line 395 "term_io.m"
                                  mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__PrefixArg_43, mercury__term_io__NewPriority_48, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
                                }
#line 33 "stream.string_writer.opt"
                                mercury__term_io__succeeded = (mercury__term_io__OpPriority_45 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                if (mercury__term_io__succeeded)
#line 5201 "term_io.c"
                                  {
#line 5203 "term_io.c"
                                    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_225, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5205 "term_io.c"
                                    MR_Box mercury__term_io__conv3_STATE_VARIABLE_IO_9;

#line 5208 "term_io.c"
                                    {
#line 5210 "term_io.c"
                                      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_225), ((MR_Box) (mercury__term_io__Stream_47)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_IO_9);
                                    }
#line 5213 "term_io.c"
                                  }
#line 36 "stream.string_writer.opt"
                                else
#line 37 "stream.string_writer.opt"
                                  {
#line 37 "stream.string_writer.opt"
                                  }
#line 390 "term_io.m"
                              }
#line 397 "term_io.m"
                            else
#line 409 "term_io.m"
                              {
#line 409 "term_io.m"
                                MR_Word mercury__term_io__PostfixArg_49;
#line 409 "term_io.m"
                                MR_Integer mercury__term_io__OpPriority_218;
#line 409 "term_io.m"
                                MR_Word mercury__term_io__OpAssoc_219;
#line 398 "term_io.m"
                                MR_Word mercury__term_io__V_134_134;
#line 398 "term_io.m"
                                MR_String mercury__term_io__OpName_203;

#line 398 "term_io.m"
                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 398 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 398 "term_io.m"
                                  {
#line 398 "term_io.m"
                                    mercury__term_io__PostfixArg_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 398 "term_io.m"
                                    mercury__term_io__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 398 "term_io.m"
                                    mercury__term_io__succeeded = (mercury__term_io__V_134_134 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 398 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 398 "term_io.m"
                                      {
#line 399 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 399 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 399 "term_io.m"
                                          {
#line 399 "term_io.m"
                                            mercury__term_io__OpName_203 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 400 "term_io.m"
                                            {
#line 400 "term_io.m"
                                              mercury__term_io__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_203, &mercury__term_io__OpPriority_218, &mercury__term_io__OpAssoc_219);
                                            }
#line 399 "term_io.m"
                                          }
#line 398 "term_io.m"
                                      }
#line 398 "term_io.m"
                                  }
#line 409 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 402 "term_io.m"
                                  {
#line 402 "term_io.m"
                                    MR_Word mercury__term_io__TypeClassInfo_for_writer_227;
#line 402 "term_io.m"
                                    MR_Word mercury__term_io__Stream_204;
#line 402 "term_io.m"
                                    MR_Integer mercury__term_io__NewPriority_205;

#line 402 "term_io.m"
                                    {
#line 402 "term_io.m"
                                      mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_204);
                                    }
#line 5289 "term_io.c"
                                    mercury__term_io__TypeClassInfo_for_writer_227 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 33 "stream.string_writer.opt"
                                    mercury__term_io__succeeded = (mercury__term_io__OpPriority_218 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                    if (mercury__term_io__succeeded)
#line 5295 "term_io.c"
                                      {
#line 5297 "term_io.c"
                                        void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_227, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5299 "term_io.c"
                                        MR_Box mercury__term_io__conv5_STATE_VARIABLE_IO_137_137;

#line 5302 "term_io.c"
                                        {
#line 5304 "term_io.c"
                                          mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_227), ((MR_Box) (mercury__term_io__Stream_204)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_IO_137_137);
                                        }
#line 5307 "term_io.c"
                                      }
#line 36 "stream.string_writer.opt"
                                    else
#line 37 "stream.string_writer.opt"
                                      {
#line 37 "stream.string_writer.opt"
                                      }
#line 34 "ops.opt"
                                    if ((mercury__term_io__OpAssoc_219 == (MR_Integer) 0))
#line 35 "ops.opt"
                                      {
#line 36 "ops.opt"
                                        mercury__term_io__NewPriority_205 = (mercury__term_io__OpPriority_218 - (MR_Integer) 1);
#line 35 "ops.opt"
                                      }
#line 34 "ops.opt"
                                    else
#line 34 "ops.opt"
                                      mercury__term_io__NewPriority_205 = mercury__term_io__OpPriority_218;
#line 405 "term_io.m"
                                    {
#line 405 "term_io.m"
                                      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__PostfixArg_49, mercury__term_io__NewPriority_205, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
                                    }
#line 406 "term_io.m"
                                    {
#line 406 "term_io.m"
                                      mercury__io__write_char_3_p_0((MR_Char) 32);
                                    }
#line 407 "term_io.m"
                                    {
#line 407 "term_io.m"
                                      mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                    }
#line 33 "stream.string_writer.opt"
                                    mercury__term_io__succeeded = (mercury__term_io__OpPriority_218 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                    if (mercury__term_io__succeeded)
#line 5346 "term_io.c"
                                      {
#line 5348 "term_io.c"
                                        void MR_CALL (* mercury__term_io__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_227, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5350 "term_io.c"
                                        MR_Box mercury__term_io__conv7_STATE_VARIABLE_IO_9;

#line 5353 "term_io.c"
                                        {
#line 5355 "term_io.c"
                                          mercury__term_io__func_6(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_227), ((MR_Box) (mercury__term_io__Stream_204)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv7_STATE_VARIABLE_IO_9);
                                        }
#line 5358 "term_io.c"
                                      }
#line 36 "stream.string_writer.opt"
                                    else
#line 37 "stream.string_writer.opt"
                                      {
#line 37 "stream.string_writer.opt"
                                      }
#line 402 "term_io.m"
                                  }
#line 409 "term_io.m"
                                else
#line 439 "term_io.m"
                                  {
#line 439 "term_io.m"
                                    MR_Word mercury__term_io__Arg1_50;
#line 439 "term_io.m"
                                    MR_Word mercury__term_io__Arg2_51;
#line 439 "term_io.m"
                                    MR_Word mercury__term_io__LeftAssoc_52;
#line 439 "term_io.m"
                                    MR_Word mercury__term_io__RightAssoc_53;
#line 439 "term_io.m"
                                    MR_String mercury__term_io__OpName_214;
#line 439 "term_io.m"
                                    MR_Integer mercury__term_io__OpPriority_215;
#line 410 "term_io.m"
                                    MR_Word mercury__term_io__V_146_146;
#line 410 "term_io.m"
                                    MR_Word mercury__term_io__V_147_147;

#line 410 "term_io.m"
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 410 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 410 "term_io.m"
                                      {
#line 410 "term_io.m"
                                        mercury__term_io__Arg1_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 410 "term_io.m"
                                        mercury__term_io__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 410 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_146_146)) == (MR_mktag((MR_Integer) 1)));
#line 410 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 410 "term_io.m"
                                          {
#line 410 "term_io.m"
                                            mercury__term_io__Arg2_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_146_146, (MR_Integer) 0)));
#line 410 "term_io.m"
                                            mercury__term_io__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_146_146, (MR_Integer) 1)));
#line 410 "term_io.m"
                                            mercury__term_io__succeeded = (mercury__term_io__V_147_147 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 410 "term_io.m"
                                              {
#line 411 "term_io.m"
                                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 411 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 411 "term_io.m"
                                                  {
#line 411 "term_io.m"
                                                    mercury__term_io__OpName_214 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 412 "term_io.m"
                                                    {
#line 412 "term_io.m"
                                                      mercury__term_io__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_214, &mercury__term_io__OpPriority_215, &mercury__term_io__LeftAssoc_52, &mercury__term_io__RightAssoc_53);
                                                    }
#line 411 "term_io.m"
                                                  }
#line 410 "term_io.m"
                                              }
#line 410 "term_io.m"
                                          }
#line 410 "term_io.m"
                                      }
#line 439 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 414 "term_io.m"
                                      {
#line 414 "term_io.m"
                                        MR_Word mercury__term_io__TypeClassInfo_for_writer_229;
#line 414 "term_io.m"
                                        MR_Integer mercury__term_io__LeftPriority_54;
#line 414 "term_io.m"
                                        MR_Integer mercury__term_io__RightPriority_56;
#line 414 "term_io.m"
                                        MR_Word mercury__term_io__STATE_VARIABLE_VarSet_151_151;
#line 414 "term_io.m"
                                        MR_Integer mercury__term_io__STATE_VARIABLE_N_152_152;
#line 414 "term_io.m"
                                        MR_Word mercury__term_io__Stream_206;

#line 414 "term_io.m"
                                        {
#line 414 "term_io.m"
                                          mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_206);
                                        }
#line 5458 "term_io.c"
                                        mercury__term_io__TypeClassInfo_for_writer_229 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 33 "stream.string_writer.opt"
                                        mercury__term_io__succeeded = (mercury__term_io__OpPriority_215 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                        if (mercury__term_io__succeeded)
#line 5464 "term_io.c"
                                          {
#line 5466 "term_io.c"
                                            void MR_CALL (* mercury__term_io__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_229, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5468 "term_io.c"
                                            MR_Box mercury__term_io__conv9_STATE_VARIABLE_IO_150_150;

#line 5471 "term_io.c"
                                            {
#line 5473 "term_io.c"
                                              mercury__term_io__func_8(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_229), ((MR_Box) (mercury__term_io__Stream_206)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv9_STATE_VARIABLE_IO_150_150);
                                            }
#line 5476 "term_io.c"
                                          }
#line 36 "stream.string_writer.opt"
                                        else
#line 37 "stream.string_writer.opt"
                                          {
#line 37 "stream.string_writer.opt"
                                          }
#line 34 "ops.opt"
                                        if ((mercury__term_io__LeftAssoc_52 == (MR_Integer) 0))
#line 35 "ops.opt"
                                          {
#line 36 "ops.opt"
                                            mercury__term_io__LeftPriority_54 = (mercury__term_io__OpPriority_215 - (MR_Integer) 1);
#line 35 "ops.opt"
                                          }
#line 34 "ops.opt"
                                        else
#line 34 "ops.opt"
                                          mercury__term_io__LeftPriority_54 = mercury__term_io__OpPriority_215;
#line 417 "term_io.m"
                                        {
#line 417 "term_io.m"
                                          mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg1_50, mercury__term_io__LeftPriority_54, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_151_151, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_152_152);
                                        }
#line 418 "term_io.m"
                                        mercury__term_io__succeeded = (strcmp(mercury__term_io__OpName_214, (MR_String) ",") == 0);
#line 420 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 419 "term_io.m"
                                          {
#line 419 "term_io.m"
                                            {
#line 419 "term_io.m"
                                              mercury__io__write_string_3_p_0((MR_String) ", ");
                                            }
#line 419 "term_io.m"
                                          }
#line 420 "term_io.m"
                                        else
#line 431 "term_io.m"
                                          {
#line 420 "term_io.m"
                                            mercury__term_io__succeeded = (strcmp(mercury__term_io__OpName_214, (MR_String) ".") == 0);
#line 431 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 429 "term_io.m"
                                              {
#line 429 "term_io.m"
                                                MR_String mercury__term_io__Dot_55;

#line 425 "term_io.m"
                                                {
#line 425 "term_io.m"
                                                  mercury__term_io__succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(mercury__term_io__Arg2_51);
                                                }
#line 427 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 426 "term_io.m"
                                                  mercury__term_io__Dot_55 = (MR_String) "\'.\'";
#line 427 "term_io.m"
                                                else
#line 428 "term_io.m"
                                                  mercury__term_io__Dot_55 = (MR_String) ".";
#line 430 "term_io.m"
                                                {
#line 430 "term_io.m"
                                                  mercury__io__write_string_3_p_0(mercury__term_io__Dot_55);
                                                }
#line 429 "term_io.m"
                                              }
#line 431 "term_io.m"
                                            else
#line 432 "term_io.m"
                                              {
#line 432 "term_io.m"
                                                {
#line 432 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 32);
                                                }
#line 433 "term_io.m"
                                                {
#line 433 "term_io.m"
                                                  mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                                }
#line 434 "term_io.m"
                                                {
#line 434 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 32);
                                                }
#line 432 "term_io.m"
                                              }
#line 431 "term_io.m"
                                          }
#line 34 "ops.opt"
                                        if ((mercury__term_io__RightAssoc_53 == (MR_Integer) 0))
#line 35 "ops.opt"
                                          {
#line 36 "ops.opt"
                                            mercury__term_io__RightPriority_56 = (mercury__term_io__OpPriority_215 - (MR_Integer) 1);
#line 35 "ops.opt"
                                          }
#line 34 "ops.opt"
                                        else
#line 34 "ops.opt"
                                          mercury__term_io__RightPriority_56 = mercury__term_io__OpPriority_215;
#line 437 "term_io.m"
                                        {
#line 437 "term_io.m"
                                          mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg2_51, mercury__term_io__RightPriority_56, mercury__term_io__STATE_VARIABLE_VarSet_151_151, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_152_152, mercury__term_io__STATE_VARIABLE_N_7);
                                        }
#line 33 "stream.string_writer.opt"
                                        mercury__term_io__succeeded = (mercury__term_io__OpPriority_215 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                        if (mercury__term_io__succeeded)
#line 5591 "term_io.c"
                                          {
#line 5593 "term_io.c"
                                            void MR_CALL (* mercury__term_io__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_229, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5595 "term_io.c"
                                            MR_Box mercury__term_io__conv11_STATE_VARIABLE_IO_9;

#line 5598 "term_io.c"
                                            {
#line 5600 "term_io.c"
                                              mercury__term_io__func_10(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_229), ((MR_Box) (mercury__term_io__Stream_206)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv11_STATE_VARIABLE_IO_9);
                                            }
#line 5603 "term_io.c"
                                          }
#line 36 "stream.string_writer.opt"
                                        else
#line 37 "stream.string_writer.opt"
                                          {
#line 37 "stream.string_writer.opt"
                                          }
#line 414 "term_io.m"
                                      }
#line 439 "term_io.m"
                                    else
#line 455 "term_io.m"
                                      {
#line 455 "term_io.m"
                                        MR_Word mercury__term_io__FirstAssoc_57;
#line 455 "term_io.m"
                                        MR_Word mercury__term_io__SecondAssoc_58;
#line 455 "term_io.m"
                                        MR_Integer mercury__term_io__OpPriority_210;
#line 455 "term_io.m"
                                        MR_Word mercury__term_io__Arg1_212;
#line 455 "term_io.m"
                                        MR_Word mercury__term_io__Arg2_213;
#line 440 "term_io.m"
                                        MR_Word mercury__term_io__V_167_167;
#line 440 "term_io.m"
                                        MR_Word mercury__term_io__V_168_168;
#line 440 "term_io.m"
                                        MR_String mercury__term_io__OpName_207;

#line 440 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 440 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 440 "term_io.m"
                                          {
#line 440 "term_io.m"
                                            mercury__term_io__Arg1_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 440 "term_io.m"
                                            mercury__term_io__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 440 "term_io.m"
                                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_167_167)) == (MR_mktag((MR_Integer) 1)));
#line 440 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 440 "term_io.m"
                                              {
#line 440 "term_io.m"
                                                mercury__term_io__Arg2_213 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_167_167, (MR_Integer) 0)));
#line 440 "term_io.m"
                                                mercury__term_io__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_167_167, (MR_Integer) 1)));
#line 440 "term_io.m"
                                                mercury__term_io__succeeded = (mercury__term_io__V_168_168 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 440 "term_io.m"
                                                  {
#line 441 "term_io.m"
                                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 441 "term_io.m"
                                                    if (mercury__term_io__succeeded)
#line 441 "term_io.m"
                                                      {
#line 441 "term_io.m"
                                                        mercury__term_io__OpName_207 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 442 "term_io.m"
                                                        {
#line 442 "term_io.m"
                                                          mercury__term_io__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_207, &mercury__term_io__OpPriority_210, &mercury__term_io__FirstAssoc_57, &mercury__term_io__SecondAssoc_58);
                                                        }
#line 441 "term_io.m"
                                                      }
#line 440 "term_io.m"
                                                  }
#line 440 "term_io.m"
                                              }
#line 440 "term_io.m"
                                          }
#line 455 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 445 "term_io.m"
                                          {
#line 445 "term_io.m"
                                            MR_Word mercury__term_io__TypeClassInfo_for_writer_231;
#line 445 "term_io.m"
                                            MR_Integer mercury__term_io__FirstPriority_59;
#line 445 "term_io.m"
                                            MR_Integer mercury__term_io__SecondPriority_60;
#line 445 "term_io.m"
                                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_175_175;
#line 445 "term_io.m"
                                            MR_Integer mercury__term_io__STATE_VARIABLE_N_176_176;
#line 445 "term_io.m"
                                            MR_Word mercury__term_io__Stream_208;

#line 445 "term_io.m"
                                            {
#line 445 "term_io.m"
                                              mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_208);
                                            }
#line 5703 "term_io.c"
                                            mercury__term_io__TypeClassInfo_for_writer_231 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 33 "stream.string_writer.opt"
                                            mercury__term_io__succeeded = (mercury__term_io__OpPriority_210 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                            if (mercury__term_io__succeeded)
#line 5709 "term_io.c"
                                              {
#line 5711 "term_io.c"
                                                void MR_CALL (* mercury__term_io__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_231, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5713 "term_io.c"
                                                MR_Box mercury__term_io__conv13_STATE_VARIABLE_IO_171_171;

#line 5716 "term_io.c"
                                                {
#line 5718 "term_io.c"
                                                  mercury__term_io__func_12(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_231), ((MR_Box) (mercury__term_io__Stream_208)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv13_STATE_VARIABLE_IO_171_171);
                                                }
#line 5721 "term_io.c"
                                              }
#line 36 "stream.string_writer.opt"
                                            else
#line 37 "stream.string_writer.opt"
                                              {
#line 37 "stream.string_writer.opt"
                                              }
#line 447 "term_io.m"
                                            {
#line 447 "term_io.m"
                                              mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                            }
#line 448 "term_io.m"
                                            {
#line 448 "term_io.m"
                                              mercury__io__write_char_3_p_0((MR_Char) 32);
                                            }
#line 34 "ops.opt"
                                            if ((mercury__term_io__FirstAssoc_57 == (MR_Integer) 0))
#line 35 "ops.opt"
                                              {
#line 36 "ops.opt"
                                                mercury__term_io__FirstPriority_59 = (mercury__term_io__OpPriority_210 - (MR_Integer) 1);
#line 35 "ops.opt"
                                              }
#line 34 "ops.opt"
                                            else
#line 34 "ops.opt"
                                              mercury__term_io__FirstPriority_59 = mercury__term_io__OpPriority_210;
#line 450 "term_io.m"
                                            {
#line 450 "term_io.m"
                                              mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg1_212, mercury__term_io__FirstPriority_59, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_175_175, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_176_176);
                                            }
#line 451 "term_io.m"
                                            {
#line 451 "term_io.m"
                                              mercury__io__write_char_3_p_0((MR_Char) 32);
                                            }
#line 34 "ops.opt"
                                            if ((mercury__term_io__SecondAssoc_58 == (MR_Integer) 0))
#line 35 "ops.opt"
                                              {
#line 36 "ops.opt"
                                                mercury__term_io__SecondPriority_60 = (mercury__term_io__OpPriority_210 - (MR_Integer) 1);
#line 35 "ops.opt"
                                              }
#line 34 "ops.opt"
                                            else
#line 34 "ops.opt"
                                              mercury__term_io__SecondPriority_60 = mercury__term_io__OpPriority_210;
#line 453 "term_io.m"
                                            {
#line 453 "term_io.m"
                                              mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg2_213, mercury__term_io__SecondPriority_60, mercury__term_io__STATE_VARIABLE_VarSet_175_175, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_176_176, mercury__term_io__STATE_VARIABLE_N_7);
                                            }
#line 33 "stream.string_writer.opt"
                                            mercury__term_io__succeeded = (mercury__term_io__OpPriority_210 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                            if (mercury__term_io__succeeded)
#line 5782 "term_io.c"
                                              {
#line 5784 "term_io.c"
                                                void MR_CALL (* mercury__term_io__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_231, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5786 "term_io.c"
                                                MR_Box mercury__term_io__conv15_STATE_VARIABLE_IO_9;

#line 5789 "term_io.c"
                                                {
#line 5791 "term_io.c"
                                                  mercury__term_io__func_14(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_231), ((MR_Box) (mercury__term_io__Stream_208)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv15_STATE_VARIABLE_IO_9);
                                                }
#line 5794 "term_io.c"
                                              }
#line 36 "stream.string_writer.opt"
                                            else
#line 37 "stream.string_writer.opt"
                                              {
#line 37 "stream.string_writer.opt"
                                              }
#line 445 "term_io.m"
                                          }
#line 455 "term_io.m"
                                        else
#line 468 "term_io.m"
                                          {
#line 457 "term_io.m"
                                            MR_String mercury__term_io__Op_61;
#line 457 "term_io.m"
                                            MR_Integer mercury__term_io__V_185_185;

#line 457 "term_io.m"
                                            mercury__term_io__succeeded = (mercury__term_io__Args_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 457 "term_io.m"
                                              {
#line 458 "term_io.m"
                                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 458 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 458 "term_io.m"
                                                  {
#line 458 "term_io.m"
                                                    mercury__term_io__Op_61 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 459 "term_io.m"
                                                    {
#line 459 "term_io.m"
                                                      mercury__term_io__succeeded = mercury__ops__lookup_op_2_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Op_61);
                                                    }
#line 457 "term_io.m"
                                                    if (mercury__term_io__succeeded)
#line 457 "term_io.m"
                                                      {
#line 460 "term_io.m"
                                                        {
#line 460 "term_io.m"
                                                          mercury__term_io__V_185_185 = mercury__ops__max_priority_1_f_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1);
                                                        }
#line 460 "term_io.m"
                                                        mercury__term_io__succeeded = (mercury__term_io__Priority_3 <= mercury__term_io__V_185_185);
#line 457 "term_io.m"
                                                      }
#line 458 "term_io.m"
                                                  }
#line 457 "term_io.m"
                                              }
#line 465 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 462 "term_io.m"
                                              {
#line 462 "term_io.m"
                                                {
#line 462 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 40);
                                                }
#line 463 "term_io.m"
                                                {
#line 463 "term_io.m"
                                                  mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                                }
#line 464 "term_io.m"
                                                {
#line 464 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 41);
                                                }
#line 462 "term_io.m"
                                              }
#line 465 "term_io.m"
                                            else
#line 466 "term_io.m"
                                              {
#line 466 "term_io.m"
                                                {
#line 466 "term_io.m"
                                                  mercury__term_io__write_constant_4_p_0(mercury__term_io__Functor_27, (MR_Integer) 0);
                                                }
#line 466 "term_io.m"
                                              }
#line 475 "term_io.m"
                                            if ((mercury__term_io__Args_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "term_io.m"
                                              {
#line 476 "term_io.m"
                                                *mercury__term_io__STATE_VARIABLE_VarSet_5 = mercury__term_io__STATE_VARIABLE_VarSet_0_4;
#line 476 "term_io.m"
                                                *mercury__term_io__STATE_VARIABLE_N_7 = mercury__term_io__STATE_VARIABLE_N_0_6;
#line 476 "term_io.m"
                                              }
#line 475 "term_io.m"
                                            else
#line 470 "term_io.m"
                                              {
#line 470 "term_io.m"
                                                MR_Word mercury__term_io__X_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 470 "term_io.m"
                                                MR_Word mercury__term_io__Xs_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 470 "term_io.m"
                                                MR_Word mercury__term_io__STATE_VARIABLE_VarSet_195_195;
#line 470 "term_io.m"
                                                MR_Integer mercury__term_io__STATE_VARIABLE_N_196_196;

#line 471 "term_io.m"
                                                {
#line 471 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 40);
                                                }
#line 472 "term_io.m"
                                                {
#line 472 "term_io.m"
                                                  mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__X_62, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_195_195, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_196_196);
                                                }
#line 473 "term_io.m"
                                                {
#line 473 "term_io.m"
                                                  mercury__term_io__write_term_args_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Xs_63, mercury__term_io__STATE_VARIABLE_VarSet_195_195, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_196_196, mercury__term_io__STATE_VARIABLE_N_7);
                                                }
#line 474 "term_io.m"
                                                {
#line 474 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 41);
#line 474 "term_io.m"
                                                  return;
                                                }
#line 470 "term_io.m"
                                              }
#line 468 "term_io.m"
                                          }
#line 455 "term_io.m"
                                      }
#line 439 "term_io.m"
                                  }
#line 409 "term_io.m"
                              }
#line 397 "term_io.m"
                          }
#line 385 "term_io.m"
                      }
#line 373 "term_io.m"
                  }
#line 365 "term_io.m"
              }
#line 358 "term_io.m"
          }
#line 344 "term_io.m"
      }
#line 341 "term_io.m"
    else
#line 341 "term_io.m"
      {
#line 341 "term_io.m"
        MR_Word mercury__term_io__Id_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 341 "term_io.m"
        MR_Word mercury__term_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));

#line 342 "term_io.m"
        {
#line 342 "term_io.m"
          mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Id_11, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
#line 342 "term_io.m"
          return;
        }
#line 341 "term_io.m"
      }
#line 341 "term_io.m"
  }
#line 337 "term_io.m"
}

#line 329 "term_io.m"
static void MR_CALL 
mercury__term_io__write_arg_term_8_p_0(
#line 329 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_25,
#line 329 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_24,
#line 329 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 329 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 329 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_14,
#line 329 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_15,
#line 329 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_16,
#line 329 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_17)
#line 329 "term_io.m"
{
#line 333 "term_io.m"
  {
#line 333 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 333 "term_io.m"
    MR_Integer mercury__term_io__V_20_20;
#line 5998 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 13)));
#line 6000 "term_io.c"
    MR_Box mercury__term_io__conv1_V_20_20;

#line 6003 "term_io.c"
    {
#line 6005 "term_io.c"
      mercury__term_io__conv1_V_20_20 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_24), mercury__term_io__Ops_9);
    }
#line 6008 "term_io.c"
    mercury__term_io__V_20_20 = ((MR_Integer) mercury__term_io__conv1_V_20_20);
#line 334 "term_io.m"
    {
#line 334 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_25, mercury__term_io__TypeClassInfo_for_op_table_24, mercury__term_io__Ops_9, mercury__term_io__Term_10, mercury__term_io__V_20_20, mercury__term_io__STATE_VARIABLE_VarSet_0_14, mercury__term_io__STATE_VARIABLE_VarSet_15, mercury__term_io__STATE_VARIABLE_N_0_16, mercury__term_io__STATE_VARIABLE_N_17);
#line 334 "term_io.m"
      return;
    }
#line 333 "term_io.m"
  }
#line 329 "term_io.m"
}

#line 321 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_2_8_p_0(
#line 321 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_27,
#line 321 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_26,
#line 321 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 321 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 321 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_14,
#line 321 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_15,
#line 321 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_16,
#line 321 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_17)
#line 321 "term_io.m"
{
#line 325 "term_io.m"
  {
#line 325 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 325 "term_io.m"
    MR_Integer mercury__term_io__V_20_20;
#line 325 "term_io.m"
    MR_Integer mercury__term_io__V_24_24;
#line 6051 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 6053 "term_io.c"
    MR_Box mercury__term_io__conv1_V_24_24;

#line 6056 "term_io.c"
    {
#line 6058 "term_io.c"
      mercury__term_io__conv1_V_24_24 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_26), mercury__term_io__Ops_9);
    }
#line 6061 "term_io.c"
    mercury__term_io__V_24_24 = ((MR_Integer) mercury__term_io__conv1_V_24_24);
#line 326 "term_io.m"
    mercury__term_io__V_20_20 = (mercury__term_io__V_24_24 + (MR_Integer) 1);
#line 326 "term_io.m"
    {
#line 326 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_27, mercury__term_io__TypeClassInfo_for_op_table_26, mercury__term_io__Ops_9, mercury__term_io__Term_10, mercury__term_io__V_20_20, mercury__term_io__STATE_VARIABLE_VarSet_0_14, mercury__term_io__STATE_VARIABLE_VarSet_15, mercury__term_io__STATE_VARIABLE_N_0_16, mercury__term_io__STATE_VARIABLE_N_17);
#line 326 "term_io.m"
      return;
    }
#line 325 "term_io.m"
  }
#line 321 "term_io.m"
}

#line 292 "term_io.m"
void MR_CALL 
mercury__term_io__write_variable_2_8_p_0(
#line 292 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_35,
#line 292 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_34,
#line 292 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 292 "term_io.m"
  MR_Word mercury__term_io__Id_10,
#line 292 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_19,
#line 292 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_20,
#line 292 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_21,
#line 292 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_22)
#line 292 "term_io.m"
{
#line 299 "term_io.m"
  {
#line 299 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 299 "term_io.m"
    MR_Word mercury__term_io__Val_14;
#line 62 "varset.opt"
    MR_Word mercury__term_io__TypeCtorInfo_12_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 62 "varset.opt"
    MR_Word mercury__term_io__TypeInfo_13_44;
#line 62 "varset.opt"
    MR_Word mercury__term_io__TypeCtorInfo_14_45 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 62 "varset.opt"
    MR_Word mercury__term_io__TypeInfo_15_46;
#line 62 "varset.opt"
    MR_Word mercury__term_io__Values_7_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 2)));
#line 63 "varset.opt"
    MR_Word mercury__term_io__V_8_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 0)));
#line 63 "varset.opt"
    MR_Word mercury__term_io__V_9_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 1)));
#line 39 "map.opt"
    MR_Box mercury__term_io__conv0_Val_14;

#line 6121 "term_io.c"
    {
#line 6123 "term_io.c"
      mercury__term_io__TypeInfo_13_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6125 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_44, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_43));
#line 6127 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_44, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
#line 6129 "term_io.c"
    }
#line 6131 "term_io.c"
    {
#line 6133 "term_io.c"
      mercury__term_io__TypeInfo_15_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6135 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_46, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_14_45));
#line 6137 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_46, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
#line 6139 "term_io.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeInfo_13_44, mercury__term_io__TypeInfo_15_46, mercury__term_io__Values_7_41, mercury__term_io__Id_10, &mercury__term_io__conv0_Val_14);
    }
#line 39 "map.opt"
    if (mercury__term_io__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__term_io__Val_14 = ((MR_Word) mercury__term_io__conv0_Val_14);
#line 39 "map.opt"
        mercury__term_io__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 299 "term_io.m"
    if (mercury__term_io__succeeded)
#line 298 "term_io.m"
      {
#line 298 "term_io.m"
        mercury__term_io__write_term_2_8_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeClassInfo_for_op_table_34, mercury__term_io__Ops_9, mercury__term_io__Val_14, mercury__term_io__STATE_VARIABLE_VarSet_0_19, mercury__term_io__STATE_VARIABLE_VarSet_20, mercury__term_io__STATE_VARIABLE_N_0_21, mercury__term_io__STATE_VARIABLE_N_22);
#line 298 "term_io.m"
        return;
      }
#line 299 "term_io.m"
    else
#line 301 "term_io.m"
      {
#line 301 "term_io.m"
        MR_String mercury__term_io__Name_15;
#line 53 "varset.opt"
        MR_Word mercury__term_io__TypeCtorInfo_10_56 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 53 "varset.opt"
        MR_Word mercury__term_io__TypeInfo_11_57;
#line 53 "varset.opt"
        MR_Word mercury__term_io__TypeCtorInfo_12_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 53 "varset.opt"
        MR_Word mercury__term_io__Names_5_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 1)));
#line 53 "varset.opt"
        MR_Word mercury__term_io__V_4_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 0)));
#line 53 "varset.opt"
        MR_Word mercury__term_io__V_6_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 2)));
#line 39 "map.opt"
        MR_Box mercury__term_io__conv1_Name_15;

#line 6186 "term_io.c"
        {
#line 6188 "term_io.c"
          mercury__term_io__TypeInfo_11_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6190 "term_io.c"
          MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_11_57, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_10_56));
#line 6192 "term_io.c"
          MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_11_57, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
#line 6194 "term_io.c"
        }
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeInfo_11_57, mercury__term_io__TypeCtorInfo_12_58, mercury__term_io__Names_5_54, mercury__term_io__Id_10, &mercury__term_io__conv1_Name_15);
        }
#line 39 "map.opt"
        if (mercury__term_io__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__term_io__Name_15 = ((MR_String) mercury__term_io__conv1_Name_15);
#line 39 "map.opt"
            mercury__term_io__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 301 "term_io.m"
        if (mercury__term_io__succeeded)
#line 300 "term_io.m"
          {
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_variable_2_8_p_0

	MR_String Message;

	Message =  mercury__term_io__Name_15 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6227 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 300 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_N_22 = mercury__term_io__STATE_VARIABLE_N_0_21;
#line 300 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_VarSet_20 = mercury__term_io__STATE_VARIABLE_VarSet_0_19;
#line 300 "term_io.m"
          }
#line 301 "term_io.m"
        else
#line 304 "term_io.m"
          {
#line 304 "term_io.m"
            MR_Integer mercury__term_io__VarNum_16 = (MR_Integer) mercury__term_io__Id_10;
#line 304 "term_io.m"
            MR_String mercury__term_io__Num_17;
#line 304 "term_io.m"
            MR_String mercury__term_io__VarName_18;

#line 297 "string.opt"
            {
#line 297 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__term_io__VarNum_16, (MR_Integer) 10, &mercury__term_io__Num_17);
            }
#line 306 "term_io.m"
            {
#line 306 "term_io.m"
              mercury__string__append_3_p_2((MR_String) "_", mercury__term_io__Num_17, &mercury__term_io__VarName_18);
            }
#line 307 "term_io.m"
            {
#line 307 "term_io.m"
              mercury__varset__name_var_4_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__Id_10, mercury__term_io__VarName_18, mercury__term_io__STATE_VARIABLE_VarSet_0_19, mercury__term_io__STATE_VARIABLE_VarSet_20);
            }
#line 308 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_N_22 = (mercury__term_io__STATE_VARIABLE_N_0_21 + (MR_Integer) 1);
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_variable_2_8_p_0

	MR_String Message;

	Message =  mercury__term_io__VarName_18 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6279 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 304 "term_io.m"
          }
#line 301 "term_io.m"
      }
#line 299 "term_io.m"
  }
#line 292 "term_io.m"
}

#line 224 "term_io.m"
MR_String MR_CALL 
mercury__term_io__quoted_atom_agt_2_f_0(
#line 224 "term_io.m"
  MR_String mercury__term_io__S_4,
#line 224 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_5)
#line 224 "term_io.m"
{
#line 608 "term_io.m"
  {
#line 608 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 608 "term_io.m"
    MR_String mercury__term_io__String_6;
#line 608 "term_io.m"
    MR_Word mercury__term_io__ShouldQuote_7;

#line 629 "term_io.m"
    if ((strcmp(mercury__term_io__S_4, (MR_String) "!") == 0))
#line 634 "term_io.m"
      mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
    else
#line 629 "term_io.m"
      if ((strcmp(mercury__term_io__S_4, (MR_String) ";") == 0))
#line 631 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
      else
#line 629 "term_io.m"
        if ((strcmp(mercury__term_io__S_4, (MR_String) "[]") == 0))
#line 652 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
        else
#line 629 "term_io.m"
          if ((strcmp(mercury__term_io__S_4, (MR_String) "{}") == 0))
#line 655 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
          else
#line 629 "term_io.m"
            mercury__term_io__succeeded = MR_FALSE;
#line 629 "term_io.m"
    if (!(mercury__term_io__succeeded))
#line 629 "term_io.m"
      {
#line 637 "term_io.m"
        {
#line 642 "term_io.m"
          MR_Integer mercury__term_io__V_20_20;
#line 642 "term_io.m"
          MR_Char mercury__term_io__V_21_21;
#line 642 "term_io.m"
          MR_Char mercury__term_io__V_24_24;
#line 642 "term_io.m"
          MR_Integer mercury__term_io__Len_7_32;

#line 533 "string.opt"
          {
#line 533 "string.opt"
            mercury__term_io__succeeded = mercury__term_io__all_match_2__ho22_3_p_in__string_0(mercury__term_io__S_4, (MR_Integer) 0);
          }
#line 637 "term_io.m"
          if (mercury__term_io__succeeded)
#line 637 "term_io.m"
            {
#line 638 "term_io.m"
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_4, (MR_String) "") == 0);
#line 638 "term_io.m"
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 637 "term_io.m"
              if (mercury__term_io__succeeded)
#line 637 "term_io.m"
                {
#line 642 "term_io.m"
                  mercury__term_io__V_20_20 = (MR_Integer) 0;
#line 642 "term_io.m"
                  mercury__term_io__V_21_21 = (MR_Char) 35;
#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_4 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 6387 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_32  = Length;
#line 244 "string.opt"
}
#line 1015 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__V_20_20 ;
	Length =  mercury__term_io__Len_7_32 ;
		{
#line 1015 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 6416 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1015 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 642 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 642 "term_io.m"
                    {
#line 561 "string.opt"
                      {
#line 561 "string.opt"
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_4, mercury__term_io__V_20_20, &mercury__term_io__V_24_24);
                      }
#line 642 "term_io.m"
                      mercury__term_io__succeeded = (mercury__term_io__V_21_21 == mercury__term_io__V_24_24);
#line 642 "term_io.m"
                    }
#line 642 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 637 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 649 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_5 == (MR_Integer) 1);
#line 637 "term_io.m"
                }
#line 637 "term_io.m"
            }
#line 637 "term_io.m"
        }
#line 629 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 626 "term_io.m"
          {
#line 626 "term_io.m"
            MR_Char mercury__term_io__FirstChar_18;
#line 626 "term_io.m"
            MR_Integer mercury__term_io__Len_7_38;
#line 110 "char.opt"
            MR_Char mercury__term_io__V_3_42;

#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_4 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 6474 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_38  = Length;
#line 244 "string.opt"
}
#line 1015 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__Len_7_38 ;
		{
#line 1015 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 6503 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1015 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 626 "term_io.m"
            if (mercury__term_io__succeeded)
#line 626 "term_io.m"
              {
#line 561 "string.opt"
                {
#line 561 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_4, (MR_Integer) 0, &mercury__term_io__FirstChar_18);
                }
#line 110 "char.opt"
                {
#line 110 "char.opt"
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_18, &mercury__term_io__V_3_42);
                }
#line 626 "term_io.m"
                if (mercury__term_io__succeeded)
#line 626 "term_io.m"
                  {
#line 483 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_4 ;
		{
#line 483 "string.opt"

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }

#line 6572 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 483 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 626 "term_io.m"
                  }
#line 626 "term_io.m"
              }
#line 626 "term_io.m"
          }
#line 629 "term_io.m"
      }
#line 659 "term_io.m"
    if (mercury__term_io__succeeded)
#line 658 "term_io.m"
      mercury__term_io__ShouldQuote_7 = (MR_Integer) 0;
#line 659 "term_io.m"
    else
#line 661 "term_io.m"
      mercury__term_io__ShouldQuote_7 = (MR_Integer) 1;
#line 613 "term_io.m"
    if ((mercury__term_io__ShouldQuote_7 == (MR_Integer) 0))
#line 612 "term_io.m"
      mercury__term_io__String_6 = mercury__term_io__S_4;
#line 613 "term_io.m"
    else
#line 614 "term_io.m"
      {
#line 614 "term_io.m"
        MR_String mercury__term_io__ES_8;
#line 614 "term_io.m"
        MR_Word mercury__term_io__V_9_9;
#line 614 "term_io.m"
        MR_Word mercury__term_io__V_11_11;
#line 614 "term_io.m"
        MR_Word mercury__term_io__V_12_12;
#line 614 "term_io.m"
        MR_Word mercury__term_io__V_14_14;

#line 615 "term_io.m"
        {
#line 615 "term_io.m"
          mercury__term_io__ES_8 = mercury__term_io__escaped_string_1_f_0(mercury__term_io__S_4);
        }
#line 616 "term_io.m"
        mercury__term_io__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "term_io.m"
        mercury__term_io__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[3]);
#line 616 "term_io.m"
        {
#line 616 "term_io.m"
          mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 0) = ((MR_Box) (mercury__term_io__ES_8));
#line 616 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 1) = ((MR_Box) (mercury__term_io__V_12_12));
#line 616 "term_io.m"
        }
#line 616 "term_io.m"
        {
#line 616 "term_io.m"
          mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 0) = ((MR_Box) ((MR_String) "\'"));
#line 616 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 1) = ((MR_Box) (mercury__term_io__V_11_11));
#line 616 "term_io.m"
        }
#line 616 "term_io.m"
        {
#line 616 "term_io.m"
          return mercury__term_io__String_6 = mercury__string__append_list_1_f_0(mercury__term_io__V_9_9);
        }
#line 614 "term_io.m"
      }
#line 608 "term_io.m"
    return mercury__term_io__String_6;
#line 608 "term_io.m"
  }
#line 224 "term_io.m"
}

#line 219 "term_io.m"
void MR_CALL 
mercury__term_io__quote_atom_agt_5_p_0(
#line 219 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_19,
#line 219 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_20,
#line 219 "term_io.m"
  MR_Box mercury__term_io__Stream_6,
#line 219 "term_io.m"
  MR_String mercury__term_io__S_7,
#line 219 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_8,
#line 219 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_11,
#line 219 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_12)
#line 219 "term_io.m"
{
#line 596 "term_io.m"
  {
#line 596 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 596 "term_io.m"
    MR_Word mercury__term_io__ShouldQuote_10;

#line 629 "term_io.m"
    if ((strcmp(mercury__term_io__S_7, (MR_String) "!") == 0))
#line 634 "term_io.m"
      mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
    else
#line 629 "term_io.m"
      if ((strcmp(mercury__term_io__S_7, (MR_String) ";") == 0))
#line 631 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
      else
#line 629 "term_io.m"
        if ((strcmp(mercury__term_io__S_7, (MR_String) "[]") == 0))
#line 652 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
        else
#line 629 "term_io.m"
          if ((strcmp(mercury__term_io__S_7, (MR_String) "{}") == 0))
#line 655 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 629 "term_io.m"
          else
#line 629 "term_io.m"
            mercury__term_io__succeeded = MR_FALSE;
#line 629 "term_io.m"
    if (!(mercury__term_io__succeeded))
#line 629 "term_io.m"
      {
#line 637 "term_io.m"
        {
#line 642 "term_io.m"
          MR_Integer mercury__term_io__V_26_26;
#line 642 "term_io.m"
          MR_Char mercury__term_io__V_27_27;
#line 642 "term_io.m"
          MR_Char mercury__term_io__V_30_30;
#line 642 "term_io.m"
          MR_Integer mercury__term_io__Len_7_38;

#line 533 "string.opt"
          {
#line 533 "string.opt"
            mercury__term_io__succeeded = mercury__term_io__all_match_2__ho22_3_p_in__string_0(mercury__term_io__S_7, (MR_Integer) 0);
          }
#line 637 "term_io.m"
          if (mercury__term_io__succeeded)
#line 637 "term_io.m"
            {
#line 638 "term_io.m"
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_7, (MR_String) "") == 0);
#line 638 "term_io.m"
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 637 "term_io.m"
              if (mercury__term_io__succeeded)
#line 637 "term_io.m"
                {
#line 642 "term_io.m"
                  mercury__term_io__V_26_26 = (MR_Integer) 0;
#line 642 "term_io.m"
                  mercury__term_io__V_27_27 = (MR_Char) 35;
#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 6760 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_38  = Length;
#line 244 "string.opt"
}
#line 1015 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__V_26_26 ;
	Length =  mercury__term_io__Len_7_38 ;
		{
#line 1015 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 6789 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1015 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 642 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 642 "term_io.m"
                    {
#line 561 "string.opt"
                      {
#line 561 "string.opt"
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, mercury__term_io__V_26_26, &mercury__term_io__V_30_30);
                      }
#line 642 "term_io.m"
                      mercury__term_io__succeeded = (mercury__term_io__V_27_27 == mercury__term_io__V_30_30);
#line 642 "term_io.m"
                    }
#line 642 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 637 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 649 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_8 == (MR_Integer) 1);
#line 637 "term_io.m"
                }
#line 637 "term_io.m"
            }
#line 637 "term_io.m"
        }
#line 629 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 626 "term_io.m"
          {
#line 626 "term_io.m"
            MR_Char mercury__term_io__FirstChar_24;
#line 626 "term_io.m"
            MR_Integer mercury__term_io__Len_7_44;
#line 110 "char.opt"
            MR_Char mercury__term_io__V_3_48;

#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 6847 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_44  = Length;
#line 244 "string.opt"
}
#line 1015 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__Len_7_44 ;
		{
#line 1015 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 6876 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1015 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 626 "term_io.m"
            if (mercury__term_io__succeeded)
#line 626 "term_io.m"
              {
#line 561 "string.opt"
                {
#line 561 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, (MR_Integer) 0, &mercury__term_io__FirstChar_24);
                }
#line 110 "char.opt"
                {
#line 110 "char.opt"
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_24, &mercury__term_io__V_3_48);
                }
#line 626 "term_io.m"
                if (mercury__term_io__succeeded)
#line 626 "term_io.m"
                  {
#line 483 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_7 ;
		{
#line 483 "string.opt"

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }

#line 6945 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 483 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 626 "term_io.m"
                  }
#line 626 "term_io.m"
              }
#line 626 "term_io.m"
          }
#line 629 "term_io.m"
      }
#line 659 "term_io.m"
    if (mercury__term_io__succeeded)
#line 658 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 0;
#line 659 "term_io.m"
    else
#line 661 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 1;
#line 601 "term_io.m"
    if ((mercury__term_io__ShouldQuote_10 == (MR_Integer) 0))
#line 6972 "term_io.c"
      {
#line 6974 "term_io.c"
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6977 "term_io.c"
        {
#line 6979 "term_io.c"
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_19), mercury__term_io__Stream_6, ((MR_Box) (mercury__term_io__S_7)), mercury__term_io__STATE_VARIABLE_State_0_11, mercury__term_io__STATE_VARIABLE_State_12);
#line 6981 "term_io.c"
          return;
        }
#line 6984 "term_io.c"
      }
#line 601 "term_io.m"
    else
#line 602 "term_io.m"
      {
#line 602 "term_io.m"
        MR_Box mercury__term_io__STATE_VARIABLE_State_14_14;
#line 602 "term_io.m"
        MR_Box mercury__term_io__STATE_VARIABLE_State_15_15;
#line 6994 "term_io.c"
        void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6996 "term_io.c"
        void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 6999 "term_io.c"
        {
#line 7001 "term_io.c"
          mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), mercury__term_io__Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), mercury__term_io__STATE_VARIABLE_State_0_11, &mercury__term_io__STATE_VARIABLE_State_14_14);
        }
#line 604 "term_io.m"
        {
#line 604 "term_io.m"
          mercury__term_io__write_escaped_string_4_p_0(mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__TypeClassInfo_for_writer_20, mercury__term_io__Stream_6, mercury__term_io__S_7, mercury__term_io__STATE_VARIABLE_State_14_14, &mercury__term_io__STATE_VARIABLE_State_15_15);
        }
#line 7009 "term_io.c"
        mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7011 "term_io.c"
        {
#line 7013 "term_io.c"
          mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), mercury__term_io__Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), mercury__term_io__STATE_VARIABLE_State_15_15, mercury__term_io__STATE_VARIABLE_State_12);
#line 7015 "term_io.c"
          return;
        }
#line 602 "term_io.m"
      }
#line 596 "term_io.m"
  }
#line 219 "term_io.m"
}

#line 216 "term_io.m"
void MR_CALL 
mercury__term_io__quote_atom_agt_4_p_0(
#line 216 "term_io.m"
  MR_String mercury__term_io__S_5,
#line 216 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_6)
#line 216 "term_io.m"
{
#line 592 "term_io.m"
  {
#line 592 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 592 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_13;
#line 592 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_14;
#line 592 "term_io.m"
    MR_Word mercury__term_io__Stream_8;
#line 592 "term_io.m"
    MR_Box mercury__term_io__Stream_4_17;

#line 1352 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_4_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 7058 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_17  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
    mercury__term_io__Stream_8 = (MR_Word) mercury__term_io__Stream_4_17;
#line 7067 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_13 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 7069 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 594 "term_io.m"
    {
#line 594 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__TypeClassInfo_for_writer_14, mercury__term_io__Stream_8, mercury__term_io__S_5, mercury__term_io__NextToGraphicToken_6);
#line 594 "term_io.m"
      return;
    }
#line 592 "term_io.m"
  }
#line 216 "term_io.m"
}

#line 208 "term_io.m"
MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_1(
#line 208 "term_io.m"
  MR_Char * mercury__term_io__Char_1,
#line 208 "term_io.m"
  MR_String mercury__term_io__Str_2)
#line 208 "term_io.m"
{
#line 825 "term_io.m"
  {
#line 825 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 825 "term_io.m"
    MR_Word mercury__term_io__Chars_14;
#line 825 "term_io.m"
    MR_Word mercury__term_io__V_20_20;
#line 825 "term_io.m"
    MR_Char mercury__term_io__V_21_21;

#line 826 "term_io.m"
    {
#line 826 "term_io.m"
      mercury__string__to_char_list_2_p_0(mercury__term_io__Str_2, &mercury__term_io__Chars_14);
    }
#line 828 "term_io.m"
    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Chars_14)) == (MR_mktag((MR_Integer) 1)));
#line 828 "term_io.m"
    if (mercury__term_io__succeeded)
#line 828 "term_io.m"
      {
#line 828 "term_io.m"
        mercury__term_io__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_14, (MR_Integer) 0)));
#line 828 "term_io.m"
        mercury__term_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_14, (MR_Integer) 1)));
#line 829 "term_io.m"
        if ((mercury__term_io__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 828 "term_io.m"
          {
#line 828 "term_io.m"
            *mercury__term_io__Char_1 = mercury__term_io__V_21_21;
#line 828 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 828 "term_io.m"
          }
#line 829 "term_io.m"
        else
#line 830 "term_io.m"
          {
#line 830 "term_io.m"
            MR_Char mercury__term_io__EscapedChar_15;
#line 830 "term_io.m"
            MR_Word mercury__term_io__V_18_18;

#line 830 "term_io.m"
            mercury__term_io__succeeded = (mercury__term_io__V_21_21 == (MR_Char) 92);
#line 830 "term_io.m"
            if (mercury__term_io__succeeded)
#line 830 "term_io.m"
              {
#line 830 "term_io.m"
                mercury__term_io__EscapedChar_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_20_20, (MR_Integer) 0)));
#line 830 "term_io.m"
                mercury__term_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_20_20, (MR_Integer) 1)));
#line 830 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 830 "term_io.m"
                if (mercury__term_io__succeeded)
#line 846 "term_io.m"
                  {
#line 846 "term_io.m"
                    if ((mercury__term_io__EscapedChar_15 == (MR_Char) 34))
#line 847 "term_io.m"
                      {
#line 847 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 34;
#line 847 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 847 "term_io.m"
                      }
#line 846 "term_io.m"
                    else
#line 846 "term_io.m"
                      if ((mercury__term_io__EscapedChar_15 == (MR_Char) 39))
#line 846 "term_io.m"
                        {
#line 846 "term_io.m"
                          *mercury__term_io__Char_1 = (MR_Char) 39;
#line 846 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
                        }
#line 846 "term_io.m"
                      else
#line 846 "term_io.m"
                        if ((mercury__term_io__EscapedChar_15 == (MR_Char) 92))
#line 848 "term_io.m"
                          {
#line 848 "term_io.m"
                            *mercury__term_io__Char_1 = (MR_Char) 92;
#line 848 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 848 "term_io.m"
                          }
#line 846 "term_io.m"
                        else
#line 846 "term_io.m"
                          if ((mercury__term_io__EscapedChar_15 == (MR_Char) 98))
#line 851 "term_io.m"
                            {
#line 851 "term_io.m"
                              *mercury__term_io__Char_1 = (MR_Char) 8;
#line 851 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 851 "term_io.m"
                            }
#line 846 "term_io.m"
                          else
#line 846 "term_io.m"
                            if ((mercury__term_io__EscapedChar_15 == (MR_Char) 110))
#line 849 "term_io.m"
                              {
#line 849 "term_io.m"
                                *mercury__term_io__Char_1 = (MR_Char) 10;
#line 849 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 849 "term_io.m"
                              }
#line 846 "term_io.m"
                            else
#line 846 "term_io.m"
                              if ((mercury__term_io__EscapedChar_15 == (MR_Char) 116))
#line 850 "term_io.m"
                                {
#line 850 "term_io.m"
                                  *mercury__term_io__Char_1 = (MR_Char) 9;
#line 850 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 850 "term_io.m"
                                }
#line 846 "term_io.m"
                              else
#line 846 "term_io.m"
                                mercury__term_io__succeeded = MR_FALSE;
#line 846 "term_io.m"
                  }
#line 830 "term_io.m"
              }
#line 830 "term_io.m"
          }
#line 828 "term_io.m"
      }
#line 825 "term_io.m"
    return mercury__term_io__succeeded;
#line 825 "term_io.m"
  }
#line 208 "term_io.m"
}

#line 207 "term_io.m"
MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_0(
#line 207 "term_io.m"
  MR_Char mercury__term_io__Char_1,
#line 207 "term_io.m"
  MR_String * mercury__term_io__Str_2)
#line 207 "term_io.m"
{
#line 820 "term_io.m"
  {
#line 820 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 820 "term_io.m"
    MR_Char mercury__term_io__EscapeChar_5;

#line 846 "term_io.m"
    if ((mercury__term_io__Char_1 == (MR_Char) 8))
#line 851 "term_io.m"
      {
#line 851 "term_io.m"
        mercury__term_io__EscapeChar_5 = (MR_Char) 98;
#line 851 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 851 "term_io.m"
      }
#line 846 "term_io.m"
    else
#line 846 "term_io.m"
      if ((mercury__term_io__Char_1 == (MR_Char) 9))
#line 850 "term_io.m"
        {
#line 850 "term_io.m"
          mercury__term_io__EscapeChar_5 = (MR_Char) 116;
#line 850 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 850 "term_io.m"
        }
#line 846 "term_io.m"
      else
#line 846 "term_io.m"
        if ((mercury__term_io__Char_1 == (MR_Char) 10))
#line 849 "term_io.m"
          {
#line 849 "term_io.m"
            mercury__term_io__EscapeChar_5 = (MR_Char) 110;
#line 849 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 849 "term_io.m"
          }
#line 846 "term_io.m"
        else
#line 846 "term_io.m"
          if ((mercury__term_io__Char_1 == (MR_Char) 34))
#line 847 "term_io.m"
            {
#line 847 "term_io.m"
              mercury__term_io__EscapeChar_5 = (MR_Char) 34;
#line 847 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 847 "term_io.m"
            }
#line 846 "term_io.m"
          else
#line 846 "term_io.m"
            if ((mercury__term_io__Char_1 == (MR_Char) 39))
#line 846 "term_io.m"
              {
#line 846 "term_io.m"
                mercury__term_io__EscapeChar_5 = (MR_Char) 39;
#line 846 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
              }
#line 846 "term_io.m"
            else
#line 846 "term_io.m"
              if ((mercury__term_io__Char_1 == (MR_Char) 92))
#line 848 "term_io.m"
                {
#line 848 "term_io.m"
                  mercury__term_io__EscapeChar_5 = (MR_Char) 92;
#line 848 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 848 "term_io.m"
                }
#line 846 "term_io.m"
              else
#line 846 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 820 "term_io.m"
    if (mercury__term_io__succeeded)
#line 819 "term_io.m"
      {
#line 819 "term_io.m"
        MR_Word mercury__term_io__V_6_6;
#line 819 "term_io.m"
        MR_Word mercury__term_io__V_8_8;
#line 819 "term_io.m"
        MR_Word mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 819 "term_io.m"
        {
#line 819 "term_io.m"
          mercury__term_io__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_8_8, 0) = ((MR_Box) (MR_Word) (mercury__term_io__EscapeChar_5));
#line 819 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_8_8, 1) = ((MR_Box) (mercury__term_io__V_9_9));
#line 819 "term_io.m"
        }
#line 819 "term_io.m"
        {
#line 819 "term_io.m"
          mercury__term_io__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 819 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 1) = ((MR_Box) (mercury__term_io__V_8_8));
#line 819 "term_io.m"
        }
#line 819 "term_io.m"
        {
#line 819 "term_io.m"
          mercury__string__from_char_list_2_p_0(mercury__term_io__V_6_6, mercury__term_io__Str_2);
        }
#line 819 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 819 "term_io.m"
      }
#line 820 "term_io.m"
    else
#line 822 "term_io.m"
      {
#line 822 "term_io.m"
        MR_Word mercury__term_io__V_10_10;
#line 822 "term_io.m"
        MR_Word mercury__term_io__V_11_11;

#line 768 "term_io.m"
        {
#line 768 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_1);
        }
#line 768 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 768 "term_io.m"
          {
#line 779 "term_io.m"
            if ((mercury__term_io__Char_1 == (MR_Char) 32))
#line 779 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
            else
#line 779 "term_io.m"
              if ((mercury__term_io__Char_1 == (MR_Char) 33))
#line 780 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
              else
#line 779 "term_io.m"
                if ((mercury__term_io__Char_1 == (MR_Char) 34))
#line 803 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                else
#line 779 "term_io.m"
                  if ((mercury__term_io__Char_1 == (MR_Char) 35))
#line 782 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                  else
#line 779 "term_io.m"
                    if ((mercury__term_io__Char_1 == (MR_Char) 36))
#line 783 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                    else
#line 779 "term_io.m"
                      if ((mercury__term_io__Char_1 == (MR_Char) 37))
#line 784 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                      else
#line 779 "term_io.m"
                        if ((mercury__term_io__Char_1 == (MR_Char) 38))
#line 786 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                        else
#line 779 "term_io.m"
                          if ((mercury__term_io__Char_1 == (MR_Char) 39))
#line 802 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                          else
#line 779 "term_io.m"
                            if ((mercury__term_io__Char_1 == (MR_Char) 40))
#line 788 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                            else
#line 779 "term_io.m"
                              if ((mercury__term_io__Char_1 == (MR_Char) 41))
#line 789 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                              else
#line 779 "term_io.m"
                                if ((mercury__term_io__Char_1 == (MR_Char) 42))
#line 787 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                else
#line 779 "term_io.m"
                                  if ((mercury__term_io__Char_1 == (MR_Char) 43))
#line 792 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                  else
#line 779 "term_io.m"
                                    if ((mercury__term_io__Char_1 == (MR_Char) 44))
#line 807 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                    else
#line 779 "term_io.m"
                                      if ((mercury__term_io__Char_1 == (MR_Char) 45))
#line 790 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                      else
#line 779 "term_io.m"
                                        if ((mercury__term_io__Char_1 == (MR_Char) 46))
#line 806 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                        else
#line 779 "term_io.m"
                                          if ((mercury__term_io__Char_1 == (MR_Char) 47))
#line 808 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                          else
#line 779 "term_io.m"
                                            if ((mercury__term_io__Char_1 == (MR_Char) 58))
#line 801 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                            else
#line 779 "term_io.m"
                                              if ((mercury__term_io__Char_1 == (MR_Char) 59))
#line 800 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                              else
#line 779 "term_io.m"
                                                if ((mercury__term_io__Char_1 == (MR_Char) 60))
#line 804 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                else
#line 779 "term_io.m"
                                                  if ((mercury__term_io__Char_1 == (MR_Char) 61))
#line 793 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                  else
#line 779 "term_io.m"
                                                    if ((mercury__term_io__Char_1 == (MR_Char) 62))
#line 805 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                    else
#line 779 "term_io.m"
                                                      if ((mercury__term_io__Char_1 == (MR_Char) 63))
#line 809 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                      else
#line 779 "term_io.m"
                                                        if ((mercury__term_io__Char_1 == (MR_Char) 64))
#line 781 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                        else
#line 779 "term_io.m"
                                                          if ((mercury__term_io__Char_1 == (MR_Char) 91))
#line 798 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                          else
#line 779 "term_io.m"
                                                            if ((mercury__term_io__Char_1 == (MR_Char) 92))
#line 810 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                            else
#line 779 "term_io.m"
                                                              if ((mercury__term_io__Char_1 == (MR_Char) 93))
#line 799 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                              else
#line 779 "term_io.m"
                                                                if ((mercury__term_io__Char_1 == (MR_Char) 94))
#line 785 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                else
#line 779 "term_io.m"
                                                                  if ((mercury__term_io__Char_1 == (MR_Char) 95))
#line 791 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                  else
#line 779 "term_io.m"
                                                                    if ((mercury__term_io__Char_1 == (MR_Char) 96))
#line 794 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                    else
#line 779 "term_io.m"
                                                                      if ((mercury__term_io__Char_1 == (MR_Char) 123))
#line 796 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                      else
#line 779 "term_io.m"
                                                                        if ((mercury__term_io__Char_1 == (MR_Char) 124))
#line 811 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                        else
#line 779 "term_io.m"
                                                                          if ((mercury__term_io__Char_1 == (MR_Char) 125))
#line 797 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                          else
#line 779 "term_io.m"
                                                                            if ((mercury__term_io__Char_1 == (MR_Char) 126))
#line 795 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                            else
#line 779 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_FALSE;
#line 768 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 770 "term_io.m"
              {
#line 770 "term_io.m"
                MR_Integer mercury__term_io__V_21_21;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__encode_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_1 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 7610 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_21_21  = Int;
#line 66 "char.opt"
}
#line 770 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_21_21 >= (MR_Integer) 128);
#line 770 "term_io.m"
              }
#line 768 "term_io.m"
          }
#line 822 "term_io.m"
        if (mercury__term_io__succeeded)
#line 822 "term_io.m"
          {
#line 821 "term_io.m"
            mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 821 "term_io.m"
            {
#line 821 "term_io.m"
              mercury__term_io__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_10_10, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_1));
#line 821 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_10_10, 1) = ((MR_Box) (mercury__term_io__V_11_11));
#line 821 "term_io.m"
            }
#line 821 "term_io.m"
            {
#line 821 "term_io.m"
              mercury__string__from_char_list_2_p_0(mercury__term_io__V_10_10, mercury__term_io__Str_2);
            }
#line 821 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 822 "term_io.m"
          }
#line 822 "term_io.m"
      }
#line 820 "term_io.m"
    return mercury__term_io__succeeded;
#line 820 "term_io.m"
  }
#line 207 "term_io.m"
}

#line 195 "term_io.m"
MR_bool MR_CALL 
mercury__term_io__is_mercury_punctuation_char_1_p_0(
#line 195 "term_io.m"
  MR_Char mercury__term_io__HeadVar__1_1)
#line 195 "term_io.m"
{
#line 779 "term_io.m"
  {
#line 779 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 779 "term_io.m"
    if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 32))
#line 779 "term_io.m"
      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
    else
#line 779 "term_io.m"
      if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 33))
#line 780 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
      else
#line 779 "term_io.m"
        if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 34))
#line 803 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
        else
#line 779 "term_io.m"
          if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 35))
#line 782 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
          else
#line 779 "term_io.m"
            if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 36))
#line 783 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
            else
#line 779 "term_io.m"
              if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 37))
#line 784 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
              else
#line 779 "term_io.m"
                if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 38))
#line 786 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                else
#line 779 "term_io.m"
                  if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 39))
#line 802 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                  else
#line 779 "term_io.m"
                    if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 40))
#line 788 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                    else
#line 779 "term_io.m"
                      if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 41))
#line 789 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                      else
#line 779 "term_io.m"
                        if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 42))
#line 787 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                        else
#line 779 "term_io.m"
                          if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 43))
#line 792 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                          else
#line 779 "term_io.m"
                            if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 44))
#line 807 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                            else
#line 779 "term_io.m"
                              if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 45))
#line 790 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                              else
#line 779 "term_io.m"
                                if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 46))
#line 806 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                else
#line 779 "term_io.m"
                                  if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 47))
#line 808 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                  else
#line 779 "term_io.m"
                                    if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 58))
#line 801 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                    else
#line 779 "term_io.m"
                                      if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 59))
#line 800 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                      else
#line 779 "term_io.m"
                                        if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 60))
#line 804 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                        else
#line 779 "term_io.m"
                                          if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 61))
#line 793 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                          else
#line 779 "term_io.m"
                                            if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 62))
#line 805 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                            else
#line 779 "term_io.m"
                                              if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 63))
#line 809 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                              else
#line 779 "term_io.m"
                                                if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 64))
#line 781 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                else
#line 779 "term_io.m"
                                                  if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 91))
#line 798 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                  else
#line 779 "term_io.m"
                                                    if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 92))
#line 810 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                    else
#line 779 "term_io.m"
                                                      if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 93))
#line 799 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                      else
#line 779 "term_io.m"
                                                        if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 94))
#line 785 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                        else
#line 779 "term_io.m"
                                                          if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 95))
#line 791 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                          else
#line 779 "term_io.m"
                                                            if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 96))
#line 794 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                            else
#line 779 "term_io.m"
                                                              if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 123))
#line 796 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                              else
#line 779 "term_io.m"
                                                                if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 124))
#line 811 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                else
#line 779 "term_io.m"
                                                                  if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 125))
#line 797 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                  else
#line 779 "term_io.m"
                                                                    if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 126))
#line 795 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                    else
#line 779 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_FALSE;
#line 779 "term_io.m"
    return mercury__term_io__succeeded;
#line 779 "term_io.m"
  }
#line 195 "term_io.m"
}

#line 191 "term_io.m"
MR_String MR_CALL 
mercury__term_io__mercury_escape_char_1_f_0(
#line 191 "term_io.m"
  MR_Char mercury__term_io__Char_3)
#line 191 "term_io.m"
{
#line 753 "term_io.m"
  {
#line 753 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 753 "term_io.m"
    MR_String mercury__term_io__EscapeCode_4;
#line 753 "term_io.m"
    MR_Integer mercury__term_io__Int_5;
#line 753 "term_io.m"
    MR_String mercury__term_io__OctalString0_6;
#line 753 "term_io.m"
    MR_String mercury__term_io__OctalString_7;
#line 753 "term_io.m"
    MR_String mercury__term_io__V_12_12;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__mercury_escape_char_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_3 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 7911 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Int_5  = Int;
#line 66 "char.opt"
}
#line 755 "term_io.m"
    {
#line 755 "term_io.m"
      mercury__string__int_to_base_string_3_p_0(mercury__term_io__Int_5, (MR_Integer) 8, &mercury__term_io__OctalString0_6);
    }
#line 756 "term_io.m"
    {
#line 756 "term_io.m"
      mercury__string__pad_left_4_p_0(mercury__term_io__OctalString0_6, (MR_Char) 48, (MR_Integer) 3, &mercury__term_io__OctalString_7);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2(mercury__term_io__OctalString_7, (MR_String) "\\", &mercury__term_io__V_12_12);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2((MR_String) "\\", mercury__term_io__V_12_12, &mercury__term_io__EscapeCode_4);
    }
#line 753 "term_io.m"
    return mercury__term_io__EscapeCode_4;
#line 753 "term_io.m"
  }
#line 191 "term_io.m"
}

#line 168 "term_io.m"
MR_String MR_CALL 
mercury__term_io__escaped_string_1_f_0(
#line 168 "term_io.m"
  MR_String mercury__term_io__String_3)
#line 168 "term_io.m"
{
#line 686 "term_io.m"
  {
#line 686 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 686 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;
#line 686 "term_io.m"
    MR_Word mercury__term_io__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 686 "term_io.m"
    MR_Word mercury__term_io__V_4_4;
#line 686 "term_io.m"
    MR_Word mercury__term_io__V_5_5;
#line 686 "term_io.m"
    MR_Word mercury__term_io__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 686 "term_io.m"
    MR_Integer mercury__term_io__Length_8_38;
#line 686 "term_io.m"
    MR_Integer mercury__term_io__End_13_52;
#line 686 "term_io.m"
    MR_Integer mercury__term_io__V_17_53;

#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_3 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 7986 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Length_8_38  = Length;
#line 244 "string.opt"
}
#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_3 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 8006 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_53  = Length;
#line 244 "string.opt"
}
#line 85 "int.opt"
    mercury__term_io__succeeded = (mercury__term_io__Length_8_38 < mercury__term_io__V_17_53);
#line 88 "int.opt"
    if (mercury__term_io__succeeded)
#line 87 "int.opt"
      mercury__term_io__End_13_52 = mercury__term_io__Length_8_38;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__term_io__End_13_52 = mercury__term_io__V_17_53;
#line 696 "string.opt"
    {
#line 696 "string.opt"
      mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(mercury__term_io__String_3, (MR_Integer) 0, mercury__term_io__End_13_52, mercury__term_io__V_7_7, &mercury__term_io__V_5_5);
    }
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__term_io__TypeCtorInfo_8_8, mercury__term_io__V_5_5, &mercury__term_io__V_4_4);
    }
#line 687 "term_io.m"
    {
#line 687 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__term_io__V_4_4);
    }
#line 686 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 686 "term_io.m"
  }
#line 168 "term_io.m"
}

#line 161 "term_io.m"
void MR_CALL 
mercury__term_io__write_escaped_string_4_p_0(
#line 161 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 161 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 161 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 161 "term_io.m"
  MR_String mercury__term_io__String_6,
#line 161 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
#line 161 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
#line 161 "term_io.m"
{
#line 683 "term_io.m"
  {
#line 683 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 683 "term_io.m"
    MR_Integer mercury__term_io__Length_8_23;
#line 683 "term_io.m"
    MR_Integer mercury__term_io__End_13_33;
#line 683 "term_io.m"
    MR_Integer mercury__term_io__V_17_34;

#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 8086 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Length_8_23  = Length;
#line 244 "string.opt"
}
#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 8106 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_34  = Length;
#line 244 "string.opt"
}
#line 85 "int.opt"
    mercury__term_io__succeeded = (mercury__term_io__Length_8_23 < mercury__term_io__V_17_34);
#line 88 "int.opt"
    if (mercury__term_io__succeeded)
#line 87 "int.opt"
      mercury__term_io__End_13_33 = mercury__term_io__Length_8_23;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__term_io__End_13_33 = mercury__term_io__V_17_34;
#line 696 "string.opt"
    {
#line 696 "string.opt"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__String_6, (MR_Integer) 0, mercury__term_io__End_13_33, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 696 "string.opt"
      return;
    }
#line 683 "term_io.m"
  }
#line 161 "term_io.m"
}

#line 159 "term_io.m"
void MR_CALL 
mercury__term_io__write_escaped_string_3_p_0(
#line 159 "term_io.m"
  MR_String mercury__term_io__String_4)
#line 159 "term_io.m"
{
#line 679 "term_io.m"
  {
#line 679 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 679 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_11;
#line 679 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_12;
#line 679 "term_io.m"
    MR_Word mercury__term_io__Stream_6;
#line 679 "term_io.m"
    MR_Box mercury__term_io__Stream_4_15;

#line 1352 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_3_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 8166 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_15  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__Stream_4_15;
#line 8175 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 8177 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 681 "term_io.m"
    {
#line 681 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__String_4);
#line 681 "term_io.m"
      return;
    }
#line 679 "term_io.m"
  }
#line 159 "term_io.m"
}

#line 154 "term_io.m"
MR_bool MR_CALL 
mercury__term_io__string_is_escaped_char_2_p_1(
#line 154 "term_io.m"
  MR_Char * mercury__term_io__Char_1,
#line 154 "term_io.m"
  MR_String mercury__term_io__String_2)
#line 154 "term_io.m"
{
#line 733 "term_io.m"
  {
#line 733 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 733 "term_io.m"
    MR_Word mercury__term_io__Chars_10;
#line 733 "term_io.m"
    MR_Word mercury__term_io__V_32_32;
#line 733 "term_io.m"
    MR_Char mercury__term_io__V_33_33;

#line 734 "term_io.m"
    {
#line 734 "term_io.m"
      mercury__string__to_char_list_2_p_0(mercury__term_io__String_2, &mercury__term_io__Chars_10);
    }
#line 736 "term_io.m"
    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Chars_10)) == (MR_mktag((MR_Integer) 1)));
#line 736 "term_io.m"
    if (mercury__term_io__succeeded)
#line 736 "term_io.m"
      {
#line 736 "term_io.m"
        mercury__term_io__V_33_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_10, (MR_Integer) 0)));
#line 736 "term_io.m"
        mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_10, (MR_Integer) 1)));
#line 742 "term_io.m"
        if ((mercury__term_io__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "term_io.m"
          {
#line 736 "term_io.m"
            *mercury__term_io__Char_1 = mercury__term_io__V_33_33;
#line 768 "term_io.m"
            {
#line 768 "term_io.m"
              mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(*mercury__term_io__Char_1);
            }
#line 768 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 768 "term_io.m"
              {
#line 779 "term_io.m"
                if ((*mercury__term_io__Char_1 == (MR_Char) 32))
#line 779 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                else
#line 779 "term_io.m"
                  if ((*mercury__term_io__Char_1 == (MR_Char) 33))
#line 780 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                  else
#line 779 "term_io.m"
                    if ((*mercury__term_io__Char_1 == (MR_Char) 34))
#line 803 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                    else
#line 779 "term_io.m"
                      if ((*mercury__term_io__Char_1 == (MR_Char) 35))
#line 782 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                      else
#line 779 "term_io.m"
                        if ((*mercury__term_io__Char_1 == (MR_Char) 36))
#line 783 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                        else
#line 779 "term_io.m"
                          if ((*mercury__term_io__Char_1 == (MR_Char) 37))
#line 784 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                          else
#line 779 "term_io.m"
                            if ((*mercury__term_io__Char_1 == (MR_Char) 38))
#line 786 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                            else
#line 779 "term_io.m"
                              if ((*mercury__term_io__Char_1 == (MR_Char) 39))
#line 802 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                              else
#line 779 "term_io.m"
                                if ((*mercury__term_io__Char_1 == (MR_Char) 40))
#line 788 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                else
#line 779 "term_io.m"
                                  if ((*mercury__term_io__Char_1 == (MR_Char) 41))
#line 789 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                  else
#line 779 "term_io.m"
                                    if ((*mercury__term_io__Char_1 == (MR_Char) 42))
#line 787 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                    else
#line 779 "term_io.m"
                                      if ((*mercury__term_io__Char_1 == (MR_Char) 43))
#line 792 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                      else
#line 779 "term_io.m"
                                        if ((*mercury__term_io__Char_1 == (MR_Char) 44))
#line 807 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                        else
#line 779 "term_io.m"
                                          if ((*mercury__term_io__Char_1 == (MR_Char) 45))
#line 790 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                          else
#line 779 "term_io.m"
                                            if ((*mercury__term_io__Char_1 == (MR_Char) 46))
#line 806 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                            else
#line 779 "term_io.m"
                                              if ((*mercury__term_io__Char_1 == (MR_Char) 47))
#line 808 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                              else
#line 779 "term_io.m"
                                                if ((*mercury__term_io__Char_1 == (MR_Char) 58))
#line 801 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                else
#line 779 "term_io.m"
                                                  if ((*mercury__term_io__Char_1 == (MR_Char) 59))
#line 800 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                  else
#line 779 "term_io.m"
                                                    if ((*mercury__term_io__Char_1 == (MR_Char) 60))
#line 804 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                    else
#line 779 "term_io.m"
                                                      if ((*mercury__term_io__Char_1 == (MR_Char) 61))
#line 793 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                      else
#line 779 "term_io.m"
                                                        if ((*mercury__term_io__Char_1 == (MR_Char) 62))
#line 805 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                        else
#line 779 "term_io.m"
                                                          if ((*mercury__term_io__Char_1 == (MR_Char) 63))
#line 809 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                          else
#line 779 "term_io.m"
                                                            if ((*mercury__term_io__Char_1 == (MR_Char) 64))
#line 781 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                            else
#line 779 "term_io.m"
                                                              if ((*mercury__term_io__Char_1 == (MR_Char) 91))
#line 798 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                              else
#line 779 "term_io.m"
                                                                if ((*mercury__term_io__Char_1 == (MR_Char) 92))
#line 810 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                else
#line 779 "term_io.m"
                                                                  if ((*mercury__term_io__Char_1 == (MR_Char) 93))
#line 799 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                  else
#line 779 "term_io.m"
                                                                    if ((*mercury__term_io__Char_1 == (MR_Char) 94))
#line 785 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                    else
#line 779 "term_io.m"
                                                                      if ((*mercury__term_io__Char_1 == (MR_Char) 95))
#line 791 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                      else
#line 779 "term_io.m"
                                                                        if ((*mercury__term_io__Char_1 == (MR_Char) 96))
#line 794 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                        else
#line 779 "term_io.m"
                                                                          if ((*mercury__term_io__Char_1 == (MR_Char) 123))
#line 796 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                          else
#line 779 "term_io.m"
                                                                            if ((*mercury__term_io__Char_1 == (MR_Char) 124))
#line 811 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                            else
#line 779 "term_io.m"
                                                                              if ((*mercury__term_io__Char_1 == (MR_Char) 125))
#line 797 "term_io.m"
                                                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                              else
#line 779 "term_io.m"
                                                                                if ((*mercury__term_io__Char_1 == (MR_Char) 126))
#line 795 "term_io.m"
                                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                                else
#line 779 "term_io.m"
                                                                                  mercury__term_io__succeeded = MR_FALSE;
#line 768 "term_io.m"
                if (!(mercury__term_io__succeeded))
#line 770 "term_io.m"
                  {
#line 770 "term_io.m"
                    MR_Integer mercury__term_io__V_37_37;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_Char Character;
	MR_Integer Int;

	Character =  *mercury__term_io__Char_1 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8461 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_37_37  = Int;
#line 66 "char.opt"
}
#line 770 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__V_37_37 >= (MR_Integer) 128);
#line 770 "term_io.m"
                  }
#line 768 "term_io.m"
              }
#line 739 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 846 "term_io.m"
              {
#line 846 "term_io.m"
                if ((*mercury__term_io__Char_1 == (MR_Char) 8))
#line 851 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
                else
#line 846 "term_io.m"
                  if ((*mercury__term_io__Char_1 == (MR_Char) 9))
#line 850 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
                  else
#line 846 "term_io.m"
                    if ((*mercury__term_io__Char_1 == (MR_Char) 10))
#line 849 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
                    else
#line 846 "term_io.m"
                      if ((*mercury__term_io__Char_1 == (MR_Char) 34))
#line 847 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
                      else
#line 846 "term_io.m"
                        if ((*mercury__term_io__Char_1 == (MR_Char) 39))
#line 846 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
                        else
#line 846 "term_io.m"
                          if ((*mercury__term_io__Char_1 == (MR_Char) 92))
#line 848 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
                          else
#line 846 "term_io.m"
                            mercury__term_io__succeeded = MR_FALSE;
#line 846 "term_io.m"
              }
#line 736 "term_io.m"
          }
#line 742 "term_io.m"
        else
#line 742 "term_io.m"
          {
#line 742 "term_io.m"
            MR_Word mercury__term_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 1)));
#line 742 "term_io.m"
            MR_Char mercury__term_io__V_35_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 0)));

#line 743 "term_io.m"
            mercury__term_io__succeeded = (mercury__term_io__V_33_33 == (MR_Char) 92);
#line 742 "term_io.m"
            if (mercury__term_io__succeeded)
#line 742 "term_io.m"
              {
#line 742 "term_io.m"
                if ((mercury__term_io__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 846 "term_io.m"
                  if ((mercury__term_io__V_35_35 == (MR_Char) 34))
#line 847 "term_io.m"
                    {
#line 847 "term_io.m"
                      *mercury__term_io__Char_1 = (MR_Char) 34;
#line 847 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 847 "term_io.m"
                    }
#line 846 "term_io.m"
                  else
#line 846 "term_io.m"
                    if ((mercury__term_io__V_35_35 == (MR_Char) 39))
#line 846 "term_io.m"
                      {
#line 846 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 39;
#line 846 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
                      }
#line 846 "term_io.m"
                    else
#line 846 "term_io.m"
                      if ((mercury__term_io__V_35_35 == (MR_Char) 92))
#line 848 "term_io.m"
                        {
#line 848 "term_io.m"
                          *mercury__term_io__Char_1 = (MR_Char) 92;
#line 848 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 848 "term_io.m"
                        }
#line 846 "term_io.m"
                      else
#line 846 "term_io.m"
                        if ((mercury__term_io__V_35_35 == (MR_Char) 98))
#line 851 "term_io.m"
                          {
#line 851 "term_io.m"
                            *mercury__term_io__Char_1 = (MR_Char) 8;
#line 851 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 851 "term_io.m"
                          }
#line 846 "term_io.m"
                        else
#line 846 "term_io.m"
                          if ((mercury__term_io__V_35_35 == (MR_Char) 110))
#line 849 "term_io.m"
                            {
#line 849 "term_io.m"
                              *mercury__term_io__Char_1 = (MR_Char) 10;
#line 849 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 849 "term_io.m"
                            }
#line 846 "term_io.m"
                          else
#line 846 "term_io.m"
                            if ((mercury__term_io__V_35_35 == (MR_Char) 116))
#line 850 "term_io.m"
                              {
#line 850 "term_io.m"
                                *mercury__term_io__Char_1 = (MR_Char) 9;
#line 850 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 850 "term_io.m"
                              }
#line 846 "term_io.m"
                            else
#line 846 "term_io.m"
                              mercury__term_io__succeeded = MR_FALSE;
#line 742 "term_io.m"
                else
#line 746 "term_io.m"
                  {
#line 746 "term_io.m"
                    MR_String mercury__term_io__NumString_17;
#line 746 "term_io.m"
                    MR_Integer mercury__term_io__Int_18;
#line 746 "term_io.m"
                    MR_Word mercury__term_io__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_34_34, (MR_Integer) 1)));
#line 746 "term_io.m"
                    MR_Word mercury__term_io__V_23_23;
#line 746 "term_io.m"
                    MR_Integer mercury__term_io__V_27_27;
#line 746 "term_io.m"
                    MR_Char mercury__term_io__Char2_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_34_34, (MR_Integer) 0)));
#line 746 "term_io.m"
                    MR_Char mercury__term_io__Char3_15;

#line 746 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 746 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 746 "term_io.m"
                      {
#line 746 "term_io.m"
                        mercury__term_io__Char3_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_22_22, (MR_Integer) 0)));
#line 746 "term_io.m"
                        mercury__term_io__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_22_22, (MR_Integer) 1)));
#line 746 "term_io.m"
                        mercury__term_io__succeeded = (mercury__term_io__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 746 "term_io.m"
                          {
#line 748 "term_io.m"
                            {
#line 748 "term_io.m"
                              mercury__string__from_char_list_2_p_0(mercury__term_io__V_32_32, &mercury__term_io__NumString_17);
                            }
#line 749 "term_io.m"
                            mercury__term_io__V_27_27 = (MR_Integer) 8;
#line 749 "term_io.m"
                            {
#line 749 "term_io.m"
                              mercury__term_io__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__term_io__V_27_27, mercury__term_io__NumString_17, &mercury__term_io__Int_18);
                            }
#line 746 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 746 "term_io.m"
                              {
#line 59 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__term_io__Int_18 ;
		{
#line 59 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 8677 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__term_io__Char_1  = Character;
#line 59 "char.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 746 "term_io.m"
                              }
#line 746 "term_io.m"
                          }
#line 746 "term_io.m"
                      }
#line 746 "term_io.m"
                  }
#line 742 "term_io.m"
              }
#line 742 "term_io.m"
          }
#line 736 "term_io.m"
      }
#line 733 "term_io.m"
    return mercury__term_io__succeeded;
#line 733 "term_io.m"
  }
#line 154 "term_io.m"
}

#line 153 "term_io.m"
void MR_CALL 
mercury__term_io__string_is_escaped_char_2_p_0(
#line 153 "term_io.m"
  MR_Char mercury__term_io__Char_1,
#line 153 "term_io.m"
  MR_String * mercury__term_io__String_2)
#line 153 "term_io.m"
{
#line 728 "term_io.m"
  {
#line 728 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 728 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_5;

#line 846 "term_io.m"
    if ((mercury__term_io__Char_1 == (MR_Char) 8))
#line 851 "term_io.m"
      {
#line 851 "term_io.m"
        mercury__term_io__QuoteChar_5 = (MR_Char) 98;
#line 851 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 851 "term_io.m"
      }
#line 846 "term_io.m"
    else
#line 846 "term_io.m"
      if ((mercury__term_io__Char_1 == (MR_Char) 9))
#line 850 "term_io.m"
        {
#line 850 "term_io.m"
          mercury__term_io__QuoteChar_5 = (MR_Char) 116;
#line 850 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 850 "term_io.m"
        }
#line 846 "term_io.m"
      else
#line 846 "term_io.m"
        if ((mercury__term_io__Char_1 == (MR_Char) 10))
#line 849 "term_io.m"
          {
#line 849 "term_io.m"
            mercury__term_io__QuoteChar_5 = (MR_Char) 110;
#line 849 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 849 "term_io.m"
          }
#line 846 "term_io.m"
        else
#line 846 "term_io.m"
          if ((mercury__term_io__Char_1 == (MR_Char) 34))
#line 847 "term_io.m"
            {
#line 847 "term_io.m"
              mercury__term_io__QuoteChar_5 = (MR_Char) 34;
#line 847 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 847 "term_io.m"
            }
#line 846 "term_io.m"
          else
#line 846 "term_io.m"
            if ((mercury__term_io__Char_1 == (MR_Char) 39))
#line 846 "term_io.m"
              {
#line 846 "term_io.m"
                mercury__term_io__QuoteChar_5 = (MR_Char) 39;
#line 846 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
              }
#line 846 "term_io.m"
            else
#line 846 "term_io.m"
              if ((mercury__term_io__Char_1 == (MR_Char) 92))
#line 848 "term_io.m"
                {
#line 848 "term_io.m"
                  mercury__term_io__QuoteChar_5 = (MR_Char) 92;
#line 848 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 848 "term_io.m"
                }
#line 846 "term_io.m"
              else
#line 846 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 728 "term_io.m"
    if (mercury__term_io__succeeded)
#line 727 "term_io.m"
      {
#line 727 "term_io.m"
        MR_String mercury__term_io__V_7_7;
#line 727 "term_io.m"
        MR_Word mercury__term_io__V_5_36;
#line 727 "term_io.m"
        MR_Word mercury__term_io__V_6_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 288 "string.opt"
        {
#line 288 "string.opt"
          mercury__term_io__V_5_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_5_36, 0) = ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_5));
#line 288 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_5_36, 1) = ((MR_Box) (mercury__term_io__V_6_37));
#line 288 "string.opt"
        }
#line 290 "string.opt"
        {
#line 290 "string.opt"
          mercury__string__to_char_list_2_p_1(&mercury__term_io__V_7_7, mercury__term_io__V_5_36);
        }
#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\\", mercury__term_io__V_7_7, mercury__term_io__String_2);
#line 260 "string.opt"
          return;
        }
#line 727 "term_io.m"
      }
#line 728 "term_io.m"
    else
#line 730 "term_io.m"
      {
#line 768 "term_io.m"
        {
#line 768 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_1);
        }
#line 768 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 768 "term_io.m"
          {
#line 779 "term_io.m"
            if ((mercury__term_io__Char_1 == (MR_Char) 32))
#line 779 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
            else
#line 779 "term_io.m"
              if ((mercury__term_io__Char_1 == (MR_Char) 33))
#line 780 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
              else
#line 779 "term_io.m"
                if ((mercury__term_io__Char_1 == (MR_Char) 34))
#line 803 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                else
#line 779 "term_io.m"
                  if ((mercury__term_io__Char_1 == (MR_Char) 35))
#line 782 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                  else
#line 779 "term_io.m"
                    if ((mercury__term_io__Char_1 == (MR_Char) 36))
#line 783 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                    else
#line 779 "term_io.m"
                      if ((mercury__term_io__Char_1 == (MR_Char) 37))
#line 784 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                      else
#line 779 "term_io.m"
                        if ((mercury__term_io__Char_1 == (MR_Char) 38))
#line 786 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                        else
#line 779 "term_io.m"
                          if ((mercury__term_io__Char_1 == (MR_Char) 39))
#line 802 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                          else
#line 779 "term_io.m"
                            if ((mercury__term_io__Char_1 == (MR_Char) 40))
#line 788 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                            else
#line 779 "term_io.m"
                              if ((mercury__term_io__Char_1 == (MR_Char) 41))
#line 789 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                              else
#line 779 "term_io.m"
                                if ((mercury__term_io__Char_1 == (MR_Char) 42))
#line 787 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                else
#line 779 "term_io.m"
                                  if ((mercury__term_io__Char_1 == (MR_Char) 43))
#line 792 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                  else
#line 779 "term_io.m"
                                    if ((mercury__term_io__Char_1 == (MR_Char) 44))
#line 807 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                    else
#line 779 "term_io.m"
                                      if ((mercury__term_io__Char_1 == (MR_Char) 45))
#line 790 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                      else
#line 779 "term_io.m"
                                        if ((mercury__term_io__Char_1 == (MR_Char) 46))
#line 806 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                        else
#line 779 "term_io.m"
                                          if ((mercury__term_io__Char_1 == (MR_Char) 47))
#line 808 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                          else
#line 779 "term_io.m"
                                            if ((mercury__term_io__Char_1 == (MR_Char) 58))
#line 801 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                            else
#line 779 "term_io.m"
                                              if ((mercury__term_io__Char_1 == (MR_Char) 59))
#line 800 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                              else
#line 779 "term_io.m"
                                                if ((mercury__term_io__Char_1 == (MR_Char) 60))
#line 804 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                else
#line 779 "term_io.m"
                                                  if ((mercury__term_io__Char_1 == (MR_Char) 61))
#line 793 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                  else
#line 779 "term_io.m"
                                                    if ((mercury__term_io__Char_1 == (MR_Char) 62))
#line 805 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                    else
#line 779 "term_io.m"
                                                      if ((mercury__term_io__Char_1 == (MR_Char) 63))
#line 809 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                      else
#line 779 "term_io.m"
                                                        if ((mercury__term_io__Char_1 == (MR_Char) 64))
#line 781 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                        else
#line 779 "term_io.m"
                                                          if ((mercury__term_io__Char_1 == (MR_Char) 91))
#line 798 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                          else
#line 779 "term_io.m"
                                                            if ((mercury__term_io__Char_1 == (MR_Char) 92))
#line 810 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                            else
#line 779 "term_io.m"
                                                              if ((mercury__term_io__Char_1 == (MR_Char) 93))
#line 799 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                              else
#line 779 "term_io.m"
                                                                if ((mercury__term_io__Char_1 == (MR_Char) 94))
#line 785 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                else
#line 779 "term_io.m"
                                                                  if ((mercury__term_io__Char_1 == (MR_Char) 95))
#line 791 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                  else
#line 779 "term_io.m"
                                                                    if ((mercury__term_io__Char_1 == (MR_Char) 96))
#line 794 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                    else
#line 779 "term_io.m"
                                                                      if ((mercury__term_io__Char_1 == (MR_Char) 123))
#line 796 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                      else
#line 779 "term_io.m"
                                                                        if ((mercury__term_io__Char_1 == (MR_Char) 124))
#line 811 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                        else
#line 779 "term_io.m"
                                                                          if ((mercury__term_io__Char_1 == (MR_Char) 125))
#line 797 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                          else
#line 779 "term_io.m"
                                                                            if ((mercury__term_io__Char_1 == (MR_Char) 126))
#line 795 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                            else
#line 779 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_FALSE;
#line 768 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 770 "term_io.m"
              {
#line 770 "term_io.m"
                MR_Integer mercury__term_io__V_42_42;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_1 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 9066 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_42_42  = Int;
#line 66 "char.opt"
}
#line 770 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_42_42 >= (MR_Integer) 128);
#line 770 "term_io.m"
              }
#line 768 "term_io.m"
          }
#line 730 "term_io.m"
        if (mercury__term_io__succeeded)
#line 287 "string.opt"
          {
#line 287 "string.opt"
            MR_Word mercury__term_io__V_5_50;
#line 287 "string.opt"
            MR_Word mercury__term_io__V_6_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 288 "string.opt"
            {
#line 288 "string.opt"
              mercury__term_io__V_5_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_50, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_1));
#line 288 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_50, 1) = ((MR_Box) (mercury__term_io__V_6_51));
#line 288 "string.opt"
            }
#line 290 "string.opt"
            {
#line 290 "string.opt"
              mercury__string__to_char_list_2_p_1(mercury__term_io__String_2, mercury__term_io__V_5_50);
#line 290 "string.opt"
              return;
            }
#line 287 "string.opt"
          }
#line 730 "term_io.m"
        else
#line 731 "term_io.m"
          {
#line 731 "term_io.m"
            *mercury__term_io__String_2 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_1);
          }
#line 730 "term_io.m"
      }
#line 728 "term_io.m"
  }
#line 153 "term_io.m"
}

#line 148 "term_io.m"
MR_String MR_CALL 
mercury__term_io__escaped_char_1_f_0(
#line 148 "term_io.m"
  MR_Char mercury__term_io__Char_3)
#line 148 "term_io.m"
{
#line 721 "term_io.m"
  {
#line 721 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 721 "term_io.m"
    MR_String mercury__term_io__String_4;

#line 721 "term_io.m"
    {
#line 721 "term_io.m"
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__Char_3, &mercury__term_io__String_4);
    }
#line 721 "term_io.m"
    return mercury__term_io__String_4;
#line 721 "term_io.m"
  }
#line 148 "term_io.m"
}

#line 141 "term_io.m"
void MR_CALL 
mercury__term_io__write_escaped_char_4_p_0(
#line 141 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_17,
#line 141 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_18,
#line 141 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 141 "term_io.m"
  MR_Char mercury__term_io__Char_6,
#line 141 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_9,
#line 141 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_10)
#line 141 "term_io.m"
{
#line 714 "term_io.m"
  {
#line 714 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 714 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_8;

#line 846 "term_io.m"
    if ((mercury__term_io__Char_6 == (MR_Char) 8))
#line 851 "term_io.m"
      {
#line 851 "term_io.m"
        mercury__term_io__QuoteChar_8 = (MR_Char) 98;
#line 851 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 851 "term_io.m"
      }
#line 846 "term_io.m"
    else
#line 846 "term_io.m"
      if ((mercury__term_io__Char_6 == (MR_Char) 9))
#line 850 "term_io.m"
        {
#line 850 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 116;
#line 850 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 850 "term_io.m"
        }
#line 846 "term_io.m"
      else
#line 846 "term_io.m"
        if ((mercury__term_io__Char_6 == (MR_Char) 10))
#line 849 "term_io.m"
          {
#line 849 "term_io.m"
            mercury__term_io__QuoteChar_8 = (MR_Char) 110;
#line 849 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 849 "term_io.m"
          }
#line 846 "term_io.m"
        else
#line 846 "term_io.m"
          if ((mercury__term_io__Char_6 == (MR_Char) 34))
#line 847 "term_io.m"
            {
#line 847 "term_io.m"
              mercury__term_io__QuoteChar_8 = (MR_Char) 34;
#line 847 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 847 "term_io.m"
            }
#line 846 "term_io.m"
          else
#line 846 "term_io.m"
            if ((mercury__term_io__Char_6 == (MR_Char) 39))
#line 846 "term_io.m"
              {
#line 846 "term_io.m"
                mercury__term_io__QuoteChar_8 = (MR_Char) 39;
#line 846 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
              }
#line 846 "term_io.m"
            else
#line 846 "term_io.m"
              if ((mercury__term_io__Char_6 == (MR_Char) 92))
#line 848 "term_io.m"
                {
#line 848 "term_io.m"
                  mercury__term_io__QuoteChar_8 = (MR_Char) 92;
#line 848 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 848 "term_io.m"
                }
#line 846 "term_io.m"
              else
#line 846 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 714 "term_io.m"
    if (mercury__term_io__succeeded)
#line 712 "term_io.m"
      {
#line 712 "term_io.m"
        MR_Box mercury__term_io__STATE_VARIABLE_State_12_12;
#line 9251 "term_io.c"
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9253 "term_io.c"
        void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 9256 "term_io.c"
        {
#line 9258 "term_io.c"
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 92)), mercury__term_io__STATE_VARIABLE_State_0_9, &mercury__term_io__STATE_VARIABLE_State_12_12);
        }
#line 9261 "term_io.c"
        mercury__term_io__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9263 "term_io.c"
        {
#line 9265 "term_io.c"
          mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_8)), mercury__term_io__STATE_VARIABLE_State_12_12, mercury__term_io__STATE_VARIABLE_State_10);
#line 9267 "term_io.c"
          return;
        }
#line 712 "term_io.m"
      }
#line 714 "term_io.m"
    else
#line 716 "term_io.m"
      {
#line 768 "term_io.m"
        {
#line 768 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_6);
        }
#line 768 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 768 "term_io.m"
          {
#line 779 "term_io.m"
            if ((mercury__term_io__Char_6 == (MR_Char) 32))
#line 779 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
            else
#line 779 "term_io.m"
              if ((mercury__term_io__Char_6 == (MR_Char) 33))
#line 780 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
              else
#line 779 "term_io.m"
                if ((mercury__term_io__Char_6 == (MR_Char) 34))
#line 803 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                else
#line 779 "term_io.m"
                  if ((mercury__term_io__Char_6 == (MR_Char) 35))
#line 782 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                  else
#line 779 "term_io.m"
                    if ((mercury__term_io__Char_6 == (MR_Char) 36))
#line 783 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                    else
#line 779 "term_io.m"
                      if ((mercury__term_io__Char_6 == (MR_Char) 37))
#line 784 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                      else
#line 779 "term_io.m"
                        if ((mercury__term_io__Char_6 == (MR_Char) 38))
#line 786 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                        else
#line 779 "term_io.m"
                          if ((mercury__term_io__Char_6 == (MR_Char) 39))
#line 802 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                          else
#line 779 "term_io.m"
                            if ((mercury__term_io__Char_6 == (MR_Char) 40))
#line 788 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                            else
#line 779 "term_io.m"
                              if ((mercury__term_io__Char_6 == (MR_Char) 41))
#line 789 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                              else
#line 779 "term_io.m"
                                if ((mercury__term_io__Char_6 == (MR_Char) 42))
#line 787 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                else
#line 779 "term_io.m"
                                  if ((mercury__term_io__Char_6 == (MR_Char) 43))
#line 792 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                  else
#line 779 "term_io.m"
                                    if ((mercury__term_io__Char_6 == (MR_Char) 44))
#line 807 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                    else
#line 779 "term_io.m"
                                      if ((mercury__term_io__Char_6 == (MR_Char) 45))
#line 790 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                      else
#line 779 "term_io.m"
                                        if ((mercury__term_io__Char_6 == (MR_Char) 46))
#line 806 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                        else
#line 779 "term_io.m"
                                          if ((mercury__term_io__Char_6 == (MR_Char) 47))
#line 808 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                          else
#line 779 "term_io.m"
                                            if ((mercury__term_io__Char_6 == (MR_Char) 58))
#line 801 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                            else
#line 779 "term_io.m"
                                              if ((mercury__term_io__Char_6 == (MR_Char) 59))
#line 800 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                              else
#line 779 "term_io.m"
                                                if ((mercury__term_io__Char_6 == (MR_Char) 60))
#line 804 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                else
#line 779 "term_io.m"
                                                  if ((mercury__term_io__Char_6 == (MR_Char) 61))
#line 793 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                  else
#line 779 "term_io.m"
                                                    if ((mercury__term_io__Char_6 == (MR_Char) 62))
#line 805 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                    else
#line 779 "term_io.m"
                                                      if ((mercury__term_io__Char_6 == (MR_Char) 63))
#line 809 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                      else
#line 779 "term_io.m"
                                                        if ((mercury__term_io__Char_6 == (MR_Char) 64))
#line 781 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                        else
#line 779 "term_io.m"
                                                          if ((mercury__term_io__Char_6 == (MR_Char) 91))
#line 798 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                          else
#line 779 "term_io.m"
                                                            if ((mercury__term_io__Char_6 == (MR_Char) 92))
#line 810 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                            else
#line 779 "term_io.m"
                                                              if ((mercury__term_io__Char_6 == (MR_Char) 93))
#line 799 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                              else
#line 779 "term_io.m"
                                                                if ((mercury__term_io__Char_6 == (MR_Char) 94))
#line 785 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                else
#line 779 "term_io.m"
                                                                  if ((mercury__term_io__Char_6 == (MR_Char) 95))
#line 791 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                  else
#line 779 "term_io.m"
                                                                    if ((mercury__term_io__Char_6 == (MR_Char) 96))
#line 794 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                    else
#line 779 "term_io.m"
                                                                      if ((mercury__term_io__Char_6 == (MR_Char) 123))
#line 796 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                      else
#line 779 "term_io.m"
                                                                        if ((mercury__term_io__Char_6 == (MR_Char) 124))
#line 811 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                        else
#line 779 "term_io.m"
                                                                          if ((mercury__term_io__Char_6 == (MR_Char) 125))
#line 797 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                          else
#line 779 "term_io.m"
                                                                            if ((mercury__term_io__Char_6 == (MR_Char) 126))
#line 795 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 779 "term_io.m"
                                                                            else
#line 779 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_FALSE;
#line 768 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 770 "term_io.m"
              {
#line 770 "term_io.m"
                MR_Integer mercury__term_io__V_20_20;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_6 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 9505 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_20_20  = Int;
#line 66 "char.opt"
}
#line 770 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_20_20 >= (MR_Integer) 128);
#line 770 "term_io.m"
              }
#line 768 "term_io.m"
          }
#line 716 "term_io.m"
        if (mercury__term_io__succeeded)
#line 9520 "term_io.c"
          {
#line 9522 "term_io.c"
            void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9525 "term_io.c"
            {
#line 9527 "term_io.c"
              mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) (mercury__term_io__Char_6)), mercury__term_io__STATE_VARIABLE_State_0_9, mercury__term_io__STATE_VARIABLE_State_10);
#line 9529 "term_io.c"
              return;
            }
#line 9532 "term_io.c"
          }
#line 716 "term_io.m"
        else
#line 717 "term_io.m"
          {
#line 717 "term_io.m"
            MR_String mercury__term_io__V_15_15;
#line 9540 "term_io.c"
            void MR_CALL (* mercury__term_io__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 717 "term_io.m"
            {
#line 717 "term_io.m"
              mercury__term_io__V_15_15 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_6);
            }
#line 9548 "term_io.c"
            mercury__term_io__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9550 "term_io.c"
            {
#line 9552 "term_io.c"
              mercury__term_io__func_3(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_17), mercury__term_io__Stream_5, ((MR_Box) (mercury__term_io__V_15_15)), mercury__term_io__STATE_VARIABLE_State_0_9, mercury__term_io__STATE_VARIABLE_State_10);
#line 9554 "term_io.c"
              return;
            }
#line 717 "term_io.m"
          }
#line 716 "term_io.m"
      }
#line 714 "term_io.m"
  }
#line 141 "term_io.m"
}

#line 139 "term_io.m"
void MR_CALL 
mercury__term_io__write_escaped_char_3_p_0(
#line 139 "term_io.m"
  MR_Char mercury__term_io__Char_4)
#line 139 "term_io.m"
{
#line 706 "term_io.m"
  {
#line 706 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 706 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_11;
#line 706 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_12;
#line 706 "term_io.m"
    MR_Word mercury__term_io__Stream_6;
#line 706 "term_io.m"
    MR_Box mercury__term_io__Stream_4_15;

#line 1352 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_3_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 9597 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_15  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__Stream_4_15;
#line 9606 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 9608 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 708 "term_io.m"
    {
#line 708 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__Char_4);
#line 708 "term_io.m"
      return;
    }
#line 706 "term_io.m"
  }
#line 139 "term_io.m"
}

#line 134 "term_io.m"
MR_String MR_CALL 
mercury__term_io__quoted_char_1_f_0(
#line 134 "term_io.m"
  MR_Char mercury__term_io__C_3)
#line 134 "term_io.m"
{
#line 580 "term_io.m"
  {
#line 580 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 580 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;
#line 580 "term_io.m"
    MR_String mercury__term_io__V_7_7;
#line 580 "term_io.m"
    MR_String mercury__term_io__V_10_10;

#line 721 "term_io.m"
    {
#line 721 "term_io.m"
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_3, &mercury__term_io__V_7_7);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2(mercury__term_io__V_7_7, (MR_String) "\'", &mercury__term_io__V_10_10);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__V_10_10, &mercury__term_io__HeadVar__2_2);
    }
#line 580 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 580 "term_io.m"
  }
#line 134 "term_io.m"
}

#line 127 "term_io.m"
void MR_CALL 
mercury__term_io__quote_char_4_p_0(
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 127 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 127 "term_io.m"
  MR_Char mercury__term_io__C_6,
#line 127 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
#line 127 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
#line 127 "term_io.m"
{
#line 577 "term_io.m"
  {
#line 577 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 577 "term_io.m"
    {
#line 577 "term_io.m"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_5, mercury__term_io__C_6, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 577 "term_io.m"
      return;
    }
#line 577 "term_io.m"
  }
#line 127 "term_io.m"
}

#line 125 "term_io.m"
void MR_CALL 
mercury__term_io__quote_char_3_p_0(
#line 125 "term_io.m"
  MR_Char mercury__term_io__C_4)
#line 125 "term_io.m"
{
#line 574 "term_io.m"
  {
#line 574 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 574 "term_io.m"
    MR_String mercury__term_io__V_8_8;
#line 574 "term_io.m"
    MR_String mercury__term_io__V_14_14;
#line 574 "term_io.m"
    MR_String mercury__term_io__V_17_17;

#line 721 "term_io.m"
    {
#line 721 "term_io.m"
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_4, &mercury__term_io__V_14_14);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2(mercury__term_io__V_14_14, (MR_String) "\'", &mercury__term_io__V_17_17);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__V_17_17, &mercury__term_io__V_8_8);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_char_3_p_0

	MR_String Message;

	Message =  mercury__term_io__V_8_8 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 9741 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 574 "term_io.m"
  }
#line 125 "term_io.m"
}

#line 120 "term_io.m"
MR_String MR_CALL 
mercury__term_io__quoted_atom_1_f_0(
#line 120 "term_io.m"
  MR_String mercury__term_io__S_3)
#line 120 "term_io.m"
{
#line 589 "term_io.m"
  {
#line 589 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 589 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;

#line 590 "term_io.m"
    {
#line 590 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__term_io__S_3, (MR_Integer) 1);
    }
#line 589 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 589 "term_io.m"
  }
#line 120 "term_io.m"
}

#line 113 "term_io.m"
void MR_CALL 
mercury__term_io__quote_atom_4_p_0(
#line 113 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 113 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 113 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 113 "term_io.m"
  MR_String mercury__term_io__S_6,
#line 113 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
#line 113 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
#line 113 "term_io.m"
{
#line 586 "term_io.m"
  {
#line 586 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 587 "term_io.m"
    {
#line 587 "term_io.m"
      mercury__term_io__quote_atom_agt_5_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__S_6, (MR_Integer) 1, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 587 "term_io.m"
      return;
    }
#line 586 "term_io.m"
  }
#line 113 "term_io.m"
}

#line 111 "term_io.m"
void MR_CALL 
mercury__term_io__quote_atom_3_p_0(
#line 111 "term_io.m"
  MR_String mercury__term_io__S_4)
#line 111 "term_io.m"
{
#line 583 "term_io.m"
  {
#line 583 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 583 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_18;
#line 583 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_19;
#line 583 "term_io.m"
    MR_Word mercury__term_io__Stream_15;
#line 583 "term_io.m"
    MR_Box mercury__term_io__Stream_4_22;

#line 1352 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_3_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 9843 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_22  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
    mercury__term_io__Stream_15 = (MR_Word) mercury__term_io__Stream_4_22;
#line 9852 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_18 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 9854 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_19 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 594 "term_io.m"
    {
#line 594 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_18, mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__Stream_15, mercury__term_io__S_4, (MR_Integer) 1);
#line 594 "term_io.m"
      return;
    }
#line 583 "term_io.m"
  }
#line 111 "term_io.m"
}

#line 106 "term_io.m"
MR_String MR_CALL 
mercury__term_io__quoted_string_1_f_0(
#line 106 "term_io.m"
  MR_String mercury__term_io__S_3)
#line 106 "term_io.m"
{
#line 676 "term_io.m"
  {
#line 676 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 676 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;
#line 676 "term_io.m"
    MR_Word mercury__term_io__V_4_4;
#line 676 "term_io.m"
    MR_Word mercury__term_io__V_6_6;
#line 676 "term_io.m"
    MR_String mercury__term_io__V_7_7;
#line 676 "term_io.m"
    MR_Word mercury__term_io__V_8_8;
#line 676 "term_io.m"
    MR_Word mercury__term_io__V_10_10;

#line 677 "term_io.m"
    {
#line 677 "term_io.m"
      mercury__term_io__V_7_7 = mercury__term_io__escaped_string_1_f_0(mercury__term_io__S_3);
    }
#line 677 "term_io.m"
    mercury__term_io__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 677 "term_io.m"
    mercury__term_io__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[2]);
#line 677 "term_io.m"
    {
#line 677 "term_io.m"
      mercury__term_io__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 0) = ((MR_Box) (mercury__term_io__V_7_7));
#line 677 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 1) = ((MR_Box) (mercury__term_io__V_8_8));
#line 677 "term_io.m"
    }
#line 677 "term_io.m"
    {
#line 677 "term_io.m"
      mercury__term_io__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_4_4, 0) = ((MR_Box) ((MR_String) "\""));
#line 677 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_4_4, 1) = ((MR_Box) (mercury__term_io__V_6_6));
#line 677 "term_io.m"
    }
#line 677 "term_io.m"
    {
#line 677 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__term_io__V_4_4);
    }
#line 676 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 676 "term_io.m"
  }
#line 106 "term_io.m"
}

#line 99 "term_io.m"
void MR_CALL 
mercury__term_io__quote_string_4_p_0(
#line 99 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_15,
#line 99 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_16,
#line 99 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 99 "term_io.m"
  MR_String mercury__term_io__S_6,
#line 99 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
#line 99 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
#line 99 "term_io.m"
{
#line 671 "term_io.m"
  {
#line 671 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 671 "term_io.m"
    MR_Box mercury__term_io__STATE_VARIABLE_State_11_11;
#line 671 "term_io.m"
    MR_Box mercury__term_io__STATE_VARIABLE_State_12_12;
#line 9958 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9960 "term_io.c"
    void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 9963 "term_io.c"
    {
#line 9965 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), mercury__term_io__STATE_VARIABLE_State_0_8, &mercury__term_io__STATE_VARIABLE_State_11_11);
    }
#line 673 "term_io.m"
    {
#line 673 "term_io.m"
      mercury__term_io__write_escaped_string_4_p_0(mercury__term_io__TypeClassInfo_for_writer_15, mercury__term_io__TypeClassInfo_for_writer_16, mercury__term_io__Stream_5, mercury__term_io__S_6, mercury__term_io__STATE_VARIABLE_State_11_11, &mercury__term_io__STATE_VARIABLE_State_12_12);
    }
#line 9973 "term_io.c"
    mercury__term_io__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9975 "term_io.c"
    {
#line 9977 "term_io.c"
      mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), mercury__term_io__STATE_VARIABLE_State_12_12, mercury__term_io__STATE_VARIABLE_State_9);
#line 9979 "term_io.c"
      return;
    }
#line 671 "term_io.m"
  }
#line 99 "term_io.m"
}

#line 97 "term_io.m"
void MR_CALL 
mercury__term_io__quote_string_3_p_0(
#line 97 "term_io.m"
  MR_String mercury__term_io__S_4)
#line 97 "term_io.m"
{
#line 667 "term_io.m"
  {
#line 667 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 667 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_11;
#line 667 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_12;
#line 667 "term_io.m"
    MR_Word mercury__term_io__Stream_6;
#line 667 "term_io.m"
    MR_Box mercury__term_io__Stream_4_15;
#line 10006 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10008 "term_io.c"
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_11_22;
#line 10010 "term_io.c"
    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10012 "term_io.c"
    MR_Box mercury__term_io__conv3_STATE_VARIABLE_IO_8;

#line 1352 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_string_3_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 10026 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_15  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__Stream_4_15;
#line 10035 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 10037 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 10039 "term_io.c"
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10041 "term_io.c"
    {
#line 10043 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_11_22);
    }
#line 673 "term_io.m"
    {
#line 673 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__S_4);
    }
#line 10051 "term_io.c"
    mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10053 "term_io.c"
    {
#line 10055 "term_io.c"
      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_IO_8);
    }
#line 667 "term_io.m"
  }
#line 97 "term_io.m"
}

#line 91 "term_io.m"
void MR_CALL 
mercury__term_io__write_variable_with_op_table_5_p_0(
#line 91 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_17,
#line 91 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_16,
#line 91 "term_io.m"
  MR_Box mercury__term_io__Ops_6,
#line 91 "term_io.m"
  MR_Word mercury__term_io__Variable_7,
#line 91 "term_io.m"
  MR_Word mercury__term_io__VarSet_8)
#line 91 "term_io.m"
{
#line 289 "term_io.m"
  {
#line 289 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 290 "term_io.m"
    MR_Word mercury__term_io__V_10_10;
#line 290 "term_io.m"
    MR_Integer mercury__term_io__V_11_11;

#line 290 "term_io.m"
    {
#line 290 "term_io.m"
      mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_17, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__Ops_6, mercury__term_io__Variable_7, mercury__term_io__VarSet_8, &mercury__term_io__V_10_10, (MR_Integer) 0, &mercury__term_io__V_11_11);
    }
#line 289 "term_io.m"
  }
#line 91 "term_io.m"
}

#line 85 "term_io.m"
void MR_CALL 
mercury__term_io__write_variable_4_p_0(
#line 85 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_13,
#line 85 "term_io.m"
  MR_Word mercury__term_io__Variable_5,
#line 85 "term_io.m"
  MR_Word mercury__term_io__VarSet_6)
#line 85 "term_io.m"
{
#line 285 "term_io.m"
  {
#line 285 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 285 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_14;
#line 290 "term_io.m"
    MR_Word mercury__term_io__V_24_24;
#line 290 "term_io.m"
    MR_Integer mercury__term_io__V_25_25;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10121 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_14 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 290 "term_io.m"
    {
#line 290 "term_io.m"
      mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__TypeClassInfo_for_op_table_14, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Variable_5, mercury__term_io__VarSet_6, &mercury__term_io__V_24_24, (MR_Integer) 0, &mercury__term_io__V_25_25);
    }
#line 285 "term_io.m"
  }
#line 85 "term_io.m"
}

#line 81 "term_io.m"
MR_String MR_CALL 
mercury__term_io__format_constant_1_f_0(
#line 81 "term_io.m"
  MR_Word mercury__term_io__Const_3)
#line 81 "term_io.m"
{
#line 556 "term_io.m"
  {
#line 556 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 556 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;

#line 557 "term_io.m"
    {
#line 557 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__term_io__format_constant_agt_2_f_0(mercury__term_io__Const_3, (MR_Integer) 1);
    }
#line 556 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 556 "term_io.m"
  }
#line 81 "term_io.m"
}

#line 77 "term_io.m"
void MR_CALL 
mercury__term_io__write_constant_3_p_0(
#line 77 "term_io.m"
  MR_Word mercury__term_io__Const_4)
#line 77 "term_io.m"
{
#line 538 "term_io.m"
  {
#line 538 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 539 "term_io.m"
    {
#line 539 "term_io.m"
      mercury__term_io__write_constant_4_p_0(mercury__term_io__Const_4, (MR_Integer) 1);
#line 539 "term_io.m"
      return;
    }
#line 538 "term_io.m"
  }
#line 77 "term_io.m"
}

#line 72 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_nl_with_op_table_5_p_0(
#line 72 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_16,
#line 72 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_15,
#line 72 "term_io.m"
  MR_Box mercury__term_io__Ops_6,
#line 72 "term_io.m"
  MR_Word mercury__term_io__VarSet_7,
#line 72 "term_io.m"
  MR_Word mercury__term_io__Term_8)
#line 72 "term_io.m"
{
#line 860 "term_io.m"
  {
#line 860 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 860 "term_io.m"
    MR_Integer mercury__term_io__V_38_38;
#line 860 "term_io.m"
    MR_Integer mercury__term_io__V_42_42;
#line 10206 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_15, (MR_Integer) 0)), (MR_Integer) 12)));
#line 10208 "term_io.c"
    MR_Box mercury__term_io__conv1_V_42_42;
#line 326 "term_io.m"
    MR_Word mercury__term_io__V_23_23;
#line 326 "term_io.m"
    MR_Integer mercury__term_io__V_24_24;

#line 10215 "term_io.c"
    {
#line 10217 "term_io.c"
      mercury__term_io__conv1_V_42_42 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_15), mercury__term_io__Ops_6);
    }
#line 10220 "term_io.c"
    mercury__term_io__V_42_42 = ((MR_Integer) mercury__term_io__conv1_V_42_42);
#line 326 "term_io.m"
    mercury__term_io__V_38_38 = (mercury__term_io__V_42_42 + (MR_Integer) 1);
#line 326 "term_io.m"
    {
#line 326 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_16, mercury__term_io__TypeClassInfo_for_op_table_15, mercury__term_io__Ops_6, mercury__term_io__Term_8, mercury__term_io__V_38_38, mercury__term_io__VarSet_7, &mercury__term_io__V_23_23, (MR_Integer) 0, &mercury__term_io__V_24_24);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_term_nl_with_op_table_5_p_0

	MR_String Message;

	Message =  (MR_String) ".\n" ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 10241 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 860 "term_io.m"
  }
#line 72 "term_io.m"
}

#line 67 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_nl_4_p_0(
#line 67 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_13,
#line 67 "term_io.m"
  MR_Word mercury__term_io__VarSet_5,
#line 67 "term_io.m"
  MR_Word mercury__term_io__Term_6)
#line 67 "term_io.m"
{
#line 856 "term_io.m"
  {
#line 856 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 856 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_14;
#line 856 "term_io.m"
    MR_Integer mercury__term_io__V_48_48;
#line 856 "term_io.m"
    MR_Integer mercury__term_io__V_52_52;
#line 10273 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
#line 10275 "term_io.c"
    MR_Box mercury__term_io__conv1_V_52_52;
#line 326 "term_io.m"
    MR_Word mercury__term_io__V_33_33;
#line 326 "term_io.m"
    MR_Integer mercury__term_io__V_34_34;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10284 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_14 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 10286 "term_io.c"
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 10288 "term_io.c"
    {
#line 10290 "term_io.c"
      mercury__term_io__conv1_V_52_52 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_14), ((MR_Box) ((MR_Integer) 0)));
    }
#line 10293 "term_io.c"
    mercury__term_io__V_52_52 = ((MR_Integer) mercury__term_io__conv1_V_52_52);
#line 326 "term_io.m"
    mercury__term_io__V_48_48 = (mercury__term_io__V_52_52 + (MR_Integer) 1);
#line 326 "term_io.m"
    {
#line 326 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__TypeClassInfo_for_op_table_14, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Term_6, mercury__term_io__V_48_48, mercury__term_io__VarSet_5, &mercury__term_io__V_33_33, (MR_Integer) 0, &mercury__term_io__V_34_34);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_term_nl_4_p_0

	MR_String Message;

	Message =  (MR_String) ".\n" ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 10314 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 856 "term_io.m"
  }
#line 67 "term_io.m"
}

#line 62 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_with_op_table_5_p_0(
#line 62 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_17,
#line 62 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_16,
#line 62 "term_io.m"
  MR_Box mercury__term_io__Ops_6,
#line 62 "term_io.m"
  MR_Word mercury__term_io__VarSet_7,
#line 62 "term_io.m"
  MR_Word mercury__term_io__Term_8)
#line 62 "term_io.m"
{
#line 318 "term_io.m"
  {
#line 318 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 318 "term_io.m"
    MR_Integer mercury__term_io__V_29_29;
#line 318 "term_io.m"
    MR_Integer mercury__term_io__V_33_33;
#line 10348 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12)));
#line 10350 "term_io.c"
    MR_Box mercury__term_io__conv1_V_33_33;
#line 326 "term_io.m"
    MR_Word mercury__term_io__V_10_10;
#line 326 "term_io.m"
    MR_Integer mercury__term_io__V_11_11;

#line 10357 "term_io.c"
    {
#line 10359 "term_io.c"
      mercury__term_io__conv1_V_33_33 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_16), mercury__term_io__Ops_6);
    }
#line 10362 "term_io.c"
    mercury__term_io__V_33_33 = ((MR_Integer) mercury__term_io__conv1_V_33_33);
#line 326 "term_io.m"
    mercury__term_io__V_29_29 = (mercury__term_io__V_33_33 + (MR_Integer) 1);
#line 326 "term_io.m"
    {
#line 326 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_17, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__Ops_6, mercury__term_io__Term_8, mercury__term_io__V_29_29, mercury__term_io__VarSet_7, &mercury__term_io__V_10_10, (MR_Integer) 0, &mercury__term_io__V_11_11);
    }
#line 318 "term_io.m"
  }
#line 62 "term_io.m"
}

#line 57 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_4_p_0(
#line 57 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_13,
#line 57 "term_io.m"
  MR_Word mercury__term_io__VarSet_5,
#line 57 "term_io.m"
  MR_Word mercury__term_io__Term_6)
#line 57 "term_io.m"
{
#line 314 "term_io.m"
  {
#line 314 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 314 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_14;
#line 314 "term_io.m"
    MR_Integer mercury__term_io__V_39_39;
#line 314 "term_io.m"
    MR_Integer mercury__term_io__V_43_43;
#line 10397 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
#line 10399 "term_io.c"
    MR_Box mercury__term_io__conv1_V_43_43;
#line 326 "term_io.m"
    MR_Word mercury__term_io__V_24_24;
#line 326 "term_io.m"
    MR_Integer mercury__term_io__V_25_25;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10408 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_14 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 10410 "term_io.c"
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 10412 "term_io.c"
    {
#line 10414 "term_io.c"
      mercury__term_io__conv1_V_43_43 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_14), ((MR_Box) ((MR_Integer) 0)));
    }
#line 10417 "term_io.c"
    mercury__term_io__V_43_43 = ((MR_Integer) mercury__term_io__conv1_V_43_43);
#line 326 "term_io.m"
    mercury__term_io__V_39_39 = (mercury__term_io__V_43_43 + (MR_Integer) 1);
#line 326 "term_io.m"
    {
#line 326 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__TypeClassInfo_for_op_table_14, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Term_6, mercury__term_io__V_39_39, mercury__term_io__VarSet_5, &mercury__term_io__V_24_24, (MR_Integer) 0, &mercury__term_io__V_25_25);
    }
#line 314 "term_io.m"
  }
#line 57 "term_io.m"
}

#line 51 "term_io.m"
void MR_CALL 
mercury__term_io__read_term_with_op_table_4_p_0(
#line 51 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_12,
#line 51 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_11,
#line 51 "term_io.m"
  MR_Box mercury__term_io__Ops_5,
#line 51 "term_io.m"
  MR_Word * mercury__term_io__Result_6)
#line 51 "term_io.m"
{
#line 16 "parser.opt"
  {
#line 16 "parser.opt"
    MR_bool mercury__term_io__succeeded;
#line 16 "parser.opt"
    MR_String mercury__term_io__FileName_8_17;
#line 16 "parser.opt"
    MR_Box mercury__term_io__Stream_6_23;
#line 16 "parser.opt"
    MR_Word mercury__term_io__Tokens_10_33;
#line 16 "parser.opt"
    MR_Word mercury__term_io__Stream_6_37;
#line 16 "parser.opt"
    MR_Word mercury__term_io__Token_7_39;
#line 16 "parser.opt"
    MR_Integer mercury__term_io__Context_8_40;
#line 16 "parser.opt"
    MR_Box mercury__term_io__Stream_4_44;

#line 1349 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{
#line 1349 "io.opt"

    Stream = mercury_current_text_input();

#line 10474 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_6_23  = (MR_Box) Stream;
#line 1349 "io.opt"
}
#line 645 "io.opt"
    {
#line 645 "io.opt"
      mercury__io__stream_name_4_p_0(mercury__term_io__Stream_6_23, &mercury__term_io__FileName_8_17);
    }
#line 1349 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{
#line 1349 "io.opt"

    Stream = mercury_current_text_input();

#line 10497 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_44  = (MR_Box) Stream;
#line 1349 "io.opt"
}
#line 634 "io.opt"
    mercury__term_io__Stream_6_37 = (MR_Word) mercury__term_io__Stream_4_44;
#line 28 "lexer.opt"
    {
#line 28 "lexer.opt"
      mercury__lexer__get_token_5_p_0(mercury__term_io__Stream_6_37, &mercury__term_io__Token_7_39, &mercury__term_io__Context_8_40);
    }
#line 29 "lexer.opt"
    {
#line 29 "lexer.opt"
      mercury__lexer__get_token_list_2_6_p_0(mercury__term_io__Stream_6_37, mercury__term_io__Token_7_39, mercury__term_io__Context_8_40, &mercury__term_io__Tokens_10_33);
    }
#line 24 "parser.opt"
    {
#line 24 "parser.opt"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__term_io__TypeInfo_for_T_12, mercury__term_io__TypeClassInfo_for_op_table_11, mercury__term_io__Ops_5, mercury__term_io__FileName_8_17, mercury__term_io__Tokens_10_33, mercury__term_io__Result_6);
#line 24 "parser.opt"
      return;
    }
#line 16 "parser.opt"
  }
#line 51 "term_io.m"
}

#line 46 "term_io.m"
void MR_CALL 
mercury__term_io__read_term_3_p_0(
#line 46 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_11,
#line 46 "term_io.m"
  MR_Word * mercury__term_io__Result_4)
#line 46 "term_io.m"
{
#line 255 "term_io.m"
  {
#line 255 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 255 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_12;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10546 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_12 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 257 "term_io.m"
    {
#line 257 "term_io.m"
      mercury__term_io__read_term_with_op_table_4_p_0(mercury__term_io__TypeInfo_for_T_11, mercury__term_io__TypeClassInfo_for_op_table_12, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Result_4);
#line 257 "term_io.m"
      return;
    }
#line 255 "term_io.m"
  }
#line 46 "term_io.m"
}

void mercury__term_io__init(void)
{
}

void mercury__term_io__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term_io__term_io__type_ctor_info_adjacent_to_graphic_token_0);
	MR_register_type_ctor_info(&mercury__term_io__term_io__type_ctor_info_read_term_1);
	MR_register_type_ctor_info(&mercury__term_io__term_io__type_ctor_info_read_term_0);
}

void mercury__term_io__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module term_io. */
