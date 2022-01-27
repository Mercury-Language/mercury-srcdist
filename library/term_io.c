/*
** Automatically generated from `term_io.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
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




#line 93 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0;

#line 96 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1;

#line 99 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_value_ordered_adjacent_to_graphic_token_0[2];

#line 102 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0[2];

#line 105 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0[2];

#line 108 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_0;

#line 111 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_1[2];

#line 114 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_1;

#line 117 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__varset__pti_varset_1__pseudo_1;

#line 120 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__term__pti_term_1__pseudo_1;

#line 123 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_2[2];

#line 126 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_2;

#line 129 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_0[1];

#line 132 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_1[1];

#line 135 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_2[1];

#line 138 "term_io.c"
static const MR_DuPtagLayout mercury__term_io__term_io__du_ptag_ordered_read_term_1[3];

#line 141 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_name_ordered_read_term_1[3];

#line 144 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_read_term_1[3];

#line 147 "term_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0;

#line 150 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
#line 153 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 155 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2);

#line 158 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
#line 161 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 163 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 165 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3);

#line 168 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0_10001(
#line 171 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 173 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 175 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3);

#line 178 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_1_0_10001(
#line 181 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 183 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_2,
#line 185 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3,
#line 187 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_4);

#line 190 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0_10001(
#line 193 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 195 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2);

#line 198 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_0_0_10001(
#line 201 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 203 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 205 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3);

#line 108 "string.opt"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 108 "string.opt"
  MR_Word mercury__term_io__V_17_17,
#line 108 "string.opt"
  MR_Word mercury__term_io__V_18_18,
#line 108 "string.opt"
  MR_Box mercury__term_io__V_19_19,
#line 108 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 108 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 108 "string.opt"
  MR_Integer mercury__term_io__End_10_10,
#line 108 "string.opt"
  MR_Box mercury__term_io__STATE_VARIABLE_Acc_0_14_11,
#line 108 "string.opt"
  MR_Box * mercury__term_io__STATE_VARIABLE_Acc_15_12);

#line 108 "string.opt"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 108 "string.opt"
  MR_Word mercury__term_io__V_17_17,
#line 108 "string.opt"
  MR_Word mercury__term_io__V_18_18,
#line 108 "string.opt"
  MR_Word mercury__term_io__V_19_19,
#line 108 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 108 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 108 "string.opt"
  MR_Integer mercury__term_io__End_10_10);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 519 "term_io.m"
static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
#line 519 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1);

#line 109 "string.opt"
static void MR_CALL 
mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(
#line 109 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 109 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 109 "string.opt"
  MR_Integer mercury__term_io__End_10_10,
#line 109 "string.opt"
  MR_Word mercury__term_io__STATE_VARIABLE_Acc_0_14_11,
#line 109 "string.opt"
  MR_Word * mercury__term_io__STATE_VARIABLE_Acc_15_12);

#line 71 "string.opt"
static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho22_3_p_in__string_0(
#line 71 "string.opt"
  MR_String mercury__term_io__String_5_5,
#line 71 "string.opt"
  MR_Integer mercury__term_io__Cur_6_6);

#line 535 "term_io.m"
static void MR_CALL 
mercury__term_io__write_term_args_8_p_0(
#line 535 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_40,
#line 535 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_39,
#line 535 "term_io.m"
  MR_Box mercury__term_io__Ops_1,
#line 535 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 535 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_3,
#line 535 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_4,
#line 535 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_5,
#line 535 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_6);

#line 490 "term_io.m"
static void MR_CALL 
mercury__term_io__write_list_tail_8_p_0(
#line 490 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_52,
#line 490 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_51,
#line 490 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 490 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 490 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_21,
#line 490 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_22,
#line 490 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_23,
#line 490 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_24);

#line 339 "term_io.m"
static void MR_CALL 
mercury__term_io__write_arg_term_8_p_0(
#line 339 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_25,
#line 339 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_24,
#line 339 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 339 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 339 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_14,
#line 339 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_15,
#line 339 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_16,
#line 339 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_17);


static /* final */ const MR_Box mercury__term_io_scalar_common_1[4][2];

static /* final */ const MR_Box mercury__term_io_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__term_io_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_io_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__term_io_scalar_common_5[1][1];




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

static /* final */ const MR_Box mercury__term_io_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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
#include "string.mh"
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



#line 731 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0 = {
  (MR_String) "maybe_adjacent_to_graphic_token",
  (MR_Integer) 0
};

#line 737 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1 = {
  (MR_String) "not_adjacent_to_graphic_token",
  (MR_Integer) 1
};

#line 743 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_value_ordered_adjacent_to_graphic_token_0[2] = {
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

#line 749 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0[2] = {
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

#line 755 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 761 "term_io.c"
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

#line 782 "term_io.c"
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

#line 797 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 803 "term_io.c"
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

#line 818 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 826 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 834 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_2[2] = {
  (MR_PseudoTypeInfo) &mercury__term_io__varset__pti_varset_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term_io__term__pti_term_1__pseudo_1
};

#line 840 "term_io.c"
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

#line 855 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_0[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_0
};

#line 860 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_1[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_1
};

#line 865 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_2[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_2
};

#line 870 "term_io.c"
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

#line 889 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_name_ordered_read_term_1[3] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_0,
  &mercury__term_io__term_io__du_functor_desc_read_term_1_1,
  &mercury__term_io__term_io__du_functor_desc_read_term_1_2
};

#line 896 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_read_term_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 903 "term_io.c"
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

#line 924 "term_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0 = {
  &mercury__term_io__term_io__type_ctor_info_read_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 932 "term_io.c"
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

#line 953 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
#line 956 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 958 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2)
#line 960 "term_io.c"
{
#line 962 "term_io.c"
  {
#line 964 "term_io.c"
    MR_bool mercury__term_io__succeeded;

#line 967 "term_io.c"
    {
#line 969 "term_io.c"
      mercury__term_io__succeeded = mercury__term_io____Unify____adjacent_to_graphic_token_0_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2));
    }
#line 972 "term_io.c"
    return mercury__term_io__succeeded;
#line 974 "term_io.c"
  }
#line 976 "term_io.c"
}

#line 979 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
#line 982 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 984 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 986 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3)
#line 988 "term_io.c"
{
#line 990 "term_io.c"
  {
#line 992 "term_io.c"
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

#line 995 "term_io.c"
    {
#line 997 "term_io.c"
      mercury__term_io____Compare____adjacent_to_graphic_token_0_0(&mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
#line 1000 "term_io.c"
    *mercury__term_io__wrapper_arg_1 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
#line 1002 "term_io.c"
  }
#line 1004 "term_io.c"
}

#line 1007 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0_10001(
#line 1010 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 1012 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 1014 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3)
#line 1016 "term_io.c"
{
#line 1018 "term_io.c"
  {
#line 1020 "term_io.c"
    MR_bool mercury__term_io__succeeded;

#line 1023 "term_io.c"
    {
#line 1025 "term_io.c"
      mercury__term_io__succeeded = mercury__term_io____Unify____read_term_1_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
#line 1028 "term_io.c"
    return mercury__term_io__succeeded;
#line 1030 "term_io.c"
  }
#line 1032 "term_io.c"
}

#line 1035 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_1_0_10001(
#line 1038 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 1040 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_2,
#line 1042 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3,
#line 1044 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_4)
#line 1046 "term_io.c"
{
#line 1048 "term_io.c"
  {
#line 1050 "term_io.c"
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

#line 1053 "term_io.c"
    {
#line 1055 "term_io.c"
      mercury__term_io____Compare____read_term_1_0(((MR_Word) mercury__term_io__wrapper_arg_1), &mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_3), ((MR_Word) mercury__term_io__wrapper_arg_4));
    }
#line 1058 "term_io.c"
    *mercury__term_io__wrapper_arg_2 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
#line 1060 "term_io.c"
  }
#line 1062 "term_io.c"
}

#line 1065 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0_10001(
#line 1068 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 1070 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2)
#line 1072 "term_io.c"
{
#line 1074 "term_io.c"
  {
#line 1076 "term_io.c"
    MR_bool mercury__term_io__succeeded;

#line 1079 "term_io.c"
    {
#line 1081 "term_io.c"
      mercury__term_io__succeeded = mercury__term_io____Unify____read_term_0_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2));
    }
#line 1084 "term_io.c"
    return mercury__term_io__succeeded;
#line 1086 "term_io.c"
  }
#line 1088 "term_io.c"
}

#line 1091 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_0_0_10001(
#line 1094 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 1096 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 1098 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3)
#line 1100 "term_io.c"
{
#line 1102 "term_io.c"
  {
#line 1104 "term_io.c"
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

#line 1107 "term_io.c"
    {
#line 1109 "term_io.c"
      mercury__term_io____Compare____read_term_0_0(&mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
#line 1112 "term_io.c"
    *mercury__term_io__wrapper_arg_1 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
#line 1114 "term_io.c"
  }
#line 1116 "term_io.c"
}

#line 108 "string.opt"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 108 "string.opt"
  MR_Word mercury__term_io__V_17_17,
#line 108 "string.opt"
  MR_Word mercury__term_io__V_18_18,
#line 108 "string.opt"
  MR_Box mercury__term_io__V_19_19,
#line 108 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 108 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 108 "string.opt"
  MR_Integer mercury__term_io__End_10_10,
#line 108 "string.opt"
  MR_Box mercury__term_io__STATE_VARIABLE_Acc_0_14_11,
#line 108 "string.opt"
  MR_Box * mercury__term_io__STATE_VARIABLE_Acc_15_12)
#line 108 "string.opt"
{
#line 958 "string.opt"
  while (MR_TRUE)
#line 958 "string.opt"
    {
#line 958 "string.opt"
      /* tailcall optimized into a loop */
#line 958 "string.opt"
      {
#line 958 "string.opt"
        MR_bool mercury__term_io__succeeded = (mercury__term_io__I_9_9 < mercury__term_io__End_10_10);
#line 958 "string.opt"
        MR_Integer mercury__term_io__J_12_13;
#line 958 "string.opt"
        MR_Char mercury__term_io__Char_13_14;

#line 952 "string.opt"
        if (mercury__term_io__succeeded)
#line 952 "string.opt"
          {
#line 195 "string.opt"
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
#line 195 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1184 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__J_12_13  = NextIndex;
	 mercury__term_io__Char_13_14  = Ch;
#line 195 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 952 "string.opt"
            if (mercury__term_io__succeeded)
#line 954 "string.opt"
              mercury__term_io__succeeded = (mercury__term_io__J_12_13 <= mercury__term_io__End_10_10);
#line 952 "string.opt"
          }
#line 958 "string.opt"
        if (mercury__term_io__succeeded)
#line 956 "string.opt"
          {
#line 956 "string.opt"
            MR_Box mercury__term_io__STATE_VARIABLE_Acc_16_16_15;

#line 956 "string.opt"
            {
#line 956 "string.opt"
              mercury__term_io__write_escaped_char_4_p_0(mercury__term_io__V_17_17, mercury__term_io__V_18_18, mercury__term_io__V_19_19, mercury__term_io__Char_13_14, mercury__term_io__STATE_VARIABLE_Acc_0_14_11, &mercury__term_io__STATE_VARIABLE_Acc_16_16_15);
            }
#line 957 "string.opt"
            /* direct tailcall eliminated */
#line 957 "string.opt"
            {
#line 957 "string.opt"
              MR_Integer mercury__term_io__I_9__tmp_copy_9 = mercury__term_io__J_12_13;
#line 957 "string.opt"
              MR_Box mercury__term_io__STATE_VARIABLE_Acc_0_14__tmp_copy_11 = mercury__term_io__STATE_VARIABLE_Acc_16_16_15;

#line 957 "string.opt"
              mercury__term_io__STATE_VARIABLE_Acc_0_14_11 = mercury__term_io__STATE_VARIABLE_Acc_0_14__tmp_copy_11;
#line 957 "string.opt"
              mercury__term_io__I_9_9 = mercury__term_io__I_9__tmp_copy_9;
#line 957 "string.opt"
            }
#line 957 "string.opt"
            continue;
#line 956 "string.opt"
          }
#line 958 "string.opt"
        else
#line 959 "string.opt"
          *mercury__term_io__STATE_VARIABLE_Acc_15_12 = mercury__term_io__STATE_VARIABLE_Acc_0_14_11;
#line 958 "string.opt"
      }
#line 958 "string.opt"
      break;
#line 958 "string.opt"
    }
#line 108 "string.opt"
}

#line 108 "string.opt"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 108 "string.opt"
  MR_Word mercury__term_io__V_17_17,
#line 108 "string.opt"
  MR_Word mercury__term_io__V_18_18,
#line 108 "string.opt"
  MR_Word mercury__term_io__V_19_19,
#line 108 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 108 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 108 "string.opt"
  MR_Integer mercury__term_io__End_10_10)
#line 108 "string.opt"
{
#line 958 "string.opt"
  while (MR_TRUE)
#line 958 "string.opt"
    {
#line 958 "string.opt"
      /* tailcall optimized into a loop */
#line 958 "string.opt"
      {
#line 958 "string.opt"
        MR_bool mercury__term_io__succeeded = (mercury__term_io__I_9_9 < mercury__term_io__End_10_10);
#line 958 "string.opt"
        MR_Integer mercury__term_io__J_12_13;
#line 958 "string.opt"
        MR_Char mercury__term_io__Char_13_14;

#line 952 "string.opt"
        if (mercury__term_io__succeeded)
#line 952 "string.opt"
          {
#line 195 "string.opt"
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
#line 195 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1306 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__J_12_13  = NextIndex;
	 mercury__term_io__Char_13_14  = Ch;
#line 195 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 952 "string.opt"
            if (mercury__term_io__succeeded)
#line 954 "string.opt"
              mercury__term_io__succeeded = (mercury__term_io__J_12_13 <= mercury__term_io__End_10_10);
#line 952 "string.opt"
          }
#line 958 "string.opt"
        if (mercury__term_io__succeeded)
#line 956 "string.opt"
          {
#line 956 "string.opt"
            {
#line 956 "string.opt"
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__V_17_17, mercury__term_io__V_18_18, mercury__term_io__V_19_19, mercury__term_io__Char_13_14);
            }
#line 957 "string.opt"
            /* direct tailcall eliminated */
#line 957 "string.opt"
            {
#line 957 "string.opt"
              MR_Integer mercury__term_io__I_9__tmp_copy_9 = mercury__term_io__J_12_13;

#line 957 "string.opt"
              mercury__term_io__I_9_9 = mercury__term_io__I_9__tmp_copy_9;
#line 957 "string.opt"
            }
#line 957 "string.opt"
            continue;
#line 956 "string.opt"
          }
#line 958 "string.opt"
        else
#line 959 "string.opt"
          {
#line 959 "string.opt"
          }
#line 958 "string.opt"
      }
#line 958 "string.opt"
      break;
#line 958 "string.opt"
    }
#line 108 "string.opt"
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
#line 604 "term_io.m"
  {
#line 604 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 604 "term_io.m"
    MR_String mercury__term_io__V_10_10;
#line 1379 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1381 "term_io.c"
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_9;

#line 605 "term_io.m"
    {
#line 605 "term_io.m"
      mercury__term_io__V_10_10 = mercury__term_io__quoted_char_1_f_0(mercury__term_io__C_6);
    }
#line 1389 "term_io.c"
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1391 "term_io.c"
    {
#line 1393 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (mercury__term_io__V_10_10)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_9);
    }
#line 604 "term_io.m"
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

#line 519 "term_io.m"
static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
#line 519 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1)
#line 519 "term_io.m"
{
#line 521 "term_io.m"
  while (MR_TRUE)
#line 521 "term_io.m"
    {
#line 521 "term_io.m"
      /* tailcall optimized into a loop */
#line 521 "term_io.m"
      {
#line 521 "term_io.m"
        MR_bool mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 521 "term_io.m"
        MR_Word mercury__term_io__V_30_30;
#line 521 "term_io.m"
        MR_Word mercury__term_io__V_31_31;
#line 521 "term_io.m"
        MR_Word mercury__term_io__V_29_29;

#line 521 "term_io.m"
        if (mercury__term_io__succeeded)
#line 521 "term_io.m"
          {
#line 521 "term_io.m"
            mercury__term_io__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 521 "term_io.m"
            mercury__term_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
#line 521 "term_io.m"
            mercury__term_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 2)));
#line 521 "term_io.m"
            if (((MR_tag((MR_Word) mercury__term_io__V_31_31)) == (MR_mktag((MR_Integer) 0))))
#line 523 "term_io.m"
              {
#line 523 "term_io.m"
                MR_String mercury__term_io__Op_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_31_31, (MR_Integer) 0)));
#line 523 "term_io.m"
                MR_Word mercury__term_io__Arg_13;
#line 523 "term_io.m"
                MR_Word mercury__term_io__V_32_32;
#line 523 "term_io.m"
                MR_Word mercury__term_io__V_33_33;

#line 525 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 525 "term_io.m"
                if (mercury__term_io__succeeded)
#line 525 "term_io.m"
                  {
#line 525 "term_io.m"
                    mercury__term_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_30_30, (MR_Integer) 0)));
#line 525 "term_io.m"
                    mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_30_30, (MR_Integer) 1)));
#line 527 "term_io.m"
                    if ((mercury__term_io__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "term_io.m"
                      {
#line 528 "term_io.m"
                        MR_Word mercury__term_io__TypeClassInfo_for_op_table_28;
#line 1481 "term_io.c"
                        MR_Integer mercury__term_io__V_18_18;
#line 1483 "term_io.c"
                        MR_Word mercury__term_io__V_19_19;
#line 1485 "term_io.c"
                        MR_bool MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 1487 "term_io.c"
                        MR_Box mercury__term_io__conv2_V_18_18;
#line 1489 "term_io.c"
                        MR_Box mercury__term_io__conv1_V_19_19;

#line 528 "term_io.m"
                        mercury__term_io__Arg_13 = mercury__term_io__V_33_33;
#line 32 "ops.opt"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1496 "term_io.c"
                        mercury__term_io__TypeClassInfo_for_op_table_28 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 1498 "term_io.c"
                        mercury__term_io__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_28, (MR_Integer) 0)), (MR_Integer) 8)));
#line 1500 "term_io.c"
                        {
#line 1502 "term_io.c"
                          mercury__term_io__succeeded = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_28), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__term_io__Op_10)), &mercury__term_io__conv2_V_18_18, &mercury__term_io__conv1_V_19_19);
                        }
#line 1505 "term_io.c"
                        if (mercury__term_io__succeeded)
#line 1507 "term_io.c"
                          {
#line 1509 "term_io.c"
                            mercury__term_io__V_18_18 = ((MR_Integer) mercury__term_io__conv2_V_18_18);
#line 1511 "term_io.c"
                            mercury__term_io__V_19_19 = ((MR_Word) mercury__term_io__conv1_V_19_19);
#line 1513 "term_io.c"
                            mercury__term_io__succeeded = MR_TRUE;
#line 1515 "term_io.c"
                          }
#line 528 "term_io.m"
                      }
#line 527 "term_io.m"
                    else
#line 525 "term_io.m"
                      {
#line 525 "term_io.m"
                        MR_Word mercury__term_io__TypeClassInfo_for_op_table_27;
#line 525 "term_io.m"
                        MR_Word mercury__term_io__V_24_24;
#line 525 "term_io.m"
                        MR_Word mercury__term_io__V_14_14;
#line 1529 "term_io.c"
                        MR_Integer mercury__term_io__V_15_15;
#line 1531 "term_io.c"
                        MR_Word mercury__term_io__V_16_16;
#line 1533 "term_io.c"
                        MR_Word mercury__term_io__V_17_17;
#line 1535 "term_io.c"
                        MR_bool MR_CALL (* mercury__term_io__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
#line 1537 "term_io.c"
                        MR_Box mercury__term_io__conv6_V_15_15;
#line 1539 "term_io.c"
                        MR_Box mercury__term_io__conv5_V_16_16;
#line 1541 "term_io.c"
                        MR_Box mercury__term_io__conv4_V_17_17;

#line 525 "term_io.m"
                        mercury__term_io__Arg_13 = mercury__term_io__V_33_33;
#line 525 "term_io.m"
                        mercury__term_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 0)));
#line 525 "term_io.m"
                        mercury__term_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 1)));
#line 525 "term_io.m"
                        mercury__term_io__succeeded = (mercury__term_io__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 525 "term_io.m"
                          {
#line 32 "ops.opt"
                            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1558 "term_io.c"
                            mercury__term_io__TypeClassInfo_for_op_table_27 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 1560 "term_io.c"
                            mercury__term_io__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1562 "term_io.c"
                            {
#line 1564 "term_io.c"
                              mercury__term_io__succeeded = mercury__term_io__func_3(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_27), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__term_io__Op_10)), &mercury__term_io__conv6_V_15_15, &mercury__term_io__conv5_V_16_16, &mercury__term_io__conv4_V_17_17);
                            }
#line 1567 "term_io.c"
                            if (mercury__term_io__succeeded)
#line 1569 "term_io.c"
                              {
#line 1571 "term_io.c"
                                mercury__term_io__V_15_15 = ((MR_Integer) mercury__term_io__conv6_V_15_15);
#line 1573 "term_io.c"
                                mercury__term_io__V_16_16 = ((MR_Word) mercury__term_io__conv5_V_16_16);
#line 1575 "term_io.c"
                                mercury__term_io__V_17_17 = ((MR_Word) mercury__term_io__conv4_V_17_17);
#line 1577 "term_io.c"
                                mercury__term_io__succeeded = MR_TRUE;
#line 1579 "term_io.c"
                              }
#line 525 "term_io.m"
                          }
#line 525 "term_io.m"
                      }
#line 523 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 531 "term_io.m"
                      {
#line 531 "term_io.m"
                        /* direct tailcall eliminated */
#line 531 "term_io.m"
                        {
#line 531 "term_io.m"
                          MR_Word mercury__term_io__HeadVar__1__tmp_copy_1 = mercury__term_io__Arg_13;

#line 531 "term_io.m"
                          mercury__term_io__HeadVar__1_1 = mercury__term_io__HeadVar__1__tmp_copy_1;
#line 531 "term_io.m"
                        }
#line 531 "term_io.m"
                        continue;
#line 531 "term_io.m"
                      }
#line 525 "term_io.m"
                  }
#line 523 "term_io.m"
              }
#line 521 "term_io.m"
            else
#line 521 "term_io.m"
              if (((MR_tag((MR_Word) mercury__term_io__V_31_31)) == (MR_mktag((MR_Integer) 1))))
#line 521 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 521 "term_io.m"
              else
#line 521 "term_io.m"
                if (((((MR_tag((MR_Word) mercury__term_io__V_31_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__V_31_31, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 522 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 521 "term_io.m"
                else
#line 521 "term_io.m"
                  mercury__term_io__succeeded = MR_FALSE;
#line 521 "term_io.m"
          }
#line 521 "term_io.m"
        return mercury__term_io__succeeded;
#line 521 "term_io.m"
      }
#line 521 "term_io.m"
      break;
#line 521 "term_io.m"
    }
#line 519 "term_io.m"
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
#line 604 "term_io.m"
  {
#line 604 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 604 "term_io.m"
    MR_String mercury__term_io__V_10_10;
#line 1658 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 605 "term_io.m"
    {
#line 605 "term_io.m"
      mercury__term_io__V_10_10 = mercury__term_io__quoted_char_1_f_0(mercury__term_io__C_6);
    }
#line 1666 "term_io.c"
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1668 "term_io.c"
    {
#line 1670 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), mercury__term_io__Stream_5, ((MR_Box) (mercury__term_io__V_10_10)), mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 1672 "term_io.c"
      return;
    }
#line 604 "term_io.m"
  }
#line 127 "term_io.m"
}

#line 109 "string.opt"
static void MR_CALL 
mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(
#line 109 "string.opt"
  MR_String mercury__term_io__String_8_8,
#line 109 "string.opt"
  MR_Integer mercury__term_io__I_9_9,
#line 109 "string.opt"
  MR_Integer mercury__term_io__End_10_10,
#line 109 "string.opt"
  MR_Word mercury__term_io__STATE_VARIABLE_Acc_0_14_11,
#line 109 "string.opt"
  MR_Word * mercury__term_io__STATE_VARIABLE_Acc_15_12)
#line 109 "string.opt"
{
#line 958 "string.opt"
  while (MR_TRUE)
#line 958 "string.opt"
    {
#line 958 "string.opt"
      /* tailcall optimized into a loop */
#line 958 "string.opt"
      {
#line 958 "string.opt"
        MR_bool mercury__term_io__succeeded = (mercury__term_io__I_9_9 < mercury__term_io__End_10_10);
#line 958 "string.opt"
        MR_Integer mercury__term_io__J_12_13;
#line 958 "string.opt"
        MR_Char mercury__term_io__Char_13_14;

#line 952 "string.opt"
        if (mercury__term_io__succeeded)
#line 952 "string.opt"
          {
#line 195 "string.opt"
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
#line 195 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1739 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__J_12_13  = NextIndex;
	 mercury__term_io__Char_13_14  = Ch;
#line 195 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 952 "string.opt"
            if (mercury__term_io__succeeded)
#line 954 "string.opt"
              mercury__term_io__succeeded = (mercury__term_io__J_12_13 <= mercury__term_io__End_10_10);
#line 952 "string.opt"
          }
#line 958 "string.opt"
        if (mercury__term_io__succeeded)
#line 956 "string.opt"
          {
#line 956 "string.opt"
            MR_Word mercury__term_io__STATE_VARIABLE_Acc_16_16_15;

#line 587 "string.opt"
            {
#line 587 "string.opt"
              mercury__term_io__STATE_VARIABLE_Acc_16_16_15 = mercury__term_io__add_escaped_char_2_f_0(mercury__term_io__Char_13_14, mercury__term_io__STATE_VARIABLE_Acc_0_14_11);
            }
#line 957 "string.opt"
            /* direct tailcall eliminated */
#line 957 "string.opt"
            {
#line 957 "string.opt"
              MR_Integer mercury__term_io__I_9__tmp_copy_9 = mercury__term_io__J_12_13;
#line 957 "string.opt"
              MR_Word mercury__term_io__STATE_VARIABLE_Acc_0_14__tmp_copy_11 = mercury__term_io__STATE_VARIABLE_Acc_16_16_15;

#line 957 "string.opt"
              mercury__term_io__STATE_VARIABLE_Acc_0_14_11 = mercury__term_io__STATE_VARIABLE_Acc_0_14__tmp_copy_11;
#line 957 "string.opt"
              mercury__term_io__I_9_9 = mercury__term_io__I_9__tmp_copy_9;
#line 957 "string.opt"
            }
#line 957 "string.opt"
            continue;
#line 956 "string.opt"
          }
#line 958 "string.opt"
        else
#line 959 "string.opt"
          *mercury__term_io__STATE_VARIABLE_Acc_15_12 = mercury__term_io__STATE_VARIABLE_Acc_0_14_11;
#line 958 "string.opt"
      }
#line 958 "string.opt"
      break;
#line 958 "string.opt"
    }
#line 109 "string.opt"
}

#line 71 "string.opt"
static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho22_3_p_in__string_0(
#line 71 "string.opt"
  MR_String mercury__term_io__String_5_5,
#line 71 "string.opt"
  MR_Integer mercury__term_io__Cur_6_6)
#line 71 "string.opt"
{
#line 832 "string.opt"
  while (MR_TRUE)
#line 832 "string.opt"
    {
#line 832 "string.opt"
      /* tailcall optimized into a loop */
#line 832 "string.opt"
      {
#line 832 "string.opt"
        MR_bool mercury__term_io__succeeded;
#line 832 "string.opt"
        MR_Integer mercury__term_io__Next_7_7;
#line 832 "string.opt"
        MR_Char mercury__term_io__Char_8_8;

#line 195 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__all_match_loop__ho22_3_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_io__String_5_5 ;
	Index =  mercury__term_io__Cur_6_6 ;
		{
#line 195 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1849 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__Next_7_7  = NextIndex;
	 mercury__term_io__Char_8_8  = Ch;
#line 195 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 832 "string.opt"
        if (mercury__term_io__succeeded)
#line 830 "string.opt"
          {
#line 830 "string.opt"
            {
#line 830 "string.opt"
              mercury__term_io__succeeded = mercury__lexer__graphic_token_char_1_p_0(mercury__term_io__Char_8_8);
            }
#line 830 "string.opt"
            if (mercury__term_io__succeeded)
#line 831 "string.opt"
              {
#line 831 "string.opt"
                /* direct tailcall eliminated */
#line 831 "string.opt"
                {
#line 831 "string.opt"
                  MR_Integer mercury__term_io__Cur_6__tmp_copy_6 = mercury__term_io__Next_7_7;

#line 831 "string.opt"
                  mercury__term_io__Cur_6_6 = mercury__term_io__Cur_6__tmp_copy_6;
#line 831 "string.opt"
                }
#line 831 "string.opt"
                continue;
#line 831 "string.opt"
              }
#line 830 "string.opt"
          }
#line 832 "string.opt"
        else
#line 833 "string.opt"
          mercury__term_io__succeeded = MR_TRUE;
#line 832 "string.opt"
        return mercury__term_io__succeeded;
#line 832 "string.opt"
      }
#line 832 "string.opt"
      break;
#line 832 "string.opt"
    }
#line 71 "string.opt"
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
#line 698 "term_io.m"
  {
#line 698 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 1922 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1924 "term_io.c"
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_11_11;
#line 1926 "term_io.c"
    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1928 "term_io.c"
    MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_9;

#line 1931 "term_io.c"
    {
#line 1933 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_11_11);
    }
#line 700 "term_io.m"
    {
#line 700 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_15, mercury__term_io__TypeClassInfo_for_writer_16, mercury__term_io__Stream_5, mercury__term_io__S_6);
    }
#line 1941 "term_io.c"
    mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1943 "term_io.c"
    {
#line 1945 "term_io.c"
      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_9);
    }
#line 698 "term_io.m"
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
#line 613 "term_io.m"
  {
#line 613 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 614 "term_io.m"
    {
#line 614 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__S_6, (MR_Integer) 1);
#line 614 "term_io.m"
      return;
    }
#line 613 "term_io.m"
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
#line 710 "term_io.m"
  {
#line 710 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 710 "term_io.m"
    MR_Integer mercury__term_io__Length_8_26;
#line 710 "term_io.m"
    MR_Integer mercury__term_io__End_13_36;
#line 710 "term_io.m"
    MR_Integer mercury__term_io__V_17_37;

#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 2020 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Length_8_26  = Length;
#line 246 "string.opt"
}
#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 2040 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_37  = Length;
#line 246 "string.opt"
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
#line 617 "string.opt"
    {
#line 617 "string.opt"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__String_6, (MR_Integer) 0, mercury__term_io__End_13_36);
#line 617 "string.opt"
      return;
    }
#line 710 "term_io.m"
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
#line 741 "term_io.m"
  {
#line 741 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 741 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_8;

#line 873 "term_io.m"
    if ((mercury__term_io__Char_6 == (MR_Char) 8))
#line 878 "term_io.m"
      {
#line 878 "term_io.m"
        mercury__term_io__QuoteChar_8 = (MR_Char) 98;
#line 878 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 878 "term_io.m"
      }
#line 873 "term_io.m"
    else
#line 873 "term_io.m"
      if ((mercury__term_io__Char_6 == (MR_Char) 9))
#line 877 "term_io.m"
        {
#line 877 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 116;
#line 877 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 877 "term_io.m"
        }
#line 873 "term_io.m"
      else
#line 873 "term_io.m"
        if ((mercury__term_io__Char_6 == (MR_Char) 10))
#line 876 "term_io.m"
          {
#line 876 "term_io.m"
            mercury__term_io__QuoteChar_8 = (MR_Char) 110;
#line 876 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
          }
#line 873 "term_io.m"
        else
#line 873 "term_io.m"
          if ((mercury__term_io__Char_6 == (MR_Char) 34))
#line 874 "term_io.m"
            {
#line 874 "term_io.m"
              mercury__term_io__QuoteChar_8 = (MR_Char) 34;
#line 874 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
            }
#line 873 "term_io.m"
          else
#line 873 "term_io.m"
            if ((mercury__term_io__Char_6 == (MR_Char) 39))
#line 873 "term_io.m"
              {
#line 873 "term_io.m"
                mercury__term_io__QuoteChar_8 = (MR_Char) 39;
#line 873 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
              }
#line 873 "term_io.m"
            else
#line 873 "term_io.m"
              if ((mercury__term_io__Char_6 == (MR_Char) 92))
#line 875 "term_io.m"
                {
#line 875 "term_io.m"
                  mercury__term_io__QuoteChar_8 = (MR_Char) 92;
#line 875 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
                }
#line 873 "term_io.m"
              else
#line 873 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 741 "term_io.m"
    if (mercury__term_io__succeeded)
#line 739 "term_io.m"
      {
#line 2167 "term_io.c"
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2169 "term_io.c"
        MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_12_12;
#line 2171 "term_io.c"
        void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2173 "term_io.c"
        MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_10;

#line 2176 "term_io.c"
        {
#line 2178 "term_io.c"
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 92)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_12_12);
        }
#line 2181 "term_io.c"
        mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2183 "term_io.c"
        {
#line 2185 "term_io.c"
          mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_8)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_10);
        }
#line 739 "term_io.m"
      }
#line 741 "term_io.m"
    else
#line 743 "term_io.m"
      {
#line 795 "term_io.m"
        {
#line 795 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_6);
        }
#line 795 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
          {
#line 806 "term_io.m"
            if ((mercury__term_io__Char_6 == (MR_Char) 32))
#line 806 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
            else
#line 806 "term_io.m"
              if ((mercury__term_io__Char_6 == (MR_Char) 33))
#line 807 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
              else
#line 806 "term_io.m"
                if ((mercury__term_io__Char_6 == (MR_Char) 34))
#line 830 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                else
#line 806 "term_io.m"
                  if ((mercury__term_io__Char_6 == (MR_Char) 35))
#line 809 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                  else
#line 806 "term_io.m"
                    if ((mercury__term_io__Char_6 == (MR_Char) 36))
#line 810 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                    else
#line 806 "term_io.m"
                      if ((mercury__term_io__Char_6 == (MR_Char) 37))
#line 811 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                      else
#line 806 "term_io.m"
                        if ((mercury__term_io__Char_6 == (MR_Char) 38))
#line 813 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                        else
#line 806 "term_io.m"
                          if ((mercury__term_io__Char_6 == (MR_Char) 39))
#line 829 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                          else
#line 806 "term_io.m"
                            if ((mercury__term_io__Char_6 == (MR_Char) 40))
#line 815 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                            else
#line 806 "term_io.m"
                              if ((mercury__term_io__Char_6 == (MR_Char) 41))
#line 816 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                              else
#line 806 "term_io.m"
                                if ((mercury__term_io__Char_6 == (MR_Char) 42))
#line 814 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                else
#line 806 "term_io.m"
                                  if ((mercury__term_io__Char_6 == (MR_Char) 43))
#line 819 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                  else
#line 806 "term_io.m"
                                    if ((mercury__term_io__Char_6 == (MR_Char) 44))
#line 834 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                    else
#line 806 "term_io.m"
                                      if ((mercury__term_io__Char_6 == (MR_Char) 45))
#line 817 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                      else
#line 806 "term_io.m"
                                        if ((mercury__term_io__Char_6 == (MR_Char) 46))
#line 833 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                        else
#line 806 "term_io.m"
                                          if ((mercury__term_io__Char_6 == (MR_Char) 47))
#line 835 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                          else
#line 806 "term_io.m"
                                            if ((mercury__term_io__Char_6 == (MR_Char) 58))
#line 828 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                            else
#line 806 "term_io.m"
                                              if ((mercury__term_io__Char_6 == (MR_Char) 59))
#line 827 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                              else
#line 806 "term_io.m"
                                                if ((mercury__term_io__Char_6 == (MR_Char) 60))
#line 831 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                else
#line 806 "term_io.m"
                                                  if ((mercury__term_io__Char_6 == (MR_Char) 61))
#line 820 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                  else
#line 806 "term_io.m"
                                                    if ((mercury__term_io__Char_6 == (MR_Char) 62))
#line 832 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                    else
#line 806 "term_io.m"
                                                      if ((mercury__term_io__Char_6 == (MR_Char) 63))
#line 836 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                      else
#line 806 "term_io.m"
                                                        if ((mercury__term_io__Char_6 == (MR_Char) 64))
#line 808 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                        else
#line 806 "term_io.m"
                                                          if ((mercury__term_io__Char_6 == (MR_Char) 91))
#line 825 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                          else
#line 806 "term_io.m"
                                                            if ((mercury__term_io__Char_6 == (MR_Char) 92))
#line 837 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                            else
#line 806 "term_io.m"
                                                              if ((mercury__term_io__Char_6 == (MR_Char) 93))
#line 826 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                              else
#line 806 "term_io.m"
                                                                if ((mercury__term_io__Char_6 == (MR_Char) 94))
#line 812 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                else
#line 806 "term_io.m"
                                                                  if ((mercury__term_io__Char_6 == (MR_Char) 95))
#line 818 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                  else
#line 806 "term_io.m"
                                                                    if ((mercury__term_io__Char_6 == (MR_Char) 96))
#line 821 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                    else
#line 806 "term_io.m"
                                                                      if ((mercury__term_io__Char_6 == (MR_Char) 123))
#line 823 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                      else
#line 806 "term_io.m"
                                                                        if ((mercury__term_io__Char_6 == (MR_Char) 124))
#line 838 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                        else
#line 806 "term_io.m"
                                                                          if ((mercury__term_io__Char_6 == (MR_Char) 125))
#line 824 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                          else
#line 806 "term_io.m"
                                                                            if ((mercury__term_io__Char_6 == (MR_Char) 126))
#line 822 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                            else
#line 806 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_FALSE;
#line 795 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 797 "term_io.m"
              {
#line 797 "term_io.m"
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

#line 2423 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_20_20  = Int;
#line 66 "char.opt"
}
#line 797 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_20_20 >= (MR_Integer) 128);
#line 797 "term_io.m"
              }
#line 795 "term_io.m"
          }
#line 743 "term_io.m"
        if (mercury__term_io__succeeded)
#line 2438 "term_io.c"
          {
#line 2440 "term_io.c"
            void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2442 "term_io.c"
            MR_Box mercury__term_io__conv5_STATE_VARIABLE_State_10;

#line 2445 "term_io.c"
            {
#line 2447 "term_io.c"
              mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) (mercury__term_io__Char_6)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_State_10);
            }
#line 2450 "term_io.c"
          }
#line 743 "term_io.m"
        else
#line 744 "term_io.m"
          {
#line 744 "term_io.m"
            MR_String mercury__term_io__V_15_15;
#line 2458 "term_io.c"
            void MR_CALL (* mercury__term_io__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2460 "term_io.c"
            MR_Box mercury__term_io__conv7_STATE_VARIABLE_State_10;

#line 744 "term_io.m"
            {
#line 744 "term_io.m"
              mercury__term_io__V_15_15 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_6);
            }
#line 2468 "term_io.c"
            mercury__term_io__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2470 "term_io.c"
            {
#line 2472 "term_io.c"
              mercury__term_io__func_6(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_17), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (mercury__term_io__V_15_15)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv7_STATE_VARIABLE_State_10);
            }
#line 744 "term_io.m"
          }
#line 743 "term_io.m"
      }
#line 741 "term_io.m"
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
#line 604 "term_io.m"
  {
#line 604 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 604 "term_io.m"
    {
#line 604 "term_io.m"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_5, mercury__term_io__C_6);
#line 604 "term_io.m"
      return;
    }
#line 604 "term_io.m"
  }
#line 127 "term_io.m"
}

#line 227 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
#line 227 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_19,
#line 227 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_20,
#line 227 "term_io.m"
  MR_Word mercury__term_io__Stream_6,
#line 227 "term_io.m"
  MR_String mercury__term_io__S_7,
#line 227 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_8)
#line 227 "term_io.m"
{
#line 623 "term_io.m"
  {
#line 623 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 623 "term_io.m"
    MR_Word mercury__term_io__ShouldQuote_10;

#line 656 "term_io.m"
    if ((strcmp(mercury__term_io__S_7, (MR_String) "!") == 0))
#line 661 "term_io.m"
      mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
    else
#line 656 "term_io.m"
      if ((strcmp(mercury__term_io__S_7, (MR_String) ";") == 0))
#line 658 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
      else
#line 656 "term_io.m"
        if ((strcmp(mercury__term_io__S_7, (MR_String) "[]") == 0))
#line 679 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
        else
#line 656 "term_io.m"
          if ((strcmp(mercury__term_io__S_7, (MR_String) "{}") == 0))
#line 682 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
          else
#line 656 "term_io.m"
            mercury__term_io__succeeded = MR_FALSE;
#line 656 "term_io.m"
    if (!(mercury__term_io__succeeded))
#line 656 "term_io.m"
      {
#line 664 "term_io.m"
        {
#line 669 "term_io.m"
          MR_Integer mercury__term_io__V_26_26;
#line 669 "term_io.m"
          MR_Char mercury__term_io__V_27_27;
#line 669 "term_io.m"
          MR_Char mercury__term_io__V_30_30;
#line 669 "term_io.m"
          MR_Integer mercury__term_io__Len_7_38;

#line 373 "string.opt"
          {
#line 373 "string.opt"
            mercury__term_io__succeeded = mercury__term_io__all_match_loop__ho22_3_p_in__string_0(mercury__term_io__S_7, (MR_Integer) 0);
          }
#line 664 "term_io.m"
          if (mercury__term_io__succeeded)
#line 664 "term_io.m"
            {
#line 665 "term_io.m"
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_7, (MR_String) "") == 0);
#line 665 "term_io.m"
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 664 "term_io.m"
              if (mercury__term_io__succeeded)
#line 664 "term_io.m"
                {
#line 669 "term_io.m"
                  mercury__term_io__V_26_26 = (MR_Integer) 0;
#line 669 "term_io.m"
                  mercury__term_io__V_27_27 = (MR_Char) 35;
#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 2611 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_38  = Length;
#line 246 "string.opt"
}
#line 767 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__V_26_26 ;
	Length =  mercury__term_io__Len_7_38 ;
		{
#line 767 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 2640 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 767 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 669 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 669 "term_io.m"
                    {
#line 163 "string.opt"
                      {
#line 163 "string.opt"
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, mercury__term_io__V_26_26, &mercury__term_io__V_30_30);
                      }
#line 669 "term_io.m"
                      mercury__term_io__succeeded = (mercury__term_io__V_27_27 == mercury__term_io__V_30_30);
#line 669 "term_io.m"
                    }
#line 669 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 664 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 676 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_8 == (MR_Integer) 1);
#line 664 "term_io.m"
                }
#line 664 "term_io.m"
            }
#line 664 "term_io.m"
        }
#line 656 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 653 "term_io.m"
          {
#line 653 "term_io.m"
            MR_Char mercury__term_io__FirstChar_24;
#line 653 "term_io.m"
            MR_Integer mercury__term_io__Len_7_44;
#line 110 "char.opt"
            MR_Char mercury__term_io__V_3_48;

#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 2698 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_44  = Length;
#line 246 "string.opt"
}
#line 767 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__Len_7_44 ;
		{
#line 767 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 2727 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 767 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 653 "term_io.m"
            if (mercury__term_io__succeeded)
#line 653 "term_io.m"
              {
#line 163 "string.opt"
                {
#line 163 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, (MR_Integer) 0, &mercury__term_io__FirstChar_24);
                }
#line 110 "char.opt"
                {
#line 110 "char.opt"
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_24, &mercury__term_io__V_3_48);
                }
#line 653 "term_io.m"
                if (mercury__term_io__succeeded)
#line 653 "term_io.m"
                  {
#line 323 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_7 ;
		{
#line 323 "string.opt"

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

#line 2796 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 323 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 653 "term_io.m"
                  }
#line 653 "term_io.m"
              }
#line 653 "term_io.m"
          }
#line 656 "term_io.m"
      }
#line 686 "term_io.m"
    if (mercury__term_io__succeeded)
#line 685 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 0;
#line 686 "term_io.m"
    else
#line 688 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 1;
#line 628 "term_io.m"
    if ((mercury__term_io__ShouldQuote_10 == (MR_Integer) 0))
#line 2823 "term_io.c"
      {
#line 2825 "term_io.c"
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2827 "term_io.c"
        MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_12;

#line 2830 "term_io.c"
        {
#line 2832 "term_io.c"
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_19), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (mercury__term_io__S_7)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_12);
        }
#line 2835 "term_io.c"
      }
#line 628 "term_io.m"
    else
#line 629 "term_io.m"
      {
#line 2841 "term_io.c"
        void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2843 "term_io.c"
        MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_14_14;
#line 2845 "term_io.c"
        void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2847 "term_io.c"
        MR_Box mercury__term_io__conv5_STATE_VARIABLE_State_12;

#line 2850 "term_io.c"
        {
#line 2852 "term_io.c"
          mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_14_14);
        }
#line 631 "term_io.m"
        {
#line 631 "term_io.m"
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__TypeClassInfo_for_writer_20, mercury__term_io__Stream_6, mercury__term_io__S_7);
        }
#line 2860 "term_io.c"
        mercury__term_io__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2862 "term_io.c"
        {
#line 2864 "term_io.c"
          mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_State_12);
        }
#line 629 "term_io.m"
      }
#line 623 "term_io.m"
  }
#line 227 "term_io.m"
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
#line 2900 "term_io.c"
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
#line 2914 "term_io.c"
            *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "term_io.m"
          else
#line 2918 "term_io.c"
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
#line 2933 "term_io.c"
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

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_io____Compare____read_term_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_io__V_40_40 ;
	S2 =  mercury__term_io__V_12_12 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2965 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Res_7_46  = Res;
#line 130 "private_builtin.opt"
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
#line 2994 "term_io.c"
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
#line 3034 "term_io.c"
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
#line 3049 "term_io.c"
              *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "term_io.m"
            else
#line 32 "term_io.m"
              if (((MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3055 "term_io.c"
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
#line 3073 "term_io.c"
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
#line 3165 "term_io.c"
                mercury__term_io__succeeded = (strcmp(mercury__term_io__V_5_5, mercury__term_io__V_7_7) == 0);
#line 32 "term_io.m"
                if (mercury__term_io__succeeded)
#line 3169 "term_io.c"
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
#line 3198 "term_io.c"
                {
#line 3200 "term_io.c"
                  mercury__term_io__succeeded = mercury__varset____Unify____varset_1_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__V_9_9, mercury__term_io__V_11_11);
                }
#line 32 "term_io.m"
                if (mercury__term_io__succeeded)
#line 3205 "term_io.c"
                  {
#line 3207 "term_io.c"
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

#line 220 "term_io.m"
void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0(
#line 220 "term_io.m"
  MR_Word * mercury__term_io__HeadVar__1_1,
#line 220 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 220 "term_io.m"
  MR_Word mercury__term_io__HeadVar__3_3)
#line 220 "term_io.m"
{
#line 220 "term_io.m"
  {
#line 220 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 220 "term_io.m"
    MR_Integer mercury__term_io__Cast_HeadVar1_4 = (MR_Integer) mercury__term_io__HeadVar__2_2;
#line 220 "term_io.m"
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
#line 220 "term_io.m"
  }
#line 220 "term_io.m"
}

#line 220 "term_io.m"
MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0(
#line 220 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_1,
#line 220 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2)
#line 220 "term_io.m"
{
#line 3343 "term_io.c"
  {
#line 3345 "term_io.c"
    MR_bool mercury__term_io__succeeded = (mercury__term_io__HeadVar__2_1 == mercury__term_io__HeadVar__2_2);

#line 3348 "term_io.c"
    return mercury__term_io__succeeded;
#line 3350 "term_io.c"
  }
#line 220 "term_io.m"
}

#line 717 "term_io.m"
MR_Word MR_CALL 
mercury__term_io__add_escaped_char_2_f_0(
#line 717 "term_io.m"
  MR_Char mercury__term_io__Char_4,
#line 717 "term_io.m"
  MR_Word mercury__term_io__Strings0_5)
#line 717 "term_io.m"
{
#line 722 "term_io.m"
  {
#line 722 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 722 "term_io.m"
    MR_Word mercury__term_io__Strings_6;
#line 722 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_7;

#line 873 "term_io.m"
    if ((mercury__term_io__Char_4 == (MR_Char) 8))
#line 878 "term_io.m"
      {
#line 878 "term_io.m"
        mercury__term_io__QuoteChar_7 = (MR_Char) 98;
#line 878 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 878 "term_io.m"
      }
#line 873 "term_io.m"
    else
#line 873 "term_io.m"
      if ((mercury__term_io__Char_4 == (MR_Char) 9))
#line 877 "term_io.m"
        {
#line 877 "term_io.m"
          mercury__term_io__QuoteChar_7 = (MR_Char) 116;
#line 877 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 877 "term_io.m"
        }
#line 873 "term_io.m"
      else
#line 873 "term_io.m"
        if ((mercury__term_io__Char_4 == (MR_Char) 10))
#line 876 "term_io.m"
          {
#line 876 "term_io.m"
            mercury__term_io__QuoteChar_7 = (MR_Char) 110;
#line 876 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
          }
#line 873 "term_io.m"
        else
#line 873 "term_io.m"
          if ((mercury__term_io__Char_4 == (MR_Char) 34))
#line 874 "term_io.m"
            {
#line 874 "term_io.m"
              mercury__term_io__QuoteChar_7 = (MR_Char) 34;
#line 874 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
            }
#line 873 "term_io.m"
          else
#line 873 "term_io.m"
            if ((mercury__term_io__Char_4 == (MR_Char) 39))
#line 873 "term_io.m"
              {
#line 873 "term_io.m"
                mercury__term_io__QuoteChar_7 = (MR_Char) 39;
#line 873 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
              }
#line 873 "term_io.m"
            else
#line 873 "term_io.m"
              if ((mercury__term_io__Char_4 == (MR_Char) 92))
#line 875 "term_io.m"
                {
#line 875 "term_io.m"
                  mercury__term_io__QuoteChar_7 = (MR_Char) 92;
#line 875 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
                }
#line 873 "term_io.m"
              else
#line 873 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 722 "term_io.m"
    if (mercury__term_io__succeeded)
#line 721 "term_io.m"
      {
#line 721 "term_io.m"
        MR_String mercury__term_io__V_8_8;
#line 721 "term_io.m"
        MR_Word mercury__term_io__V_9_9;
#line 721 "term_io.m"
        MR_Word mercury__term_io__V_11_11;
#line 721 "term_io.m"
        MR_Word mercury__term_io__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 721 "term_io.m"
        {
#line 721 "term_io.m"
          mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 0) = ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_7));
#line 721 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 1) = ((MR_Box) (mercury__term_io__V_12_12));
#line 721 "term_io.m"
        }
#line 721 "term_io.m"
        {
#line 721 "term_io.m"
          mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 721 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 1) = ((MR_Box) (mercury__term_io__V_11_11));
#line 721 "term_io.m"
        }
#line 145 "string.opt"
        {
#line 145 "string.opt"
          mercury__string__from_char_list_2_p_0(mercury__term_io__V_9_9, &mercury__term_io__V_8_8);
        }
#line 721 "term_io.m"
        {
#line 721 "term_io.m"
          mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_8_8));
#line 721 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
#line 721 "term_io.m"
        }
#line 721 "term_io.m"
      }
#line 722 "term_io.m"
    else
#line 724 "term_io.m"
      {
#line 795 "term_io.m"
        {
#line 795 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_4);
        }
#line 795 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
          {
#line 806 "term_io.m"
            if ((mercury__term_io__Char_4 == (MR_Char) 32))
#line 806 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
            else
#line 806 "term_io.m"
              if ((mercury__term_io__Char_4 == (MR_Char) 33))
#line 807 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
              else
#line 806 "term_io.m"
                if ((mercury__term_io__Char_4 == (MR_Char) 34))
#line 830 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                else
#line 806 "term_io.m"
                  if ((mercury__term_io__Char_4 == (MR_Char) 35))
#line 809 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                  else
#line 806 "term_io.m"
                    if ((mercury__term_io__Char_4 == (MR_Char) 36))
#line 810 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                    else
#line 806 "term_io.m"
                      if ((mercury__term_io__Char_4 == (MR_Char) 37))
#line 811 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                      else
#line 806 "term_io.m"
                        if ((mercury__term_io__Char_4 == (MR_Char) 38))
#line 813 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                        else
#line 806 "term_io.m"
                          if ((mercury__term_io__Char_4 == (MR_Char) 39))
#line 829 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                          else
#line 806 "term_io.m"
                            if ((mercury__term_io__Char_4 == (MR_Char) 40))
#line 815 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                            else
#line 806 "term_io.m"
                              if ((mercury__term_io__Char_4 == (MR_Char) 41))
#line 816 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                              else
#line 806 "term_io.m"
                                if ((mercury__term_io__Char_4 == (MR_Char) 42))
#line 814 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                else
#line 806 "term_io.m"
                                  if ((mercury__term_io__Char_4 == (MR_Char) 43))
#line 819 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                  else
#line 806 "term_io.m"
                                    if ((mercury__term_io__Char_4 == (MR_Char) 44))
#line 834 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                    else
#line 806 "term_io.m"
                                      if ((mercury__term_io__Char_4 == (MR_Char) 45))
#line 817 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                      else
#line 806 "term_io.m"
                                        if ((mercury__term_io__Char_4 == (MR_Char) 46))
#line 833 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                        else
#line 806 "term_io.m"
                                          if ((mercury__term_io__Char_4 == (MR_Char) 47))
#line 835 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                          else
#line 806 "term_io.m"
                                            if ((mercury__term_io__Char_4 == (MR_Char) 58))
#line 828 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                            else
#line 806 "term_io.m"
                                              if ((mercury__term_io__Char_4 == (MR_Char) 59))
#line 827 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                              else
#line 806 "term_io.m"
                                                if ((mercury__term_io__Char_4 == (MR_Char) 60))
#line 831 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                else
#line 806 "term_io.m"
                                                  if ((mercury__term_io__Char_4 == (MR_Char) 61))
#line 820 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                  else
#line 806 "term_io.m"
                                                    if ((mercury__term_io__Char_4 == (MR_Char) 62))
#line 832 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                    else
#line 806 "term_io.m"
                                                      if ((mercury__term_io__Char_4 == (MR_Char) 63))
#line 836 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                      else
#line 806 "term_io.m"
                                                        if ((mercury__term_io__Char_4 == (MR_Char) 64))
#line 808 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                        else
#line 806 "term_io.m"
                                                          if ((mercury__term_io__Char_4 == (MR_Char) 91))
#line 825 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                          else
#line 806 "term_io.m"
                                                            if ((mercury__term_io__Char_4 == (MR_Char) 92))
#line 837 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                            else
#line 806 "term_io.m"
                                                              if ((mercury__term_io__Char_4 == (MR_Char) 93))
#line 826 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                              else
#line 806 "term_io.m"
                                                                if ((mercury__term_io__Char_4 == (MR_Char) 94))
#line 812 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                else
#line 806 "term_io.m"
                                                                  if ((mercury__term_io__Char_4 == (MR_Char) 95))
#line 818 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                  else
#line 806 "term_io.m"
                                                                    if ((mercury__term_io__Char_4 == (MR_Char) 96))
#line 821 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                    else
#line 806 "term_io.m"
                                                                      if ((mercury__term_io__Char_4 == (MR_Char) 123))
#line 823 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                      else
#line 806 "term_io.m"
                                                                        if ((mercury__term_io__Char_4 == (MR_Char) 124))
#line 838 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                        else
#line 806 "term_io.m"
                                                                          if ((mercury__term_io__Char_4 == (MR_Char) 125))
#line 824 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                          else
#line 806 "term_io.m"
                                                                            if ((mercury__term_io__Char_4 == (MR_Char) 126))
#line 822 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                            else
#line 806 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_FALSE;
#line 795 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 797 "term_io.m"
              {
#line 797 "term_io.m"
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

#line 3730 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_18_18  = Int;
#line 66 "char.opt"
}
#line 797 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_18_18 >= (MR_Integer) 128);
#line 797 "term_io.m"
              }
#line 795 "term_io.m"
          }
#line 724 "term_io.m"
        if (mercury__term_io__succeeded)
#line 723 "term_io.m"
          {
#line 723 "term_io.m"
            MR_String mercury__term_io__V_13_13;
#line 723 "term_io.m"
            MR_Word mercury__term_io__V_5_26;
#line 723 "term_io.m"
            MR_Word mercury__term_io__V_6_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 701 "string.opt"
            {
#line 701 "string.opt"
              mercury__term_io__V_5_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_26, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_4));
#line 701 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_26, 1) = ((MR_Box) (mercury__term_io__V_6_27));
#line 701 "string.opt"
            }
#line 703 "string.opt"
            {
#line 703 "string.opt"
              mercury__string__to_char_list_2_p_1(&mercury__term_io__V_13_13, mercury__term_io__V_5_26);
            }
#line 723 "term_io.m"
            {
#line 723 "term_io.m"
              mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_13_13));
#line 723 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
#line 723 "term_io.m"
            }
#line 723 "term_io.m"
          }
#line 724 "term_io.m"
        else
#line 725 "term_io.m"
          {
#line 725 "term_io.m"
            MR_String mercury__term_io__V_14_14;

#line 725 "term_io.m"
            {
#line 725 "term_io.m"
              mercury__term_io__V_14_14 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_4);
            }
#line 725 "term_io.m"
            {
#line 725 "term_io.m"
              mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_14_14));
#line 725 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
#line 725 "term_io.m"
            }
#line 725 "term_io.m"
          }
#line 724 "term_io.m"
      }
#line 722 "term_io.m"
    return mercury__term_io__Strings_6;
#line 722 "term_io.m"
  }
#line 717 "term_io.m"
}

#line 574 "term_io.m"
MR_String MR_CALL 
mercury__term_io__format_constant_agt_2_f_0(
#line 574 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1,
#line 574 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_2)
#line 574 "term_io.m"
{
#line 576 "term_io.m"
  {
#line 576 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 576 "term_io.m"
    MR_String mercury__term_io__HeadVar__3_3;

#line 576 "term_io.m"
    if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 582 "term_io.m"
      {
#line 582 "term_io.m"
        MR_String mercury__term_io__A_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

#line 583 "term_io.m"
        {
#line 583 "term_io.m"
          return mercury__term_io__HeadVar__3_3 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__term_io__A_14, mercury__term_io__NextToGraphicToken_2);
        }
#line 582 "term_io.m"
      }
#line 576 "term_io.m"
    else
#line 576 "term_io.m"
      if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 578 "term_io.m"
        {
#line 578 "term_io.m"
          MR_Word mercury__term_io__Base_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 578 "term_io.m"
          MR_Word mercury__term_io__I_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
#line 578 "term_io.m"
          MR_String mercury__term_io__V_9_9;
#line 578 "term_io.m"
          MR_String mercury__term_io__V_10_10;
#line 578 "term_io.m"
          MR_Integer mercury__term_io__V_11_11;

#line 594 "term_io.m"
          if ((mercury__term_io__Base_6 == (MR_Integer) 2))
#line 596 "term_io.m"
            {
#line 596 "term_io.m"
              mercury__term_io__V_9_9 = (MR_String) "";
#line 591 "term_io.m"
              mercury__term_io__V_11_11 = (MR_Integer) 10;
#line 596 "term_io.m"
            }
#line 594 "term_io.m"
          else
#line 594 "term_io.m"
            {
#line 594 "term_io.m"
              if ((mercury__term_io__Base_6 == (MR_Integer) 3))
#line 597 "term_io.m"
                {
#line 597 "term_io.m"
                  mercury__term_io__V_9_9 = (MR_String) "0x";
#line 592 "term_io.m"
                  mercury__term_io__V_11_11 = (MR_Integer) 16;
#line 597 "term_io.m"
                }
#line 594 "term_io.m"
              else
#line 594 "term_io.m"
                {
#line 594 "term_io.m"
                  if ((mercury__term_io__Base_6 == (MR_Integer) 0))
#line 594 "term_io.m"
                    mercury__term_io__V_9_9 = (MR_String) "0b";
#line 594 "term_io.m"
                  else
#line 595 "term_io.m"
                    mercury__term_io__V_9_9 = (MR_String) "0o";
#line 589 "term_io.m"
                  if ((mercury__term_io__Base_6 == (MR_Integer) 0))
#line 589 "term_io.m"
                    mercury__term_io__V_11_11 = (MR_Integer) 2;
#line 589 "term_io.m"
                  else
#line 590 "term_io.m"
                    mercury__term_io__V_11_11 = (MR_Integer) 8;
#line 594 "term_io.m"
                }
#line 594 "term_io.m"
            }
#line 579 "term_io.m"
          {
#line 579 "term_io.m"
            mercury__term_io__V_10_10 = mercury__integer__to_base_string_2_f_0(mercury__term_io__I_7, mercury__term_io__V_11_11);
          }
#line 411 "string.opt"
          {
#line 411 "string.opt"
            mercury__string__append_3_p_2(mercury__term_io__V_9_9, mercury__term_io__V_10_10, &mercury__term_io__HeadVar__3_3);
          }
#line 578 "term_io.m"
        }
#line 576 "term_io.m"
      else
#line 576 "term_io.m"
        if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 576 "term_io.m"
          {
#line 576 "term_io.m"
            MR_Integer mercury__term_io__I_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

#line 710 "string.opt"
            {
#line 710 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__term_io__I_4, (MR_Integer) 10, &mercury__term_io__HeadVar__3_3);
            }
#line 576 "term_io.m"
          }
#line 576 "term_io.m"
        else
#line 576 "term_io.m"
          if (((((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 580 "term_io.m"
            {
#line 580 "term_io.m"
              MR_Float mercury__term_io__F_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 722 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__format_constant_agt_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__term_io__F_12 ;
		{
#line 722 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 3963 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__HeadVar__3_3  = Str;
#line 722 "string.opt"
}
#line 580 "term_io.m"
            }
#line 576 "term_io.m"
          else
#line 576 "term_io.m"
            if (((((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 586 "term_io.m"
              {
#line 586 "term_io.m"
                MR_String mercury__term_io__N_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 411 "string.opt"
                {
#line 411 "string.opt"
                  mercury__string__append_3_p_2((MR_String) "\044", mercury__term_io__N_18, &mercury__term_io__HeadVar__3_3);
                }
#line 586 "term_io.m"
              }
#line 576 "term_io.m"
            else
#line 584 "term_io.m"
              {
#line 584 "term_io.m"
                MR_String mercury__term_io__S_16 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 585 "term_io.m"
                {
#line 585 "term_io.m"
                  return mercury__term_io__HeadVar__3_3 = mercury__term_io__quoted_string_1_f_0(mercury__term_io__S_16);
                }
#line 584 "term_io.m"
              }
#line 576 "term_io.m"
    return mercury__term_io__HeadVar__3_3;
#line 576 "term_io.m"
  }
#line 574 "term_io.m"
}

#line 551 "term_io.m"
void MR_CALL 
mercury__term_io__write_constant_4_p_0(
#line 551 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1,
#line 551 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_2)
#line 551 "term_io.m"
{
#line 554 "term_io.m"
  {
#line 554 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 554 "term_io.m"
    if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 563 "term_io.m"
      {
#line 563 "term_io.m"
        MR_Word mercury__term_io__TypeClassInfo_for_writer_56;
#line 563 "term_io.m"
        MR_Word mercury__term_io__TypeClassInfo_for_writer_57;
#line 563 "term_io.m"
        MR_String mercury__term_io__A_28 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 563 "term_io.m"
        MR_Word mercury__term_io__Stream_53;
#line 563 "term_io.m"
        MR_Box mercury__term_io__Stream_4_60;

#line 1352 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 4049 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_60  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
        mercury__term_io__Stream_53 = (MR_Word) mercury__term_io__Stream_4_60;
#line 4058 "term_io.c"
        mercury__term_io__TypeClassInfo_for_writer_56 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 4060 "term_io.c"
        mercury__term_io__TypeClassInfo_for_writer_57 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 621 "term_io.m"
        {
#line 621 "term_io.m"
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_56, mercury__term_io__TypeClassInfo_for_writer_57, mercury__term_io__Stream_53, mercury__term_io__A_28, mercury__term_io__NextToGraphicToken_2);
#line 621 "term_io.m"
          return;
        }
#line 563 "term_io.m"
      }
#line 554 "term_io.m"
    else
#line 554 "term_io.m"
      if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 556 "term_io.m"
        {
#line 556 "term_io.m"
          MR_Word mercury__term_io__Base_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 556 "term_io.m"
          MR_Word mercury__term_io__I_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
#line 556 "term_io.m"
          MR_String mercury__term_io__Prefix_15;
#line 556 "term_io.m"
          MR_String mercury__term_io__IntString_16;
#line 556 "term_io.m"
          MR_Integer mercury__term_io__V_19_19;

#line 594 "term_io.m"
          if ((mercury__term_io__Base_11 == (MR_Integer) 2))
#line 596 "term_io.m"
            {
#line 596 "term_io.m"
              mercury__term_io__Prefix_15 = (MR_String) "";
#line 591 "term_io.m"
              mercury__term_io__V_19_19 = (MR_Integer) 10;
#line 596 "term_io.m"
            }
#line 594 "term_io.m"
          else
#line 594 "term_io.m"
            {
#line 594 "term_io.m"
              if ((mercury__term_io__Base_11 == (MR_Integer) 3))
#line 597 "term_io.m"
                {
#line 597 "term_io.m"
                  mercury__term_io__Prefix_15 = (MR_String) "0x";
#line 592 "term_io.m"
                  mercury__term_io__V_19_19 = (MR_Integer) 16;
#line 597 "term_io.m"
                }
#line 594 "term_io.m"
              else
#line 594 "term_io.m"
                {
#line 594 "term_io.m"
                  if ((mercury__term_io__Base_11 == (MR_Integer) 0))
#line 594 "term_io.m"
                    mercury__term_io__Prefix_15 = (MR_String) "0b";
#line 594 "term_io.m"
                  else
#line 595 "term_io.m"
                    mercury__term_io__Prefix_15 = (MR_String) "0o";
#line 589 "term_io.m"
                  if ((mercury__term_io__Base_11 == (MR_Integer) 0))
#line 589 "term_io.m"
                    mercury__term_io__V_19_19 = (MR_Integer) 2;
#line 589 "term_io.m"
                  else
#line 590 "term_io.m"
                    mercury__term_io__V_19_19 = (MR_Integer) 8;
#line 594 "term_io.m"
                }
#line 594 "term_io.m"
            }
#line 558 "term_io.m"
          {
#line 558 "term_io.m"
            mercury__term_io__IntString_16 = mercury__integer__to_base_string_2_f_0(mercury__term_io__I_12, mercury__term_io__V_19_19);
          }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_String Message;

	Message =  mercury__term_io__Prefix_15 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4153 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_String Message;

	Message =  mercury__term_io__IntString_16 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4171 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 556 "term_io.m"
        }
#line 554 "term_io.m"
      else
#line 554 "term_io.m"
        if (((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 554 "term_io.m"
          {
#line 554 "term_io.m"
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

#line 4203 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 574 "io.opt"
}
#line 554 "term_io.m"
          }
#line 554 "term_io.m"
        else
#line 554 "term_io.m"
          if (((((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 561 "term_io.m"
            {
#line 561 "term_io.m"
              MR_Float mercury__term_io__F_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 582 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_Float Val;

	Val =  mercury__term_io__F_22 ;
		{
#line 582 "io.opt"

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MercuryFilePtr out;

    MR_sprintf_float(buf, Val);
    out = mercury_current_text_output();
    if (ML_fprintf(out, "%s", buf) < 0) {
        mercury_output_error(out, errno);
    }

#line 4239 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 582 "io.opt"
}
#line 561 "term_io.m"
            }
#line 554 "term_io.m"
          else
#line 554 "term_io.m"
            if (((((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 567 "term_io.m"
              {
#line 567 "term_io.m"
                MR_String mercury__term_io__N_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

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

#line 4287 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 550 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_String Message;

	Message =  mercury__term_io__N_40 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4305 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 567 "term_io.m"
              }
#line 554 "term_io.m"
            else
#line 565 "term_io.m"
              {
#line 565 "term_io.m"
                MR_String mercury__term_io__S_34 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 566 "term_io.m"
                {
#line 566 "term_io.m"
                  mercury__term_io__quote_string_3_p_0(mercury__term_io__S_34);
#line 566 "term_io.m"
                  return;
                }
#line 565 "term_io.m"
              }
#line 554 "term_io.m"
  }
#line 551 "term_io.m"
}

#line 535 "term_io.m"
static void MR_CALL 
mercury__term_io__write_term_args_8_p_0(
#line 535 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_40,
#line 535 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_39,
#line 535 "term_io.m"
  MR_Box mercury__term_io__Ops_1,
#line 535 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 535 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_3,
#line 535 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_4,
#line 535 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_5,
#line 535 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_6)
#line 535 "term_io.m"
{
#line 540 "term_io.m"
  while (MR_TRUE)
#line 540 "term_io.m"
    {
#line 540 "term_io.m"
      /* tailcall optimized into a loop */
#line 540 "term_io.m"
      {
#line 540 "term_io.m"
        MR_bool mercury__term_io__succeeded;

#line 540 "term_io.m"
        if ((mercury__term_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 540 "term_io.m"
          {
#line 540 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_N_6 = mercury__term_io__STATE_VARIABLE_N_0_5;
#line 540 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_VarSet_4 = mercury__term_io__STATE_VARIABLE_VarSet_0_3;
#line 540 "term_io.m"
          }
#line 540 "term_io.m"
        else
#line 541 "term_io.m"
          {
#line 541 "term_io.m"
            MR_Word mercury__term_io__X_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 541 "term_io.m"
            MR_Word mercury__term_io__Xs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 541 "term_io.m"
            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_33_33;
#line 541 "term_io.m"
            MR_Integer mercury__term_io__STATE_VARIABLE_N_34_34;
#line 541 "term_io.m"
            MR_Integer mercury__term_io__V_52_52;
#line 4390 "term_io.c"
            MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
#line 4392 "term_io.c"
            MR_Box mercury__term_io__conv1_V_52_52;

#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_term_args_8_p_0

	MR_String Message;

	Message =  (MR_String) ", " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4407 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 4413 "term_io.c"
            mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_39, (MR_Integer) 0)), (MR_Integer) 13)));
#line 4415 "term_io.c"
            {
#line 4417 "term_io.c"
              mercury__term_io__conv1_V_52_52 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_39), mercury__term_io__Ops_1);
            }
#line 4420 "term_io.c"
            mercury__term_io__V_52_52 = ((MR_Integer) mercury__term_io__conv1_V_52_52);
#line 344 "term_io.m"
            {
#line 344 "term_io.m"
              mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_40, mercury__term_io__TypeClassInfo_for_op_table_39, mercury__term_io__Ops_1, mercury__term_io__X_20, mercury__term_io__V_52_52, mercury__term_io__STATE_VARIABLE_VarSet_0_3, &mercury__term_io__STATE_VARIABLE_VarSet_33_33, mercury__term_io__STATE_VARIABLE_N_0_5, &mercury__term_io__STATE_VARIABLE_N_34_34);
            }
#line 544 "term_io.m"
            /* direct tailcall eliminated */
#line 544 "term_io.m"
            {
#line 544 "term_io.m"
              MR_Word mercury__term_io__HeadVar__2__tmp_copy_2 = mercury__term_io__Xs_21;
#line 544 "term_io.m"
              MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_3 = mercury__term_io__STATE_VARIABLE_VarSet_33_33;
#line 544 "term_io.m"
              MR_Integer mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_5 = mercury__term_io__STATE_VARIABLE_N_34_34;

#line 544 "term_io.m"
              mercury__term_io__STATE_VARIABLE_N_0_5 = mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_5;
#line 544 "term_io.m"
              mercury__term_io__STATE_VARIABLE_VarSet_0_3 = mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_3;
#line 544 "term_io.m"
              mercury__term_io__HeadVar__2_2 = mercury__term_io__HeadVar__2__tmp_copy_2;
#line 544 "term_io.m"
            }
#line 544 "term_io.m"
            continue;
#line 541 "term_io.m"
          }
#line 540 "term_io.m"
      }
#line 540 "term_io.m"
      break;
#line 540 "term_io.m"
    }
#line 535 "term_io.m"
}

#line 490 "term_io.m"
static void MR_CALL 
mercury__term_io__write_list_tail_8_p_0(
#line 490 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_52,
#line 490 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_51,
#line 490 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 490 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 490 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_21,
#line 490 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_22,
#line 490 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_23,
#line 490 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_24)
#line 490 "term_io.m"
{
#line 500 "term_io.m"
  while (MR_TRUE)
#line 500 "term_io.m"
    {
#line 500 "term_io.m"
      /* tailcall optimized into a loop */
#line 500 "term_io.m"
      {
#line 500 "term_io.m"
        MR_bool mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_10)) == (MR_mktag((MR_Integer) 1)));
#line 500 "term_io.m"
        MR_Word mercury__term_io__Val_16;
#line 496 "term_io.m"
        MR_Word mercury__term_io__TypeCtorInfo_12_60;
#line 496 "term_io.m"
        MR_Word mercury__term_io__TypeInfo_13_61;
#line 496 "term_io.m"
        MR_Word mercury__term_io__TypeCtorInfo_14_62;
#line 496 "term_io.m"
        MR_Word mercury__term_io__TypeInfo_15_63;
#line 496 "term_io.m"
        MR_Word mercury__term_io__Id_14;
#line 496 "term_io.m"
        MR_Word mercury__term_io__Values_7_58;
#line 496 "term_io.m"
        MR_Word mercury__term_io__V_15_15;
#line 63 "varset.opt"
        MR_Word mercury__term_io__V_8_56;
#line 63 "varset.opt"
        MR_Word mercury__term_io__V_9_57;
#line 41 "map.opt"
        MR_Box mercury__term_io__conv0_Val_16;

#line 496 "term_io.m"
        if (mercury__term_io__succeeded)
#line 496 "term_io.m"
          {
#line 496 "term_io.m"
            mercury__term_io__Id_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_10, (MR_Integer) 0)));
#line 496 "term_io.m"
            mercury__term_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_10, (MR_Integer) 1)));
#line 63 "varset.opt"
            mercury__term_io__V_8_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 0)));
#line 63 "varset.opt"
            mercury__term_io__V_9_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 1)));
#line 63 "varset.opt"
            mercury__term_io__Values_7_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 2)));
#line 4527 "term_io.c"
            mercury__term_io__TypeCtorInfo_12_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 4529 "term_io.c"
            mercury__term_io__TypeCtorInfo_14_62 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4531 "term_io.c"
            {
#line 4533 "term_io.c"
              mercury__term_io__TypeInfo_13_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4535 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_61, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_60));
#line 4537 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_61, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_52));
#line 4539 "term_io.c"
            }
#line 4541 "term_io.c"
            {
#line 4543 "term_io.c"
              mercury__term_io__TypeInfo_15_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4545 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_63, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_14_62));
#line 4547 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_63, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_52));
#line 4549 "term_io.c"
            }
#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_52, mercury__term_io__TypeInfo_13_61, mercury__term_io__TypeInfo_15_63, mercury__term_io__Values_7_58, mercury__term_io__Id_14, &mercury__term_io__conv0_Val_16);
            }
#line 41 "map.opt"
            if (mercury__term_io__succeeded)
#line 41 "map.opt"
              {
#line 41 "map.opt"
                mercury__term_io__Val_16 = ((MR_Word) mercury__term_io__conv0_Val_16);
#line 41 "map.opt"
                mercury__term_io__succeeded = MR_TRUE;
#line 41 "map.opt"
              }
#line 496 "term_io.m"
          }
#line 500 "term_io.m"
        if (mercury__term_io__succeeded)
#line 499 "term_io.m"
          {
#line 499 "term_io.m"
            /* direct tailcall eliminated */
#line 499 "term_io.m"
            {
#line 499 "term_io.m"
              MR_Word mercury__term_io__Term__tmp_copy_10 = mercury__term_io__Val_16;

#line 499 "term_io.m"
              mercury__term_io__Term_10 = mercury__term_io__Term__tmp_copy_10;
#line 499 "term_io.m"
            }
#line 499 "term_io.m"
            continue;
#line 499 "term_io.m"
          }
#line 500 "term_io.m"
        else
#line 506 "term_io.m"
          {
#line 506 "term_io.m"
            MR_Word mercury__term_io__ListHead_17;
#line 506 "term_io.m"
            MR_Word mercury__term_io__ListTail_18;
#line 501 "term_io.m"
            MR_Word mercury__term_io__V_30_30;
#line 501 "term_io.m"
            MR_String mercury__term_io__V_31_31;
#line 501 "term_io.m"
            MR_Word mercury__term_io__V_32_32;
#line 501 "term_io.m"
            MR_Word mercury__term_io__V_33_33;
#line 501 "term_io.m"
            MR_Word mercury__term_io__V_34_34;
#line 501 "term_io.m"
            MR_Word mercury__term_io__V_19_19;

#line 501 "term_io.m"
            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 501 "term_io.m"
            if (mercury__term_io__succeeded)
#line 501 "term_io.m"
              {
#line 501 "term_io.m"
                mercury__term_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 0)));
#line 501 "term_io.m"
                mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 1)));
#line 501 "term_io.m"
                mercury__term_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 2)));
#line 501 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 501 "term_io.m"
                if (mercury__term_io__succeeded)
#line 501 "term_io.m"
                  {
#line 501 "term_io.m"
                    mercury__term_io__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_30_30, (MR_Integer) 0)));
#line 501 "term_io.m"
                    mercury__term_io__succeeded = (strcmp(mercury__term_io__V_31_31, (MR_String) "[|]") == 0);
#line 501 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 501 "term_io.m"
                      {
#line 501 "term_io.m"
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 501 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 501 "term_io.m"
                          {
#line 501 "term_io.m"
                            mercury__term_io__ListHead_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 0)));
#line 501 "term_io.m"
                            mercury__term_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 1)));
#line 501 "term_io.m"
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 501 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 501 "term_io.m"
                              {
#line 501 "term_io.m"
                                mercury__term_io__ListTail_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_33_33, (MR_Integer) 0)));
#line 501 "term_io.m"
                                mercury__term_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_33_33, (MR_Integer) 1)));
#line 501 "term_io.m"
                                mercury__term_io__succeeded = (mercury__term_io__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "term_io.m"
                              }
#line 501 "term_io.m"
                          }
#line 501 "term_io.m"
                      }
#line 501 "term_io.m"
                  }
#line 501 "term_io.m"
              }
#line 506 "term_io.m"
            if (mercury__term_io__succeeded)
#line 503 "term_io.m"
              {
#line 503 "term_io.m"
                MR_Word mercury__term_io__STATE_VARIABLE_VarSet_37_37;
#line 503 "term_io.m"
                MR_Integer mercury__term_io__STATE_VARIABLE_N_38_38;
#line 503 "term_io.m"
                MR_Integer mercury__term_io__V_79_79;
#line 4676 "term_io.c"
                MR_Box MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box);
#line 4678 "term_io.c"
                MR_Box mercury__term_io__conv2_V_79_79;

#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_list_tail_8_p_0

	MR_String Message;

	Message =  (MR_String) ", " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4693 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 4699 "term_io.c"
                mercury__term_io__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_51, (MR_Integer) 0)), (MR_Integer) 13)));
#line 4701 "term_io.c"
                {
#line 4703 "term_io.c"
                  mercury__term_io__conv2_V_79_79 = mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_51), mercury__term_io__Ops_9);
                }
#line 4706 "term_io.c"
                mercury__term_io__V_79_79 = ((MR_Integer) mercury__term_io__conv2_V_79_79);
#line 344 "term_io.m"
                {
#line 344 "term_io.m"
                  mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_52, mercury__term_io__TypeClassInfo_for_op_table_51, mercury__term_io__Ops_9, mercury__term_io__ListHead_17, mercury__term_io__V_79_79, mercury__term_io__STATE_VARIABLE_VarSet_0_21, &mercury__term_io__STATE_VARIABLE_VarSet_37_37, mercury__term_io__STATE_VARIABLE_N_0_23, &mercury__term_io__STATE_VARIABLE_N_38_38);
                }
#line 505 "term_io.m"
                /* direct tailcall eliminated */
#line 505 "term_io.m"
                {
#line 505 "term_io.m"
                  MR_Word mercury__term_io__Term__tmp_copy_10 = mercury__term_io__ListTail_18;
#line 505 "term_io.m"
                  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_21 = mercury__term_io__STATE_VARIABLE_VarSet_37_37;
#line 505 "term_io.m"
                  MR_Integer mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_23 = mercury__term_io__STATE_VARIABLE_N_38_38;

#line 505 "term_io.m"
                  mercury__term_io__STATE_VARIABLE_N_0_23 = mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_23;
#line 505 "term_io.m"
                  mercury__term_io__STATE_VARIABLE_VarSet_0_21 = mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_21;
#line 505 "term_io.m"
                  mercury__term_io__Term_10 = mercury__term_io__Term__tmp_copy_10;
#line 505 "term_io.m"
                }
#line 505 "term_io.m"
                continue;
#line 503 "term_io.m"
              }
#line 506 "term_io.m"
            else
#line 510 "term_io.m"
              {
#line 507 "term_io.m"
                MR_Word mercury__term_io__V_43_43;
#line 507 "term_io.m"
                MR_String mercury__term_io__V_44_44;
#line 507 "term_io.m"
                MR_Word mercury__term_io__V_45_45;
#line 507 "term_io.m"
                MR_Word mercury__term_io__V_20_20;

#line 507 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 507 "term_io.m"
                if (mercury__term_io__succeeded)
#line 507 "term_io.m"
                  {
#line 507 "term_io.m"
                    mercury__term_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 0)));
#line 507 "term_io.m"
                    mercury__term_io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 1)));
#line 507 "term_io.m"
                    mercury__term_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 2)));
#line 507 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 507 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 507 "term_io.m"
                      {
#line 507 "term_io.m"
                        mercury__term_io__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_43_43, (MR_Integer) 0)));
#line 507 "term_io.m"
                        mercury__term_io__succeeded = (strcmp(mercury__term_io__V_44_44, (MR_String) "[]") == 0);
#line 507 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 507 "term_io.m"
                          mercury__term_io__succeeded = (mercury__term_io__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "term_io.m"
                      }
#line 507 "term_io.m"
                  }
#line 510 "term_io.m"
                if (mercury__term_io__succeeded)
#line 509 "term_io.m"
                  {
#line 509 "term_io.m"
                    *mercury__term_io__STATE_VARIABLE_N_24 = mercury__term_io__STATE_VARIABLE_N_0_23;
#line 509 "term_io.m"
                    *mercury__term_io__STATE_VARIABLE_VarSet_22 = mercury__term_io__STATE_VARIABLE_VarSet_0_21;
#line 509 "term_io.m"
                  }
#line 510 "term_io.m"
                else
#line 511 "term_io.m"
                  {
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_list_tail_8_p_0

	MR_String Message;

	Message =  (MR_String) " | " ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4805 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 512 "term_io.m"
                    {
#line 512 "term_io.m"
                      mercury__term_io__write_term_2_8_p_0(mercury__term_io__TypeInfo_for_T_52, mercury__term_io__TypeClassInfo_for_op_table_51, mercury__term_io__Ops_9, mercury__term_io__Term_10, mercury__term_io__STATE_VARIABLE_VarSet_0_21, mercury__term_io__STATE_VARIABLE_VarSet_22, mercury__term_io__STATE_VARIABLE_N_0_23, mercury__term_io__STATE_VARIABLE_N_24);
#line 512 "term_io.m"
                      return;
                    }
#line 511 "term_io.m"
                  }
#line 510 "term_io.m"
              }
#line 506 "term_io.m"
          }
#line 500 "term_io.m"
      }
#line 500 "term_io.m"
      break;
#line 500 "term_io.m"
    }
#line 490 "term_io.m"
}

#line 347 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_3_9_p_0(
#line 347 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_223,
#line 347 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_222,
#line 347 "term_io.m"
  MR_Box mercury__term_io__Ops_1,
#line 347 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 347 "term_io.m"
  MR_Integer mercury__term_io__Priority_3,
#line 347 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_4,
#line 347 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_5,
#line 347 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_6,
#line 347 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_7)
#line 347 "term_io.m"
{
#line 351 "term_io.m"
  {
#line 351 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 351 "term_io.m"
    if (((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 354 "term_io.m"
      {
#line 354 "term_io.m"
        MR_Word mercury__term_io__Functor_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 354 "term_io.m"
        MR_Word mercury__term_io__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 353 "term_io.m"
        MR_Word mercury__term_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__2_2, (MR_Integer) 2)));
#line 363 "term_io.m"
        MR_Word mercury__term_io__ListHead_34;
#line 363 "term_io.m"
        MR_Word mercury__term_io__ListTail_35;
#line 356 "term_io.m"
        MR_String mercury__term_io__V_70_70;
#line 356 "term_io.m"
        MR_Word mercury__term_io__V_71_71;
#line 356 "term_io.m"
        MR_Word mercury__term_io__V_72_72;

#line 356 "term_io.m"
        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 356 "term_io.m"
        if (mercury__term_io__succeeded)
#line 356 "term_io.m"
          {
#line 356 "term_io.m"
            mercury__term_io__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 356 "term_io.m"
            mercury__term_io__succeeded = (strcmp(mercury__term_io__V_70_70, (MR_String) "[|]") == 0);
#line 356 "term_io.m"
            if (mercury__term_io__succeeded)
#line 356 "term_io.m"
              {
#line 357 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 357 "term_io.m"
                if (mercury__term_io__succeeded)
#line 357 "term_io.m"
                  {
#line 357 "term_io.m"
                    mercury__term_io__ListHead_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 357 "term_io.m"
                    mercury__term_io__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 357 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 357 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 357 "term_io.m"
                      {
#line 357 "term_io.m"
                        mercury__term_io__ListTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_71_71, (MR_Integer) 0)));
#line 357 "term_io.m"
                        mercury__term_io__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_71_71, (MR_Integer) 1)));
#line 357 "term_io.m"
                        mercury__term_io__succeeded = (mercury__term_io__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "term_io.m"
                      }
#line 357 "term_io.m"
                  }
#line 356 "term_io.m"
              }
#line 356 "term_io.m"
          }
#line 363 "term_io.m"
        if (mercury__term_io__succeeded)
#line 359 "term_io.m"
          {
#line 359 "term_io.m"
            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_75_75;
#line 359 "term_io.m"
            MR_Integer mercury__term_io__STATE_VARIABLE_N_76_76;

#line 359 "term_io.m"
            {
#line 359 "term_io.m"
              mercury__io__write_char_3_p_0((MR_Char) 91);
            }
#line 360 "term_io.m"
            {
#line 360 "term_io.m"
              mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__ListHead_34, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_75_75, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_76_76);
            }
#line 361 "term_io.m"
            {
#line 361 "term_io.m"
              mercury__term_io__write_list_tail_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__ListTail_35, mercury__term_io__STATE_VARIABLE_VarSet_75_75, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_76_76, mercury__term_io__STATE_VARIABLE_N_7);
            }
#line 362 "term_io.m"
            {
#line 362 "term_io.m"
              mercury__io__write_char_3_p_0((MR_Char) 93);
#line 362 "term_io.m"
              return;
            }
#line 359 "term_io.m"
          }
#line 363 "term_io.m"
        else
#line 368 "term_io.m"
          {
#line 364 "term_io.m"
            MR_String mercury__term_io__V_83_83;

#line 364 "term_io.m"
            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 364 "term_io.m"
            if (mercury__term_io__succeeded)
#line 364 "term_io.m"
              {
#line 364 "term_io.m"
                mercury__term_io__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 364 "term_io.m"
                mercury__term_io__succeeded = (strcmp(mercury__term_io__V_83_83, (MR_String) "[]") == 0);
#line 364 "term_io.m"
                if (mercury__term_io__succeeded)
#line 365 "term_io.m"
                  mercury__term_io__succeeded = (mercury__term_io__Args_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "term_io.m"
              }
#line 368 "term_io.m"
            if (mercury__term_io__succeeded)
#line 367 "term_io.m"
              {
#line 367 "term_io.m"
                {
#line 367 "term_io.m"
                  mercury__io__write_string_3_p_0((MR_String) "[]");
                }
#line 367 "term_io.m"
                *mercury__term_io__STATE_VARIABLE_N_7 = mercury__term_io__STATE_VARIABLE_N_0_6;
#line 367 "term_io.m"
                *mercury__term_io__STATE_VARIABLE_VarSet_5 = mercury__term_io__STATE_VARIABLE_VarSet_0_4;
#line 367 "term_io.m"
              }
#line 368 "term_io.m"
            else
#line 375 "term_io.m"
              {
#line 375 "term_io.m"
                MR_Word mercury__term_io__BracedTerm_36;
#line 369 "term_io.m"
                MR_String mercury__term_io__V_86_86;
#line 369 "term_io.m"
                MR_Word mercury__term_io__V_87_87;

#line 369 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 369 "term_io.m"
                if (mercury__term_io__succeeded)
#line 369 "term_io.m"
                  {
#line 369 "term_io.m"
                    mercury__term_io__V_86_86 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 369 "term_io.m"
                    mercury__term_io__succeeded = (strcmp(mercury__term_io__V_86_86, (MR_String) "{}") == 0);
#line 369 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 369 "term_io.m"
                      {
#line 370 "term_io.m"
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 370 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 370 "term_io.m"
                          {
#line 370 "term_io.m"
                            mercury__term_io__BracedTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 370 "term_io.m"
                            mercury__term_io__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 370 "term_io.m"
                            mercury__term_io__succeeded = (mercury__term_io__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "term_io.m"
                          }
#line 369 "term_io.m"
                      }
#line 369 "term_io.m"
                  }
#line 375 "term_io.m"
                if (mercury__term_io__succeeded)
#line 372 "term_io.m"
                  {
#line 372 "term_io.m"
                    {
#line 372 "term_io.m"
                      mercury__io__write_string_3_p_0((MR_String) "{ ");
                    }
#line 373 "term_io.m"
                    {
#line 373 "term_io.m"
                      mercury__term_io__write_term_2_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__BracedTerm_36, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
                    }
#line 374 "term_io.m"
                    {
#line 374 "term_io.m"
                      mercury__io__write_string_3_p_0((MR_String) " }");
#line 374 "term_io.m"
                      return;
                    }
#line 372 "term_io.m"
                  }
#line 375 "term_io.m"
                else
#line 383 "term_io.m"
                  {
#line 383 "term_io.m"
                    MR_Word mercury__term_io__BracedHead_37;
#line 383 "term_io.m"
                    MR_Word mercury__term_io__BracedTail_38;
#line 376 "term_io.m"
                    MR_String mercury__term_io__V_95_95;

#line 376 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 376 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 376 "term_io.m"
                      {
#line 376 "term_io.m"
                        mercury__term_io__V_95_95 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 376 "term_io.m"
                        mercury__term_io__succeeded = (strcmp(mercury__term_io__V_95_95, (MR_String) "{}") == 0);
#line 376 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 376 "term_io.m"
                          {
#line 377 "term_io.m"
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 377 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 377 "term_io.m"
                              {
#line 377 "term_io.m"
                                mercury__term_io__BracedHead_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 377 "term_io.m"
                                mercury__term_io__BracedTail_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 377 "term_io.m"
                              }
#line 376 "term_io.m"
                          }
#line 376 "term_io.m"
                      }
#line 383 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 379 "term_io.m"
                      {
#line 379 "term_io.m"
                        MR_Word mercury__term_io__STATE_VARIABLE_VarSet_98_98;
#line 379 "term_io.m"
                        MR_Integer mercury__term_io__STATE_VARIABLE_N_99_99;

#line 379 "term_io.m"
                        {
#line 379 "term_io.m"
                          mercury__io__write_char_3_p_0((MR_Char) 123);
                        }
#line 380 "term_io.m"
                        {
#line 380 "term_io.m"
                          mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__BracedHead_37, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_98_98, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_99_99);
                        }
#line 381 "term_io.m"
                        {
#line 381 "term_io.m"
                          mercury__term_io__write_term_args_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__BracedTail_38, mercury__term_io__STATE_VARIABLE_VarSet_98_98, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_99_99, mercury__term_io__STATE_VARIABLE_N_7);
                        }
#line 382 "term_io.m"
                        {
#line 382 "term_io.m"
                          mercury__io__write_char_3_p_0((MR_Char) 125);
#line 382 "term_io.m"
                          return;
                        }
#line 379 "term_io.m"
                      }
#line 383 "term_io.m"
                    else
#line 395 "term_io.m"
                      {
#line 395 "term_io.m"
                        MR_Word mercury__term_io__Var_39;
#line 395 "term_io.m"
                        MR_Word mercury__term_io__FirstArg_41;
#line 395 "term_io.m"
                        MR_Word mercury__term_io__OtherArgs_42;
#line 387 "term_io.m"
                        MR_String mercury__term_io__V_106_106;
#line 387 "term_io.m"
                        MR_Word mercury__term_io__V_107_107;
#line 387 "term_io.m"
                        MR_Word mercury__term_io__V_108_108;
#line 388 "term_io.m"
                        MR_Word mercury__term_io__V_40_40;

#line 387 "term_io.m"
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 387 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 387 "term_io.m"
                          {
#line 387 "term_io.m"
                            mercury__term_io__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 387 "term_io.m"
                            mercury__term_io__succeeded = (strcmp(mercury__term_io__V_106_106, (MR_String) "") == 0);
#line 387 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 387 "term_io.m"
                              {
#line 388 "term_io.m"
                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 388 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 388 "term_io.m"
                                  {
#line 388 "term_io.m"
                                    mercury__term_io__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 388 "term_io.m"
                                    mercury__term_io__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 388 "term_io.m"
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_107_107)) == (MR_mktag((MR_Integer) 1)));
#line 388 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 388 "term_io.m"
                                      {
#line 388 "term_io.m"
                                        mercury__term_io__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_107_107, (MR_Integer) 0)));
#line 388 "term_io.m"
                                        mercury__term_io__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_107_107, (MR_Integer) 1)));
#line 388 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_108_108)) == (MR_mktag((MR_Integer) 1)));
#line 388 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 388 "term_io.m"
                                          {
#line 388 "term_io.m"
                                            mercury__term_io__FirstArg_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_108_108, (MR_Integer) 0)));
#line 388 "term_io.m"
                                            mercury__term_io__OtherArgs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_108_108, (MR_Integer) 1)));
#line 388 "term_io.m"
                                          }
#line 388 "term_io.m"
                                      }
#line 388 "term_io.m"
                                  }
#line 387 "term_io.m"
                              }
#line 387 "term_io.m"
                          }
#line 395 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 390 "term_io.m"
                          {
#line 390 "term_io.m"
                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_109_109;
#line 390 "term_io.m"
                            MR_Integer mercury__term_io__STATE_VARIABLE_N_110_110;
#line 390 "term_io.m"
                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_114_114;
#line 390 "term_io.m"
                            MR_Integer mercury__term_io__STATE_VARIABLE_N_115_115;

#line 390 "term_io.m"
                            {
#line 390 "term_io.m"
                              mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Var_39, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_109_109, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_110_110);
                            }
#line 391 "term_io.m"
                            {
#line 391 "term_io.m"
                              mercury__io__write_char_3_p_0((MR_Char) 40);
                            }
#line 392 "term_io.m"
                            {
#line 392 "term_io.m"
                              mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__FirstArg_41, mercury__term_io__STATE_VARIABLE_VarSet_109_109, &mercury__term_io__STATE_VARIABLE_VarSet_114_114, mercury__term_io__STATE_VARIABLE_N_110_110, &mercury__term_io__STATE_VARIABLE_N_115_115);
                            }
#line 393 "term_io.m"
                            {
#line 393 "term_io.m"
                              mercury__term_io__write_term_args_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OtherArgs_42, mercury__term_io__STATE_VARIABLE_VarSet_114_114, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_115_115, mercury__term_io__STATE_VARIABLE_N_7);
                            }
#line 394 "term_io.m"
                            {
#line 394 "term_io.m"
                              mercury__io__write_char_3_p_0((MR_Char) 41);
#line 394 "term_io.m"
                              return;
                            }
#line 390 "term_io.m"
                          }
#line 395 "term_io.m"
                        else
#line 407 "term_io.m"
                          {
#line 407 "term_io.m"
                            MR_Word mercury__term_io__PrefixArg_43;
#line 407 "term_io.m"
                            MR_Integer mercury__term_io__OpPriority_45;
#line 407 "term_io.m"
                            MR_Word mercury__term_io__OpAssoc_46;
#line 396 "term_io.m"
                            MR_String mercury__term_io__OpName_44;
#line 396 "term_io.m"
                            MR_Word mercury__term_io__V_122_122;

#line 396 "term_io.m"
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 396 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 396 "term_io.m"
                              {
#line 396 "term_io.m"
                                mercury__term_io__PrefixArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 396 "term_io.m"
                                mercury__term_io__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 396 "term_io.m"
                                mercury__term_io__succeeded = (mercury__term_io__V_122_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 396 "term_io.m"
                                  {
#line 397 "term_io.m"
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 397 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 397 "term_io.m"
                                      {
#line 397 "term_io.m"
                                        mercury__term_io__OpName_44 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 398 "term_io.m"
                                        {
#line 398 "term_io.m"
                                          mercury__term_io__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_44, &mercury__term_io__OpPriority_45, &mercury__term_io__OpAssoc_46);
                                        }
#line 397 "term_io.m"
                                      }
#line 396 "term_io.m"
                                  }
#line 396 "term_io.m"
                              }
#line 407 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 400 "term_io.m"
                              {
#line 400 "term_io.m"
                                MR_Word mercury__term_io__TypeClassInfo_for_writer_225;
#line 400 "term_io.m"
                                MR_Word mercury__term_io__Stream_47;
#line 400 "term_io.m"
                                MR_Integer mercury__term_io__NewPriority_48;

#line 400 "term_io.m"
                                {
#line 400 "term_io.m"
                                  mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_47);
                                }
#line 5318 "term_io.c"
                                mercury__term_io__TypeClassInfo_for_writer_225 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 33 "stream.string_writer.opt"
                                mercury__term_io__succeeded = (mercury__term_io__OpPriority_45 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                if (mercury__term_io__succeeded)
#line 5324 "term_io.c"
                                  {
#line 5326 "term_io.c"
                                    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_225, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5328 "term_io.c"
                                    MR_Box mercury__term_io__conv1_STATE_VARIABLE_IO_125_125;

#line 5331 "term_io.c"
                                    {
#line 5333 "term_io.c"
                                      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_225), ((MR_Box) (mercury__term_io__Stream_47)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_IO_125_125);
                                    }
#line 5336 "term_io.c"
                                  }
#line 36 "stream.string_writer.opt"
                                else
#line 37 "stream.string_writer.opt"
                                  {
#line 37 "stream.string_writer.opt"
                                  }
#line 402 "term_io.m"
                                {
#line 402 "term_io.m"
                                  mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                }
#line 403 "term_io.m"
                                {
#line 403 "term_io.m"
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
#line 405 "term_io.m"
                                {
#line 405 "term_io.m"
                                  mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__PrefixArg_43, mercury__term_io__NewPriority_48, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
                                }
#line 33 "stream.string_writer.opt"
                                mercury__term_io__succeeded = (mercury__term_io__OpPriority_45 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                if (mercury__term_io__succeeded)
#line 5375 "term_io.c"
                                  {
#line 5377 "term_io.c"
                                    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_225, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5379 "term_io.c"
                                    MR_Box mercury__term_io__conv3_STATE_VARIABLE_IO_9;

#line 5382 "term_io.c"
                                    {
#line 5384 "term_io.c"
                                      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_225), ((MR_Box) (mercury__term_io__Stream_47)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_IO_9);
                                    }
#line 5387 "term_io.c"
                                  }
#line 36 "stream.string_writer.opt"
                                else
#line 37 "stream.string_writer.opt"
                                  {
#line 37 "stream.string_writer.opt"
                                  }
#line 400 "term_io.m"
                              }
#line 407 "term_io.m"
                            else
#line 419 "term_io.m"
                              {
#line 419 "term_io.m"
                                MR_Word mercury__term_io__PostfixArg_49;
#line 419 "term_io.m"
                                MR_Integer mercury__term_io__OpPriority_218;
#line 419 "term_io.m"
                                MR_Word mercury__term_io__OpAssoc_219;
#line 408 "term_io.m"
                                MR_Word mercury__term_io__V_134_134;
#line 408 "term_io.m"
                                MR_String mercury__term_io__OpName_203;

#line 408 "term_io.m"
                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 408 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 408 "term_io.m"
                                  {
#line 408 "term_io.m"
                                    mercury__term_io__PostfixArg_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 408 "term_io.m"
                                    mercury__term_io__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 408 "term_io.m"
                                    mercury__term_io__succeeded = (mercury__term_io__V_134_134 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 408 "term_io.m"
                                      {
#line 409 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 409 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 409 "term_io.m"
                                          {
#line 409 "term_io.m"
                                            mercury__term_io__OpName_203 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 410 "term_io.m"
                                            {
#line 410 "term_io.m"
                                              mercury__term_io__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_203, &mercury__term_io__OpPriority_218, &mercury__term_io__OpAssoc_219);
                                            }
#line 409 "term_io.m"
                                          }
#line 408 "term_io.m"
                                      }
#line 408 "term_io.m"
                                  }
#line 419 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 412 "term_io.m"
                                  {
#line 412 "term_io.m"
                                    MR_Word mercury__term_io__TypeClassInfo_for_writer_227;
#line 412 "term_io.m"
                                    MR_Word mercury__term_io__Stream_204;
#line 412 "term_io.m"
                                    MR_Integer mercury__term_io__NewPriority_205;

#line 412 "term_io.m"
                                    {
#line 412 "term_io.m"
                                      mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_204);
                                    }
#line 5463 "term_io.c"
                                    mercury__term_io__TypeClassInfo_for_writer_227 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 33 "stream.string_writer.opt"
                                    mercury__term_io__succeeded = (mercury__term_io__OpPriority_218 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                    if (mercury__term_io__succeeded)
#line 5469 "term_io.c"
                                      {
#line 5471 "term_io.c"
                                        void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_227, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5473 "term_io.c"
                                        MR_Box mercury__term_io__conv5_STATE_VARIABLE_IO_137_137;

#line 5476 "term_io.c"
                                        {
#line 5478 "term_io.c"
                                          mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_227), ((MR_Box) (mercury__term_io__Stream_204)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_IO_137_137);
                                        }
#line 5481 "term_io.c"
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
#line 415 "term_io.m"
                                    {
#line 415 "term_io.m"
                                      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__PostfixArg_49, mercury__term_io__NewPriority_205, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
                                    }
#line 416 "term_io.m"
                                    {
#line 416 "term_io.m"
                                      mercury__io__write_char_3_p_0((MR_Char) 32);
                                    }
#line 417 "term_io.m"
                                    {
#line 417 "term_io.m"
                                      mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                    }
#line 33 "stream.string_writer.opt"
                                    mercury__term_io__succeeded = (mercury__term_io__OpPriority_218 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                    if (mercury__term_io__succeeded)
#line 5520 "term_io.c"
                                      {
#line 5522 "term_io.c"
                                        void MR_CALL (* mercury__term_io__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_227, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5524 "term_io.c"
                                        MR_Box mercury__term_io__conv7_STATE_VARIABLE_IO_9;

#line 5527 "term_io.c"
                                        {
#line 5529 "term_io.c"
                                          mercury__term_io__func_6(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_227), ((MR_Box) (mercury__term_io__Stream_204)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv7_STATE_VARIABLE_IO_9);
                                        }
#line 5532 "term_io.c"
                                      }
#line 36 "stream.string_writer.opt"
                                    else
#line 37 "stream.string_writer.opt"
                                      {
#line 37 "stream.string_writer.opt"
                                      }
#line 412 "term_io.m"
                                  }
#line 419 "term_io.m"
                                else
#line 449 "term_io.m"
                                  {
#line 449 "term_io.m"
                                    MR_Word mercury__term_io__Arg1_50;
#line 449 "term_io.m"
                                    MR_Word mercury__term_io__Arg2_51;
#line 449 "term_io.m"
                                    MR_Word mercury__term_io__LeftAssoc_52;
#line 449 "term_io.m"
                                    MR_Word mercury__term_io__RightAssoc_53;
#line 449 "term_io.m"
                                    MR_String mercury__term_io__OpName_214;
#line 449 "term_io.m"
                                    MR_Integer mercury__term_io__OpPriority_215;
#line 420 "term_io.m"
                                    MR_Word mercury__term_io__V_146_146;
#line 420 "term_io.m"
                                    MR_Word mercury__term_io__V_147_147;

#line 420 "term_io.m"
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 420 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 420 "term_io.m"
                                      {
#line 420 "term_io.m"
                                        mercury__term_io__Arg1_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 420 "term_io.m"
                                        mercury__term_io__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 420 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_146_146)) == (MR_mktag((MR_Integer) 1)));
#line 420 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 420 "term_io.m"
                                          {
#line 420 "term_io.m"
                                            mercury__term_io__Arg2_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_146_146, (MR_Integer) 0)));
#line 420 "term_io.m"
                                            mercury__term_io__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_146_146, (MR_Integer) 1)));
#line 420 "term_io.m"
                                            mercury__term_io__succeeded = (mercury__term_io__V_147_147 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 420 "term_io.m"
                                              {
#line 421 "term_io.m"
                                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 421 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 421 "term_io.m"
                                                  {
#line 421 "term_io.m"
                                                    mercury__term_io__OpName_214 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 422 "term_io.m"
                                                    {
#line 422 "term_io.m"
                                                      mercury__term_io__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_214, &mercury__term_io__OpPriority_215, &mercury__term_io__LeftAssoc_52, &mercury__term_io__RightAssoc_53);
                                                    }
#line 421 "term_io.m"
                                                  }
#line 420 "term_io.m"
                                              }
#line 420 "term_io.m"
                                          }
#line 420 "term_io.m"
                                      }
#line 449 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 424 "term_io.m"
                                      {
#line 424 "term_io.m"
                                        MR_Word mercury__term_io__TypeClassInfo_for_writer_229;
#line 424 "term_io.m"
                                        MR_Integer mercury__term_io__LeftPriority_54;
#line 424 "term_io.m"
                                        MR_Integer mercury__term_io__RightPriority_56;
#line 424 "term_io.m"
                                        MR_Word mercury__term_io__STATE_VARIABLE_VarSet_151_151;
#line 424 "term_io.m"
                                        MR_Integer mercury__term_io__STATE_VARIABLE_N_152_152;
#line 424 "term_io.m"
                                        MR_Word mercury__term_io__Stream_206;

#line 424 "term_io.m"
                                        {
#line 424 "term_io.m"
                                          mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_206);
                                        }
#line 5632 "term_io.c"
                                        mercury__term_io__TypeClassInfo_for_writer_229 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 33 "stream.string_writer.opt"
                                        mercury__term_io__succeeded = (mercury__term_io__OpPriority_215 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                        if (mercury__term_io__succeeded)
#line 5638 "term_io.c"
                                          {
#line 5640 "term_io.c"
                                            void MR_CALL (* mercury__term_io__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_229, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5642 "term_io.c"
                                            MR_Box mercury__term_io__conv9_STATE_VARIABLE_IO_150_150;

#line 5645 "term_io.c"
                                            {
#line 5647 "term_io.c"
                                              mercury__term_io__func_8(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_229), ((MR_Box) (mercury__term_io__Stream_206)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv9_STATE_VARIABLE_IO_150_150);
                                            }
#line 5650 "term_io.c"
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
#line 427 "term_io.m"
                                        {
#line 427 "term_io.m"
                                          mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg1_50, mercury__term_io__LeftPriority_54, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_151_151, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_152_152);
                                        }
#line 428 "term_io.m"
                                        mercury__term_io__succeeded = (strcmp(mercury__term_io__OpName_214, (MR_String) ",") == 0);
#line 430 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 429 "term_io.m"
                                          {
#line 429 "term_io.m"
                                            {
#line 429 "term_io.m"
                                              mercury__io__write_string_3_p_0((MR_String) ", ");
                                            }
#line 429 "term_io.m"
                                          }
#line 430 "term_io.m"
                                        else
#line 441 "term_io.m"
                                          {
#line 430 "term_io.m"
                                            mercury__term_io__succeeded = (strcmp(mercury__term_io__OpName_214, (MR_String) ".") == 0);
#line 441 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 439 "term_io.m"
                                              {
#line 439 "term_io.m"
                                                MR_String mercury__term_io__Dot_55;

#line 435 "term_io.m"
                                                {
#line 435 "term_io.m"
                                                  mercury__term_io__succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(mercury__term_io__Arg2_51);
                                                }
#line 437 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 436 "term_io.m"
                                                  mercury__term_io__Dot_55 = (MR_String) "\'.\'";
#line 437 "term_io.m"
                                                else
#line 438 "term_io.m"
                                                  mercury__term_io__Dot_55 = (MR_String) ".";
#line 440 "term_io.m"
                                                {
#line 440 "term_io.m"
                                                  mercury__io__write_string_3_p_0(mercury__term_io__Dot_55);
                                                }
#line 439 "term_io.m"
                                              }
#line 441 "term_io.m"
                                            else
#line 442 "term_io.m"
                                              {
#line 442 "term_io.m"
                                                {
#line 442 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 32);
                                                }
#line 443 "term_io.m"
                                                {
#line 443 "term_io.m"
                                                  mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                                }
#line 444 "term_io.m"
                                                {
#line 444 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 32);
                                                }
#line 442 "term_io.m"
                                              }
#line 441 "term_io.m"
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
#line 447 "term_io.m"
                                        {
#line 447 "term_io.m"
                                          mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg2_51, mercury__term_io__RightPriority_56, mercury__term_io__STATE_VARIABLE_VarSet_151_151, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_152_152, mercury__term_io__STATE_VARIABLE_N_7);
                                        }
#line 33 "stream.string_writer.opt"
                                        mercury__term_io__succeeded = (mercury__term_io__OpPriority_215 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                        if (mercury__term_io__succeeded)
#line 5765 "term_io.c"
                                          {
#line 5767 "term_io.c"
                                            void MR_CALL (* mercury__term_io__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_229, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5769 "term_io.c"
                                            MR_Box mercury__term_io__conv11_STATE_VARIABLE_IO_9;

#line 5772 "term_io.c"
                                            {
#line 5774 "term_io.c"
                                              mercury__term_io__func_10(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_229), ((MR_Box) (mercury__term_io__Stream_206)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv11_STATE_VARIABLE_IO_9);
                                            }
#line 5777 "term_io.c"
                                          }
#line 36 "stream.string_writer.opt"
                                        else
#line 37 "stream.string_writer.opt"
                                          {
#line 37 "stream.string_writer.opt"
                                          }
#line 424 "term_io.m"
                                      }
#line 449 "term_io.m"
                                    else
#line 465 "term_io.m"
                                      {
#line 465 "term_io.m"
                                        MR_Word mercury__term_io__FirstAssoc_57;
#line 465 "term_io.m"
                                        MR_Word mercury__term_io__SecondAssoc_58;
#line 465 "term_io.m"
                                        MR_Integer mercury__term_io__OpPriority_210;
#line 465 "term_io.m"
                                        MR_Word mercury__term_io__Arg1_212;
#line 465 "term_io.m"
                                        MR_Word mercury__term_io__Arg2_213;
#line 450 "term_io.m"
                                        MR_Word mercury__term_io__V_167_167;
#line 450 "term_io.m"
                                        MR_Word mercury__term_io__V_168_168;
#line 450 "term_io.m"
                                        MR_String mercury__term_io__OpName_207;

#line 450 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 450 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 450 "term_io.m"
                                          {
#line 450 "term_io.m"
                                            mercury__term_io__Arg1_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 450 "term_io.m"
                                            mercury__term_io__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 450 "term_io.m"
                                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_167_167)) == (MR_mktag((MR_Integer) 1)));
#line 450 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 450 "term_io.m"
                                              {
#line 450 "term_io.m"
                                                mercury__term_io__Arg2_213 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_167_167, (MR_Integer) 0)));
#line 450 "term_io.m"
                                                mercury__term_io__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_167_167, (MR_Integer) 1)));
#line 450 "term_io.m"
                                                mercury__term_io__succeeded = (mercury__term_io__V_168_168 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 450 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 450 "term_io.m"
                                                  {
#line 451 "term_io.m"
                                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 451 "term_io.m"
                                                    if (mercury__term_io__succeeded)
#line 451 "term_io.m"
                                                      {
#line 451 "term_io.m"
                                                        mercury__term_io__OpName_207 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 452 "term_io.m"
                                                        {
#line 452 "term_io.m"
                                                          mercury__term_io__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_207, &mercury__term_io__OpPriority_210, &mercury__term_io__FirstAssoc_57, &mercury__term_io__SecondAssoc_58);
                                                        }
#line 451 "term_io.m"
                                                      }
#line 450 "term_io.m"
                                                  }
#line 450 "term_io.m"
                                              }
#line 450 "term_io.m"
                                          }
#line 465 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 455 "term_io.m"
                                          {
#line 455 "term_io.m"
                                            MR_Word mercury__term_io__TypeClassInfo_for_writer_231;
#line 455 "term_io.m"
                                            MR_Integer mercury__term_io__FirstPriority_59;
#line 455 "term_io.m"
                                            MR_Integer mercury__term_io__SecondPriority_60;
#line 455 "term_io.m"
                                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_175_175;
#line 455 "term_io.m"
                                            MR_Integer mercury__term_io__STATE_VARIABLE_N_176_176;
#line 455 "term_io.m"
                                            MR_Word mercury__term_io__Stream_208;

#line 455 "term_io.m"
                                            {
#line 455 "term_io.m"
                                              mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_208);
                                            }
#line 5877 "term_io.c"
                                            mercury__term_io__TypeClassInfo_for_writer_231 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 33 "stream.string_writer.opt"
                                            mercury__term_io__succeeded = (mercury__term_io__OpPriority_210 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                            if (mercury__term_io__succeeded)
#line 5883 "term_io.c"
                                              {
#line 5885 "term_io.c"
                                                void MR_CALL (* mercury__term_io__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_231, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5887 "term_io.c"
                                                MR_Box mercury__term_io__conv13_STATE_VARIABLE_IO_171_171;

#line 5890 "term_io.c"
                                                {
#line 5892 "term_io.c"
                                                  mercury__term_io__func_12(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_231), ((MR_Box) (mercury__term_io__Stream_208)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv13_STATE_VARIABLE_IO_171_171);
                                                }
#line 5895 "term_io.c"
                                              }
#line 36 "stream.string_writer.opt"
                                            else
#line 37 "stream.string_writer.opt"
                                              {
#line 37 "stream.string_writer.opt"
                                              }
#line 457 "term_io.m"
                                            {
#line 457 "term_io.m"
                                              mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                            }
#line 458 "term_io.m"
                                            {
#line 458 "term_io.m"
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
#line 460 "term_io.m"
                                            {
#line 460 "term_io.m"
                                              mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg1_212, mercury__term_io__FirstPriority_59, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_175_175, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_176_176);
                                            }
#line 461 "term_io.m"
                                            {
#line 461 "term_io.m"
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
#line 463 "term_io.m"
                                            {
#line 463 "term_io.m"
                                              mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg2_213, mercury__term_io__SecondPriority_60, mercury__term_io__STATE_VARIABLE_VarSet_175_175, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_176_176, mercury__term_io__STATE_VARIABLE_N_7);
                                            }
#line 33 "stream.string_writer.opt"
                                            mercury__term_io__succeeded = (mercury__term_io__OpPriority_210 > mercury__term_io__Priority_3);
#line 36 "stream.string_writer.opt"
                                            if (mercury__term_io__succeeded)
#line 5956 "term_io.c"
                                              {
#line 5958 "term_io.c"
                                                void MR_CALL (* mercury__term_io__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_231, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5960 "term_io.c"
                                                MR_Box mercury__term_io__conv15_STATE_VARIABLE_IO_9;

#line 5963 "term_io.c"
                                                {
#line 5965 "term_io.c"
                                                  mercury__term_io__func_14(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_231), ((MR_Box) (mercury__term_io__Stream_208)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv15_STATE_VARIABLE_IO_9);
                                                }
#line 5968 "term_io.c"
                                              }
#line 36 "stream.string_writer.opt"
                                            else
#line 37 "stream.string_writer.opt"
                                              {
#line 37 "stream.string_writer.opt"
                                              }
#line 455 "term_io.m"
                                          }
#line 465 "term_io.m"
                                        else
#line 478 "term_io.m"
                                          {
#line 467 "term_io.m"
                                            MR_String mercury__term_io__Op_61;
#line 467 "term_io.m"
                                            MR_Integer mercury__term_io__V_185_185;

#line 467 "term_io.m"
                                            mercury__term_io__succeeded = (mercury__term_io__Args_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 467 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 467 "term_io.m"
                                              {
#line 468 "term_io.m"
                                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 468 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 468 "term_io.m"
                                                  {
#line 468 "term_io.m"
                                                    mercury__term_io__Op_61 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 469 "term_io.m"
                                                    {
#line 469 "term_io.m"
                                                      mercury__term_io__succeeded = mercury__ops__lookup_op_2_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Op_61);
                                                    }
#line 467 "term_io.m"
                                                    if (mercury__term_io__succeeded)
#line 467 "term_io.m"
                                                      {
#line 470 "term_io.m"
                                                        {
#line 470 "term_io.m"
                                                          mercury__term_io__V_185_185 = mercury__ops__max_priority_1_f_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1);
                                                        }
#line 470 "term_io.m"
                                                        mercury__term_io__succeeded = (mercury__term_io__Priority_3 <= mercury__term_io__V_185_185);
#line 467 "term_io.m"
                                                      }
#line 468 "term_io.m"
                                                  }
#line 467 "term_io.m"
                                              }
#line 475 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 472 "term_io.m"
                                              {
#line 472 "term_io.m"
                                                {
#line 472 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 40);
                                                }
#line 473 "term_io.m"
                                                {
#line 473 "term_io.m"
                                                  mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                                }
#line 474 "term_io.m"
                                                {
#line 474 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 41);
                                                }
#line 472 "term_io.m"
                                              }
#line 475 "term_io.m"
                                            else
#line 476 "term_io.m"
                                              {
#line 476 "term_io.m"
                                                {
#line 476 "term_io.m"
                                                  mercury__term_io__write_constant_4_p_0(mercury__term_io__Functor_27, (MR_Integer) 0);
                                                }
#line 476 "term_io.m"
                                              }
#line 485 "term_io.m"
                                            if ((mercury__term_io__Args_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "term_io.m"
                                              {
#line 486 "term_io.m"
                                                *mercury__term_io__STATE_VARIABLE_VarSet_5 = mercury__term_io__STATE_VARIABLE_VarSet_0_4;
#line 486 "term_io.m"
                                                *mercury__term_io__STATE_VARIABLE_N_7 = mercury__term_io__STATE_VARIABLE_N_0_6;
#line 486 "term_io.m"
                                              }
#line 485 "term_io.m"
                                            else
#line 480 "term_io.m"
                                              {
#line 480 "term_io.m"
                                                MR_Word mercury__term_io__X_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 480 "term_io.m"
                                                MR_Word mercury__term_io__Xs_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 480 "term_io.m"
                                                MR_Word mercury__term_io__STATE_VARIABLE_VarSet_195_195;
#line 480 "term_io.m"
                                                MR_Integer mercury__term_io__STATE_VARIABLE_N_196_196;

#line 481 "term_io.m"
                                                {
#line 481 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 40);
                                                }
#line 482 "term_io.m"
                                                {
#line 482 "term_io.m"
                                                  mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__X_62, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_195_195, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_196_196);
                                                }
#line 483 "term_io.m"
                                                {
#line 483 "term_io.m"
                                                  mercury__term_io__write_term_args_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Xs_63, mercury__term_io__STATE_VARIABLE_VarSet_195_195, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_196_196, mercury__term_io__STATE_VARIABLE_N_7);
                                                }
#line 484 "term_io.m"
                                                {
#line 484 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 41);
#line 484 "term_io.m"
                                                  return;
                                                }
#line 480 "term_io.m"
                                              }
#line 478 "term_io.m"
                                          }
#line 465 "term_io.m"
                                      }
#line 449 "term_io.m"
                                  }
#line 419 "term_io.m"
                              }
#line 407 "term_io.m"
                          }
#line 395 "term_io.m"
                      }
#line 383 "term_io.m"
                  }
#line 375 "term_io.m"
              }
#line 368 "term_io.m"
          }
#line 354 "term_io.m"
      }
#line 351 "term_io.m"
    else
#line 351 "term_io.m"
      {
#line 351 "term_io.m"
        MR_Word mercury__term_io__Id_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 351 "term_io.m"
        MR_Word mercury__term_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));

#line 352 "term_io.m"
        {
#line 352 "term_io.m"
          mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Id_11, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
#line 352 "term_io.m"
          return;
        }
#line 351 "term_io.m"
      }
#line 351 "term_io.m"
  }
#line 347 "term_io.m"
}

#line 339 "term_io.m"
static void MR_CALL 
mercury__term_io__write_arg_term_8_p_0(
#line 339 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_25,
#line 339 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_24,
#line 339 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 339 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 339 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_14,
#line 339 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_15,
#line 339 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_16,
#line 339 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_17)
#line 339 "term_io.m"
{
#line 343 "term_io.m"
  {
#line 343 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 343 "term_io.m"
    MR_Integer mercury__term_io__V_20_20;
#line 6172 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 13)));
#line 6174 "term_io.c"
    MR_Box mercury__term_io__conv1_V_20_20;

#line 6177 "term_io.c"
    {
#line 6179 "term_io.c"
      mercury__term_io__conv1_V_20_20 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_24), mercury__term_io__Ops_9);
    }
#line 6182 "term_io.c"
    mercury__term_io__V_20_20 = ((MR_Integer) mercury__term_io__conv1_V_20_20);
#line 344 "term_io.m"
    {
#line 344 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_25, mercury__term_io__TypeClassInfo_for_op_table_24, mercury__term_io__Ops_9, mercury__term_io__Term_10, mercury__term_io__V_20_20, mercury__term_io__STATE_VARIABLE_VarSet_0_14, mercury__term_io__STATE_VARIABLE_VarSet_15, mercury__term_io__STATE_VARIABLE_N_0_16, mercury__term_io__STATE_VARIABLE_N_17);
#line 344 "term_io.m"
      return;
    }
#line 343 "term_io.m"
  }
#line 339 "term_io.m"
}

#line 331 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_2_8_p_0(
#line 331 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_27,
#line 331 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_26,
#line 331 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 331 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 331 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_14,
#line 331 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_15,
#line 331 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_16,
#line 331 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_17)
#line 331 "term_io.m"
{
#line 335 "term_io.m"
  {
#line 335 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 335 "term_io.m"
    MR_Integer mercury__term_io__V_20_20;
#line 335 "term_io.m"
    MR_Integer mercury__term_io__V_24_24;
#line 6225 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 6227 "term_io.c"
    MR_Box mercury__term_io__conv1_V_24_24;

#line 6230 "term_io.c"
    {
#line 6232 "term_io.c"
      mercury__term_io__conv1_V_24_24 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_26), mercury__term_io__Ops_9);
    }
#line 6235 "term_io.c"
    mercury__term_io__V_24_24 = ((MR_Integer) mercury__term_io__conv1_V_24_24);
#line 336 "term_io.m"
    mercury__term_io__V_20_20 = (mercury__term_io__V_24_24 + (MR_Integer) 1);
#line 336 "term_io.m"
    {
#line 336 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_27, mercury__term_io__TypeClassInfo_for_op_table_26, mercury__term_io__Ops_9, mercury__term_io__Term_10, mercury__term_io__V_20_20, mercury__term_io__STATE_VARIABLE_VarSet_0_14, mercury__term_io__STATE_VARIABLE_VarSet_15, mercury__term_io__STATE_VARIABLE_N_0_16, mercury__term_io__STATE_VARIABLE_N_17);
#line 336 "term_io.m"
      return;
    }
#line 335 "term_io.m"
  }
#line 331 "term_io.m"
}

#line 302 "term_io.m"
void MR_CALL 
mercury__term_io__write_variable_2_8_p_0(
#line 302 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_35,
#line 302 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_34,
#line 302 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 302 "term_io.m"
  MR_Word mercury__term_io__Id_10,
#line 302 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_19,
#line 302 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_20,
#line 302 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_21,
#line 302 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_22)
#line 302 "term_io.m"
{
#line 309 "term_io.m"
  {
#line 309 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 309 "term_io.m"
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
#line 41 "map.opt"
    MR_Box mercury__term_io__conv0_Val_14;

#line 6295 "term_io.c"
    {
#line 6297 "term_io.c"
      mercury__term_io__TypeInfo_13_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6299 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_44, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_43));
#line 6301 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_44, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
#line 6303 "term_io.c"
    }
#line 6305 "term_io.c"
    {
#line 6307 "term_io.c"
      mercury__term_io__TypeInfo_15_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6309 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_46, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_14_45));
#line 6311 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_46, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
#line 6313 "term_io.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeInfo_13_44, mercury__term_io__TypeInfo_15_46, mercury__term_io__Values_7_41, mercury__term_io__Id_10, &mercury__term_io__conv0_Val_14);
    }
#line 41 "map.opt"
    if (mercury__term_io__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__term_io__Val_14 = ((MR_Word) mercury__term_io__conv0_Val_14);
#line 41 "map.opt"
        mercury__term_io__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 309 "term_io.m"
    if (mercury__term_io__succeeded)
#line 308 "term_io.m"
      {
#line 308 "term_io.m"
        mercury__term_io__write_term_2_8_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeClassInfo_for_op_table_34, mercury__term_io__Ops_9, mercury__term_io__Val_14, mercury__term_io__STATE_VARIABLE_VarSet_0_19, mercury__term_io__STATE_VARIABLE_VarSet_20, mercury__term_io__STATE_VARIABLE_N_0_21, mercury__term_io__STATE_VARIABLE_N_22);
#line 308 "term_io.m"
        return;
      }
#line 309 "term_io.m"
    else
#line 311 "term_io.m"
      {
#line 311 "term_io.m"
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
#line 41 "map.opt"
        MR_Box mercury__term_io__conv1_Name_15;

#line 6360 "term_io.c"
        {
#line 6362 "term_io.c"
          mercury__term_io__TypeInfo_11_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6364 "term_io.c"
          MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_11_57, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_10_56));
#line 6366 "term_io.c"
          MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_11_57, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
#line 6368 "term_io.c"
        }
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeInfo_11_57, mercury__term_io__TypeCtorInfo_12_58, mercury__term_io__Names_5_54, mercury__term_io__Id_10, &mercury__term_io__conv1_Name_15);
        }
#line 41 "map.opt"
        if (mercury__term_io__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__term_io__Name_15 = ((MR_String) mercury__term_io__conv1_Name_15);
#line 41 "map.opt"
            mercury__term_io__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 311 "term_io.m"
        if (mercury__term_io__succeeded)
#line 310 "term_io.m"
          {
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_variable_2_8_p_0

	MR_String Message;

	Message =  mercury__term_io__Name_15 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6401 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 310 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_N_22 = mercury__term_io__STATE_VARIABLE_N_0_21;
#line 310 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_VarSet_20 = mercury__term_io__STATE_VARIABLE_VarSet_0_19;
#line 310 "term_io.m"
          }
#line 311 "term_io.m"
        else
#line 314 "term_io.m"
          {
#line 314 "term_io.m"
            MR_Integer mercury__term_io__VarNum_16 = (MR_Integer) mercury__term_io__Id_10;
#line 314 "term_io.m"
            MR_String mercury__term_io__Num_17;
#line 314 "term_io.m"
            MR_String mercury__term_io__VarName_18;

#line 710 "string.opt"
            {
#line 710 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__term_io__VarNum_16, (MR_Integer) 10, &mercury__term_io__Num_17);
            }
#line 316 "term_io.m"
            {
#line 316 "term_io.m"
              mercury__string__append_3_p_2((MR_String) "_", mercury__term_io__Num_17, &mercury__term_io__VarName_18);
            }
#line 317 "term_io.m"
            {
#line 317 "term_io.m"
              mercury__varset__name_var_4_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__Id_10, mercury__term_io__VarName_18, mercury__term_io__STATE_VARIABLE_VarSet_0_19, mercury__term_io__STATE_VARIABLE_VarSet_20);
            }
#line 318 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_N_22 = (mercury__term_io__STATE_VARIABLE_N_0_21 + (MR_Integer) 1);
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_variable_2_8_p_0

	MR_String Message;

	Message =  mercury__term_io__VarName_18 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6453 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 314 "term_io.m"
          }
#line 311 "term_io.m"
      }
#line 309 "term_io.m"
  }
#line 302 "term_io.m"
}

#line 232 "term_io.m"
MR_String MR_CALL 
mercury__term_io__quoted_atom_agt_2_f_0(
#line 232 "term_io.m"
  MR_String mercury__term_io__S_4,
#line 232 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_5)
#line 232 "term_io.m"
{
#line 635 "term_io.m"
  {
#line 635 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 635 "term_io.m"
    MR_String mercury__term_io__String_6;
#line 635 "term_io.m"
    MR_Word mercury__term_io__ShouldQuote_7;

#line 656 "term_io.m"
    if ((strcmp(mercury__term_io__S_4, (MR_String) "!") == 0))
#line 661 "term_io.m"
      mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
    else
#line 656 "term_io.m"
      if ((strcmp(mercury__term_io__S_4, (MR_String) ";") == 0))
#line 658 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
      else
#line 656 "term_io.m"
        if ((strcmp(mercury__term_io__S_4, (MR_String) "[]") == 0))
#line 679 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
        else
#line 656 "term_io.m"
          if ((strcmp(mercury__term_io__S_4, (MR_String) "{}") == 0))
#line 682 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
          else
#line 656 "term_io.m"
            mercury__term_io__succeeded = MR_FALSE;
#line 656 "term_io.m"
    if (!(mercury__term_io__succeeded))
#line 656 "term_io.m"
      {
#line 664 "term_io.m"
        {
#line 669 "term_io.m"
          MR_Integer mercury__term_io__V_20_20;
#line 669 "term_io.m"
          MR_Char mercury__term_io__V_21_21;
#line 669 "term_io.m"
          MR_Char mercury__term_io__V_24_24;
#line 669 "term_io.m"
          MR_Integer mercury__term_io__Len_7_32;

#line 373 "string.opt"
          {
#line 373 "string.opt"
            mercury__term_io__succeeded = mercury__term_io__all_match_loop__ho22_3_p_in__string_0(mercury__term_io__S_4, (MR_Integer) 0);
          }
#line 664 "term_io.m"
          if (mercury__term_io__succeeded)
#line 664 "term_io.m"
            {
#line 665 "term_io.m"
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_4, (MR_String) "") == 0);
#line 665 "term_io.m"
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 664 "term_io.m"
              if (mercury__term_io__succeeded)
#line 664 "term_io.m"
                {
#line 669 "term_io.m"
                  mercury__term_io__V_20_20 = (MR_Integer) 0;
#line 669 "term_io.m"
                  mercury__term_io__V_21_21 = (MR_Char) 35;
#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_4 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 6561 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_32  = Length;
#line 246 "string.opt"
}
#line 767 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__V_20_20 ;
	Length =  mercury__term_io__Len_7_32 ;
		{
#line 767 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 6590 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 767 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 669 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 669 "term_io.m"
                    {
#line 163 "string.opt"
                      {
#line 163 "string.opt"
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_4, mercury__term_io__V_20_20, &mercury__term_io__V_24_24);
                      }
#line 669 "term_io.m"
                      mercury__term_io__succeeded = (mercury__term_io__V_21_21 == mercury__term_io__V_24_24);
#line 669 "term_io.m"
                    }
#line 669 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 664 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 676 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_5 == (MR_Integer) 1);
#line 664 "term_io.m"
                }
#line 664 "term_io.m"
            }
#line 664 "term_io.m"
        }
#line 656 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 653 "term_io.m"
          {
#line 653 "term_io.m"
            MR_Char mercury__term_io__FirstChar_18;
#line 653 "term_io.m"
            MR_Integer mercury__term_io__Len_7_38;
#line 110 "char.opt"
            MR_Char mercury__term_io__V_3_42;

#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_4 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 6648 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_38  = Length;
#line 246 "string.opt"
}
#line 767 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__Len_7_38 ;
		{
#line 767 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 6677 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 767 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 653 "term_io.m"
            if (mercury__term_io__succeeded)
#line 653 "term_io.m"
              {
#line 163 "string.opt"
                {
#line 163 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_4, (MR_Integer) 0, &mercury__term_io__FirstChar_18);
                }
#line 110 "char.opt"
                {
#line 110 "char.opt"
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_18, &mercury__term_io__V_3_42);
                }
#line 653 "term_io.m"
                if (mercury__term_io__succeeded)
#line 653 "term_io.m"
                  {
#line 323 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_4 ;
		{
#line 323 "string.opt"

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

#line 6746 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 323 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 653 "term_io.m"
                  }
#line 653 "term_io.m"
              }
#line 653 "term_io.m"
          }
#line 656 "term_io.m"
      }
#line 686 "term_io.m"
    if (mercury__term_io__succeeded)
#line 685 "term_io.m"
      mercury__term_io__ShouldQuote_7 = (MR_Integer) 0;
#line 686 "term_io.m"
    else
#line 688 "term_io.m"
      mercury__term_io__ShouldQuote_7 = (MR_Integer) 1;
#line 640 "term_io.m"
    if ((mercury__term_io__ShouldQuote_7 == (MR_Integer) 0))
#line 639 "term_io.m"
      mercury__term_io__String_6 = mercury__term_io__S_4;
#line 640 "term_io.m"
    else
#line 641 "term_io.m"
      {
#line 641 "term_io.m"
        MR_String mercury__term_io__ES_8;
#line 641 "term_io.m"
        MR_Word mercury__term_io__V_9_9;
#line 641 "term_io.m"
        MR_Word mercury__term_io__V_11_11;
#line 641 "term_io.m"
        MR_Word mercury__term_io__V_12_12;
#line 641 "term_io.m"
        MR_Word mercury__term_io__V_14_14;

#line 642 "term_io.m"
        {
#line 642 "term_io.m"
          mercury__term_io__ES_8 = mercury__term_io__escaped_string_1_f_0(mercury__term_io__S_4);
        }
#line 643 "term_io.m"
        mercury__term_io__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "term_io.m"
        mercury__term_io__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[3]);
#line 643 "term_io.m"
        {
#line 643 "term_io.m"
          mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 0) = ((MR_Box) (mercury__term_io__ES_8));
#line 643 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 1) = ((MR_Box) (mercury__term_io__V_12_12));
#line 643 "term_io.m"
        }
#line 643 "term_io.m"
        {
#line 643 "term_io.m"
          mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 0) = ((MR_Box) ((MR_String) "\'"));
#line 643 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 1) = ((MR_Box) (mercury__term_io__V_11_11));
#line 643 "term_io.m"
        }
#line 643 "term_io.m"
        {
#line 643 "term_io.m"
          return mercury__term_io__String_6 = mercury__string__append_list_1_f_0(mercury__term_io__V_9_9);
        }
#line 641 "term_io.m"
      }
#line 635 "term_io.m"
    return mercury__term_io__String_6;
#line 635 "term_io.m"
  }
#line 232 "term_io.m"
}

#line 227 "term_io.m"
void MR_CALL 
mercury__term_io__quote_atom_agt_5_p_0(
#line 227 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_19,
#line 227 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_20,
#line 227 "term_io.m"
  MR_Box mercury__term_io__Stream_6,
#line 227 "term_io.m"
  MR_String mercury__term_io__S_7,
#line 227 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_8,
#line 227 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_11,
#line 227 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_12)
#line 227 "term_io.m"
{
#line 623 "term_io.m"
  {
#line 623 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 623 "term_io.m"
    MR_Word mercury__term_io__ShouldQuote_10;

#line 656 "term_io.m"
    if ((strcmp(mercury__term_io__S_7, (MR_String) "!") == 0))
#line 661 "term_io.m"
      mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
    else
#line 656 "term_io.m"
      if ((strcmp(mercury__term_io__S_7, (MR_String) ";") == 0))
#line 658 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
      else
#line 656 "term_io.m"
        if ((strcmp(mercury__term_io__S_7, (MR_String) "[]") == 0))
#line 679 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
        else
#line 656 "term_io.m"
          if ((strcmp(mercury__term_io__S_7, (MR_String) "{}") == 0))
#line 682 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 656 "term_io.m"
          else
#line 656 "term_io.m"
            mercury__term_io__succeeded = MR_FALSE;
#line 656 "term_io.m"
    if (!(mercury__term_io__succeeded))
#line 656 "term_io.m"
      {
#line 664 "term_io.m"
        {
#line 669 "term_io.m"
          MR_Integer mercury__term_io__V_26_26;
#line 669 "term_io.m"
          MR_Char mercury__term_io__V_27_27;
#line 669 "term_io.m"
          MR_Char mercury__term_io__V_30_30;
#line 669 "term_io.m"
          MR_Integer mercury__term_io__Len_7_38;

#line 373 "string.opt"
          {
#line 373 "string.opt"
            mercury__term_io__succeeded = mercury__term_io__all_match_loop__ho22_3_p_in__string_0(mercury__term_io__S_7, (MR_Integer) 0);
          }
#line 664 "term_io.m"
          if (mercury__term_io__succeeded)
#line 664 "term_io.m"
            {
#line 665 "term_io.m"
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_7, (MR_String) "") == 0);
#line 665 "term_io.m"
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 664 "term_io.m"
              if (mercury__term_io__succeeded)
#line 664 "term_io.m"
                {
#line 669 "term_io.m"
                  mercury__term_io__V_26_26 = (MR_Integer) 0;
#line 669 "term_io.m"
                  mercury__term_io__V_27_27 = (MR_Char) 35;
#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 6934 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_38  = Length;
#line 246 "string.opt"
}
#line 767 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__V_26_26 ;
	Length =  mercury__term_io__Len_7_38 ;
		{
#line 767 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 6963 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 767 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 669 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 669 "term_io.m"
                    {
#line 163 "string.opt"
                      {
#line 163 "string.opt"
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, mercury__term_io__V_26_26, &mercury__term_io__V_30_30);
                      }
#line 669 "term_io.m"
                      mercury__term_io__succeeded = (mercury__term_io__V_27_27 == mercury__term_io__V_30_30);
#line 669 "term_io.m"
                    }
#line 669 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 664 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 676 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_8 == (MR_Integer) 1);
#line 664 "term_io.m"
                }
#line 664 "term_io.m"
            }
#line 664 "term_io.m"
        }
#line 656 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 653 "term_io.m"
          {
#line 653 "term_io.m"
            MR_Char mercury__term_io__FirstChar_24;
#line 653 "term_io.m"
            MR_Integer mercury__term_io__Len_7_44;
#line 110 "char.opt"
            MR_Char mercury__term_io__V_3_48;

#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 7021 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Len_7_44  = Length;
#line 246 "string.opt"
}
#line 767 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__Len_7_44 ;
		{
#line 767 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 7050 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 767 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 653 "term_io.m"
            if (mercury__term_io__succeeded)
#line 653 "term_io.m"
              {
#line 163 "string.opt"
                {
#line 163 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, (MR_Integer) 0, &mercury__term_io__FirstChar_24);
                }
#line 110 "char.opt"
                {
#line 110 "char.opt"
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_24, &mercury__term_io__V_3_48);
                }
#line 653 "term_io.m"
                if (mercury__term_io__succeeded)
#line 653 "term_io.m"
                  {
#line 323 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_7 ;
		{
#line 323 "string.opt"

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

#line 7119 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 323 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 653 "term_io.m"
                  }
#line 653 "term_io.m"
              }
#line 653 "term_io.m"
          }
#line 656 "term_io.m"
      }
#line 686 "term_io.m"
    if (mercury__term_io__succeeded)
#line 685 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 0;
#line 686 "term_io.m"
    else
#line 688 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 1;
#line 628 "term_io.m"
    if ((mercury__term_io__ShouldQuote_10 == (MR_Integer) 0))
#line 7146 "term_io.c"
      {
#line 7148 "term_io.c"
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));

#line 7151 "term_io.c"
        {
#line 7153 "term_io.c"
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_19), mercury__term_io__Stream_6, ((MR_Box) (mercury__term_io__S_7)), mercury__term_io__STATE_VARIABLE_State_0_11, mercury__term_io__STATE_VARIABLE_State_12);
#line 7155 "term_io.c"
          return;
        }
#line 7158 "term_io.c"
      }
#line 628 "term_io.m"
    else
#line 629 "term_io.m"
      {
#line 629 "term_io.m"
        MR_Box mercury__term_io__STATE_VARIABLE_State_14_14;
#line 629 "term_io.m"
        MR_Box mercury__term_io__STATE_VARIABLE_State_15_15;
#line 7168 "term_io.c"
        void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7170 "term_io.c"
        void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 7173 "term_io.c"
        {
#line 7175 "term_io.c"
          mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), mercury__term_io__Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), mercury__term_io__STATE_VARIABLE_State_0_11, &mercury__term_io__STATE_VARIABLE_State_14_14);
        }
#line 631 "term_io.m"
        {
#line 631 "term_io.m"
          mercury__term_io__write_escaped_string_4_p_0(mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__TypeClassInfo_for_writer_20, mercury__term_io__Stream_6, mercury__term_io__S_7, mercury__term_io__STATE_VARIABLE_State_14_14, &mercury__term_io__STATE_VARIABLE_State_15_15);
        }
#line 7183 "term_io.c"
        mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7185 "term_io.c"
        {
#line 7187 "term_io.c"
          mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), mercury__term_io__Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), mercury__term_io__STATE_VARIABLE_State_15_15, mercury__term_io__STATE_VARIABLE_State_12);
#line 7189 "term_io.c"
          return;
        }
#line 629 "term_io.m"
      }
#line 623 "term_io.m"
  }
#line 227 "term_io.m"
}

#line 224 "term_io.m"
void MR_CALL 
mercury__term_io__quote_atom_agt_4_p_0(
#line 224 "term_io.m"
  MR_String mercury__term_io__S_5,
#line 224 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_6)
#line 224 "term_io.m"
{
#line 619 "term_io.m"
  {
#line 619 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 619 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_13;
#line 619 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_14;
#line 619 "term_io.m"
    MR_Word mercury__term_io__Stream_8;
#line 619 "term_io.m"
    MR_Box mercury__term_io__Stream_4_17;

#line 1352 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_4_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 7232 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_17  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
    mercury__term_io__Stream_8 = (MR_Word) mercury__term_io__Stream_4_17;
#line 7241 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_13 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 7243 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 621 "term_io.m"
    {
#line 621 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__TypeClassInfo_for_writer_14, mercury__term_io__Stream_8, mercury__term_io__S_5, mercury__term_io__NextToGraphicToken_6);
#line 621 "term_io.m"
      return;
    }
#line 619 "term_io.m"
  }
#line 224 "term_io.m"
}

#line 216 "term_io.m"
MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_1(
#line 216 "term_io.m"
  MR_Char * mercury__term_io__Char_1,
#line 216 "term_io.m"
  MR_String mercury__term_io__Str_2)
#line 216 "term_io.m"
{
#line 852 "term_io.m"
  {
#line 852 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 852 "term_io.m"
    MR_Word mercury__term_io__Chars_14;
#line 852 "term_io.m"
    MR_Word mercury__term_io__V_20_20;
#line 852 "term_io.m"
    MR_Char mercury__term_io__V_21_21;

#line 853 "term_io.m"
    {
#line 853 "term_io.m"
      mercury__string__to_char_list_2_p_0(mercury__term_io__Str_2, &mercury__term_io__Chars_14);
    }
#line 855 "term_io.m"
    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Chars_14)) == (MR_mktag((MR_Integer) 1)));
#line 855 "term_io.m"
    if (mercury__term_io__succeeded)
#line 855 "term_io.m"
      {
#line 855 "term_io.m"
        mercury__term_io__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_14, (MR_Integer) 0)));
#line 855 "term_io.m"
        mercury__term_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_14, (MR_Integer) 1)));
#line 856 "term_io.m"
        if ((mercury__term_io__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "term_io.m"
          {
#line 855 "term_io.m"
            *mercury__term_io__Char_1 = mercury__term_io__V_21_21;
#line 855 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 855 "term_io.m"
          }
#line 856 "term_io.m"
        else
#line 857 "term_io.m"
          {
#line 857 "term_io.m"
            MR_Char mercury__term_io__EscapedChar_15;
#line 857 "term_io.m"
            MR_Word mercury__term_io__V_18_18;

#line 857 "term_io.m"
            mercury__term_io__succeeded = (mercury__term_io__V_21_21 == (MR_Char) 92);
#line 857 "term_io.m"
            if (mercury__term_io__succeeded)
#line 857 "term_io.m"
              {
#line 857 "term_io.m"
                mercury__term_io__EscapedChar_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_20_20, (MR_Integer) 0)));
#line 857 "term_io.m"
                mercury__term_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_20_20, (MR_Integer) 1)));
#line 857 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "term_io.m"
                if (mercury__term_io__succeeded)
#line 873 "term_io.m"
                  {
#line 873 "term_io.m"
                    if ((mercury__term_io__EscapedChar_15 == (MR_Char) 34))
#line 874 "term_io.m"
                      {
#line 874 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 34;
#line 874 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
                      }
#line 873 "term_io.m"
                    else
#line 873 "term_io.m"
                      if ((mercury__term_io__EscapedChar_15 == (MR_Char) 39))
#line 873 "term_io.m"
                        {
#line 873 "term_io.m"
                          *mercury__term_io__Char_1 = (MR_Char) 39;
#line 873 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
                        }
#line 873 "term_io.m"
                      else
#line 873 "term_io.m"
                        if ((mercury__term_io__EscapedChar_15 == (MR_Char) 92))
#line 875 "term_io.m"
                          {
#line 875 "term_io.m"
                            *mercury__term_io__Char_1 = (MR_Char) 92;
#line 875 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
                          }
#line 873 "term_io.m"
                        else
#line 873 "term_io.m"
                          if ((mercury__term_io__EscapedChar_15 == (MR_Char) 98))
#line 878 "term_io.m"
                            {
#line 878 "term_io.m"
                              *mercury__term_io__Char_1 = (MR_Char) 8;
#line 878 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 878 "term_io.m"
                            }
#line 873 "term_io.m"
                          else
#line 873 "term_io.m"
                            if ((mercury__term_io__EscapedChar_15 == (MR_Char) 110))
#line 876 "term_io.m"
                              {
#line 876 "term_io.m"
                                *mercury__term_io__Char_1 = (MR_Char) 10;
#line 876 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
                              }
#line 873 "term_io.m"
                            else
#line 873 "term_io.m"
                              if ((mercury__term_io__EscapedChar_15 == (MR_Char) 116))
#line 877 "term_io.m"
                                {
#line 877 "term_io.m"
                                  *mercury__term_io__Char_1 = (MR_Char) 9;
#line 877 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 877 "term_io.m"
                                }
#line 873 "term_io.m"
                              else
#line 873 "term_io.m"
                                mercury__term_io__succeeded = MR_FALSE;
#line 873 "term_io.m"
                  }
#line 857 "term_io.m"
              }
#line 857 "term_io.m"
          }
#line 855 "term_io.m"
      }
#line 852 "term_io.m"
    return mercury__term_io__succeeded;
#line 852 "term_io.m"
  }
#line 216 "term_io.m"
}

#line 215 "term_io.m"
MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_0(
#line 215 "term_io.m"
  MR_Char mercury__term_io__Char_1,
#line 215 "term_io.m"
  MR_String * mercury__term_io__Str_2)
#line 215 "term_io.m"
{
#line 847 "term_io.m"
  {
#line 847 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 847 "term_io.m"
    MR_Char mercury__term_io__EscapeChar_5;

#line 873 "term_io.m"
    if ((mercury__term_io__Char_1 == (MR_Char) 8))
#line 878 "term_io.m"
      {
#line 878 "term_io.m"
        mercury__term_io__EscapeChar_5 = (MR_Char) 98;
#line 878 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 878 "term_io.m"
      }
#line 873 "term_io.m"
    else
#line 873 "term_io.m"
      if ((mercury__term_io__Char_1 == (MR_Char) 9))
#line 877 "term_io.m"
        {
#line 877 "term_io.m"
          mercury__term_io__EscapeChar_5 = (MR_Char) 116;
#line 877 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 877 "term_io.m"
        }
#line 873 "term_io.m"
      else
#line 873 "term_io.m"
        if ((mercury__term_io__Char_1 == (MR_Char) 10))
#line 876 "term_io.m"
          {
#line 876 "term_io.m"
            mercury__term_io__EscapeChar_5 = (MR_Char) 110;
#line 876 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
          }
#line 873 "term_io.m"
        else
#line 873 "term_io.m"
          if ((mercury__term_io__Char_1 == (MR_Char) 34))
#line 874 "term_io.m"
            {
#line 874 "term_io.m"
              mercury__term_io__EscapeChar_5 = (MR_Char) 34;
#line 874 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
            }
#line 873 "term_io.m"
          else
#line 873 "term_io.m"
            if ((mercury__term_io__Char_1 == (MR_Char) 39))
#line 873 "term_io.m"
              {
#line 873 "term_io.m"
                mercury__term_io__EscapeChar_5 = (MR_Char) 39;
#line 873 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
              }
#line 873 "term_io.m"
            else
#line 873 "term_io.m"
              if ((mercury__term_io__Char_1 == (MR_Char) 92))
#line 875 "term_io.m"
                {
#line 875 "term_io.m"
                  mercury__term_io__EscapeChar_5 = (MR_Char) 92;
#line 875 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
                }
#line 873 "term_io.m"
              else
#line 873 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 847 "term_io.m"
    if (mercury__term_io__succeeded)
#line 846 "term_io.m"
      {
#line 846 "term_io.m"
        MR_Word mercury__term_io__V_6_6;
#line 846 "term_io.m"
        MR_Word mercury__term_io__V_8_8;
#line 846 "term_io.m"
        MR_Word mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 846 "term_io.m"
        {
#line 846 "term_io.m"
          mercury__term_io__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_8_8, 0) = ((MR_Box) (MR_Word) (mercury__term_io__EscapeChar_5));
#line 846 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_8_8, 1) = ((MR_Box) (mercury__term_io__V_9_9));
#line 846 "term_io.m"
        }
#line 846 "term_io.m"
        {
#line 846 "term_io.m"
          mercury__term_io__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 846 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 1) = ((MR_Box) (mercury__term_io__V_8_8));
#line 846 "term_io.m"
        }
#line 846 "term_io.m"
        {
#line 846 "term_io.m"
          mercury__string__from_char_list_2_p_0(mercury__term_io__V_6_6, mercury__term_io__Str_2);
        }
#line 846 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 846 "term_io.m"
      }
#line 847 "term_io.m"
    else
#line 849 "term_io.m"
      {
#line 849 "term_io.m"
        MR_Word mercury__term_io__V_10_10;
#line 849 "term_io.m"
        MR_Word mercury__term_io__V_11_11;

#line 795 "term_io.m"
        {
#line 795 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_1);
        }
#line 795 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
          {
#line 806 "term_io.m"
            if ((mercury__term_io__Char_1 == (MR_Char) 32))
#line 806 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
            else
#line 806 "term_io.m"
              if ((mercury__term_io__Char_1 == (MR_Char) 33))
#line 807 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
              else
#line 806 "term_io.m"
                if ((mercury__term_io__Char_1 == (MR_Char) 34))
#line 830 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                else
#line 806 "term_io.m"
                  if ((mercury__term_io__Char_1 == (MR_Char) 35))
#line 809 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                  else
#line 806 "term_io.m"
                    if ((mercury__term_io__Char_1 == (MR_Char) 36))
#line 810 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                    else
#line 806 "term_io.m"
                      if ((mercury__term_io__Char_1 == (MR_Char) 37))
#line 811 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                      else
#line 806 "term_io.m"
                        if ((mercury__term_io__Char_1 == (MR_Char) 38))
#line 813 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                        else
#line 806 "term_io.m"
                          if ((mercury__term_io__Char_1 == (MR_Char) 39))
#line 829 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                          else
#line 806 "term_io.m"
                            if ((mercury__term_io__Char_1 == (MR_Char) 40))
#line 815 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                            else
#line 806 "term_io.m"
                              if ((mercury__term_io__Char_1 == (MR_Char) 41))
#line 816 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                              else
#line 806 "term_io.m"
                                if ((mercury__term_io__Char_1 == (MR_Char) 42))
#line 814 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                else
#line 806 "term_io.m"
                                  if ((mercury__term_io__Char_1 == (MR_Char) 43))
#line 819 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                  else
#line 806 "term_io.m"
                                    if ((mercury__term_io__Char_1 == (MR_Char) 44))
#line 834 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                    else
#line 806 "term_io.m"
                                      if ((mercury__term_io__Char_1 == (MR_Char) 45))
#line 817 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                      else
#line 806 "term_io.m"
                                        if ((mercury__term_io__Char_1 == (MR_Char) 46))
#line 833 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                        else
#line 806 "term_io.m"
                                          if ((mercury__term_io__Char_1 == (MR_Char) 47))
#line 835 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                          else
#line 806 "term_io.m"
                                            if ((mercury__term_io__Char_1 == (MR_Char) 58))
#line 828 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                            else
#line 806 "term_io.m"
                                              if ((mercury__term_io__Char_1 == (MR_Char) 59))
#line 827 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                              else
#line 806 "term_io.m"
                                                if ((mercury__term_io__Char_1 == (MR_Char) 60))
#line 831 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                else
#line 806 "term_io.m"
                                                  if ((mercury__term_io__Char_1 == (MR_Char) 61))
#line 820 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                  else
#line 806 "term_io.m"
                                                    if ((mercury__term_io__Char_1 == (MR_Char) 62))
#line 832 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                    else
#line 806 "term_io.m"
                                                      if ((mercury__term_io__Char_1 == (MR_Char) 63))
#line 836 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                      else
#line 806 "term_io.m"
                                                        if ((mercury__term_io__Char_1 == (MR_Char) 64))
#line 808 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                        else
#line 806 "term_io.m"
                                                          if ((mercury__term_io__Char_1 == (MR_Char) 91))
#line 825 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                          else
#line 806 "term_io.m"
                                                            if ((mercury__term_io__Char_1 == (MR_Char) 92))
#line 837 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                            else
#line 806 "term_io.m"
                                                              if ((mercury__term_io__Char_1 == (MR_Char) 93))
#line 826 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                              else
#line 806 "term_io.m"
                                                                if ((mercury__term_io__Char_1 == (MR_Char) 94))
#line 812 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                else
#line 806 "term_io.m"
                                                                  if ((mercury__term_io__Char_1 == (MR_Char) 95))
#line 818 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                  else
#line 806 "term_io.m"
                                                                    if ((mercury__term_io__Char_1 == (MR_Char) 96))
#line 821 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                    else
#line 806 "term_io.m"
                                                                      if ((mercury__term_io__Char_1 == (MR_Char) 123))
#line 823 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                      else
#line 806 "term_io.m"
                                                                        if ((mercury__term_io__Char_1 == (MR_Char) 124))
#line 838 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                        else
#line 806 "term_io.m"
                                                                          if ((mercury__term_io__Char_1 == (MR_Char) 125))
#line 824 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                          else
#line 806 "term_io.m"
                                                                            if ((mercury__term_io__Char_1 == (MR_Char) 126))
#line 822 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                            else
#line 806 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_FALSE;
#line 795 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 797 "term_io.m"
              {
#line 797 "term_io.m"
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

#line 7784 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_21_21  = Int;
#line 66 "char.opt"
}
#line 797 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_21_21 >= (MR_Integer) 128);
#line 797 "term_io.m"
              }
#line 795 "term_io.m"
          }
#line 849 "term_io.m"
        if (mercury__term_io__succeeded)
#line 849 "term_io.m"
          {
#line 848 "term_io.m"
            mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 848 "term_io.m"
            {
#line 848 "term_io.m"
              mercury__term_io__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_10_10, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_1));
#line 848 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_10_10, 1) = ((MR_Box) (mercury__term_io__V_11_11));
#line 848 "term_io.m"
            }
#line 848 "term_io.m"
            {
#line 848 "term_io.m"
              mercury__string__from_char_list_2_p_0(mercury__term_io__V_10_10, mercury__term_io__Str_2);
            }
#line 848 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 849 "term_io.m"
          }
#line 849 "term_io.m"
      }
#line 847 "term_io.m"
    return mercury__term_io__succeeded;
#line 847 "term_io.m"
  }
#line 215 "term_io.m"
}

#line 203 "term_io.m"
MR_bool MR_CALL 
mercury__term_io__is_mercury_punctuation_char_1_p_0(
#line 203 "term_io.m"
  MR_Char mercury__term_io__HeadVar__1_1)
#line 203 "term_io.m"
{
#line 806 "term_io.m"
  {
#line 806 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 806 "term_io.m"
    if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 32))
#line 806 "term_io.m"
      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
    else
#line 806 "term_io.m"
      if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 33))
#line 807 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
      else
#line 806 "term_io.m"
        if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 34))
#line 830 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
        else
#line 806 "term_io.m"
          if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 35))
#line 809 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
          else
#line 806 "term_io.m"
            if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 36))
#line 810 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
            else
#line 806 "term_io.m"
              if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 37))
#line 811 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
              else
#line 806 "term_io.m"
                if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 38))
#line 813 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                else
#line 806 "term_io.m"
                  if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 39))
#line 829 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                  else
#line 806 "term_io.m"
                    if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 40))
#line 815 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                    else
#line 806 "term_io.m"
                      if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 41))
#line 816 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                      else
#line 806 "term_io.m"
                        if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 42))
#line 814 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                        else
#line 806 "term_io.m"
                          if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 43))
#line 819 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                          else
#line 806 "term_io.m"
                            if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 44))
#line 834 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                            else
#line 806 "term_io.m"
                              if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 45))
#line 817 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                              else
#line 806 "term_io.m"
                                if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 46))
#line 833 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                else
#line 806 "term_io.m"
                                  if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 47))
#line 835 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                  else
#line 806 "term_io.m"
                                    if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 58))
#line 828 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                    else
#line 806 "term_io.m"
                                      if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 59))
#line 827 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                      else
#line 806 "term_io.m"
                                        if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 60))
#line 831 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                        else
#line 806 "term_io.m"
                                          if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 61))
#line 820 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                          else
#line 806 "term_io.m"
                                            if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 62))
#line 832 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                            else
#line 806 "term_io.m"
                                              if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 63))
#line 836 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                              else
#line 806 "term_io.m"
                                                if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 64))
#line 808 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                else
#line 806 "term_io.m"
                                                  if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 91))
#line 825 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                  else
#line 806 "term_io.m"
                                                    if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 92))
#line 837 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                    else
#line 806 "term_io.m"
                                                      if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 93))
#line 826 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                      else
#line 806 "term_io.m"
                                                        if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 94))
#line 812 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                        else
#line 806 "term_io.m"
                                                          if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 95))
#line 818 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                          else
#line 806 "term_io.m"
                                                            if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 96))
#line 821 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                            else
#line 806 "term_io.m"
                                                              if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 123))
#line 823 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                              else
#line 806 "term_io.m"
                                                                if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 124))
#line 838 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                else
#line 806 "term_io.m"
                                                                  if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 125))
#line 824 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                  else
#line 806 "term_io.m"
                                                                    if ((mercury__term_io__HeadVar__1_1 == (MR_Char) 126))
#line 822 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                    else
#line 806 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_FALSE;
#line 806 "term_io.m"
    return mercury__term_io__succeeded;
#line 806 "term_io.m"
  }
#line 203 "term_io.m"
}

#line 199 "term_io.m"
MR_String MR_CALL 
mercury__term_io__mercury_escape_char_1_f_0(
#line 199 "term_io.m"
  MR_Char mercury__term_io__Char_3)
#line 199 "term_io.m"
{
#line 780 "term_io.m"
  {
#line 780 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 780 "term_io.m"
    MR_String mercury__term_io__EscapeCode_4;
#line 780 "term_io.m"
    MR_Integer mercury__term_io__Int_5;
#line 780 "term_io.m"
    MR_String mercury__term_io__OctalString0_6;
#line 780 "term_io.m"
    MR_String mercury__term_io__OctalString_7;
#line 780 "term_io.m"
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

#line 8085 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Int_5  = Int;
#line 66 "char.opt"
}
#line 782 "term_io.m"
    {
#line 782 "term_io.m"
      mercury__string__int_to_base_string_3_p_0(mercury__term_io__Int_5, (MR_Integer) 8, &mercury__term_io__OctalString0_6);
    }
#line 783 "term_io.m"
    {
#line 783 "term_io.m"
      mercury__string__pad_left_4_p_0(mercury__term_io__OctalString0_6, (MR_Char) 48, (MR_Integer) 3, &mercury__term_io__OctalString_7);
    }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2(mercury__term_io__OctalString_7, (MR_String) "\\", &mercury__term_io__V_12_12);
    }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2((MR_String) "\\", mercury__term_io__V_12_12, &mercury__term_io__EscapeCode_4);
    }
#line 780 "term_io.m"
    return mercury__term_io__EscapeCode_4;
#line 780 "term_io.m"
  }
#line 199 "term_io.m"
}

#line 188 "term_io.m"
MR_String MR_CALL 
mercury__term_io__integer_base_prefix_1_f_0(
#line 188 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1)
#line 188 "term_io.m"
{
#line 594 "term_io.m"
  {
#line 594 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 594 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;

#line 594 "term_io.m"
    if ((mercury__term_io__HeadVar__1_1 == (MR_Integer) 2))
#line 596 "term_io.m"
      mercury__term_io__HeadVar__2_2 = (MR_String) "";
#line 594 "term_io.m"
    else
#line 594 "term_io.m"
      if ((mercury__term_io__HeadVar__1_1 == (MR_Integer) 3))
#line 597 "term_io.m"
        mercury__term_io__HeadVar__2_2 = (MR_String) "0x";
#line 594 "term_io.m"
      else
#line 594 "term_io.m"
        if ((mercury__term_io__HeadVar__1_1 == (MR_Integer) 0))
#line 594 "term_io.m"
          mercury__term_io__HeadVar__2_2 = (MR_String) "0b";
#line 594 "term_io.m"
        else
#line 595 "term_io.m"
          mercury__term_io__HeadVar__2_2 = (MR_String) "0o";
#line 594 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 594 "term_io.m"
  }
#line 188 "term_io.m"
}

#line 184 "term_io.m"
MR_Integer MR_CALL 
mercury__term_io__integer_base_int_1_f_0(
#line 184 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1)
#line 184 "term_io.m"
{
#line 589 "term_io.m"
  {
#line 589 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 589 "term_io.m"
    MR_Integer mercury__term_io__HeadVar__2_2;

#line 589 "term_io.m"
    if ((mercury__term_io__HeadVar__1_1 == (MR_Integer) 2))
#line 591 "term_io.m"
      mercury__term_io__HeadVar__2_2 = (MR_Integer) 10;
#line 589 "term_io.m"
    else
#line 589 "term_io.m"
      if ((mercury__term_io__HeadVar__1_1 == (MR_Integer) 3))
#line 592 "term_io.m"
        mercury__term_io__HeadVar__2_2 = (MR_Integer) 16;
#line 589 "term_io.m"
      else
#line 589 "term_io.m"
        if ((mercury__term_io__HeadVar__1_1 == (MR_Integer) 0))
#line 589 "term_io.m"
          mercury__term_io__HeadVar__2_2 = (MR_Integer) 2;
#line 589 "term_io.m"
        else
#line 590 "term_io.m"
          mercury__term_io__HeadVar__2_2 = (MR_Integer) 8;
#line 589 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 589 "term_io.m"
  }
#line 184 "term_io.m"
}

#line 168 "term_io.m"
MR_String MR_CALL 
mercury__term_io__escaped_string_1_f_0(
#line 168 "term_io.m"
  MR_String mercury__term_io__String_3)
#line 168 "term_io.m"
{
#line 713 "term_io.m"
  {
#line 713 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 713 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;
#line 713 "term_io.m"
    MR_Word mercury__term_io__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 713 "term_io.m"
    MR_Word mercury__term_io__V_4_4;
#line 713 "term_io.m"
    MR_Word mercury__term_io__V_5_5;
#line 713 "term_io.m"
    MR_Word mercury__term_io__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 713 "term_io.m"
    MR_Integer mercury__term_io__Length_8_38;
#line 713 "term_io.m"
    MR_Integer mercury__term_io__End_13_52;
#line 713 "term_io.m"
    MR_Integer mercury__term_io__V_17_53;

#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_3 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 8242 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Length_8_38  = Length;
#line 246 "string.opt"
}
#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_3 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 8262 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_53  = Length;
#line 246 "string.opt"
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
#line 617 "string.opt"
    {
#line 617 "string.opt"
      mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(mercury__term_io__String_3, (MR_Integer) 0, mercury__term_io__End_13_52, mercury__term_io__V_7_7, &mercury__term_io__V_5_5);
    }
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__term_io__TypeCtorInfo_8_8, mercury__term_io__V_5_5, &mercury__term_io__V_4_4);
    }
#line 714 "term_io.m"
    {
#line 714 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__term_io__V_4_4);
    }
#line 713 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 713 "term_io.m"
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
#line 710 "term_io.m"
  {
#line 710 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 710 "term_io.m"
    MR_Integer mercury__term_io__Length_8_23;
#line 710 "term_io.m"
    MR_Integer mercury__term_io__End_13_33;
#line 710 "term_io.m"
    MR_Integer mercury__term_io__V_17_34;

#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 8342 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Length_8_23  = Length;
#line 246 "string.opt"
}
#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 8362 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_34  = Length;
#line 246 "string.opt"
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
#line 617 "string.opt"
    {
#line 617 "string.opt"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__String_6, (MR_Integer) 0, mercury__term_io__End_13_33, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 617 "string.opt"
      return;
    }
#line 710 "term_io.m"
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
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_3_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 8422 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_15  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__Stream_4_15;
#line 8431 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 8433 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 708 "term_io.m"
    {
#line 708 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__String_4);
#line 708 "term_io.m"
      return;
    }
#line 706 "term_io.m"
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
#line 760 "term_io.m"
  {
#line 760 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 760 "term_io.m"
    MR_Word mercury__term_io__Chars_10;
#line 760 "term_io.m"
    MR_Word mercury__term_io__V_32_32;
#line 760 "term_io.m"
    MR_Char mercury__term_io__V_33_33;

#line 761 "term_io.m"
    {
#line 761 "term_io.m"
      mercury__string__to_char_list_2_p_0(mercury__term_io__String_2, &mercury__term_io__Chars_10);
    }
#line 763 "term_io.m"
    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Chars_10)) == (MR_mktag((MR_Integer) 1)));
#line 763 "term_io.m"
    if (mercury__term_io__succeeded)
#line 763 "term_io.m"
      {
#line 763 "term_io.m"
        mercury__term_io__V_33_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_10, (MR_Integer) 0)));
#line 763 "term_io.m"
        mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_10, (MR_Integer) 1)));
#line 769 "term_io.m"
        if ((mercury__term_io__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "term_io.m"
          {
#line 763 "term_io.m"
            *mercury__term_io__Char_1 = mercury__term_io__V_33_33;
#line 795 "term_io.m"
            {
#line 795 "term_io.m"
              mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(*mercury__term_io__Char_1);
            }
#line 795 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
              {
#line 806 "term_io.m"
                if ((*mercury__term_io__Char_1 == (MR_Char) 32))
#line 806 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                else
#line 806 "term_io.m"
                  if ((*mercury__term_io__Char_1 == (MR_Char) 33))
#line 807 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                  else
#line 806 "term_io.m"
                    if ((*mercury__term_io__Char_1 == (MR_Char) 34))
#line 830 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                    else
#line 806 "term_io.m"
                      if ((*mercury__term_io__Char_1 == (MR_Char) 35))
#line 809 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                      else
#line 806 "term_io.m"
                        if ((*mercury__term_io__Char_1 == (MR_Char) 36))
#line 810 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                        else
#line 806 "term_io.m"
                          if ((*mercury__term_io__Char_1 == (MR_Char) 37))
#line 811 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                          else
#line 806 "term_io.m"
                            if ((*mercury__term_io__Char_1 == (MR_Char) 38))
#line 813 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                            else
#line 806 "term_io.m"
                              if ((*mercury__term_io__Char_1 == (MR_Char) 39))
#line 829 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                              else
#line 806 "term_io.m"
                                if ((*mercury__term_io__Char_1 == (MR_Char) 40))
#line 815 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                else
#line 806 "term_io.m"
                                  if ((*mercury__term_io__Char_1 == (MR_Char) 41))
#line 816 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                  else
#line 806 "term_io.m"
                                    if ((*mercury__term_io__Char_1 == (MR_Char) 42))
#line 814 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                    else
#line 806 "term_io.m"
                                      if ((*mercury__term_io__Char_1 == (MR_Char) 43))
#line 819 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                      else
#line 806 "term_io.m"
                                        if ((*mercury__term_io__Char_1 == (MR_Char) 44))
#line 834 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                        else
#line 806 "term_io.m"
                                          if ((*mercury__term_io__Char_1 == (MR_Char) 45))
#line 817 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                          else
#line 806 "term_io.m"
                                            if ((*mercury__term_io__Char_1 == (MR_Char) 46))
#line 833 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                            else
#line 806 "term_io.m"
                                              if ((*mercury__term_io__Char_1 == (MR_Char) 47))
#line 835 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                              else
#line 806 "term_io.m"
                                                if ((*mercury__term_io__Char_1 == (MR_Char) 58))
#line 828 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                else
#line 806 "term_io.m"
                                                  if ((*mercury__term_io__Char_1 == (MR_Char) 59))
#line 827 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                  else
#line 806 "term_io.m"
                                                    if ((*mercury__term_io__Char_1 == (MR_Char) 60))
#line 831 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                    else
#line 806 "term_io.m"
                                                      if ((*mercury__term_io__Char_1 == (MR_Char) 61))
#line 820 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                      else
#line 806 "term_io.m"
                                                        if ((*mercury__term_io__Char_1 == (MR_Char) 62))
#line 832 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                        else
#line 806 "term_io.m"
                                                          if ((*mercury__term_io__Char_1 == (MR_Char) 63))
#line 836 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                          else
#line 806 "term_io.m"
                                                            if ((*mercury__term_io__Char_1 == (MR_Char) 64))
#line 808 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                            else
#line 806 "term_io.m"
                                                              if ((*mercury__term_io__Char_1 == (MR_Char) 91))
#line 825 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                              else
#line 806 "term_io.m"
                                                                if ((*mercury__term_io__Char_1 == (MR_Char) 92))
#line 837 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                else
#line 806 "term_io.m"
                                                                  if ((*mercury__term_io__Char_1 == (MR_Char) 93))
#line 826 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                  else
#line 806 "term_io.m"
                                                                    if ((*mercury__term_io__Char_1 == (MR_Char) 94))
#line 812 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                    else
#line 806 "term_io.m"
                                                                      if ((*mercury__term_io__Char_1 == (MR_Char) 95))
#line 818 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                      else
#line 806 "term_io.m"
                                                                        if ((*mercury__term_io__Char_1 == (MR_Char) 96))
#line 821 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                        else
#line 806 "term_io.m"
                                                                          if ((*mercury__term_io__Char_1 == (MR_Char) 123))
#line 823 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                          else
#line 806 "term_io.m"
                                                                            if ((*mercury__term_io__Char_1 == (MR_Char) 124))
#line 838 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                            else
#line 806 "term_io.m"
                                                                              if ((*mercury__term_io__Char_1 == (MR_Char) 125))
#line 824 "term_io.m"
                                                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                              else
#line 806 "term_io.m"
                                                                                if ((*mercury__term_io__Char_1 == (MR_Char) 126))
#line 822 "term_io.m"
                                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                                else
#line 806 "term_io.m"
                                                                                  mercury__term_io__succeeded = MR_FALSE;
#line 795 "term_io.m"
                if (!(mercury__term_io__succeeded))
#line 797 "term_io.m"
                  {
#line 797 "term_io.m"
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

#line 8717 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_37_37  = Int;
#line 66 "char.opt"
}
#line 797 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__V_37_37 >= (MR_Integer) 128);
#line 797 "term_io.m"
                  }
#line 795 "term_io.m"
              }
#line 766 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 873 "term_io.m"
              {
#line 873 "term_io.m"
                if ((*mercury__term_io__Char_1 == (MR_Char) 8))
#line 878 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
                else
#line 873 "term_io.m"
                  if ((*mercury__term_io__Char_1 == (MR_Char) 9))
#line 877 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
                  else
#line 873 "term_io.m"
                    if ((*mercury__term_io__Char_1 == (MR_Char) 10))
#line 876 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
                    else
#line 873 "term_io.m"
                      if ((*mercury__term_io__Char_1 == (MR_Char) 34))
#line 874 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
                      else
#line 873 "term_io.m"
                        if ((*mercury__term_io__Char_1 == (MR_Char) 39))
#line 873 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
                        else
#line 873 "term_io.m"
                          if ((*mercury__term_io__Char_1 == (MR_Char) 92))
#line 875 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
                          else
#line 873 "term_io.m"
                            mercury__term_io__succeeded = MR_FALSE;
#line 873 "term_io.m"
              }
#line 763 "term_io.m"
          }
#line 769 "term_io.m"
        else
#line 769 "term_io.m"
          {
#line 769 "term_io.m"
            MR_Word mercury__term_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 1)));
#line 769 "term_io.m"
            MR_Char mercury__term_io__V_35_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 0)));

#line 770 "term_io.m"
            mercury__term_io__succeeded = (mercury__term_io__V_33_33 == (MR_Char) 92);
#line 769 "term_io.m"
            if (mercury__term_io__succeeded)
#line 769 "term_io.m"
              {
#line 769 "term_io.m"
                if ((mercury__term_io__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "term_io.m"
                  if ((mercury__term_io__V_35_35 == (MR_Char) 34))
#line 874 "term_io.m"
                    {
#line 874 "term_io.m"
                      *mercury__term_io__Char_1 = (MR_Char) 34;
#line 874 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
                    }
#line 873 "term_io.m"
                  else
#line 873 "term_io.m"
                    if ((mercury__term_io__V_35_35 == (MR_Char) 39))
#line 873 "term_io.m"
                      {
#line 873 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 39;
#line 873 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
                      }
#line 873 "term_io.m"
                    else
#line 873 "term_io.m"
                      if ((mercury__term_io__V_35_35 == (MR_Char) 92))
#line 875 "term_io.m"
                        {
#line 875 "term_io.m"
                          *mercury__term_io__Char_1 = (MR_Char) 92;
#line 875 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
                        }
#line 873 "term_io.m"
                      else
#line 873 "term_io.m"
                        if ((mercury__term_io__V_35_35 == (MR_Char) 98))
#line 878 "term_io.m"
                          {
#line 878 "term_io.m"
                            *mercury__term_io__Char_1 = (MR_Char) 8;
#line 878 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 878 "term_io.m"
                          }
#line 873 "term_io.m"
                        else
#line 873 "term_io.m"
                          if ((mercury__term_io__V_35_35 == (MR_Char) 110))
#line 876 "term_io.m"
                            {
#line 876 "term_io.m"
                              *mercury__term_io__Char_1 = (MR_Char) 10;
#line 876 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
                            }
#line 873 "term_io.m"
                          else
#line 873 "term_io.m"
                            if ((mercury__term_io__V_35_35 == (MR_Char) 116))
#line 877 "term_io.m"
                              {
#line 877 "term_io.m"
                                *mercury__term_io__Char_1 = (MR_Char) 9;
#line 877 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 877 "term_io.m"
                              }
#line 873 "term_io.m"
                            else
#line 873 "term_io.m"
                              mercury__term_io__succeeded = MR_FALSE;
#line 769 "term_io.m"
                else
#line 773 "term_io.m"
                  {
#line 773 "term_io.m"
                    MR_String mercury__term_io__NumString_17;
#line 773 "term_io.m"
                    MR_Integer mercury__term_io__Int_18;
#line 773 "term_io.m"
                    MR_Word mercury__term_io__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_34_34, (MR_Integer) 1)));
#line 773 "term_io.m"
                    MR_Word mercury__term_io__V_23_23;
#line 773 "term_io.m"
                    MR_Integer mercury__term_io__V_27_27;
#line 773 "term_io.m"
                    MR_Char mercury__term_io__Char2_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_34_34, (MR_Integer) 0)));
#line 773 "term_io.m"
                    MR_Char mercury__term_io__Char3_15;

#line 773 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 773 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 773 "term_io.m"
                      {
#line 773 "term_io.m"
                        mercury__term_io__Char3_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_22_22, (MR_Integer) 0)));
#line 773 "term_io.m"
                        mercury__term_io__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_22_22, (MR_Integer) 1)));
#line 773 "term_io.m"
                        mercury__term_io__succeeded = (mercury__term_io__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 773 "term_io.m"
                          {
#line 775 "term_io.m"
                            {
#line 775 "term_io.m"
                              mercury__string__from_char_list_2_p_0(mercury__term_io__V_32_32, &mercury__term_io__NumString_17);
                            }
#line 776 "term_io.m"
                            mercury__term_io__V_27_27 = (MR_Integer) 8;
#line 776 "term_io.m"
                            {
#line 776 "term_io.m"
                              mercury__term_io__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__term_io__V_27_27, mercury__term_io__NumString_17, &mercury__term_io__Int_18);
                            }
#line 773 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 773 "term_io.m"
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

#line 8933 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__term_io__Char_1  = Character;
#line 59 "char.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 773 "term_io.m"
                              }
#line 773 "term_io.m"
                          }
#line 773 "term_io.m"
                      }
#line 773 "term_io.m"
                  }
#line 769 "term_io.m"
              }
#line 769 "term_io.m"
          }
#line 763 "term_io.m"
      }
#line 760 "term_io.m"
    return mercury__term_io__succeeded;
#line 760 "term_io.m"
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
#line 755 "term_io.m"
  {
#line 755 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 755 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_5;

#line 873 "term_io.m"
    if ((mercury__term_io__Char_1 == (MR_Char) 8))
#line 878 "term_io.m"
      {
#line 878 "term_io.m"
        mercury__term_io__QuoteChar_5 = (MR_Char) 98;
#line 878 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 878 "term_io.m"
      }
#line 873 "term_io.m"
    else
#line 873 "term_io.m"
      if ((mercury__term_io__Char_1 == (MR_Char) 9))
#line 877 "term_io.m"
        {
#line 877 "term_io.m"
          mercury__term_io__QuoteChar_5 = (MR_Char) 116;
#line 877 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 877 "term_io.m"
        }
#line 873 "term_io.m"
      else
#line 873 "term_io.m"
        if ((mercury__term_io__Char_1 == (MR_Char) 10))
#line 876 "term_io.m"
          {
#line 876 "term_io.m"
            mercury__term_io__QuoteChar_5 = (MR_Char) 110;
#line 876 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
          }
#line 873 "term_io.m"
        else
#line 873 "term_io.m"
          if ((mercury__term_io__Char_1 == (MR_Char) 34))
#line 874 "term_io.m"
            {
#line 874 "term_io.m"
              mercury__term_io__QuoteChar_5 = (MR_Char) 34;
#line 874 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
            }
#line 873 "term_io.m"
          else
#line 873 "term_io.m"
            if ((mercury__term_io__Char_1 == (MR_Char) 39))
#line 873 "term_io.m"
              {
#line 873 "term_io.m"
                mercury__term_io__QuoteChar_5 = (MR_Char) 39;
#line 873 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
              }
#line 873 "term_io.m"
            else
#line 873 "term_io.m"
              if ((mercury__term_io__Char_1 == (MR_Char) 92))
#line 875 "term_io.m"
                {
#line 875 "term_io.m"
                  mercury__term_io__QuoteChar_5 = (MR_Char) 92;
#line 875 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
                }
#line 873 "term_io.m"
              else
#line 873 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 755 "term_io.m"
    if (mercury__term_io__succeeded)
#line 754 "term_io.m"
      {
#line 754 "term_io.m"
        MR_String mercury__term_io__V_7_7;
#line 754 "term_io.m"
        MR_Word mercury__term_io__V_5_36;
#line 754 "term_io.m"
        MR_Word mercury__term_io__V_6_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 701 "string.opt"
        {
#line 701 "string.opt"
          mercury__term_io__V_5_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_5_36, 0) = ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_5));
#line 701 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_5_36, 1) = ((MR_Box) (mercury__term_io__V_6_37));
#line 701 "string.opt"
        }
#line 703 "string.opt"
        {
#line 703 "string.opt"
          mercury__string__to_char_list_2_p_1(&mercury__term_io__V_7_7, mercury__term_io__V_5_36);
        }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\\", mercury__term_io__V_7_7, mercury__term_io__String_2);
#line 411 "string.opt"
          return;
        }
#line 754 "term_io.m"
      }
#line 755 "term_io.m"
    else
#line 757 "term_io.m"
      {
#line 795 "term_io.m"
        {
#line 795 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_1);
        }
#line 795 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
          {
#line 806 "term_io.m"
            if ((mercury__term_io__Char_1 == (MR_Char) 32))
#line 806 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
            else
#line 806 "term_io.m"
              if ((mercury__term_io__Char_1 == (MR_Char) 33))
#line 807 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
              else
#line 806 "term_io.m"
                if ((mercury__term_io__Char_1 == (MR_Char) 34))
#line 830 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                else
#line 806 "term_io.m"
                  if ((mercury__term_io__Char_1 == (MR_Char) 35))
#line 809 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                  else
#line 806 "term_io.m"
                    if ((mercury__term_io__Char_1 == (MR_Char) 36))
#line 810 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                    else
#line 806 "term_io.m"
                      if ((mercury__term_io__Char_1 == (MR_Char) 37))
#line 811 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                      else
#line 806 "term_io.m"
                        if ((mercury__term_io__Char_1 == (MR_Char) 38))
#line 813 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                        else
#line 806 "term_io.m"
                          if ((mercury__term_io__Char_1 == (MR_Char) 39))
#line 829 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                          else
#line 806 "term_io.m"
                            if ((mercury__term_io__Char_1 == (MR_Char) 40))
#line 815 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                            else
#line 806 "term_io.m"
                              if ((mercury__term_io__Char_1 == (MR_Char) 41))
#line 816 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                              else
#line 806 "term_io.m"
                                if ((mercury__term_io__Char_1 == (MR_Char) 42))
#line 814 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                else
#line 806 "term_io.m"
                                  if ((mercury__term_io__Char_1 == (MR_Char) 43))
#line 819 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                  else
#line 806 "term_io.m"
                                    if ((mercury__term_io__Char_1 == (MR_Char) 44))
#line 834 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                    else
#line 806 "term_io.m"
                                      if ((mercury__term_io__Char_1 == (MR_Char) 45))
#line 817 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                      else
#line 806 "term_io.m"
                                        if ((mercury__term_io__Char_1 == (MR_Char) 46))
#line 833 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                        else
#line 806 "term_io.m"
                                          if ((mercury__term_io__Char_1 == (MR_Char) 47))
#line 835 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                          else
#line 806 "term_io.m"
                                            if ((mercury__term_io__Char_1 == (MR_Char) 58))
#line 828 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                            else
#line 806 "term_io.m"
                                              if ((mercury__term_io__Char_1 == (MR_Char) 59))
#line 827 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                              else
#line 806 "term_io.m"
                                                if ((mercury__term_io__Char_1 == (MR_Char) 60))
#line 831 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                else
#line 806 "term_io.m"
                                                  if ((mercury__term_io__Char_1 == (MR_Char) 61))
#line 820 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                  else
#line 806 "term_io.m"
                                                    if ((mercury__term_io__Char_1 == (MR_Char) 62))
#line 832 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                    else
#line 806 "term_io.m"
                                                      if ((mercury__term_io__Char_1 == (MR_Char) 63))
#line 836 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                      else
#line 806 "term_io.m"
                                                        if ((mercury__term_io__Char_1 == (MR_Char) 64))
#line 808 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                        else
#line 806 "term_io.m"
                                                          if ((mercury__term_io__Char_1 == (MR_Char) 91))
#line 825 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                          else
#line 806 "term_io.m"
                                                            if ((mercury__term_io__Char_1 == (MR_Char) 92))
#line 837 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                            else
#line 806 "term_io.m"
                                                              if ((mercury__term_io__Char_1 == (MR_Char) 93))
#line 826 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                              else
#line 806 "term_io.m"
                                                                if ((mercury__term_io__Char_1 == (MR_Char) 94))
#line 812 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                else
#line 806 "term_io.m"
                                                                  if ((mercury__term_io__Char_1 == (MR_Char) 95))
#line 818 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                  else
#line 806 "term_io.m"
                                                                    if ((mercury__term_io__Char_1 == (MR_Char) 96))
#line 821 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                    else
#line 806 "term_io.m"
                                                                      if ((mercury__term_io__Char_1 == (MR_Char) 123))
#line 823 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                      else
#line 806 "term_io.m"
                                                                        if ((mercury__term_io__Char_1 == (MR_Char) 124))
#line 838 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                        else
#line 806 "term_io.m"
                                                                          if ((mercury__term_io__Char_1 == (MR_Char) 125))
#line 824 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                          else
#line 806 "term_io.m"
                                                                            if ((mercury__term_io__Char_1 == (MR_Char) 126))
#line 822 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                            else
#line 806 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_FALSE;
#line 795 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 797 "term_io.m"
              {
#line 797 "term_io.m"
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

#line 9322 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_42_42  = Int;
#line 66 "char.opt"
}
#line 797 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_42_42 >= (MR_Integer) 128);
#line 797 "term_io.m"
              }
#line 795 "term_io.m"
          }
#line 757 "term_io.m"
        if (mercury__term_io__succeeded)
#line 700 "string.opt"
          {
#line 700 "string.opt"
            MR_Word mercury__term_io__V_5_50;
#line 700 "string.opt"
            MR_Word mercury__term_io__V_6_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 701 "string.opt"
            {
#line 701 "string.opt"
              mercury__term_io__V_5_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_50, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_1));
#line 701 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_50, 1) = ((MR_Box) (mercury__term_io__V_6_51));
#line 701 "string.opt"
            }
#line 703 "string.opt"
            {
#line 703 "string.opt"
              mercury__string__to_char_list_2_p_1(mercury__term_io__String_2, mercury__term_io__V_5_50);
#line 703 "string.opt"
              return;
            }
#line 700 "string.opt"
          }
#line 757 "term_io.m"
        else
#line 758 "term_io.m"
          {
#line 758 "term_io.m"
            *mercury__term_io__String_2 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_1);
          }
#line 757 "term_io.m"
      }
#line 755 "term_io.m"
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
#line 748 "term_io.m"
  {
#line 748 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 748 "term_io.m"
    MR_String mercury__term_io__String_4;

#line 748 "term_io.m"
    {
#line 748 "term_io.m"
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__Char_3, &mercury__term_io__String_4);
    }
#line 748 "term_io.m"
    return mercury__term_io__String_4;
#line 748 "term_io.m"
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
#line 741 "term_io.m"
  {
#line 741 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 741 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_8;

#line 873 "term_io.m"
    if ((mercury__term_io__Char_6 == (MR_Char) 8))
#line 878 "term_io.m"
      {
#line 878 "term_io.m"
        mercury__term_io__QuoteChar_8 = (MR_Char) 98;
#line 878 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 878 "term_io.m"
      }
#line 873 "term_io.m"
    else
#line 873 "term_io.m"
      if ((mercury__term_io__Char_6 == (MR_Char) 9))
#line 877 "term_io.m"
        {
#line 877 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 116;
#line 877 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 877 "term_io.m"
        }
#line 873 "term_io.m"
      else
#line 873 "term_io.m"
        if ((mercury__term_io__Char_6 == (MR_Char) 10))
#line 876 "term_io.m"
          {
#line 876 "term_io.m"
            mercury__term_io__QuoteChar_8 = (MR_Char) 110;
#line 876 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
          }
#line 873 "term_io.m"
        else
#line 873 "term_io.m"
          if ((mercury__term_io__Char_6 == (MR_Char) 34))
#line 874 "term_io.m"
            {
#line 874 "term_io.m"
              mercury__term_io__QuoteChar_8 = (MR_Char) 34;
#line 874 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
            }
#line 873 "term_io.m"
          else
#line 873 "term_io.m"
            if ((mercury__term_io__Char_6 == (MR_Char) 39))
#line 873 "term_io.m"
              {
#line 873 "term_io.m"
                mercury__term_io__QuoteChar_8 = (MR_Char) 39;
#line 873 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
              }
#line 873 "term_io.m"
            else
#line 873 "term_io.m"
              if ((mercury__term_io__Char_6 == (MR_Char) 92))
#line 875 "term_io.m"
                {
#line 875 "term_io.m"
                  mercury__term_io__QuoteChar_8 = (MR_Char) 92;
#line 875 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
                }
#line 873 "term_io.m"
              else
#line 873 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 741 "term_io.m"
    if (mercury__term_io__succeeded)
#line 739 "term_io.m"
      {
#line 739 "term_io.m"
        MR_Box mercury__term_io__STATE_VARIABLE_State_12_12;
#line 9507 "term_io.c"
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9509 "term_io.c"
        void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 9512 "term_io.c"
        {
#line 9514 "term_io.c"
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 92)), mercury__term_io__STATE_VARIABLE_State_0_9, &mercury__term_io__STATE_VARIABLE_State_12_12);
        }
#line 9517 "term_io.c"
        mercury__term_io__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9519 "term_io.c"
        {
#line 9521 "term_io.c"
          mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_8)), mercury__term_io__STATE_VARIABLE_State_12_12, mercury__term_io__STATE_VARIABLE_State_10);
#line 9523 "term_io.c"
          return;
        }
#line 739 "term_io.m"
      }
#line 741 "term_io.m"
    else
#line 743 "term_io.m"
      {
#line 795 "term_io.m"
        {
#line 795 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_6);
        }
#line 795 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
          {
#line 806 "term_io.m"
            if ((mercury__term_io__Char_6 == (MR_Char) 32))
#line 806 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
            else
#line 806 "term_io.m"
              if ((mercury__term_io__Char_6 == (MR_Char) 33))
#line 807 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
              else
#line 806 "term_io.m"
                if ((mercury__term_io__Char_6 == (MR_Char) 34))
#line 830 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                else
#line 806 "term_io.m"
                  if ((mercury__term_io__Char_6 == (MR_Char) 35))
#line 809 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                  else
#line 806 "term_io.m"
                    if ((mercury__term_io__Char_6 == (MR_Char) 36))
#line 810 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                    else
#line 806 "term_io.m"
                      if ((mercury__term_io__Char_6 == (MR_Char) 37))
#line 811 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                      else
#line 806 "term_io.m"
                        if ((mercury__term_io__Char_6 == (MR_Char) 38))
#line 813 "term_io.m"
                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                        else
#line 806 "term_io.m"
                          if ((mercury__term_io__Char_6 == (MR_Char) 39))
#line 829 "term_io.m"
                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                          else
#line 806 "term_io.m"
                            if ((mercury__term_io__Char_6 == (MR_Char) 40))
#line 815 "term_io.m"
                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                            else
#line 806 "term_io.m"
                              if ((mercury__term_io__Char_6 == (MR_Char) 41))
#line 816 "term_io.m"
                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                              else
#line 806 "term_io.m"
                                if ((mercury__term_io__Char_6 == (MR_Char) 42))
#line 814 "term_io.m"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                else
#line 806 "term_io.m"
                                  if ((mercury__term_io__Char_6 == (MR_Char) 43))
#line 819 "term_io.m"
                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                  else
#line 806 "term_io.m"
                                    if ((mercury__term_io__Char_6 == (MR_Char) 44))
#line 834 "term_io.m"
                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                    else
#line 806 "term_io.m"
                                      if ((mercury__term_io__Char_6 == (MR_Char) 45))
#line 817 "term_io.m"
                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                      else
#line 806 "term_io.m"
                                        if ((mercury__term_io__Char_6 == (MR_Char) 46))
#line 833 "term_io.m"
                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                        else
#line 806 "term_io.m"
                                          if ((mercury__term_io__Char_6 == (MR_Char) 47))
#line 835 "term_io.m"
                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                          else
#line 806 "term_io.m"
                                            if ((mercury__term_io__Char_6 == (MR_Char) 58))
#line 828 "term_io.m"
                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                            else
#line 806 "term_io.m"
                                              if ((mercury__term_io__Char_6 == (MR_Char) 59))
#line 827 "term_io.m"
                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                              else
#line 806 "term_io.m"
                                                if ((mercury__term_io__Char_6 == (MR_Char) 60))
#line 831 "term_io.m"
                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                else
#line 806 "term_io.m"
                                                  if ((mercury__term_io__Char_6 == (MR_Char) 61))
#line 820 "term_io.m"
                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                  else
#line 806 "term_io.m"
                                                    if ((mercury__term_io__Char_6 == (MR_Char) 62))
#line 832 "term_io.m"
                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                    else
#line 806 "term_io.m"
                                                      if ((mercury__term_io__Char_6 == (MR_Char) 63))
#line 836 "term_io.m"
                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                      else
#line 806 "term_io.m"
                                                        if ((mercury__term_io__Char_6 == (MR_Char) 64))
#line 808 "term_io.m"
                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                        else
#line 806 "term_io.m"
                                                          if ((mercury__term_io__Char_6 == (MR_Char) 91))
#line 825 "term_io.m"
                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                          else
#line 806 "term_io.m"
                                                            if ((mercury__term_io__Char_6 == (MR_Char) 92))
#line 837 "term_io.m"
                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                            else
#line 806 "term_io.m"
                                                              if ((mercury__term_io__Char_6 == (MR_Char) 93))
#line 826 "term_io.m"
                                                                mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                              else
#line 806 "term_io.m"
                                                                if ((mercury__term_io__Char_6 == (MR_Char) 94))
#line 812 "term_io.m"
                                                                  mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                else
#line 806 "term_io.m"
                                                                  if ((mercury__term_io__Char_6 == (MR_Char) 95))
#line 818 "term_io.m"
                                                                    mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                  else
#line 806 "term_io.m"
                                                                    if ((mercury__term_io__Char_6 == (MR_Char) 96))
#line 821 "term_io.m"
                                                                      mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                    else
#line 806 "term_io.m"
                                                                      if ((mercury__term_io__Char_6 == (MR_Char) 123))
#line 823 "term_io.m"
                                                                        mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                      else
#line 806 "term_io.m"
                                                                        if ((mercury__term_io__Char_6 == (MR_Char) 124))
#line 838 "term_io.m"
                                                                          mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                        else
#line 806 "term_io.m"
                                                                          if ((mercury__term_io__Char_6 == (MR_Char) 125))
#line 824 "term_io.m"
                                                                            mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                          else
#line 806 "term_io.m"
                                                                            if ((mercury__term_io__Char_6 == (MR_Char) 126))
#line 822 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_TRUE;
#line 806 "term_io.m"
                                                                            else
#line 806 "term_io.m"
                                                                              mercury__term_io__succeeded = MR_FALSE;
#line 795 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 797 "term_io.m"
              {
#line 797 "term_io.m"
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

#line 9761 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_20_20  = Int;
#line 66 "char.opt"
}
#line 797 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_20_20 >= (MR_Integer) 128);
#line 797 "term_io.m"
              }
#line 795 "term_io.m"
          }
#line 743 "term_io.m"
        if (mercury__term_io__succeeded)
#line 9776 "term_io.c"
          {
#line 9778 "term_io.c"
            void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9781 "term_io.c"
            {
#line 9783 "term_io.c"
              mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) (mercury__term_io__Char_6)), mercury__term_io__STATE_VARIABLE_State_0_9, mercury__term_io__STATE_VARIABLE_State_10);
#line 9785 "term_io.c"
              return;
            }
#line 9788 "term_io.c"
          }
#line 743 "term_io.m"
        else
#line 744 "term_io.m"
          {
#line 744 "term_io.m"
            MR_String mercury__term_io__V_15_15;
#line 9796 "term_io.c"
            void MR_CALL (* mercury__term_io__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 744 "term_io.m"
            {
#line 744 "term_io.m"
              mercury__term_io__V_15_15 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_6);
            }
#line 9804 "term_io.c"
            mercury__term_io__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9806 "term_io.c"
            {
#line 9808 "term_io.c"
              mercury__term_io__func_3(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_17), mercury__term_io__Stream_5, ((MR_Box) (mercury__term_io__V_15_15)), mercury__term_io__STATE_VARIABLE_State_0_9, mercury__term_io__STATE_VARIABLE_State_10);
#line 9810 "term_io.c"
              return;
            }
#line 744 "term_io.m"
          }
#line 743 "term_io.m"
      }
#line 741 "term_io.m"
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
#line 733 "term_io.m"
  {
#line 733 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 733 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_11;
#line 733 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_12;
#line 733 "term_io.m"
    MR_Word mercury__term_io__Stream_6;
#line 733 "term_io.m"
    MR_Box mercury__term_io__Stream_4_15;

#line 1352 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_3_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 9853 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_15  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__Stream_4_15;
#line 9862 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 9864 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 735 "term_io.m"
    {
#line 735 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__Char_4);
#line 735 "term_io.m"
      return;
    }
#line 733 "term_io.m"
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
#line 607 "term_io.m"
  {
#line 607 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 607 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;
#line 607 "term_io.m"
    MR_String mercury__term_io__V_7_7;
#line 607 "term_io.m"
    MR_String mercury__term_io__V_10_10;
#line 607 "term_io.m"
    MR_Word mercury__term_io__V_16_16;
#line 607 "term_io.m"
    MR_String mercury__term_io__V_17_17;
#line 607 "term_io.m"
    MR_Word mercury__term_io__MaybeWidth_7_24;
#line 607 "term_io.m"
    MR_Word mercury__term_io__MaybePrec_8_25;

#line 748 "term_io.m"
    {
#line 748 "term_io.m"
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_3, &mercury__term_io__V_7_7);
    }
#line 9909 "term_io.c"
    mercury__term_io__V_16_16 = (MR_Word) &mercury__term_io_scalar_common_5[0];
#line 20 "string.format.opt"
    mercury__term_io__MaybeWidth_7_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.format.opt"
    mercury__term_io__MaybePrec_8_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "string.format.opt"
    {
#line 22 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__term_io__V_16_16, mercury__term_io__MaybeWidth_7_24, mercury__term_io__MaybePrec_8_25, mercury__term_io__V_7_7, &mercury__term_io__V_10_10);
    }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2(mercury__term_io__V_10_10, (MR_String) "\'", &mercury__term_io__V_17_17);
    }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__V_17_17, &mercury__term_io__HeadVar__2_2);
    }
#line 607 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 607 "term_io.m"
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
#line 604 "term_io.m"
  {
#line 604 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 604 "term_io.m"
    {
#line 604 "term_io.m"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_5, mercury__term_io__C_6, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 604 "term_io.m"
      return;
    }
#line 604 "term_io.m"
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
#line 601 "term_io.m"
  {
#line 601 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 601 "term_io.m"
    MR_String mercury__term_io__V_8_8;

#line 602 "term_io.m"
    {
#line 602 "term_io.m"
      mercury__term_io__V_8_8 = mercury__term_io__quoted_char_1_f_0(mercury__term_io__C_4);
    }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_char_3_p_0

	MR_String Message;

	Message =  mercury__term_io__V_8_8 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 10002 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 601 "term_io.m"
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
#line 616 "term_io.m"
  {
#line 616 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 616 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;

#line 617 "term_io.m"
    {
#line 617 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__term_io__S_3, (MR_Integer) 1);
    }
#line 616 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 616 "term_io.m"
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
#line 613 "term_io.m"
  {
#line 613 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 614 "term_io.m"
    {
#line 614 "term_io.m"
      mercury__term_io__quote_atom_agt_5_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__S_6, (MR_Integer) 1, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 614 "term_io.m"
      return;
    }
#line 613 "term_io.m"
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
#line 610 "term_io.m"
  {
#line 610 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 610 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_18;
#line 610 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_19;
#line 610 "term_io.m"
    MR_Word mercury__term_io__Stream_15;
#line 610 "term_io.m"
    MR_Box mercury__term_io__Stream_4_22;

#line 1352 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_3_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 10104 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_22  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
    mercury__term_io__Stream_15 = (MR_Word) mercury__term_io__Stream_4_22;
#line 10113 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_18 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 10115 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_19 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 621 "term_io.m"
    {
#line 621 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_18, mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__Stream_15, mercury__term_io__S_4, (MR_Integer) 1);
#line 621 "term_io.m"
      return;
    }
#line 610 "term_io.m"
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
#line 703 "term_io.m"
  {
#line 703 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 703 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;
#line 703 "term_io.m"
    MR_Word mercury__term_io__V_4_4;
#line 703 "term_io.m"
    MR_Word mercury__term_io__V_6_6;
#line 703 "term_io.m"
    MR_String mercury__term_io__V_7_7;
#line 703 "term_io.m"
    MR_Word mercury__term_io__V_8_8;
#line 703 "term_io.m"
    MR_Word mercury__term_io__V_10_10;

#line 704 "term_io.m"
    {
#line 704 "term_io.m"
      mercury__term_io__V_7_7 = mercury__term_io__escaped_string_1_f_0(mercury__term_io__S_3);
    }
#line 704 "term_io.m"
    mercury__term_io__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 704 "term_io.m"
    mercury__term_io__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[2]);
#line 704 "term_io.m"
    {
#line 704 "term_io.m"
      mercury__term_io__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 0) = ((MR_Box) (mercury__term_io__V_7_7));
#line 704 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 1) = ((MR_Box) (mercury__term_io__V_8_8));
#line 704 "term_io.m"
    }
#line 704 "term_io.m"
    {
#line 704 "term_io.m"
      mercury__term_io__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_4_4, 0) = ((MR_Box) ((MR_String) "\""));
#line 704 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_4_4, 1) = ((MR_Box) (mercury__term_io__V_6_6));
#line 704 "term_io.m"
    }
#line 704 "term_io.m"
    {
#line 704 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__term_io__V_4_4);
    }
#line 703 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 703 "term_io.m"
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
#line 698 "term_io.m"
  {
#line 698 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 698 "term_io.m"
    MR_Box mercury__term_io__STATE_VARIABLE_State_11_11;
#line 698 "term_io.m"
    MR_Box mercury__term_io__STATE_VARIABLE_State_12_12;
#line 10219 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10221 "term_io.c"
    void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10224 "term_io.c"
    {
#line 10226 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), mercury__term_io__STATE_VARIABLE_State_0_8, &mercury__term_io__STATE_VARIABLE_State_11_11);
    }
#line 700 "term_io.m"
    {
#line 700 "term_io.m"
      mercury__term_io__write_escaped_string_4_p_0(mercury__term_io__TypeClassInfo_for_writer_15, mercury__term_io__TypeClassInfo_for_writer_16, mercury__term_io__Stream_5, mercury__term_io__S_6, mercury__term_io__STATE_VARIABLE_State_11_11, &mercury__term_io__STATE_VARIABLE_State_12_12);
    }
#line 10234 "term_io.c"
    mercury__term_io__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10236 "term_io.c"
    {
#line 10238 "term_io.c"
      mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), mercury__term_io__STATE_VARIABLE_State_12_12, mercury__term_io__STATE_VARIABLE_State_9);
#line 10240 "term_io.c"
      return;
    }
#line 698 "term_io.m"
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
#line 694 "term_io.m"
  {
#line 694 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 694 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_11;
#line 694 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_12;
#line 694 "term_io.m"
    MR_Word mercury__term_io__Stream_6;
#line 694 "term_io.m"
    MR_Box mercury__term_io__Stream_4_15;
#line 10267 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10269 "term_io.c"
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_11_22;
#line 10271 "term_io.c"
    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10273 "term_io.c"
    MR_Box mercury__term_io__conv3_STATE_VARIABLE_IO_8;

#line 1352 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_string_3_p_0

	MercuryFilePtr Stream;

		{
#line 1352 "io.opt"

    Stream = mercury_current_text_output();

#line 10287 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Stream_4_15  = (MR_Box) Stream;
#line 1352 "io.opt"
}
#line 665 "io.opt"
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__Stream_4_15;
#line 10296 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 10298 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 10300 "term_io.c"
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10302 "term_io.c"
    {
#line 10304 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_11_22);
    }
#line 700 "term_io.m"
    {
#line 700 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__S_4);
    }
#line 10312 "term_io.c"
    mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10314 "term_io.c"
    {
#line 10316 "term_io.c"
      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_IO_8);
    }
#line 694 "term_io.m"
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
#line 299 "term_io.m"
  {
#line 299 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 300 "term_io.m"
    MR_Word mercury__term_io__V_10_10;
#line 300 "term_io.m"
    MR_Integer mercury__term_io__V_11_11;

#line 300 "term_io.m"
    {
#line 300 "term_io.m"
      mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_17, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__Ops_6, mercury__term_io__Variable_7, mercury__term_io__VarSet_8, &mercury__term_io__V_10_10, (MR_Integer) 0, &mercury__term_io__V_11_11);
    }
#line 299 "term_io.m"
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
#line 295 "term_io.m"
  {
#line 295 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 295 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_14;
#line 300 "term_io.m"
    MR_Word mercury__term_io__V_24_24;
#line 300 "term_io.m"
    MR_Integer mercury__term_io__V_25_25;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10382 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_14 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 300 "term_io.m"
    {
#line 300 "term_io.m"
      mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__TypeClassInfo_for_op_table_14, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Variable_5, mercury__term_io__VarSet_6, &mercury__term_io__V_24_24, (MR_Integer) 0, &mercury__term_io__V_25_25);
    }
#line 295 "term_io.m"
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
#line 571 "term_io.m"
  {
#line 571 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 571 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;

#line 572 "term_io.m"
    {
#line 572 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__term_io__format_constant_agt_2_f_0(mercury__term_io__Const_3, (MR_Integer) 1);
    }
#line 571 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 571 "term_io.m"
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
#line 548 "term_io.m"
  {
#line 548 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 549 "term_io.m"
    {
#line 549 "term_io.m"
      mercury__term_io__write_constant_4_p_0(mercury__term_io__Const_4, (MR_Integer) 1);
#line 549 "term_io.m"
      return;
    }
#line 548 "term_io.m"
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
#line 887 "term_io.m"
  {
#line 887 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 887 "term_io.m"
    MR_Integer mercury__term_io__V_38_38;
#line 887 "term_io.m"
    MR_Integer mercury__term_io__V_42_42;
#line 10467 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_15, (MR_Integer) 0)), (MR_Integer) 12)));
#line 10469 "term_io.c"
    MR_Box mercury__term_io__conv1_V_42_42;
#line 336 "term_io.m"
    MR_Word mercury__term_io__V_23_23;
#line 336 "term_io.m"
    MR_Integer mercury__term_io__V_24_24;

#line 10476 "term_io.c"
    {
#line 10478 "term_io.c"
      mercury__term_io__conv1_V_42_42 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_15), mercury__term_io__Ops_6);
    }
#line 10481 "term_io.c"
    mercury__term_io__V_42_42 = ((MR_Integer) mercury__term_io__conv1_V_42_42);
#line 336 "term_io.m"
    mercury__term_io__V_38_38 = (mercury__term_io__V_42_42 + (MR_Integer) 1);
#line 336 "term_io.m"
    {
#line 336 "term_io.m"
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

#line 10502 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 887 "term_io.m"
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
#line 883 "term_io.m"
  {
#line 883 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 883 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_14;
#line 883 "term_io.m"
    MR_Integer mercury__term_io__V_48_48;
#line 883 "term_io.m"
    MR_Integer mercury__term_io__V_52_52;
#line 10534 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
#line 10536 "term_io.c"
    MR_Box mercury__term_io__conv1_V_52_52;
#line 336 "term_io.m"
    MR_Word mercury__term_io__V_33_33;
#line 336 "term_io.m"
    MR_Integer mercury__term_io__V_34_34;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10545 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_14 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 10547 "term_io.c"
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 10549 "term_io.c"
    {
#line 10551 "term_io.c"
      mercury__term_io__conv1_V_52_52 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_14), ((MR_Box) ((MR_Integer) 0)));
    }
#line 10554 "term_io.c"
    mercury__term_io__V_52_52 = ((MR_Integer) mercury__term_io__conv1_V_52_52);
#line 336 "term_io.m"
    mercury__term_io__V_48_48 = (mercury__term_io__V_52_52 + (MR_Integer) 1);
#line 336 "term_io.m"
    {
#line 336 "term_io.m"
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

#line 10575 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 883 "term_io.m"
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
#line 328 "term_io.m"
  {
#line 328 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 328 "term_io.m"
    MR_Integer mercury__term_io__V_29_29;
#line 328 "term_io.m"
    MR_Integer mercury__term_io__V_33_33;
#line 10609 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12)));
#line 10611 "term_io.c"
    MR_Box mercury__term_io__conv1_V_33_33;
#line 336 "term_io.m"
    MR_Word mercury__term_io__V_10_10;
#line 336 "term_io.m"
    MR_Integer mercury__term_io__V_11_11;

#line 10618 "term_io.c"
    {
#line 10620 "term_io.c"
      mercury__term_io__conv1_V_33_33 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_16), mercury__term_io__Ops_6);
    }
#line 10623 "term_io.c"
    mercury__term_io__V_33_33 = ((MR_Integer) mercury__term_io__conv1_V_33_33);
#line 336 "term_io.m"
    mercury__term_io__V_29_29 = (mercury__term_io__V_33_33 + (MR_Integer) 1);
#line 336 "term_io.m"
    {
#line 336 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_17, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__Ops_6, mercury__term_io__Term_8, mercury__term_io__V_29_29, mercury__term_io__VarSet_7, &mercury__term_io__V_10_10, (MR_Integer) 0, &mercury__term_io__V_11_11);
    }
#line 328 "term_io.m"
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
#line 324 "term_io.m"
  {
#line 324 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 324 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_14;
#line 324 "term_io.m"
    MR_Integer mercury__term_io__V_39_39;
#line 324 "term_io.m"
    MR_Integer mercury__term_io__V_43_43;
#line 10658 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
#line 10660 "term_io.c"
    MR_Box mercury__term_io__conv1_V_43_43;
#line 336 "term_io.m"
    MR_Word mercury__term_io__V_24_24;
#line 336 "term_io.m"
    MR_Integer mercury__term_io__V_25_25;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10669 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_14 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 10671 "term_io.c"
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 10673 "term_io.c"
    {
#line 10675 "term_io.c"
      mercury__term_io__conv1_V_43_43 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_14), ((MR_Box) ((MR_Integer) 0)));
    }
#line 10678 "term_io.c"
    mercury__term_io__V_43_43 = ((MR_Integer) mercury__term_io__conv1_V_43_43);
#line 336 "term_io.m"
    mercury__term_io__V_39_39 = (mercury__term_io__V_43_43 + (MR_Integer) 1);
#line 336 "term_io.m"
    {
#line 336 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__TypeClassInfo_for_op_table_14, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Term_6, mercury__term_io__V_39_39, mercury__term_io__VarSet_5, &mercury__term_io__V_24_24, (MR_Integer) 0, &mercury__term_io__V_25_25);
    }
#line 324 "term_io.m"
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

#line 10735 "term_io.c"

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

#line 10758 "term_io.c"

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
#line 265 "term_io.m"
  {
#line 265 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 265 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_12;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10807 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_12 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 267 "term_io.m"
    {
#line 267 "term_io.m"
      mercury__term_io__read_term_with_op_table_4_p_0(mercury__term_io__TypeInfo_for_T_11, mercury__term_io__TypeClassInfo_for_op_table_12, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Result_4);
#line 267 "term_io.m"
      return;
    }
#line 265 "term_io.m"
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
