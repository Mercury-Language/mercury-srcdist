/*
** Automatically generated from `set.m'
** by the Mercury compiler,
** version rotd-2026-03-29
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module set.
// :- implementation.

/*
INIT mercury__set__init
ENDINIT
*/

#include "set.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



struct mercury__set__map_3_p_4_env_0_s {
  MR_Word mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10;
  MR_Word * mercury__set__map_3_p_4_env_0__S2_6;
  MR_Cont mercury__set__map_3_p_4_env_0__cont;
  void * mercury__set__map_3_p_4_env_0__cont_env_ptr;
  MR_Word mercury__set__map_3_p_4_env_0__L2_8;
  MR_Word mercury__set__map_3_p_4_env_0__Var_11;
  MR_Integer mercury__set__map_3_p_4_env_0__Var_12;
  MR_Unsigned mercury__set__map_3_p_4_env_0__Var_13;
  MR_Unsigned mercury__set__map_3_p_4_env_0__Var_14;
};

struct mercury__set__map_3_p_3_env_0_s {
  MR_Word mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10;
  MR_Word * mercury__set__map_3_p_3_env_0__S2_6;
  MR_Cont mercury__set__map_3_p_3_env_0__cont;
  void * mercury__set__map_3_p_3_env_0__cont_env_ptr;
  MR_Word mercury__set__map_3_p_3_env_0__L2_8;
  MR_Word mercury__set__map_3_p_3_env_0__Var_11;
  MR_Integer mercury__set__map_3_p_3_env_0__Var_12;
  MR_Unsigned mercury__set__map_3_p_3_env_0__Var_13;
  MR_Unsigned mercury__set__map_3_p_3_env_0__Var_14;
};


static const MR_FA_PseudoTypeInfo_Struct1 mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1;

static void MR_CALL 
mercury__set__map_3_p_4_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__set__map_3_p_3_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__set__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17);

static MR_bool MR_CALL 
mercury__set____Unify____set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__set____Compare____set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__set_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__set_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__set_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__set_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

const MR_TypeCtorInfo_Struct mercury__set__set__type_ctor_info_set_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__set____Unify____set_1_0_10001)),
  ((MR_Box) (mercury__set____Compare____set_1_0_10001)),
  (MR_String) "set",
  (MR_String) "set",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_1_f_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_Word S_4;

  mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(Var_7, TypeInfo_for_T_5, List_3, &S_4);
  return S_4;
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  MR_Word Var_8;
  MR_Integer Var_10;
  MR_Unsigned Var_12;

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_5, (MR_Word) (List_3), (MR_Unsigned) 0U, &Var_12);
{
#define MR_PROC_LABEL mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_12 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_10  = I;
}
  mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_7, TypeInfo_for_T_5, Var_10, List_3, &Var_8);
  *Set_4 = (MR_Word) (Var_8);
}

MR_bool MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_T_8,
  MR_Word X_1,
  MR_Word Set_2)
{
  MR_bool succeeded;
  MR_Word Var_9;
  MR_Word Var_12 = (MR_Word) (Set_2);

  mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_8, ((MR_Box) (X_1)), (MR_Word) (Var_12), &Var_9);
  succeeded = ((MR_Integer) 1 == Var_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Word X_4)
{
  MR_bool succeeded;

  succeeded = mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(Var_7, TypeInfo_for_T_5, X_4, Set_3);
  return succeeded;
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word T_5)
{
  MR_Word S2_6;
  MR_Word Var_11 = (MR_Word) (S1_4);
  MR_Word Var_12;
  MR_Word conv0_Var_12;

  mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) (Var_11), ((MR_Box) (T_5)), &conv0_Var_12);
  Var_12 = (MR_Word) (conv0_Var_12);
  S2_6 = (MR_Word) (Var_12);
  return S2_6;
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_T_8,
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word Var_11 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  MR_Word Var_12;
  MR_Word conv0_Var_12;

  mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_8, (MR_Word) (Var_11), ((MR_Box) (X_4)), &conv0_Var_12);
  Var_12 = (MR_Word) (conv0_Var_12);
  *STATE_VARIABLE_Set_7 = (MR_Word) (Var_12);
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word Xs_5)
{
  MR_Word S2_6;

  mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_T_7, Xs_5, S1_4, &S2_6);
  return S2_6;
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_T_8,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word Var_11;
  MR_Integer Var_14;
  MR_Unsigned Var_16;
  MR_Word Var_19;
  MR_Word Var_20;

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_8, (MR_Word) (List_4), (MR_Unsigned) 0U, &Var_16);
{
#define MR_PROC_LABEL mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_16 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_14  = I;
}
  mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_10, TypeInfo_for_T_8, Var_14, List_4, &Var_11);
  Var_19 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_10, TypeInfo_for_T_8, Var_11, Var_19, &Var_20);
  *STATE_VARIABLE_Set_7 = (MR_Word) (Var_20);
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  MR_Word S3_6;
  MR_Word Var_11 = (MR_Word) (S1_4);
  MR_Word Var_12 = (MR_Word) (S2_5);
  MR_Word Var_13;

  mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_T_7, Var_11, Var_12, &Var_13);
  S3_6 = (MR_Word) (Var_13);
  return S3_6;
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_110_105_111_110_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  MR_Word Var_10 = (MR_Word) (SetA_4);
  MR_Word Var_11 = (MR_Word) (SetB_5);
  MR_Word Var_12;

  mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_T_7, Var_10, Var_11, &Var_12);
  *Set_6 = (MR_Word) (Var_12);
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  MR_Word S3_6;
  MR_Word Var_11 = (MR_Word) (S1_4);
  MR_Word Var_12 = (MR_Word) (S2_5);
  MR_Word Var_13;
  MR_Word conv0_Var_13;

  mercury__list__intersect_3_p_0(TypeInfo_for_T_7, (MR_Word) (Var_11), (MR_Word) (Var_12), &conv0_Var_13);
  Var_13 = (MR_Word) (conv0_Var_13);
  S3_6 = (MR_Word) (Var_13);
  return S3_6;
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  MR_Word Var_10 = (MR_Word) (SetA_4);
  MR_Word Var_11 = (MR_Word) (SetB_5);
  MR_Word Var_12;
  MR_Word conv0_Var_12;

  mercury__list__intersect_3_p_0(TypeInfo_for_T_7, (MR_Word) (Var_10), (MR_Word) (Var_11), &conv0_Var_12);
  Var_12 = (MR_Word) (conv0_Var_12);
  *Set_6 = (MR_Word) (Var_12);
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  MR_Word S3_6;
  MR_Word Var_11 = (MR_Word) (S1_4);
  MR_Word Var_12 = (MR_Word) (S2_5);
  MR_Word Var_13;
  MR_Word conv0_Var_13;

  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) (Var_11), (MR_Word) (Var_12), &conv0_Var_13);
  Var_13 = (MR_Word) (conv0_Var_13);
  S3_6 = (MR_Word) (Var_13);
  return S3_6;
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  MR_Word Var_10 = (MR_Word) (SetA_4);
  MR_Word Var_11 = (MR_Word) (SetB_5);
  MR_Word Var_12;
  MR_Word conv0_Var_12;

  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) (Var_10), (MR_Word) (Var_11), &conv0_Var_12);
  Var_12 = (MR_Word) (conv0_Var_12);
  *Set_6 = (MR_Word) (Var_12);
}

void MR_CALL 
mercury__set____Compare____set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__set_ordlist____Compare____set_ordlist_1_0(TypeInfo_for_T_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__set____Unify____set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_for_T_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl6_14_p_5(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_bool succeeded;
  MR_Word Var_41 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_7(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl6_14_p_4(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_bool succeeded;
  MR_Word Var_41 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_6(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl6_14_p_3(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_bool succeeded;
  MR_Word Var_41 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_5(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  return succeeded;
}

void MR_CALL 
mercury__set__foldl6_14_p_2(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_Word Var_41 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_2(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
}

void MR_CALL 
mercury__set__foldl6_14_p_1(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_Word Var_41 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_1(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
}

void MR_CALL 
mercury__set__foldl6_14_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_Word Var_41 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_0(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
}

MR_bool MR_CALL 
mercury__set__fold6_14_p_5(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_bool succeeded;
  MR_Word Var_41 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_7(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold6_14_p_4(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_bool succeeded;
  MR_Word Var_41 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_6(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold6_14_p_3(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_bool succeeded;
  MR_Word Var_41 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_5(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  return succeeded;
}

void MR_CALL 
mercury__set__fold6_14_p_2(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_Word Var_41 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_2(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
}

void MR_CALL 
mercury__set__fold6_14_p_1(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_Word Var_41 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_1(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
}

void MR_CALL 
mercury__set__fold6_14_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
  MR_Word TypeInfo_for_F_40,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  MR_Word Var_41 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_0(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, TypeInfo_for_F_40, F_15, Var_41, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
}

MR_bool MR_CALL 
mercury__set__foldl5_12_p_5(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_36 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_5(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl5_12_p_4(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_36 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_4(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl5_12_p_3(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_36 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_3(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

void MR_CALL 
mercury__set__foldl5_12_p_2(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_36 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_2(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__set__foldl5_12_p_1(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_36 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_1(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__set__foldl5_12_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_36 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_0(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

MR_bool MR_CALL 
mercury__set__fold5_12_p_5(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_36 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_5(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold5_12_p_4(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_36 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_4(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold5_12_p_3(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_36 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_3(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

void MR_CALL 
mercury__set__fold5_12_p_2(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_36 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_2(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__set__fold5_12_p_1(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_36 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_1(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__set__fold5_12_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_36 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_0(TypeInfo_for_T_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, F_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

MR_bool MR_CALL 
mercury__set__foldl4_10_p_5(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_7(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl4_10_p_4(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_6(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl4_10_p_3(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_5(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

void MR_CALL 
mercury__set__foldl4_10_p_2(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_30 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_2(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__set__foldl4_10_p_1(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_30 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_1(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__set__foldl4_10_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_30 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_0(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

MR_bool MR_CALL 
mercury__set__fold4_10_p_5(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_7(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold4_10_p_4(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_6(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold4_10_p_3(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_5(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

void MR_CALL 
mercury__set__fold4_10_p_2(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_30 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_2(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__set__fold4_10_p_1(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_30 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_1(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__set__fold4_10_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_30 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_0(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, F_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

MR_bool MR_CALL 
mercury__set__foldl3_8_p_5(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_24 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl3_8_p_4(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_24 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl3_8_p_3(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_24 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

void MR_CALL 
mercury__set__foldl3_8_p_2(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_24 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_2(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__set__foldl3_8_p_1(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_24 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_1(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__set__foldl3_8_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_24 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_0(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

MR_bool MR_CALL 
mercury__set__fold3_8_p_5(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_24 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold3_8_p_4(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_24 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold3_8_p_3(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_24 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

void MR_CALL 
mercury__set__fold3_8_p_2(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_24 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_2(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__set__fold3_8_p_1(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_24 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_1(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__set__fold3_8_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_24 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_0(TypeInfo_for_T_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, F_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

MR_bool MR_CALL 
mercury__set__foldl2_6_p_5(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_18 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl2_6_p_4(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_18 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl2_6_p_3(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_18 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

void MR_CALL 
mercury__set__foldl2_6_p_2(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_18 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_2(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__set__foldl2_6_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_18 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_1(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__set__foldl2_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_18 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_0(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

MR_bool MR_CALL 
mercury__set__fold2_6_p_5(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_18 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold2_6_p_4(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_18 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold2_6_p_3(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_18 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

void MR_CALL 
mercury__set__fold2_6_p_2(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_18 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_2(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__set__fold2_6_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_18 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_1(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__set__fold2_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_18 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_0(TypeInfo_for_T_15, TypeInfo_for_A_16, TypeInfo_for_B_17, F_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

MR_bool MR_CALL 
mercury__set__foldl_4_p_5(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_12 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl_4_p_4(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_12 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__foldl_4_p_3(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_12 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

void MR_CALL 
mercury__set__foldl_4_p_2(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_12 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_2(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__set__foldl_4_p_1(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_12 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_1(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__set__foldl_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_12 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_0(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_bool MR_CALL 
mercury__set__fold_4_p_5(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_12 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold_4_p_4(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_12 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__fold_4_p_3(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_12 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

void MR_CALL 
mercury__set__fold_4_p_2(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_12 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_2(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__set__fold_4_p_1(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_12 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_1(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__set__fold_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_12 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_0(TypeInfo_for_T_10, TypeInfo_for_A_11, F_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_Box MR_CALL 
mercury__set__foldl_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_A_9,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box A_7)
{
  MR_Box HeadVar__4_4;
  MR_Word Var_10 = (MR_Word) (S_6);

  HeadVar__4_4 = mercury__list__foldl_3_f_0(TypeInfo_for_T_8, TypeInfo_for_A_9, F_5, Var_10, A_7);
  return HeadVar__4_4;
}

MR_Box MR_CALL 
mercury__set__fold_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_A_9,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box A_7)
{
  MR_Box HeadVar__4_4;
  MR_Word Var_10 = (MR_Word) (S_6);

  HeadVar__4_4 = mercury__list__foldl_3_f_0(TypeInfo_for_T_8, TypeInfo_for_A_9, F_5, Var_10, A_7);
  return HeadVar__4_4;
}

MR_bool MR_CALL 
mercury__set__map2_fold_6_p_5(
  MR_Word TypeInfo_for_S_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_U_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Word * T_9,
  MR_Word * U_10,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  MR_bool succeeded;
  MR_Word SL_12 = (MR_Word) (S_8);
  MR_Word TL_13;
  MR_Word UL_14;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Unsigned Var_23;
  MR_Unsigned Var_24;
  MR_Word Var_25;
  MR_Integer Var_26;
  MR_Unsigned Var_27;
  MR_Unsigned Var_28;

  succeeded = mercury__list__map2_foldl_6_p_5(TypeInfo_for_S_17, TypeInfo_for_T_18, TypeInfo_for_U_19, TypeInfo_for_A_20, P_7, SL_12, &TL_13, &UL_14, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
  if (succeeded)
  {
    Var_24 = (MR_Unsigned) 0U;
    mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_18, TL_13, Var_24, &Var_23);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_5

	MR_Unsigned U;
	MR_Integer I;

	U = Var_23 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_22  = I;
}
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_18, Var_22, TL_13, &Var_21);
    Var_28 = (MR_Unsigned) 0U;
    *T_9 = (MR_Word) (Var_21);
    mercury__list__ulength_acc_3_p_0(TypeInfo_for_U_19, UL_14, Var_28, &Var_27);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_5

	MR_Unsigned U;
	MR_Integer I;

	U = Var_27 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_26  = I;
}
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_U_19, Var_26, UL_14, &Var_25);
    *U_10 = (MR_Word) (Var_25);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__map2_fold_6_p_4(
  MR_Word TypeInfo_for_S_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_U_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Word * T_9,
  MR_Word * U_10,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  MR_bool succeeded;
  MR_Word SL_12 = (MR_Word) (S_8);
  MR_Word TL_13;
  MR_Word UL_14;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Unsigned Var_23;
  MR_Unsigned Var_24;
  MR_Word Var_25;
  MR_Integer Var_26;
  MR_Unsigned Var_27;
  MR_Unsigned Var_28;

  succeeded = mercury__list__map2_foldl_6_p_4(TypeInfo_for_S_17, TypeInfo_for_T_18, TypeInfo_for_U_19, TypeInfo_for_A_20, P_7, SL_12, &TL_13, &UL_14, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
  if (succeeded)
  {
    Var_24 = (MR_Unsigned) 0U;
    mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_18, TL_13, Var_24, &Var_23);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_4

	MR_Unsigned U;
	MR_Integer I;

	U = Var_23 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_22  = I;
}
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_18, Var_22, TL_13, &Var_21);
    Var_28 = (MR_Unsigned) 0U;
    *T_9 = (MR_Word) (Var_21);
    mercury__list__ulength_acc_3_p_0(TypeInfo_for_U_19, UL_14, Var_28, &Var_27);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_4

	MR_Unsigned U;
	MR_Integer I;

	U = Var_27 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_26  = I;
}
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_U_19, Var_26, UL_14, &Var_25);
    *U_10 = (MR_Word) (Var_25);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__map2_fold_6_p_3(
  MR_Word TypeInfo_for_S_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_U_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Word * T_9,
  MR_Word * U_10,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  MR_bool succeeded;
  MR_Word SL_12 = (MR_Word) (S_8);
  MR_Word TL_13;
  MR_Word UL_14;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Unsigned Var_23;
  MR_Unsigned Var_24;
  MR_Word Var_25;
  MR_Integer Var_26;
  MR_Unsigned Var_27;
  MR_Unsigned Var_28;

  succeeded = mercury__list__map2_foldl_6_p_3(TypeInfo_for_S_17, TypeInfo_for_T_18, TypeInfo_for_U_19, TypeInfo_for_A_20, P_7, SL_12, &TL_13, &UL_14, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
  if (succeeded)
  {
    Var_24 = (MR_Unsigned) 0U;
    mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_18, TL_13, Var_24, &Var_23);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_3

	MR_Unsigned U;
	MR_Integer I;

	U = Var_23 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_22  = I;
}
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_18, Var_22, TL_13, &Var_21);
    Var_28 = (MR_Unsigned) 0U;
    *T_9 = (MR_Word) (Var_21);
    mercury__list__ulength_acc_3_p_0(TypeInfo_for_U_19, UL_14, Var_28, &Var_27);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_3

	MR_Unsigned U;
	MR_Integer I;

	U = Var_27 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_26  = I;
}
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_U_19, Var_26, UL_14, &Var_25);
    *U_10 = (MR_Word) (Var_25);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__set__map2_fold_6_p_2(
  MR_Word TypeInfo_for_S_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_U_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Word * T_9,
  MR_Word * U_10,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  MR_Word SL_12 = (MR_Word) (S_8);
  MR_Word TL_13;
  MR_Word UL_14;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Unsigned Var_23;
  MR_Word Var_25;
  MR_Integer Var_26;
  MR_Unsigned Var_27;

  mercury__list__map2_foldl_6_p_2(TypeInfo_for_S_17, TypeInfo_for_T_18, TypeInfo_for_U_19, TypeInfo_for_A_20, P_7, SL_12, &TL_13, &UL_14, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_18, TL_13, (MR_Unsigned) 0U, &Var_23);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_2

	MR_Unsigned U;
	MR_Integer I;

	U = Var_23 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_22  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_18, Var_22, TL_13, &Var_21);
  *T_9 = (MR_Word) (Var_21);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_U_19, UL_14, (MR_Unsigned) 0U, &Var_27);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_2

	MR_Unsigned U;
	MR_Integer I;

	U = Var_27 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_26  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_U_19, Var_26, UL_14, &Var_25);
  *U_10 = (MR_Word) (Var_25);
}

void MR_CALL 
mercury__set__map2_fold_6_p_1(
  MR_Word TypeInfo_for_S_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_U_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Word * T_9,
  MR_Word * U_10,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  MR_Word SL_12 = (MR_Word) (S_8);
  MR_Word TL_13;
  MR_Word UL_14;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Unsigned Var_23;
  MR_Word Var_25;
  MR_Integer Var_26;
  MR_Unsigned Var_27;

  mercury__list__map2_foldl_6_p_1(TypeInfo_for_S_17, TypeInfo_for_T_18, TypeInfo_for_U_19, TypeInfo_for_A_20, P_7, SL_12, &TL_13, &UL_14, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_18, TL_13, (MR_Unsigned) 0U, &Var_23);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_1

	MR_Unsigned U;
	MR_Integer I;

	U = Var_23 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_22  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_18, Var_22, TL_13, &Var_21);
  *T_9 = (MR_Word) (Var_21);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_U_19, UL_14, (MR_Unsigned) 0U, &Var_27);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_1

	MR_Unsigned U;
	MR_Integer I;

	U = Var_27 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_26  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_U_19, Var_26, UL_14, &Var_25);
  *U_10 = (MR_Word) (Var_25);
}

void MR_CALL 
mercury__set__map2_fold_6_p_0(
  MR_Word TypeInfo_for_S_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_U_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Word * T_9,
  MR_Word * U_10,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  MR_Word SL_12 = (MR_Word) (S_8);
  MR_Word TL_13;
  MR_Word UL_14;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Unsigned Var_23;
  MR_Word Var_25;
  MR_Integer Var_26;
  MR_Unsigned Var_27;

  mercury__list__map2_foldl_6_p_0(TypeInfo_for_S_17, TypeInfo_for_T_18, TypeInfo_for_U_19, TypeInfo_for_A_20, P_7, SL_12, &TL_13, &UL_14, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_18, TL_13, (MR_Unsigned) 0U, &Var_23);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_23 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_22  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_18, Var_22, TL_13, &Var_21);
  *T_9 = (MR_Word) (Var_21);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_U_19, UL_14, (MR_Unsigned) 0U, &Var_27);
{
#define MR_PROC_LABEL mercury__set__map2_fold_6_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_27 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_26  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_U_19, Var_26, UL_14, &Var_25);
  *U_10 = (MR_Word) (Var_25);
}

MR_bool MR_CALL 
mercury__set__map_fold_5_p_5(
  MR_Word TypeInfo_for_S_14,
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word P_6,
  MR_Word S_7,
  MR_Word * T_8,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13)
{
  MR_bool succeeded;
  MR_Word SL_10 = (MR_Word) (S_7);
  MR_Word TL_11;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned Var_19;
  MR_Unsigned Var_20;

  succeeded = mercury__list__map_foldl_5_p_5(TypeInfo_for_S_14, TypeInfo_for_T_15, TypeInfo_for_A_16, P_6, SL_10, &TL_11, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13);
  if (succeeded)
  {
    Var_20 = (MR_Unsigned) 0U;
    mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_15, TL_11, Var_20, &Var_19);
{
#define MR_PROC_LABEL mercury__set__map_fold_5_p_5

	MR_Unsigned U;
	MR_Integer I;

	U = Var_19 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_18  = I;
}
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_15, Var_18, TL_11, &Var_17);
    *T_8 = (MR_Word) (Var_17);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__map_fold_5_p_4(
  MR_Word TypeInfo_for_S_14,
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word P_6,
  MR_Word S_7,
  MR_Word * T_8,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13)
{
  MR_bool succeeded;
  MR_Word SL_10 = (MR_Word) (S_7);
  MR_Word TL_11;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned Var_19;
  MR_Unsigned Var_20;

  succeeded = mercury__list__map_foldl_5_p_4(TypeInfo_for_S_14, TypeInfo_for_T_15, TypeInfo_for_A_16, P_6, SL_10, &TL_11, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13);
  if (succeeded)
  {
    Var_20 = (MR_Unsigned) 0U;
    mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_15, TL_11, Var_20, &Var_19);
{
#define MR_PROC_LABEL mercury__set__map_fold_5_p_4

	MR_Unsigned U;
	MR_Integer I;

	U = Var_19 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_18  = I;
}
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_15, Var_18, TL_11, &Var_17);
    *T_8 = (MR_Word) (Var_17);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__map_fold_5_p_3(
  MR_Word TypeInfo_for_S_14,
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word P_6,
  MR_Word S_7,
  MR_Word * T_8,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13)
{
  MR_bool succeeded;
  MR_Word SL_10 = (MR_Word) (S_7);
  MR_Word TL_11;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned Var_19;
  MR_Unsigned Var_20;

  succeeded = mercury__list__map_foldl_5_p_3(TypeInfo_for_S_14, TypeInfo_for_T_15, TypeInfo_for_A_16, P_6, SL_10, &TL_11, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13);
  if (succeeded)
  {
    Var_20 = (MR_Unsigned) 0U;
    mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_15, TL_11, Var_20, &Var_19);
{
#define MR_PROC_LABEL mercury__set__map_fold_5_p_3

	MR_Unsigned U;
	MR_Integer I;

	U = Var_19 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_18  = I;
}
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_15, Var_18, TL_11, &Var_17);
    *T_8 = (MR_Word) (Var_17);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__set__map_fold_5_p_2(
  MR_Word TypeInfo_for_S_14,
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word P_6,
  MR_Word S_7,
  MR_Word * T_8,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13)
{
  MR_Word SL_10 = (MR_Word) (S_7);
  MR_Word TL_11;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned Var_19;

  mercury__list__map_foldl_5_p_2(TypeInfo_for_S_14, TypeInfo_for_T_15, TypeInfo_for_A_16, P_6, SL_10, &TL_11, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_15, TL_11, (MR_Unsigned) 0U, &Var_19);
{
#define MR_PROC_LABEL mercury__set__map_fold_5_p_2

	MR_Unsigned U;
	MR_Integer I;

	U = Var_19 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_18  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_15, Var_18, TL_11, &Var_17);
  *T_8 = (MR_Word) (Var_17);
}

void MR_CALL 
mercury__set__map_fold_5_p_1(
  MR_Word TypeInfo_for_S_14,
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word P_6,
  MR_Word S_7,
  MR_Word * T_8,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13)
{
  MR_Word SL_10 = (MR_Word) (S_7);
  MR_Word TL_11;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned Var_19;

  mercury__list__map_foldl_5_p_1(TypeInfo_for_S_14, TypeInfo_for_T_15, TypeInfo_for_A_16, P_6, SL_10, &TL_11, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_15, TL_11, (MR_Unsigned) 0U, &Var_19);
{
#define MR_PROC_LABEL mercury__set__map_fold_5_p_1

	MR_Unsigned U;
	MR_Integer I;

	U = Var_19 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_18  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_15, Var_18, TL_11, &Var_17);
  *T_8 = (MR_Word) (Var_17);
}

void MR_CALL 
mercury__set__map_fold_5_p_0(
  MR_Word TypeInfo_for_S_14,
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word P_6,
  MR_Word S_7,
  MR_Word * T_8,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13)
{
  MR_Word SL_10 = (MR_Word) (S_7);
  MR_Word TL_11;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned Var_19;

  mercury__list__map_foldl_5_p_0(TypeInfo_for_S_14, TypeInfo_for_T_15, TypeInfo_for_A_16, P_6, SL_10, &TL_11, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_15, TL_11, (MR_Unsigned) 0U, &Var_19);
{
#define MR_PROC_LABEL mercury__set__map_fold_5_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_19 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_18  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_15, Var_18, TL_11, &Var_17);
  *T_8 = (MR_Word) (Var_17);
}

static void MR_CALL 
mercury__set__map_3_p_4_1(
  void * env_ptr_arg)
{
  struct mercury__set__map_3_p_4_env_0_s * env_ptr = (struct mercury__set__map_3_p_4_env_0_s *) (env_ptr_arg);

  (env_ptr)->mercury__set__map_3_p_4_env_0__Var_14 = (MR_Unsigned) 0U;
  mercury__list__ulength_acc_3_p_0((env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, (env_ptr)->mercury__set__map_3_p_4_env_0__Var_14, &(env_ptr)->mercury__set__map_3_p_4_env_0__Var_13);
{
#define MR_PROC_LABEL mercury__set__map_3_p_4

	MR_Unsigned U;
	MR_Integer I;

	U = (env_ptr)->mercury__set__map_3_p_4_env_0__Var_13 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	(env_ptr)->mercury__set__map_3_p_4_env_0__Var_12  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0((env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_4_env_0__Var_12, (env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, &(env_ptr)->mercury__set__map_3_p_4_env_0__Var_11);
  *((env_ptr)->mercury__set__map_3_p_4_env_0__S2_6) = (MR_Word) ((env_ptr)->mercury__set__map_3_p_4_env_0__Var_11);
  ((env_ptr)->mercury__set__map_3_p_4_env_0__cont)((env_ptr)->mercury__set__map_3_p_4_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__set__map_3_p_4(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word P_4,
  MR_Word S1_5,
  MR_Word * S2_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__set__map_3_p_4_env_0_s env;

  (env).mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10 = TypeInfo_for_T2_10;
  (env).mercury__set__map_3_p_4_env_0__S2_6 = S2_6;
  (env).mercury__set__map_3_p_4_env_0__cont = cont;
  (env).mercury__set__map_3_p_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word L1_7 = (MR_Word) (S1_5);

    mercury__list__map_3_p_4(TypeInfo_for_T1_9, (env).mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, P_4, L1_7, &(env).mercury__set__map_3_p_4_env_0__L2_8, mercury__set__map_3_p_4_1, &env);
  }
}

static void MR_CALL 
mercury__set__map_3_p_3_1(
  void * env_ptr_arg)
{
  struct mercury__set__map_3_p_3_env_0_s * env_ptr = (struct mercury__set__map_3_p_3_env_0_s *) (env_ptr_arg);

  (env_ptr)->mercury__set__map_3_p_3_env_0__Var_14 = (MR_Unsigned) 0U;
  mercury__list__ulength_acc_3_p_0((env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, (env_ptr)->mercury__set__map_3_p_3_env_0__Var_14, &(env_ptr)->mercury__set__map_3_p_3_env_0__Var_13);
{
#define MR_PROC_LABEL mercury__set__map_3_p_3

	MR_Unsigned U;
	MR_Integer I;

	U = (env_ptr)->mercury__set__map_3_p_3_env_0__Var_13 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	(env_ptr)->mercury__set__map_3_p_3_env_0__Var_12  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0((env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_3_env_0__Var_12, (env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, &(env_ptr)->mercury__set__map_3_p_3_env_0__Var_11);
  *((env_ptr)->mercury__set__map_3_p_3_env_0__S2_6) = (MR_Word) ((env_ptr)->mercury__set__map_3_p_3_env_0__Var_11);
  ((env_ptr)->mercury__set__map_3_p_3_env_0__cont)((env_ptr)->mercury__set__map_3_p_3_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__set__map_3_p_3(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word P_4,
  MR_Word S1_5,
  MR_Word * S2_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__set__map_3_p_3_env_0_s env;

  (env).mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10 = TypeInfo_for_T2_10;
  (env).mercury__set__map_3_p_3_env_0__S2_6 = S2_6;
  (env).mercury__set__map_3_p_3_env_0__cont = cont;
  (env).mercury__set__map_3_p_3_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word L1_7 = (MR_Word) (S1_5);

    mercury__list__map_3_p_3(TypeInfo_for_T1_9, (env).mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, P_4, L1_7, &(env).mercury__set__map_3_p_3_env_0__L2_8, mercury__set__map_3_p_3_1, &env);
  }
}

MR_bool MR_CALL 
mercury__set__map_3_p_2(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word P_4,
  MR_Word S1_5,
  MR_Word * S2_6)
{
  MR_bool succeeded;
  MR_Word L1_7 = (MR_Word) (S1_5);
  MR_Word L2_8;
  MR_Word Var_11;
  MR_Integer Var_12;
  MR_Unsigned Var_13;
  MR_Unsigned Var_14;

  succeeded = mercury__list__map_3_p_2(TypeInfo_for_T1_9, TypeInfo_for_T2_10, P_4, L1_7, &L2_8);
  if (succeeded)
  {
    Var_14 = (MR_Unsigned) 0U;
    mercury__list__ulength_acc_3_p_0(TypeInfo_for_T2_10, L2_8, Var_14, &Var_13);
{
#define MR_PROC_LABEL mercury__set__map_3_p_2

	MR_Unsigned U;
	MR_Integer I;

	U = Var_13 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, Var_12, L2_8, &Var_11);
    *S2_6 = (MR_Word) (Var_11);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__set__map_3_p_1(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word P_4,
  MR_Word S1_5,
  MR_Word * S2_6)
{
  MR_Word L1_7 = (MR_Word) (S1_5);
  MR_Word L2_8;
  MR_Word Var_11;
  MR_Integer Var_12;
  MR_Unsigned Var_13;

  mercury__list__map_3_p_1(TypeInfo_for_T1_9, TypeInfo_for_T2_10, P_4, L1_7, &L2_8);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T2_10, L2_8, (MR_Unsigned) 0U, &Var_13);
{
#define MR_PROC_LABEL mercury__set__map_3_p_1

	MR_Unsigned U;
	MR_Integer I;

	U = Var_13 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, Var_12, L2_8, &Var_11);
  *S2_6 = (MR_Word) (Var_11);
}

void MR_CALL 
mercury__set__map_3_p_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word P_4,
  MR_Word S1_5,
  MR_Word * S2_6)
{
  MR_Word L1_7 = (MR_Word) (S1_5);
  MR_Word L2_8;
  MR_Word Var_11;
  MR_Integer Var_12;
  MR_Unsigned Var_13;

  mercury__list__map_3_p_0(TypeInfo_for_T1_9, TypeInfo_for_T2_10, P_4, L1_7, &L2_8);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T2_10, L2_8, (MR_Unsigned) 0U, &Var_13);
{
#define MR_PROC_LABEL mercury__set__map_3_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_13 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, Var_12, L2_8, &Var_11);
  *S2_6 = (MR_Word) (Var_11);
}

MR_Word MR_CALL 
mercury__set__map_2_f_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word F_4,
  MR_Word Set_5)
{
  MR_Word TransformedSet_6;
  MR_Word List_7 = (MR_Word) (Set_5);
  MR_Word TransformedList_8;
  MR_Word Var_11;
  MR_Integer Var_12;
  MR_Unsigned Var_13;

  TransformedList_8 = mercury__list__map_2_f_0(TypeInfo_for_T1_9, TypeInfo_for_T2_10, F_4, List_7);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T2_10, TransformedList_8, (MR_Unsigned) 0U, &Var_13);
{
#define MR_PROC_LABEL mercury__set__map_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_13 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, Var_12, TransformedList_8, &Var_11);
  TransformedSet_6 = (MR_Word) (Var_11);
  return TransformedSet_6;
}

void MR_CALL 
mercury__set__filter_map_3_p_0(
  MR_Word TypeInfo_for_T1_7,
  MR_Word TypeInfo_for_T2_8,
  MR_Word P_4,
  MR_Word Set_5,
  MR_Word * TransformedTrueSet_6)
{
  MR_Word Var_9 = (MR_Word) (Set_5);
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Integer Var_12;
  MR_Unsigned Var_13;

  mercury__list__filter_map_3_p_0(TypeInfo_for_T1_7, TypeInfo_for_T2_8, P_4, Var_9, &Var_10);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T2_8, Var_10, (MR_Unsigned) 0U, &Var_13);
{
#define MR_PROC_LABEL mercury__set__filter_map_3_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_13 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_8, Var_12, Var_10, &Var_11);
  *TransformedTrueSet_6 = (MR_Word) (Var_11);
}

MR_Word MR_CALL 
mercury__set__filter_map_2_f_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Word PF_4,
  MR_Word Set_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_8 = (MR_Word) (Set_5);
  MR_Word Var_9;
  MR_Word Var_11;
  MR_Integer Var_12;
  MR_Unsigned Var_13;

  mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(PF_4, Var_8, &Var_9);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T2_7, Var_9, (MR_Unsigned) 0U, &Var_13);
{
#define MR_PROC_LABEL mercury__set__filter_map_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_13 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_7, Var_12, Var_9, &Var_11);
  HeadVar__3_3 = (MR_Word) (Var_11);
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(1, HeadVar__2_2, 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Box Var_9;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Var_15, 1))));

      succeeded = func_0(((MR_Box) (Var_15)), Var_6, &Var_9);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_10_16;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = Var_9;
          MR_hl_field(1, base, 1) = NULL;
        }
        AddrSCCcallarg_10_16 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
        mercury__set__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(Var_15, Var_7, AddrSCCcallarg_10_16);
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__set__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(1, HeadVar__2_2, 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Box Var_9;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Var_15, 1))));

      succeeded = func_0(((MR_Box) (Var_15)), Var_6, &Var_9);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_10_16;
        MR_Word HeadVar__3_18;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_17;

        {
          HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_18, 0) = Var_9;
          MR_hl_field(1, HeadVar__3_18, 1) = NULL;
        }
        AddrSCCcallarg_10_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, 1)));
        *AddrOfHeadVar__3_17 = HeadVar__3_18;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_7;
        next_value_of_AddrOfHeadVar__3_17 = AddrSCCcallarg_10_16;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__set__filter_4_p_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word P_5,
  MR_Word Set_6,
  MR_Word * TrueSet_7,
  MR_Word * FalseSet_8)
{
  MR_Word Var_10 = (MR_Word) (Set_6);
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_17;

  mercury__list__filter_4_p_0(TypeInfo_for_T1_9, P_5, Var_10, &Var_11, &Var_12);
  if ((Var_11 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_13 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_14 = (MR_hl_field(1, Var_11, 0));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_9, Var_14, Var_15, &Var_13);
  }
  *TrueSet_7 = (MR_Word) (Var_13);
  if ((Var_12 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_17 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_18 = (MR_hl_field(1, Var_12, 0));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, Var_12, 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_9, Var_18, Var_19, &Var_17);
  }
  *FalseSet_8 = (MR_Word) (Var_17);
}

void MR_CALL 
mercury__set__filter_3_p_0(
  MR_Word TypeInfo_for_T1_7,
  MR_Word P_4,
  MR_Word Set_5,
  MR_Word * TrueSet_6)
{
  MR_Word Var_8 = (MR_Word) (Set_5);
  MR_Word Var_9;
  MR_Word Var_10;

  mercury__list__filter_3_p_0(TypeInfo_for_T1_7, P_4, Var_8, &Var_9);
  if ((Var_9 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_11 = (MR_hl_field(1, Var_9, 0));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, Var_9, 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_7, Var_11, Var_12, &Var_10);
  }
  *TrueSet_6 = (MR_Word) (Var_10);
}

MR_Word MR_CALL 
mercury__set__filter_2_f_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word P_4,
  MR_Word Set_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_7 = (MR_Word) (Set_5);
  MR_Word Var_8;
  MR_Word Var_9;

  mercury__list__filter_3_p_0(TypeInfo_for_T1_6, P_4, Var_7, &Var_8);
  if ((Var_8 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_9 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_10 = (MR_hl_field(1, Var_8, 0));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, Var_8, 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_6, Var_10, Var_11, &Var_9);
  }
  HeadVar__3_3 = (MR_Word) (Var_9);
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mercury__set__all_true_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word P_3,
  MR_Word S_4)
{
  MR_bool succeeded;
  MR_Word Var_6 = (MR_Word) (S_4);

  succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_5, P_3, Var_6);
  return succeeded;
}

void MR_CALL 
mercury__set__ucount_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Unsigned * N_4)
{
  MR_Word Var_6 = (MR_Word) (Set_3);

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_5, Var_6, (MR_Unsigned) 0U, N_4);
}

MR_Unsigned MR_CALL 
mercury__set__ucount_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3)
{
  MR_Unsigned N_4;
  MR_Word Var_6 = (MR_Word) (Set_3);

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_5, Var_6, (MR_Unsigned) 0U, &N_4);
  return N_4;
}

void MR_CALL 
mercury__set__count_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Integer * N_4)
{
  MR_Word Var_6 = (MR_Word) (Set_3);
  MR_Unsigned Var_7;

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_5, Var_6, (MR_Unsigned) 0U, &Var_7);
{
#define MR_PROC_LABEL mercury__set__count_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_7 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	*N_4  = I;
}
}

MR_Integer MR_CALL 
mercury__set__count_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3)
{
  MR_Integer N_4;
  MR_Word Var_6 = (MR_Word) (Set_3);
  MR_Unsigned Var_7;

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_5, Var_6, (MR_Unsigned) 0U, &Var_7);
{
#define MR_PROC_LABEL mercury__set__count_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_7 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	N_4  = I;
}
  return N_4;
}

void MR_CALL 
mercury__set__to_sorted_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Word * List_4)
{
  *List_4 = (MR_Word) (Set_3);
}

MR_Word MR_CALL 
mercury__set__to_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3)
{
  MR_Word List_4 = (MR_Word) (Set_3);

  return List_4;
}

MR_Word MR_CALL 
mercury__set__from_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5;

  if ((List_3 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_6 = (MR_hl_field(1, List_3, 0));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, List_3, 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_4, Var_6, Var_7, &Var_5);
  }
  HeadVar__2_2 = (MR_Word) (Var_5);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__set__rev_sorted_list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  MR_Word Var_6;

  mercury__list__reverse_2_p_0(TypeInfo_for_T_5, List_3, &Var_6);
  *Set_4 = (MR_Word) (Var_6);
}

MR_Word MR_CALL 
mercury__set__rev_sorted_list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_Word Set_4;
  MR_Word Var_6;

  mercury__list__reverse_2_p_0(TypeInfo_for_T_5, List_3, &Var_6);
  Set_4 = (MR_Word) (Var_6);
  return Set_4;
}

void MR_CALL 
mercury__set__sorted_list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  MR_Word Var_6;

  if ((List_3 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_7 = (MR_hl_field(1, List_3, 0));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, List_3, 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_5, Var_7, Var_8, &Var_6);
  }
  *Set_4 = (MR_Word) (Var_6);
}

MR_Word MR_CALL 
mercury__set__sorted_list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_Word Set_4;
  MR_Word Var_6;

  if ((List_3 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_7 = (MR_hl_field(1, List_3, 0));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, List_3, 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_5, Var_7, Var_8, &Var_6);
  }
  Set_4 = (MR_Word) (Var_6);
  return Set_4;
}

MR_Word MR_CALL 
mercury__set__from_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5;
  MR_Integer Var_6;
  MR_Unsigned Var_7;

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_4, List_3, (MR_Unsigned) 0U, &Var_7);
{
#define MR_PROC_LABEL mercury__set__from_list_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_7 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_6  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_4, Var_6, List_3, &Var_5);
  HeadVar__2_2 = (MR_Word) (Var_5);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__set__list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  MR_Word Var_6;
  MR_Integer Var_7;
  MR_Unsigned Var_8;

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_5, List_3, (MR_Unsigned) 0U, &Var_8);
{
#define MR_PROC_LABEL mercury__set__list_to_set_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_8 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_7  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, Var_7, List_3, &Var_6);
  *Set_4 = (MR_Word) (Var_6);
}

MR_Word MR_CALL 
mercury__set__list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_Word S_4;
  MR_Word Var_6;
  MR_Integer Var_7;
  MR_Unsigned Var_8;

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_5, List_3, (MR_Unsigned) 0U, &Var_8);
{
#define MR_PROC_LABEL mercury__set__list_to_set_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_8 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_7  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, Var_7, List_3, &Var_6);
  S_4 = (MR_Word) (Var_6);
  return S_4;
}

void MR_CALL 
mercury__set__divide_by_set_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word DivideBySet_5,
  MR_Word Set_6,
  MR_Word * TruePart_7,
  MR_Word * FalsePart_8)
{
  mercury__set_ordlist__divide_by_set_4_p_0(TypeInfo_for_T_9, DivideBySet_5, Set_6, TruePart_7, FalsePart_8);
}

void MR_CALL 
mercury__set__divide_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word P_5,
  MR_Word Set_6,
  MR_Word * TruePart_7,
  MR_Word * FalsePart_8)
{
  MR_Word Var_10 = (MR_Word) (Set_6);
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_15;
  MR_Word Var_16;

  mercury__set_ordlist__divide_loop_6_p_0(TypeInfo_for_T_9, P_5, Var_10, (MR_Word) ((MR_Unsigned) 0U), &Var_15, (MR_Word) ((MR_Unsigned) 0U), &Var_16);
  mercury__list__reverse_2_p_0(TypeInfo_for_T_9, Var_15, &Var_11);
  *TruePart_7 = (MR_Word) (Var_11);
  mercury__list__reverse_2_p_0(TypeInfo_for_T_9, Var_16, &Var_12);
  *FalsePart_8 = (MR_Word) (Var_12);
}

void MR_CALL 
mercury__set__intersection_and_differences_5_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word SetA_6,
  MR_Word SetB_7,
  MR_Word * InAandB_8,
  MR_Word * OnlyInA_9,
  MR_Word * OnlyInB_10)
{
  mercury__set_ordlist__intersection_and_differences_5_p_0(TypeInfo_for_T_11, SetA_6, SetB_7, InAandB_8, OnlyInA_9, OnlyInB_10);
}

void MR_CALL 
mercury__set__difference_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  MR_Word Var_8 = (MR_Word) (SetA_4);
  MR_Word Var_9 = (MR_Word) (SetB_5);
  MR_Word Var_10;

  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, Var_8, Var_9, &Var_10);
  *Set_6 = (MR_Word) (Var_10);
}

MR_Word MR_CALL 
mercury__set__difference_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  MR_Word S3_6;
  MR_Word Var_8 = (MR_Word) (S1_4);
  MR_Word Var_9 = (MR_Word) (S2_5);
  MR_Word Var_10;

  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, Var_8, Var_9, &Var_10);
  S3_6 = (MR_Word) (Var_10);
  return S3_6;
}

void MR_CALL 
mercury__set__power_intersect_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Sets_3,
  MR_Word * Set_4)
{
  MR_Word Var_6 = (MR_Word) (Sets_3);
  MR_Word Var_7;
  MR_Word Var_8;

  mercury__set_ordlist__sets_to_sorted_lists_2_p_0(TypeInfo_for_T_5, Var_6, &Var_7);
  mercury__list__intersect_lists_2_p_0(TypeInfo_for_T_5, Var_7, &Var_8);
  *Set_4 = (MR_Word) (Var_8);
}

MR_Word MR_CALL 
mercury__set__power_intersect_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  MR_Word S_4;
  MR_Word Var_6 = (MR_Word) (SS_3);
  MR_Word Var_7;
  MR_Word Var_8;

  mercury__set_ordlist__sets_to_sorted_lists_2_p_0(TypeInfo_for_T_5, Var_6, &Var_7);
  mercury__list__intersect_lists_2_p_0(TypeInfo_for_T_5, Var_7, &Var_8);
  S_4 = (MR_Word) (Var_8);
  return S_4;
}

MR_Word MR_CALL 
mercury__set__intersect_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Sets_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5;
  MR_Word Var_6;

  mercury__set_ordlist__sets_to_sorted_lists_2_p_0(TypeInfo_for_T_4, Sets_3, &Var_5);
  mercury__list__intersect_lists_2_p_0(TypeInfo_for_T_4, Var_5, &Var_6);
  HeadVar__2_2 = (MR_Word) (Var_6);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__set__intersect_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  MR_Word Var_8 = (MR_Word) (SetA_4);
  MR_Word Var_9 = (MR_Word) (SetB_5);
  MR_Word Var_10;

  mercury__list__intersect_3_p_0(TypeInfo_for_T_7, Var_8, Var_9, &Var_10);
  *Set_6 = (MR_Word) (Var_10);
}

MR_Word MR_CALL 
mercury__set__intersect_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  MR_Word S3_6;
  MR_Word Var_8 = (MR_Word) (S1_4);
  MR_Word Var_9 = (MR_Word) (S2_5);
  MR_Word Var_10;

  mercury__list__intersect_3_p_0(TypeInfo_for_T_7, Var_8, Var_9, &Var_10);
  S3_6 = (MR_Word) (Var_10);
  return S3_6;
}

void MR_CALL 
mercury__set__power_union_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Sets_3,
  MR_Word * Set_4)
{
  MR_Word Var_6 = (MR_Word) (Sets_3);
  MR_Word Var_7;
  MR_Word Var_8;

  mercury__set_ordlist__sets_to_sorted_lists_2_p_0(TypeInfo_for_T_5, Var_6, &Var_7);
  mercury__list__merge_lists_and_remove_dups_2_p_0(TypeInfo_for_T_5, Var_7, &Var_8);
  *Set_4 = (MR_Word) (Var_8);
}

MR_Word MR_CALL 
mercury__set__power_union_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  MR_Word S_4;
  MR_Word Var_6 = (MR_Word) (SS_3);
  MR_Word Var_7;
  MR_Word Var_8;

  mercury__set_ordlist__sets_to_sorted_lists_2_p_0(TypeInfo_for_T_5, Var_6, &Var_7);
  mercury__list__merge_lists_and_remove_dups_2_p_0(TypeInfo_for_T_5, Var_7, &Var_8);
  S_4 = (MR_Word) (Var_8);
  return S_4;
}

MR_Word MR_CALL 
mercury__set__union_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Sets_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5;
  MR_Word Var_6;

  mercury__set_ordlist__sets_to_sorted_lists_2_p_0(TypeInfo_for_T_4, Sets_3, &Var_5);
  mercury__list__merge_lists_and_remove_dups_2_p_0(TypeInfo_for_T_4, Var_5, &Var_6);
  HeadVar__2_2 = (MR_Word) (Var_6);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__set__union_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  MR_Word Var_8 = (MR_Word) (SetA_4);
  MR_Word Var_9 = (MR_Word) (SetB_5);
  MR_Word Var_10;

  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_7, Var_8, Var_9, &Var_10);
  *Set_6 = (MR_Word) (Var_10);
}

MR_Word MR_CALL 
mercury__set__union_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  MR_Word S3_6;
  MR_Word Var_8 = (MR_Word) (S1_4);
  MR_Word Var_9 = (MR_Word) (S2_5);
  MR_Word Var_10;

  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_7, Var_8, Var_9, &Var_10);
  S3_6 = (MR_Word) (Var_10);
  return S3_6;
}

MR_bool MR_CALL 
mercury__set__superset_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  MR_bool succeeded;
  MR_Word Var_7 = (MR_Word) (SetA_3);
  MR_Word Var_8 = (MR_Word) (SetB_4);
  MR_Word Var_10;

  mercury__list__intersect_3_p_0(TypeInfo_for_T_5, Var_7, Var_8, &Var_10);
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_5, Var_8, Var_10);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__subset_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  MR_bool succeeded;
  MR_Word Var_7 = (MR_Word) (SetB_4);
  MR_Word Var_8 = (MR_Word) (SetA_3);
  MR_Word Var_10;

  mercury__list__intersect_3_p_0(TypeInfo_for_T_5, Var_7, Var_8, &Var_10);
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_5, Var_8, Var_10);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__equal_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  MR_bool succeeded;

  succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_for_T_5, SetB_4, SetA_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__remove_least_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box * X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_bool succeeded;
  MR_Word Var_9 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  MR_Word Var_10;

  succeeded = (Var_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *X_4 = (MR_hl_field(1, Var_9, 0));
    Var_10 = ((MR_Word) ((MR_hl_field(1, Var_9, 1))));
    *STATE_VARIABLE_Set_7 = (MR_Word) (Var_10);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__set__det_remove_list_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Set_1_8;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;

  succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(TypeInfo_for_T_11, List_4, &Var_12);
  if (succeeded)
  {
    Var_14 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    Var_15 = (MR_Word) (Var_12);
    mercury__list__intersect_3_p_0(TypeInfo_for_T_11, Var_14, Var_15, &Var_17);
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_11, Var_15, Var_17);
    if (succeeded)
    {
      Var_20 = (MR_Word) (STATE_VARIABLE_Set_0_6);
      Var_21 = (MR_Word) (Var_12);
      mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_11, Var_20, Var_21, &Var_22);
      STATE_VARIABLE_Set_1_8 = (MR_Word) (Var_22);
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    *STATE_VARIABLE_Set_7 = STATE_VARIABLE_Set_1_8;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140set.det_remove_list\'/3", (MR_String) "remove_list failed");
      return;
    }
}

MR_bool MR_CALL 
mercury__set__remove_list_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_bool succeeded;
  MR_Word Var_9;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(TypeInfo_for_T_8, List_4, &Var_9);
  if (succeeded)
  {
    Var_11 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    Var_12 = (MR_Word) (Var_9);
    mercury__list__intersect_3_p_0(TypeInfo_for_T_8, Var_11, Var_12, &Var_14);
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_8, Var_12, Var_14);
    if (succeeded)
    {
      Var_17 = (MR_Word) (STATE_VARIABLE_Set_0_6);
      Var_18 = (MR_Word) (Var_9);
      mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_8, Var_17, Var_18, &Var_19);
      *STATE_VARIABLE_Set_7 = (MR_Word) (Var_19);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__set__det_remove_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Set_1_8;
  MR_Word Var_12 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  MR_Word Var_13;

  succeeded = mercury__list__delete_first_3_p_0(TypeInfo_for_T_11, Var_12, X_4, &Var_13);
  if (succeeded)
  {
    STATE_VARIABLE_Set_1_8 = (MR_Word) (Var_13);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *STATE_VARIABLE_Set_7 = STATE_VARIABLE_Set_1_8;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140set.det_remove\'/3", (MR_String) "remove failed");
      return;
    }
}

MR_bool MR_CALL 
mercury__set__remove_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_bool succeeded;
  MR_Word Var_9 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  MR_Word Var_10;

  succeeded = mercury__list__delete_first_3_p_0(TypeInfo_for_T_8, Var_9, X_4, &Var_10);
  if (succeeded)
  {
    *STATE_VARIABLE_Set_7 = (MR_Word) (Var_10);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__set__delete_list_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word Xs_5)
{
  MR_Word S2_6;

  mercury__set__delete_list_3_p_0(TypeInfo_for_T_7, Xs_5, S1_4, &S2_6);
  return S2_6;
}

void MR_CALL 
mercury__set__delete_list_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word Var_9;
  MR_Integer Var_11;
  MR_Unsigned Var_12;
  MR_Word Var_14;
  MR_Word Var_16;

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_8, List_4, (MR_Unsigned) 0U, &Var_12);
{
#define MR_PROC_LABEL mercury__set__delete_list_3_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_12 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_11  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_8, Var_11, List_4, &Var_9);
  Var_14 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_8, Var_14, Var_9, &Var_16);
  *STATE_VARIABLE_Set_7 = (MR_Word) (Var_16);
}

void MR_CALL 
mercury__set__delete_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word Var_10;
  MR_Word Var_12;
  MR_Word Var_14;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = X_4;
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_12 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_8, Var_12, Var_10, &Var_14);
  *STATE_VARIABLE_Set_7 = (MR_Word) (Var_14);
}

MR_Word MR_CALL 
mercury__set__delete_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Box T_5)
{
  MR_Word S2_6;
  MR_Word Var_9;
  MR_Word Var_11;
  MR_Word Var_13;

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = T_5;
    MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_11 = (MR_Word) (S1_4);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, Var_11, Var_9, &Var_13);
  S2_6 = (MR_Word) (Var_13);
  return S2_6;
}

MR_Word MR_CALL 
mercury__set__insert_list_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word Xs_5)
{
  MR_Word S2_6;

  mercury__set__insert_list_3_p_0(TypeInfo_for_T_7, Xs_5, S1_4, &S2_6);
  return S2_6;
}

void MR_CALL 
mercury__set__insert_list_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word Var_9;
  MR_Integer Var_11;
  MR_Unsigned Var_12;
  MR_Word Var_15;
  MR_Word Var_16;

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_8, List_4, (MR_Unsigned) 0U, &Var_12);
{
#define MR_PROC_LABEL mercury__set__insert_list_3_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_12 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_11  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_8, Var_11, List_4, &Var_9);
  Var_15 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_8, Var_9, Var_15, &Var_16);
  *STATE_VARIABLE_Set_7 = (MR_Word) (Var_16);
}

MR_bool MR_CALL 
mercury__set__insert_new_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_bool succeeded;
  MR_Word Var_9 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  MR_Word Var_10;

  succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(TypeInfo_for_T_8, Var_9, X_4, &Var_10);
  if (succeeded)
  {
    *STATE_VARIABLE_Set_7 = (MR_Word) (Var_10);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__set__insert_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word Var_9 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  MR_Word Var_10;

  mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_8, Var_9, X_4, &Var_10);
  *STATE_VARIABLE_Set_7 = (MR_Word) (Var_10);
}

MR_Word MR_CALL 
mercury__set__insert_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Box T_5)
{
  MR_Word S2_6;
  MR_Word Var_8 = (MR_Word) (S1_4);
  MR_Word Var_9;

  mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_7, Var_8, T_5, &Var_9);
  S2_6 = (MR_Word) (Var_9);
  return S2_6;
}

void MR_CALL 
mercury__set__nondet_member_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Box * X_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__set_ordlist__member_2_p_1(TypeInfo_for_T_5, X_4, Set_3, cont, cont_env_ptr);
}

MR_bool MR_CALL 
mercury__set__contains_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Box X_4)
{
  MR_bool succeeded;

  succeeded = mercury__set_ordlist__member_2_p_0(TypeInfo_for_T_5, X_4, Set_3);
  return succeeded;
}

void MR_CALL 
mercury__set__is_member_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box X_4,
  MR_Word Set_5,
  MR_Word * Result_6)
{
  MR_Word Var_8 = (MR_Word) (Set_5);

  mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_7, X_4, Var_8, Result_6);
}

void MR_CALL 
mercury__set__member_2_p_1(
  MR_Word TypeInfo_for_T_8,
  MR_Box * X_1,
  MR_Word Set_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__set_ordlist__member_2_p_1(TypeInfo_for_T_8, X_1, Set_2, cont, cont_env_ptr);
}

MR_bool MR_CALL 
mercury__set__member_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box X_1,
  MR_Word Set_2)
{
  MR_bool succeeded;
  MR_Word Var_9;
  MR_Word Var_10 = (MR_Word) (Set_2);

  mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_8, X_1, Var_10, &Var_9);
  succeeded = ((MR_Integer) 1 == Var_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__is_singleton_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Box * X_4)
{
  MR_bool succeeded;
  MR_Word Var_6 = (MR_Word) (Set_3);
  MR_Word Var_7;

  succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *X_4 = (MR_hl_field(1, Var_6, 0));
    Var_7 = ((MR_Word) ((MR_hl_field(1, Var_6, 1))));
    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word Set_2)
{
  MR_bool succeeded;
  MR_Word Var_4 = (MR_Word) (Set_2);

  succeeded = (Var_4 != (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

MR_bool MR_CALL 
mercury__set__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word Set_2)
{
  MR_bool succeeded;
  MR_Word Var_4 = (MR_Word) (Set_2);

  succeeded = (Var_4 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

MR_Word MR_CALL 
mercury__set__make_singleton_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box T_3)
{
  MR_Word S_4;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = T_3;
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  S_4 = (MR_Word) (Var_6);
  return S_4;
}

MR_bool MR_CALL 
mercury__set__singleton_set_2_p_1(
  MR_Word TypeInfo_for_T_5,
  MR_Box * X_3,
  MR_Word Set_4)
{
  MR_bool succeeded;
  MR_Word Var_6 = (MR_Word) (Set_4);
  MR_Word Var_7;

  succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *X_3 = (MR_hl_field(1, Var_6, 0));
    Var_7 = ((MR_Word) ((MR_hl_field(1, Var_6, 1))));
    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

void MR_CALL 
mercury__set__singleton_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3,
  MR_Word * Set_4)
{
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = X_3;
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *Set_4 = (MR_Word) (Var_6);
}

void MR_CALL 
mercury__set__init_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word * Set_2)
{
  *Set_2 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

MR_Word MR_CALL 
mercury__set__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

static MR_bool MR_CALL 
mercury__set____Unify____set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__set____Unify____set_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__set____Compare____set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__set____Compare____set_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__set__init(void)
{
}

void mercury__set__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__set__set__type_ctor_info_set_1);
}

void mercury__set__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__set__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module set.
