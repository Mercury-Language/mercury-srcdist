/*
** Automatically generated from `version_hash_table.m'
** by the Mercury compiler,
** version rotd-2022-01-10
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


// :- module version_hash_table.
// :- implementation.

/*
INIT mercury__version_hash_table__init
ENDINIT
*/

#include "version_hash_table.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "exception.mih"
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
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
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
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_PseudoTypeInfo_Struct2 mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0;

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1[2];

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1;

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2[3];

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2;

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0[1];

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1[1];

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2[1];

static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_hash_table_alist_2[3];

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2[3];

static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2[3];

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0[4];

static const MR_ConstString mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0[4];

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0;

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0[1];

static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2[1];

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2[1];

static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2[1];

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_26,
  MR_Word Var_27,
  MR_Word Var_28,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(
  MR_Word Var_21,
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word List_6);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word AL0_4,
  MR_Box K_5,
  MR_Word * AL_6);

static MR_bool MR_CALL 
mercury__version_hash_table__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word AL0_4,
  MR_Box K_5,
  MR_Word * AddrOfAL_16);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word AL0_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * AL_8);

static MR_bool MR_CALL 
mercury__version_hash_table__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word AL0_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * AddrOfAL_18);

static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Integer NumOccupants_6,
  MR_Integer MaxOccupants0_7,
  MR_Word HashPred0_8,
  MR_Box Buckets0_9);

static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Integer I_7,
  MR_Box OldBuckets_8,
  MR_Word HashPred_9,
  MR_Integer NumBuckets_10,
  MR_Box STATE_VARIABLE_Buckets_0_13,
  MR_Box * STATE_VARIABLE_Buckets_14);

static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word AL_6,
  MR_Word HashPred_7,
  MR_Integer NumBuckets_8,
  MR_Box STATE_VARIABLE_Buckets_0_13,
  MR_Box * STATE_VARIABLE_Buckets_14);

static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11);

static void MR_CALL 
mercury__version_hash_table__foldl__ho13_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static MR_Integer MR_CALL 
mercury__version_hash_table__munge_2_f_0(
  MR_Integer N_4,
  MR_Integer X_5);

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


static /* final */ const MR_Box mercury__version_hash_table_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__version_hash_table_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_hash_table_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_hash_table_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_hash_table_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
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
#include "math.mh"
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
#include "version_hash_table.mh"



static const MR_FA_PseudoTypeInfo_Struct2 mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_PseudoTypeInfo) (&mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2)
  }
};

const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_buckets_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__version_hash_table____Unify____buckets_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____buckets_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "buckets",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_hash_pred_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__version_hash_table____Unify____hash_pred_1_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____hash_pred_1_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "hash_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0 = {
  (MR_String) "ht_nil",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1 = {
  (MR_String) "ht_single",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2 = {
  (MR_String) "ht_cons",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2
};

static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_hash_table_alist_2[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2[3] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__version_hash_table____Unify____hash_table_alist_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____hash_table_alist_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "hash_table_alist",
  {     mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2 },
  {     mercury__version_hash_table__version_hash_table__du_ptag_ordered_hash_table_alist_2 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2,

};

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2)
};

static const MR_ConstString mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0[4] = {
  (MR_String) "ht_num_occupants",
  (MR_String) "ht_max_occupants",
  (MR_String) "ht_hash_pred",
  (MR_String) "ht_buckets"
};

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0 = {
  (MR_String) "ht",
  INT16_C(4),
  UINT16_C(12),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0,
  mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU_USEREQ,
  ((MR_Box) (mercury__version_hash_table____Unify____version_hash_table_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____version_hash_table_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "version_hash_table",
  {     mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2 },
  {     mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2,

};

void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_V_5,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_7_7;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_K_4));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 2) = ((MR_Box) (TypeInfo_for_V_5));
    }
    mercury__private_builtin__builtin_compare_non_canonical_type_3_p_0(TypeInfo_7_7, HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)));
  }
}

MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_3 == CastY_4);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      succeeded = mercury__version_hash_table__equal_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_37 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_38 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_37 == CastY_38);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Var_46 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_47 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_12 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_15 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word SubResult1_13;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_K_39, &SubResult1_13, Var_47, ArgY1_12);
                  succeeded = (SubResult1_13 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_13;
                  else
                    mercury__builtin__compare_3_p_0(TypeInfo_for_V_40, HeadVar__1_1, Var_46, ArgY2_15);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Box Var_44 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_45 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box ArgY1_30 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_33 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word ArgY3_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_31;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_K_39, &SubResult1_31, Var_45, ArgY1_30);
                  succeeded = (SubResult1_31 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_31;
                  else
                  {
                    MR_Word SubResult2_34;

                    mercury__builtin__compare_3_p_0(TypeInfo_for_V_40, &SubResult2_34, Var_44, ArgY2_33);
                    succeeded = (SubResult2_34 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_34;
                    else
                    {
                      MR_Word next_value_of_HeadVar__2_2 = Var_43;
                      MR_Word next_value_of_HeadVar__3_3 = ArgY3_36;

                      // direct tailcall eliminated
                      ;
                      HeadVar__2_2 = next_value_of_HeadVar__2_2;
                      HeadVar__3_3 = next_value_of_HeadVar__3_3;
                      continue;
                    }
                  }
                }
                break;
            }
          }
          break;
      }
    break;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_6;
            MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_17, ArgX1_5, ArgY1_6);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_18, ArgX2_7, ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_9 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_10;
            MR_Box ArgX2_11 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_12;
            MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_14;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_12 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
              ArgY3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_17, ArgX1_9, ArgY1_10);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_18, ArgX2_11, ArgY2_12);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = ArgX3_13;
                  next_value_of_HeadVar__2_2 = ArgY3_14;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  continue;
                }
              }
            }
          }
          break;
      }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Box Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Box Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_K_6));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_for_V_7));
    }
    mercury__version_array____Compare____version_array_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_Box) (Cast_HeadVar1_4), (MR_Box) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Box Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Box Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_K_5));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 2) = ((MR_Box) (TypeInfo_for_V_6));
    }
    succeeded = mercury__version_array____Unify____version_array_1_0(TypeInfo_8_8, (MR_Box) (Cast_HeadVar1_3), (MR_Box) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__version_hash_table__fold_f_4_p_1(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_T_17,
  MR_Word F_5,
  MR_Word List_6,
  MR_Box A0_7,
  MR_Box * A_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *A_8 = A0_7;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_10 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));

          *A_8 = func_1(((MR_Box) (F_5)), K_9, V_10, A0_7);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2))));
          MR_Box A1_12;
          MR_Box K_13 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_14 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_A0_7;

          A1_12 = func_0(((MR_Box) (F_5)), K_13, V_14, A0_7);
          // direct tailcall eliminated
          ;
          next_value_of_List_6 = KVs_11;
          next_value_of_A0_7 = A1_12;
          List_6 = next_value_of_List_6;
          A0_7 = next_value_of_A0_7;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0(
  MR_Word TypeInfo_for_K_3,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
{
#define MR_PROC_LABEL mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 = HeadVar__1_1 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = HashPred;
}
  }
}

void MR_CALL 
mercury__version_hash_table__find_slot_2_4_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word HashPred_5,
  MR_Box K_6,
  MR_Integer NumBuckets_7,
  MR_Integer * H_8)
{
  {
    MR_Integer Hash_9;
    MR_Integer Var_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_5, (MR_Integer) 1))));
    MR_Box conv1_Hash_9;

    func_0(((MR_Box) (HashPred_5)), K_6, &conv1_Hash_9);
    Hash_9 = ((MR_Integer) (conv1_Hash_9));
    Var_10 = (MR_Integer) ((MR_Unsigned) NumBuckets_7 - (MR_Unsigned) 1);
    *H_8 = (Hash_9 & Var_10);
  }
}

MR_Integer MR_CALL 
mercury__version_hash_table__find_slot_2_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HT_4,
  MR_Box K_5)
{
  {
    MR_Integer H_6;
    MR_Word HashPred0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 2))));
    MR_Word HashPred_8;
    MR_Integer Var_9;
    MR_Integer Hash_27;
    MR_Integer Var_28;
    MR_Box Var_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_27;

{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 = HashPred0_7 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 HashPred_8  = HashPred;
}
    Var_17 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 3))));
{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Var_17) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_9  = N;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_8, (MR_Integer) 1))));
    func_0(((MR_Box) (HashPred_8)), K_5, &conv1_Hash_27);
    Hash_27 = ((MR_Integer) (conv1_Hash_27));
    Var_28 = (MR_Integer) ((MR_Unsigned) Var_9 - (MR_Unsigned) 1);
    H_6 = (Hash_27 & Var_28);
    return H_6;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__equal_2_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word A_3,
  MR_Word B_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_13_13;

    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_K_10));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_for_V_11));
    }
    succeeded = (((MR_Word) A_3) == ((MR_Word) B_4));
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_22_44;
      MR_Word TypeInfo_23_45;
      MR_Integer NumA_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 0))));
      MR_Integer NumB_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 0))));
      MR_Box Buckets_34;
      MR_Integer Var_50;
      MR_Integer Var_51;

      succeeded = (NumA_5 == NumB_6);
      if (succeeded)
      {
        Buckets_34 = ((MR_Box) ((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 3))));
        TypeCtorInfo_22_44 = (MR_Word) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2);
        Var_50 = (MR_Integer) 0;
        {
          TypeInfo_23_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_23_45, 0) = ((MR_Box) (TypeCtorInfo_22_44));
          MR_hl_field(MR_mktag(0), TypeInfo_23_45, 1) = ((MR_Box) (TypeInfo_for_K_10));
          MR_hl_field(MR_mktag(0), TypeInfo_23_45, 2) = ((MR_Box) (TypeInfo_for_V_11));
        }
{
#define MR_PROC_LABEL mercury__version_hash_table__equal_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Buckets_34) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_51  = N;
}
        succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_K_10, TypeInfo_for_V_11, B_4, TypeInfo_23_45, Buckets_34, Var_50, Var_51);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_26,
  MR_Word Var_27,
  MR_Word Var_28,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Box conv0_Var_13;
      MR_Integer next_value_of_HeadVar__3_9;

      conv0_Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_17, (MR_Box) (HeadVar__2_8), HeadVar__3_9);
      Var_13 = ((MR_Word) (conv0_Var_13));
      succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(Var_26, Var_27, Var_28, Var_22, Var_23, Var_13);
      if (succeeded)
      {
        Var_16 = (MR_Integer) 1;
        Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) Var_16);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_15;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(
  MR_Word Var_21,
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word List_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          MR_Box Var_33;

          succeeded = mercury__version_hash_table__search_2_f_0(Var_21, Var_22, Var_23, K_8, &Var_33);
          if (succeeded)
            succeeded = mercury__builtin__unify_2_p_0(Var_22, V_9, Var_33);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2))));
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          MR_Box Var_27;
          MR_Word next_value_of_List_6;

          succeeded = mercury__version_hash_table__search_2_f_0(Var_21, Var_22, Var_23, K_16, &Var_27);
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0(Var_22, V_17, Var_27);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_List_6 = KVs_10;
              List_6 = next_value_of_List_6;
              continue;
            }
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_5(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_9,
  MR_Box * STATE_VARIABLE_A_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_23_23;
    MR_Box Buckets_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_29;

    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 2) = ((MR_Box) (TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Buckets_8) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_29  = N;
}
    succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_T_18, P_5, TypeInfo_23_23, Buckets_8, (MR_Integer) 0, Var_29, STATE_VARIABLE_A_0_9, STATE_VARIABLE_A_10);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Box conv0_Var_13;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

      conv0_Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_17, (MR_Box) (HeadVar__2_8), HeadVar__3_9);
      Var_13 = ((MR_Word) (conv0_Var_13));
      succeeded = mercury__version_hash_table__fold_p_4_p_5(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      if (succeeded)
      {
        Var_16 = (MR_Integer) 1;
        Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) Var_16);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_15;
        next_value_of_HeadVar__5_11 = Var_14;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    else
    {
      *HeadVar__6_12 = HeadVar__5_11;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_5(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_T_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

          succeeded = func_1(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          succeeded = func_0(((MR_Box) (P_5)), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_List_6 = KVs_10;
            next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
            List_6 = next_value_of_List_6;
            STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_4(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_9,
  MR_Box * STATE_VARIABLE_A_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_23_23;
    MR_Box Buckets_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_29;

    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 2) = ((MR_Box) (TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Buckets_8) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_29  = N;
}
    succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_T_18, P_5, TypeInfo_23_23, Buckets_8, (MR_Integer) 0, Var_29, STATE_VARIABLE_A_0_9, STATE_VARIABLE_A_10);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Box conv0_Var_13;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

      conv0_Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_17, (MR_Box) (HeadVar__2_8), HeadVar__3_9);
      Var_13 = ((MR_Word) (conv0_Var_13));
      succeeded = mercury__version_hash_table__fold_p_4_p_4(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      if (succeeded)
      {
        Var_16 = (MR_Integer) 1;
        Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) Var_16);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_15;
        next_value_of_HeadVar__5_11 = Var_14;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    else
    {
      *HeadVar__6_12 = HeadVar__5_11;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_4(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_T_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

          succeeded = func_1(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          succeeded = func_0(((MR_Box) (P_5)), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_List_6 = KVs_10;
            next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
            List_6 = next_value_of_List_6;
            STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_3(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_9,
  MR_Box * STATE_VARIABLE_A_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_23_23;
    MR_Box Buckets_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_29;

    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 2) = ((MR_Box) (TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Buckets_8) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_29  = N;
}
    succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_T_18, P_5, TypeInfo_23_23, Buckets_8, (MR_Integer) 0, Var_29, STATE_VARIABLE_A_0_9, STATE_VARIABLE_A_10);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Box conv0_Var_13;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

      conv0_Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_17, (MR_Box) (HeadVar__2_8), HeadVar__3_9);
      Var_13 = ((MR_Word) (conv0_Var_13));
      succeeded = mercury__version_hash_table__fold_p_4_p_3(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      if (succeeded)
      {
        Var_16 = (MR_Integer) 1;
        Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) Var_16);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_15;
        next_value_of_HeadVar__5_11 = Var_14;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    else
    {
      *HeadVar__6_12 = HeadVar__5_11;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_3(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_T_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

          succeeded = func_1(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          succeeded = func_0(((MR_Box) (P_5)), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_List_6 = KVs_10;
            next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
            List_6 = next_value_of_List_6;
            STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__version_hash_table__fold_4_p_2(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_9,
  MR_Box * STATE_VARIABLE_A_10)
{
  {
    MR_Word TypeInfo_23_23;
    MR_Box Buckets_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_29;

    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 2) = ((MR_Box) (TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Buckets_8) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_29  = N;
}
    mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_T_18, P_5, TypeInfo_23_23, Buckets_8, (MR_Integer) 0, Var_29, STATE_VARIABLE_A_0_9, STATE_VARIABLE_A_10);
  }
}

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Box conv0_Var_13;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

      conv0_Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_17, (MR_Box) (HeadVar__2_8), HeadVar__3_9);
      Var_13 = ((MR_Word) (conv0_Var_13));
      mercury__version_hash_table__fold_p_4_p_2(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    else
      *HeadVar__6_12 = HeadVar__5_11;
    break;
  }
}

void MR_CALL 
mercury__version_hash_table__fold_p_4_p_2(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_T_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

          func_1(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          func_0(((MR_Box) (P_5)), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          // direct tailcall eliminated
          ;
          next_value_of_List_6 = KVs_10;
          next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
          List_6 = next_value_of_List_6;
          STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__version_hash_table__fold_4_p_1(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_9,
  MR_Box * STATE_VARIABLE_A_10)
{
  {
    MR_Word TypeInfo_23_23;
    MR_Box Buckets_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_29;

    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 2) = ((MR_Box) (TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Buckets_8) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_29  = N;
}
    mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_T_18, P_5, TypeInfo_23_23, Buckets_8, (MR_Integer) 0, Var_29, STATE_VARIABLE_A_0_9, STATE_VARIABLE_A_10);
  }
}

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Box conv0_Var_13;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

      conv0_Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_17, (MR_Box) (HeadVar__2_8), HeadVar__3_9);
      Var_13 = ((MR_Word) (conv0_Var_13));
      mercury__version_hash_table__fold_p_4_p_1(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    else
      *HeadVar__6_12 = HeadVar__5_11;
    break;
  }
}

void MR_CALL 
mercury__version_hash_table__fold_p_4_p_1(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_T_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

          func_1(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          func_0(((MR_Box) (P_5)), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          // direct tailcall eliminated
          ;
          next_value_of_List_6 = KVs_10;
          next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
          List_6 = next_value_of_List_6;
          STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__version_hash_table__fold_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_9,
  MR_Box * STATE_VARIABLE_A_10)
{
  {
    MR_Word TypeInfo_23_23;
    MR_Box Buckets_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_29;

    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 2) = ((MR_Box) (TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Buckets_8) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_29  = N;
}
    mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_T_18, P_5, TypeInfo_23_23, Buckets_8, (MR_Integer) 0, Var_29, STATE_VARIABLE_A_0_9, STATE_VARIABLE_A_10);
  }
}

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Box conv0_Var_13;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

      conv0_Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_17, (MR_Box) (HeadVar__2_8), HeadVar__3_9);
      Var_13 = ((MR_Word) (conv0_Var_13));
      mercury__version_hash_table__fold_p_4_p_0(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    else
      *HeadVar__6_12 = HeadVar__5_11;
    break;
  }
}

void MR_CALL 
mercury__version_hash_table__fold_p_4_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_T_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

          func_1(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          func_0(((MR_Box) (P_5)), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          // direct tailcall eliminated
          ;
          next_value_of_List_6 = KVs_10;
          next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
          List_6 = next_value_of_List_6;
          STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__version_hash_table__fold_3_f_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_T_16,
  MR_Word F_5,
  MR_Word HT_6,
  MR_Box X0_7)
{
  {
    MR_Box X_8;
    MR_Word TypeInfo_21_21;
    MR_Box Buckets_9 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_27;

    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_K_14));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 2) = ((MR_Box) (TypeInfo_for_V_15));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Buckets_9) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_27  = N;
}
    mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(TypeInfo_for_K_14, TypeInfo_for_V_15, TypeInfo_for_T_16, F_5, TypeInfo_21_21, Buckets_9, (MR_Integer) 0, Var_27, X0_7, &X_8);
    return X_8;
  }
}

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Box conv0_Var_13;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

      conv0_Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_17, (MR_Box) (HeadVar__2_8), HeadVar__3_9);
      Var_13 = ((MR_Word) (conv0_Var_13));
      mercury__version_hash_table__fold_f_4_p_0(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    else
      *HeadVar__6_12 = HeadVar__5_11;
    break;
  }
}

void MR_CALL 
mercury__version_hash_table__fold_f_4_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_T_17,
  MR_Word F_5,
  MR_Word List_6,
  MR_Box A0_7,
  MR_Box * A_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *A_8 = A0_7;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_10 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));

          *A_8 = func_1(((MR_Box) (F_5)), K_9, V_10, A0_7);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2))));
          MR_Box A1_12;
          MR_Box K_13 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_14 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_A0_7;

          A1_12 = func_0(((MR_Box) (F_5)), K_13, V_14, A0_7);
          // direct tailcall eliminated
          ;
          next_value_of_List_6 = KVs_11;
          next_value_of_A0_7 = A1_12;
          List_6 = next_value_of_List_6;
          A0_7 = next_value_of_A0_7;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HashPred_4,
  MR_Word AList_5)
{
  {
    MR_Word HT_6;
    MR_Word Var_7;

    Var_7 = mercury__version_hash_table__init_2_4_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, HashPred_4, (MR_Integer) 7, (MR_Float) 0.87500000000000000, (MR_Integer) 1);
    mercury__version_hash_table__from_assoc_list_2_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, AList_5, Var_7, &HT_6);
    return HT_6;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__from_assoc_list_4_f_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word HashPred_6,
  MR_Integer N_7,
  MR_Float MaxOccupants_8,
  MR_Word AList_9)
{
  {
    MR_Word HT_10;
    MR_Word Var_11;

    Var_11 = mercury__version_hash_table__init_2_4_f_0(TypeInfo_for_K_12, TypeInfo_for_V_13, HashPred_6, N_7, MaxOccupants_8, (MR_Integer) 1);
    mercury__version_hash_table__from_assoc_list_2_3_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, AList_9, Var_11, &HT_10);
    return HT_10;
  }
}

void MR_CALL 
mercury__version_hash_table__from_assoc_list_2_3_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_HT_0_2,
  MR_Word * STATE_VARIABLE_HT_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HT_3 = STATE_VARIABLE_HT_0_2;
    else
    {
      MR_Box K_7;
      MR_Box V_8;
      MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_HT_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HT_0_2;

      K_7 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      V_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      STATE_VARIABLE_HT_14_14 = mercury__version_hash_table__set_3_f_0(TypeInfo_for_K_16, TypeInfo_for_V_17, STATE_VARIABLE_HT_0_2, K_7, V_8);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = T_9;
      next_value_of_STATE_VARIABLE_HT_0_2 = STATE_VARIABLE_HT_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HT_0_2 = next_value_of_STATE_VARIABLE_HT_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word HT_3)
{
  {
    MR_Word AL_4;
    MR_Word TypeInfo_17_17;
    MR_Box Buckets_5 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 3))));
    MR_Integer Var_27;

    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_K_11));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 2) = ((MR_Box) (TypeInfo_for_V_12));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__to_assoc_list_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Buckets_5) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_27  = N;
}
    mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_17_17, Buckets_5, (MR_Integer) 0, Var_27, (MR_Word) ((MR_Unsigned) 0U), &AL_4);
    return AL_4;
  }
}

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_Word TypeInfo_for_T1_17,
  MR_Box HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Integer Var_15;
      MR_Box conv0_Var_13;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Word next_value_of_HeadVar__5_11;

      conv0_Var_13 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_17, (MR_Box) (HeadVar__2_8), HeadVar__3_9);
      Var_13 = ((MR_Word) (conv0_Var_13));
      mercury__version_hash_table__to_assoc_list_2_3_p_0(Var_27, Var_28, Var_13, HeadVar__5_11, &Var_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    else
      *HeadVar__6_12 = HeadVar__5_11;
    break;
  }
}

void MR_CALL 
mercury__version_hash_table__to_assoc_list_2_3_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word X_4,
  MR_Word AL0_5,
  MR_Word * AL_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) X_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *AL_6 = AL0_5;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_7 = (MR_hl_field(MR_mktag(1), X_4, (MR_Integer) 0));
          MR_Box V_8 = (MR_hl_field(MR_mktag(1), X_4, (MR_Integer) 1));
          MR_Word Var_12;

          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = K_7;
            MR_hl_field(MR_mktag(0), Var_12, 1) = V_8;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *AL_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (AL0_5));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), X_4, (MR_Integer) 2))));
          MR_Word AL1_10;
          MR_Word Var_11;
          MR_Box K_13 = (MR_hl_field(MR_mktag(2), X_4, (MR_Integer) 0));
          MR_Box V_14 = (MR_hl_field(MR_mktag(2), X_4, (MR_Integer) 1));
          MR_Word next_value_of_X_4;
          MR_Word next_value_of_AL0_5;

          {
            Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_11, 0) = K_13;
            MR_hl_field(MR_mktag(0), Var_11, 1) = V_14;
          }
          {
            AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AL1_10, 0) = ((MR_Box) (Var_11));
            MR_hl_field(MR_mktag(1), AL1_10, 1) = ((MR_Box) (AL0_5));
          }
          // direct tailcall eliminated
          ;
          next_value_of_X_4 = T_9;
          next_value_of_AL0_5 = AL1_10;
          X_4 = next_value_of_X_4;
          AL0_5 = next_value_of_AL0_5;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__version_hash_table__delete_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Box K_4,
  MR_Word HT_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__version_hash_table__delete_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HT_5, K_4);
}

MR_Word MR_CALL 
mercury__version_hash_table__delete_2_f_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word HT0_4,
  MR_Box K_5)
{
  {
    MR_bool succeeded;
    MR_Word HT_6;
    MR_Word TypeInfo_20_20;
    MR_Integer H_7;
    MR_Integer NumOccupants0_8;
    MR_Integer MaxOccupants_9;
    MR_Word HashPred_10;
    MR_Box Buckets0_11;
    MR_Word AL0_12;
    MR_Word HashPred0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 2))));
    MR_Word HashPred_25;
    MR_Integer Var_26;
    MR_Integer Hash_42;
    MR_Integer Var_43;
    MR_Box Var_32;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_42;
    MR_Box conv2_AL0_12;
    MR_Word AL_13;

{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 = HashPred0_24 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 HashPred_25  = HashPred;
}
    Var_32 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 3))));
{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Var_32) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_26  = N;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_25, (MR_Integer) 1))));
    func_0(((MR_Box) (HashPred_25)), K_5, &conv1_Hash_42);
    Hash_42 = ((MR_Integer) (conv1_Hash_42));
    Var_43 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
    H_7 = (Hash_42 & Var_43);
    NumOccupants0_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 0))));
    MaxOccupants_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 1))));
    HashPred_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 2))));
    Buckets0_11 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 3))));
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_K_17));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 2) = ((MR_Box) (TypeInfo_for_V_18));
    }
    conv2_AL0_12 = mercury__version_array__lookup_2_f_0(TypeInfo_20_20, (MR_Box) (Buckets0_11), H_7);
    AL0_12 = ((MR_Word) (conv2_AL0_12));
    succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(TypeInfo_for_K_17, AL0_12, K_5, &AL_13);
    if (succeeded)
    {
      MR_Box Buckets_14;
      MR_Integer NumOccupants_15;
      MR_Box conv3_Buckets_14;

      mercury__version_array__set_4_p_0(TypeInfo_20_20, H_7, ((MR_Box) (AL_13)), (MR_Box) (Buckets0_11), &conv3_Buckets_14);
      Buckets_14 = (MR_Box) (conv3_Buckets_14);
      NumOccupants_15 = (MR_Integer) ((MR_Unsigned) NumOccupants0_8 - (MR_Unsigned) 1);
      {
        HT_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HT_6, 0) = ((MR_Box) (NumOccupants_15));
        MR_hl_field(MR_mktag(0), HT_6, 1) = ((MR_Box) (MaxOccupants_9));
        MR_hl_field(MR_mktag(0), HT_6, 2) = ((MR_Box) (HashPred_10));
        MR_hl_field(MR_mktag(0), HT_6, 3) = ((MR_Box) (Buckets_14));
      }
    }
    else
      HT_6 = HT0_4;
    return HT_6;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word AL0_4,
  MR_Box K_5,
  MR_Word * AL_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) AL0_4)) == (MR_Integer) 2))
    {
      MR_Box K0_8 = (MR_hl_field(MR_mktag(2), AL0_4, (MR_Integer) 0));
      MR_Box V0_9 = (MR_hl_field(MR_mktag(2), AL0_4, (MR_Integer) 1));
      MR_Word T0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AL0_4, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_12, K0_8, K_5);
      if (succeeded)
      {
        *AL_6 = T0_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word * AddrT_15;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *AL_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = K0_8;
          MR_hl_field(MR_mktag(2), base, 1) = V0_9;
          MR_hl_field(MR_mktag(2), base, 2) = NULL;
        }
        AddrT_15 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *AL_6, (MR_Integer) 2)));
        succeeded = mercury__version_hash_table__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_95_49_3_p_0(TypeInfo_for_K_12, T0_10, K_5, AddrT_15);
      }
    }
    else
    if (((MR_tag((MR_Word) AL0_4)) == (MR_Integer) 1))
    {
      MR_Box Var_14 = (MR_hl_field(MR_mktag(1), AL0_4, (MR_Integer) 0));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_12, K_5, Var_14);
      if (succeeded)
      {
        *AL_6 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word AL0_4,
  MR_Box K_5,
  MR_Word * AddrOfAL_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) AL0_4)) == (MR_Integer) 2))
    {
      MR_Box K0_8 = (MR_hl_field(MR_mktag(2), AL0_4, (MR_Integer) 0));
      MR_Box V0_9 = (MR_hl_field(MR_mktag(2), AL0_4, (MR_Integer) 1));
      MR_Word T0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AL0_4, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_12, K0_8, K_5);
      if (succeeded)
      {
        *AddrOfAL_16 = T0_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word * AddrT_15;
        MR_Word AL_17;
        MR_Word next_value_of_AL0_4;
        MR_Word * next_value_of_AddrOfAL_16;

        {
          AL_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), AL_17, 0) = K0_8;
          MR_hl_field(MR_mktag(2), AL_17, 1) = V0_9;
          MR_hl_field(MR_mktag(2), AL_17, 2) = NULL;
        }
        AddrT_15 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), AL_17, (MR_Integer) 2)));
        *AddrOfAL_16 = AL_17;
        // direct tailcall eliminated
        ;
        next_value_of_AL0_4 = T0_10;
        next_value_of_AddrOfAL_16 = AddrT_15;
        AL0_4 = next_value_of_AL0_4;
        AddrOfAL_16 = next_value_of_AddrOfAL_16;
        continue;
      }
    }
    else
    if (((MR_tag((MR_Word) AL0_4)) == (MR_Integer) 1))
    {
      MR_Box Var_14 = (MR_hl_field(MR_mktag(1), AL0_4, (MR_Integer) 0));
      MR_Word AL_20;

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_12, K_5, Var_14);
      if (succeeded)
      {
        AL_20 = (MR_Word) ((MR_Unsigned) 0U);
        *AddrOfAL_16 = AL_20;
        succeeded = MR_TRUE;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__version_hash_table__det_update_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word HT_7,
  MR_Word * HeadVar__4_4)
{
  *HeadVar__4_4 = mercury__version_hash_table__det_update_3_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, HT_7, K_5, V_6);
}

MR_Word MR_CALL 
mercury__version_hash_table__det_update_3_f_0(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_Word HT0_5,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_bool succeeded;
    MR_Word HT_8;
    MR_Word TypeInfo_27_27;
    MR_Integer H_9;
    MR_Box Buckets0_10;
    MR_Word AL0_11;
    MR_Word AL_13;
    MR_Box Buckets_14;
    MR_Word HashPred0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 2))));
    MR_Word HashPred_32;
    MR_Integer Var_33;
    MR_Integer Hash_49;
    MR_Integer Var_50;
    MR_Box Var_39;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_49;
    MR_Box conv2_AL0_11;
    MR_Word AL1_12;
    MR_Box conv3_Buckets_14;
    MR_Integer Var_20;
    MR_Integer Var_21;
    MR_Word Var_22;

{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 = HashPred0_31 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 HashPred_32  = HashPred;
}
    Var_39 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 3))));
{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Var_39) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_33  = N;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_32, (MR_Integer) 1))));
    func_0(((MR_Box) (HashPred_32)), K_6, &conv1_Hash_49);
    Hash_49 = ((MR_Integer) (conv1_Hash_49));
    Var_50 = (MR_Integer) ((MR_Unsigned) Var_33 - (MR_Unsigned) 1);
    H_9 = (Hash_49 & Var_50);
    Buckets0_10 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 3))));
    {
      TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_K_24));
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 2) = ((MR_Box) (TypeInfo_for_V_25));
    }
    conv2_AL0_11 = mercury__version_array__lookup_2_f_0(TypeInfo_27_27, (MR_Box) (Buckets0_10), H_9);
    AL0_11 = ((MR_Word) (conv2_AL0_11));
    succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_24, AL0_11, K_6, V_7, &AL1_12);
    if (succeeded)
      AL_13 = AL1_12;
    else
      mercury__require__error_2_p_0((MR_String) "function \140version_hash_table.det_update\'/3", (MR_String) "key not found");
    mercury__version_array__set_4_p_0(TypeInfo_27_27, H_9, ((MR_Box) (AL_13)), (MR_Box) (Buckets0_10), &conv3_Buckets_14);
    Buckets_14 = (MR_Box) (conv3_Buckets_14);
    Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 0))));
    Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 1))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 2))));
    {
      HT_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HT_8, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), HT_8, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), HT_8, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), HT_8, 3) = ((MR_Box) (Buckets_14));
    }
    return HT_8;
  }
}

void MR_CALL 
mercury__version_hash_table__det_insert_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word HT_7,
  MR_Word * HeadVar__4_4)
{
  *HeadVar__4_4 = mercury__version_hash_table__det_insert_3_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, HT_7, K_5, V_6);
}

MR_Word MR_CALL 
mercury__version_hash_table__det_insert_3_f_0(
  MR_Word TypeInfo_for_K_27,
  MR_Word TypeInfo_for_V_28,
  MR_Word HT0_5,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_bool succeeded;
    MR_Word HT_8;
    MR_Word TypeInfo_30_30;
    MR_Integer H_9;
    MR_Integer NumOccupants0_10;
    MR_Integer MaxOccupants_11;
    MR_Word HashPred_12;
    MR_Box Buckets0_13;
    MR_Word AL0_14;
    MR_Word AL_15;
    MR_Box Buckets_22;
    MR_Integer NumOccupants_23;
    MR_Word HashPred0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 2))));
    MR_Word HashPred_48;
    MR_Integer Var_49;
    MR_Integer Hash_65;
    MR_Integer Var_66;
    MR_Box Var_55;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_65;
    MR_Box conv2_AL0_14;
    MR_Box conv3_Buckets_22;

{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 = HashPred0_47 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 HashPred_48  = HashPred;
}
    Var_55 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 3))));
{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Var_55) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_49  = N;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_48, (MR_Integer) 1))));
    func_0(((MR_Box) (HashPred_48)), K_6, &conv1_Hash_65);
    Hash_65 = ((MR_Integer) (conv1_Hash_65));
    Var_66 = (MR_Integer) ((MR_Unsigned) Var_49 - (MR_Unsigned) 1);
    H_9 = (Hash_65 & Var_66);
    NumOccupants0_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 0))));
    MaxOccupants_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 1))));
    HashPred_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 2))));
    Buckets0_13 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 3))));
    {
      TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_30_30, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_30_30, 1) = ((MR_Box) (TypeInfo_for_K_27));
      MR_hl_field(MR_mktag(0), TypeInfo_30_30, 2) = ((MR_Box) (TypeInfo_for_V_28));
    }
    conv2_AL0_14 = mercury__version_array__lookup_2_f_0(TypeInfo_30_30, (MR_Box) (Buckets0_13), H_9);
    AL0_14 = ((MR_Word) (conv2_AL0_14));
    switch (MR_tag((MR_Word) AL0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AL_15, 0) = K_6;
          MR_hl_field(MR_mktag(1), AL_15, 1) = V_7;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_32;

          succeeded = mercury__version_hash_table__alist_search_3_p_0(TypeInfo_for_K_27, TypeInfo_for_V_28, AL0_14, K_6, &Var_32);
          if (succeeded)
            mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_software_error_0), ((MR_Box) (((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present")))));
          else
            {
              AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), AL_15, 0) = K_6;
              MR_hl_field(MR_mktag(2), AL_15, 1) = V_7;
              MR_hl_field(MR_mktag(2), AL_15, 2) = ((MR_Box) (AL0_14));
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_21;

          succeeded = mercury__version_hash_table__alist_search_3_p_0(TypeInfo_for_K_27, TypeInfo_for_V_28, AL0_14, K_6, &Var_21);
          if (succeeded)
            mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_software_error_0), ((MR_Box) (((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present")))));
          else
            {
              AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), AL_15, 0) = K_6;
              MR_hl_field(MR_mktag(2), AL_15, 1) = V_7;
              MR_hl_field(MR_mktag(2), AL_15, 2) = ((MR_Box) (AL0_14));
            }
        }
        break;
    }
    mercury__version_array__set_4_p_0(TypeInfo_30_30, H_9, ((MR_Box) (AL_15)), (MR_Box) (Buckets0_13), &conv3_Buckets_22);
    Buckets_22 = (MR_Box) (conv3_Buckets_22);
    NumOccupants_23 = (MR_Integer) ((MR_Unsigned) NumOccupants0_10 + (MR_Unsigned) 1);
    succeeded = (NumOccupants_23 > MaxOccupants_11);
    if (succeeded)
      HT_8 = mercury__version_hash_table__expand_4_f_0(TypeInfo_for_K_27, TypeInfo_for_V_28, NumOccupants_23, MaxOccupants_11, HashPred_12, Buckets_22);
    else
      {
        HT_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HT_8, 0) = ((MR_Box) (NumOccupants_23));
        MR_hl_field(MR_mktag(0), HT_8, 1) = ((MR_Box) (MaxOccupants_11));
        MR_hl_field(MR_mktag(0), HT_8, 2) = ((MR_Box) (HashPred_12));
        MR_hl_field(MR_mktag(0), HT_8, 3) = ((MR_Box) (Buckets_22));
      }
    return HT_8;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box K_5,
  MR_Word HT_6,
  MR_Box V_7)
{
  {
    MR_Word HeadVar__4_4;

    HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, HT_6, K_5, V_7);
    return HeadVar__4_4;
  }
}

void MR_CALL 
mercury__version_hash_table__set_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word HT_7,
  MR_Word * HeadVar__4_4)
{
  *HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, HT_7, K_5, V_6);
}

MR_Word MR_CALL 
mercury__version_hash_table__set_3_f_0(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word HT0_5,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_bool succeeded;
    MR_Word HT_8;
    MR_Word TypeInfo_29_29;
    MR_Integer H_9;
    MR_Integer NumOccupants0_10;
    MR_Integer MaxOccupants_11;
    MR_Word HashPred_12;
    MR_Box Buckets0_13;
    MR_Word AL0_14;
    MR_Word AL_15;
    MR_Word MayExpand_16;
    MR_Box Buckets_23;
    MR_Word HashPred0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 2))));
    MR_Word HashPred_34;
    MR_Integer Var_35;
    MR_Integer Hash_51;
    MR_Integer Var_52;
    MR_Box Var_41;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_51;
    MR_Box conv2_AL0_14;
    MR_Box conv3_Buckets_23;

{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 = HashPred0_33 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 HashPred_34  = HashPred;
}
    Var_41 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 3))));
{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Var_41) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_35  = N;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_34, (MR_Integer) 1))));
    func_0(((MR_Box) (HashPred_34)), K_6, &conv1_Hash_51);
    Hash_51 = ((MR_Integer) (conv1_Hash_51));
    Var_52 = (MR_Integer) ((MR_Unsigned) Var_35 - (MR_Unsigned) 1);
    H_9 = (Hash_51 & Var_52);
    NumOccupants0_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 0))));
    MaxOccupants_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 1))));
    HashPred_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 2))));
    Buckets0_13 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 3))));
    {
      TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_K_26));
      MR_hl_field(MR_mktag(0), TypeInfo_29_29, 2) = ((MR_Box) (TypeInfo_for_V_27));
    }
    conv2_AL0_14 = mercury__version_array__lookup_2_f_0(TypeInfo_29_29, (MR_Box) (Buckets0_13), H_9);
    AL0_14 = ((MR_Word) (conv2_AL0_14));
    switch (MR_tag((MR_Word) AL0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AL_15, 0) = K_6;
            MR_hl_field(MR_mktag(1), AL_15, 1) = V_7;
          }
          MayExpand_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_17 = (MR_hl_field(MR_mktag(1), AL0_14, (MR_Integer) 0));

          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_26, K0_17, K_6);
          if (succeeded)
          {
            {
              AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), AL_15, 0) = K0_17;
              MR_hl_field(MR_mktag(1), AL_15, 1) = V_7;
            }
            MayExpand_16 = (MR_Integer) 0;
          }
          else
          {
            {
              AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), AL_15, 0) = K_6;
              MR_hl_field(MR_mktag(2), AL_15, 1) = V_7;
              MR_hl_field(MR_mktag(2), AL_15, 2) = ((MR_Box) (AL0_14));
            }
            MayExpand_16 = (MR_Integer) 1;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word AL1_22;

          succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_26, AL0_14, K_6, V_7, &AL1_22);
          if (succeeded)
          {
            AL_15 = AL1_22;
            MayExpand_16 = (MR_Integer) 0;
          }
          else
          {
            {
              AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), AL_15, 0) = K_6;
              MR_hl_field(MR_mktag(2), AL_15, 1) = V_7;
              MR_hl_field(MR_mktag(2), AL_15, 2) = ((MR_Box) (AL0_14));
            }
            MayExpand_16 = (MR_Integer) 1;
          }
        }
        break;
    }
    mercury__version_array__set_4_p_0(TypeInfo_29_29, H_9, ((MR_Box) (AL_15)), (MR_Box) (Buckets0_13), &conv3_Buckets_23);
    Buckets_23 = (MR_Box) (conv3_Buckets_23);
    switch (MayExpand_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          HT_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HT_8, 0) = ((MR_Box) (NumOccupants0_10));
          MR_hl_field(MR_mktag(0), HT_8, 1) = ((MR_Box) (MaxOccupants_11));
          MR_hl_field(MR_mktag(0), HT_8, 2) = ((MR_Box) (HashPred_12));
          MR_hl_field(MR_mktag(0), HT_8, 3) = ((MR_Box) (Buckets_23));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer NumOccupants_24 = (MR_Integer) ((MR_Unsigned) NumOccupants0_10 + (MR_Unsigned) 1);

          succeeded = (NumOccupants_24 > MaxOccupants_11);
          if (succeeded)
            HT_8 = mercury__version_hash_table__expand_4_f_0(TypeInfo_for_K_26, TypeInfo_for_V_27, NumOccupants_24, MaxOccupants_11, HashPred_12, Buckets_23);
          else
            {
              HT_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HT_8, 0) = ((MR_Box) (NumOccupants_24));
              MR_hl_field(MR_mktag(0), HT_8, 1) = ((MR_Box) (MaxOccupants_11));
              MR_hl_field(MR_mktag(0), HT_8, 2) = ((MR_Box) (HashPred_12));
              MR_hl_field(MR_mktag(0), HT_8, 3) = ((MR_Box) (Buckets_23));
            }
        }
        break;
    }
    return HT_8;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word AL0_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * AL_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) AL0_5)) == (MR_Integer) 2))
    {
      MR_Box K0_10 = (MR_hl_field(MR_mktag(2), AL0_5, (MR_Integer) 0));
      MR_Box V0_11 = (MR_hl_field(MR_mktag(2), AL0_5, (MR_Integer) 1));
      MR_Word T0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AL0_5, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K0_10, K_6);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *AL_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = K0_10;
          MR_hl_field(MR_mktag(2), base, 1) = V_7;
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (T0_12));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word * AddrT_17;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *AL_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = K0_10;
          MR_hl_field(MR_mktag(2), base, 1) = V0_11;
          MR_hl_field(MR_mktag(2), base, 2) = NULL;
        }
        AddrT_17 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *AL_8, (MR_Integer) 2)));
        succeeded = mercury__version_hash_table__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_95_49_4_p_0(TypeInfo_for_K_14, T0_12, K_6, V_7, AddrT_17);
      }
    }
    else
    if (((MR_tag((MR_Word) AL0_5)) == (MR_Integer) 1))
    {
      MR_Box Var_16 = (MR_hl_field(MR_mktag(1), AL0_5, (MR_Integer) 0));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K_6, Var_16);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *AL_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K_6;
          MR_hl_field(MR_mktag(1), base, 1) = V_7;
        }
        succeeded = MR_TRUE;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word AL0_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * AddrOfAL_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) AL0_5)) == (MR_Integer) 2))
    {
      MR_Box K0_10 = (MR_hl_field(MR_mktag(2), AL0_5, (MR_Integer) 0));
      MR_Box V0_11 = (MR_hl_field(MR_mktag(2), AL0_5, (MR_Integer) 1));
      MR_Word T0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AL0_5, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K0_10, K_6);
      if (succeeded)
      {
        MR_Word AL_8;

        {
          AL_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), AL_8, 0) = K0_10;
          MR_hl_field(MR_mktag(2), AL_8, 1) = V_7;
          MR_hl_field(MR_mktag(2), AL_8, 2) = ((MR_Box) (T0_12));
        }
        *AddrOfAL_18 = AL_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word * AddrT_17;
        MR_Word AL_19;
        MR_Word next_value_of_AL0_5;
        MR_Word * next_value_of_AddrOfAL_18;

        {
          AL_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), AL_19, 0) = K0_10;
          MR_hl_field(MR_mktag(2), AL_19, 1) = V0_11;
          MR_hl_field(MR_mktag(2), AL_19, 2) = NULL;
        }
        AddrT_17 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), AL_19, (MR_Integer) 2)));
        *AddrOfAL_18 = AL_19;
        // direct tailcall eliminated
        ;
        next_value_of_AL0_5 = T0_12;
        next_value_of_AddrOfAL_18 = AddrT_17;
        AL0_5 = next_value_of_AL0_5;
        AddrOfAL_18 = next_value_of_AddrOfAL_18;
        continue;
      }
    }
    else
    if (((MR_tag((MR_Word) AL0_5)) == (MR_Integer) 1))
    {
      MR_Box Var_16 = (MR_hl_field(MR_mktag(1), AL0_5, (MR_Integer) 0));
      MR_Word AL_22;

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K_6, Var_16);
      if (succeeded)
      {
        {
          AL_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AL_22, 0) = K_6;
          MR_hl_field(MR_mktag(1), AL_22, 1) = V_7;
        }
        *AddrOfAL_18 = AL_22;
        succeeded = MR_TRUE;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
    break;
  }
}

static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Integer NumOccupants_6,
  MR_Integer MaxOccupants0_7,
  MR_Word HashPred0_8,
  MR_Box Buckets0_9)
{
  {
    MR_Word HT_10;
    MR_Word TypeInfo_24_24;
    MR_Integer NumBuckets0_11;
    MR_Integer NumBuckets_12;
    MR_Integer MaxOccupants_13;
    MR_Word HashPred_14;
    MR_Box Buckets1_15;
    MR_Box Buckets_16;
    MR_Box conv0_Buckets1_15;

    {
      TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_K_21));
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 2) = ((MR_Box) (TypeInfo_for_V_22));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Buckets0_9) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 NumBuckets0_11  = N;
}
    NumBuckets_12 = (MR_Integer) ((MR_Unsigned) NumBuckets0_11 + (MR_Unsigned) NumBuckets0_11);
    MaxOccupants_13 = (MR_Integer) ((MR_Unsigned) MaxOccupants0_7 + (MR_Unsigned) MaxOccupants0_7);
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 = HashPred0_8 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 HashPred_14  = HashPred;
}
    conv0_Buckets1_15 = mercury__version_array__init_2_f_0(TypeInfo_24_24, NumBuckets_12, ((MR_Box) ((MR_Unsigned) 0U)));
    Buckets1_15 = (MR_Box) (conv0_Buckets1_15);
    mercury__version_hash_table__reinsert_bindings_6_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, (MR_Integer) 0, Buckets0_9, HashPred_14, NumBuckets_12, Buckets1_15, &Buckets_16);
    {
      HT_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HT_10, 0) = ((MR_Box) (NumOccupants_6));
      MR_hl_field(MR_mktag(0), HT_10, 1) = ((MR_Box) (MaxOccupants_13));
      MR_hl_field(MR_mktag(0), HT_10, 2) = ((MR_Box) (HashPred_14));
      MR_hl_field(MR_mktag(0), HT_10, 3) = ((MR_Box) (Buckets_16));
    }
    return HT_10;
  }
}

static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Integer I_7,
  MR_Box OldBuckets_8,
  MR_Word HashPred_9,
  MR_Integer NumBuckets_10,
  MR_Box STATE_VARIABLE_Buckets_0_13,
  MR_Box * STATE_VARIABLE_Buckets_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_15;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__version_hash_table__reinsert_bindings_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (OldBuckets_8) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_15  = N;
}
    succeeded = (I_7 >= Var_15);
    if (succeeded)
      *STATE_VARIABLE_Buckets_14 = STATE_VARIABLE_Buckets_0_13;
    else
    {
      MR_Word TypeInfo_25_25;
      MR_Word AL_12;
      MR_Box STATE_VARIABLE_Buckets_16_16;
      MR_Integer Var_17;
      MR_Box conv0_AL_12;
      MR_Integer next_value_of_I_7;
      MR_Box next_value_of_STATE_VARIABLE_Buckets_0_13;

      {
        TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_25_25, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
        MR_hl_field(MR_mktag(0), TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_K_20));
        MR_hl_field(MR_mktag(0), TypeInfo_25_25, 2) = ((MR_Box) (TypeInfo_for_V_21));
      }
      conv0_AL_12 = mercury__version_array__lookup_2_f_0(TypeInfo_25_25, (MR_Box) (OldBuckets_8), I_7);
      AL_12 = ((MR_Word) (conv0_AL_12));
      mercury__version_hash_table__reinsert_alist_5_p_0(TypeInfo_for_K_20, TypeInfo_for_V_21, AL_12, HashPred_9, NumBuckets_10, STATE_VARIABLE_Buckets_0_13, &STATE_VARIABLE_Buckets_16_16);
      Var_17 = (MR_Integer) ((MR_Unsigned) I_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_7 = Var_17;
      next_value_of_STATE_VARIABLE_Buckets_0_13 = STATE_VARIABLE_Buckets_16_16;
      I_7 = next_value_of_I_7;
      STATE_VARIABLE_Buckets_0_13 = next_value_of_STATE_VARIABLE_Buckets_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word AL_6,
  MR_Word HashPred_7,
  MR_Integer NumBuckets_8,
  MR_Box STATE_VARIABLE_Buckets_0_13,
  MR_Box * STATE_VARIABLE_Buckets_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) AL_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Buckets_14 = STATE_VARIABLE_Buckets_0_13;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_24_67;
          MR_Box K_10 = (MR_hl_field(MR_mktag(1), AL_6, (MR_Integer) 0));
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), AL_6, (MR_Integer) 1));
          MR_Integer H_58;
          MR_Word AL0_59;
          MR_Word AL_60;
          MR_Integer Hash_72;
          MR_Integer Var_73;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_7, (MR_Integer) 1))));
          MR_Box conv5_Hash_72;
          MR_Box conv6_AL0_59;
          MR_Box conv7_STATE_VARIABLE_Buckets_14;

          func_4(((MR_Box) (HashPred_7)), K_10, &conv5_Hash_72);
          Hash_72 = ((MR_Integer) (conv5_Hash_72));
          Var_73 = (MR_Integer) ((MR_Unsigned) NumBuckets_8 - (MR_Unsigned) 1);
          H_58 = (Hash_72 & Var_73);
          {
            TypeInfo_24_67 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_24_67, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
            MR_hl_field(MR_mktag(0), TypeInfo_24_67, 1) = ((MR_Box) (TypeInfo_for_K_20));
            MR_hl_field(MR_mktag(0), TypeInfo_24_67, 2) = ((MR_Box) (TypeInfo_for_V_21));
          }
          conv6_AL0_59 = mercury__version_array__lookup_2_f_0(TypeInfo_24_67, (MR_Box) (STATE_VARIABLE_Buckets_0_13), H_58);
          AL0_59 = ((MR_Word) (conv6_AL0_59));
          switch (MR_tag((MR_Word) AL0_59)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              AL_60 = AL_6;
              break;
            case (MR_Integer) 1:
              {
                AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), AL_60, 0) = K_10;
                MR_hl_field(MR_mktag(2), AL_60, 1) = V_11;
                MR_hl_field(MR_mktag(2), AL_60, 2) = ((MR_Box) (AL0_59));
              }
              break;
            case (MR_Integer) 2:
              {
                AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), AL_60, 0) = K_10;
                MR_hl_field(MR_mktag(2), AL_60, 1) = V_11;
                MR_hl_field(MR_mktag(2), AL_60, 2) = ((MR_Box) (AL0_59));
              }
              break;
          }
          mercury__version_array__set_4_p_0(TypeInfo_24_67, H_58, ((MR_Box) (AL_60)), (MR_Box) (STATE_VARIABLE_Buckets_0_13), &conv7_STATE_VARIABLE_Buckets_14);
          *STATE_VARIABLE_Buckets_14 = (MR_Box) (conv7_STATE_VARIABLE_Buckets_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_24_37;
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AL_6, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_Buckets_15_15;
          MR_Box K_18 = (MR_hl_field(MR_mktag(2), AL_6, (MR_Integer) 0));
          MR_Box V_19 = (MR_hl_field(MR_mktag(2), AL_6, (MR_Integer) 1));
          MR_Integer H_28;
          MR_Word AL0_29;
          MR_Word AL_30;
          MR_Integer Hash_42;
          MR_Integer Var_43;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_7, (MR_Integer) 1))));
          MR_Box conv1_Hash_42;
          MR_Box conv2_AL0_29;
          MR_Box conv3_STATE_VARIABLE_Buckets_15_15;
          MR_Word next_value_of_AL_6;
          MR_Box next_value_of_STATE_VARIABLE_Buckets_0_13;

          func_0(((MR_Box) (HashPred_7)), K_18, &conv1_Hash_42);
          Hash_42 = ((MR_Integer) (conv1_Hash_42));
          Var_43 = (MR_Integer) ((MR_Unsigned) NumBuckets_8 - (MR_Unsigned) 1);
          H_28 = (Hash_42 & Var_43);
          {
            TypeInfo_24_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_24_37, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
            MR_hl_field(MR_mktag(0), TypeInfo_24_37, 1) = ((MR_Box) (TypeInfo_for_K_20));
            MR_hl_field(MR_mktag(0), TypeInfo_24_37, 2) = ((MR_Box) (TypeInfo_for_V_21));
          }
          conv2_AL0_29 = mercury__version_array__lookup_2_f_0(TypeInfo_24_37, (MR_Box) (STATE_VARIABLE_Buckets_0_13), H_28);
          AL0_29 = ((MR_Word) (conv2_AL0_29));
          switch (MR_tag((MR_Word) AL0_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                AL_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AL_30, 0) = K_18;
                MR_hl_field(MR_mktag(1), AL_30, 1) = V_19;
              }
              break;
            case (MR_Integer) 1:
              {
                AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), AL_30, 0) = K_18;
                MR_hl_field(MR_mktag(2), AL_30, 1) = V_19;
                MR_hl_field(MR_mktag(2), AL_30, 2) = ((MR_Box) (AL0_29));
              }
              break;
            case (MR_Integer) 2:
              {
                AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), AL_30, 0) = K_18;
                MR_hl_field(MR_mktag(2), AL_30, 1) = V_19;
                MR_hl_field(MR_mktag(2), AL_30, 2) = ((MR_Box) (AL0_29));
              }
              break;
          }
          mercury__version_array__set_4_p_0(TypeInfo_24_37, H_28, ((MR_Box) (AL_30)), (MR_Box) (STATE_VARIABLE_Buckets_0_13), &conv3_STATE_VARIABLE_Buckets_15_15);
          STATE_VARIABLE_Buckets_15_15 = (MR_Box) (conv3_STATE_VARIABLE_Buckets_15_15);
          // direct tailcall eliminated
          ;
          next_value_of_AL_6 = T_12;
          next_value_of_STATE_VARIABLE_Buckets_0_13 = STATE_VARIABLE_Buckets_15_15;
          AL_6 = next_value_of_AL_6;
          STATE_VARIABLE_Buckets_0_13 = next_value_of_STATE_VARIABLE_Buckets_0_13;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__version_hash_table__elem_2_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Box K_4,
  MR_Word HT_5)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__3_3;
    MR_Box V_10;

    succeeded = mercury__version_hash_table__search_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HT_5, K_4, &V_10);
    if (succeeded)
      HeadVar__3_3 = V_10;
    else
      HeadVar__3_3 = mercury__require__func_error_2_f_0(TypeInfo_for_V_7, (MR_String) "function \140version_hash_table.lookup\'/2", (MR_String) "key not found");
    return HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__version_hash_table__lookup_2_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HT_4,
  MR_Box K_5)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__3_3;
    MR_Box V_6;

    succeeded = mercury__version_hash_table__search_2_f_0(TypeInfo_for_K_9, TypeInfo_for_V_10, HT_4, K_5, &V_6);
    if (succeeded)
      HeadVar__3_3 = V_6;
    else
      HeadVar__3_3 = mercury__require__func_error_2_f_0(TypeInfo_for_V_10, (MR_String) "function \140version_hash_table.lookup\'/2", (MR_String) "key not found");
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__search_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HT_4,
  MR_Box K_5,
  MR_Box * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__version_hash_table__search_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HT_4, K_5, HeadVar__3_3);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__search_2_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HT_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_16_16;
    MR_Integer H_7;
    MR_Box Buckets_8;
    MR_Word AL_9;
    MR_Word HashPred0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 2))));
    MR_Word HashPred_21;
    MR_Integer Var_22;
    MR_Integer Hash_38;
    MR_Integer Var_39;
    MR_Box Var_28;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_38;
    MR_Box conv2_AL_9;

{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 = HashPred0_20 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 HashPred_21  = HashPred;
}
    Var_28 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 3))));
{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Var_28) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Var_22  = N;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_21, (MR_Integer) 1))));
    func_0(((MR_Box) (HashPred_21)), K_5, &conv1_Hash_38);
    Hash_38 = ((MR_Integer) (conv1_Hash_38));
    Var_39 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 1);
    H_7 = (Hash_38 & Var_39);
    Buckets_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 3))));
    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_K_13));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 2) = ((MR_Box) (TypeInfo_for_V_14));
    }
    conv2_AL_9 = mercury__version_array__lookup_2_f_0(TypeInfo_16_16, (MR_Box) (Buckets_8), H_7);
    AL_9 = ((MR_Word) (conv2_AL_9));
    succeeded = mercury__version_hash_table__alist_search_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, AL_9, K_5, V_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__alist_search_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word AL_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) AL_4)) == (MR_Integer) 2))
    {
      MR_Box HK_7 = (MR_hl_field(MR_mktag(2), AL_4, (MR_Integer) 0));
      MR_Box HV_8 = (MR_hl_field(MR_mktag(2), AL_4, (MR_Integer) 1));
      MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AL_4, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_10, HK_7, K_5);
      if (succeeded)
      {
        *V_6 = HV_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_AL_4 = T_9;

        // direct tailcall eliminated
        ;
        AL_4 = next_value_of_AL_4;
        continue;
      }
    }
    else
    if (((MR_tag((MR_Word) AL_4)) == (MR_Integer) 1))
    {
      MR_Box Var_12 = (MR_hl_field(MR_mktag(1), AL_4, (MR_Integer) 0));

      *V_6 = (MR_hl_field(MR_mktag(1), AL_4, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_10, K_5, Var_12);
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__copy_1_f_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HT0_3)
{
  {
    MR_Word HT_4;
    MR_Word TypeInfo_13_13;
    MR_Integer NumOccupants_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_3, (MR_Integer) 0))));
    MR_Integer MaxOccupants_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_3, (MR_Integer) 1))));
    MR_Word HashPred_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_3, (MR_Integer) 2))));
    MR_Box Buckets0_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT0_3, (MR_Integer) 3))));
    MR_Box Buckets_9;
    MR_Box conv0_Buckets_9;

    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_K_10));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_for_V_11));
    }
    conv0_Buckets_9 = mercury__version_array__copy_1_f_0(TypeInfo_13_13, (MR_Box) (Buckets0_8));
    Buckets_9 = (MR_Box) (conv0_Buckets_9);
    {
      HT_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HT_4, 0) = ((MR_Box) (NumOccupants_5));
      MR_hl_field(MR_mktag(0), HT_4, 1) = ((MR_Box) (MaxOccupants_6));
      MR_hl_field(MR_mktag(0), HT_4, 2) = ((MR_Box) (HashPred_7));
      MR_hl_field(MR_mktag(0), HT_4, 3) = ((MR_Box) (Buckets_9));
    }
    return HT_4;
  }
}

void MR_CALL 
mercury__version_hash_table__generic_hash_2_p_0(
  MR_Word TypeInfo_for_T_38,
  MR_Box T_3,
  MR_Integer * H_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Int_5;
    MR_Box conv0_Int_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_38, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), T_3, &conv0_Int_5);
    if (succeeded)
    {
      Int_5 = ((MR_Integer) (conv0_Int_5));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Unsigned Var_58;

{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = Int_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_58  = U;
}
      *H_4 = mercury__uint__hash_1_f_0(Var_58);
    }
    else
    {
      MR_String String_6;
      MR_Box conv1_String_6;

      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_38, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), T_3, &conv1_String_6);
      if (succeeded)
      {
        String_6 = ((MR_String) (conv1_String_6));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__string__hash_2_p_0(String_6, H_4);
      else
      {
        MR_Float Float_7;
        MR_Box conv2_Float_7;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_38, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), T_3, &conv2_Float_7);
        if (succeeded)
        {
          Float_7 = MR_unbox_float(conv2_Float_7);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F = Float_7 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 *H_4  = H;
}
        }
        else
        {
          MR_Char Char_8;
          MR_Box conv3_Char_8;

          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_38, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), T_3, &conv3_Char_8);
          if (succeeded)
          {
            Char_8 = ((MR_Char) (MR_Word) conv3_Char_8);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Unsigned Var_77;
            MR_Integer Var_78;

{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_8 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_78  = Int;
}
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = Var_78 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_77  = U;
}
            *H_4 = mercury__uint__hash_1_f_0(Var_77);
          }
          else
          {
            MR_Word Univ_9;
            MR_Box conv4_Univ_9;

            succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_38, (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), T_3, &conv4_Univ_9);
            if (succeeded)
            {
              Univ_9 = ((MR_Word) (conv4_Univ_9));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word TypeInfo_44_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
              MR_Box Var_23 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
              MR_Word next_value_of_TypeInfo_for_T_38 = TypeInfo_44_44;
              MR_Box next_value_of_T_3 = Var_23;

              // direct tailcall eliminated
              ;
              TypeInfo_for_T_38 = next_value_of_TypeInfo_for_T_38;
              T_3 = next_value_of_T_3;
              continue;
            }
            else
            {
              MR_Word TypeInfo_45_45;
              MR_ArrayPtr Array_10;
              MR_ArrayPtr conv5_Array_10;

              succeeded = mercury__array__dynamic_cast_to_array_2_p_0(TypeInfo_for_T_38, &TypeInfo_45_45, T_3, &conv5_Array_10);
              if (succeeded)
              {
                Array_10 = (MR_ArrayPtr) (conv5_Array_10);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Integer Var_90;
                MR_Integer Var_91;

                Var_90 = mercury__array__min_1_f_0(TypeInfo_45_45, (MR_ArrayPtr) (Array_10));
                Var_91 = mercury__array__max_1_f_0(TypeInfo_45_45, (MR_ArrayPtr) (Array_10));
                *H_4 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(TypeInfo_45_45, Array_10, (MR_Integer) 0, Var_90, Var_91);
              }
              else
              {
                MR_String FunctorName_16;
                MR_Integer Arity_17;
                MR_Word Args_18;
                MR_Integer H0_19;
                MR_Integer H1_20;

                mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_38, T_3, (MR_Integer) 1, &FunctorName_16, &Arity_17, &Args_18);
                mercury__string__hash_2_p_0(FunctorName_16, &H0_19);
                H1_20 = mercury__version_hash_table__munge_2_f_0(Arity_17, H0_19);
                mercury__version_hash_table__foldl__ho13_4_p_in__list_0(Args_18, H1_20, H_4);
              }
            }
          }
        }
      }
    }
    break;
  }
}

static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__5_11 < HeadVar__4_10);
    MR_Integer HeadVar__6_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__6_12 = HeadVar__3_9;
    else
    {
      MR_Integer Var_13;
      MR_Integer Var_14;
      MR_Box Var_15;
      MR_Integer HX_37;
      MR_Integer Var_70;
      MR_Integer Var_71;
      MR_Integer Var_72;
      MR_Integer Var_73;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Integer next_value_of_HeadVar__4_10;

{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__4_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 Var_15  = (MR_Box) Item;
}
      mercury__version_hash_table__generic_hash_2_p_0(Var_19, Var_15, &HX_37);
      Var_70 = (HeadVar__3_9 << HX_37);
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_73  = Bits;
}
      Var_72 = (MR_Integer) ((MR_Unsigned) Var_73 - (MR_Unsigned) HX_37);
      Var_71 = (HeadVar__3_9 >> Var_72);
      Var_13 = (Var_70 ^ Var_71);
      Var_14 = (MR_Integer) ((MR_Unsigned) HeadVar__4_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      next_value_of_HeadVar__4_10 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__4_10 = next_value_of_HeadVar__4_10;
      continue;
    }
    return HeadVar__6_12;
    break;
  }
}

static void MR_CALL 
mercury__version_hash_table__foldl__ho13_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_13;
      MR_Integer HUA_37;
      MR_Integer Var_64;
      MR_Integer Var_65;
      MR_Integer Var_66;
      MR_Integer Var_67;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

      mercury__version_hash_table__generic_hash_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), ((MR_Box) (Var_9)), &HUA_37);
      Var_64 = (HeadVar__3_3 << HUA_37);
{
#define MR_PROC_LABEL mercury__version_hash_table__foldl__ho13_4_p_in__list_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_67  = Bits;
}
      Var_66 = (MR_Integer) ((MR_Unsigned) Var_67 - (MR_Unsigned) HUA_37);
      Var_65 = (HeadVar__3_3 >> Var_66);
      Var_13 = (Var_64 ^ Var_65);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static MR_Integer MR_CALL 
mercury__version_hash_table__munge_2_f_0(
  MR_Integer N_4,
  MR_Integer X_5)
{
  {
    MR_Integer HeadVar__3_3;
    MR_Integer Var_6 = (X_5 << N_4);
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__version_hash_table__munge_2_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_9  = Bits;
}
    Var_8 = (MR_Integer) ((MR_Unsigned) Var_9 - (MR_Unsigned) N_4);
    Var_7 = (X_5 >> Var_8);
    HeadVar__3_3 = (Var_6 ^ Var_7);
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__version_hash_table__float_hash_2_p_0(
  MR_Float F_3,
  MR_Integer * H_4)
{
  {
{
#define MR_PROC_LABEL mercury__version_hash_table__float_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F = F_3 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 *H_4  = H;
}
  }
}

void MR_CALL 
mercury__version_hash_table__string_hash_2_p_0(
  MR_String S_3,
  MR_Integer * H_4)
{
  mercury__string__hash_2_p_0(S_3, H_4);
}

void MR_CALL 
mercury__version_hash_table__char_hash_2_p_0(
  MR_Char C_3,
  MR_Integer * H_4)
{
  {
    MR_Unsigned Var_9;
    MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = C_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_10  = Int;
}
{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = Var_10 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_9  = U;
}
    *H_4 = mercury__uint__hash_1_f_0(Var_9);
  }
}

void MR_CALL 
mercury__version_hash_table__uint_hash_2_p_0(
  MR_Unsigned Key_3,
  MR_Integer * Hash_4)
{
  *Hash_4 = mercury__uint__hash_1_f_0(Key_3);
}

void MR_CALL 
mercury__version_hash_table__int_hash_2_p_0(
  MR_Integer Key_3,
  MR_Integer * Hash_4)
{
  {
    MR_Unsigned Var_9;

{
#define MR_PROC_LABEL mercury__version_hash_table__int_hash_2_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = Key_3 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_9  = U;
}
    *Hash_4 = mercury__uint__hash_1_f_0(Var_9);
  }
}

MR_Integer MR_CALL 
mercury__version_hash_table__num_occupants_1_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HT_3)
{
  {
    MR_Integer NumOccupants_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 0))));

    return NumOccupants_4;
  }
}

MR_Integer MR_CALL 
mercury__version_hash_table__num_buckets_1_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HT_3)
{
  {
    MR_Integer NumBuckets_4;
    MR_Box Var_5 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 3))));

{
#define MR_PROC_LABEL mercury__version_hash_table__num_buckets_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) (Var_5) , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 NumBuckets_4  = N;
}
    return NumBuckets_4;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__unsafe_init_default_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HashPred_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HashPred_3, (MR_Integer) 7, (MR_Float) 0.87500000000000000, (MR_Integer) 0);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__init_default_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HashPred_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HashPred_3, (MR_Integer) 7, (MR_Float) 0.87500000000000000, (MR_Integer) 1);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__unsafe_init_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HashPred_5,
  MR_Integer N_6,
  MR_Float MaxOccupancy_7)
{
  {
    MR_Word HeadVar__4_4;

    HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(TypeInfo_for_K_9, TypeInfo_for_V_10, HashPred_5, N_6, MaxOccupancy_7, (MR_Integer) 0);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__init_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HashPred_5,
  MR_Integer N_6,
  MR_Float MaxOccupancy_7)
{
  {
    MR_Word HeadVar__4_4;

    HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(TypeInfo_for_K_9, TypeInfo_for_V_10, HashPred_5, N_6, MaxOccupancy_7, (MR_Integer) 1);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__init_2_4_f_0(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word HashPred_6,
  MR_Integer N_7,
  MR_Float MaxOccupancy_8,
  MR_Word NeedSafety_9)
{
  {
    MR_bool succeeded = (N_7 <= (MR_Integer) 0);
    MR_Word HT_10;

    if (succeeded)
      mercury__require__error_1_p_0((MR_String) "version_hash_table.init: N =< 0");
    else
    {
      MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_16  = Bits;
}
      succeeded = (N_7 >= Var_16);
      if (succeeded)
        mercury__require__error_1_p_0((MR_String) "version_hash_table.init: N >= int.bits_per_int");
      else
      {
        succeeded = (MaxOccupancy_8 <= ((MR_Float) 0.0000000000000000));
        if (succeeded)
          mercury__require__error_1_p_0((MR_String) "version_hash_table.init: MaxOccupancy =< 0.0");
        else
        {
          MR_Integer NumBuckets_11;
          MR_Integer MaxOccupants_12;
          MR_Box Buckets_13;
          MR_Float Var_21;
          MR_Float Var_22;

          NumBuckets_11 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, N_7);
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal = NumBuckets_11 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 Var_22  = FloatVal;
}
          Var_21 = (Var_22 * MaxOccupancy_8);
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Float X;
	MR_Integer Ceil;

	X = Var_21 ;
		{

    Ceil = (MR_Integer) ML_FLOAT_CEIL(X);


		;}
#undef MR_PROC_LABEL
	 MaxOccupants_12  = Ceil;
}
          switch (NeedSafety_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_31_31;
                MR_Box conv0_Buckets_13;

                {
                  TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
                  MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_K_26));
                  MR_hl_field(MR_mktag(0), TypeInfo_31_31, 2) = ((MR_Box) (TypeInfo_for_V_27));
                }
                conv0_Buckets_13 = mercury__version_array__unsafe_init_2_f_0(TypeInfo_31_31, NumBuckets_11, ((MR_Box) ((MR_Unsigned) 0U)));
                Buckets_13 = (MR_Box) (conv0_Buckets_13);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_29_29;
                MR_Box conv1_Buckets_13;

                {
                  TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2));
                  MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_K_26));
                  MR_hl_field(MR_mktag(0), TypeInfo_29_29, 2) = ((MR_Box) (TypeInfo_for_V_27));
                }
                conv1_Buckets_13 = mercury__version_array__init_2_f_0(TypeInfo_29_29, NumBuckets_11, ((MR_Box) ((MR_Unsigned) 0U)));
                Buckets_13 = (MR_Box) (conv1_Buckets_13);
              }
              break;
          }
          {
            HT_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HT_10, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), HT_10, 1) = ((MR_Box) (MaxOccupants_12));
            MR_hl_field(MR_mktag(0), HT_10, 2) = ((MR_Box) (HashPred_6));
            MR_hl_field(MR_mktag(0), HT_10, 3) = ((MR_Box) (Buckets_13));
          }
        }
      }
    }
    return HT_10;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__version_hash_table____Unify____buckets_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)), ((MR_Box) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__version_hash_table____Compare____buckets_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_4)), ((MR_Box) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__version_hash_table____Unify____hash_pred_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__version_hash_table____Compare____hash_pred_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__version_hash_table____Unify____hash_table_alist_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__version_hash_table____Compare____hash_table_alist_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__version_hash_table____Unify____version_hash_table_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__version_hash_table____Compare____version_hash_table_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__version_hash_table__init(void)
{
}

void mercury__version_hash_table__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_buckets_2);
	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_pred_1);
	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2);
	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2);
}

void mercury__version_hash_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__version_hash_table__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module version_hash_table.
