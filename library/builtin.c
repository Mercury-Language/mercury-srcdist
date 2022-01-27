/*
** Automatically generated from `builtin.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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


/* :- module builtin. */
/* :- implementation. */

/*
INIT mercury__builtin__init
ENDINIT
*/

#include "builtin.mih"
#include "builtin.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
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




#line 93 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__plain_builtin__type_ctor_info_comparison_result_0__pseudo_1__pseudo_1;

#line 96 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0;

#line 99 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0;

#line 102 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0;

#line 105 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1;

#line 108 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2;

#line 111 "builtin.c"
static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_value_ordered_comparison_result_0[3];

#line 114 "builtin.c"
static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_name_ordered_comparison_result_0[3];

#line 117 "builtin.c"
static const MR_Integer mercury__builtin__builtin__functor_number_map_comparison_result_0[3];

#line 120 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__builtin____vpti_pred_2__pseudo_1__pseudo_1;

#line 123 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____compare_1_0_10001(
#line 126 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 128 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 130 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3);

#line 133 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____compare_1_0_10001(
#line 136 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 138 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 140 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 142 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4);

#line 145 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_func_1_0_10001(
#line 148 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 150 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 152 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3);

#line 155 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_func_1_0_10001(
#line 158 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 160 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 162 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 164 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4);

#line 167 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_pred_1_0_10001(
#line 170 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 172 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 174 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3);

#line 177 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_pred_1_0_10001(
#line 180 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 182 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 184 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 186 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4);

#line 189 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_result_0_0_10001(
#line 192 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 194 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2);

#line 197 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_result_0_0_10001(
#line 200 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_1,
#line 202 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 204 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3);

#line 207 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____unify_1_0_10001(
#line 210 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 212 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 214 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3);

#line 217 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____unify_1_0_10001(
#line 220 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 222 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 224 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 226 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 692 "builtin.m"
static void MR_CALL 
mercury__builtin__tuple_arg_3_p_0(
#line 692 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_8,
#line 692 "builtin.m"
  MR_Word * mercury__builtin__TypeInfo_for_ArgT_7,
#line 692 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1,
#line 692 "builtin.m"
  MR_Integer mercury__builtin__HeadVar__2_2,
#line 692 "builtin.m"
  MR_Box * mercury__builtin__HeadVar__3_3);

#line 680 "builtin.m"
static void MR_CALL 
mercury__builtin__tuple_arity_2_p_0(
#line 680 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_6,
#line 680 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1,
#line 680 "builtin.m"
  MR_Integer * mercury__builtin__HeadVar__2_2);

#line 658 "builtin.m"
static void MR_CALL 
mercury__builtin__compare_rep_tuple_pos_5_p_0(
#line 658 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_17,
#line 658 "builtin.m"
  MR_Word * mercury__builtin__Result_6,
#line 658 "builtin.m"
  MR_Box mercury__builtin__TermA_7,
#line 658 "builtin.m"
  MR_Box mercury__builtin__TermB_8,
#line 658 "builtin.m"
  MR_Integer mercury__builtin__Index_9,
#line 658 "builtin.m"
  MR_Integer mercury__builtin__Arity_10);

#line 649 "builtin.m"
static void MR_CALL 
mercury__builtin__compare_rep_tuple_3_p_0(
#line 649 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_9,
#line 649 "builtin.m"
  MR_Word * mercury__builtin__Result_4,
#line 649 "builtin.m"
  MR_Box mercury__builtin__TermA_5,
#line 649 "builtin.m"
  MR_Box mercury__builtin__TermB_6);

#line 627 "builtin.m"
static void MR_CALL 
mercury__builtin__compare_tuple_pos_5_p_0(
#line 627 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_17,
#line 627 "builtin.m"
  MR_Word * mercury__builtin__Result_6,
#line 627 "builtin.m"
  MR_Box mercury__builtin__TermA_7,
#line 627 "builtin.m"
  MR_Box mercury__builtin__TermB_8,
#line 627 "builtin.m"
  MR_Integer mercury__builtin__Index_9,
#line 627 "builtin.m"
  MR_Integer mercury__builtin__Arity_10);

#line 619 "builtin.m"
static void MR_CALL 
mercury__builtin__compare_tuple_3_p_0(
#line 619 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_9,
#line 619 "builtin.m"
  MR_Word * mercury__builtin__Result_4,
#line 619 "builtin.m"
  MR_Box mercury__builtin__TermA_5,
#line 619 "builtin.m"
  MR_Box mercury__builtin__TermB_6);

#line 603 "builtin.m"
static MR_bool MR_CALL 
mercury__builtin__unify_tuple_pos_4_p_0(
#line 603 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_14,
#line 603 "builtin.m"
  MR_Box mercury__builtin__TermA_5,
#line 603 "builtin.m"
  MR_Box mercury__builtin__TermB_6,
#line 603 "builtin.m"
  MR_Integer mercury__builtin__Index_7,
#line 603 "builtin.m"
  MR_Integer mercury__builtin__Arity_8);

#line 595 "builtin.m"
static MR_bool MR_CALL 
mercury__builtin__unify_tuple_2_p_0(
#line 595 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_7,
#line 595 "builtin.m"
  MR_Box mercury__builtin__TermA_3,
#line 595 "builtin.m"
  MR_Box mercury__builtin__TermB_4);


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
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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

#line 597 "builtin.m"
MR_bool 
ML_unify_tuple(
#line 597 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_7,
#line 597 "builtin.m"
  MR_Word mercury__builtin__TermA_3,
#line 597 "builtin.m"
  MR_Word mercury__builtin__TermB_4)
#line 597 "builtin.m"
{
#line 597 "builtin.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__builtin__unify_tuple_2_p_0((MR_Word) mercury__builtin__TypeInfo_for_T_7, (MR_Box) mercury__builtin__TermA_3, (MR_Box) mercury__builtin__TermB_4);
	return ret_value;
}

#line 621 "builtin.m"
void 
ML_compare_tuple(
#line 621 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_9,
#line 621 "builtin.m"
  MR_Word * mercury__builtin__Result_4,
#line 621 "builtin.m"
  MR_Word mercury__builtin__TermA_5,
#line 621 "builtin.m"
  MR_Word mercury__builtin__TermB_6)
#line 621 "builtin.m"
{
#line 621 "builtin.m"
	mercury__builtin__compare_tuple_3_p_0((MR_Word) mercury__builtin__TypeInfo_for_T_9, (MR_Word *) mercury__builtin__Result_4, (MR_Box) mercury__builtin__TermA_5, (MR_Box) mercury__builtin__TermB_6);
}

#line 651 "builtin.m"
void 
ML_compare_rep_tuple(
#line 651 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_9,
#line 651 "builtin.m"
  MR_Word * mercury__builtin__Result_4,
#line 651 "builtin.m"
  MR_Word mercury__builtin__TermA_5,
#line 651 "builtin.m"
  MR_Word mercury__builtin__TermB_6)
#line 651 "builtin.m"
{
#line 651 "builtin.m"
	mercury__builtin__compare_rep_tuple_3_p_0((MR_Word) mercury__builtin__TypeInfo_for_T_9, (MR_Word *) mercury__builtin__Result_4, (MR_Box) mercury__builtin__TermA_5, (MR_Box) mercury__builtin__TermB_6);
}


#line 741 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__plain_builtin__type_ctor_info_comparison_result_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_comparison_result_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 752 "builtin.c"
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

#line 773 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_comparison_result_0
  }
};

#line 784 "builtin.c"
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

#line 805 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_comparison_result_0
  }
};

#line 816 "builtin.c"
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

#line 837 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0 = {
  (MR_String) "=",
  (MR_Integer) 0
};

#line 843 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1 = {
  (MR_String) "<",
  (MR_Integer) 1
};

#line 849 "builtin.c"
static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2 = {
  (MR_String) ">",
  (MR_Integer) 2
};

#line 855 "builtin.c"
static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_value_ordered_comparison_result_0[3] = {
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2
};

#line 862 "builtin.c"
static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_name_ordered_comparison_result_0[3] = {
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2
};

#line 869 "builtin.c"
static const MR_Integer mercury__builtin__builtin__functor_number_map_comparison_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 876 "builtin.c"
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

#line 897 "builtin.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__builtin____vpti_pred_2__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 907 "builtin.c"
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

#line 928 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____compare_1_0_10001(
#line 931 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 933 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 935 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3)
#line 937 "builtin.c"
{
#line 939 "builtin.c"
  {
#line 941 "builtin.c"
    MR_bool mercury__builtin__succeeded;

#line 944 "builtin.c"
    {
#line 946 "builtin.c"
      mercury__builtin__succeeded = mercury__builtin____Unify____compare_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), ((MR_Word) mercury__builtin__wrapper_arg_2), ((MR_Word) mercury__builtin__wrapper_arg_3));
    }
#line 949 "builtin.c"
    return mercury__builtin__succeeded;
#line 951 "builtin.c"
  }
#line 953 "builtin.c"
}

#line 956 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____compare_1_0_10001(
#line 959 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 961 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 963 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 965 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4)
#line 967 "builtin.c"
{
#line 969 "builtin.c"
  {
#line 971 "builtin.c"
    MR_Word mercury__builtin__conv0_HeadVar__1_1;

#line 974 "builtin.c"
    {
#line 976 "builtin.c"
      mercury__builtin____Compare____compare_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), &mercury__builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__builtin__wrapper_arg_3), ((MR_Word) mercury__builtin__wrapper_arg_4));
    }
#line 979 "builtin.c"
    *mercury__builtin__wrapper_arg_2 = ((MR_Box) (mercury__builtin__conv0_HeadVar__1_1));
#line 981 "builtin.c"
  }
#line 983 "builtin.c"
}

#line 986 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_func_1_0_10001(
#line 989 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 991 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 993 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3)
#line 995 "builtin.c"
{
#line 997 "builtin.c"
  {
#line 999 "builtin.c"
    MR_bool mercury__builtin__succeeded;

#line 1002 "builtin.c"
    {
#line 1004 "builtin.c"
      mercury__builtin__succeeded = mercury__builtin____Unify____comparison_func_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), ((MR_Word) mercury__builtin__wrapper_arg_2), ((MR_Word) mercury__builtin__wrapper_arg_3));
    }
#line 1007 "builtin.c"
    return mercury__builtin__succeeded;
#line 1009 "builtin.c"
  }
#line 1011 "builtin.c"
}

#line 1014 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_func_1_0_10001(
#line 1017 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 1019 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 1021 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 1023 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4)
#line 1025 "builtin.c"
{
#line 1027 "builtin.c"
  {
#line 1029 "builtin.c"
    MR_Word mercury__builtin__conv0_HeadVar__1_1;

#line 1032 "builtin.c"
    {
#line 1034 "builtin.c"
      mercury__builtin____Compare____comparison_func_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), &mercury__builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__builtin__wrapper_arg_3), ((MR_Word) mercury__builtin__wrapper_arg_4));
    }
#line 1037 "builtin.c"
    *mercury__builtin__wrapper_arg_2 = ((MR_Box) (mercury__builtin__conv0_HeadVar__1_1));
#line 1039 "builtin.c"
  }
#line 1041 "builtin.c"
}

#line 1044 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_pred_1_0_10001(
#line 1047 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 1049 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 1051 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3)
#line 1053 "builtin.c"
{
#line 1055 "builtin.c"
  {
#line 1057 "builtin.c"
    MR_bool mercury__builtin__succeeded;

#line 1060 "builtin.c"
    {
#line 1062 "builtin.c"
      mercury__builtin__succeeded = mercury__builtin____Unify____comparison_pred_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), ((MR_Word) mercury__builtin__wrapper_arg_2), ((MR_Word) mercury__builtin__wrapper_arg_3));
    }
#line 1065 "builtin.c"
    return mercury__builtin__succeeded;
#line 1067 "builtin.c"
  }
#line 1069 "builtin.c"
}

#line 1072 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_pred_1_0_10001(
#line 1075 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 1077 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 1079 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 1081 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4)
#line 1083 "builtin.c"
{
#line 1085 "builtin.c"
  {
#line 1087 "builtin.c"
    MR_Word mercury__builtin__conv0_HeadVar__1_1;

#line 1090 "builtin.c"
    {
#line 1092 "builtin.c"
      mercury__builtin____Compare____comparison_pred_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), &mercury__builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__builtin__wrapper_arg_3), ((MR_Word) mercury__builtin__wrapper_arg_4));
    }
#line 1095 "builtin.c"
    *mercury__builtin__wrapper_arg_2 = ((MR_Box) (mercury__builtin__conv0_HeadVar__1_1));
#line 1097 "builtin.c"
  }
#line 1099 "builtin.c"
}

#line 1102 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_result_0_0_10001(
#line 1105 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 1107 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2)
#line 1109 "builtin.c"
{
#line 1111 "builtin.c"
  {
#line 1113 "builtin.c"
    MR_bool mercury__builtin__succeeded;

#line 1116 "builtin.c"
    {
#line 1118 "builtin.c"
      mercury__builtin__succeeded = mercury__builtin____Unify____comparison_result_0_0(((MR_Word) mercury__builtin__wrapper_arg_1), ((MR_Word) mercury__builtin__wrapper_arg_2));
    }
#line 1121 "builtin.c"
    return mercury__builtin__succeeded;
#line 1123 "builtin.c"
  }
#line 1125 "builtin.c"
}

#line 1128 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____comparison_result_0_0_10001(
#line 1131 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_1,
#line 1133 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 1135 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3)
#line 1137 "builtin.c"
{
#line 1139 "builtin.c"
  {
#line 1141 "builtin.c"
    MR_Word mercury__builtin__conv0_HeadVar__1_1;

#line 1144 "builtin.c"
    {
#line 1146 "builtin.c"
      mercury__builtin____Compare____comparison_result_0_0(&mercury__builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__builtin__wrapper_arg_2), ((MR_Word) mercury__builtin__wrapper_arg_3));
    }
#line 1149 "builtin.c"
    *mercury__builtin__wrapper_arg_1 = ((MR_Box) (mercury__builtin__conv0_HeadVar__1_1));
#line 1151 "builtin.c"
  }
#line 1153 "builtin.c"
}

#line 1156 "builtin.c"
static MR_bool MR_CALL 
mercury__builtin____Unify____unify_1_0_10001(
#line 1159 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 1161 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_2,
#line 1163 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3)
#line 1165 "builtin.c"
{
#line 1167 "builtin.c"
  {
#line 1169 "builtin.c"
    MR_bool mercury__builtin__succeeded;

#line 1172 "builtin.c"
    {
#line 1174 "builtin.c"
      mercury__builtin__succeeded = mercury__builtin____Unify____unify_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), ((MR_Word) mercury__builtin__wrapper_arg_2), ((MR_Word) mercury__builtin__wrapper_arg_3));
    }
#line 1177 "builtin.c"
    return mercury__builtin__succeeded;
#line 1179 "builtin.c"
  }
#line 1181 "builtin.c"
}

#line 1184 "builtin.c"
static void MR_CALL 
mercury__builtin____Compare____unify_1_0_10001(
#line 1187 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_1,
#line 1189 "builtin.c"
  MR_Box * mercury__builtin__wrapper_arg_2,
#line 1191 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_3,
#line 1193 "builtin.c"
  MR_Box mercury__builtin__wrapper_arg_4)
#line 1195 "builtin.c"
{
#line 1197 "builtin.c"
  {
#line 1199 "builtin.c"
    MR_Word mercury__builtin__conv0_HeadVar__1_1;

#line 1202 "builtin.c"
    {
#line 1204 "builtin.c"
      mercury__builtin____Compare____unify_1_0(((MR_Word) mercury__builtin__wrapper_arg_1), &mercury__builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__builtin__wrapper_arg_3), ((MR_Word) mercury__builtin__wrapper_arg_4));
    }
#line 1207 "builtin.c"
    *mercury__builtin__wrapper_arg_2 = ((MR_Box) (mercury__builtin__conv0_HeadVar__1_1));
#line 1209 "builtin.c"
  }
#line 1211 "builtin.c"
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
#line 1353 "builtin.c"
  {
#line 1355 "builtin.c"
    MR_bool mercury__builtin__succeeded = (mercury__builtin__HeadVar__2_1 == mercury__builtin__HeadVar__2_2);

#line 1358 "builtin.c"
    return mercury__builtin__succeeded;
#line 1360 "builtin.c"
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

#line 692 "builtin.m"
static void MR_CALL 
mercury__builtin__tuple_arg_3_p_0(
#line 692 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_8,
#line 692 "builtin.m"
  MR_Word * mercury__builtin__TypeInfo_for_ArgT_7,
#line 692 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1,
#line 692 "builtin.m"
  MR_Integer mercury__builtin__HeadVar__2_2,
#line 692 "builtin.m"
  MR_Box * mercury__builtin__HeadVar__3_3)
#line 692 "builtin.m"
{
#line 694 "builtin.m"
  {
#line 694 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 697 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__tuple_arg_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_for_ArgT;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_8 ;
	Term = (MR_Word) mercury__builtin__HeadVar__1_1 ;
	Index =  mercury__builtin__HeadVar__2_2 ;
		{
#line 697 "builtin.m"

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];

#line 1624 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__builtin__TypeInfo_for_ArgT_7  = TypeInfo_for_ArgT;
	 *mercury__builtin__HeadVar__3_3  = (MR_Box) Arg;
#line 697 "builtin.m"
}
#line 694 "builtin.m"
  }
#line 692 "builtin.m"
}

#line 680 "builtin.m"
static void MR_CALL 
mercury__builtin__tuple_arity_2_p_0(
#line 680 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_6,
#line 680 "builtin.m"
  MR_Box mercury__builtin__HeadVar__1_1,
#line 680 "builtin.m"
  MR_Integer * mercury__builtin__HeadVar__2_2)
#line 680 "builtin.m"
{
#line 682 "builtin.m"
  {
#line 682 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 685 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__tuple_arity_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_6 ;
		{
#line 685 "builtin.m"

    Arity = MR_TYPEINFO_GET_VAR_ARITY_ARITY((MR_TypeInfo) TypeInfo_for_T);

#line 1666 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__builtin__HeadVar__2_2  = Arity;
#line 685 "builtin.m"
}
#line 682 "builtin.m"
  }
#line 680 "builtin.m"
}

#line 658 "builtin.m"
static void MR_CALL 
mercury__builtin__compare_rep_tuple_pos_5_p_0(
#line 658 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_17,
#line 658 "builtin.m"
  MR_Word * mercury__builtin__Result_6,
#line 658 "builtin.m"
  MR_Box mercury__builtin__TermA_7,
#line 658 "builtin.m"
  MR_Box mercury__builtin__TermB_8,
#line 658 "builtin.m"
  MR_Integer mercury__builtin__Index_9,
#line 658 "builtin.m"
  MR_Integer mercury__builtin__Arity_10)
#line 658 "builtin.m"
{
#line 664 "builtin.m"
  while (MR_TRUE)
#line 664 "builtin.m"
    {
#line 664 "builtin.m"
      /* tailcall optimized into a loop */
#line 664 "builtin.m"
      {
#line 664 "builtin.m"
        MR_bool mercury__builtin__succeeded = (mercury__builtin__Index_9 >= mercury__builtin__Arity_10);

#line 664 "builtin.m"
        if (mercury__builtin__succeeded)
#line 663 "builtin.m"
          *mercury__builtin__Result_6 = (MR_Integer) 0;
#line 664 "builtin.m"
        else
#line 665 "builtin.m"
          {
#line 665 "builtin.m"
            MR_Word mercury__builtin__TypeInfo_18_18;
#line 665 "builtin.m"
            MR_Box mercury__builtin__SubTermA_11;
#line 665 "builtin.m"
            MR_Box mercury__builtin__SubTermB_12;
#line 665 "builtin.m"
            MR_Box mercury__builtin__CastSubTermB_13;
#line 665 "builtin.m"
            MR_Word mercury__builtin__SubResult_14;
#line 694 "builtin.m"
            MR_Word mercury__builtin__TypeInfo_19_19;

#line 697 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__compare_rep_tuple_pos_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_for_ArgT;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_17 ;
	Term = (MR_Word) mercury__builtin__TermA_7 ;
	Index =  mercury__builtin__Index_9 ;
		{
#line 697 "builtin.m"

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];

#line 1750 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__builtin__TypeInfo_18_18  = TypeInfo_for_ArgT;
	 mercury__builtin__SubTermA_11  = (MR_Box) Arg;
#line 697 "builtin.m"
}
#line 697 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__compare_rep_tuple_pos_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_for_ArgT;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_17 ;
	Term = (MR_Word) mercury__builtin__TermB_8 ;
	Index =  mercury__builtin__Index_9 ;
		{
#line 697 "builtin.m"

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];

#line 1781 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__builtin__TypeInfo_19_19  = TypeInfo_for_ArgT;
	 mercury__builtin__SubTermB_12  = (MR_Box) Arg;
#line 697 "builtin.m"
}
#line 667 "builtin.m"
            mercury__builtin__CastSubTermB_13 = mercury__builtin__SubTermB_12;
#line 668 "builtin.m"
            {
#line 668 "builtin.m"
              mercury__builtin__compare_representation_3_p_0(mercury__builtin__TypeInfo_18_18, &mercury__builtin__SubResult_14, mercury__builtin__SubTermA_11, mercury__builtin__CastSubTermB_13);
            }
#line 672 "builtin.m"
            if ((mercury__builtin__SubResult_14 == (MR_Integer) 0))
#line 670 "builtin.m"
              {
#line 670 "builtin.m"
                MR_Integer mercury__builtin__V_15_15 = (mercury__builtin__Index_9 + (MR_Integer) 1);

#line 671 "builtin.m"
                /* direct tailcall eliminated */
#line 671 "builtin.m"
                {
#line 671 "builtin.m"
                  MR_Integer mercury__builtin__Index__tmp_copy_9 = mercury__builtin__V_15_15;

#line 671 "builtin.m"
                  mercury__builtin__Index_9 = mercury__builtin__Index__tmp_copy_9;
#line 671 "builtin.m"
                }
#line 671 "builtin.m"
                continue;
#line 670 "builtin.m"
              }
#line 672 "builtin.m"
            else
#line 676 "builtin.m"
              *mercury__builtin__Result_6 = mercury__builtin__SubResult_14;
#line 665 "builtin.m"
          }
#line 664 "builtin.m"
      }
#line 664 "builtin.m"
      break;
#line 664 "builtin.m"
    }
#line 658 "builtin.m"
}

#line 649 "builtin.m"
static void MR_CALL 
mercury__builtin__compare_rep_tuple_3_p_0(
#line 649 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_9,
#line 649 "builtin.m"
  MR_Word * mercury__builtin__Result_4,
#line 649 "builtin.m"
  MR_Box mercury__builtin__TermA_5,
#line 649 "builtin.m"
  MR_Box mercury__builtin__TermB_6)
#line 649 "builtin.m"
{
#line 654 "builtin.m"
  {
#line 654 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 654 "builtin.m"
    MR_Integer mercury__builtin__Arity_7;

#line 685 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__compare_rep_tuple_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_9 ;
		{
#line 685 "builtin.m"

    Arity = MR_TYPEINFO_GET_VAR_ARITY_ARITY((MR_TypeInfo) TypeInfo_for_T);

#line 1866 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__builtin__Arity_7  = Arity;
#line 685 "builtin.m"
}
#line 656 "builtin.m"
    {
#line 656 "builtin.m"
      mercury__builtin__compare_rep_tuple_pos_5_p_0(mercury__builtin__TypeInfo_for_T_9, mercury__builtin__Result_4, mercury__builtin__TermA_5, mercury__builtin__TermB_6, (MR_Integer) 0, mercury__builtin__Arity_7);
#line 656 "builtin.m"
      return;
    }
#line 654 "builtin.m"
  }
#line 649 "builtin.m"
}

#line 627 "builtin.m"
static void MR_CALL 
mercury__builtin__compare_tuple_pos_5_p_0(
#line 627 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_17,
#line 627 "builtin.m"
  MR_Word * mercury__builtin__Result_6,
#line 627 "builtin.m"
  MR_Box mercury__builtin__TermA_7,
#line 627 "builtin.m"
  MR_Box mercury__builtin__TermB_8,
#line 627 "builtin.m"
  MR_Integer mercury__builtin__Index_9,
#line 627 "builtin.m"
  MR_Integer mercury__builtin__Arity_10)
#line 627 "builtin.m"
{
#line 633 "builtin.m"
  while (MR_TRUE)
#line 633 "builtin.m"
    {
#line 633 "builtin.m"
      /* tailcall optimized into a loop */
#line 633 "builtin.m"
      {
#line 633 "builtin.m"
        MR_bool mercury__builtin__succeeded = (mercury__builtin__Index_9 >= mercury__builtin__Arity_10);

#line 633 "builtin.m"
        if (mercury__builtin__succeeded)
#line 632 "builtin.m"
          *mercury__builtin__Result_6 = (MR_Integer) 0;
#line 633 "builtin.m"
        else
#line 634 "builtin.m"
          {
#line 634 "builtin.m"
            MR_Word mercury__builtin__TypeInfo_18_18;
#line 634 "builtin.m"
            MR_Box mercury__builtin__SubTermA_11;
#line 634 "builtin.m"
            MR_Box mercury__builtin__SubTermB_12;
#line 634 "builtin.m"
            MR_Box mercury__builtin__CastSubTermB_13;
#line 634 "builtin.m"
            MR_Word mercury__builtin__SubResult_14;
#line 694 "builtin.m"
            MR_Word mercury__builtin__TypeInfo_19_19;

#line 697 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__compare_tuple_pos_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_for_ArgT;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_17 ;
	Term = (MR_Word) mercury__builtin__TermA_7 ;
	Index =  mercury__builtin__Index_9 ;
		{
#line 697 "builtin.m"

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];

#line 1957 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__builtin__TypeInfo_18_18  = TypeInfo_for_ArgT;
	 mercury__builtin__SubTermA_11  = (MR_Box) Arg;
#line 697 "builtin.m"
}
#line 697 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__compare_tuple_pos_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_for_ArgT;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_17 ;
	Term = (MR_Word) mercury__builtin__TermB_8 ;
	Index =  mercury__builtin__Index_9 ;
		{
#line 697 "builtin.m"

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];

#line 1988 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__builtin__TypeInfo_19_19  = TypeInfo_for_ArgT;
	 mercury__builtin__SubTermB_12  = (MR_Box) Arg;
#line 697 "builtin.m"
}
#line 636 "builtin.m"
            mercury__builtin__CastSubTermB_13 = mercury__builtin__SubTermB_12;
#line 637 "builtin.m"
            {
#line 637 "builtin.m"
              mercury__builtin__compare_3_p_0(mercury__builtin__TypeInfo_18_18, &mercury__builtin__SubResult_14, mercury__builtin__SubTermA_11, mercury__builtin__CastSubTermB_13);
            }
#line 641 "builtin.m"
            if ((mercury__builtin__SubResult_14 == (MR_Integer) 0))
#line 639 "builtin.m"
              {
#line 639 "builtin.m"
                MR_Integer mercury__builtin__V_15_15 = (mercury__builtin__Index_9 + (MR_Integer) 1);

#line 640 "builtin.m"
                /* direct tailcall eliminated */
#line 640 "builtin.m"
                {
#line 640 "builtin.m"
                  MR_Integer mercury__builtin__Index__tmp_copy_9 = mercury__builtin__V_15_15;

#line 640 "builtin.m"
                  mercury__builtin__Index_9 = mercury__builtin__Index__tmp_copy_9;
#line 640 "builtin.m"
                }
#line 640 "builtin.m"
                continue;
#line 639 "builtin.m"
              }
#line 641 "builtin.m"
            else
#line 645 "builtin.m"
              *mercury__builtin__Result_6 = mercury__builtin__SubResult_14;
#line 634 "builtin.m"
          }
#line 633 "builtin.m"
      }
#line 633 "builtin.m"
      break;
#line 633 "builtin.m"
    }
#line 627 "builtin.m"
}

#line 619 "builtin.m"
static void MR_CALL 
mercury__builtin__compare_tuple_3_p_0(
#line 619 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_9,
#line 619 "builtin.m"
  MR_Word * mercury__builtin__Result_4,
#line 619 "builtin.m"
  MR_Box mercury__builtin__TermA_5,
#line 619 "builtin.m"
  MR_Box mercury__builtin__TermB_6)
#line 619 "builtin.m"
{
#line 623 "builtin.m"
  {
#line 623 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 623 "builtin.m"
    MR_Integer mercury__builtin__Arity_7;

#line 685 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__compare_tuple_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_9 ;
		{
#line 685 "builtin.m"

    Arity = MR_TYPEINFO_GET_VAR_ARITY_ARITY((MR_TypeInfo) TypeInfo_for_T);

#line 2073 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__builtin__Arity_7  = Arity;
#line 685 "builtin.m"
}
#line 625 "builtin.m"
    {
#line 625 "builtin.m"
      mercury__builtin__compare_tuple_pos_5_p_0(mercury__builtin__TypeInfo_for_T_9, mercury__builtin__Result_4, mercury__builtin__TermA_5, mercury__builtin__TermB_6, (MR_Integer) 0, mercury__builtin__Arity_7);
#line 625 "builtin.m"
      return;
    }
#line 623 "builtin.m"
  }
#line 619 "builtin.m"
}

#line 603 "builtin.m"
static MR_bool MR_CALL 
mercury__builtin__unify_tuple_pos_4_p_0(
#line 603 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_14,
#line 603 "builtin.m"
  MR_Box mercury__builtin__TermA_5,
#line 603 "builtin.m"
  MR_Box mercury__builtin__TermB_6,
#line 603 "builtin.m"
  MR_Integer mercury__builtin__Index_7,
#line 603 "builtin.m"
  MR_Integer mercury__builtin__Arity_8)
#line 603 "builtin.m"
{
#line 608 "builtin.m"
  while (MR_TRUE)
#line 608 "builtin.m"
    {
#line 608 "builtin.m"
      /* tailcall optimized into a loop */
#line 608 "builtin.m"
      {
#line 608 "builtin.m"
        MR_bool mercury__builtin__succeeded = (mercury__builtin__Index_7 >= mercury__builtin__Arity_8);

#line 608 "builtin.m"
        if (mercury__builtin__succeeded)
#line 607 "builtin.m"
          mercury__builtin__succeeded = MR_TRUE;
#line 608 "builtin.m"
        else
#line 609 "builtin.m"
          {
#line 609 "builtin.m"
            MR_Word mercury__builtin__TypeInfo_15_15;
#line 609 "builtin.m"
            MR_Box mercury__builtin__SubTermA_9;
#line 609 "builtin.m"
            MR_Box mercury__builtin__SubTermB_10;
#line 609 "builtin.m"
            MR_Box mercury__builtin__CastSubTermB_11;
#line 609 "builtin.m"
            MR_Integer mercury__builtin__V_12_12;
#line 609 "builtin.m"
            MR_Integer mercury__builtin__V_13_13;
#line 694 "builtin.m"
            MR_Word mercury__builtin__TypeInfo_16_16;

#line 697 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__unify_tuple_pos_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_for_ArgT;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_14 ;
	Term = (MR_Word) mercury__builtin__TermA_5 ;
	Index =  mercury__builtin__Index_7 ;
		{
#line 697 "builtin.m"

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];

#line 2164 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__builtin__TypeInfo_15_15  = TypeInfo_for_ArgT;
	 mercury__builtin__SubTermA_9  = (MR_Box) Arg;
#line 697 "builtin.m"
}
#line 697 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__unify_tuple_pos_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_for_ArgT;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_14 ;
	Term = (MR_Word) mercury__builtin__TermB_6 ;
	Index =  mercury__builtin__Index_7 ;
		{
#line 697 "builtin.m"

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];

#line 2195 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__builtin__TypeInfo_16_16  = TypeInfo_for_ArgT;
	 mercury__builtin__SubTermB_10  = (MR_Box) Arg;
#line 697 "builtin.m"
}
#line 611 "builtin.m"
            mercury__builtin__CastSubTermB_11 = mercury__builtin__SubTermB_10;
#line 612 "builtin.m"
            {
#line 612 "builtin.m"
              mercury__builtin__succeeded = mercury__builtin__unify_2_p_0(mercury__builtin__TypeInfo_15_15, mercury__builtin__SubTermA_9, mercury__builtin__CastSubTermB_11);
            }
#line 609 "builtin.m"
            if (mercury__builtin__succeeded)
#line 609 "builtin.m"
              {
#line 613 "builtin.m"
                mercury__builtin__V_13_13 = (MR_Integer) 1;
#line 613 "builtin.m"
                mercury__builtin__V_12_12 = (mercury__builtin__Index_7 + mercury__builtin__V_13_13);
#line 613 "builtin.m"
                /* direct tailcall eliminated */
#line 613 "builtin.m"
                {
#line 613 "builtin.m"
                  MR_Integer mercury__builtin__Index__tmp_copy_7 = mercury__builtin__V_12_12;

#line 613 "builtin.m"
                  mercury__builtin__Index_7 = mercury__builtin__Index__tmp_copy_7;
#line 613 "builtin.m"
                }
#line 613 "builtin.m"
                continue;
#line 609 "builtin.m"
              }
#line 609 "builtin.m"
          }
#line 608 "builtin.m"
        return mercury__builtin__succeeded;
#line 608 "builtin.m"
      }
#line 608 "builtin.m"
      break;
#line 608 "builtin.m"
    }
#line 603 "builtin.m"
}

#line 595 "builtin.m"
static MR_bool MR_CALL 
mercury__builtin__unify_tuple_2_p_0(
#line 595 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_7,
#line 595 "builtin.m"
  MR_Box mercury__builtin__TermA_3,
#line 595 "builtin.m"
  MR_Box mercury__builtin__TermB_4)
#line 595 "builtin.m"
{
#line 599 "builtin.m"
  {
#line 599 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 599 "builtin.m"
    MR_Integer mercury__builtin__Arity_5;

#line 685 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__unify_tuple_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Integer Arity;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_7 ;
		{
#line 685 "builtin.m"

    Arity = MR_TYPEINFO_GET_VAR_ARITY_ARITY((MR_TypeInfo) TypeInfo_for_T);

#line 2277 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__builtin__Arity_5  = Arity;
#line 685 "builtin.m"
}
#line 601 "builtin.m"
    {
#line 601 "builtin.m"
      return mercury__builtin__succeeded = mercury__builtin__unify_tuple_pos_4_p_0(mercury__builtin__TypeInfo_for_T_7, mercury__builtin__TermA_3, mercury__builtin__TermB_4, (MR_Integer) 0, mercury__builtin__Arity_5);
    }
#line 599 "builtin.m"
    return mercury__builtin__succeeded;
#line 599 "builtin.m"
  }
#line 595 "builtin.m"
}

#line 456 "builtin.m"
void MR_CALL 
mercury__builtin__init_runtime_hooks_0_p_0(void)
#line 456 "builtin.m"
{
#line 577 "builtin.m"
  {
#line 577 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 580 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__init_runtime_hooks_0_p_0


		{
#line 580 "builtin.m"

#ifdef MR_HIGHLEVEL_CODE
    MR_special_pred_hooks.MR_unify_tuple_pred = ML_unify_tuple;
    MR_special_pred_hooks.MR_compare_tuple_pred = ML_compare_tuple;
    MR_special_pred_hooks.MR_compare_rep_tuple_pred = ML_compare_rep_tuple;
#else
    MR_special_pred_hooks.MR_unify_tuple_pred =
        MR_ENTRY(mercury__builtin__unify_tuple_2_0);
    MR_special_pred_hooks.MR_compare_tuple_pred =
        MR_ENTRY(mercury__builtin__compare_tuple_3_0);
    MR_special_pred_hooks.MR_compare_rep_tuple_pred =
        MR_ENTRY(mercury__builtin__compare_rep_tuple_3_0);
#endif

#line 2327 "builtin.c"

		;}
#undef MR_PROC_LABEL
#line 580 "builtin.m"
}
#line 577 "builtin.m"
  }
#line 456 "builtin.m"
}

#line 451 "builtin.m"
void MR_CALL 
mercury__builtin__compare_representation_3_p_0(
#line 451 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_4,
#line 451 "builtin.m"
  MR_Word * mercury__builtin__HeadVar__1_1,
#line 451 "builtin.m"
  MR_Box mercury__builtin__HeadVar__2_2,
#line 451 "builtin.m"
  MR_Box mercury__builtin__HeadVar__3_3);

#line 430 "builtin.m"
void MR_CALL 
mercury__builtin__get_one_solution_io_4_p_0(
#line 430 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_11,
#line 430 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_IO_12,
#line 430 "builtin.m"
  MR_Word mercury__builtin__Pred_5,
#line 430 "builtin.m"
  MR_Box * mercury__builtin__X_6,
#line 430 "builtin.m"
  MR_Box mercury__builtin__STATE_VARIABLE_IO_0_8,
#line 430 "builtin.m"
  MR_Box * mercury__builtin__STATE_VARIABLE_IO_9)
#line 430 "builtin.m"
{
#line 508 "builtin.m"
  {
#line 508 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 509 "builtin.m"
    void MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__Pred_5, (MR_Integer) 1)));

#line 509 "builtin.m"
    {
#line 509 "builtin.m"
      mercury__builtin__func_0(((MR_Box) mercury__builtin__Pred_5), mercury__builtin__X_6, mercury__builtin__STATE_VARIABLE_IO_0_8, mercury__builtin__STATE_VARIABLE_IO_9);
    }
#line 1383 "builtin.m"
    {
#line 1383 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
#line 1383 "builtin.m"
      return;
    }
#line 508 "builtin.m"
  }
#line 430 "builtin.m"
}

#line 427 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__get_one_solution_1_f_1(
#line 427 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_5,
#line 427 "builtin.m"
  MR_Word mercury__builtin__CCPred_3,
#line 427 "builtin.m"
  MR_Box * mercury__builtin__OutVal_4)
#line 427 "builtin.m"
{
#line 498 "builtin.m"
  {
#line 498 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 499 "builtin.m"
    MR_bool MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_3, (MR_Integer) 1)));

#line 499 "builtin.m"
    {
#line 499 "builtin.m"
      mercury__builtin__succeeded = mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_3), mercury__builtin__OutVal_4);
    }
#line 499 "builtin.m"
    if (mercury__builtin__succeeded)
#line 499 "builtin.m"
      {
#line 1383 "builtin.m"
        {
#line 1383 "builtin.m"
          mercury__private_builtin__imp_0_p_0();
        }
#line 1383 "builtin.m"
        mercury__builtin__succeeded = MR_TRUE;
#line 499 "builtin.m"
      }
#line 498 "builtin.m"
    return mercury__builtin__succeeded;
#line 498 "builtin.m"
  }
#line 427 "builtin.m"
}

#line 426 "builtin.m"
MR_Box MR_CALL 
mercury__builtin__get_one_solution_1_f_0(
#line 426 "builtin.m"
  MR_Word mercury__builtin__TypeInfo_for_T_5,
#line 426 "builtin.m"
  MR_Word mercury__builtin__CCPred_3)
#line 426 "builtin.m"
{
#line 498 "builtin.m"
  {
#line 498 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 498 "builtin.m"
    MR_Box mercury__builtin__OutVal_4;
#line 499 "builtin.m"
    void MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_3, (MR_Integer) 1)));

#line 499 "builtin.m"
    {
#line 499 "builtin.m"
      mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_3), &mercury__builtin__OutVal_4);
    }
#line 1383 "builtin.m"
    {
#line 1383 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
    }
#line 498 "builtin.m"
    return mercury__builtin__OutVal_4;
#line 498 "builtin.m"
  }
#line 426 "builtin.m"
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
#line 479 "builtin.m"
  {
#line 479 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 479 "builtin.m"
    {
#line 479 "builtin.m"
      return mercury__builtin__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__builtin__TypeInfo_for_T1_5, mercury__builtin__TypeInfo_for_T2_6, mercury__builtin__X_3, mercury__builtin__Y_4);
    }
#line 479 "builtin.m"
    return mercury__builtin__succeeded;
#line 479 "builtin.m"
  }
#line 407 "builtin.m"
}

#line 399 "builtin.m"
void MR_CALL 
mercury__builtin__semipure_true_0_p_0(void)
#line 399 "builtin.m"
{
#line 1386 "builtin.m"
  {
#line 1386 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1386 "builtin.m"
  }
#line 399 "builtin.m"
}

#line 395 "builtin.m"
void MR_CALL 
mercury__builtin__impure_true_0_p_0(void)
#line 395 "builtin.m"
{
#line 1383 "builtin.m"
  {
#line 1383 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1383 "builtin.m"
    {
#line 1383 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
#line 1383 "builtin.m"
      return;
    }
#line 1383 "builtin.m"
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
#line 1326 "builtin.m"
  {
#line 1326 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 1326 "builtin.m"
    MR_Word mercury__builtin__TypeInfo_for_T_4;

#line 1330 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__cc_multi_equal_2_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__builtin__HeadVar__1_1 ;
		{
#line 1330 "builtin.m"

    Y = X;

#line 2567 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__builtin__HeadVar__2_2  = (MR_Box) Y;
#line 1330 "builtin.m"
}
#line 1326 "builtin.m"
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
#line 1333 "builtin.m"
  {
#line 1333 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 1333 "builtin.m"
    MR_Word mercury__builtin__TypeInfo_for_T_4;

#line 1337 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__cc_multi_equal_2_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__builtin__HeadVar__1_1 ;
		{
#line 1337 "builtin.m"

    Y = X;

#line 2610 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__builtin__HeadVar__2_2  = (MR_Box) Y;
#line 1337 "builtin.m"
}
#line 1333 "builtin.m"
  }
#line 390 "builtin.m"
}

#line 384 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__semidet_false_0_p_0(void)
#line 384 "builtin.m"
{
#line 1263 "builtin.m"
  {
#line 1263 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1267 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__semidet_false_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1267 "builtin.m"

    SUCCESS_INDICATOR = MR_FALSE;

#line 2643 "builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1267 "builtin.m"
	}
mercury__builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1263 "builtin.m"
    return mercury__builtin__succeeded;
#line 1263 "builtin.m"
  }
#line 384 "builtin.m"
}

#line 380 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__semidet_true_0_p_0(void)
#line 380 "builtin.m"
{
#line 1256 "builtin.m"
  {
#line 1256 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1260 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__semidet_true_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1260 "builtin.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 2680 "builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1260 "builtin.m"
	}
mercury__builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1256 "builtin.m"
    return mercury__builtin__succeeded;
#line 1256 "builtin.m"
  }
#line 380 "builtin.m"
}

#line 376 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__semidet_fail_0_p_0(void)
#line 376 "builtin.m"
{
#line 1263 "builtin.m"
  {
#line 1263 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1267 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__semidet_fail_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1267 "builtin.m"

    SUCCESS_INDICATOR = MR_FALSE;

#line 2717 "builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1267 "builtin.m"
	}
mercury__builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1263 "builtin.m"
    return mercury__builtin__succeeded;
#line 1263 "builtin.m"
  }
#line 376 "builtin.m"
}

#line 371 "builtin.m"
MR_bool MR_CALL 
mercury__builtin__semidet_succeed_0_p_0(void)
#line 371 "builtin.m"
{
#line 1256 "builtin.m"
  {
#line 1256 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1260 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__semidet_succeed_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1260 "builtin.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 2754 "builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1260 "builtin.m"
	}
mercury__builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1256 "builtin.m"
    return mercury__builtin__succeeded;
#line 1256 "builtin.m"
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
#line 560 "builtin.m"
  {
#line 560 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 560 "builtin.m"
    MR_Word mercury__builtin__V_7_7;

#line 560 "builtin.m"
    {
#line 560 "builtin.m"
      mercury__builtin__compare_3_p_0(mercury__builtin__TypeInfo_for_T_6, &mercury__builtin__V_7_7, mercury__builtin__X_3, mercury__builtin__Y_4);
    }
#line 560 "builtin.m"
    mercury__builtin__succeeded = ((MR_Integer) 1 == mercury__builtin__V_7_7);
#line 560 "builtin.m"
    mercury__builtin__succeeded = !(mercury__builtin__succeeded);
#line 560 "builtin.m"
    return mercury__builtin__succeeded;
#line 560 "builtin.m"
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
#line 557 "builtin.m"
  {
#line 557 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 557 "builtin.m"
    MR_Word mercury__builtin__V_7_7;

#line 558 "builtin.m"
    {
#line 558 "builtin.m"
      mercury__builtin__compare_3_p_0(mercury__builtin__TypeInfo_for_T_6, &mercury__builtin__V_7_7, mercury__builtin__X_3, mercury__builtin__Y_4);
    }
#line 558 "builtin.m"
    mercury__builtin__succeeded = ((MR_Integer) 2 == mercury__builtin__V_7_7);
#line 557 "builtin.m"
    return mercury__builtin__succeeded;
#line 557 "builtin.m"
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
#line 556 "builtin.m"
  {
#line 556 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 556 "builtin.m"
    MR_Word mercury__builtin__V_7_7;

#line 556 "builtin.m"
    {
#line 556 "builtin.m"
      mercury__builtin__compare_3_p_0(mercury__builtin__TypeInfo_for_T_6, &mercury__builtin__V_7_7, mercury__builtin__X_3, mercury__builtin__Y_4);
    }
#line 556 "builtin.m"
    mercury__builtin__succeeded = ((MR_Integer) 2 == mercury__builtin__V_7_7);
#line 556 "builtin.m"
    mercury__builtin__succeeded = !(mercury__builtin__succeeded);
#line 556 "builtin.m"
    return mercury__builtin__succeeded;
#line 556 "builtin.m"
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
#line 553 "builtin.m"
  {
#line 553 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 553 "builtin.m"
    MR_Word mercury__builtin__V_7_7;

#line 554 "builtin.m"
    {
#line 554 "builtin.m"
      mercury__builtin__compare_3_p_0(mercury__builtin__TypeInfo_for_T_6, &mercury__builtin__V_7_7, mercury__builtin__X_3, mercury__builtin__Y_4);
    }
#line 554 "builtin.m"
    mercury__builtin__succeeded = ((MR_Integer) 1 == mercury__builtin__V_7_7);
#line 553 "builtin.m"
    return mercury__builtin__succeeded;
#line 553 "builtin.m"
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
#line 549 "builtin.m"
  {
#line 549 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 549 "builtin.m"
    MR_Word mercury__builtin__R_6;

#line 549 "builtin.m"
    {
#line 549 "builtin.m"
      mercury__builtin__compare_3_p_0(mercury__builtin__TypeInfo_for_T_7, &mercury__builtin__R_6, mercury__builtin__X_4, mercury__builtin__Y_5);
    }
#line 549 "builtin.m"
    return mercury__builtin__R_6;
#line 549 "builtin.m"
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
#line 508 "builtin.m"
  {
#line 508 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 509 "builtin.m"
    void MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__Pred_5, (MR_Integer) 1)));

#line 509 "builtin.m"
    {
#line 509 "builtin.m"
      mercury__builtin__func_0(((MR_Box) mercury__builtin__Pred_5), mercury__builtin__X_6, mercury__builtin__STATE_VARIABLE_IO_0_8, mercury__builtin__STATE_VARIABLE_IO_9);
    }
#line 1383 "builtin.m"
    {
#line 1383 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
#line 1383 "builtin.m"
      return;
    }
#line 508 "builtin.m"
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
#line 493 "builtin.m"
  {
#line 493 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 493 "builtin.m"
    MR_Box mercury__builtin__OutVal0_12;
#line 499 "builtin.m"
    MR_bool MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_1, (MR_Integer) 1)));

#line 499 "builtin.m"
    {
#line 499 "builtin.m"
      mercury__builtin__succeeded = mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_1), &mercury__builtin__OutVal0_12);
    }
#line 499 "builtin.m"
    if (mercury__builtin__succeeded)
#line 499 "builtin.m"
      {
#line 1383 "builtin.m"
        {
#line 1383 "builtin.m"
          mercury__private_builtin__imp_0_p_0();
        }
#line 1383 "builtin.m"
        mercury__builtin__succeeded = MR_TRUE;
#line 499 "builtin.m"
      }
#line 493 "builtin.m"
    if (mercury__builtin__succeeded)
#line 493 "builtin.m"
      {
#line 495 "builtin.m"
        *mercury__builtin__OutVal_2 = mercury__builtin__OutVal0_12;
#line 495 "builtin.m"
        mercury__builtin__succeeded = MR_TRUE;
#line 493 "builtin.m"
      }
#line 493 "builtin.m"
    return mercury__builtin__succeeded;
#line 493 "builtin.m"
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
#line 498 "builtin.m"
  {
#line 498 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 499 "builtin.m"
    MR_bool MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_1, (MR_Integer) 1)));

#line 499 "builtin.m"
    {
#line 499 "builtin.m"
      mercury__builtin__succeeded = mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_1), mercury__builtin__OutVal_2);
    }
#line 499 "builtin.m"
    if (mercury__builtin__succeeded)
#line 499 "builtin.m"
      {
#line 1383 "builtin.m"
        {
#line 1383 "builtin.m"
          mercury__private_builtin__imp_0_p_0();
        }
#line 1383 "builtin.m"
        mercury__builtin__succeeded = MR_TRUE;
#line 499 "builtin.m"
      }
#line 498 "builtin.m"
    return mercury__builtin__succeeded;
#line 498 "builtin.m"
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
#line 488 "builtin.m"
  {
#line 488 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 488 "builtin.m"
    MR_Box mercury__builtin__OutVal_2;
#line 488 "builtin.m"
    MR_Box mercury__builtin__OutVal0_7;
#line 499 "builtin.m"
    void MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_1, (MR_Integer) 1)));

#line 499 "builtin.m"
    {
#line 499 "builtin.m"
      mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_1), &mercury__builtin__OutVal0_7);
    }
#line 1383 "builtin.m"
    {
#line 1383 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
    }
#line 490 "builtin.m"
    mercury__builtin__OutVal_2 = mercury__builtin__OutVal0_7;
#line 488 "builtin.m"
    return mercury__builtin__OutVal_2;
#line 488 "builtin.m"
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
#line 498 "builtin.m"
  {
#line 498 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 498 "builtin.m"
    MR_Box mercury__builtin__OutVal_2;
#line 499 "builtin.m"
    void MR_CALL (* mercury__builtin__func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__builtin__CCPred_1, (MR_Integer) 1)));

#line 499 "builtin.m"
    {
#line 499 "builtin.m"
      mercury__builtin__func_0(((MR_Box) mercury__builtin__CCPred_1), &mercury__builtin__OutVal_2);
    }
#line 1383 "builtin.m"
    {
#line 1383 "builtin.m"
      mercury__private_builtin__imp_0_p_0();
    }
#line 498 "builtin.m"
    return mercury__builtin__OutVal_2;
#line 498 "builtin.m"
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
#line 1390 "builtin.m"
  {
#line 1390 "builtin.m"
    MR_bool mercury__builtin__succeeded;
#line 1390 "builtin.m"
    MR_Box mercury__builtin__HeadVar__2_2;
#line 1390 "builtin.m"
    MR_Word mercury__builtin__TypeInfo_for_T_4;

#line 1393 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__unsafe_cast_any_to_ground_1_f_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__builtin__HeadVar__1_1 ;
		{
#line 1393 "builtin.m"

    Y = X;

#line 3234 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 mercury__builtin__HeadVar__2_2  = (MR_Box) Y;
#line 1393 "builtin.m"
}
#line 1390 "builtin.m"
    return mercury__builtin__HeadVar__2_2;
#line 1390 "builtin.m"
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
#line 1015 "builtin.m"
  {
#line 1015 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1019 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__copy_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_3 ;
	Value = (MR_Word) mercury__builtin__HeadVar__1_1 ;
		{
#line 1019 "builtin.m"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 3337 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__builtin__HeadVar__2_2  = (MR_Box) Copy;
#line 1019 "builtin.m"
}
#line 1015 "builtin.m"
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
#line 1005 "builtin.m"
  {
#line 1005 "builtin.m"
    MR_bool mercury__builtin__succeeded;

#line 1009 "builtin.m"
{
#define MR_PROC_LABEL mercury__builtin__copy_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__builtin__TypeInfo_for_T_3 ;
	Value = (MR_Word) mercury__builtin__HeadVar__1_1 ;
		{
#line 1009 "builtin.m"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 3382 "builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__builtin__HeadVar__2_2  = (MR_Box) Copy;
#line 1009 "builtin.m"
}
#line 1005 "builtin.m"
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
